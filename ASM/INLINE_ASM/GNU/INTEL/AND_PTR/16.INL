#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define AND_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X06 # andb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X1E # andb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X0E # andb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X16 # andb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define AND_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X06 # andb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X1E # andb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X0E # andb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X16 # andb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define AND_AL_FROM_PTR_BX CMT_ASM(".byte 0X22, 0X07 # andb (%bx), %al")
#define AND_AL_FROM_PTR_BP CMT_ASM(".byte 0X22, 0X46, 0X00 # andb (%bp), %al")
#define AND_AL_FROM_PTR_SI CMT_ASM(".byte 0X22, 0X04 # andb (%si), %al")
#define AND_AL_FROM_PTR_DI CMT_ASM(".byte 0X22, 0X05 # andb (%di), %al")

#define AND_BL_FROM_PTR_BX CMT_ASM(".byte 0X22, 0X1F # andb (%bx), %bl")
#define AND_BL_FROM_PTR_BP CMT_ASM(".byte 0X22, 0X5E, 0X00 # andb (%bp), %bl")
#define AND_BL_FROM_PTR_SI CMT_ASM(".byte 0X22, 0X1C # andb (%si), %bl")
#define AND_BL_FROM_PTR_DI CMT_ASM(".byte 0X22, 0X1D # andb (%di), %bl")

#define AND_CL_FROM_PTR_BX CMT_ASM(".byte 0X22, 0X0F # andb (%bx), %cl")
#define AND_CL_FROM_PTR_BP CMT_ASM(".byte 0X22, 0X4E, 0X00 # andb (%bp), %cl")
#define AND_CL_FROM_PTR_SI CMT_ASM(".byte 0X22, 0X0C # andb (%si), %cl")
#define AND_CL_FROM_PTR_DI CMT_ASM(".byte 0X22, 0X0D # andb (%di), %cl")

#define AND_DL_FROM_PTR_BX CMT_ASM(".byte 0X22, 0X17 # andb (%bx), %dl")
#define AND_DL_FROM_PTR_BP CMT_ASM(".byte 0X22, 0X56, 0X00 # andb (%bp), %dl")
#define AND_DL_FROM_PTR_SI CMT_ASM(".byte 0X22, 0X14 # andb (%si), %dl")
#define AND_DL_FROM_PTR_DI CMT_ASM(".byte 0X22, 0X15 # andb (%di), %dl")

#define AND_AL_TO_PTR_BX CMT_ASM(".byte 0X20, 0X07 # andb %al, (%bx)")
#define AND_AL_TO_PTR_BP CMT_ASM(".byte 0X20, 0X46, 0X00 # andb %al, (%bp)")
#define AND_AL_TO_PTR_SI CMT_ASM(".byte 0X20, 0X04 # andb %al, (%si)")
#define AND_AL_TO_PTR_DI CMT_ASM(".byte 0X20, 0X05 # andb %al, (%di)")

#define AND_BL_TO_PTR_BX CMT_ASM(".byte 0X20, 0X1F # andb %bl, (%bx)")
#define AND_BL_TO_PTR_BP CMT_ASM(".byte 0X20, 0X5E, 0X00 # andb %bl, (%bp)")
#define AND_BL_TO_PTR_SI CMT_ASM(".byte 0X20, 0X1C # andb %bl, (%si)")
#define AND_BL_TO_PTR_DI CMT_ASM(".byte 0X20, 0X1D # andb %bl, (%di)")

#define AND_CL_TO_PTR_BX CMT_ASM(".byte 0X20, 0X0F # andb %cl, (%bx)")
#define AND_CL_TO_PTR_BP CMT_ASM(".byte 0X20, 0X4E, 0X00 # andb %cl, (%bp)")
#define AND_CL_TO_PTR_SI CMT_ASM(".byte 0X20, 0X0C # andb %cl, (%si)")
#define AND_CL_TO_PTR_DI CMT_ASM(".byte 0X20, 0X0D # andb %cl, (%di)")

#define AND_DL_TO_PTR_BX CMT_ASM(".byte 0X20, 0X17 # andb %dl, (%bx)")
#define AND_DL_TO_PTR_BP CMT_ASM(".byte 0X20, 0X56, 0X00 # andb %dl, (%bp)")
#define AND_DL_TO_PTR_SI CMT_ASM(".byte 0X20, 0X14 # andb %dl, (%si)")
#define AND_DL_TO_PTR_DI CMT_ASM(".byte 0X20, 0X15 # andb %dl, (%di)")

#define AND_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X87 # andb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X86 # andb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X84 # andb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X85 # andb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define AND_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9F # andb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9E # andb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9C # andb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9D # andb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define AND_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8F # andb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8E # andb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8C # andb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8D # andb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define AND_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X97 # andb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X96 # andb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X94 # andb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X95 # andb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define AND_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X87 # andb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X86 # andb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X84 # andb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X85 # andb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9F # andb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9E # andb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9C # andb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9D # andb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8F # andb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8E # andb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8C # andb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8D # andb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X97 # andb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X96 # andb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X94 # andb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X95 # andb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X05 # andb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X1D # andb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X0D # andb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X15 # andb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define AND_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X05 # andb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X1D # andb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X0D # andb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X15 # andb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_AL_FROM_PTR_EAX CMT_ASM(".byte 0X22, 0X00 # andb (%eax), %al")
#define AND_AL_FROM_PTR_EBX CMT_ASM(".byte 0X22, 0X03 # andb (%ebx), %al")
#define AND_AL_FROM_PTR_ECX CMT_ASM(".byte 0X22, 0X01 # andb (%ecx), %al")
#define AND_AL_FROM_PTR_EDX CMT_ASM(".byte 0X22, 0X02 # andb (%edx), %al")
#define AND_AL_FROM_PTR_EDI CMT_ASM(".byte 0X22, 0X07 # andb (%edi), %al")
#define AND_AL_FROM_PTR_ESI CMT_ASM(".byte 0X22, 0X06 # andb (%esi), %al")
#define AND_AL_FROM_PTR_EBP CMT_ASM(".byte 0X22, 0X45, 0X00 # andb (%ebp), %al")
#define AND_AL_FROM_PTR_ESP CMT_ASM(".byte 0X22, 0X04, 0X24 # andb (%esp), %al")
#define AND_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X22, 0X07 # andb (%bx), %al")
#define AND_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X22, 0X46, 0X00 # andb (%bp), %al")
#define AND_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X22, 0X04 # andb (%si), %al")
#define AND_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X22, 0X05 # andb (%di), %al")

#define AND_BL_FROM_PTR_EAX CMT_ASM(".byte 0X22, 0X18 # andb (%eax), %bl")
#define AND_BL_FROM_PTR_EBX CMT_ASM(".byte 0X22, 0X1B # andb (%ebx), %bl")
#define AND_BL_FROM_PTR_ECX CMT_ASM(".byte 0X22, 0X19 # andb (%ecx), %bl")
#define AND_BL_FROM_PTR_EDX CMT_ASM(".byte 0X22, 0X1A # andb (%edx), %bl")
#define AND_BL_FROM_PTR_EDI CMT_ASM(".byte 0X22, 0X1F # andb (%edi), %bl")
#define AND_BL_FROM_PTR_ESI CMT_ASM(".byte 0X22, 0X1E # andb (%esi), %bl")
#define AND_BL_FROM_PTR_EBP CMT_ASM(".byte 0X22, 0X5D, 0X00 # andb (%ebp), %bl")
#define AND_BL_FROM_PTR_ESP CMT_ASM(".byte 0X22, 0X1C, 0X24 # andb (%esp), %bl")
#define AND_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X22, 0X1F # andb (%bx), %bl")
#define AND_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X22, 0X5E, 0X00 # andb (%bp), %bl")
#define AND_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X22, 0X1C # andb (%si), %bl")
#define AND_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X22, 0X1D # andb (%di), %bl")

#define AND_CL_FROM_PTR_EAX CMT_ASM(".byte 0X22, 0X08 # andb (%eax), %cl")
#define AND_CL_FROM_PTR_EBX CMT_ASM(".byte 0X22, 0X0B # andb (%ebx), %cl")
#define AND_CL_FROM_PTR_ECX CMT_ASM(".byte 0X22, 0X09 # andb (%ecx), %cl")
#define AND_CL_FROM_PTR_EDX CMT_ASM(".byte 0X22, 0X0A # andb (%edx), %cl")
#define AND_CL_FROM_PTR_EDI CMT_ASM(".byte 0X22, 0X0F # andb (%edi), %cl")
#define AND_CL_FROM_PTR_ESI CMT_ASM(".byte 0X22, 0X0E # andb (%esi), %cl")
#define AND_CL_FROM_PTR_EBP CMT_ASM(".byte 0X22, 0X4D, 0X00 # andb (%ebp), %cl")
#define AND_CL_FROM_PTR_ESP CMT_ASM(".byte 0X22, 0X0C, 0X24 # andb (%esp), %cl")
#define AND_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X22, 0X0F # andb (%bx), %cl")
#define AND_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X22, 0X4E, 0X00 # andb (%bp), %cl")
#define AND_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X22, 0X0C # andb (%si), %cl")
#define AND_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X22, 0X0D # andb (%di), %cl")

#define AND_DL_FROM_PTR_EAX CMT_ASM(".byte 0X22, 0X10 # andb (%eax), %dl")
#define AND_DL_FROM_PTR_EBX CMT_ASM(".byte 0X22, 0X13 # andb (%ebx), %dl")
#define AND_DL_FROM_PTR_ECX CMT_ASM(".byte 0X22, 0X11 # andb (%ecx), %dl")
#define AND_DL_FROM_PTR_EDX CMT_ASM(".byte 0X22, 0X12 # andb (%edx), %dl")
#define AND_DL_FROM_PTR_EDI CMT_ASM(".byte 0X22, 0X17 # andb (%edi), %dl")
#define AND_DL_FROM_PTR_ESI CMT_ASM(".byte 0X22, 0X16 # andb (%esi), %dl")
#define AND_DL_FROM_PTR_EBP CMT_ASM(".byte 0X22, 0X55, 0X00 # andb (%ebp), %dl")
#define AND_DL_FROM_PTR_ESP CMT_ASM(".byte 0X22, 0X14, 0X24 # andb (%esp), %dl")
#define AND_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X22, 0X17 # andb (%bx), %dl")
#define AND_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X22, 0X56, 0X00 # andb (%bp), %dl")
#define AND_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X22, 0X14 # andb (%si), %dl")
#define AND_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X22, 0X15 # andb (%di), %dl")

#define AND_AL_TO_PTR_EAX CMT_ASM(".byte 0X20, 0X00 # andb %al, (%eax)")
#define AND_AL_TO_PTR_EBX CMT_ASM(".byte 0X20, 0X03 # andb %al, (%ebx)")
#define AND_AL_TO_PTR_ECX CMT_ASM(".byte 0X20, 0X01 # andb %al, (%ecx)")
#define AND_AL_TO_PTR_EDX CMT_ASM(".byte 0X20, 0X02 # andb %al, (%edx)")
#define AND_AL_TO_PTR_EDI CMT_ASM(".byte 0X20, 0X07 # andb %al, (%edi)")
#define AND_AL_TO_PTR_ESI CMT_ASM(".byte 0X20, 0X06 # andb %al, (%esi)")
#define AND_AL_TO_PTR_EBP CMT_ASM(".byte 0X20, 0X45, 0X00 # andb %al, (%ebp)")
#define AND_AL_TO_PTR_ESP CMT_ASM(".byte 0X20, 0X04, 0X24 # andb %al, (%esp)")
#define AND_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X20, 0X07 # andb %al, (%bx)")
#define AND_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X20, 0X46, 0X00 # andb %al, (%bp)")
#define AND_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X20, 0X04 # andb %al, (%si)")
#define AND_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X20, 0X05 # andb %al, (%di)")

#define AND_BL_TO_PTR_EAX CMT_ASM(".byte 0X20, 0X18 # andb %bl, (%eax)")
#define AND_BL_TO_PTR_EBX CMT_ASM(".byte 0X20, 0X1B # andb %bl, (%ebx)")
#define AND_BL_TO_PTR_ECX CMT_ASM(".byte 0X20, 0X19 # andb %bl, (%ecx)")
#define AND_BL_TO_PTR_EDX CMT_ASM(".byte 0X20, 0X1A # andb %bl, (%edx)")
#define AND_BL_TO_PTR_EDI CMT_ASM(".byte 0X20, 0X1F # andb %bl, (%edi)")
#define AND_BL_TO_PTR_ESI CMT_ASM(".byte 0X20, 0X1E # andb %bl, (%esi)")
#define AND_BL_TO_PTR_EBP CMT_ASM(".byte 0X20, 0X5D, 0X00 # andb %bl, (%ebp)")
#define AND_BL_TO_PTR_ESP CMT_ASM(".byte 0X20, 0X1C, 0X24 # andb %bl, (%esp)")
#define AND_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X20, 0X1F # andb %bl, (%bx)")
#define AND_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X20, 0X5E, 0X00 # andb %bl, (%bp)")
#define AND_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X20, 0X1C # andb %bl, (%si)")
#define AND_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X20, 0X1D # andb %bl, (%di)")

#define AND_CL_TO_PTR_EAX CMT_ASM(".byte 0X20, 0X08 # andb %cl, (%eax)")
#define AND_CL_TO_PTR_EBX CMT_ASM(".byte 0X20, 0X0B # andb %cl, (%ebx)")
#define AND_CL_TO_PTR_ECX CMT_ASM(".byte 0X20, 0X09 # andb %cl, (%ecx)")
#define AND_CL_TO_PTR_EDX CMT_ASM(".byte 0X20, 0X0A # andb %cl, (%edx)")
#define AND_CL_TO_PTR_EDI CMT_ASM(".byte 0X20, 0X0F # andb %cl, (%edi)")
#define AND_CL_TO_PTR_ESI CMT_ASM(".byte 0X20, 0X0E # andb %cl, (%esi)")
#define AND_CL_TO_PTR_EBP CMT_ASM(".byte 0X20, 0X4D, 0X00 # andb %cl, (%ebp)")
#define AND_CL_TO_PTR_ESP CMT_ASM(".byte 0X20, 0X0C, 0X24 # andb %cl, (%esp)")
#define AND_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X20, 0X0F # andb %cl, (%bx)")
#define AND_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X20, 0X4E, 0X00 # andb %cl, (%bp)")
#define AND_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X20, 0X0C # andb %cl, (%si)")
#define AND_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X20, 0X0D # andb %cl, (%di)")

#define AND_DL_TO_PTR_EAX CMT_ASM(".byte 0X20, 0X10 # andb %dl, (%eax)")
#define AND_DL_TO_PTR_EBX CMT_ASM(".byte 0X20, 0X13 # andb %dl, (%ebx)")
#define AND_DL_TO_PTR_ECX CMT_ASM(".byte 0X20, 0X11 # andb %dl, (%ecx)")
#define AND_DL_TO_PTR_EDX CMT_ASM(".byte 0X20, 0X12 # andb %dl, (%edx)")
#define AND_DL_TO_PTR_EDI CMT_ASM(".byte 0X20, 0X17 # andb %dl, (%edi)")
#define AND_DL_TO_PTR_ESI CMT_ASM(".byte 0X20, 0X16 # andb %dl, (%esi)")
#define AND_DL_TO_PTR_EBP CMT_ASM(".byte 0X20, 0X55, 0X00 # andb %dl, (%ebp)")
#define AND_DL_TO_PTR_ESP CMT_ASM(".byte 0X20, 0X14, 0X24 # andb %dl, (%esp)")
#define AND_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X20, 0X17 # andb %dl, (%bx)")
#define AND_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X20, 0X56, 0X00 # andb %dl, (%bp)")
#define AND_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X20, 0X14 # andb %dl, (%si)")
#define AND_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X20, 0X15 # andb %dl, (%di)")

#define AND_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X80 # andb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X83 # andb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X81 # andb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X82 # andb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X87 # andb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X86 # andb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X85 # andb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X84, 0X24 # andb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X87 # andb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X86 # andb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X84 # andb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X85 # andb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define AND_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X98 # andb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9B # andb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X99 # andb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9A # andb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9F # andb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9E # andb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9D # andb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9F # andb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9E # andb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9C # andb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9D # andb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define AND_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X88 # andb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8B # andb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X89 # andb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8A # andb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8F # andb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8E # andb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8D # andb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8F # andb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8E # andb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8C # andb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8D # andb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define AND_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X90 # andb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X93 # andb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X91 # andb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X92 # andb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X97 # andb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X96 # andb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X95 # andb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X94, 0X24 # andb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X97 # andb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X96 # andb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X94 # andb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X95 # andb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define AND_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X80 # andb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X83 # andb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X81 # andb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X82 # andb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X87 # andb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X86 # andb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X85 # andb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X84, 0X24 # andb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X87 # andb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X86 # andb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X84 # andb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X85 # andb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X98 # andb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9B # andb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X99 # andb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9A # andb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9F # andb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9E # andb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9D # andb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9C, 0X24 # andb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9F # andb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9E # andb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9C # andb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9D # andb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X88 # andb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8B # andb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X89 # andb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8A # andb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8F # andb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8E # andb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8D # andb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8C, 0X24 # andb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8F # andb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8E # andb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8C # andb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8D # andb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X90 # andb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X93 # andb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X91 # andb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X92 # andb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X97 # andb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X96 # andb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X95 # andb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X94, 0X24 # andb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X97 # andb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X96 # andb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X94 # andb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X95 # andb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X04, 0X25 # andb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X1C, 0X25 # andb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X0C, 0X25 # andb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X22, 0X14, 0X25 # andb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0X3C, 0X25 # andb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0X34, 0X25 # andb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0X2C, 0X25 # andb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0X24, 0X25 # andb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X04, 0X25 # andb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X0C, 0X25 # andb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X14, 0X25 # andb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X1C, 0X25 # andb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X24, 0X25 # andb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X2C, 0X25 # andb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X34, 0X25 # andb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X3C, 0X25 # andb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define AND_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X04, 0X25 # andb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X1C, 0X25 # andb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X0C, 0X25 # andb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X20, 0X14, 0X25 # andb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0X3C, 0X25 # andb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0X34, 0X25 # andb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0X2C, 0X25 # andb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0X24, 0X25 # andb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X04, 0X25 # andb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X0C, 0X25 # andb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X14, 0X25 # andb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X1C, 0X25 # andb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X24, 0X25 # andb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X2C, 0X25 # andb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X34, 0X25 # andb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X3C, 0X25 # andb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_AL_FROM_PTR_RAX CMT_ASM(".byte 0X22, 0X00 # andb (%rax), %al")
#define AND_AL_FROM_PTR_RBX CMT_ASM(".byte 0X22, 0X03 # andb (%rbx), %al")
#define AND_AL_FROM_PTR_RCX CMT_ASM(".byte 0X22, 0X01 # andb (%rcx), %al")
#define AND_AL_FROM_PTR_RDX CMT_ASM(".byte 0X22, 0X02 # andb (%rdx), %al")
#define AND_AL_FROM_PTR_RDI CMT_ASM(".byte 0X22, 0X07 # andb (%rdi), %al")
#define AND_AL_FROM_PTR_RSI CMT_ASM(".byte 0X22, 0X06 # andb (%rsi), %al")
#define AND_AL_FROM_PTR_RBP CMT_ASM(".byte 0X22, 0X45, 0X00 # andb (%rbp), %al")
#define AND_AL_FROM_PTR_RSP CMT_ASM(".byte 0X22, 0X04, 0X24 # andb (%rsp), %al")
#define AND_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X00 # andb (%r8), %al")
#define AND_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X01 # andb (%r9), %al")
#define AND_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X02 # andb (%r10), %al")
#define AND_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X03 # andb (%r11), %al")
#define AND_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X04, 0X24 # andb (%r12), %al")
#define AND_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X45, 0X00 # andb (%r13), %al")
#define AND_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X06 # andb (%r14), %al")
#define AND_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X07 # andb (%r15), %al")
#define AND_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X22, 0X00 # andb (%eax), %al")
#define AND_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X22, 0X03 # andb (%ebx), %al")
#define AND_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X22, 0X01 # andb (%ecx), %al")
#define AND_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X22, 0X02 # andb (%edx), %al")
#define AND_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X22, 0X07 # andb (%edi), %al")
#define AND_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X22, 0X06 # andb (%esi), %al")
#define AND_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X22, 0X45, 0X00 # andb (%ebp), %al")
#define AND_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X22, 0X04, 0X24 # andb (%esp), %al")

#define AND_BL_FROM_PTR_RAX CMT_ASM(".byte 0X22, 0X18 # andb (%rax), %bl")
#define AND_BL_FROM_PTR_RBX CMT_ASM(".byte 0X22, 0X1B # andb (%rbx), %bl")
#define AND_BL_FROM_PTR_RCX CMT_ASM(".byte 0X22, 0X19 # andb (%rcx), %bl")
#define AND_BL_FROM_PTR_RDX CMT_ASM(".byte 0X22, 0X1A # andb (%rdx), %bl")
#define AND_BL_FROM_PTR_RDI CMT_ASM(".byte 0X22, 0X1F # andb (%rdi), %bl")
#define AND_BL_FROM_PTR_RSI CMT_ASM(".byte 0X22, 0X1E # andb (%rsi), %bl")
#define AND_BL_FROM_PTR_RBP CMT_ASM(".byte 0X22, 0X5D, 0X00 # andb (%rbp), %bl")
#define AND_BL_FROM_PTR_RSP CMT_ASM(".byte 0X22, 0X1C, 0X24 # andb (%rsp), %bl")
#define AND_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X18 # andb (%r8), %bl")
#define AND_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X19 # andb (%r9), %bl")
#define AND_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X1A # andb (%r10), %bl")
#define AND_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X1B # andb (%r11), %bl")
#define AND_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X1C, 0X24 # andb (%r12), %bl")
#define AND_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X5D, 0X00 # andb (%r13), %bl")
#define AND_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X1E # andb (%r14), %bl")
#define AND_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X1F # andb (%r15), %bl")
#define AND_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X22, 0X18 # andb (%eax), %bl")
#define AND_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X22, 0X1B # andb (%ebx), %bl")
#define AND_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X22, 0X19 # andb (%ecx), %bl")
#define AND_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X22, 0X1A # andb (%edx), %bl")
#define AND_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X22, 0X1F # andb (%edi), %bl")
#define AND_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X22, 0X1E # andb (%esi), %bl")
#define AND_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X22, 0X5D, 0X00 # andb (%ebp), %bl")
#define AND_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X22, 0X1C, 0X24 # andb (%esp), %bl")

#define AND_CL_FROM_PTR_RAX CMT_ASM(".byte 0X22, 0X08 # andb (%rax), %cl")
#define AND_CL_FROM_PTR_RBX CMT_ASM(".byte 0X22, 0X0B # andb (%rbx), %cl")
#define AND_CL_FROM_PTR_RCX CMT_ASM(".byte 0X22, 0X09 # andb (%rcx), %cl")
#define AND_CL_FROM_PTR_RDX CMT_ASM(".byte 0X22, 0X0A # andb (%rdx), %cl")
#define AND_CL_FROM_PTR_RDI CMT_ASM(".byte 0X22, 0X0F # andb (%rdi), %cl")
#define AND_CL_FROM_PTR_RSI CMT_ASM(".byte 0X22, 0X0E # andb (%rsi), %cl")
#define AND_CL_FROM_PTR_RBP CMT_ASM(".byte 0X22, 0X4D, 0X00 # andb (%rbp), %cl")
#define AND_CL_FROM_PTR_RSP CMT_ASM(".byte 0X22, 0X0C, 0X24 # andb (%rsp), %cl")
#define AND_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X08 # andb (%r8), %cl")
#define AND_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X09 # andb (%r9), %cl")
#define AND_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X0A # andb (%r10), %cl")
#define AND_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X0B # andb (%r11), %cl")
#define AND_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X0C, 0X24 # andb (%r12), %cl")
#define AND_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X4D, 0X00 # andb (%r13), %cl")
#define AND_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X0E # andb (%r14), %cl")
#define AND_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X0F # andb (%r15), %cl")
#define AND_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X22, 0X08 # andb (%eax), %cl")
#define AND_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X22, 0X0B # andb (%ebx), %cl")
#define AND_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X22, 0X09 # andb (%ecx), %cl")
#define AND_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X22, 0X0A # andb (%edx), %cl")
#define AND_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X22, 0X0F # andb (%edi), %cl")
#define AND_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X22, 0X0E # andb (%esi), %cl")
#define AND_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X22, 0X4D, 0X00 # andb (%ebp), %cl")
#define AND_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X22, 0X0C, 0X24 # andb (%esp), %cl")

#define AND_DL_FROM_PTR_RAX CMT_ASM(".byte 0X22, 0X10 # andb (%rax), %dl")
#define AND_DL_FROM_PTR_RBX CMT_ASM(".byte 0X22, 0X13 # andb (%rbx), %dl")
#define AND_DL_FROM_PTR_RCX CMT_ASM(".byte 0X22, 0X11 # andb (%rcx), %dl")
#define AND_DL_FROM_PTR_RDX CMT_ASM(".byte 0X22, 0X12 # andb (%rdx), %dl")
#define AND_DL_FROM_PTR_RDI CMT_ASM(".byte 0X22, 0X17 # andb (%rdi), %dl")
#define AND_DL_FROM_PTR_RSI CMT_ASM(".byte 0X22, 0X16 # andb (%rsi), %dl")
#define AND_DL_FROM_PTR_RBP CMT_ASM(".byte 0X22, 0X55, 0X00 # andb (%rbp), %dl")
#define AND_DL_FROM_PTR_RSP CMT_ASM(".byte 0X22, 0X14, 0X24 # andb (%rsp), %dl")
#define AND_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X10 # andb (%r8), %dl")
#define AND_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X11 # andb (%r9), %dl")
#define AND_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X12 # andb (%r10), %dl")
#define AND_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X13 # andb (%r11), %dl")
#define AND_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X14, 0X24 # andb (%r12), %dl")
#define AND_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X55, 0X00 # andb (%r13), %dl")
#define AND_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X16 # andb (%r14), %dl")
#define AND_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X17 # andb (%r15), %dl")
#define AND_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X22, 0X10 # andb (%eax), %dl")
#define AND_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X22, 0X13 # andb (%ebx), %dl")
#define AND_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X22, 0X11 # andb (%ecx), %dl")
#define AND_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X22, 0X12 # andb (%edx), %dl")
#define AND_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X22, 0X17 # andb (%edi), %dl")
#define AND_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X22, 0X16 # andb (%esi), %dl")
#define AND_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X22, 0X55, 0X00 # andb (%ebp), %dl")
#define AND_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X22, 0X14, 0X24 # andb (%esp), %dl")

#define AND_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X22, 0X38 # andb (%rax), %dil")
#define AND_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X22, 0X3B # andb (%rbx), %dil")
#define AND_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X22, 0X39 # andb (%rcx), %dil")
#define AND_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X22, 0X3A # andb (%rdx), %dil")
#define AND_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X22, 0X3F # andb (%rdi), %dil")
#define AND_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X22, 0X3E # andb (%rsi), %dil")
#define AND_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X22, 0X7D, 0X00 # andb (%rbp), %dil")
#define AND_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X22, 0X3C, 0X24 # andb (%rsp), %dil")
#define AND_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X38 # andb (%r8), %dil")
#define AND_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X39 # andb (%r9), %dil")
#define AND_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X3A # andb (%r10), %dil")
#define AND_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X3B # andb (%r11), %dil")
#define AND_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X3C, 0X24 # andb (%r12), %dil")
#define AND_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X7D, 0X00 # andb (%r13), %dil")
#define AND_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X3E # andb (%r14), %dil")
#define AND_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X3F # andb (%r15), %dil")
#define AND_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X38 # andb (%eax), %dil")
#define AND_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X3B # andb (%ebx), %dil")
#define AND_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X39 # andb (%ecx), %dil")
#define AND_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X3A # andb (%edx), %dil")
#define AND_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X3F # andb (%edi), %dil")
#define AND_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X3E # andb (%esi), %dil")
#define AND_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X7D, 0X00 # andb (%ebp), %dil")
#define AND_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X3C, 0X24 # andb (%esp), %dil")

#define AND_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X22, 0X30 # andb (%rax), %sil")
#define AND_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X22, 0X33 # andb (%rbx), %sil")
#define AND_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X22, 0X31 # andb (%rcx), %sil")
#define AND_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X22, 0X32 # andb (%rdx), %sil")
#define AND_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X22, 0X37 # andb (%rdi), %sil")
#define AND_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X22, 0X36 # andb (%rsi), %sil")
#define AND_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X22, 0X75, 0X00 # andb (%rbp), %sil")
#define AND_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X22, 0X34, 0X24 # andb (%rsp), %sil")
#define AND_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X30 # andb (%r8), %sil")
#define AND_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X31 # andb (%r9), %sil")
#define AND_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X32 # andb (%r10), %sil")
#define AND_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X33 # andb (%r11), %sil")
#define AND_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X34, 0X24 # andb (%r12), %sil")
#define AND_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X75, 0X00 # andb (%r13), %sil")
#define AND_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X36 # andb (%r14), %sil")
#define AND_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X37 # andb (%r15), %sil")
#define AND_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X30 # andb (%eax), %sil")
#define AND_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X33 # andb (%ebx), %sil")
#define AND_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X31 # andb (%ecx), %sil")
#define AND_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X32 # andb (%edx), %sil")
#define AND_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X37 # andb (%edi), %sil")
#define AND_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X36 # andb (%esi), %sil")
#define AND_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X75, 0X00 # andb (%ebp), %sil")
#define AND_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X34, 0X24 # andb (%esp), %sil")

#define AND_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X22, 0X28 # andb (%rax), %bpl")
#define AND_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X22, 0X2B # andb (%rbx), %bpl")
#define AND_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X22, 0X29 # andb (%rcx), %bpl")
#define AND_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X22, 0X2A # andb (%rdx), %bpl")
#define AND_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X22, 0X2F # andb (%rdi), %bpl")
#define AND_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X22, 0X2E # andb (%rsi), %bpl")
#define AND_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X22, 0X6D, 0X00 # andb (%rbp), %bpl")
#define AND_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X22, 0X2C, 0X24 # andb (%rsp), %bpl")
#define AND_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X28 # andb (%r8), %bpl")
#define AND_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X29 # andb (%r9), %bpl")
#define AND_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X2A # andb (%r10), %bpl")
#define AND_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X2B # andb (%r11), %bpl")
#define AND_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X2C, 0X24 # andb (%r12), %bpl")
#define AND_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X6D, 0X00 # andb (%r13), %bpl")
#define AND_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X2E # andb (%r14), %bpl")
#define AND_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X2F # andb (%r15), %bpl")
#define AND_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X28 # andb (%eax), %bpl")
#define AND_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X2B # andb (%ebx), %bpl")
#define AND_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X29 # andb (%ecx), %bpl")
#define AND_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X2A # andb (%edx), %bpl")
#define AND_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X2F # andb (%edi), %bpl")
#define AND_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X2E # andb (%esi), %bpl")
#define AND_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X6D, 0X00 # andb (%ebp), %bpl")
#define AND_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X2C, 0X24 # andb (%esp), %bpl")

#define AND_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X22, 0X20 # andb (%rax), %spl")
#define AND_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X22, 0X23 # andb (%rbx), %spl")
#define AND_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X22, 0X21 # andb (%rcx), %spl")
#define AND_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X22, 0X22 # andb (%rdx), %spl")
#define AND_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X22, 0X27 # andb (%rdi), %spl")
#define AND_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X22, 0X26 # andb (%rsi), %spl")
#define AND_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X22, 0X65, 0X00 # andb (%rbp), %spl")
#define AND_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X22, 0X24, 0X24 # andb (%rsp), %spl")
#define AND_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X22, 0X20 # andb (%r8), %spl")
#define AND_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X22, 0X21 # andb (%r9), %spl")
#define AND_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X22, 0X22 # andb (%r10), %spl")
#define AND_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X22, 0X23 # andb (%r11), %spl")
#define AND_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X22, 0X24, 0X24 # andb (%r12), %spl")
#define AND_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X22, 0X65, 0X00 # andb (%r13), %spl")
#define AND_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X22, 0X26 # andb (%r14), %spl")
#define AND_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X22, 0X27 # andb (%r15), %spl")
#define AND_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X20 # andb (%eax), %spl")
#define AND_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X23 # andb (%ebx), %spl")
#define AND_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X21 # andb (%ecx), %spl")
#define AND_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X22, 0X22 # andb (%edx), %spl")
#define AND_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X27 # andb (%edi), %spl")
#define AND_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X22, 0X26 # andb (%esi), %spl")
#define AND_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X65, 0X00 # andb (%ebp), %spl")
#define AND_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X22, 0X24, 0X24 # andb (%esp), %spl")

#define AND_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X00 # andb (%rax), %r8b")
#define AND_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X03 # andb (%rbx), %r8b")
#define AND_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X01 # andb (%rcx), %r8b")
#define AND_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X02 # andb (%rdx), %r8b")
#define AND_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X07 # andb (%rdi), %r8b")
#define AND_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X06 # andb (%rsi), %r8b")
#define AND_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X45, 0X00 # andb (%rbp), %r8b")
#define AND_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X04, 0X24 # andb (%rsp), %r8b")
#define AND_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X00 # andb (%r8), %r8b")
#define AND_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X01 # andb (%r9), %r8b")
#define AND_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X02 # andb (%r10), %r8b")
#define AND_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X03 # andb (%r11), %r8b")
#define AND_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X04, 0X24 # andb (%r12), %r8b")
#define AND_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X45, 0X00 # andb (%r13), %r8b")
#define AND_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X06 # andb (%r14), %r8b")
#define AND_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X07 # andb (%r15), %r8b")
#define AND_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X00 # andb (%eax), %r8b")
#define AND_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X03 # andb (%ebx), %r8b")
#define AND_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X01 # andb (%ecx), %r8b")
#define AND_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X02 # andb (%edx), %r8b")
#define AND_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X07 # andb (%edi), %r8b")
#define AND_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X06 # andb (%esi), %r8b")
#define AND_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X45, 0X00 # andb (%ebp), %r8b")
#define AND_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X04, 0X24 # andb (%esp), %r8b")

#define AND_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X08 # andb (%rax), %r9b")
#define AND_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X0B # andb (%rbx), %r9b")
#define AND_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X09 # andb (%rcx), %r9b")
#define AND_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X0A # andb (%rdx), %r9b")
#define AND_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X0F # andb (%rdi), %r9b")
#define AND_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X0E # andb (%rsi), %r9b")
#define AND_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X4D, 0X00 # andb (%rbp), %r9b")
#define AND_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X0C, 0X24 # andb (%rsp), %r9b")
#define AND_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X08 # andb (%r8), %r9b")
#define AND_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X09 # andb (%r9), %r9b")
#define AND_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X0A # andb (%r10), %r9b")
#define AND_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X0B # andb (%r11), %r9b")
#define AND_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X0C, 0X24 # andb (%r12), %r9b")
#define AND_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X4D, 0X00 # andb (%r13), %r9b")
#define AND_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X0E # andb (%r14), %r9b")
#define AND_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X0F # andb (%r15), %r9b")
#define AND_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X08 # andb (%eax), %r9b")
#define AND_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X0B # andb (%ebx), %r9b")
#define AND_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X09 # andb (%ecx), %r9b")
#define AND_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X0A # andb (%edx), %r9b")
#define AND_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X0F # andb (%edi), %r9b")
#define AND_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X0E # andb (%esi), %r9b")
#define AND_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X4D, 0X00 # andb (%ebp), %r9b")
#define AND_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X0C, 0X24 # andb (%esp), %r9b")

#define AND_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X10 # andb (%rax), %r10b")
#define AND_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X13 # andb (%rbx), %r10b")
#define AND_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X11 # andb (%rcx), %r10b")
#define AND_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X12 # andb (%rdx), %r10b")
#define AND_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X17 # andb (%rdi), %r10b")
#define AND_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X16 # andb (%rsi), %r10b")
#define AND_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X55, 0X00 # andb (%rbp), %r10b")
#define AND_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X14, 0X24 # andb (%rsp), %r10b")
#define AND_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X10 # andb (%r8), %r10b")
#define AND_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X11 # andb (%r9), %r10b")
#define AND_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X12 # andb (%r10), %r10b")
#define AND_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X13 # andb (%r11), %r10b")
#define AND_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X14, 0X24 # andb (%r12), %r10b")
#define AND_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X55, 0X00 # andb (%r13), %r10b")
#define AND_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X16 # andb (%r14), %r10b")
#define AND_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X17 # andb (%r15), %r10b")
#define AND_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X10 # andb (%eax), %r10b")
#define AND_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X13 # andb (%ebx), %r10b")
#define AND_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X11 # andb (%ecx), %r10b")
#define AND_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X12 # andb (%edx), %r10b")
#define AND_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X17 # andb (%edi), %r10b")
#define AND_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X16 # andb (%esi), %r10b")
#define AND_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X55, 0X00 # andb (%ebp), %r10b")
#define AND_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X14, 0X24 # andb (%esp), %r10b")

#define AND_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X18 # andb (%rax), %r11b")
#define AND_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X1B # andb (%rbx), %r11b")
#define AND_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X19 # andb (%rcx), %r11b")
#define AND_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X1A # andb (%rdx), %r11b")
#define AND_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X1F # andb (%rdi), %r11b")
#define AND_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X1E # andb (%rsi), %r11b")
#define AND_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X5D, 0X00 # andb (%rbp), %r11b")
#define AND_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X1C, 0X24 # andb (%rsp), %r11b")
#define AND_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X18 # andb (%r8), %r11b")
#define AND_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X19 # andb (%r9), %r11b")
#define AND_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X1A # andb (%r10), %r11b")
#define AND_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X1B # andb (%r11), %r11b")
#define AND_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X1C, 0X24 # andb (%r12), %r11b")
#define AND_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X5D, 0X00 # andb (%r13), %r11b")
#define AND_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X1E # andb (%r14), %r11b")
#define AND_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X1F # andb (%r15), %r11b")
#define AND_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X18 # andb (%eax), %r11b")
#define AND_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X1B # andb (%ebx), %r11b")
#define AND_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X19 # andb (%ecx), %r11b")
#define AND_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X1A # andb (%edx), %r11b")
#define AND_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X1F # andb (%edi), %r11b")
#define AND_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X1E # andb (%esi), %r11b")
#define AND_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X5D, 0X00 # andb (%ebp), %r11b")
#define AND_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X1C, 0X24 # andb (%esp), %r11b")

#define AND_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X20 # andb (%rax), %r12b")
#define AND_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X23 # andb (%rbx), %r12b")
#define AND_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X21 # andb (%rcx), %r12b")
#define AND_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X22 # andb (%rdx), %r12b")
#define AND_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X27 # andb (%rdi), %r12b")
#define AND_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X26 # andb (%rsi), %r12b")
#define AND_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X65, 0X00 # andb (%rbp), %r12b")
#define AND_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X24, 0X24 # andb (%rsp), %r12b")
#define AND_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X20 # andb (%r8), %r12b")
#define AND_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X21 # andb (%r9), %r12b")
#define AND_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X22 # andb (%r10), %r12b")
#define AND_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X23 # andb (%r11), %r12b")
#define AND_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X24, 0X24 # andb (%r12), %r12b")
#define AND_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X65, 0X00 # andb (%r13), %r12b")
#define AND_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X26 # andb (%r14), %r12b")
#define AND_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X27 # andb (%r15), %r12b")
#define AND_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X20 # andb (%eax), %r12b")
#define AND_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X23 # andb (%ebx), %r12b")
#define AND_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X21 # andb (%ecx), %r12b")
#define AND_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X22 # andb (%edx), %r12b")
#define AND_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X27 # andb (%edi), %r12b")
#define AND_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X26 # andb (%esi), %r12b")
#define AND_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X65, 0X00 # andb (%ebp), %r12b")
#define AND_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X24, 0X24 # andb (%esp), %r12b")

#define AND_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X28 # andb (%rax), %r13b")
#define AND_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X2B # andb (%rbx), %r13b")
#define AND_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X29 # andb (%rcx), %r13b")
#define AND_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X2A # andb (%rdx), %r13b")
#define AND_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X2F # andb (%rdi), %r13b")
#define AND_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X2E # andb (%rsi), %r13b")
#define AND_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X6D, 0X00 # andb (%rbp), %r13b")
#define AND_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X2C, 0X24 # andb (%rsp), %r13b")
#define AND_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X28 # andb (%r8), %r13b")
#define AND_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X29 # andb (%r9), %r13b")
#define AND_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X2A # andb (%r10), %r13b")
#define AND_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X2B # andb (%r11), %r13b")
#define AND_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X2C, 0X24 # andb (%r12), %r13b")
#define AND_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X6D, 0X00 # andb (%r13), %r13b")
#define AND_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X2E # andb (%r14), %r13b")
#define AND_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X2F # andb (%r15), %r13b")
#define AND_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X28 # andb (%eax), %r13b")
#define AND_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X2B # andb (%ebx), %r13b")
#define AND_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X29 # andb (%ecx), %r13b")
#define AND_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X2A # andb (%edx), %r13b")
#define AND_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X2F # andb (%edi), %r13b")
#define AND_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X2E # andb (%esi), %r13b")
#define AND_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X6D, 0X00 # andb (%ebp), %r13b")
#define AND_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X2C, 0X24 # andb (%esp), %r13b")

#define AND_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X30 # andb (%rax), %r14b")
#define AND_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X33 # andb (%rbx), %r14b")
#define AND_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X31 # andb (%rcx), %r14b")
#define AND_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X32 # andb (%rdx), %r14b")
#define AND_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X37 # andb (%rdi), %r14b")
#define AND_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X36 # andb (%rsi), %r14b")
#define AND_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X75, 0X00 # andb (%rbp), %r14b")
#define AND_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X34, 0X24 # andb (%rsp), %r14b")
#define AND_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X30 # andb (%r8), %r14b")
#define AND_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X31 # andb (%r9), %r14b")
#define AND_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X32 # andb (%r10), %r14b")
#define AND_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X33 # andb (%r11), %r14b")
#define AND_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X34, 0X24 # andb (%r12), %r14b")
#define AND_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X75, 0X00 # andb (%r13), %r14b")
#define AND_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X36 # andb (%r14), %r14b")
#define AND_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X37 # andb (%r15), %r14b")
#define AND_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X30 # andb (%eax), %r14b")
#define AND_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X33 # andb (%ebx), %r14b")
#define AND_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X31 # andb (%ecx), %r14b")
#define AND_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X32 # andb (%edx), %r14b")
#define AND_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X37 # andb (%edi), %r14b")
#define AND_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X36 # andb (%esi), %r14b")
#define AND_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X75, 0X00 # andb (%ebp), %r14b")
#define AND_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X34, 0X24 # andb (%esp), %r14b")

#define AND_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X22, 0X38 # andb (%rax), %r15b")
#define AND_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X22, 0X3B # andb (%rbx), %r15b")
#define AND_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X22, 0X39 # andb (%rcx), %r15b")
#define AND_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X22, 0X3A # andb (%rdx), %r15b")
#define AND_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X22, 0X3F # andb (%rdi), %r15b")
#define AND_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X22, 0X3E # andb (%rsi), %r15b")
#define AND_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X22, 0X7D, 0X00 # andb (%rbp), %r15b")
#define AND_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X22, 0X3C, 0X24 # andb (%rsp), %r15b")
#define AND_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X22, 0X38 # andb (%r8), %r15b")
#define AND_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X22, 0X39 # andb (%r9), %r15b")
#define AND_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X22, 0X3A # andb (%r10), %r15b")
#define AND_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X22, 0X3B # andb (%r11), %r15b")
#define AND_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X22, 0X3C, 0X24 # andb (%r12), %r15b")
#define AND_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X22, 0X7D, 0X00 # andb (%r13), %r15b")
#define AND_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X22, 0X3E # andb (%r14), %r15b")
#define AND_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X22, 0X3F # andb (%r15), %r15b")
#define AND_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X38 # andb (%eax), %r15b")
#define AND_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X3B # andb (%ebx), %r15b")
#define AND_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X39 # andb (%ecx), %r15b")
#define AND_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X22, 0X3A # andb (%edx), %r15b")
#define AND_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X3F # andb (%edi), %r15b")
#define AND_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X22, 0X3E # andb (%esi), %r15b")
#define AND_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X7D, 0X00 # andb (%ebp), %r15b")
#define AND_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X22, 0X3C, 0X24 # andb (%esp), %r15b")

#define AND_AL_TO_PTR_RAX CMT_ASM(".byte 0X20, 0X00 # andb %al, (%rax)")
#define AND_AL_TO_PTR_RBX CMT_ASM(".byte 0X20, 0X03 # andb %al, (%rbx)")
#define AND_AL_TO_PTR_RCX CMT_ASM(".byte 0X20, 0X01 # andb %al, (%rcx)")
#define AND_AL_TO_PTR_RDX CMT_ASM(".byte 0X20, 0X02 # andb %al, (%rdx)")
#define AND_AL_TO_PTR_RDI CMT_ASM(".byte 0X20, 0X07 # andb %al, (%rdi)")
#define AND_AL_TO_PTR_RSI CMT_ASM(".byte 0X20, 0X06 # andb %al, (%rsi)")
#define AND_AL_TO_PTR_RBP CMT_ASM(".byte 0X20, 0X45, 0X00 # andb %al, (%rbp)")
#define AND_AL_TO_PTR_RSP CMT_ASM(".byte 0X20, 0X04, 0X24 # andb %al, (%rsp)")
#define AND_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X00 # andb %al, (%r8)")
#define AND_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X01 # andb %al, (%r9)")
#define AND_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X02 # andb %al, (%r10)")
#define AND_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X03 # andb %al, (%r11)")
#define AND_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X04, 0X24 # andb %al, (%r12)")
#define AND_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X45, 0X00 # andb %al, (%r13)")
#define AND_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X06 # andb %al, (%r14)")
#define AND_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X07 # andb %al, (%r15)")
#define AND_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X20, 0X00 # andb %al, (%eax)")
#define AND_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X20, 0X03 # andb %al, (%ebx)")
#define AND_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X20, 0X01 # andb %al, (%ecx)")
#define AND_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X20, 0X02 # andb %al, (%edx)")
#define AND_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X20, 0X07 # andb %al, (%edi)")
#define AND_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X20, 0X06 # andb %al, (%esi)")
#define AND_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X20, 0X45, 0X00 # andb %al, (%ebp)")
#define AND_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X20, 0X04, 0X24 # andb %al, (%esp)")

#define AND_BL_TO_PTR_RAX CMT_ASM(".byte 0X20, 0X18 # andb %bl, (%rax)")
#define AND_BL_TO_PTR_RBX CMT_ASM(".byte 0X20, 0X1B # andb %bl, (%rbx)")
#define AND_BL_TO_PTR_RCX CMT_ASM(".byte 0X20, 0X19 # andb %bl, (%rcx)")
#define AND_BL_TO_PTR_RDX CMT_ASM(".byte 0X20, 0X1A # andb %bl, (%rdx)")
#define AND_BL_TO_PTR_RDI CMT_ASM(".byte 0X20, 0X1F # andb %bl, (%rdi)")
#define AND_BL_TO_PTR_RSI CMT_ASM(".byte 0X20, 0X1E # andb %bl, (%rsi)")
#define AND_BL_TO_PTR_RBP CMT_ASM(".byte 0X20, 0X5D, 0X00 # andb %bl, (%rbp)")
#define AND_BL_TO_PTR_RSP CMT_ASM(".byte 0X20, 0X1C, 0X24 # andb %bl, (%rsp)")
#define AND_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X18 # andb %bl, (%r8)")
#define AND_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X19 # andb %bl, (%r9)")
#define AND_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X1A # andb %bl, (%r10)")
#define AND_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X1B # andb %bl, (%r11)")
#define AND_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X1C, 0X24 # andb %bl, (%r12)")
#define AND_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X5D, 0X00 # andb %bl, (%r13)")
#define AND_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X1E # andb %bl, (%r14)")
#define AND_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X1F # andb %bl, (%r15)")
#define AND_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X20, 0X18 # andb %bl, (%eax)")
#define AND_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X20, 0X1B # andb %bl, (%ebx)")
#define AND_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X20, 0X19 # andb %bl, (%ecx)")
#define AND_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X20, 0X1A # andb %bl, (%edx)")
#define AND_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X20, 0X1F # andb %bl, (%edi)")
#define AND_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X20, 0X1E # andb %bl, (%esi)")
#define AND_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X20, 0X5D, 0X00 # andb %bl, (%ebp)")
#define AND_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X20, 0X1C, 0X24 # andb %bl, (%esp)")

#define AND_CL_TO_PTR_RAX CMT_ASM(".byte 0X20, 0X08 # andb %cl, (%rax)")
#define AND_CL_TO_PTR_RBX CMT_ASM(".byte 0X20, 0X0B # andb %cl, (%rbx)")
#define AND_CL_TO_PTR_RCX CMT_ASM(".byte 0X20, 0X09 # andb %cl, (%rcx)")
#define AND_CL_TO_PTR_RDX CMT_ASM(".byte 0X20, 0X0A # andb %cl, (%rdx)")
#define AND_CL_TO_PTR_RDI CMT_ASM(".byte 0X20, 0X0F # andb %cl, (%rdi)")
#define AND_CL_TO_PTR_RSI CMT_ASM(".byte 0X20, 0X0E # andb %cl, (%rsi)")
#define AND_CL_TO_PTR_RBP CMT_ASM(".byte 0X20, 0X4D, 0X00 # andb %cl, (%rbp)")
#define AND_CL_TO_PTR_RSP CMT_ASM(".byte 0X20, 0X0C, 0X24 # andb %cl, (%rsp)")
#define AND_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X08 # andb %cl, (%r8)")
#define AND_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X09 # andb %cl, (%r9)")
#define AND_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X0A # andb %cl, (%r10)")
#define AND_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X0B # andb %cl, (%r11)")
#define AND_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X0C, 0X24 # andb %cl, (%r12)")
#define AND_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X4D, 0X00 # andb %cl, (%r13)")
#define AND_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X0E # andb %cl, (%r14)")
#define AND_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X0F # andb %cl, (%r15)")
#define AND_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X20, 0X08 # andb %cl, (%eax)")
#define AND_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X20, 0X0B # andb %cl, (%ebx)")
#define AND_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X20, 0X09 # andb %cl, (%ecx)")
#define AND_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X20, 0X0A # andb %cl, (%edx)")
#define AND_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X20, 0X0F # andb %cl, (%edi)")
#define AND_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X20, 0X0E # andb %cl, (%esi)")
#define AND_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X20, 0X4D, 0X00 # andb %cl, (%ebp)")
#define AND_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X20, 0X0C, 0X24 # andb %cl, (%esp)")

#define AND_DL_TO_PTR_RAX CMT_ASM(".byte 0X20, 0X10 # andb %dl, (%rax)")
#define AND_DL_TO_PTR_RBX CMT_ASM(".byte 0X20, 0X13 # andb %dl, (%rbx)")
#define AND_DL_TO_PTR_RCX CMT_ASM(".byte 0X20, 0X11 # andb %dl, (%rcx)")
#define AND_DL_TO_PTR_RDX CMT_ASM(".byte 0X20, 0X12 # andb %dl, (%rdx)")
#define AND_DL_TO_PTR_RDI CMT_ASM(".byte 0X20, 0X17 # andb %dl, (%rdi)")
#define AND_DL_TO_PTR_RSI CMT_ASM(".byte 0X20, 0X16 # andb %dl, (%rsi)")
#define AND_DL_TO_PTR_RBP CMT_ASM(".byte 0X20, 0X55, 0X00 # andb %dl, (%rbp)")
#define AND_DL_TO_PTR_RSP CMT_ASM(".byte 0X20, 0X14, 0X24 # andb %dl, (%rsp)")
#define AND_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X10 # andb %dl, (%r8)")
#define AND_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X11 # andb %dl, (%r9)")
#define AND_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X12 # andb %dl, (%r10)")
#define AND_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X13 # andb %dl, (%r11)")
#define AND_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X14, 0X24 # andb %dl, (%r12)")
#define AND_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X55, 0X00 # andb %dl, (%r13)")
#define AND_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X16 # andb %dl, (%r14)")
#define AND_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X17 # andb %dl, (%r15)")
#define AND_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X20, 0X10 # andb %dl, (%eax)")
#define AND_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X20, 0X13 # andb %dl, (%ebx)")
#define AND_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X20, 0X11 # andb %dl, (%ecx)")
#define AND_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X20, 0X12 # andb %dl, (%edx)")
#define AND_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X20, 0X17 # andb %dl, (%edi)")
#define AND_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X20, 0X16 # andb %dl, (%esi)")
#define AND_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X20, 0X55, 0X00 # andb %dl, (%ebp)")
#define AND_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X20, 0X14, 0X24 # andb %dl, (%esp)")

#define AND_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X20, 0X38 # andb %dil, (%rax)")
#define AND_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X20, 0X3B # andb %dil, (%rbx)")
#define AND_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X20, 0X39 # andb %dil, (%rcx)")
#define AND_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X20, 0X3A # andb %dil, (%rdx)")
#define AND_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X20, 0X3F # andb %dil, (%rdi)")
#define AND_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X20, 0X3E # andb %dil, (%rsi)")
#define AND_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X20, 0X7D, 0X00 # andb %dil, (%rbp)")
#define AND_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X20, 0X3C, 0X24 # andb %dil, (%rsp)")
#define AND_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X38 # andb %dil, (%r8)")
#define AND_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X39 # andb %dil, (%r9)")
#define AND_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X3A # andb %dil, (%r10)")
#define AND_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X3B # andb %dil, (%r11)")
#define AND_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X3C, 0X24 # andb %dil, (%r12)")
#define AND_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X7D, 0X00 # andb %dil, (%r13)")
#define AND_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X3E # andb %dil, (%r14)")
#define AND_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X3F # andb %dil, (%r15)")
#define AND_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X38 # andb %dil, (%eax)")
#define AND_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X3B # andb %dil, (%ebx)")
#define AND_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X39 # andb %dil, (%ecx)")
#define AND_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X3A # andb %dil, (%edx)")
#define AND_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X3F # andb %dil, (%edi)")
#define AND_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X3E # andb %dil, (%esi)")
#define AND_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X7D, 0X00 # andb %dil, (%ebp)")
#define AND_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X3C, 0X24 # andb %dil, (%esp)")

#define AND_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X20, 0X30 # andb %sil, (%rax)")
#define AND_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X20, 0X33 # andb %sil, (%rbx)")
#define AND_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X20, 0X31 # andb %sil, (%rcx)")
#define AND_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X20, 0X32 # andb %sil, (%rdx)")
#define AND_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X20, 0X37 # andb %sil, (%rdi)")
#define AND_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X20, 0X36 # andb %sil, (%rsi)")
#define AND_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X20, 0X75, 0X00 # andb %sil, (%rbp)")
#define AND_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X20, 0X34, 0X24 # andb %sil, (%rsp)")
#define AND_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X30 # andb %sil, (%r8)")
#define AND_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X31 # andb %sil, (%r9)")
#define AND_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X32 # andb %sil, (%r10)")
#define AND_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X33 # andb %sil, (%r11)")
#define AND_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X34, 0X24 # andb %sil, (%r12)")
#define AND_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X75, 0X00 # andb %sil, (%r13)")
#define AND_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X36 # andb %sil, (%r14)")
#define AND_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X37 # andb %sil, (%r15)")
#define AND_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X30 # andb %sil, (%eax)")
#define AND_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X33 # andb %sil, (%ebx)")
#define AND_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X31 # andb %sil, (%ecx)")
#define AND_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X32 # andb %sil, (%edx)")
#define AND_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X37 # andb %sil, (%edi)")
#define AND_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X36 # andb %sil, (%esi)")
#define AND_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X75, 0X00 # andb %sil, (%ebp)")
#define AND_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X34, 0X24 # andb %sil, (%esp)")

#define AND_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X20, 0X28 # andb %bpl, (%rax)")
#define AND_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X20, 0X2B # andb %bpl, (%rbx)")
#define AND_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X20, 0X29 # andb %bpl, (%rcx)")
#define AND_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X20, 0X2A # andb %bpl, (%rdx)")
#define AND_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X20, 0X2F # andb %bpl, (%rdi)")
#define AND_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X20, 0X2E # andb %bpl, (%rsi)")
#define AND_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X20, 0X6D, 0X00 # andb %bpl, (%rbp)")
#define AND_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X20, 0X2C, 0X24 # andb %bpl, (%rsp)")
#define AND_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X28 # andb %bpl, (%r8)")
#define AND_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X29 # andb %bpl, (%r9)")
#define AND_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X2A # andb %bpl, (%r10)")
#define AND_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X2B # andb %bpl, (%r11)")
#define AND_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X2C, 0X24 # andb %bpl, (%r12)")
#define AND_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X6D, 0X00 # andb %bpl, (%r13)")
#define AND_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X2E # andb %bpl, (%r14)")
#define AND_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X2F # andb %bpl, (%r15)")
#define AND_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X28 # andb %bpl, (%eax)")
#define AND_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X2B # andb %bpl, (%ebx)")
#define AND_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X29 # andb %bpl, (%ecx)")
#define AND_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X2A # andb %bpl, (%edx)")
#define AND_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X2F # andb %bpl, (%edi)")
#define AND_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X2E # andb %bpl, (%esi)")
#define AND_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X6D, 0X00 # andb %bpl, (%ebp)")
#define AND_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X2C, 0X24 # andb %bpl, (%esp)")

#define AND_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X20, 0X20 # andb %spl, (%rax)")
#define AND_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X20, 0X23 # andb %spl, (%rbx)")
#define AND_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X20, 0X21 # andb %spl, (%rcx)")
#define AND_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X20, 0X22 # andb %spl, (%rdx)")
#define AND_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X20, 0X27 # andb %spl, (%rdi)")
#define AND_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X20, 0X26 # andb %spl, (%rsi)")
#define AND_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X20, 0X65, 0X00 # andb %spl, (%rbp)")
#define AND_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X20, 0X24, 0X24 # andb %spl, (%rsp)")
#define AND_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X20, 0X20 # andb %spl, (%r8)")
#define AND_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X20, 0X21 # andb %spl, (%r9)")
#define AND_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X20, 0X22 # andb %spl, (%r10)")
#define AND_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X20, 0X23 # andb %spl, (%r11)")
#define AND_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X20, 0X24, 0X24 # andb %spl, (%r12)")
#define AND_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X20, 0X65, 0X00 # andb %spl, (%r13)")
#define AND_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X20, 0X26 # andb %spl, (%r14)")
#define AND_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X20, 0X27 # andb %spl, (%r15)")
#define AND_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X20 # andb %spl, (%eax)")
#define AND_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X23 # andb %spl, (%ebx)")
#define AND_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X21 # andb %spl, (%ecx)")
#define AND_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X20, 0X22 # andb %spl, (%edx)")
#define AND_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X27 # andb %spl, (%edi)")
#define AND_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X20, 0X26 # andb %spl, (%esi)")
#define AND_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X65, 0X00 # andb %spl, (%ebp)")
#define AND_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X20, 0X24, 0X24 # andb %spl, (%esp)")

#define AND_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X00 # andb %r8b, (%rax)")
#define AND_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X03 # andb %r8b, (%rbx)")
#define AND_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X01 # andb %r8b, (%rcx)")
#define AND_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X02 # andb %r8b, (%rdx)")
#define AND_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X07 # andb %r8b, (%rdi)")
#define AND_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X06 # andb %r8b, (%rsi)")
#define AND_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X45, 0X00 # andb %r8b, (%rbp)")
#define AND_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X04, 0X24 # andb %r8b, (%rsp)")
#define AND_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X00 # andb %r8b, (%r8)")
#define AND_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X01 # andb %r8b, (%r9)")
#define AND_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X02 # andb %r8b, (%r10)")
#define AND_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X03 # andb %r8b, (%r11)")
#define AND_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X04, 0X24 # andb %r8b, (%r12)")
#define AND_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X45, 0X00 # andb %r8b, (%r13)")
#define AND_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X06 # andb %r8b, (%r14)")
#define AND_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X07 # andb %r8b, (%r15)")
#define AND_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X00 # andb %r8b, (%eax)")
#define AND_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X03 # andb %r8b, (%ebx)")
#define AND_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X01 # andb %r8b, (%ecx)")
#define AND_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X02 # andb %r8b, (%edx)")
#define AND_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X07 # andb %r8b, (%edi)")
#define AND_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X06 # andb %r8b, (%esi)")
#define AND_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X45, 0X00 # andb %r8b, (%ebp)")
#define AND_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X04, 0X24 # andb %r8b, (%esp)")

#define AND_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X08 # andb %r9b, (%rax)")
#define AND_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X0B # andb %r9b, (%rbx)")
#define AND_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X09 # andb %r9b, (%rcx)")
#define AND_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X0A # andb %r9b, (%rdx)")
#define AND_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X0F # andb %r9b, (%rdi)")
#define AND_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X0E # andb %r9b, (%rsi)")
#define AND_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X4D, 0X00 # andb %r9b, (%rbp)")
#define AND_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X0C, 0X24 # andb %r9b, (%rsp)")
#define AND_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X08 # andb %r9b, (%r8)")
#define AND_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X09 # andb %r9b, (%r9)")
#define AND_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X0A # andb %r9b, (%r10)")
#define AND_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X0B # andb %r9b, (%r11)")
#define AND_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X0C, 0X24 # andb %r9b, (%r12)")
#define AND_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X4D, 0X00 # andb %r9b, (%r13)")
#define AND_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X0E # andb %r9b, (%r14)")
#define AND_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X0F # andb %r9b, (%r15)")
#define AND_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X08 # andb %r9b, (%eax)")
#define AND_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X0B # andb %r9b, (%ebx)")
#define AND_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X09 # andb %r9b, (%ecx)")
#define AND_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X0A # andb %r9b, (%edx)")
#define AND_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X0F # andb %r9b, (%edi)")
#define AND_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X0E # andb %r9b, (%esi)")
#define AND_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X4D, 0X00 # andb %r9b, (%ebp)")
#define AND_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X0C, 0X24 # andb %r9b, (%esp)")

#define AND_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X10 # andb %r10b, (%rax)")
#define AND_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X13 # andb %r10b, (%rbx)")
#define AND_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X11 # andb %r10b, (%rcx)")
#define AND_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X12 # andb %r10b, (%rdx)")
#define AND_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X17 # andb %r10b, (%rdi)")
#define AND_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X16 # andb %r10b, (%rsi)")
#define AND_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X55, 0X00 # andb %r10b, (%rbp)")
#define AND_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X14, 0X24 # andb %r10b, (%rsp)")
#define AND_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X10 # andb %r10b, (%r8)")
#define AND_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X11 # andb %r10b, (%r9)")
#define AND_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X12 # andb %r10b, (%r10)")
#define AND_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X13 # andb %r10b, (%r11)")
#define AND_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X14, 0X24 # andb %r10b, (%r12)")
#define AND_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X55, 0X00 # andb %r10b, (%r13)")
#define AND_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X16 # andb %r10b, (%r14)")
#define AND_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X17 # andb %r10b, (%r15)")
#define AND_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X10 # andb %r10b, (%eax)")
#define AND_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X13 # andb %r10b, (%ebx)")
#define AND_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X11 # andb %r10b, (%ecx)")
#define AND_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X12 # andb %r10b, (%edx)")
#define AND_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X17 # andb %r10b, (%edi)")
#define AND_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X16 # andb %r10b, (%esi)")
#define AND_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X55, 0X00 # andb %r10b, (%ebp)")
#define AND_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X14, 0X24 # andb %r10b, (%esp)")

#define AND_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X18 # andb %r11b, (%rax)")
#define AND_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X1B # andb %r11b, (%rbx)")
#define AND_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X19 # andb %r11b, (%rcx)")
#define AND_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X1A # andb %r11b, (%rdx)")
#define AND_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X1F # andb %r11b, (%rdi)")
#define AND_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X1E # andb %r11b, (%rsi)")
#define AND_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X5D, 0X00 # andb %r11b, (%rbp)")
#define AND_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X1C, 0X24 # andb %r11b, (%rsp)")
#define AND_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X18 # andb %r11b, (%r8)")
#define AND_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X19 # andb %r11b, (%r9)")
#define AND_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X1A # andb %r11b, (%r10)")
#define AND_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X1B # andb %r11b, (%r11)")
#define AND_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X1C, 0X24 # andb %r11b, (%r12)")
#define AND_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X5D, 0X00 # andb %r11b, (%r13)")
#define AND_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X1E # andb %r11b, (%r14)")
#define AND_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X1F # andb %r11b, (%r15)")
#define AND_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X18 # andb %r11b, (%eax)")
#define AND_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X1B # andb %r11b, (%ebx)")
#define AND_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X19 # andb %r11b, (%ecx)")
#define AND_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X1A # andb %r11b, (%edx)")
#define AND_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X1F # andb %r11b, (%edi)")
#define AND_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X1E # andb %r11b, (%esi)")
#define AND_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X5D, 0X00 # andb %r11b, (%ebp)")
#define AND_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X1C, 0X24 # andb %r11b, (%esp)")

#define AND_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X20 # andb %r12b, (%rax)")
#define AND_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X23 # andb %r12b, (%rbx)")
#define AND_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X21 # andb %r12b, (%rcx)")
#define AND_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X22 # andb %r12b, (%rdx)")
#define AND_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X27 # andb %r12b, (%rdi)")
#define AND_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X26 # andb %r12b, (%rsi)")
#define AND_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X65, 0X00 # andb %r12b, (%rbp)")
#define AND_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X24, 0X24 # andb %r12b, (%rsp)")
#define AND_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X20 # andb %r12b, (%r8)")
#define AND_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X21 # andb %r12b, (%r9)")
#define AND_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X22 # andb %r12b, (%r10)")
#define AND_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X23 # andb %r12b, (%r11)")
#define AND_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X24, 0X24 # andb %r12b, (%r12)")
#define AND_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X65, 0X00 # andb %r12b, (%r13)")
#define AND_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X26 # andb %r12b, (%r14)")
#define AND_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X27 # andb %r12b, (%r15)")
#define AND_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X20 # andb %r12b, (%eax)")
#define AND_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X23 # andb %r12b, (%ebx)")
#define AND_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X21 # andb %r12b, (%ecx)")
#define AND_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X22 # andb %r12b, (%edx)")
#define AND_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X27 # andb %r12b, (%edi)")
#define AND_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X26 # andb %r12b, (%esi)")
#define AND_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X65, 0X00 # andb %r12b, (%ebp)")
#define AND_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X24, 0X24 # andb %r12b, (%esp)")

#define AND_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X28 # andb %r13b, (%rax)")
#define AND_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X2B # andb %r13b, (%rbx)")
#define AND_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X29 # andb %r13b, (%rcx)")
#define AND_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X2A # andb %r13b, (%rdx)")
#define AND_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X2F # andb %r13b, (%rdi)")
#define AND_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X2E # andb %r13b, (%rsi)")
#define AND_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X6D, 0X00 # andb %r13b, (%rbp)")
#define AND_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X2C, 0X24 # andb %r13b, (%rsp)")
#define AND_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X28 # andb %r13b, (%r8)")
#define AND_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X29 # andb %r13b, (%r9)")
#define AND_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X2A # andb %r13b, (%r10)")
#define AND_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X2B # andb %r13b, (%r11)")
#define AND_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X2C, 0X24 # andb %r13b, (%r12)")
#define AND_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X6D, 0X00 # andb %r13b, (%r13)")
#define AND_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X2E # andb %r13b, (%r14)")
#define AND_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X2F # andb %r13b, (%r15)")
#define AND_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X28 # andb %r13b, (%eax)")
#define AND_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X2B # andb %r13b, (%ebx)")
#define AND_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X29 # andb %r13b, (%ecx)")
#define AND_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X2A # andb %r13b, (%edx)")
#define AND_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X2F # andb %r13b, (%edi)")
#define AND_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X2E # andb %r13b, (%esi)")
#define AND_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X6D, 0X00 # andb %r13b, (%ebp)")
#define AND_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X2C, 0X24 # andb %r13b, (%esp)")

#define AND_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X30 # andb %r14b, (%rax)")
#define AND_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X33 # andb %r14b, (%rbx)")
#define AND_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X31 # andb %r14b, (%rcx)")
#define AND_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X32 # andb %r14b, (%rdx)")
#define AND_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X37 # andb %r14b, (%rdi)")
#define AND_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X36 # andb %r14b, (%rsi)")
#define AND_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X75, 0X00 # andb %r14b, (%rbp)")
#define AND_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X34, 0X24 # andb %r14b, (%rsp)")
#define AND_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X30 # andb %r14b, (%r8)")
#define AND_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X31 # andb %r14b, (%r9)")
#define AND_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X32 # andb %r14b, (%r10)")
#define AND_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X33 # andb %r14b, (%r11)")
#define AND_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X34, 0X24 # andb %r14b, (%r12)")
#define AND_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X75, 0X00 # andb %r14b, (%r13)")
#define AND_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X36 # andb %r14b, (%r14)")
#define AND_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X37 # andb %r14b, (%r15)")
#define AND_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X30 # andb %r14b, (%eax)")
#define AND_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X33 # andb %r14b, (%ebx)")
#define AND_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X31 # andb %r14b, (%ecx)")
#define AND_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X32 # andb %r14b, (%edx)")
#define AND_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X37 # andb %r14b, (%edi)")
#define AND_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X36 # andb %r14b, (%esi)")
#define AND_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X75, 0X00 # andb %r14b, (%ebp)")
#define AND_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X34, 0X24 # andb %r14b, (%esp)")

#define AND_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X20, 0X38 # andb %r15b, (%rax)")
#define AND_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X20, 0X3B # andb %r15b, (%rbx)")
#define AND_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X20, 0X39 # andb %r15b, (%rcx)")
#define AND_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X20, 0X3A # andb %r15b, (%rdx)")
#define AND_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X20, 0X3F # andb %r15b, (%rdi)")
#define AND_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X20, 0X3E # andb %r15b, (%rsi)")
#define AND_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X20, 0X7D, 0X00 # andb %r15b, (%rbp)")
#define AND_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X20, 0X3C, 0X24 # andb %r15b, (%rsp)")
#define AND_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X20, 0X38 # andb %r15b, (%r8)")
#define AND_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X20, 0X39 # andb %r15b, (%r9)")
#define AND_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X20, 0X3A # andb %r15b, (%r10)")
#define AND_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X20, 0X3B # andb %r15b, (%r11)")
#define AND_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X20, 0X3C, 0X24 # andb %r15b, (%r12)")
#define AND_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X20, 0X7D, 0X00 # andb %r15b, (%r13)")
#define AND_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X20, 0X3E # andb %r15b, (%r14)")
#define AND_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X20, 0X3F # andb %r15b, (%r15)")
#define AND_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X38 # andb %r15b, (%eax)")
#define AND_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X3B # andb %r15b, (%ebx)")
#define AND_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X39 # andb %r15b, (%ecx)")
#define AND_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X20, 0X3A # andb %r15b, (%edx)")
#define AND_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X3F # andb %r15b, (%edi)")
#define AND_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X20, 0X3E # andb %r15b, (%esi)")
#define AND_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X7D, 0X00 # andb %r15b, (%ebp)")
#define AND_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X20, 0X3C, 0X24 # andb %r15b, (%esp)")

#define AND_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X80 # andb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X83 # andb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X81 # andb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X82 # andb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X87 # andb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X86 # andb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X85 # andb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X84, 0X24 # andb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X80 # andb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X81 # andb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X82 # andb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X83 # andb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X84, 0X24 # andb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X85 # andb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X86 # andb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X87 # andb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X80 # andb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X83 # andb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X81 # andb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X82 # andb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X87 # andb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X86 # andb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X85 # andb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X84, 0X24 # andb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define AND_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X98 # andb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9B # andb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X99 # andb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9A # andb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9F # andb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9E # andb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9D # andb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X98 # andb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X99 # andb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9A # andb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9B # andb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9D # andb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9E # andb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X9F # andb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X98 # andb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9B # andb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X99 # andb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9A # andb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9F # andb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9E # andb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9D # andb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define AND_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X88 # andb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8B # andb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X89 # andb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8A # andb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8F # andb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8E # andb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8D # andb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X88 # andb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X89 # andb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8A # andb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8B # andb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8D # andb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8E # andb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X8F # andb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X88 # andb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8B # andb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X89 # andb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8A # andb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8F # andb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8E # andb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8D # andb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define AND_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X90 # andb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X93 # andb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X91 # andb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X22, 0X92 # andb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X97 # andb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X22, 0X96 # andb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X95 # andb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X22, 0X94, 0X24 # andb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X90 # andb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X91 # andb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X92 # andb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X93 # andb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X94, 0X24 # andb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X95 # andb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X96 # andb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0X97 # andb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X90 # andb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X93 # andb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X91 # andb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X92 # andb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X97 # andb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X96 # andb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X95 # andb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X22, 0X94, 0X24 # andb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define AND_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB8 # andb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBB # andb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB9 # andb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBA # andb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBF # andb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBE # andb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBD # andb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB8 # andb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB9 # andb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBA # andb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBB # andb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBD # andb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBE # andb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XBF # andb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB8 # andb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBB # andb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB9 # andb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBA # andb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBF # andb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBE # andb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBD # andb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define AND_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB0 # andb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB3 # andb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB1 # andb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB2 # andb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB7 # andb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB6 # andb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB5 # andb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB0 # andb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB1 # andb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB2 # andb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB3 # andb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB5 # andb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB6 # andb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XB7 # andb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB0 # andb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB3 # andb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB1 # andb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB2 # andb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB7 # andb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB6 # andb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB5 # andb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define AND_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA8 # andb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAB # andb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA9 # andb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAA # andb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAF # andb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAE # andb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAD # andb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA8 # andb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA9 # andb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAA # andb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAB # andb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAD # andb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAE # andb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XAF # andb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA8 # andb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAB # andb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA9 # andb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAA # andb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAF # andb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAE # andb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAD # andb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define AND_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA0 # andb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA3 # andb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA1 # andb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA2 # andb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA7 # andb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA6 # andb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA5 # andb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA0 # andb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA1 # andb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA2 # andb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA3 # andb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA5 # andb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA6 # andb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X22, 0XA7 # andb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA0 # andb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA3 # andb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA1 # andb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA2 # andb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA7 # andb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA6 # andb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA5 # andb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X80 # andb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X83 # andb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X81 # andb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X82 # andb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X87 # andb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X86 # andb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X85 # andb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X84, 0X24 # andb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X80 # andb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X81 # andb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X82 # andb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X83 # andb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X84, 0X24 # andb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X85 # andb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X86 # andb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X87 # andb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X80 # andb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X83 # andb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X81 # andb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X82 # andb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X87 # andb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X86 # andb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X85 # andb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X84, 0X24 # andb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X88 # andb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8B # andb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X89 # andb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8A # andb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8F # andb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8E # andb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8D # andb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X88 # andb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X89 # andb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8A # andb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8B # andb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8D # andb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8E # andb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X8F # andb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X88 # andb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8B # andb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X89 # andb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8A # andb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8F # andb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8E # andb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8D # andb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X8C, 0X24 # andb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X90 # andb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X93 # andb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X91 # andb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X92 # andb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X97 # andb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X96 # andb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X95 # andb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X94, 0X24 # andb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X90 # andb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X91 # andb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X92 # andb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X93 # andb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X94, 0X24 # andb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X95 # andb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X96 # andb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X97 # andb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X90 # andb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X93 # andb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X91 # andb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X92 # andb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X97 # andb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X96 # andb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X95 # andb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X94, 0X24 # andb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X98 # andb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9B # andb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X99 # andb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9A # andb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9F # andb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9E # andb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9D # andb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X98 # andb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X99 # andb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9A # andb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9B # andb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9D # andb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9E # andb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0X9F # andb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X98 # andb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9B # andb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X99 # andb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9A # andb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9F # andb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9E # andb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9D # andb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0X9C, 0X24 # andb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA0 # andb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA3 # andb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA1 # andb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA2 # andb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA7 # andb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA6 # andb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA5 # andb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA0 # andb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA1 # andb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA2 # andb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA3 # andb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA5 # andb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA6 # andb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA7 # andb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA0 # andb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA3 # andb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA1 # andb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA2 # andb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA7 # andb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA6 # andb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA5 # andb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA4, 0X24 # andb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA8 # andb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAB # andb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XA9 # andb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAA # andb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAF # andb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAE # andb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAD # andb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA8 # andb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XA9 # andb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAA # andb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAB # andb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAD # andb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAE # andb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XAF # andb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA8 # andb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAB # andb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XA9 # andb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAA # andb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAF # andb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAE # andb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAD # andb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XAC, 0X24 # andb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB0 # andb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB3 # andb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB1 # andb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB2 # andb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB7 # andb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB6 # andb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB5 # andb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB0 # andb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB1 # andb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB2 # andb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB3 # andb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB5 # andb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB6 # andb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB7 # andb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB0 # andb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB3 # andb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB1 # andb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB2 # andb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB7 # andb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB6 # andb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB5 # andb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB4, 0X24 # andb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB8 # andb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBB # andb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XB9 # andb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBA # andb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBF # andb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBE # andb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBD # andb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB8 # andb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XB9 # andb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBA # andb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBB # andb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBD # andb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBE # andb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X22, 0XBF # andb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB8 # andb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBB # andb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XB9 # andb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBA # andb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBF # andb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBE # andb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBD # andb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X22, 0XBC, 0X24 # andb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define AND_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X80 # andb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X83 # andb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X81 # andb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X82 # andb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X87 # andb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X86 # andb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X85 # andb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X84, 0X24 # andb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X80 # andb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X81 # andb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X82 # andb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X83 # andb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X84, 0X24 # andb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X85 # andb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X86 # andb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X87 # andb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X80 # andb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X83 # andb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X81 # andb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X82 # andb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X87 # andb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X86 # andb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X85 # andb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X84, 0X24 # andb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X98 # andb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9B # andb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X99 # andb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9A # andb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9F # andb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9E # andb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9D # andb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X9C, 0X24 # andb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X98 # andb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X99 # andb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9A # andb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9B # andb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9C, 0X24 # andb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9D # andb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9E # andb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X9F # andb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X98 # andb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9B # andb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X99 # andb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9A # andb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9F # andb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9E # andb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9D # andb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X9C, 0X24 # andb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X88 # andb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8B # andb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X89 # andb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8A # andb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8F # andb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8E # andb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8D # andb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X8C, 0X24 # andb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X88 # andb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X89 # andb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8A # andb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8B # andb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8C, 0X24 # andb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8D # andb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8E # andb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X8F # andb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X88 # andb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8B # andb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X89 # andb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8A # andb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8F # andb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8E # andb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8D # andb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X8C, 0X24 # andb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X90 # andb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X93 # andb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X91 # andb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X20, 0X92 # andb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X97 # andb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X20, 0X96 # andb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X95 # andb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X20, 0X94, 0X24 # andb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X90 # andb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X91 # andb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X92 # andb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X93 # andb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X94, 0X24 # andb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X95 # andb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X96 # andb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0X97 # andb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X90 # andb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X93 # andb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X91 # andb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X92 # andb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X97 # andb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X96 # andb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X95 # andb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X20, 0X94, 0X24 # andb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB8 # andb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBB # andb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB9 # andb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBA # andb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBF # andb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBE # andb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBD # andb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XBC, 0X24 # andb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB8 # andb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB9 # andb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBA # andb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBB # andb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBC, 0X24 # andb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBD # andb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBE # andb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XBF # andb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB8 # andb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBB # andb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB9 # andb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBA # andb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBF # andb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBE # andb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBD # andb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XBC, 0X24 # andb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB0 # andb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB3 # andb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB1 # andb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB2 # andb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB7 # andb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB6 # andb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB5 # andb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XB4, 0X24 # andb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB0 # andb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB1 # andb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB2 # andb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB3 # andb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB4, 0X24 # andb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB5 # andb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB6 # andb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XB7 # andb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB0 # andb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB3 # andb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB1 # andb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB2 # andb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB7 # andb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB6 # andb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB5 # andb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XB4, 0X24 # andb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA8 # andb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAB # andb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA9 # andb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAA # andb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAF # andb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAE # andb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAD # andb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XAC, 0X24 # andb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA8 # andb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA9 # andb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAA # andb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAB # andb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAC, 0X24 # andb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAD # andb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAE # andb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XAF # andb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA8 # andb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAB # andb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA9 # andb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAA # andb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAF # andb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAE # andb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAD # andb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XAC, 0X24 # andb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA0 # andb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA3 # andb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA1 # andb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA2 # andb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA7 # andb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA6 # andb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA5 # andb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X20, 0XA4, 0X24 # andb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA0 # andb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA1 # andb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA2 # andb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA3 # andb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA4, 0X24 # andb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA5 # andb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA6 # andb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X20, 0XA7 # andb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA0 # andb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA3 # andb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA1 # andb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA2 # andb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA7 # andb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA6 # andb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA5 # andb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X20, 0XA4, 0X24 # andb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X80 # andb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X83 # andb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X81 # andb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X82 # andb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X87 # andb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X86 # andb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X85 # andb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X84, 0X24 # andb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X80 # andb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X81 # andb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X82 # andb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X83 # andb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X84, 0X24 # andb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X85 # andb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X86 # andb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X87 # andb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X80 # andb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X83 # andb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X81 # andb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X82 # andb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X87 # andb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X86 # andb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X85 # andb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X84, 0X24 # andb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X88 # andb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8B # andb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X89 # andb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8A # andb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8F # andb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8E # andb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8D # andb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X8C, 0X24 # andb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X88 # andb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X89 # andb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8A # andb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8B # andb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8C, 0X24 # andb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8D # andb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8E # andb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X8F # andb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X88 # andb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8B # andb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X89 # andb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8A # andb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8F # andb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8E # andb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8D # andb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X8C, 0X24 # andb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X90 # andb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X93 # andb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X91 # andb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X92 # andb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X97 # andb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X96 # andb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X95 # andb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X94, 0X24 # andb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X90 # andb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X91 # andb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X92 # andb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X93 # andb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X94, 0X24 # andb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X95 # andb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X96 # andb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X97 # andb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X90 # andb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X93 # andb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X91 # andb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X92 # andb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X97 # andb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X96 # andb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X95 # andb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X94, 0X24 # andb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X98 # andb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9B # andb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X99 # andb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9A # andb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9F # andb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9E # andb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9D # andb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0X9C, 0X24 # andb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X98 # andb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X99 # andb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9A # andb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9B # andb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9C, 0X24 # andb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9D # andb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9E # andb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0X9F # andb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X98 # andb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9B # andb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X99 # andb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9A # andb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9F # andb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9E # andb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9D # andb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0X9C, 0X24 # andb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA0 # andb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA3 # andb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA1 # andb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA2 # andb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA7 # andb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA6 # andb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA5 # andb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA4, 0X24 # andb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA0 # andb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA1 # andb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA2 # andb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA3 # andb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA4, 0X24 # andb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA5 # andb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA6 # andb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA7 # andb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA0 # andb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA3 # andb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA1 # andb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA2 # andb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA7 # andb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA6 # andb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA5 # andb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA4, 0X24 # andb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA8 # andb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAB # andb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XA9 # andb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAA # andb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAF # andb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAE # andb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAD # andb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XAC, 0X24 # andb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA8 # andb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XA9 # andb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAA # andb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAB # andb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAC, 0X24 # andb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAD # andb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAE # andb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XAF # andb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA8 # andb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAB # andb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XA9 # andb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAA # andb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAF # andb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAE # andb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAD # andb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XAC, 0X24 # andb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB0 # andb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB3 # andb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB1 # andb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB2 # andb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB7 # andb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB6 # andb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB5 # andb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB4, 0X24 # andb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB0 # andb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB1 # andb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB2 # andb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB3 # andb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB4, 0X24 # andb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB5 # andb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB6 # andb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB7 # andb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB0 # andb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB3 # andb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB1 # andb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB2 # andb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB7 # andb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB6 # andb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB5 # andb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB4, 0X24 # andb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB8 # andb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBB # andb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XB9 # andb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBA # andb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBF # andb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBE # andb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBD # andb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X20, 0XBC, 0X24 # andb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB8 # andb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XB9 # andb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBA # andb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBB # andb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBC, 0X24 # andb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBD # andb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBE # andb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X20, 0XBF # andb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB8 # andb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBB # andb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XB9 # andb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBA # andb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBF # andb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBE # andb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBD # andb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X20, 0XBC, 0X24 # andb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define AND_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X06 # andw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X1E # andw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X0E # andw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X16 # andw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X3E # andw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X36 # andw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X2E # andw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X26 # andw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define AND_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X06 # andw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X1E # andw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X0E # andw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X16 # andw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X3E # andw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X36 # andw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X2E # andw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X26 # andw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define AND_AX_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X07 # andw (%bx), %ax")
#define AND_AX_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X46, 0X00 # andw (%bp), %ax")
#define AND_AX_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X04 # andw (%si), %ax")
#define AND_AX_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X05 # andw (%di), %ax")

#define AND_BX_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X1F # andw (%bx), %bx")
#define AND_BX_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X5E, 0X00 # andw (%bp), %bx")
#define AND_BX_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X1C # andw (%si), %bx")
#define AND_BX_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X1D # andw (%di), %bx")

#define AND_CX_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X0F # andw (%bx), %cx")
#define AND_CX_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X4E, 0X00 # andw (%bp), %cx")
#define AND_CX_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X0C # andw (%si), %cx")
#define AND_CX_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X0D # andw (%di), %cx")

#define AND_DX_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X17 # andw (%bx), %dx")
#define AND_DX_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X56, 0X00 # andw (%bp), %dx")
#define AND_DX_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X14 # andw (%si), %dx")
#define AND_DX_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X15 # andw (%di), %dx")

#define AND_DI_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X3F # andw (%bx), %di")
#define AND_DI_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X7E, 0X00 # andw (%bp), %di")
#define AND_DI_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X3C # andw (%si), %di")
#define AND_DI_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X3D # andw (%di), %di")

#define AND_SI_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X37 # andw (%bx), %si")
#define AND_SI_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X76, 0X00 # andw (%bp), %si")
#define AND_SI_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X34 # andw (%si), %si")
#define AND_SI_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X35 # andw (%di), %si")

#define AND_BP_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X2F # andw (%bx), %bp")
#define AND_BP_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X6E, 0X00 # andw (%bp), %bp")
#define AND_BP_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X2C # andw (%si), %bp")
#define AND_BP_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X2D # andw (%di), %bp")

#define AND_SP_FROM_PTR_BX CMT_ASM(".byte 0X23, 0X27 # andw (%bx), %sp")
#define AND_SP_FROM_PTR_BP CMT_ASM(".byte 0X23, 0X66, 0X00 # andw (%bp), %sp")
#define AND_SP_FROM_PTR_SI CMT_ASM(".byte 0X23, 0X24 # andw (%si), %sp")
#define AND_SP_FROM_PTR_DI CMT_ASM(".byte 0X23, 0X25 # andw (%di), %sp")

#define AND_AX_TO_PTR_BX CMT_ASM(".byte 0X21, 0X07 # andw %ax, (%bx)")
#define AND_AX_TO_PTR_BP CMT_ASM(".byte 0X21, 0X46, 0X00 # andw %ax, (%bp)")
#define AND_AX_TO_PTR_SI CMT_ASM(".byte 0X21, 0X04 # andw %ax, (%si)")
#define AND_AX_TO_PTR_DI CMT_ASM(".byte 0X21, 0X05 # andw %ax, (%di)")

#define AND_BX_TO_PTR_BX CMT_ASM(".byte 0X21, 0X1F # andw %bx, (%bx)")
#define AND_BX_TO_PTR_BP CMT_ASM(".byte 0X21, 0X5E, 0X00 # andw %bx, (%bp)")
#define AND_BX_TO_PTR_SI CMT_ASM(".byte 0X21, 0X1C # andw %bx, (%si)")
#define AND_BX_TO_PTR_DI CMT_ASM(".byte 0X21, 0X1D # andw %bx, (%di)")

#define AND_CX_TO_PTR_BX CMT_ASM(".byte 0X21, 0X0F # andw %cx, (%bx)")
#define AND_CX_TO_PTR_BP CMT_ASM(".byte 0X21, 0X4E, 0X00 # andw %cx, (%bp)")
#define AND_CX_TO_PTR_SI CMT_ASM(".byte 0X21, 0X0C # andw %cx, (%si)")
#define AND_CX_TO_PTR_DI CMT_ASM(".byte 0X21, 0X0D # andw %cx, (%di)")

#define AND_DX_TO_PTR_BX CMT_ASM(".byte 0X21, 0X17 # andw %dx, (%bx)")
#define AND_DX_TO_PTR_BP CMT_ASM(".byte 0X21, 0X56, 0X00 # andw %dx, (%bp)")
#define AND_DX_TO_PTR_SI CMT_ASM(".byte 0X21, 0X14 # andw %dx, (%si)")
#define AND_DX_TO_PTR_DI CMT_ASM(".byte 0X21, 0X15 # andw %dx, (%di)")

#define AND_DI_TO_PTR_BX CMT_ASM(".byte 0X21, 0X3F # andw %di, (%bx)")
#define AND_DI_TO_PTR_BP CMT_ASM(".byte 0X21, 0X7E, 0X00 # andw %di, (%bp)")
#define AND_DI_TO_PTR_SI CMT_ASM(".byte 0X21, 0X3C # andw %di, (%si)")
#define AND_DI_TO_PTR_DI CMT_ASM(".byte 0X21, 0X3D # andw %di, (%di)")

#define AND_SI_TO_PTR_BX CMT_ASM(".byte 0X21, 0X37 # andw %si, (%bx)")
#define AND_SI_TO_PTR_BP CMT_ASM(".byte 0X21, 0X76, 0X00 # andw %si, (%bp)")
#define AND_SI_TO_PTR_SI CMT_ASM(".byte 0X21, 0X34 # andw %si, (%si)")
#define AND_SI_TO_PTR_DI CMT_ASM(".byte 0X21, 0X35 # andw %si, (%di)")

#define AND_BP_TO_PTR_BX CMT_ASM(".byte 0X21, 0X2F # andw %bp, (%bx)")
#define AND_BP_TO_PTR_BP CMT_ASM(".byte 0X21, 0X6E, 0X00 # andw %bp, (%bp)")
#define AND_BP_TO_PTR_SI CMT_ASM(".byte 0X21, 0X2C # andw %bp, (%si)")
#define AND_BP_TO_PTR_DI CMT_ASM(".byte 0X21, 0X2D # andw %bp, (%di)")

#define AND_SP_TO_PTR_BX CMT_ASM(".byte 0X21, 0X27 # andw %sp, (%bx)")
#define AND_SP_TO_PTR_BP CMT_ASM(".byte 0X21, 0X66, 0X00 # andw %sp, (%bp)")
#define AND_SP_TO_PTR_SI CMT_ASM(".byte 0X21, 0X24 # andw %sp, (%si)")
#define AND_SP_TO_PTR_DI CMT_ASM(".byte 0X21, 0X25 # andw %sp, (%di)")

#define AND_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X87 # andw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X86 # andw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X84 # andw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X85 # andw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define AND_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9F # andw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9E # andw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9C # andw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9D # andw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define AND_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8F # andw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8E # andw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8C # andw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8D # andw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define AND_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X97 # andw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X96 # andw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X94 # andw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X95 # andw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define AND_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBF # andw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBE # andw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBC # andw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBD # andw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define AND_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB7 # andw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB6 # andw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB4 # andw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB5 # andw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define AND_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAF # andw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAE # andw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAC # andw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAD # andw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define AND_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA7 # andw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA6 # andw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA4 # andw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA5 # andw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define AND_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X87 # andw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X86 # andw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X84 # andw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X85 # andw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9F # andw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9E # andw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9C # andw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9D # andw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8F # andw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8E # andw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8C # andw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8D # andw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X97 # andw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X96 # andw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X94 # andw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X95 # andw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBF # andw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBE # andw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBC # andw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBD # andw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB7 # andw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB6 # andw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB4 # andw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB5 # andw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAF # andw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAE # andw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAC # andw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAD # andw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA7 # andw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA6 # andw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA4 # andw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA5 # andw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X05 # andw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X1D # andw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X0D # andw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X15 # andw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X3D # andw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X35 # andw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X2D # andw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X25 # andw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define AND_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X05 # andw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X1D # andw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X0D # andw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X15 # andw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X3D # andw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X35 # andw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X2D # andw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X25 # andw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X00 # andw (%eax), %ax")
#define AND_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X03 # andw (%ebx), %ax")
#define AND_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X01 # andw (%ecx), %ax")
#define AND_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X02 # andw (%edx), %ax")
#define AND_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X07 # andw (%edi), %ax")
#define AND_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X06 # andw (%esi), %ax")
#define AND_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X45, 0X00 # andw (%ebp), %ax")
#define AND_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X04, 0X24 # andw (%esp), %ax")
#define AND_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X07 # andw (%bx), %ax")
#define AND_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X46, 0X00 # andw (%bp), %ax")
#define AND_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X04 # andw (%si), %ax")
#define AND_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X05 # andw (%di), %ax")

#define AND_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X18 # andw (%eax), %bx")
#define AND_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X1B # andw (%ebx), %bx")
#define AND_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X19 # andw (%ecx), %bx")
#define AND_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X1A # andw (%edx), %bx")
#define AND_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X1F # andw (%edi), %bx")
#define AND_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X1E # andw (%esi), %bx")
#define AND_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X5D, 0X00 # andw (%ebp), %bx")
#define AND_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X1C, 0X24 # andw (%esp), %bx")
#define AND_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1F # andw (%bx), %bx")
#define AND_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X5E, 0X00 # andw (%bp), %bx")
#define AND_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1C # andw (%si), %bx")
#define AND_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1D # andw (%di), %bx")

#define AND_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X08 # andw (%eax), %cx")
#define AND_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X0B # andw (%ebx), %cx")
#define AND_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X09 # andw (%ecx), %cx")
#define AND_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X0A # andw (%edx), %cx")
#define AND_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X0F # andw (%edi), %cx")
#define AND_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X0E # andw (%esi), %cx")
#define AND_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X4D, 0X00 # andw (%ebp), %cx")
#define AND_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X0C, 0X24 # andw (%esp), %cx")
#define AND_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0F # andw (%bx), %cx")
#define AND_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X4E, 0X00 # andw (%bp), %cx")
#define AND_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0C # andw (%si), %cx")
#define AND_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0D # andw (%di), %cx")

#define AND_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X10 # andw (%eax), %dx")
#define AND_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X13 # andw (%ebx), %dx")
#define AND_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X11 # andw (%ecx), %dx")
#define AND_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X12 # andw (%edx), %dx")
#define AND_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X17 # andw (%edi), %dx")
#define AND_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X16 # andw (%esi), %dx")
#define AND_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X55, 0X00 # andw (%ebp), %dx")
#define AND_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X14, 0X24 # andw (%esp), %dx")
#define AND_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X17 # andw (%bx), %dx")
#define AND_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X56, 0X00 # andw (%bp), %dx")
#define AND_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X14 # andw (%si), %dx")
#define AND_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X15 # andw (%di), %dx")

#define AND_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X38 # andw (%eax), %di")
#define AND_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X3B # andw (%ebx), %di")
#define AND_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X39 # andw (%ecx), %di")
#define AND_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X3A # andw (%edx), %di")
#define AND_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X3F # andw (%edi), %di")
#define AND_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X3E # andw (%esi), %di")
#define AND_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X7D, 0X00 # andw (%ebp), %di")
#define AND_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X3C, 0X24 # andw (%esp), %di")
#define AND_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3F # andw (%bx), %di")
#define AND_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X7E, 0X00 # andw (%bp), %di")
#define AND_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3C # andw (%si), %di")
#define AND_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3D # andw (%di), %di")

#define AND_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X30 # andw (%eax), %si")
#define AND_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X33 # andw (%ebx), %si")
#define AND_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X31 # andw (%ecx), %si")
#define AND_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X32 # andw (%edx), %si")
#define AND_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X37 # andw (%edi), %si")
#define AND_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X36 # andw (%esi), %si")
#define AND_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X75, 0X00 # andw (%ebp), %si")
#define AND_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X34, 0X24 # andw (%esp), %si")
#define AND_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X37 # andw (%bx), %si")
#define AND_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X76, 0X00 # andw (%bp), %si")
#define AND_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X34 # andw (%si), %si")
#define AND_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X35 # andw (%di), %si")

#define AND_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X28 # andw (%eax), %bp")
#define AND_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X2B # andw (%ebx), %bp")
#define AND_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X29 # andw (%ecx), %bp")
#define AND_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X2A # andw (%edx), %bp")
#define AND_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X2F # andw (%edi), %bp")
#define AND_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X2E # andw (%esi), %bp")
#define AND_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X6D, 0X00 # andw (%ebp), %bp")
#define AND_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X2C, 0X24 # andw (%esp), %bp")
#define AND_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2F # andw (%bx), %bp")
#define AND_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X6E, 0X00 # andw (%bp), %bp")
#define AND_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2C # andw (%si), %bp")
#define AND_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2D # andw (%di), %bp")

#define AND_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X23, 0X20 # andw (%eax), %sp")
#define AND_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X23, 0X23 # andw (%ebx), %sp")
#define AND_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X23, 0X21 # andw (%ecx), %sp")
#define AND_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X23, 0X22 # andw (%edx), %sp")
#define AND_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X23, 0X27 # andw (%edi), %sp")
#define AND_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X23, 0X26 # andw (%esi), %sp")
#define AND_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X23, 0X65, 0X00 # andw (%ebp), %sp")
#define AND_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X23, 0X24, 0X24 # andw (%esp), %sp")
#define AND_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X27 # andw (%bx), %sp")
#define AND_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X66, 0X00 # andw (%bp), %sp")
#define AND_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X24 # andw (%si), %sp")
#define AND_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X25 # andw (%di), %sp")

#define AND_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X00 # andw %ax, (%eax)")
#define AND_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X03 # andw %ax, (%ebx)")
#define AND_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X01 # andw %ax, (%ecx)")
#define AND_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X02 # andw %ax, (%edx)")
#define AND_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X07 # andw %ax, (%edi)")
#define AND_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X06 # andw %ax, (%esi)")
#define AND_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X45, 0X00 # andw %ax, (%ebp)")
#define AND_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X04, 0X24 # andw %ax, (%esp)")
#define AND_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X07 # andw %ax, (%bx)")
#define AND_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X46, 0X00 # andw %ax, (%bp)")
#define AND_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X04 # andw %ax, (%si)")
#define AND_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X05 # andw %ax, (%di)")

#define AND_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X18 # andw %bx, (%eax)")
#define AND_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X1B # andw %bx, (%ebx)")
#define AND_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X19 # andw %bx, (%ecx)")
#define AND_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X1A # andw %bx, (%edx)")
#define AND_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X1F # andw %bx, (%edi)")
#define AND_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X1E # andw %bx, (%esi)")
#define AND_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X5D, 0X00 # andw %bx, (%ebp)")
#define AND_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X1C, 0X24 # andw %bx, (%esp)")
#define AND_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1F # andw %bx, (%bx)")
#define AND_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X5E, 0X00 # andw %bx, (%bp)")
#define AND_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1C # andw %bx, (%si)")
#define AND_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1D # andw %bx, (%di)")

#define AND_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X08 # andw %cx, (%eax)")
#define AND_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X0B # andw %cx, (%ebx)")
#define AND_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X09 # andw %cx, (%ecx)")
#define AND_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X0A # andw %cx, (%edx)")
#define AND_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X0F # andw %cx, (%edi)")
#define AND_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X0E # andw %cx, (%esi)")
#define AND_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X4D, 0X00 # andw %cx, (%ebp)")
#define AND_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X0C, 0X24 # andw %cx, (%esp)")
#define AND_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0F # andw %cx, (%bx)")
#define AND_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X4E, 0X00 # andw %cx, (%bp)")
#define AND_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0C # andw %cx, (%si)")
#define AND_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0D # andw %cx, (%di)")

#define AND_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X10 # andw %dx, (%eax)")
#define AND_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X13 # andw %dx, (%ebx)")
#define AND_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X11 # andw %dx, (%ecx)")
#define AND_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X12 # andw %dx, (%edx)")
#define AND_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X17 # andw %dx, (%edi)")
#define AND_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X16 # andw %dx, (%esi)")
#define AND_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X55, 0X00 # andw %dx, (%ebp)")
#define AND_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X14, 0X24 # andw %dx, (%esp)")
#define AND_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X17 # andw %dx, (%bx)")
#define AND_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X56, 0X00 # andw %dx, (%bp)")
#define AND_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X14 # andw %dx, (%si)")
#define AND_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X15 # andw %dx, (%di)")

#define AND_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X38 # andw %di, (%eax)")
#define AND_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X3B # andw %di, (%ebx)")
#define AND_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X39 # andw %di, (%ecx)")
#define AND_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X3A # andw %di, (%edx)")
#define AND_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X3F # andw %di, (%edi)")
#define AND_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X3E # andw %di, (%esi)")
#define AND_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X7D, 0X00 # andw %di, (%ebp)")
#define AND_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X3C, 0X24 # andw %di, (%esp)")
#define AND_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3F # andw %di, (%bx)")
#define AND_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X7E, 0X00 # andw %di, (%bp)")
#define AND_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3C # andw %di, (%si)")
#define AND_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3D # andw %di, (%di)")

#define AND_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X30 # andw %si, (%eax)")
#define AND_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X33 # andw %si, (%ebx)")
#define AND_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X31 # andw %si, (%ecx)")
#define AND_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X32 # andw %si, (%edx)")
#define AND_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X37 # andw %si, (%edi)")
#define AND_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X36 # andw %si, (%esi)")
#define AND_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X75, 0X00 # andw %si, (%ebp)")
#define AND_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X34, 0X24 # andw %si, (%esp)")
#define AND_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X37 # andw %si, (%bx)")
#define AND_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X76, 0X00 # andw %si, (%bp)")
#define AND_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X34 # andw %si, (%si)")
#define AND_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X35 # andw %si, (%di)")

#define AND_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X28 # andw %bp, (%eax)")
#define AND_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X2B # andw %bp, (%ebx)")
#define AND_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X29 # andw %bp, (%ecx)")
#define AND_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X2A # andw %bp, (%edx)")
#define AND_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X2F # andw %bp, (%edi)")
#define AND_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X2E # andw %bp, (%esi)")
#define AND_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X6D, 0X00 # andw %bp, (%ebp)")
#define AND_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X2C, 0X24 # andw %bp, (%esp)")
#define AND_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2F # andw %bp, (%bx)")
#define AND_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X6E, 0X00 # andw %bp, (%bp)")
#define AND_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2C # andw %bp, (%si)")
#define AND_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2D # andw %bp, (%di)")

#define AND_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X21, 0X20 # andw %sp, (%eax)")
#define AND_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X21, 0X23 # andw %sp, (%ebx)")
#define AND_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X21, 0X21 # andw %sp, (%ecx)")
#define AND_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X21, 0X22 # andw %sp, (%edx)")
#define AND_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X21, 0X27 # andw %sp, (%edi)")
#define AND_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X21, 0X26 # andw %sp, (%esi)")
#define AND_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X21, 0X65, 0X00 # andw %sp, (%ebp)")
#define AND_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X21, 0X24, 0X24 # andw %sp, (%esp)")
#define AND_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X27 # andw %sp, (%bx)")
#define AND_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X66, 0X00 # andw %sp, (%bp)")
#define AND_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X24 # andw %sp, (%si)")
#define AND_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X25 # andw %sp, (%di)")

#define AND_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X80 # andw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X83 # andw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X81 # andw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X82 # andw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X87 # andw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X86 # andw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X85 # andw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X87 # andw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X86 # andw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X84 # andw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X85 # andw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define AND_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X98 # andw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9B # andw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X99 # andw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9A # andw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9F # andw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9E # andw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9D # andw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9F # andw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9E # andw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9C # andw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9D # andw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define AND_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X88 # andw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8B # andw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X89 # andw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8A # andw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8F # andw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8E # andw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8D # andw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8F # andw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8E # andw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8C # andw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8D # andw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define AND_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X90 # andw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X93 # andw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X91 # andw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X92 # andw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X97 # andw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X96 # andw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X95 # andw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X97 # andw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X96 # andw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X94 # andw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X95 # andw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define AND_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB8 # andw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBB # andw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB9 # andw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBA # andw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBF # andw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBE # andw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBD # andw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBF # andw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBE # andw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBC # andw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBD # andw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define AND_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB0 # andw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB3 # andw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB1 # andw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB2 # andw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB7 # andw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB6 # andw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB5 # andw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB7 # andw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB6 # andw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB4 # andw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB5 # andw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define AND_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA8 # andw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAB # andw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA9 # andw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAA # andw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAF # andw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAE # andw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAD # andw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAF # andw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAE # andw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAC # andw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAD # andw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define AND_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA0 # andw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA3 # andw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA1 # andw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA2 # andw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA7 # andw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA6 # andw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA5 # andw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA7 # andw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA6 # andw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA4 # andw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA5 # andw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define AND_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X80 # andw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X83 # andw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X81 # andw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X82 # andw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X87 # andw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X86 # andw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X85 # andw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X84, 0X24 # andw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X87 # andw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X86 # andw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X84 # andw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X85 # andw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X98 # andw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9B # andw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X99 # andw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9A # andw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9F # andw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9E # andw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9D # andw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9C, 0X24 # andw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9F # andw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9E # andw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9C # andw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9D # andw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X88 # andw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8B # andw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X89 # andw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8A # andw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8F # andw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8E # andw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8D # andw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8C, 0X24 # andw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8F # andw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8E # andw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8C # andw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8D # andw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X90 # andw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X93 # andw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X91 # andw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X92 # andw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X97 # andw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X96 # andw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X95 # andw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X94, 0X24 # andw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X97 # andw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X96 # andw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X94 # andw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X95 # andw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB8 # andw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBB # andw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB9 # andw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBA # andw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBF # andw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBE # andw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBD # andw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBC, 0X24 # andw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBF # andw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBE # andw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBC # andw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBD # andw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB0 # andw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB3 # andw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB1 # andw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB2 # andw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB7 # andw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB6 # andw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB5 # andw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB4, 0X24 # andw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB7 # andw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB6 # andw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB4 # andw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB5 # andw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA8 # andw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAB # andw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA9 # andw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAA # andw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAF # andw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAE # andw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAD # andw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAC, 0X24 # andw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAF # andw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAE # andw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAC # andw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAD # andw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA0 # andw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA3 # andw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA1 # andw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA2 # andw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA7 # andw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA6 # andw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA5 # andw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA4, 0X24 # andw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA7 # andw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA6 # andw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA4 # andw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA5 # andw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X04, 0X25 # andw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X1C, 0X25 # andw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X0C, 0X25 # andw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X14, 0X25 # andw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X3C, 0X25 # andw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X34, 0X25 # andw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X2C, 0X25 # andw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X24, 0X25 # andw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X04, 0X25 # andw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0C, 0X25 # andw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X14, 0X25 # andw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1C, 0X25 # andw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X24, 0X25 # andw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2C, 0X25 # andw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X34, 0X25 # andw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3C, 0X25 # andw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define AND_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X04, 0X25 # andw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X1C, 0X25 # andw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X0C, 0X25 # andw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X14, 0X25 # andw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X3C, 0X25 # andw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X34, 0X25 # andw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X2C, 0X25 # andw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X24, 0X25 # andw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X04, 0X25 # andw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0C, 0X25 # andw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X14, 0X25 # andw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1C, 0X25 # andw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X24, 0X25 # andw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2C, 0X25 # andw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X34, 0X25 # andw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3C, 0X25 # andw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X00 # andw (%rax), %ax")
#define AND_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X03 # andw (%rbx), %ax")
#define AND_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X01 # andw (%rcx), %ax")
#define AND_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X02 # andw (%rdx), %ax")
#define AND_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X07 # andw (%rdi), %ax")
#define AND_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X06 # andw (%rsi), %ax")
#define AND_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X45, 0X00 # andw (%rbp), %ax")
#define AND_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X04, 0X24 # andw (%rsp), %ax")
#define AND_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X00 # andw (%r8), %ax")
#define AND_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X01 # andw (%r9), %ax")
#define AND_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X02 # andw (%r10), %ax")
#define AND_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X03 # andw (%r11), %ax")
#define AND_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X04, 0X24 # andw (%r12), %ax")
#define AND_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X45, 0X00 # andw (%r13), %ax")
#define AND_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X06 # andw (%r14), %ax")
#define AND_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X07 # andw (%r15), %ax")
#define AND_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X00 # andw (%eax), %ax")
#define AND_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X03 # andw (%ebx), %ax")
#define AND_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X01 # andw (%ecx), %ax")
#define AND_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X02 # andw (%edx), %ax")
#define AND_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X07 # andw (%edi), %ax")
#define AND_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X06 # andw (%esi), %ax")
#define AND_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X45, 0X00 # andw (%ebp), %ax")
#define AND_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X04, 0X24 # andw (%esp), %ax")

#define AND_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X18 # andw (%rax), %bx")
#define AND_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X1B # andw (%rbx), %bx")
#define AND_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X19 # andw (%rcx), %bx")
#define AND_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X1A # andw (%rdx), %bx")
#define AND_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X1F # andw (%rdi), %bx")
#define AND_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X1E # andw (%rsi), %bx")
#define AND_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X5D, 0X00 # andw (%rbp), %bx")
#define AND_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X1C, 0X24 # andw (%rsp), %bx")
#define AND_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X18 # andw (%r8), %bx")
#define AND_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X19 # andw (%r9), %bx")
#define AND_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X1A # andw (%r10), %bx")
#define AND_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X1B # andw (%r11), %bx")
#define AND_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X1C, 0X24 # andw (%r12), %bx")
#define AND_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X5D, 0X00 # andw (%r13), %bx")
#define AND_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X1E # andw (%r14), %bx")
#define AND_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X1F # andw (%r15), %bx")
#define AND_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X18 # andw (%eax), %bx")
#define AND_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1B # andw (%ebx), %bx")
#define AND_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X19 # andw (%ecx), %bx")
#define AND_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1A # andw (%edx), %bx")
#define AND_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1F # andw (%edi), %bx")
#define AND_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1E # andw (%esi), %bx")
#define AND_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X5D, 0X00 # andw (%ebp), %bx")
#define AND_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X1C, 0X24 # andw (%esp), %bx")

#define AND_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X08 # andw (%rax), %cx")
#define AND_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X0B # andw (%rbx), %cx")
#define AND_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X09 # andw (%rcx), %cx")
#define AND_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X0A # andw (%rdx), %cx")
#define AND_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X0F # andw (%rdi), %cx")
#define AND_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X0E # andw (%rsi), %cx")
#define AND_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X4D, 0X00 # andw (%rbp), %cx")
#define AND_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X0C, 0X24 # andw (%rsp), %cx")
#define AND_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X08 # andw (%r8), %cx")
#define AND_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X09 # andw (%r9), %cx")
#define AND_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X0A # andw (%r10), %cx")
#define AND_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X0B # andw (%r11), %cx")
#define AND_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X0C, 0X24 # andw (%r12), %cx")
#define AND_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X4D, 0X00 # andw (%r13), %cx")
#define AND_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X0E # andw (%r14), %cx")
#define AND_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X0F # andw (%r15), %cx")
#define AND_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X08 # andw (%eax), %cx")
#define AND_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0B # andw (%ebx), %cx")
#define AND_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X09 # andw (%ecx), %cx")
#define AND_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0A # andw (%edx), %cx")
#define AND_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0F # andw (%edi), %cx")
#define AND_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0E # andw (%esi), %cx")
#define AND_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X4D, 0X00 # andw (%ebp), %cx")
#define AND_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X0C, 0X24 # andw (%esp), %cx")

#define AND_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X10 # andw (%rax), %dx")
#define AND_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X13 # andw (%rbx), %dx")
#define AND_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X11 # andw (%rcx), %dx")
#define AND_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X12 # andw (%rdx), %dx")
#define AND_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X17 # andw (%rdi), %dx")
#define AND_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X16 # andw (%rsi), %dx")
#define AND_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X55, 0X00 # andw (%rbp), %dx")
#define AND_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X14, 0X24 # andw (%rsp), %dx")
#define AND_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X10 # andw (%r8), %dx")
#define AND_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X11 # andw (%r9), %dx")
#define AND_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X12 # andw (%r10), %dx")
#define AND_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X13 # andw (%r11), %dx")
#define AND_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X14, 0X24 # andw (%r12), %dx")
#define AND_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X55, 0X00 # andw (%r13), %dx")
#define AND_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X16 # andw (%r14), %dx")
#define AND_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X17 # andw (%r15), %dx")
#define AND_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X10 # andw (%eax), %dx")
#define AND_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X13 # andw (%ebx), %dx")
#define AND_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X11 # andw (%ecx), %dx")
#define AND_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X12 # andw (%edx), %dx")
#define AND_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X17 # andw (%edi), %dx")
#define AND_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X16 # andw (%esi), %dx")
#define AND_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X55, 0X00 # andw (%ebp), %dx")
#define AND_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X14, 0X24 # andw (%esp), %dx")

#define AND_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X38 # andw (%rax), %di")
#define AND_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X3B # andw (%rbx), %di")
#define AND_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X39 # andw (%rcx), %di")
#define AND_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X3A # andw (%rdx), %di")
#define AND_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X3F # andw (%rdi), %di")
#define AND_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X3E # andw (%rsi), %di")
#define AND_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X7D, 0X00 # andw (%rbp), %di")
#define AND_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X3C, 0X24 # andw (%rsp), %di")
#define AND_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X38 # andw (%r8), %di")
#define AND_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X39 # andw (%r9), %di")
#define AND_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X3A # andw (%r10), %di")
#define AND_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X3B # andw (%r11), %di")
#define AND_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X3C, 0X24 # andw (%r12), %di")
#define AND_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X7D, 0X00 # andw (%r13), %di")
#define AND_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X3E # andw (%r14), %di")
#define AND_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X3F # andw (%r15), %di")
#define AND_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X38 # andw (%eax), %di")
#define AND_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3B # andw (%ebx), %di")
#define AND_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X39 # andw (%ecx), %di")
#define AND_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3A # andw (%edx), %di")
#define AND_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3F # andw (%edi), %di")
#define AND_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3E # andw (%esi), %di")
#define AND_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X7D, 0X00 # andw (%ebp), %di")
#define AND_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X3C, 0X24 # andw (%esp), %di")

#define AND_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X30 # andw (%rax), %si")
#define AND_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X33 # andw (%rbx), %si")
#define AND_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X31 # andw (%rcx), %si")
#define AND_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X32 # andw (%rdx), %si")
#define AND_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X37 # andw (%rdi), %si")
#define AND_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X36 # andw (%rsi), %si")
#define AND_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X75, 0X00 # andw (%rbp), %si")
#define AND_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X34, 0X24 # andw (%rsp), %si")
#define AND_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X30 # andw (%r8), %si")
#define AND_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X31 # andw (%r9), %si")
#define AND_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X32 # andw (%r10), %si")
#define AND_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X33 # andw (%r11), %si")
#define AND_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X34, 0X24 # andw (%r12), %si")
#define AND_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X75, 0X00 # andw (%r13), %si")
#define AND_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X36 # andw (%r14), %si")
#define AND_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X37 # andw (%r15), %si")
#define AND_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X30 # andw (%eax), %si")
#define AND_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X33 # andw (%ebx), %si")
#define AND_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X31 # andw (%ecx), %si")
#define AND_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X32 # andw (%edx), %si")
#define AND_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X37 # andw (%edi), %si")
#define AND_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X36 # andw (%esi), %si")
#define AND_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X75, 0X00 # andw (%ebp), %si")
#define AND_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X34, 0X24 # andw (%esp), %si")

#define AND_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X28 # andw (%rax), %bp")
#define AND_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X2B # andw (%rbx), %bp")
#define AND_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X29 # andw (%rcx), %bp")
#define AND_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X2A # andw (%rdx), %bp")
#define AND_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X2F # andw (%rdi), %bp")
#define AND_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X2E # andw (%rsi), %bp")
#define AND_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X6D, 0X00 # andw (%rbp), %bp")
#define AND_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X2C, 0X24 # andw (%rsp), %bp")
#define AND_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X28 # andw (%r8), %bp")
#define AND_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X29 # andw (%r9), %bp")
#define AND_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X2A # andw (%r10), %bp")
#define AND_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X2B # andw (%r11), %bp")
#define AND_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X2C, 0X24 # andw (%r12), %bp")
#define AND_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X6D, 0X00 # andw (%r13), %bp")
#define AND_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X2E # andw (%r14), %bp")
#define AND_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X2F # andw (%r15), %bp")
#define AND_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X28 # andw (%eax), %bp")
#define AND_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2B # andw (%ebx), %bp")
#define AND_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X29 # andw (%ecx), %bp")
#define AND_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2A # andw (%edx), %bp")
#define AND_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2F # andw (%edi), %bp")
#define AND_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2E # andw (%esi), %bp")
#define AND_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X6D, 0X00 # andw (%ebp), %bp")
#define AND_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X2C, 0X24 # andw (%esp), %bp")

#define AND_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X23, 0X20 # andw (%rax), %sp")
#define AND_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X23, 0X23 # andw (%rbx), %sp")
#define AND_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X23, 0X21 # andw (%rcx), %sp")
#define AND_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X23, 0X22 # andw (%rdx), %sp")
#define AND_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X23, 0X27 # andw (%rdi), %sp")
#define AND_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X23, 0X26 # andw (%rsi), %sp")
#define AND_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X23, 0X65, 0X00 # andw (%rbp), %sp")
#define AND_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X23, 0X24, 0X24 # andw (%rsp), %sp")
#define AND_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X20 # andw (%r8), %sp")
#define AND_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X21 # andw (%r9), %sp")
#define AND_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X22 # andw (%r10), %sp")
#define AND_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X23 # andw (%r11), %sp")
#define AND_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X24, 0X24 # andw (%r12), %sp")
#define AND_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X65, 0X00 # andw (%r13), %sp")
#define AND_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X26 # andw (%r14), %sp")
#define AND_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X23, 0X27 # andw (%r15), %sp")
#define AND_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X20 # andw (%eax), %sp")
#define AND_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X23 # andw (%ebx), %sp")
#define AND_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X21 # andw (%ecx), %sp")
#define AND_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X23, 0X22 # andw (%edx), %sp")
#define AND_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X27 # andw (%edi), %sp")
#define AND_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X23, 0X26 # andw (%esi), %sp")
#define AND_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X65, 0X00 # andw (%ebp), %sp")
#define AND_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X23, 0X24, 0X24 # andw (%esp), %sp")

#define AND_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X00 # andw (%rax), %r8w")
#define AND_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X03 # andw (%rbx), %r8w")
#define AND_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X01 # andw (%rcx), %r8w")
#define AND_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X02 # andw (%rdx), %r8w")
#define AND_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X07 # andw (%rdi), %r8w")
#define AND_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X06 # andw (%rsi), %r8w")
#define AND_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X45, 0X00 # andw (%rbp), %r8w")
#define AND_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X04, 0X24 # andw (%rsp), %r8w")
#define AND_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X00 # andw (%r8), %r8w")
#define AND_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X01 # andw (%r9), %r8w")
#define AND_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X02 # andw (%r10), %r8w")
#define AND_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X03 # andw (%r11), %r8w")
#define AND_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X04, 0X24 # andw (%r12), %r8w")
#define AND_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X45, 0X00 # andw (%r13), %r8w")
#define AND_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X06 # andw (%r14), %r8w")
#define AND_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X07 # andw (%r15), %r8w")
#define AND_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X00 # andw (%eax), %r8w")
#define AND_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X03 # andw (%ebx), %r8w")
#define AND_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X01 # andw (%ecx), %r8w")
#define AND_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X02 # andw (%edx), %r8w")
#define AND_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X07 # andw (%edi), %r8w")
#define AND_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X06 # andw (%esi), %r8w")
#define AND_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X45, 0X00 # andw (%ebp), %r8w")
#define AND_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X04, 0X24 # andw (%esp), %r8w")

#define AND_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X08 # andw (%rax), %r9w")
#define AND_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0B # andw (%rbx), %r9w")
#define AND_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X09 # andw (%rcx), %r9w")
#define AND_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0A # andw (%rdx), %r9w")
#define AND_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0F # andw (%rdi), %r9w")
#define AND_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0E # andw (%rsi), %r9w")
#define AND_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X4D, 0X00 # andw (%rbp), %r9w")
#define AND_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X0C, 0X24 # andw (%rsp), %r9w")
#define AND_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X08 # andw (%r8), %r9w")
#define AND_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X09 # andw (%r9), %r9w")
#define AND_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X0A # andw (%r10), %r9w")
#define AND_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X0B # andw (%r11), %r9w")
#define AND_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X0C, 0X24 # andw (%r12), %r9w")
#define AND_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X4D, 0X00 # andw (%r13), %r9w")
#define AND_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X0E # andw (%r14), %r9w")
#define AND_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X0F # andw (%r15), %r9w")
#define AND_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X08 # andw (%eax), %r9w")
#define AND_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X0B # andw (%ebx), %r9w")
#define AND_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X09 # andw (%ecx), %r9w")
#define AND_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X0A # andw (%edx), %r9w")
#define AND_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X0F # andw (%edi), %r9w")
#define AND_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X0E # andw (%esi), %r9w")
#define AND_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X4D, 0X00 # andw (%ebp), %r9w")
#define AND_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X0C, 0X24 # andw (%esp), %r9w")

#define AND_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X10 # andw (%rax), %r10w")
#define AND_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X13 # andw (%rbx), %r10w")
#define AND_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X11 # andw (%rcx), %r10w")
#define AND_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X12 # andw (%rdx), %r10w")
#define AND_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X17 # andw (%rdi), %r10w")
#define AND_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X16 # andw (%rsi), %r10w")
#define AND_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X55, 0X00 # andw (%rbp), %r10w")
#define AND_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X14, 0X24 # andw (%rsp), %r10w")
#define AND_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X10 # andw (%r8), %r10w")
#define AND_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X11 # andw (%r9), %r10w")
#define AND_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X12 # andw (%r10), %r10w")
#define AND_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X13 # andw (%r11), %r10w")
#define AND_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X14, 0X24 # andw (%r12), %r10w")
#define AND_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X55, 0X00 # andw (%r13), %r10w")
#define AND_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X16 # andw (%r14), %r10w")
#define AND_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X17 # andw (%r15), %r10w")
#define AND_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X10 # andw (%eax), %r10w")
#define AND_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X13 # andw (%ebx), %r10w")
#define AND_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X11 # andw (%ecx), %r10w")
#define AND_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X12 # andw (%edx), %r10w")
#define AND_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X17 # andw (%edi), %r10w")
#define AND_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X16 # andw (%esi), %r10w")
#define AND_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X55, 0X00 # andw (%ebp), %r10w")
#define AND_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X14, 0X24 # andw (%esp), %r10w")

#define AND_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X18 # andw (%rax), %r11w")
#define AND_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1B # andw (%rbx), %r11w")
#define AND_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X19 # andw (%rcx), %r11w")
#define AND_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1A # andw (%rdx), %r11w")
#define AND_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1F # andw (%rdi), %r11w")
#define AND_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1E # andw (%rsi), %r11w")
#define AND_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X5D, 0X00 # andw (%rbp), %r11w")
#define AND_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X1C, 0X24 # andw (%rsp), %r11w")
#define AND_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X18 # andw (%r8), %r11w")
#define AND_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X19 # andw (%r9), %r11w")
#define AND_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X1A # andw (%r10), %r11w")
#define AND_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X1B # andw (%r11), %r11w")
#define AND_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X1C, 0X24 # andw (%r12), %r11w")
#define AND_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X5D, 0X00 # andw (%r13), %r11w")
#define AND_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X1E # andw (%r14), %r11w")
#define AND_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X1F # andw (%r15), %r11w")
#define AND_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X18 # andw (%eax), %r11w")
#define AND_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X1B # andw (%ebx), %r11w")
#define AND_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X19 # andw (%ecx), %r11w")
#define AND_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X1A # andw (%edx), %r11w")
#define AND_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X1F # andw (%edi), %r11w")
#define AND_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X1E # andw (%esi), %r11w")
#define AND_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X5D, 0X00 # andw (%ebp), %r11w")
#define AND_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X1C, 0X24 # andw (%esp), %r11w")

#define AND_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X20 # andw (%rax), %r12w")
#define AND_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X23 # andw (%rbx), %r12w")
#define AND_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X21 # andw (%rcx), %r12w")
#define AND_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X22 # andw (%rdx), %r12w")
#define AND_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X27 # andw (%rdi), %r12w")
#define AND_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X26 # andw (%rsi), %r12w")
#define AND_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X65, 0X00 # andw (%rbp), %r12w")
#define AND_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X24, 0X24 # andw (%rsp), %r12w")
#define AND_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X20 # andw (%r8), %r12w")
#define AND_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X21 # andw (%r9), %r12w")
#define AND_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X22 # andw (%r10), %r12w")
#define AND_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X23 # andw (%r11), %r12w")
#define AND_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X24, 0X24 # andw (%r12), %r12w")
#define AND_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X65, 0X00 # andw (%r13), %r12w")
#define AND_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X26 # andw (%r14), %r12w")
#define AND_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X27 # andw (%r15), %r12w")
#define AND_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X20 # andw (%eax), %r12w")
#define AND_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X23 # andw (%ebx), %r12w")
#define AND_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X21 # andw (%ecx), %r12w")
#define AND_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X22 # andw (%edx), %r12w")
#define AND_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X27 # andw (%edi), %r12w")
#define AND_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X26 # andw (%esi), %r12w")
#define AND_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X65, 0X00 # andw (%ebp), %r12w")
#define AND_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X24, 0X24 # andw (%esp), %r12w")

#define AND_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X28 # andw (%rax), %r13w")
#define AND_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2B # andw (%rbx), %r13w")
#define AND_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X29 # andw (%rcx), %r13w")
#define AND_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2A # andw (%rdx), %r13w")
#define AND_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2F # andw (%rdi), %r13w")
#define AND_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2E # andw (%rsi), %r13w")
#define AND_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X6D, 0X00 # andw (%rbp), %r13w")
#define AND_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X2C, 0X24 # andw (%rsp), %r13w")
#define AND_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X28 # andw (%r8), %r13w")
#define AND_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X29 # andw (%r9), %r13w")
#define AND_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X2A # andw (%r10), %r13w")
#define AND_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X2B # andw (%r11), %r13w")
#define AND_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X2C, 0X24 # andw (%r12), %r13w")
#define AND_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X6D, 0X00 # andw (%r13), %r13w")
#define AND_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X2E # andw (%r14), %r13w")
#define AND_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X2F # andw (%r15), %r13w")
#define AND_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X28 # andw (%eax), %r13w")
#define AND_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X2B # andw (%ebx), %r13w")
#define AND_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X29 # andw (%ecx), %r13w")
#define AND_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X2A # andw (%edx), %r13w")
#define AND_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X2F # andw (%edi), %r13w")
#define AND_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X2E # andw (%esi), %r13w")
#define AND_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X6D, 0X00 # andw (%ebp), %r13w")
#define AND_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X2C, 0X24 # andw (%esp), %r13w")

#define AND_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X30 # andw (%rax), %r14w")
#define AND_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X33 # andw (%rbx), %r14w")
#define AND_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X31 # andw (%rcx), %r14w")
#define AND_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X32 # andw (%rdx), %r14w")
#define AND_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X37 # andw (%rdi), %r14w")
#define AND_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X36 # andw (%rsi), %r14w")
#define AND_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X75, 0X00 # andw (%rbp), %r14w")
#define AND_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X34, 0X24 # andw (%rsp), %r14w")
#define AND_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X30 # andw (%r8), %r14w")
#define AND_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X31 # andw (%r9), %r14w")
#define AND_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X32 # andw (%r10), %r14w")
#define AND_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X33 # andw (%r11), %r14w")
#define AND_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X34, 0X24 # andw (%r12), %r14w")
#define AND_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X75, 0X00 # andw (%r13), %r14w")
#define AND_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X36 # andw (%r14), %r14w")
#define AND_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X37 # andw (%r15), %r14w")
#define AND_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X30 # andw (%eax), %r14w")
#define AND_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X33 # andw (%ebx), %r14w")
#define AND_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X31 # andw (%ecx), %r14w")
#define AND_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X32 # andw (%edx), %r14w")
#define AND_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X37 # andw (%edi), %r14w")
#define AND_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X36 # andw (%esi), %r14w")
#define AND_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X75, 0X00 # andw (%ebp), %r14w")
#define AND_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X34, 0X24 # andw (%esp), %r14w")

#define AND_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X38 # andw (%rax), %r15w")
#define AND_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3B # andw (%rbx), %r15w")
#define AND_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X39 # andw (%rcx), %r15w")
#define AND_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3A # andw (%rdx), %r15w")
#define AND_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3F # andw (%rdi), %r15w")
#define AND_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3E # andw (%rsi), %r15w")
#define AND_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X7D, 0X00 # andw (%rbp), %r15w")
#define AND_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X23, 0X3C, 0X24 # andw (%rsp), %r15w")
#define AND_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X38 # andw (%r8), %r15w")
#define AND_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X39 # andw (%r9), %r15w")
#define AND_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X3A # andw (%r10), %r15w")
#define AND_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X3B # andw (%r11), %r15w")
#define AND_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X3C, 0X24 # andw (%r12), %r15w")
#define AND_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X7D, 0X00 # andw (%r13), %r15w")
#define AND_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X3E # andw (%r14), %r15w")
#define AND_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X23, 0X3F # andw (%r15), %r15w")
#define AND_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X38 # andw (%eax), %r15w")
#define AND_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X3B # andw (%ebx), %r15w")
#define AND_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X39 # andw (%ecx), %r15w")
#define AND_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X3A # andw (%edx), %r15w")
#define AND_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X3F # andw (%edi), %r15w")
#define AND_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X3E # andw (%esi), %r15w")
#define AND_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X7D, 0X00 # andw (%ebp), %r15w")
#define AND_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X3C, 0X24 # andw (%esp), %r15w")

#define AND_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X00 # andw %ax, (%rax)")
#define AND_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X03 # andw %ax, (%rbx)")
#define AND_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X01 # andw %ax, (%rcx)")
#define AND_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X02 # andw %ax, (%rdx)")
#define AND_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X07 # andw %ax, (%rdi)")
#define AND_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X06 # andw %ax, (%rsi)")
#define AND_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X45, 0X00 # andw %ax, (%rbp)")
#define AND_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X04, 0X24 # andw %ax, (%rsp)")
#define AND_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X00 # andw %ax, (%r8)")
#define AND_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X01 # andw %ax, (%r9)")
#define AND_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X02 # andw %ax, (%r10)")
#define AND_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X03 # andw %ax, (%r11)")
#define AND_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X04, 0X24 # andw %ax, (%r12)")
#define AND_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X45, 0X00 # andw %ax, (%r13)")
#define AND_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X06 # andw %ax, (%r14)")
#define AND_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X07 # andw %ax, (%r15)")
#define AND_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X00 # andw %ax, (%eax)")
#define AND_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X03 # andw %ax, (%ebx)")
#define AND_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X01 # andw %ax, (%ecx)")
#define AND_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X02 # andw %ax, (%edx)")
#define AND_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X07 # andw %ax, (%edi)")
#define AND_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X06 # andw %ax, (%esi)")
#define AND_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X45, 0X00 # andw %ax, (%ebp)")
#define AND_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X04, 0X24 # andw %ax, (%esp)")

#define AND_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X18 # andw %bx, (%rax)")
#define AND_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X1B # andw %bx, (%rbx)")
#define AND_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X19 # andw %bx, (%rcx)")
#define AND_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X1A # andw %bx, (%rdx)")
#define AND_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X1F # andw %bx, (%rdi)")
#define AND_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X1E # andw %bx, (%rsi)")
#define AND_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X5D, 0X00 # andw %bx, (%rbp)")
#define AND_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X1C, 0X24 # andw %bx, (%rsp)")
#define AND_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X18 # andw %bx, (%r8)")
#define AND_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X19 # andw %bx, (%r9)")
#define AND_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X1A # andw %bx, (%r10)")
#define AND_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X1B # andw %bx, (%r11)")
#define AND_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X1C, 0X24 # andw %bx, (%r12)")
#define AND_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X5D, 0X00 # andw %bx, (%r13)")
#define AND_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X1E # andw %bx, (%r14)")
#define AND_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X1F # andw %bx, (%r15)")
#define AND_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X18 # andw %bx, (%eax)")
#define AND_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1B # andw %bx, (%ebx)")
#define AND_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X19 # andw %bx, (%ecx)")
#define AND_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1A # andw %bx, (%edx)")
#define AND_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1F # andw %bx, (%edi)")
#define AND_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1E # andw %bx, (%esi)")
#define AND_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X5D, 0X00 # andw %bx, (%ebp)")
#define AND_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X1C, 0X24 # andw %bx, (%esp)")

#define AND_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X08 # andw %cx, (%rax)")
#define AND_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X0B # andw %cx, (%rbx)")
#define AND_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X09 # andw %cx, (%rcx)")
#define AND_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X0A # andw %cx, (%rdx)")
#define AND_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X0F # andw %cx, (%rdi)")
#define AND_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X0E # andw %cx, (%rsi)")
#define AND_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X4D, 0X00 # andw %cx, (%rbp)")
#define AND_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X0C, 0X24 # andw %cx, (%rsp)")
#define AND_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X08 # andw %cx, (%r8)")
#define AND_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X09 # andw %cx, (%r9)")
#define AND_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X0A # andw %cx, (%r10)")
#define AND_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X0B # andw %cx, (%r11)")
#define AND_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X0C, 0X24 # andw %cx, (%r12)")
#define AND_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X4D, 0X00 # andw %cx, (%r13)")
#define AND_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X0E # andw %cx, (%r14)")
#define AND_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X0F # andw %cx, (%r15)")
#define AND_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X08 # andw %cx, (%eax)")
#define AND_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0B # andw %cx, (%ebx)")
#define AND_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X09 # andw %cx, (%ecx)")
#define AND_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0A # andw %cx, (%edx)")
#define AND_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0F # andw %cx, (%edi)")
#define AND_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0E # andw %cx, (%esi)")
#define AND_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X4D, 0X00 # andw %cx, (%ebp)")
#define AND_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X0C, 0X24 # andw %cx, (%esp)")

#define AND_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X10 # andw %dx, (%rax)")
#define AND_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X13 # andw %dx, (%rbx)")
#define AND_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X11 # andw %dx, (%rcx)")
#define AND_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X12 # andw %dx, (%rdx)")
#define AND_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X17 # andw %dx, (%rdi)")
#define AND_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X16 # andw %dx, (%rsi)")
#define AND_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X55, 0X00 # andw %dx, (%rbp)")
#define AND_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X14, 0X24 # andw %dx, (%rsp)")
#define AND_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X10 # andw %dx, (%r8)")
#define AND_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X11 # andw %dx, (%r9)")
#define AND_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X12 # andw %dx, (%r10)")
#define AND_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X13 # andw %dx, (%r11)")
#define AND_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X14, 0X24 # andw %dx, (%r12)")
#define AND_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X55, 0X00 # andw %dx, (%r13)")
#define AND_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X16 # andw %dx, (%r14)")
#define AND_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X17 # andw %dx, (%r15)")
#define AND_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X10 # andw %dx, (%eax)")
#define AND_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X13 # andw %dx, (%ebx)")
#define AND_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X11 # andw %dx, (%ecx)")
#define AND_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X12 # andw %dx, (%edx)")
#define AND_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X17 # andw %dx, (%edi)")
#define AND_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X16 # andw %dx, (%esi)")
#define AND_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X55, 0X00 # andw %dx, (%ebp)")
#define AND_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X14, 0X24 # andw %dx, (%esp)")

#define AND_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X38 # andw %di, (%rax)")
#define AND_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X3B # andw %di, (%rbx)")
#define AND_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X39 # andw %di, (%rcx)")
#define AND_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X3A # andw %di, (%rdx)")
#define AND_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X3F # andw %di, (%rdi)")
#define AND_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X3E # andw %di, (%rsi)")
#define AND_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X7D, 0X00 # andw %di, (%rbp)")
#define AND_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X3C, 0X24 # andw %di, (%rsp)")
#define AND_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X38 # andw %di, (%r8)")
#define AND_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X39 # andw %di, (%r9)")
#define AND_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X3A # andw %di, (%r10)")
#define AND_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X3B # andw %di, (%r11)")
#define AND_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X3C, 0X24 # andw %di, (%r12)")
#define AND_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X7D, 0X00 # andw %di, (%r13)")
#define AND_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X3E # andw %di, (%r14)")
#define AND_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X3F # andw %di, (%r15)")
#define AND_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X38 # andw %di, (%eax)")
#define AND_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3B # andw %di, (%ebx)")
#define AND_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X39 # andw %di, (%ecx)")
#define AND_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3A # andw %di, (%edx)")
#define AND_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3F # andw %di, (%edi)")
#define AND_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3E # andw %di, (%esi)")
#define AND_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X7D, 0X00 # andw %di, (%ebp)")
#define AND_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X3C, 0X24 # andw %di, (%esp)")

#define AND_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X30 # andw %si, (%rax)")
#define AND_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X33 # andw %si, (%rbx)")
#define AND_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X31 # andw %si, (%rcx)")
#define AND_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X32 # andw %si, (%rdx)")
#define AND_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X37 # andw %si, (%rdi)")
#define AND_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X36 # andw %si, (%rsi)")
#define AND_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X75, 0X00 # andw %si, (%rbp)")
#define AND_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X34, 0X24 # andw %si, (%rsp)")
#define AND_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X30 # andw %si, (%r8)")
#define AND_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X31 # andw %si, (%r9)")
#define AND_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X32 # andw %si, (%r10)")
#define AND_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X33 # andw %si, (%r11)")
#define AND_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X34, 0X24 # andw %si, (%r12)")
#define AND_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X75, 0X00 # andw %si, (%r13)")
#define AND_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X36 # andw %si, (%r14)")
#define AND_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X37 # andw %si, (%r15)")
#define AND_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X30 # andw %si, (%eax)")
#define AND_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X33 # andw %si, (%ebx)")
#define AND_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X31 # andw %si, (%ecx)")
#define AND_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X32 # andw %si, (%edx)")
#define AND_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X37 # andw %si, (%edi)")
#define AND_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X36 # andw %si, (%esi)")
#define AND_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X75, 0X00 # andw %si, (%ebp)")
#define AND_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X34, 0X24 # andw %si, (%esp)")

#define AND_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X28 # andw %bp, (%rax)")
#define AND_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X2B # andw %bp, (%rbx)")
#define AND_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X29 # andw %bp, (%rcx)")
#define AND_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X2A # andw %bp, (%rdx)")
#define AND_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X2F # andw %bp, (%rdi)")
#define AND_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X2E # andw %bp, (%rsi)")
#define AND_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X6D, 0X00 # andw %bp, (%rbp)")
#define AND_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X2C, 0X24 # andw %bp, (%rsp)")
#define AND_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X28 # andw %bp, (%r8)")
#define AND_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X29 # andw %bp, (%r9)")
#define AND_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X2A # andw %bp, (%r10)")
#define AND_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X2B # andw %bp, (%r11)")
#define AND_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X2C, 0X24 # andw %bp, (%r12)")
#define AND_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X6D, 0X00 # andw %bp, (%r13)")
#define AND_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X2E # andw %bp, (%r14)")
#define AND_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X2F # andw %bp, (%r15)")
#define AND_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X28 # andw %bp, (%eax)")
#define AND_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2B # andw %bp, (%ebx)")
#define AND_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X29 # andw %bp, (%ecx)")
#define AND_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2A # andw %bp, (%edx)")
#define AND_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2F # andw %bp, (%edi)")
#define AND_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2E # andw %bp, (%esi)")
#define AND_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X6D, 0X00 # andw %bp, (%ebp)")
#define AND_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X2C, 0X24 # andw %bp, (%esp)")

#define AND_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X21, 0X20 # andw %sp, (%rax)")
#define AND_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X21, 0X23 # andw %sp, (%rbx)")
#define AND_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X21, 0X21 # andw %sp, (%rcx)")
#define AND_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X21, 0X22 # andw %sp, (%rdx)")
#define AND_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X21, 0X27 # andw %sp, (%rdi)")
#define AND_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X21, 0X26 # andw %sp, (%rsi)")
#define AND_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X21, 0X65, 0X00 # andw %sp, (%rbp)")
#define AND_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X21, 0X24, 0X24 # andw %sp, (%rsp)")
#define AND_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X20 # andw %sp, (%r8)")
#define AND_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X21 # andw %sp, (%r9)")
#define AND_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X22 # andw %sp, (%r10)")
#define AND_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X23 # andw %sp, (%r11)")
#define AND_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X24, 0X24 # andw %sp, (%r12)")
#define AND_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X65, 0X00 # andw %sp, (%r13)")
#define AND_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X26 # andw %sp, (%r14)")
#define AND_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X21, 0X27 # andw %sp, (%r15)")
#define AND_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X20 # andw %sp, (%eax)")
#define AND_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X23 # andw %sp, (%ebx)")
#define AND_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X21 # andw %sp, (%ecx)")
#define AND_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X21, 0X22 # andw %sp, (%edx)")
#define AND_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X27 # andw %sp, (%edi)")
#define AND_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X21, 0X26 # andw %sp, (%esi)")
#define AND_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X65, 0X00 # andw %sp, (%ebp)")
#define AND_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X21, 0X24, 0X24 # andw %sp, (%esp)")

#define AND_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X00 # andw %r8w, (%rax)")
#define AND_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X03 # andw %r8w, (%rbx)")
#define AND_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X01 # andw %r8w, (%rcx)")
#define AND_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X02 # andw %r8w, (%rdx)")
#define AND_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X07 # andw %r8w, (%rdi)")
#define AND_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X06 # andw %r8w, (%rsi)")
#define AND_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X45, 0X00 # andw %r8w, (%rbp)")
#define AND_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X04, 0X24 # andw %r8w, (%rsp)")
#define AND_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X00 # andw %r8w, (%r8)")
#define AND_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X01 # andw %r8w, (%r9)")
#define AND_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X02 # andw %r8w, (%r10)")
#define AND_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X03 # andw %r8w, (%r11)")
#define AND_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X04, 0X24 # andw %r8w, (%r12)")
#define AND_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X45, 0X00 # andw %r8w, (%r13)")
#define AND_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X06 # andw %r8w, (%r14)")
#define AND_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X07 # andw %r8w, (%r15)")
#define AND_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X00 # andw %r8w, (%eax)")
#define AND_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X03 # andw %r8w, (%ebx)")
#define AND_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X01 # andw %r8w, (%ecx)")
#define AND_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X02 # andw %r8w, (%edx)")
#define AND_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X07 # andw %r8w, (%edi)")
#define AND_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X06 # andw %r8w, (%esi)")
#define AND_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X45, 0X00 # andw %r8w, (%ebp)")
#define AND_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X04, 0X24 # andw %r8w, (%esp)")

#define AND_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X08 # andw %r9w, (%rax)")
#define AND_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0B # andw %r9w, (%rbx)")
#define AND_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X09 # andw %r9w, (%rcx)")
#define AND_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0A # andw %r9w, (%rdx)")
#define AND_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0F # andw %r9w, (%rdi)")
#define AND_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0E # andw %r9w, (%rsi)")
#define AND_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X4D, 0X00 # andw %r9w, (%rbp)")
#define AND_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X0C, 0X24 # andw %r9w, (%rsp)")
#define AND_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X08 # andw %r9w, (%r8)")
#define AND_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X09 # andw %r9w, (%r9)")
#define AND_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X0A # andw %r9w, (%r10)")
#define AND_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X0B # andw %r9w, (%r11)")
#define AND_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X0C, 0X24 # andw %r9w, (%r12)")
#define AND_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X4D, 0X00 # andw %r9w, (%r13)")
#define AND_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X0E # andw %r9w, (%r14)")
#define AND_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X0F # andw %r9w, (%r15)")
#define AND_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X08 # andw %r9w, (%eax)")
#define AND_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X0B # andw %r9w, (%ebx)")
#define AND_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X09 # andw %r9w, (%ecx)")
#define AND_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X0A # andw %r9w, (%edx)")
#define AND_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X0F # andw %r9w, (%edi)")
#define AND_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X0E # andw %r9w, (%esi)")
#define AND_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X4D, 0X00 # andw %r9w, (%ebp)")
#define AND_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X0C, 0X24 # andw %r9w, (%esp)")

#define AND_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X10 # andw %r10w, (%rax)")
#define AND_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X13 # andw %r10w, (%rbx)")
#define AND_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X11 # andw %r10w, (%rcx)")
#define AND_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X12 # andw %r10w, (%rdx)")
#define AND_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X17 # andw %r10w, (%rdi)")
#define AND_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X16 # andw %r10w, (%rsi)")
#define AND_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X55, 0X00 # andw %r10w, (%rbp)")
#define AND_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X14, 0X24 # andw %r10w, (%rsp)")
#define AND_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X10 # andw %r10w, (%r8)")
#define AND_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X11 # andw %r10w, (%r9)")
#define AND_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X12 # andw %r10w, (%r10)")
#define AND_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X13 # andw %r10w, (%r11)")
#define AND_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X14, 0X24 # andw %r10w, (%r12)")
#define AND_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X55, 0X00 # andw %r10w, (%r13)")
#define AND_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X16 # andw %r10w, (%r14)")
#define AND_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X17 # andw %r10w, (%r15)")
#define AND_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X10 # andw %r10w, (%eax)")
#define AND_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X13 # andw %r10w, (%ebx)")
#define AND_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X11 # andw %r10w, (%ecx)")
#define AND_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X12 # andw %r10w, (%edx)")
#define AND_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X17 # andw %r10w, (%edi)")
#define AND_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X16 # andw %r10w, (%esi)")
#define AND_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X55, 0X00 # andw %r10w, (%ebp)")
#define AND_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X14, 0X24 # andw %r10w, (%esp)")

#define AND_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X18 # andw %r11w, (%rax)")
#define AND_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1B # andw %r11w, (%rbx)")
#define AND_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X19 # andw %r11w, (%rcx)")
#define AND_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1A # andw %r11w, (%rdx)")
#define AND_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1F # andw %r11w, (%rdi)")
#define AND_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1E # andw %r11w, (%rsi)")
#define AND_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X5D, 0X00 # andw %r11w, (%rbp)")
#define AND_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X1C, 0X24 # andw %r11w, (%rsp)")
#define AND_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X18 # andw %r11w, (%r8)")
#define AND_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X19 # andw %r11w, (%r9)")
#define AND_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X1A # andw %r11w, (%r10)")
#define AND_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X1B # andw %r11w, (%r11)")
#define AND_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X1C, 0X24 # andw %r11w, (%r12)")
#define AND_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X5D, 0X00 # andw %r11w, (%r13)")
#define AND_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X1E # andw %r11w, (%r14)")
#define AND_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X1F # andw %r11w, (%r15)")
#define AND_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X18 # andw %r11w, (%eax)")
#define AND_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X1B # andw %r11w, (%ebx)")
#define AND_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X19 # andw %r11w, (%ecx)")
#define AND_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X1A # andw %r11w, (%edx)")
#define AND_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X1F # andw %r11w, (%edi)")
#define AND_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X1E # andw %r11w, (%esi)")
#define AND_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X5D, 0X00 # andw %r11w, (%ebp)")
#define AND_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X1C, 0X24 # andw %r11w, (%esp)")

#define AND_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X20 # andw %r12w, (%rax)")
#define AND_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X23 # andw %r12w, (%rbx)")
#define AND_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X21 # andw %r12w, (%rcx)")
#define AND_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X22 # andw %r12w, (%rdx)")
#define AND_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X27 # andw %r12w, (%rdi)")
#define AND_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X26 # andw %r12w, (%rsi)")
#define AND_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X65, 0X00 # andw %r12w, (%rbp)")
#define AND_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X24, 0X24 # andw %r12w, (%rsp)")
#define AND_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X20 # andw %r12w, (%r8)")
#define AND_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X21 # andw %r12w, (%r9)")
#define AND_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X22 # andw %r12w, (%r10)")
#define AND_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X23 # andw %r12w, (%r11)")
#define AND_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X24, 0X24 # andw %r12w, (%r12)")
#define AND_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X65, 0X00 # andw %r12w, (%r13)")
#define AND_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X26 # andw %r12w, (%r14)")
#define AND_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X27 # andw %r12w, (%r15)")
#define AND_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X20 # andw %r12w, (%eax)")
#define AND_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X23 # andw %r12w, (%ebx)")
#define AND_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X21 # andw %r12w, (%ecx)")
#define AND_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X22 # andw %r12w, (%edx)")
#define AND_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X27 # andw %r12w, (%edi)")
#define AND_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X26 # andw %r12w, (%esi)")
#define AND_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X65, 0X00 # andw %r12w, (%ebp)")
#define AND_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X24, 0X24 # andw %r12w, (%esp)")

#define AND_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X28 # andw %r13w, (%rax)")
#define AND_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2B # andw %r13w, (%rbx)")
#define AND_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X29 # andw %r13w, (%rcx)")
#define AND_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2A # andw %r13w, (%rdx)")
#define AND_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2F # andw %r13w, (%rdi)")
#define AND_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2E # andw %r13w, (%rsi)")
#define AND_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X6D, 0X00 # andw %r13w, (%rbp)")
#define AND_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X2C, 0X24 # andw %r13w, (%rsp)")
#define AND_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X28 # andw %r13w, (%r8)")
#define AND_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X29 # andw %r13w, (%r9)")
#define AND_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X2A # andw %r13w, (%r10)")
#define AND_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X2B # andw %r13w, (%r11)")
#define AND_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X2C, 0X24 # andw %r13w, (%r12)")
#define AND_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X6D, 0X00 # andw %r13w, (%r13)")
#define AND_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X2E # andw %r13w, (%r14)")
#define AND_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X2F # andw %r13w, (%r15)")
#define AND_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X28 # andw %r13w, (%eax)")
#define AND_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X2B # andw %r13w, (%ebx)")
#define AND_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X29 # andw %r13w, (%ecx)")
#define AND_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X2A # andw %r13w, (%edx)")
#define AND_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X2F # andw %r13w, (%edi)")
#define AND_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X2E # andw %r13w, (%esi)")
#define AND_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X6D, 0X00 # andw %r13w, (%ebp)")
#define AND_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X2C, 0X24 # andw %r13w, (%esp)")

#define AND_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X30 # andw %r14w, (%rax)")
#define AND_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X33 # andw %r14w, (%rbx)")
#define AND_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X31 # andw %r14w, (%rcx)")
#define AND_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X32 # andw %r14w, (%rdx)")
#define AND_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X37 # andw %r14w, (%rdi)")
#define AND_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X36 # andw %r14w, (%rsi)")
#define AND_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X75, 0X00 # andw %r14w, (%rbp)")
#define AND_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X34, 0X24 # andw %r14w, (%rsp)")
#define AND_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X30 # andw %r14w, (%r8)")
#define AND_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X31 # andw %r14w, (%r9)")
#define AND_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X32 # andw %r14w, (%r10)")
#define AND_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X33 # andw %r14w, (%r11)")
#define AND_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X34, 0X24 # andw %r14w, (%r12)")
#define AND_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X75, 0X00 # andw %r14w, (%r13)")
#define AND_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X36 # andw %r14w, (%r14)")
#define AND_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X37 # andw %r14w, (%r15)")
#define AND_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X30 # andw %r14w, (%eax)")
#define AND_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X33 # andw %r14w, (%ebx)")
#define AND_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X31 # andw %r14w, (%ecx)")
#define AND_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X32 # andw %r14w, (%edx)")
#define AND_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X37 # andw %r14w, (%edi)")
#define AND_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X36 # andw %r14w, (%esi)")
#define AND_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X75, 0X00 # andw %r14w, (%ebp)")
#define AND_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X34, 0X24 # andw %r14w, (%esp)")

#define AND_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X38 # andw %r15w, (%rax)")
#define AND_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3B # andw %r15w, (%rbx)")
#define AND_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X39 # andw %r15w, (%rcx)")
#define AND_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3A # andw %r15w, (%rdx)")
#define AND_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3F # andw %r15w, (%rdi)")
#define AND_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3E # andw %r15w, (%rsi)")
#define AND_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X7D, 0X00 # andw %r15w, (%rbp)")
#define AND_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X21, 0X3C, 0X24 # andw %r15w, (%rsp)")
#define AND_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X38 # andw %r15w, (%r8)")
#define AND_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X39 # andw %r15w, (%r9)")
#define AND_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X3A # andw %r15w, (%r10)")
#define AND_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X3B # andw %r15w, (%r11)")
#define AND_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X3C, 0X24 # andw %r15w, (%r12)")
#define AND_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X7D, 0X00 # andw %r15w, (%r13)")
#define AND_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X3E # andw %r15w, (%r14)")
#define AND_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X21, 0X3F # andw %r15w, (%r15)")
#define AND_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X38 # andw %r15w, (%eax)")
#define AND_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X3B # andw %r15w, (%ebx)")
#define AND_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X39 # andw %r15w, (%ecx)")
#define AND_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X3A # andw %r15w, (%edx)")
#define AND_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X3F # andw %r15w, (%edi)")
#define AND_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X3E # andw %r15w, (%esi)")
#define AND_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X7D, 0X00 # andw %r15w, (%ebp)")
#define AND_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X3C, 0X24 # andw %r15w, (%esp)")

#define AND_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X80 # andw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X83 # andw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X81 # andw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X82 # andw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X87 # andw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X86 # andw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X85 # andw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X80 # andw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X81 # andw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X82 # andw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X83 # andw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X85 # andw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X86 # andw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X87 # andw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X80 # andw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X83 # andw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X81 # andw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X82 # andw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X87 # andw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X86 # andw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X85 # andw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define AND_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X98 # andw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9B # andw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X99 # andw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9A # andw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9F # andw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9E # andw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9D # andw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X98 # andw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X99 # andw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9A # andw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9B # andw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9D # andw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9E # andw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X9F # andw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X98 # andw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9B # andw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X99 # andw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9A # andw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9F # andw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9E # andw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9D # andw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define AND_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X88 # andw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8B # andw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X89 # andw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8A # andw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8F # andw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8E # andw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8D # andw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X88 # andw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X89 # andw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8A # andw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8B # andw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8D # andw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8E # andw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X8F # andw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X88 # andw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8B # andw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X89 # andw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8A # andw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8F # andw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8E # andw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8D # andw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define AND_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X90 # andw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X93 # andw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X91 # andw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X92 # andw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X97 # andw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X96 # andw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X95 # andw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X90 # andw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X91 # andw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X92 # andw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X93 # andw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X95 # andw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X96 # andw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0X97 # andw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X90 # andw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X93 # andw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X91 # andw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X92 # andw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X97 # andw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X96 # andw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X95 # andw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define AND_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB8 # andw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBB # andw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB9 # andw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBA # andw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBF # andw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBE # andw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBD # andw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB8 # andw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB9 # andw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBA # andw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBB # andw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBD # andw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBE # andw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XBF # andw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB8 # andw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBB # andw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB9 # andw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBA # andw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBF # andw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBE # andw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBD # andw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define AND_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB0 # andw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB3 # andw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB1 # andw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB2 # andw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB7 # andw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB6 # andw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB5 # andw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB0 # andw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB1 # andw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB2 # andw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB3 # andw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB5 # andw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB6 # andw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XB7 # andw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB0 # andw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB3 # andw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB1 # andw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB2 # andw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB7 # andw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB6 # andw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB5 # andw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define AND_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA8 # andw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAB # andw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA9 # andw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAA # andw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAF # andw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAE # andw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAD # andw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA8 # andw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA9 # andw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAA # andw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAB # andw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAD # andw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAE # andw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XAF # andw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA8 # andw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAB # andw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA9 # andw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAA # andw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAF # andw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAE # andw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAD # andw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define AND_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA0 # andw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA3 # andw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA1 # andw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA2 # andw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA7 # andw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA6 # andw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA5 # andw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA0 # andw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA1 # andw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA2 # andw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA3 # andw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA5 # andw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA6 # andw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X23, 0XA7 # andw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA0 # andw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA3 # andw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA1 # andw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA2 # andw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA7 # andw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA6 # andw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA5 # andw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X80 # andw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X83 # andw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X81 # andw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X82 # andw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X87 # andw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X86 # andw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X85 # andw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X80 # andw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X81 # andw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X82 # andw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X83 # andw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X85 # andw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X86 # andw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X87 # andw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X80 # andw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X83 # andw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X81 # andw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X82 # andw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X87 # andw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X86 # andw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X85 # andw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X84, 0X24 # andw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X88 # andw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8B # andw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X89 # andw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8A # andw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8F # andw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8E # andw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8D # andw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X88 # andw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X89 # andw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8A # andw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8B # andw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8D # andw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8E # andw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X8F # andw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X88 # andw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8B # andw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X89 # andw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8A # andw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8F # andw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8E # andw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8D # andw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X8C, 0X24 # andw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X90 # andw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X93 # andw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X91 # andw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X92 # andw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X97 # andw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X96 # andw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X95 # andw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X90 # andw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X91 # andw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X92 # andw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X93 # andw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X95 # andw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X96 # andw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X97 # andw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X90 # andw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X93 # andw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X91 # andw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X92 # andw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X97 # andw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X96 # andw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X95 # andw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X94, 0X24 # andw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X98 # andw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9B # andw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X99 # andw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9A # andw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9F # andw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9E # andw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9D # andw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X98 # andw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X99 # andw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9A # andw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9B # andw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9D # andw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9E # andw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0X9F # andw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X98 # andw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9B # andw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X99 # andw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9A # andw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9F # andw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9E # andw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9D # andw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0X9C, 0X24 # andw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA0 # andw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA3 # andw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA1 # andw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA2 # andw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA7 # andw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA6 # andw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA5 # andw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA0 # andw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA1 # andw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA2 # andw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA3 # andw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA5 # andw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA6 # andw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA7 # andw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA0 # andw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA3 # andw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA1 # andw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA2 # andw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA7 # andw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA6 # andw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA5 # andw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA4, 0X24 # andw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA8 # andw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAB # andw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XA9 # andw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAA # andw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAF # andw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAE # andw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAD # andw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA8 # andw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XA9 # andw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAA # andw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAB # andw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAD # andw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAE # andw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XAF # andw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA8 # andw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAB # andw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XA9 # andw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAA # andw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAF # andw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAE # andw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAD # andw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XAC, 0X24 # andw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB0 # andw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB3 # andw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB1 # andw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB2 # andw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB7 # andw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB6 # andw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB5 # andw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB0 # andw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB1 # andw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB2 # andw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB3 # andw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB5 # andw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB6 # andw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB7 # andw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB0 # andw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB3 # andw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB1 # andw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB2 # andw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB7 # andw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB6 # andw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB5 # andw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB4, 0X24 # andw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB8 # andw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBB # andw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XB9 # andw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBA # andw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBF # andw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBE # andw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBD # andw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB8 # andw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XB9 # andw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBA # andw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBB # andw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBD # andw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBE # andw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X23, 0XBF # andw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB8 # andw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBB # andw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XB9 # andw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBA # andw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBF # andw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBE # andw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBD # andw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X23, 0XBC, 0X24 # andw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define AND_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X80 # andw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X83 # andw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X81 # andw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X82 # andw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X87 # andw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X86 # andw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X85 # andw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X84, 0X24 # andw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X80 # andw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X81 # andw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X82 # andw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X83 # andw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X84, 0X24 # andw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X85 # andw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X86 # andw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X87 # andw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X80 # andw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X83 # andw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X81 # andw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X82 # andw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X87 # andw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X86 # andw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X85 # andw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X84, 0X24 # andw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X98 # andw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9B # andw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X99 # andw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9A # andw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9F # andw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9E # andw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9D # andw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X9C, 0X24 # andw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X98 # andw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X99 # andw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9A # andw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9B # andw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9C, 0X24 # andw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9D # andw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9E # andw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X9F # andw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X98 # andw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9B # andw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X99 # andw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9A # andw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9F # andw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9E # andw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9D # andw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X9C, 0X24 # andw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X88 # andw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8B # andw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X89 # andw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8A # andw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8F # andw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8E # andw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8D # andw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X8C, 0X24 # andw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X88 # andw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X89 # andw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8A # andw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8B # andw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8C, 0X24 # andw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8D # andw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8E # andw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X8F # andw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X88 # andw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8B # andw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X89 # andw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8A # andw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8F # andw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8E # andw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8D # andw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X8C, 0X24 # andw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X90 # andw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X93 # andw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X91 # andw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X92 # andw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X97 # andw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X96 # andw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X95 # andw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0X94, 0X24 # andw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X90 # andw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X91 # andw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X92 # andw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X93 # andw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X94, 0X24 # andw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X95 # andw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X96 # andw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0X97 # andw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X90 # andw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X93 # andw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X91 # andw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X92 # andw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X97 # andw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X96 # andw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X95 # andw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0X94, 0X24 # andw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB8 # andw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBB # andw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB9 # andw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBA # andw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBF # andw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBE # andw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBD # andw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XBC, 0X24 # andw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB8 # andw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB9 # andw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBA # andw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBB # andw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBC, 0X24 # andw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBD # andw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBE # andw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XBF # andw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB8 # andw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBB # andw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB9 # andw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBA # andw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBF # andw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBE # andw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBD # andw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XBC, 0X24 # andw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB0 # andw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB3 # andw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB1 # andw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB2 # andw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB7 # andw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB6 # andw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB5 # andw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XB4, 0X24 # andw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB0 # andw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB1 # andw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB2 # andw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB3 # andw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB4, 0X24 # andw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB5 # andw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB6 # andw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XB7 # andw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB0 # andw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB3 # andw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB1 # andw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB2 # andw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB7 # andw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB6 # andw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB5 # andw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XB4, 0X24 # andw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA8 # andw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAB # andw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA9 # andw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAA # andw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAF # andw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAE # andw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAD # andw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XAC, 0X24 # andw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA8 # andw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA9 # andw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAA # andw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAB # andw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAC, 0X24 # andw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAD # andw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAE # andw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XAF # andw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA8 # andw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAB # andw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA9 # andw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAA # andw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAF # andw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAE # andw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAD # andw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XAC, 0X24 # andw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA0 # andw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA3 # andw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA1 # andw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA2 # andw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA7 # andw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA6 # andw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA5 # andw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X21, 0XA4, 0X24 # andw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA0 # andw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA1 # andw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA2 # andw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA3 # andw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA4, 0X24 # andw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA5 # andw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA6 # andw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X21, 0XA7 # andw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA0 # andw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA3 # andw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA1 # andw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA2 # andw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA7 # andw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA6 # andw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA5 # andw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X21, 0XA4, 0X24 # andw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X80 # andw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X83 # andw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X81 # andw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X82 # andw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X87 # andw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X86 # andw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X85 # andw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X84, 0X24 # andw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X80 # andw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X81 # andw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X82 # andw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X83 # andw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X84, 0X24 # andw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X85 # andw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X86 # andw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X87 # andw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X80 # andw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X83 # andw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X81 # andw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X82 # andw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X87 # andw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X86 # andw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X85 # andw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X84, 0X24 # andw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X88 # andw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8B # andw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X89 # andw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8A # andw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8F # andw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8E # andw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8D # andw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X8C, 0X24 # andw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X88 # andw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X89 # andw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8A # andw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8B # andw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8C, 0X24 # andw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8D # andw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8E # andw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X8F # andw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X88 # andw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8B # andw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X89 # andw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8A # andw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8F # andw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8E # andw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8D # andw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X8C, 0X24 # andw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X90 # andw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X93 # andw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X91 # andw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X92 # andw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X97 # andw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X96 # andw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X95 # andw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X94, 0X24 # andw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X90 # andw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X91 # andw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X92 # andw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X93 # andw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X94, 0X24 # andw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X95 # andw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X96 # andw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X97 # andw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X90 # andw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X93 # andw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X91 # andw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X92 # andw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X97 # andw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X96 # andw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X95 # andw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X94, 0X24 # andw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X98 # andw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9B # andw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X99 # andw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9A # andw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9F # andw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9E # andw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9D # andw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0X9C, 0X24 # andw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X98 # andw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X99 # andw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9A # andw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9B # andw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9C, 0X24 # andw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9D # andw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9E # andw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0X9F # andw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X98 # andw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9B # andw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X99 # andw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9A # andw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9F # andw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9E # andw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9D # andw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0X9C, 0X24 # andw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA0 # andw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA3 # andw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA1 # andw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA2 # andw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA7 # andw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA6 # andw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA5 # andw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA4, 0X24 # andw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA0 # andw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA1 # andw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA2 # andw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA3 # andw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA4, 0X24 # andw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA5 # andw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA6 # andw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA7 # andw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA0 # andw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA3 # andw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA1 # andw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA2 # andw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA7 # andw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA6 # andw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA5 # andw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA4, 0X24 # andw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA8 # andw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAB # andw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XA9 # andw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAA # andw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAF # andw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAE # andw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAD # andw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XAC, 0X24 # andw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA8 # andw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XA9 # andw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAA # andw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAB # andw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAC, 0X24 # andw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAD # andw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAE # andw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XAF # andw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA8 # andw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAB # andw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XA9 # andw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAA # andw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAF # andw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAE # andw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAD # andw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XAC, 0X24 # andw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB0 # andw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB3 # andw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB1 # andw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB2 # andw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB7 # andw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB6 # andw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB5 # andw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB4, 0X24 # andw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB0 # andw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB1 # andw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB2 # andw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB3 # andw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB4, 0X24 # andw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB5 # andw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB6 # andw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB7 # andw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB0 # andw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB3 # andw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB1 # andw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB2 # andw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB7 # andw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB6 # andw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB5 # andw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB4, 0X24 # andw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB8 # andw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBB # andw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XB9 # andw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBA # andw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBF # andw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBE # andw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBD # andw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X21, 0XBC, 0X24 # andw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB8 # andw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XB9 # andw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBA # andw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBB # andw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBC, 0X24 # andw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBD # andw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBE # andw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X21, 0XBF # andw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB8 # andw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBB # andw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XB9 # andw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBA # andw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBF # andw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBE # andw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBD # andw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X21, 0XBC, 0X24 # andw %r15w, " _(VALUE) "(%esp)")\
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
