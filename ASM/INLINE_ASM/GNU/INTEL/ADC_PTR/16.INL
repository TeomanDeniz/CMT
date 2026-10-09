#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADC_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X06 # adcb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X1E # adcb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X0E # adcb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X16 # adcb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X06 # adcb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X1E # adcb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X0E # adcb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X16 # adcb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AL_FROM_PTR_BX CMT_ASM(".byte 0X12, 0X07 # adcb (%bx), %al")
#define ADC_AL_FROM_PTR_BP CMT_ASM(".byte 0X12, 0X46, 0X00 # adcb (%bp), %al")
#define ADC_AL_FROM_PTR_SI CMT_ASM(".byte 0X12, 0X04 # adcb (%si), %al")
#define ADC_AL_FROM_PTR_DI CMT_ASM(".byte 0X12, 0X05 # adcb (%di), %al")

#define ADC_BL_FROM_PTR_BX CMT_ASM(".byte 0X12, 0X1F # adcb (%bx), %bl")
#define ADC_BL_FROM_PTR_BP CMT_ASM(".byte 0X12, 0X5E, 0X00 # adcb (%bp), %bl")
#define ADC_BL_FROM_PTR_SI CMT_ASM(".byte 0X12, 0X1C # adcb (%si), %bl")
#define ADC_BL_FROM_PTR_DI CMT_ASM(".byte 0X12, 0X1D # adcb (%di), %bl")

#define ADC_CL_FROM_PTR_BX CMT_ASM(".byte 0X12, 0X0F # adcb (%bx), %cl")
#define ADC_CL_FROM_PTR_BP CMT_ASM(".byte 0X12, 0X4E, 0X00 # adcb (%bp), %cl")
#define ADC_CL_FROM_PTR_SI CMT_ASM(".byte 0X12, 0X0C # adcb (%si), %cl")
#define ADC_CL_FROM_PTR_DI CMT_ASM(".byte 0X12, 0X0D # adcb (%di), %cl")

#define ADC_DL_FROM_PTR_BX CMT_ASM(".byte 0X12, 0X17 # adcb (%bx), %dl")
#define ADC_DL_FROM_PTR_BP CMT_ASM(".byte 0X12, 0X56, 0X00 # adcb (%bp), %dl")
#define ADC_DL_FROM_PTR_SI CMT_ASM(".byte 0X12, 0X14 # adcb (%si), %dl")
#define ADC_DL_FROM_PTR_DI CMT_ASM(".byte 0X12, 0X15 # adcb (%di), %dl")

#define ADC_AL_TO_PTR_BX CMT_ASM(".byte 0X10, 0X07 # adcb %al, (%bx)")
#define ADC_AL_TO_PTR_BP CMT_ASM(".byte 0X10, 0X46, 0X00 # adcb %al, (%bp)")
#define ADC_AL_TO_PTR_SI CMT_ASM(".byte 0X10, 0X04 # adcb %al, (%si)")
#define ADC_AL_TO_PTR_DI CMT_ASM(".byte 0X10, 0X05 # adcb %al, (%di)")

#define ADC_BL_TO_PTR_BX CMT_ASM(".byte 0X10, 0X1F # adcb %bl, (%bx)")
#define ADC_BL_TO_PTR_BP CMT_ASM(".byte 0X10, 0X5E, 0X00 # adcb %bl, (%bp)")
#define ADC_BL_TO_PTR_SI CMT_ASM(".byte 0X10, 0X1C # adcb %bl, (%si)")
#define ADC_BL_TO_PTR_DI CMT_ASM(".byte 0X10, 0X1D # adcb %bl, (%di)")

#define ADC_CL_TO_PTR_BX CMT_ASM(".byte 0X10, 0X0F # adcb %cl, (%bx)")
#define ADC_CL_TO_PTR_BP CMT_ASM(".byte 0X10, 0X4E, 0X00 # adcb %cl, (%bp)")
#define ADC_CL_TO_PTR_SI CMT_ASM(".byte 0X10, 0X0C # adcb %cl, (%si)")
#define ADC_CL_TO_PTR_DI CMT_ASM(".byte 0X10, 0X0D # adcb %cl, (%di)")

#define ADC_DL_TO_PTR_BX CMT_ASM(".byte 0X10, 0X17 # adcb %dl, (%bx)")
#define ADC_DL_TO_PTR_BP CMT_ASM(".byte 0X10, 0X56, 0X00 # adcb %dl, (%bp)")
#define ADC_DL_TO_PTR_SI CMT_ASM(".byte 0X10, 0X14 # adcb %dl, (%si)")
#define ADC_DL_TO_PTR_DI CMT_ASM(".byte 0X10, 0X15 # adcb %dl, (%di)")

#define ADC_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X87 # adcb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X86 # adcb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X84 # adcb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X85 # adcb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9F # adcb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9E # adcb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9C # adcb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9D # adcb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8F # adcb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8E # adcb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8C # adcb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8D # adcb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X97 # adcb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X96 # adcb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X94 # adcb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X95 # adcb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X87 # adcb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X86 # adcb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X84 # adcb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X85 # adcb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9F # adcb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9E # adcb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9C # adcb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9D # adcb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8F # adcb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8E # adcb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8C # adcb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8D # adcb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X97 # adcb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X96 # adcb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X94 # adcb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X95 # adcb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X05 # adcb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X1D # adcb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X0D # adcb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X15 # adcb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X05 # adcb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X1D # adcb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X0D # adcb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X15 # adcb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AL_FROM_PTR_EAX CMT_ASM(".byte 0X12, 0X00 # adcb (%eax), %al")
#define ADC_AL_FROM_PTR_EBX CMT_ASM(".byte 0X12, 0X03 # adcb (%ebx), %al")
#define ADC_AL_FROM_PTR_ECX CMT_ASM(".byte 0X12, 0X01 # adcb (%ecx), %al")
#define ADC_AL_FROM_PTR_EDX CMT_ASM(".byte 0X12, 0X02 # adcb (%edx), %al")
#define ADC_AL_FROM_PTR_EDI CMT_ASM(".byte 0X12, 0X07 # adcb (%edi), %al")
#define ADC_AL_FROM_PTR_ESI CMT_ASM(".byte 0X12, 0X06 # adcb (%esi), %al")
#define ADC_AL_FROM_PTR_EBP CMT_ASM(".byte 0X12, 0X45, 0X00 # adcb (%ebp), %al")
#define ADC_AL_FROM_PTR_ESP CMT_ASM(".byte 0X12, 0X04, 0X24 # adcb (%esp), %al")
#define ADC_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X12, 0X07 # adcb (%bx), %al")
#define ADC_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X12, 0X46, 0X00 # adcb (%bp), %al")
#define ADC_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X12, 0X04 # adcb (%si), %al")
#define ADC_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X12, 0X05 # adcb (%di), %al")

#define ADC_BL_FROM_PTR_EAX CMT_ASM(".byte 0X12, 0X18 # adcb (%eax), %bl")
#define ADC_BL_FROM_PTR_EBX CMT_ASM(".byte 0X12, 0X1B # adcb (%ebx), %bl")
#define ADC_BL_FROM_PTR_ECX CMT_ASM(".byte 0X12, 0X19 # adcb (%ecx), %bl")
#define ADC_BL_FROM_PTR_EDX CMT_ASM(".byte 0X12, 0X1A # adcb (%edx), %bl")
#define ADC_BL_FROM_PTR_EDI CMT_ASM(".byte 0X12, 0X1F # adcb (%edi), %bl")
#define ADC_BL_FROM_PTR_ESI CMT_ASM(".byte 0X12, 0X1E # adcb (%esi), %bl")
#define ADC_BL_FROM_PTR_EBP CMT_ASM(".byte 0X12, 0X5D, 0X00 # adcb (%ebp), %bl")
#define ADC_BL_FROM_PTR_ESP CMT_ASM(".byte 0X12, 0X1C, 0X24 # adcb (%esp), %bl")
#define ADC_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X12, 0X1F # adcb (%bx), %bl")
#define ADC_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X12, 0X5E, 0X00 # adcb (%bp), %bl")
#define ADC_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X12, 0X1C # adcb (%si), %bl")
#define ADC_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X12, 0X1D # adcb (%di), %bl")

#define ADC_CL_FROM_PTR_EAX CMT_ASM(".byte 0X12, 0X08 # adcb (%eax), %cl")
#define ADC_CL_FROM_PTR_EBX CMT_ASM(".byte 0X12, 0X0B # adcb (%ebx), %cl")
#define ADC_CL_FROM_PTR_ECX CMT_ASM(".byte 0X12, 0X09 # adcb (%ecx), %cl")
#define ADC_CL_FROM_PTR_EDX CMT_ASM(".byte 0X12, 0X0A # adcb (%edx), %cl")
#define ADC_CL_FROM_PTR_EDI CMT_ASM(".byte 0X12, 0X0F # adcb (%edi), %cl")
#define ADC_CL_FROM_PTR_ESI CMT_ASM(".byte 0X12, 0X0E # adcb (%esi), %cl")
#define ADC_CL_FROM_PTR_EBP CMT_ASM(".byte 0X12, 0X4D, 0X00 # adcb (%ebp), %cl")
#define ADC_CL_FROM_PTR_ESP CMT_ASM(".byte 0X12, 0X0C, 0X24 # adcb (%esp), %cl")
#define ADC_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X12, 0X0F # adcb (%bx), %cl")
#define ADC_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X12, 0X4E, 0X00 # adcb (%bp), %cl")
#define ADC_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X12, 0X0C # adcb (%si), %cl")
#define ADC_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X12, 0X0D # adcb (%di), %cl")

#define ADC_DL_FROM_PTR_EAX CMT_ASM(".byte 0X12, 0X10 # adcb (%eax), %dl")
#define ADC_DL_FROM_PTR_EBX CMT_ASM(".byte 0X12, 0X13 # adcb (%ebx), %dl")
#define ADC_DL_FROM_PTR_ECX CMT_ASM(".byte 0X12, 0X11 # adcb (%ecx), %dl")
#define ADC_DL_FROM_PTR_EDX CMT_ASM(".byte 0X12, 0X12 # adcb (%edx), %dl")
#define ADC_DL_FROM_PTR_EDI CMT_ASM(".byte 0X12, 0X17 # adcb (%edi), %dl")
#define ADC_DL_FROM_PTR_ESI CMT_ASM(".byte 0X12, 0X16 # adcb (%esi), %dl")
#define ADC_DL_FROM_PTR_EBP CMT_ASM(".byte 0X12, 0X55, 0X00 # adcb (%ebp), %dl")
#define ADC_DL_FROM_PTR_ESP CMT_ASM(".byte 0X12, 0X14, 0X24 # adcb (%esp), %dl")
#define ADC_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X12, 0X17 # adcb (%bx), %dl")
#define ADC_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X12, 0X56, 0X00 # adcb (%bp), %dl")
#define ADC_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X12, 0X14 # adcb (%si), %dl")
#define ADC_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X12, 0X15 # adcb (%di), %dl")

#define ADC_AL_TO_PTR_EAX CMT_ASM(".byte 0X10, 0X00 # adcb %al, (%eax)")
#define ADC_AL_TO_PTR_EBX CMT_ASM(".byte 0X10, 0X03 # adcb %al, (%ebx)")
#define ADC_AL_TO_PTR_ECX CMT_ASM(".byte 0X10, 0X01 # adcb %al, (%ecx)")
#define ADC_AL_TO_PTR_EDX CMT_ASM(".byte 0X10, 0X02 # adcb %al, (%edx)")
#define ADC_AL_TO_PTR_EDI CMT_ASM(".byte 0X10, 0X07 # adcb %al, (%edi)")
#define ADC_AL_TO_PTR_ESI CMT_ASM(".byte 0X10, 0X06 # adcb %al, (%esi)")
#define ADC_AL_TO_PTR_EBP CMT_ASM(".byte 0X10, 0X45, 0X00 # adcb %al, (%ebp)")
#define ADC_AL_TO_PTR_ESP CMT_ASM(".byte 0X10, 0X04, 0X24 # adcb %al, (%esp)")
#define ADC_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X10, 0X07 # adcb %al, (%bx)")
#define ADC_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X10, 0X46, 0X00 # adcb %al, (%bp)")
#define ADC_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X10, 0X04 # adcb %al, (%si)")
#define ADC_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X10, 0X05 # adcb %al, (%di)")

#define ADC_BL_TO_PTR_EAX CMT_ASM(".byte 0X10, 0X18 # adcb %bl, (%eax)")
#define ADC_BL_TO_PTR_EBX CMT_ASM(".byte 0X10, 0X1B # adcb %bl, (%ebx)")
#define ADC_BL_TO_PTR_ECX CMT_ASM(".byte 0X10, 0X19 # adcb %bl, (%ecx)")
#define ADC_BL_TO_PTR_EDX CMT_ASM(".byte 0X10, 0X1A # adcb %bl, (%edx)")
#define ADC_BL_TO_PTR_EDI CMT_ASM(".byte 0X10, 0X1F # adcb %bl, (%edi)")
#define ADC_BL_TO_PTR_ESI CMT_ASM(".byte 0X10, 0X1E # adcb %bl, (%esi)")
#define ADC_BL_TO_PTR_EBP CMT_ASM(".byte 0X10, 0X5D, 0X00 # adcb %bl, (%ebp)")
#define ADC_BL_TO_PTR_ESP CMT_ASM(".byte 0X10, 0X1C, 0X24 # adcb %bl, (%esp)")
#define ADC_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X10, 0X1F # adcb %bl, (%bx)")
#define ADC_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X10, 0X5E, 0X00 # adcb %bl, (%bp)")
#define ADC_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X10, 0X1C # adcb %bl, (%si)")
#define ADC_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X10, 0X1D # adcb %bl, (%di)")

#define ADC_CL_TO_PTR_EAX CMT_ASM(".byte 0X10, 0X08 # adcb %cl, (%eax)")
#define ADC_CL_TO_PTR_EBX CMT_ASM(".byte 0X10, 0X0B # adcb %cl, (%ebx)")
#define ADC_CL_TO_PTR_ECX CMT_ASM(".byte 0X10, 0X09 # adcb %cl, (%ecx)")
#define ADC_CL_TO_PTR_EDX CMT_ASM(".byte 0X10, 0X0A # adcb %cl, (%edx)")
#define ADC_CL_TO_PTR_EDI CMT_ASM(".byte 0X10, 0X0F # adcb %cl, (%edi)")
#define ADC_CL_TO_PTR_ESI CMT_ASM(".byte 0X10, 0X0E # adcb %cl, (%esi)")
#define ADC_CL_TO_PTR_EBP CMT_ASM(".byte 0X10, 0X4D, 0X00 # adcb %cl, (%ebp)")
#define ADC_CL_TO_PTR_ESP CMT_ASM(".byte 0X10, 0X0C, 0X24 # adcb %cl, (%esp)")
#define ADC_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X10, 0X0F # adcb %cl, (%bx)")
#define ADC_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X10, 0X4E, 0X00 # adcb %cl, (%bp)")
#define ADC_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X10, 0X0C # adcb %cl, (%si)")
#define ADC_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X10, 0X0D # adcb %cl, (%di)")

#define ADC_DL_TO_PTR_EAX CMT_ASM(".byte 0X10, 0X10 # adcb %dl, (%eax)")
#define ADC_DL_TO_PTR_EBX CMT_ASM(".byte 0X10, 0X13 # adcb %dl, (%ebx)")
#define ADC_DL_TO_PTR_ECX CMT_ASM(".byte 0X10, 0X11 # adcb %dl, (%ecx)")
#define ADC_DL_TO_PTR_EDX CMT_ASM(".byte 0X10, 0X12 # adcb %dl, (%edx)")
#define ADC_DL_TO_PTR_EDI CMT_ASM(".byte 0X10, 0X17 # adcb %dl, (%edi)")
#define ADC_DL_TO_PTR_ESI CMT_ASM(".byte 0X10, 0X16 # adcb %dl, (%esi)")
#define ADC_DL_TO_PTR_EBP CMT_ASM(".byte 0X10, 0X55, 0X00 # adcb %dl, (%ebp)")
#define ADC_DL_TO_PTR_ESP CMT_ASM(".byte 0X10, 0X14, 0X24 # adcb %dl, (%esp)")
#define ADC_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X10, 0X17 # adcb %dl, (%bx)")
#define ADC_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X10, 0X56, 0X00 # adcb %dl, (%bp)")
#define ADC_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X10, 0X14 # adcb %dl, (%si)")
#define ADC_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X10, 0X15 # adcb %dl, (%di)")

#define ADC_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X80 # adcb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X83 # adcb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X81 # adcb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X82 # adcb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X87 # adcb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X86 # adcb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X85 # adcb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X87 # adcb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X86 # adcb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X84 # adcb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X85 # adcb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X98 # adcb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9B # adcb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X99 # adcb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9A # adcb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9F # adcb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9E # adcb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9D # adcb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9F # adcb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9E # adcb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9C # adcb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9D # adcb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X88 # adcb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8B # adcb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X89 # adcb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8A # adcb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8F # adcb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8E # adcb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8D # adcb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8F # adcb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8E # adcb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8C # adcb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8D # adcb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X90 # adcb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X93 # adcb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X91 # adcb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X92 # adcb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X97 # adcb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X96 # adcb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X95 # adcb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X97 # adcb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X96 # adcb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X94 # adcb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X95 # adcb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X80 # adcb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X83 # adcb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X81 # adcb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X82 # adcb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X87 # adcb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X86 # adcb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X85 # adcb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X84, 0X24 # adcb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X87 # adcb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X86 # adcb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X84 # adcb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X85 # adcb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X98 # adcb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9B # adcb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X99 # adcb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9A # adcb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9F # adcb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9E # adcb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9D # adcb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9C, 0X24 # adcb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9F # adcb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9E # adcb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9C # adcb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9D # adcb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X88 # adcb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8B # adcb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X89 # adcb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8A # adcb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8F # adcb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8E # adcb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8D # adcb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8C, 0X24 # adcb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8F # adcb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8E # adcb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8C # adcb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8D # adcb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X90 # adcb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X93 # adcb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X91 # adcb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X92 # adcb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X97 # adcb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X96 # adcb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X95 # adcb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X94, 0X24 # adcb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X97 # adcb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X96 # adcb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X94 # adcb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X95 # adcb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X04, 0X25 # adcb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X1C, 0X25 # adcb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X0C, 0X25 # adcb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X12, 0X14, 0X25 # adcb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0X3C, 0X25 # adcb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0X34, 0X25 # adcb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0X2C, 0X25 # adcb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0X24, 0X25 # adcb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X04, 0X25 # adcb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X0C, 0X25 # adcb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X14, 0X25 # adcb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X1C, 0X25 # adcb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X24, 0X25 # adcb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X2C, 0X25 # adcb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X34, 0X25 # adcb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X3C, 0X25 # adcb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X04, 0X25 # adcb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X1C, 0X25 # adcb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X0C, 0X25 # adcb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X10, 0X14, 0X25 # adcb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0X3C, 0X25 # adcb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0X34, 0X25 # adcb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0X2C, 0X25 # adcb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0X24, 0X25 # adcb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X04, 0X25 # adcb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X0C, 0X25 # adcb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X14, 0X25 # adcb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X1C, 0X25 # adcb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X24, 0X25 # adcb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X2C, 0X25 # adcb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X34, 0X25 # adcb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X3C, 0X25 # adcb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AL_FROM_PTR_RAX CMT_ASM(".byte 0X12, 0X00 # adcb (%rax), %al")
#define ADC_AL_FROM_PTR_RBX CMT_ASM(".byte 0X12, 0X03 # adcb (%rbx), %al")
#define ADC_AL_FROM_PTR_RCX CMT_ASM(".byte 0X12, 0X01 # adcb (%rcx), %al")
#define ADC_AL_FROM_PTR_RDX CMT_ASM(".byte 0X12, 0X02 # adcb (%rdx), %al")
#define ADC_AL_FROM_PTR_RDI CMT_ASM(".byte 0X12, 0X07 # adcb (%rdi), %al")
#define ADC_AL_FROM_PTR_RSI CMT_ASM(".byte 0X12, 0X06 # adcb (%rsi), %al")
#define ADC_AL_FROM_PTR_RBP CMT_ASM(".byte 0X12, 0X45, 0X00 # adcb (%rbp), %al")
#define ADC_AL_FROM_PTR_RSP CMT_ASM(".byte 0X12, 0X04, 0X24 # adcb (%rsp), %al")
#define ADC_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X00 # adcb (%r8), %al")
#define ADC_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X01 # adcb (%r9), %al")
#define ADC_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X02 # adcb (%r10), %al")
#define ADC_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X03 # adcb (%r11), %al")
#define ADC_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X04, 0X24 # adcb (%r12), %al")
#define ADC_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X45, 0X00 # adcb (%r13), %al")
#define ADC_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X06 # adcb (%r14), %al")
#define ADC_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X07 # adcb (%r15), %al")
#define ADC_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X12, 0X00 # adcb (%eax), %al")
#define ADC_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X12, 0X03 # adcb (%ebx), %al")
#define ADC_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X12, 0X01 # adcb (%ecx), %al")
#define ADC_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X12, 0X02 # adcb (%edx), %al")
#define ADC_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X12, 0X07 # adcb (%edi), %al")
#define ADC_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X12, 0X06 # adcb (%esi), %al")
#define ADC_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X12, 0X45, 0X00 # adcb (%ebp), %al")
#define ADC_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X12, 0X04, 0X24 # adcb (%esp), %al")

#define ADC_BL_FROM_PTR_RAX CMT_ASM(".byte 0X12, 0X18 # adcb (%rax), %bl")
#define ADC_BL_FROM_PTR_RBX CMT_ASM(".byte 0X12, 0X1B # adcb (%rbx), %bl")
#define ADC_BL_FROM_PTR_RCX CMT_ASM(".byte 0X12, 0X19 # adcb (%rcx), %bl")
#define ADC_BL_FROM_PTR_RDX CMT_ASM(".byte 0X12, 0X1A # adcb (%rdx), %bl")
#define ADC_BL_FROM_PTR_RDI CMT_ASM(".byte 0X12, 0X1F # adcb (%rdi), %bl")
#define ADC_BL_FROM_PTR_RSI CMT_ASM(".byte 0X12, 0X1E # adcb (%rsi), %bl")
#define ADC_BL_FROM_PTR_RBP CMT_ASM(".byte 0X12, 0X5D, 0X00 # adcb (%rbp), %bl")
#define ADC_BL_FROM_PTR_RSP CMT_ASM(".byte 0X12, 0X1C, 0X24 # adcb (%rsp), %bl")
#define ADC_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X18 # adcb (%r8), %bl")
#define ADC_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X19 # adcb (%r9), %bl")
#define ADC_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X1A # adcb (%r10), %bl")
#define ADC_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X1B # adcb (%r11), %bl")
#define ADC_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X1C, 0X24 # adcb (%r12), %bl")
#define ADC_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X5D, 0X00 # adcb (%r13), %bl")
#define ADC_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X1E # adcb (%r14), %bl")
#define ADC_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X1F # adcb (%r15), %bl")
#define ADC_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X12, 0X18 # adcb (%eax), %bl")
#define ADC_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X12, 0X1B # adcb (%ebx), %bl")
#define ADC_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X12, 0X19 # adcb (%ecx), %bl")
#define ADC_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X12, 0X1A # adcb (%edx), %bl")
#define ADC_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X12, 0X1F # adcb (%edi), %bl")
#define ADC_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X12, 0X1E # adcb (%esi), %bl")
#define ADC_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X12, 0X5D, 0X00 # adcb (%ebp), %bl")
#define ADC_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X12, 0X1C, 0X24 # adcb (%esp), %bl")

#define ADC_CL_FROM_PTR_RAX CMT_ASM(".byte 0X12, 0X08 # adcb (%rax), %cl")
#define ADC_CL_FROM_PTR_RBX CMT_ASM(".byte 0X12, 0X0B # adcb (%rbx), %cl")
#define ADC_CL_FROM_PTR_RCX CMT_ASM(".byte 0X12, 0X09 # adcb (%rcx), %cl")
#define ADC_CL_FROM_PTR_RDX CMT_ASM(".byte 0X12, 0X0A # adcb (%rdx), %cl")
#define ADC_CL_FROM_PTR_RDI CMT_ASM(".byte 0X12, 0X0F # adcb (%rdi), %cl")
#define ADC_CL_FROM_PTR_RSI CMT_ASM(".byte 0X12, 0X0E # adcb (%rsi), %cl")
#define ADC_CL_FROM_PTR_RBP CMT_ASM(".byte 0X12, 0X4D, 0X00 # adcb (%rbp), %cl")
#define ADC_CL_FROM_PTR_RSP CMT_ASM(".byte 0X12, 0X0C, 0X24 # adcb (%rsp), %cl")
#define ADC_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X08 # adcb (%r8), %cl")
#define ADC_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X09 # adcb (%r9), %cl")
#define ADC_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X0A # adcb (%r10), %cl")
#define ADC_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X0B # adcb (%r11), %cl")
#define ADC_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X0C, 0X24 # adcb (%r12), %cl")
#define ADC_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X4D, 0X00 # adcb (%r13), %cl")
#define ADC_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X0E # adcb (%r14), %cl")
#define ADC_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X0F # adcb (%r15), %cl")
#define ADC_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X12, 0X08 # adcb (%eax), %cl")
#define ADC_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X12, 0X0B # adcb (%ebx), %cl")
#define ADC_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X12, 0X09 # adcb (%ecx), %cl")
#define ADC_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X12, 0X0A # adcb (%edx), %cl")
#define ADC_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X12, 0X0F # adcb (%edi), %cl")
#define ADC_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X12, 0X0E # adcb (%esi), %cl")
#define ADC_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X12, 0X4D, 0X00 # adcb (%ebp), %cl")
#define ADC_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X12, 0X0C, 0X24 # adcb (%esp), %cl")

#define ADC_DL_FROM_PTR_RAX CMT_ASM(".byte 0X12, 0X10 # adcb (%rax), %dl")
#define ADC_DL_FROM_PTR_RBX CMT_ASM(".byte 0X12, 0X13 # adcb (%rbx), %dl")
#define ADC_DL_FROM_PTR_RCX CMT_ASM(".byte 0X12, 0X11 # adcb (%rcx), %dl")
#define ADC_DL_FROM_PTR_RDX CMT_ASM(".byte 0X12, 0X12 # adcb (%rdx), %dl")
#define ADC_DL_FROM_PTR_RDI CMT_ASM(".byte 0X12, 0X17 # adcb (%rdi), %dl")
#define ADC_DL_FROM_PTR_RSI CMT_ASM(".byte 0X12, 0X16 # adcb (%rsi), %dl")
#define ADC_DL_FROM_PTR_RBP CMT_ASM(".byte 0X12, 0X55, 0X00 # adcb (%rbp), %dl")
#define ADC_DL_FROM_PTR_RSP CMT_ASM(".byte 0X12, 0X14, 0X24 # adcb (%rsp), %dl")
#define ADC_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X10 # adcb (%r8), %dl")
#define ADC_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X11 # adcb (%r9), %dl")
#define ADC_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X12 # adcb (%r10), %dl")
#define ADC_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X13 # adcb (%r11), %dl")
#define ADC_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X14, 0X24 # adcb (%r12), %dl")
#define ADC_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X55, 0X00 # adcb (%r13), %dl")
#define ADC_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X16 # adcb (%r14), %dl")
#define ADC_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X17 # adcb (%r15), %dl")
#define ADC_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X12, 0X10 # adcb (%eax), %dl")
#define ADC_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X12, 0X13 # adcb (%ebx), %dl")
#define ADC_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X12, 0X11 # adcb (%ecx), %dl")
#define ADC_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X12, 0X12 # adcb (%edx), %dl")
#define ADC_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X12, 0X17 # adcb (%edi), %dl")
#define ADC_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X12, 0X16 # adcb (%esi), %dl")
#define ADC_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X12, 0X55, 0X00 # adcb (%ebp), %dl")
#define ADC_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X12, 0X14, 0X24 # adcb (%esp), %dl")

#define ADC_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X12, 0X38 # adcb (%rax), %dil")
#define ADC_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X12, 0X3B # adcb (%rbx), %dil")
#define ADC_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X12, 0X39 # adcb (%rcx), %dil")
#define ADC_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X12, 0X3A # adcb (%rdx), %dil")
#define ADC_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X12, 0X3F # adcb (%rdi), %dil")
#define ADC_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X12, 0X3E # adcb (%rsi), %dil")
#define ADC_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X12, 0X7D, 0X00 # adcb (%rbp), %dil")
#define ADC_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X12, 0X3C, 0X24 # adcb (%rsp), %dil")
#define ADC_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X38 # adcb (%r8), %dil")
#define ADC_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X39 # adcb (%r9), %dil")
#define ADC_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X3A # adcb (%r10), %dil")
#define ADC_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X3B # adcb (%r11), %dil")
#define ADC_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X3C, 0X24 # adcb (%r12), %dil")
#define ADC_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X7D, 0X00 # adcb (%r13), %dil")
#define ADC_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X3E # adcb (%r14), %dil")
#define ADC_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X3F # adcb (%r15), %dil")
#define ADC_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X38 # adcb (%eax), %dil")
#define ADC_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X3B # adcb (%ebx), %dil")
#define ADC_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X39 # adcb (%ecx), %dil")
#define ADC_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X3A # adcb (%edx), %dil")
#define ADC_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X3F # adcb (%edi), %dil")
#define ADC_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X3E # adcb (%esi), %dil")
#define ADC_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X7D, 0X00 # adcb (%ebp), %dil")
#define ADC_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X3C, 0X24 # adcb (%esp), %dil")

#define ADC_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X12, 0X30 # adcb (%rax), %sil")
#define ADC_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X12, 0X33 # adcb (%rbx), %sil")
#define ADC_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X12, 0X31 # adcb (%rcx), %sil")
#define ADC_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X12, 0X32 # adcb (%rdx), %sil")
#define ADC_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X12, 0X37 # adcb (%rdi), %sil")
#define ADC_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X12, 0X36 # adcb (%rsi), %sil")
#define ADC_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X12, 0X75, 0X00 # adcb (%rbp), %sil")
#define ADC_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X12, 0X34, 0X24 # adcb (%rsp), %sil")
#define ADC_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X30 # adcb (%r8), %sil")
#define ADC_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X31 # adcb (%r9), %sil")
#define ADC_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X32 # adcb (%r10), %sil")
#define ADC_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X33 # adcb (%r11), %sil")
#define ADC_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X34, 0X24 # adcb (%r12), %sil")
#define ADC_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X75, 0X00 # adcb (%r13), %sil")
#define ADC_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X36 # adcb (%r14), %sil")
#define ADC_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X37 # adcb (%r15), %sil")
#define ADC_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X30 # adcb (%eax), %sil")
#define ADC_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X33 # adcb (%ebx), %sil")
#define ADC_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X31 # adcb (%ecx), %sil")
#define ADC_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X32 # adcb (%edx), %sil")
#define ADC_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X37 # adcb (%edi), %sil")
#define ADC_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X36 # adcb (%esi), %sil")
#define ADC_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X75, 0X00 # adcb (%ebp), %sil")
#define ADC_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X34, 0X24 # adcb (%esp), %sil")

#define ADC_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X12, 0X28 # adcb (%rax), %bpl")
#define ADC_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X12, 0X2B # adcb (%rbx), %bpl")
#define ADC_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X12, 0X29 # adcb (%rcx), %bpl")
#define ADC_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X12, 0X2A # adcb (%rdx), %bpl")
#define ADC_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X12, 0X2F # adcb (%rdi), %bpl")
#define ADC_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X12, 0X2E # adcb (%rsi), %bpl")
#define ADC_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X12, 0X6D, 0X00 # adcb (%rbp), %bpl")
#define ADC_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X12, 0X2C, 0X24 # adcb (%rsp), %bpl")
#define ADC_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X28 # adcb (%r8), %bpl")
#define ADC_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X29 # adcb (%r9), %bpl")
#define ADC_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X2A # adcb (%r10), %bpl")
#define ADC_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X2B # adcb (%r11), %bpl")
#define ADC_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X2C, 0X24 # adcb (%r12), %bpl")
#define ADC_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X6D, 0X00 # adcb (%r13), %bpl")
#define ADC_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X2E # adcb (%r14), %bpl")
#define ADC_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X2F # adcb (%r15), %bpl")
#define ADC_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X28 # adcb (%eax), %bpl")
#define ADC_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X2B # adcb (%ebx), %bpl")
#define ADC_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X29 # adcb (%ecx), %bpl")
#define ADC_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X2A # adcb (%edx), %bpl")
#define ADC_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X2F # adcb (%edi), %bpl")
#define ADC_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X2E # adcb (%esi), %bpl")
#define ADC_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X6D, 0X00 # adcb (%ebp), %bpl")
#define ADC_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X2C, 0X24 # adcb (%esp), %bpl")

#define ADC_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X12, 0X20 # adcb (%rax), %spl")
#define ADC_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X12, 0X23 # adcb (%rbx), %spl")
#define ADC_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X12, 0X21 # adcb (%rcx), %spl")
#define ADC_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X12, 0X22 # adcb (%rdx), %spl")
#define ADC_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X12, 0X27 # adcb (%rdi), %spl")
#define ADC_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X12, 0X26 # adcb (%rsi), %spl")
#define ADC_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X12, 0X65, 0X00 # adcb (%rbp), %spl")
#define ADC_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X12, 0X24, 0X24 # adcb (%rsp), %spl")
#define ADC_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X12, 0X20 # adcb (%r8), %spl")
#define ADC_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X12, 0X21 # adcb (%r9), %spl")
#define ADC_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X12, 0X22 # adcb (%r10), %spl")
#define ADC_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X12, 0X23 # adcb (%r11), %spl")
#define ADC_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X12, 0X24, 0X24 # adcb (%r12), %spl")
#define ADC_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X12, 0X65, 0X00 # adcb (%r13), %spl")
#define ADC_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X12, 0X26 # adcb (%r14), %spl")
#define ADC_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X12, 0X27 # adcb (%r15), %spl")
#define ADC_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X20 # adcb (%eax), %spl")
#define ADC_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X23 # adcb (%ebx), %spl")
#define ADC_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X21 # adcb (%ecx), %spl")
#define ADC_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X12, 0X22 # adcb (%edx), %spl")
#define ADC_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X27 # adcb (%edi), %spl")
#define ADC_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X12, 0X26 # adcb (%esi), %spl")
#define ADC_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X65, 0X00 # adcb (%ebp), %spl")
#define ADC_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X12, 0X24, 0X24 # adcb (%esp), %spl")

#define ADC_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X00 # adcb (%rax), %r8b")
#define ADC_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X03 # adcb (%rbx), %r8b")
#define ADC_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X01 # adcb (%rcx), %r8b")
#define ADC_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X02 # adcb (%rdx), %r8b")
#define ADC_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X07 # adcb (%rdi), %r8b")
#define ADC_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X06 # adcb (%rsi), %r8b")
#define ADC_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X45, 0X00 # adcb (%rbp), %r8b")
#define ADC_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X04, 0X24 # adcb (%rsp), %r8b")
#define ADC_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X00 # adcb (%r8), %r8b")
#define ADC_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X01 # adcb (%r9), %r8b")
#define ADC_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X02 # adcb (%r10), %r8b")
#define ADC_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X03 # adcb (%r11), %r8b")
#define ADC_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X04, 0X24 # adcb (%r12), %r8b")
#define ADC_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X45, 0X00 # adcb (%r13), %r8b")
#define ADC_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X06 # adcb (%r14), %r8b")
#define ADC_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X07 # adcb (%r15), %r8b")
#define ADC_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X00 # adcb (%eax), %r8b")
#define ADC_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X03 # adcb (%ebx), %r8b")
#define ADC_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X01 # adcb (%ecx), %r8b")
#define ADC_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X02 # adcb (%edx), %r8b")
#define ADC_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X07 # adcb (%edi), %r8b")
#define ADC_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X06 # adcb (%esi), %r8b")
#define ADC_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X45, 0X00 # adcb (%ebp), %r8b")
#define ADC_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X04, 0X24 # adcb (%esp), %r8b")

#define ADC_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X08 # adcb (%rax), %r9b")
#define ADC_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X0B # adcb (%rbx), %r9b")
#define ADC_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X09 # adcb (%rcx), %r9b")
#define ADC_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X0A # adcb (%rdx), %r9b")
#define ADC_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X0F # adcb (%rdi), %r9b")
#define ADC_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X0E # adcb (%rsi), %r9b")
#define ADC_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X4D, 0X00 # adcb (%rbp), %r9b")
#define ADC_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X0C, 0X24 # adcb (%rsp), %r9b")
#define ADC_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X08 # adcb (%r8), %r9b")
#define ADC_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X09 # adcb (%r9), %r9b")
#define ADC_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X0A # adcb (%r10), %r9b")
#define ADC_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X0B # adcb (%r11), %r9b")
#define ADC_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X0C, 0X24 # adcb (%r12), %r9b")
#define ADC_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X4D, 0X00 # adcb (%r13), %r9b")
#define ADC_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X0E # adcb (%r14), %r9b")
#define ADC_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X0F # adcb (%r15), %r9b")
#define ADC_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X08 # adcb (%eax), %r9b")
#define ADC_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X0B # adcb (%ebx), %r9b")
#define ADC_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X09 # adcb (%ecx), %r9b")
#define ADC_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X0A # adcb (%edx), %r9b")
#define ADC_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X0F # adcb (%edi), %r9b")
#define ADC_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X0E # adcb (%esi), %r9b")
#define ADC_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X4D, 0X00 # adcb (%ebp), %r9b")
#define ADC_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X0C, 0X24 # adcb (%esp), %r9b")

#define ADC_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X10 # adcb (%rax), %r10b")
#define ADC_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X13 # adcb (%rbx), %r10b")
#define ADC_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X11 # adcb (%rcx), %r10b")
#define ADC_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X12 # adcb (%rdx), %r10b")
#define ADC_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X17 # adcb (%rdi), %r10b")
#define ADC_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X16 # adcb (%rsi), %r10b")
#define ADC_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X55, 0X00 # adcb (%rbp), %r10b")
#define ADC_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X14, 0X24 # adcb (%rsp), %r10b")
#define ADC_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X10 # adcb (%r8), %r10b")
#define ADC_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X11 # adcb (%r9), %r10b")
#define ADC_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X12 # adcb (%r10), %r10b")
#define ADC_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X13 # adcb (%r11), %r10b")
#define ADC_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X14, 0X24 # adcb (%r12), %r10b")
#define ADC_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X55, 0X00 # adcb (%r13), %r10b")
#define ADC_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X16 # adcb (%r14), %r10b")
#define ADC_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X17 # adcb (%r15), %r10b")
#define ADC_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X10 # adcb (%eax), %r10b")
#define ADC_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X13 # adcb (%ebx), %r10b")
#define ADC_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X11 # adcb (%ecx), %r10b")
#define ADC_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X12 # adcb (%edx), %r10b")
#define ADC_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X17 # adcb (%edi), %r10b")
#define ADC_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X16 # adcb (%esi), %r10b")
#define ADC_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X55, 0X00 # adcb (%ebp), %r10b")
#define ADC_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X14, 0X24 # adcb (%esp), %r10b")

#define ADC_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X18 # adcb (%rax), %r11b")
#define ADC_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X1B # adcb (%rbx), %r11b")
#define ADC_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X19 # adcb (%rcx), %r11b")
#define ADC_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X1A # adcb (%rdx), %r11b")
#define ADC_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X1F # adcb (%rdi), %r11b")
#define ADC_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X1E # adcb (%rsi), %r11b")
#define ADC_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X5D, 0X00 # adcb (%rbp), %r11b")
#define ADC_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X1C, 0X24 # adcb (%rsp), %r11b")
#define ADC_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X18 # adcb (%r8), %r11b")
#define ADC_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X19 # adcb (%r9), %r11b")
#define ADC_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X1A # adcb (%r10), %r11b")
#define ADC_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X1B # adcb (%r11), %r11b")
#define ADC_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X1C, 0X24 # adcb (%r12), %r11b")
#define ADC_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X5D, 0X00 # adcb (%r13), %r11b")
#define ADC_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X1E # adcb (%r14), %r11b")
#define ADC_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X1F # adcb (%r15), %r11b")
#define ADC_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X18 # adcb (%eax), %r11b")
#define ADC_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X1B # adcb (%ebx), %r11b")
#define ADC_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X19 # adcb (%ecx), %r11b")
#define ADC_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X1A # adcb (%edx), %r11b")
#define ADC_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X1F # adcb (%edi), %r11b")
#define ADC_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X1E # adcb (%esi), %r11b")
#define ADC_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X5D, 0X00 # adcb (%ebp), %r11b")
#define ADC_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X1C, 0X24 # adcb (%esp), %r11b")

#define ADC_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X20 # adcb (%rax), %r12b")
#define ADC_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X23 # adcb (%rbx), %r12b")
#define ADC_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X21 # adcb (%rcx), %r12b")
#define ADC_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X22 # adcb (%rdx), %r12b")
#define ADC_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X27 # adcb (%rdi), %r12b")
#define ADC_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X26 # adcb (%rsi), %r12b")
#define ADC_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X65, 0X00 # adcb (%rbp), %r12b")
#define ADC_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X24, 0X24 # adcb (%rsp), %r12b")
#define ADC_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X20 # adcb (%r8), %r12b")
#define ADC_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X21 # adcb (%r9), %r12b")
#define ADC_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X22 # adcb (%r10), %r12b")
#define ADC_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X23 # adcb (%r11), %r12b")
#define ADC_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X24, 0X24 # adcb (%r12), %r12b")
#define ADC_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X65, 0X00 # adcb (%r13), %r12b")
#define ADC_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X26 # adcb (%r14), %r12b")
#define ADC_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X27 # adcb (%r15), %r12b")
#define ADC_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X20 # adcb (%eax), %r12b")
#define ADC_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X23 # adcb (%ebx), %r12b")
#define ADC_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X21 # adcb (%ecx), %r12b")
#define ADC_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X22 # adcb (%edx), %r12b")
#define ADC_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X27 # adcb (%edi), %r12b")
#define ADC_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X26 # adcb (%esi), %r12b")
#define ADC_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X65, 0X00 # adcb (%ebp), %r12b")
#define ADC_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X24, 0X24 # adcb (%esp), %r12b")

#define ADC_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X28 # adcb (%rax), %r13b")
#define ADC_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X2B # adcb (%rbx), %r13b")
#define ADC_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X29 # adcb (%rcx), %r13b")
#define ADC_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X2A # adcb (%rdx), %r13b")
#define ADC_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X2F # adcb (%rdi), %r13b")
#define ADC_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X2E # adcb (%rsi), %r13b")
#define ADC_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X6D, 0X00 # adcb (%rbp), %r13b")
#define ADC_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X2C, 0X24 # adcb (%rsp), %r13b")
#define ADC_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X28 # adcb (%r8), %r13b")
#define ADC_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X29 # adcb (%r9), %r13b")
#define ADC_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X2A # adcb (%r10), %r13b")
#define ADC_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X2B # adcb (%r11), %r13b")
#define ADC_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X2C, 0X24 # adcb (%r12), %r13b")
#define ADC_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X6D, 0X00 # adcb (%r13), %r13b")
#define ADC_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X2E # adcb (%r14), %r13b")
#define ADC_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X2F # adcb (%r15), %r13b")
#define ADC_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X28 # adcb (%eax), %r13b")
#define ADC_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X2B # adcb (%ebx), %r13b")
#define ADC_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X29 # adcb (%ecx), %r13b")
#define ADC_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X2A # adcb (%edx), %r13b")
#define ADC_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X2F # adcb (%edi), %r13b")
#define ADC_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X2E # adcb (%esi), %r13b")
#define ADC_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X6D, 0X00 # adcb (%ebp), %r13b")
#define ADC_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X2C, 0X24 # adcb (%esp), %r13b")

#define ADC_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X30 # adcb (%rax), %r14b")
#define ADC_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X33 # adcb (%rbx), %r14b")
#define ADC_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X31 # adcb (%rcx), %r14b")
#define ADC_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X32 # adcb (%rdx), %r14b")
#define ADC_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X37 # adcb (%rdi), %r14b")
#define ADC_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X36 # adcb (%rsi), %r14b")
#define ADC_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X75, 0X00 # adcb (%rbp), %r14b")
#define ADC_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X34, 0X24 # adcb (%rsp), %r14b")
#define ADC_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X30 # adcb (%r8), %r14b")
#define ADC_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X31 # adcb (%r9), %r14b")
#define ADC_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X32 # adcb (%r10), %r14b")
#define ADC_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X33 # adcb (%r11), %r14b")
#define ADC_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X34, 0X24 # adcb (%r12), %r14b")
#define ADC_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X75, 0X00 # adcb (%r13), %r14b")
#define ADC_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X36 # adcb (%r14), %r14b")
#define ADC_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X37 # adcb (%r15), %r14b")
#define ADC_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X30 # adcb (%eax), %r14b")
#define ADC_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X33 # adcb (%ebx), %r14b")
#define ADC_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X31 # adcb (%ecx), %r14b")
#define ADC_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X32 # adcb (%edx), %r14b")
#define ADC_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X37 # adcb (%edi), %r14b")
#define ADC_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X36 # adcb (%esi), %r14b")
#define ADC_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X75, 0X00 # adcb (%ebp), %r14b")
#define ADC_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X34, 0X24 # adcb (%esp), %r14b")

#define ADC_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X12, 0X38 # adcb (%rax), %r15b")
#define ADC_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X12, 0X3B # adcb (%rbx), %r15b")
#define ADC_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X12, 0X39 # adcb (%rcx), %r15b")
#define ADC_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X12, 0X3A # adcb (%rdx), %r15b")
#define ADC_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X12, 0X3F # adcb (%rdi), %r15b")
#define ADC_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X12, 0X3E # adcb (%rsi), %r15b")
#define ADC_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X12, 0X7D, 0X00 # adcb (%rbp), %r15b")
#define ADC_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X12, 0X3C, 0X24 # adcb (%rsp), %r15b")
#define ADC_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X12, 0X38 # adcb (%r8), %r15b")
#define ADC_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X12, 0X39 # adcb (%r9), %r15b")
#define ADC_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X12, 0X3A # adcb (%r10), %r15b")
#define ADC_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X12, 0X3B # adcb (%r11), %r15b")
#define ADC_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X12, 0X3C, 0X24 # adcb (%r12), %r15b")
#define ADC_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X12, 0X7D, 0X00 # adcb (%r13), %r15b")
#define ADC_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X12, 0X3E # adcb (%r14), %r15b")
#define ADC_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X12, 0X3F # adcb (%r15), %r15b")
#define ADC_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X38 # adcb (%eax), %r15b")
#define ADC_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X3B # adcb (%ebx), %r15b")
#define ADC_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X39 # adcb (%ecx), %r15b")
#define ADC_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X12, 0X3A # adcb (%edx), %r15b")
#define ADC_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X3F # adcb (%edi), %r15b")
#define ADC_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X12, 0X3E # adcb (%esi), %r15b")
#define ADC_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X7D, 0X00 # adcb (%ebp), %r15b")
#define ADC_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X12, 0X3C, 0X24 # adcb (%esp), %r15b")

#define ADC_AL_TO_PTR_RAX CMT_ASM(".byte 0X10, 0X00 # adcb %al, (%rax)")
#define ADC_AL_TO_PTR_RBX CMT_ASM(".byte 0X10, 0X03 # adcb %al, (%rbx)")
#define ADC_AL_TO_PTR_RCX CMT_ASM(".byte 0X10, 0X01 # adcb %al, (%rcx)")
#define ADC_AL_TO_PTR_RDX CMT_ASM(".byte 0X10, 0X02 # adcb %al, (%rdx)")
#define ADC_AL_TO_PTR_RDI CMT_ASM(".byte 0X10, 0X07 # adcb %al, (%rdi)")
#define ADC_AL_TO_PTR_RSI CMT_ASM(".byte 0X10, 0X06 # adcb %al, (%rsi)")
#define ADC_AL_TO_PTR_RBP CMT_ASM(".byte 0X10, 0X45, 0X00 # adcb %al, (%rbp)")
#define ADC_AL_TO_PTR_RSP CMT_ASM(".byte 0X10, 0X04, 0X24 # adcb %al, (%rsp)")
#define ADC_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X00 # adcb %al, (%r8)")
#define ADC_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X01 # adcb %al, (%r9)")
#define ADC_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X02 # adcb %al, (%r10)")
#define ADC_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X03 # adcb %al, (%r11)")
#define ADC_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X04, 0X24 # adcb %al, (%r12)")
#define ADC_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X45, 0X00 # adcb %al, (%r13)")
#define ADC_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X06 # adcb %al, (%r14)")
#define ADC_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X07 # adcb %al, (%r15)")
#define ADC_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X10, 0X00 # adcb %al, (%eax)")
#define ADC_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X10, 0X03 # adcb %al, (%ebx)")
#define ADC_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X10, 0X01 # adcb %al, (%ecx)")
#define ADC_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X10, 0X02 # adcb %al, (%edx)")
#define ADC_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X10, 0X07 # adcb %al, (%edi)")
#define ADC_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X10, 0X06 # adcb %al, (%esi)")
#define ADC_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X10, 0X45, 0X00 # adcb %al, (%ebp)")
#define ADC_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X10, 0X04, 0X24 # adcb %al, (%esp)")

#define ADC_BL_TO_PTR_RAX CMT_ASM(".byte 0X10, 0X18 # adcb %bl, (%rax)")
#define ADC_BL_TO_PTR_RBX CMT_ASM(".byte 0X10, 0X1B # adcb %bl, (%rbx)")
#define ADC_BL_TO_PTR_RCX CMT_ASM(".byte 0X10, 0X19 # adcb %bl, (%rcx)")
#define ADC_BL_TO_PTR_RDX CMT_ASM(".byte 0X10, 0X1A # adcb %bl, (%rdx)")
#define ADC_BL_TO_PTR_RDI CMT_ASM(".byte 0X10, 0X1F # adcb %bl, (%rdi)")
#define ADC_BL_TO_PTR_RSI CMT_ASM(".byte 0X10, 0X1E # adcb %bl, (%rsi)")
#define ADC_BL_TO_PTR_RBP CMT_ASM(".byte 0X10, 0X5D, 0X00 # adcb %bl, (%rbp)")
#define ADC_BL_TO_PTR_RSP CMT_ASM(".byte 0X10, 0X1C, 0X24 # adcb %bl, (%rsp)")
#define ADC_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X18 # adcb %bl, (%r8)")
#define ADC_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X19 # adcb %bl, (%r9)")
#define ADC_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X1A # adcb %bl, (%r10)")
#define ADC_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X1B # adcb %bl, (%r11)")
#define ADC_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X1C, 0X24 # adcb %bl, (%r12)")
#define ADC_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X5D, 0X00 # adcb %bl, (%r13)")
#define ADC_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X1E # adcb %bl, (%r14)")
#define ADC_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X1F # adcb %bl, (%r15)")
#define ADC_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X10, 0X18 # adcb %bl, (%eax)")
#define ADC_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X10, 0X1B # adcb %bl, (%ebx)")
#define ADC_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X10, 0X19 # adcb %bl, (%ecx)")
#define ADC_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X10, 0X1A # adcb %bl, (%edx)")
#define ADC_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X10, 0X1F # adcb %bl, (%edi)")
#define ADC_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X10, 0X1E # adcb %bl, (%esi)")
#define ADC_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X10, 0X5D, 0X00 # adcb %bl, (%ebp)")
#define ADC_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X10, 0X1C, 0X24 # adcb %bl, (%esp)")

#define ADC_CL_TO_PTR_RAX CMT_ASM(".byte 0X10, 0X08 # adcb %cl, (%rax)")
#define ADC_CL_TO_PTR_RBX CMT_ASM(".byte 0X10, 0X0B # adcb %cl, (%rbx)")
#define ADC_CL_TO_PTR_RCX CMT_ASM(".byte 0X10, 0X09 # adcb %cl, (%rcx)")
#define ADC_CL_TO_PTR_RDX CMT_ASM(".byte 0X10, 0X0A # adcb %cl, (%rdx)")
#define ADC_CL_TO_PTR_RDI CMT_ASM(".byte 0X10, 0X0F # adcb %cl, (%rdi)")
#define ADC_CL_TO_PTR_RSI CMT_ASM(".byte 0X10, 0X0E # adcb %cl, (%rsi)")
#define ADC_CL_TO_PTR_RBP CMT_ASM(".byte 0X10, 0X4D, 0X00 # adcb %cl, (%rbp)")
#define ADC_CL_TO_PTR_RSP CMT_ASM(".byte 0X10, 0X0C, 0X24 # adcb %cl, (%rsp)")
#define ADC_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X08 # adcb %cl, (%r8)")
#define ADC_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X09 # adcb %cl, (%r9)")
#define ADC_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X0A # adcb %cl, (%r10)")
#define ADC_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X0B # adcb %cl, (%r11)")
#define ADC_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X0C, 0X24 # adcb %cl, (%r12)")
#define ADC_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X4D, 0X00 # adcb %cl, (%r13)")
#define ADC_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X0E # adcb %cl, (%r14)")
#define ADC_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X0F # adcb %cl, (%r15)")
#define ADC_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X10, 0X08 # adcb %cl, (%eax)")
#define ADC_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X10, 0X0B # adcb %cl, (%ebx)")
#define ADC_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X10, 0X09 # adcb %cl, (%ecx)")
#define ADC_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X10, 0X0A # adcb %cl, (%edx)")
#define ADC_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X10, 0X0F # adcb %cl, (%edi)")
#define ADC_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X10, 0X0E # adcb %cl, (%esi)")
#define ADC_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X10, 0X4D, 0X00 # adcb %cl, (%ebp)")
#define ADC_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X10, 0X0C, 0X24 # adcb %cl, (%esp)")

#define ADC_DL_TO_PTR_RAX CMT_ASM(".byte 0X10, 0X10 # adcb %dl, (%rax)")
#define ADC_DL_TO_PTR_RBX CMT_ASM(".byte 0X10, 0X13 # adcb %dl, (%rbx)")
#define ADC_DL_TO_PTR_RCX CMT_ASM(".byte 0X10, 0X11 # adcb %dl, (%rcx)")
#define ADC_DL_TO_PTR_RDX CMT_ASM(".byte 0X10, 0X12 # adcb %dl, (%rdx)")
#define ADC_DL_TO_PTR_RDI CMT_ASM(".byte 0X10, 0X17 # adcb %dl, (%rdi)")
#define ADC_DL_TO_PTR_RSI CMT_ASM(".byte 0X10, 0X16 # adcb %dl, (%rsi)")
#define ADC_DL_TO_PTR_RBP CMT_ASM(".byte 0X10, 0X55, 0X00 # adcb %dl, (%rbp)")
#define ADC_DL_TO_PTR_RSP CMT_ASM(".byte 0X10, 0X14, 0X24 # adcb %dl, (%rsp)")
#define ADC_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X10 # adcb %dl, (%r8)")
#define ADC_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X11 # adcb %dl, (%r9)")
#define ADC_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X12 # adcb %dl, (%r10)")
#define ADC_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X13 # adcb %dl, (%r11)")
#define ADC_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X14, 0X24 # adcb %dl, (%r12)")
#define ADC_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X55, 0X00 # adcb %dl, (%r13)")
#define ADC_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X16 # adcb %dl, (%r14)")
#define ADC_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X17 # adcb %dl, (%r15)")
#define ADC_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X10, 0X10 # adcb %dl, (%eax)")
#define ADC_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X10, 0X13 # adcb %dl, (%ebx)")
#define ADC_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X10, 0X11 # adcb %dl, (%ecx)")
#define ADC_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X10, 0X12 # adcb %dl, (%edx)")
#define ADC_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X10, 0X17 # adcb %dl, (%edi)")
#define ADC_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X10, 0X16 # adcb %dl, (%esi)")
#define ADC_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X10, 0X55, 0X00 # adcb %dl, (%ebp)")
#define ADC_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X10, 0X14, 0X24 # adcb %dl, (%esp)")

#define ADC_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X10, 0X38 # adcb %dil, (%rax)")
#define ADC_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X10, 0X3B # adcb %dil, (%rbx)")
#define ADC_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X10, 0X39 # adcb %dil, (%rcx)")
#define ADC_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X10, 0X3A # adcb %dil, (%rdx)")
#define ADC_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X10, 0X3F # adcb %dil, (%rdi)")
#define ADC_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X10, 0X3E # adcb %dil, (%rsi)")
#define ADC_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X10, 0X7D, 0X00 # adcb %dil, (%rbp)")
#define ADC_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X10, 0X3C, 0X24 # adcb %dil, (%rsp)")
#define ADC_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X38 # adcb %dil, (%r8)")
#define ADC_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X39 # adcb %dil, (%r9)")
#define ADC_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X3A # adcb %dil, (%r10)")
#define ADC_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X3B # adcb %dil, (%r11)")
#define ADC_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X3C, 0X24 # adcb %dil, (%r12)")
#define ADC_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X7D, 0X00 # adcb %dil, (%r13)")
#define ADC_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X3E # adcb %dil, (%r14)")
#define ADC_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X3F # adcb %dil, (%r15)")
#define ADC_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X38 # adcb %dil, (%eax)")
#define ADC_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X3B # adcb %dil, (%ebx)")
#define ADC_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X39 # adcb %dil, (%ecx)")
#define ADC_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X3A # adcb %dil, (%edx)")
#define ADC_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X3F # adcb %dil, (%edi)")
#define ADC_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X3E # adcb %dil, (%esi)")
#define ADC_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X7D, 0X00 # adcb %dil, (%ebp)")
#define ADC_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X3C, 0X24 # adcb %dil, (%esp)")

#define ADC_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X10, 0X30 # adcb %sil, (%rax)")
#define ADC_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X10, 0X33 # adcb %sil, (%rbx)")
#define ADC_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X10, 0X31 # adcb %sil, (%rcx)")
#define ADC_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X10, 0X32 # adcb %sil, (%rdx)")
#define ADC_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X10, 0X37 # adcb %sil, (%rdi)")
#define ADC_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X10, 0X36 # adcb %sil, (%rsi)")
#define ADC_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X10, 0X75, 0X00 # adcb %sil, (%rbp)")
#define ADC_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X10, 0X34, 0X24 # adcb %sil, (%rsp)")
#define ADC_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X30 # adcb %sil, (%r8)")
#define ADC_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X31 # adcb %sil, (%r9)")
#define ADC_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X32 # adcb %sil, (%r10)")
#define ADC_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X33 # adcb %sil, (%r11)")
#define ADC_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X34, 0X24 # adcb %sil, (%r12)")
#define ADC_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X75, 0X00 # adcb %sil, (%r13)")
#define ADC_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X36 # adcb %sil, (%r14)")
#define ADC_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X37 # adcb %sil, (%r15)")
#define ADC_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X30 # adcb %sil, (%eax)")
#define ADC_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X33 # adcb %sil, (%ebx)")
#define ADC_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X31 # adcb %sil, (%ecx)")
#define ADC_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X32 # adcb %sil, (%edx)")
#define ADC_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X37 # adcb %sil, (%edi)")
#define ADC_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X36 # adcb %sil, (%esi)")
#define ADC_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X75, 0X00 # adcb %sil, (%ebp)")
#define ADC_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X34, 0X24 # adcb %sil, (%esp)")

#define ADC_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X10, 0X28 # adcb %bpl, (%rax)")
#define ADC_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X10, 0X2B # adcb %bpl, (%rbx)")
#define ADC_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X10, 0X29 # adcb %bpl, (%rcx)")
#define ADC_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X10, 0X2A # adcb %bpl, (%rdx)")
#define ADC_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X10, 0X2F # adcb %bpl, (%rdi)")
#define ADC_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X10, 0X2E # adcb %bpl, (%rsi)")
#define ADC_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X10, 0X6D, 0X00 # adcb %bpl, (%rbp)")
#define ADC_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X10, 0X2C, 0X24 # adcb %bpl, (%rsp)")
#define ADC_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X28 # adcb %bpl, (%r8)")
#define ADC_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X29 # adcb %bpl, (%r9)")
#define ADC_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X2A # adcb %bpl, (%r10)")
#define ADC_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X2B # adcb %bpl, (%r11)")
#define ADC_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X2C, 0X24 # adcb %bpl, (%r12)")
#define ADC_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X6D, 0X00 # adcb %bpl, (%r13)")
#define ADC_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X2E # adcb %bpl, (%r14)")
#define ADC_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X2F # adcb %bpl, (%r15)")
#define ADC_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X28 # adcb %bpl, (%eax)")
#define ADC_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X2B # adcb %bpl, (%ebx)")
#define ADC_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X29 # adcb %bpl, (%ecx)")
#define ADC_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X2A # adcb %bpl, (%edx)")
#define ADC_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X2F # adcb %bpl, (%edi)")
#define ADC_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X2E # adcb %bpl, (%esi)")
#define ADC_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X6D, 0X00 # adcb %bpl, (%ebp)")
#define ADC_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X2C, 0X24 # adcb %bpl, (%esp)")

#define ADC_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X10, 0X20 # adcb %spl, (%rax)")
#define ADC_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X10, 0X23 # adcb %spl, (%rbx)")
#define ADC_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X10, 0X21 # adcb %spl, (%rcx)")
#define ADC_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X10, 0X22 # adcb %spl, (%rdx)")
#define ADC_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X10, 0X27 # adcb %spl, (%rdi)")
#define ADC_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X10, 0X26 # adcb %spl, (%rsi)")
#define ADC_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X10, 0X65, 0X00 # adcb %spl, (%rbp)")
#define ADC_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X10, 0X24, 0X24 # adcb %spl, (%rsp)")
#define ADC_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X10, 0X20 # adcb %spl, (%r8)")
#define ADC_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X10, 0X21 # adcb %spl, (%r9)")
#define ADC_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X10, 0X22 # adcb %spl, (%r10)")
#define ADC_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X10, 0X23 # adcb %spl, (%r11)")
#define ADC_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X10, 0X24, 0X24 # adcb %spl, (%r12)")
#define ADC_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X10, 0X65, 0X00 # adcb %spl, (%r13)")
#define ADC_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X10, 0X26 # adcb %spl, (%r14)")
#define ADC_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X10, 0X27 # adcb %spl, (%r15)")
#define ADC_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X20 # adcb %spl, (%eax)")
#define ADC_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X23 # adcb %spl, (%ebx)")
#define ADC_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X21 # adcb %spl, (%ecx)")
#define ADC_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X10, 0X22 # adcb %spl, (%edx)")
#define ADC_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X27 # adcb %spl, (%edi)")
#define ADC_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X10, 0X26 # adcb %spl, (%esi)")
#define ADC_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X65, 0X00 # adcb %spl, (%ebp)")
#define ADC_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X10, 0X24, 0X24 # adcb %spl, (%esp)")

#define ADC_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X00 # adcb %r8b, (%rax)")
#define ADC_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X03 # adcb %r8b, (%rbx)")
#define ADC_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X01 # adcb %r8b, (%rcx)")
#define ADC_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X02 # adcb %r8b, (%rdx)")
#define ADC_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X07 # adcb %r8b, (%rdi)")
#define ADC_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X06 # adcb %r8b, (%rsi)")
#define ADC_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X45, 0X00 # adcb %r8b, (%rbp)")
#define ADC_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X04, 0X24 # adcb %r8b, (%rsp)")
#define ADC_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X00 # adcb %r8b, (%r8)")
#define ADC_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X01 # adcb %r8b, (%r9)")
#define ADC_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X02 # adcb %r8b, (%r10)")
#define ADC_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X03 # adcb %r8b, (%r11)")
#define ADC_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X04, 0X24 # adcb %r8b, (%r12)")
#define ADC_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X45, 0X00 # adcb %r8b, (%r13)")
#define ADC_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X06 # adcb %r8b, (%r14)")
#define ADC_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X07 # adcb %r8b, (%r15)")
#define ADC_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X00 # adcb %r8b, (%eax)")
#define ADC_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X03 # adcb %r8b, (%ebx)")
#define ADC_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X01 # adcb %r8b, (%ecx)")
#define ADC_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X02 # adcb %r8b, (%edx)")
#define ADC_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X07 # adcb %r8b, (%edi)")
#define ADC_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X06 # adcb %r8b, (%esi)")
#define ADC_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X45, 0X00 # adcb %r8b, (%ebp)")
#define ADC_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X04, 0X24 # adcb %r8b, (%esp)")

#define ADC_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X08 # adcb %r9b, (%rax)")
#define ADC_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X0B # adcb %r9b, (%rbx)")
#define ADC_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X09 # adcb %r9b, (%rcx)")
#define ADC_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X0A # adcb %r9b, (%rdx)")
#define ADC_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X0F # adcb %r9b, (%rdi)")
#define ADC_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X0E # adcb %r9b, (%rsi)")
#define ADC_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X4D, 0X00 # adcb %r9b, (%rbp)")
#define ADC_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X0C, 0X24 # adcb %r9b, (%rsp)")
#define ADC_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X08 # adcb %r9b, (%r8)")
#define ADC_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X09 # adcb %r9b, (%r9)")
#define ADC_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X0A # adcb %r9b, (%r10)")
#define ADC_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X0B # adcb %r9b, (%r11)")
#define ADC_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X0C, 0X24 # adcb %r9b, (%r12)")
#define ADC_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X4D, 0X00 # adcb %r9b, (%r13)")
#define ADC_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X0E # adcb %r9b, (%r14)")
#define ADC_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X0F # adcb %r9b, (%r15)")
#define ADC_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X08 # adcb %r9b, (%eax)")
#define ADC_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X0B # adcb %r9b, (%ebx)")
#define ADC_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X09 # adcb %r9b, (%ecx)")
#define ADC_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X0A # adcb %r9b, (%edx)")
#define ADC_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X0F # adcb %r9b, (%edi)")
#define ADC_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X0E # adcb %r9b, (%esi)")
#define ADC_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X4D, 0X00 # adcb %r9b, (%ebp)")
#define ADC_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X0C, 0X24 # adcb %r9b, (%esp)")

#define ADC_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X10 # adcb %r10b, (%rax)")
#define ADC_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X13 # adcb %r10b, (%rbx)")
#define ADC_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X11 # adcb %r10b, (%rcx)")
#define ADC_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X12 # adcb %r10b, (%rdx)")
#define ADC_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X17 # adcb %r10b, (%rdi)")
#define ADC_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X16 # adcb %r10b, (%rsi)")
#define ADC_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X55, 0X00 # adcb %r10b, (%rbp)")
#define ADC_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X14, 0X24 # adcb %r10b, (%rsp)")
#define ADC_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X10 # adcb %r10b, (%r8)")
#define ADC_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X11 # adcb %r10b, (%r9)")
#define ADC_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X12 # adcb %r10b, (%r10)")
#define ADC_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X13 # adcb %r10b, (%r11)")
#define ADC_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X14, 0X24 # adcb %r10b, (%r12)")
#define ADC_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X55, 0X00 # adcb %r10b, (%r13)")
#define ADC_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X16 # adcb %r10b, (%r14)")
#define ADC_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X17 # adcb %r10b, (%r15)")
#define ADC_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X10 # adcb %r10b, (%eax)")
#define ADC_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X13 # adcb %r10b, (%ebx)")
#define ADC_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X11 # adcb %r10b, (%ecx)")
#define ADC_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X12 # adcb %r10b, (%edx)")
#define ADC_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X17 # adcb %r10b, (%edi)")
#define ADC_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X16 # adcb %r10b, (%esi)")
#define ADC_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X55, 0X00 # adcb %r10b, (%ebp)")
#define ADC_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X14, 0X24 # adcb %r10b, (%esp)")

#define ADC_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X18 # adcb %r11b, (%rax)")
#define ADC_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X1B # adcb %r11b, (%rbx)")
#define ADC_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X19 # adcb %r11b, (%rcx)")
#define ADC_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X1A # adcb %r11b, (%rdx)")
#define ADC_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X1F # adcb %r11b, (%rdi)")
#define ADC_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X1E # adcb %r11b, (%rsi)")
#define ADC_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X5D, 0X00 # adcb %r11b, (%rbp)")
#define ADC_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X1C, 0X24 # adcb %r11b, (%rsp)")
#define ADC_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X18 # adcb %r11b, (%r8)")
#define ADC_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X19 # adcb %r11b, (%r9)")
#define ADC_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X1A # adcb %r11b, (%r10)")
#define ADC_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X1B # adcb %r11b, (%r11)")
#define ADC_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X1C, 0X24 # adcb %r11b, (%r12)")
#define ADC_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X5D, 0X00 # adcb %r11b, (%r13)")
#define ADC_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X1E # adcb %r11b, (%r14)")
#define ADC_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X1F # adcb %r11b, (%r15)")
#define ADC_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X18 # adcb %r11b, (%eax)")
#define ADC_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X1B # adcb %r11b, (%ebx)")
#define ADC_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X19 # adcb %r11b, (%ecx)")
#define ADC_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X1A # adcb %r11b, (%edx)")
#define ADC_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X1F # adcb %r11b, (%edi)")
#define ADC_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X1E # adcb %r11b, (%esi)")
#define ADC_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X5D, 0X00 # adcb %r11b, (%ebp)")
#define ADC_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X1C, 0X24 # adcb %r11b, (%esp)")

#define ADC_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X20 # adcb %r12b, (%rax)")
#define ADC_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X23 # adcb %r12b, (%rbx)")
#define ADC_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X21 # adcb %r12b, (%rcx)")
#define ADC_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X22 # adcb %r12b, (%rdx)")
#define ADC_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X27 # adcb %r12b, (%rdi)")
#define ADC_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X26 # adcb %r12b, (%rsi)")
#define ADC_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X65, 0X00 # adcb %r12b, (%rbp)")
#define ADC_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X24, 0X24 # adcb %r12b, (%rsp)")
#define ADC_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X20 # adcb %r12b, (%r8)")
#define ADC_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X21 # adcb %r12b, (%r9)")
#define ADC_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X22 # adcb %r12b, (%r10)")
#define ADC_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X23 # adcb %r12b, (%r11)")
#define ADC_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X24, 0X24 # adcb %r12b, (%r12)")
#define ADC_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X65, 0X00 # adcb %r12b, (%r13)")
#define ADC_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X26 # adcb %r12b, (%r14)")
#define ADC_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X27 # adcb %r12b, (%r15)")
#define ADC_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X20 # adcb %r12b, (%eax)")
#define ADC_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X23 # adcb %r12b, (%ebx)")
#define ADC_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X21 # adcb %r12b, (%ecx)")
#define ADC_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X22 # adcb %r12b, (%edx)")
#define ADC_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X27 # adcb %r12b, (%edi)")
#define ADC_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X26 # adcb %r12b, (%esi)")
#define ADC_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X65, 0X00 # adcb %r12b, (%ebp)")
#define ADC_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X24, 0X24 # adcb %r12b, (%esp)")

#define ADC_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X28 # adcb %r13b, (%rax)")
#define ADC_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X2B # adcb %r13b, (%rbx)")
#define ADC_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X29 # adcb %r13b, (%rcx)")
#define ADC_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X2A # adcb %r13b, (%rdx)")
#define ADC_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X2F # adcb %r13b, (%rdi)")
#define ADC_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X2E # adcb %r13b, (%rsi)")
#define ADC_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X6D, 0X00 # adcb %r13b, (%rbp)")
#define ADC_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X2C, 0X24 # adcb %r13b, (%rsp)")
#define ADC_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X28 # adcb %r13b, (%r8)")
#define ADC_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X29 # adcb %r13b, (%r9)")
#define ADC_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X2A # adcb %r13b, (%r10)")
#define ADC_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X2B # adcb %r13b, (%r11)")
#define ADC_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X2C, 0X24 # adcb %r13b, (%r12)")
#define ADC_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X6D, 0X00 # adcb %r13b, (%r13)")
#define ADC_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X2E # adcb %r13b, (%r14)")
#define ADC_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X2F # adcb %r13b, (%r15)")
#define ADC_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X28 # adcb %r13b, (%eax)")
#define ADC_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X2B # adcb %r13b, (%ebx)")
#define ADC_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X29 # adcb %r13b, (%ecx)")
#define ADC_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X2A # adcb %r13b, (%edx)")
#define ADC_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X2F # adcb %r13b, (%edi)")
#define ADC_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X2E # adcb %r13b, (%esi)")
#define ADC_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X6D, 0X00 # adcb %r13b, (%ebp)")
#define ADC_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X2C, 0X24 # adcb %r13b, (%esp)")

#define ADC_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X30 # adcb %r14b, (%rax)")
#define ADC_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X33 # adcb %r14b, (%rbx)")
#define ADC_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X31 # adcb %r14b, (%rcx)")
#define ADC_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X32 # adcb %r14b, (%rdx)")
#define ADC_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X37 # adcb %r14b, (%rdi)")
#define ADC_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X36 # adcb %r14b, (%rsi)")
#define ADC_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X75, 0X00 # adcb %r14b, (%rbp)")
#define ADC_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X34, 0X24 # adcb %r14b, (%rsp)")
#define ADC_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X30 # adcb %r14b, (%r8)")
#define ADC_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X31 # adcb %r14b, (%r9)")
#define ADC_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X32 # adcb %r14b, (%r10)")
#define ADC_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X33 # adcb %r14b, (%r11)")
#define ADC_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X34, 0X24 # adcb %r14b, (%r12)")
#define ADC_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X75, 0X00 # adcb %r14b, (%r13)")
#define ADC_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X36 # adcb %r14b, (%r14)")
#define ADC_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X37 # adcb %r14b, (%r15)")
#define ADC_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X30 # adcb %r14b, (%eax)")
#define ADC_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X33 # adcb %r14b, (%ebx)")
#define ADC_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X31 # adcb %r14b, (%ecx)")
#define ADC_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X32 # adcb %r14b, (%edx)")
#define ADC_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X37 # adcb %r14b, (%edi)")
#define ADC_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X36 # adcb %r14b, (%esi)")
#define ADC_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X75, 0X00 # adcb %r14b, (%ebp)")
#define ADC_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X34, 0X24 # adcb %r14b, (%esp)")

#define ADC_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X10, 0X38 # adcb %r15b, (%rax)")
#define ADC_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X10, 0X3B # adcb %r15b, (%rbx)")
#define ADC_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X10, 0X39 # adcb %r15b, (%rcx)")
#define ADC_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X10, 0X3A # adcb %r15b, (%rdx)")
#define ADC_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X10, 0X3F # adcb %r15b, (%rdi)")
#define ADC_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X10, 0X3E # adcb %r15b, (%rsi)")
#define ADC_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X10, 0X7D, 0X00 # adcb %r15b, (%rbp)")
#define ADC_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X10, 0X3C, 0X24 # adcb %r15b, (%rsp)")
#define ADC_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X10, 0X38 # adcb %r15b, (%r8)")
#define ADC_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X10, 0X39 # adcb %r15b, (%r9)")
#define ADC_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X10, 0X3A # adcb %r15b, (%r10)")
#define ADC_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X10, 0X3B # adcb %r15b, (%r11)")
#define ADC_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X10, 0X3C, 0X24 # adcb %r15b, (%r12)")
#define ADC_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X10, 0X7D, 0X00 # adcb %r15b, (%r13)")
#define ADC_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X10, 0X3E # adcb %r15b, (%r14)")
#define ADC_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X10, 0X3F # adcb %r15b, (%r15)")
#define ADC_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X38 # adcb %r15b, (%eax)")
#define ADC_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X3B # adcb %r15b, (%ebx)")
#define ADC_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X39 # adcb %r15b, (%ecx)")
#define ADC_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X10, 0X3A # adcb %r15b, (%edx)")
#define ADC_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X3F # adcb %r15b, (%edi)")
#define ADC_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X10, 0X3E # adcb %r15b, (%esi)")
#define ADC_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X7D, 0X00 # adcb %r15b, (%ebp)")
#define ADC_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X10, 0X3C, 0X24 # adcb %r15b, (%esp)")

#define ADC_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X80 # adcb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X83 # adcb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X81 # adcb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X82 # adcb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X87 # adcb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X86 # adcb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X85 # adcb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X80 # adcb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X81 # adcb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X82 # adcb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X83 # adcb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X85 # adcb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X86 # adcb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X87 # adcb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X80 # adcb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X83 # adcb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X81 # adcb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X82 # adcb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X87 # adcb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X86 # adcb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X85 # adcb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X98 # adcb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9B # adcb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X99 # adcb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9A # adcb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9F # adcb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9E # adcb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9D # adcb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X98 # adcb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X99 # adcb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9A # adcb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9B # adcb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9D # adcb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9E # adcb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X9F # adcb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X98 # adcb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9B # adcb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X99 # adcb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9A # adcb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9F # adcb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9E # adcb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9D # adcb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X88 # adcb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8B # adcb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X89 # adcb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8A # adcb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8F # adcb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8E # adcb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8D # adcb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X88 # adcb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X89 # adcb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8A # adcb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8B # adcb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8D # adcb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8E # adcb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X8F # adcb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X88 # adcb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8B # adcb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X89 # adcb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8A # adcb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8F # adcb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8E # adcb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8D # adcb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X90 # adcb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X93 # adcb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X91 # adcb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X12, 0X92 # adcb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X97 # adcb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X12, 0X96 # adcb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X95 # adcb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X90 # adcb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X91 # adcb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X92 # adcb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X93 # adcb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X95 # adcb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X96 # adcb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0X97 # adcb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X90 # adcb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X93 # adcb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X91 # adcb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X92 # adcb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X97 # adcb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X96 # adcb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X95 # adcb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB8 # adcb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBB # adcb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB9 # adcb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBA # adcb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBF # adcb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBE # adcb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBD # adcb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB8 # adcb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB9 # adcb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBA # adcb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBB # adcb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBD # adcb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBE # adcb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XBF # adcb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB8 # adcb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBB # adcb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB9 # adcb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBA # adcb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBF # adcb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBE # adcb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBD # adcb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB0 # adcb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB3 # adcb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB1 # adcb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB2 # adcb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB7 # adcb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB6 # adcb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB5 # adcb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB0 # adcb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB1 # adcb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB2 # adcb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB3 # adcb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB5 # adcb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB6 # adcb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XB7 # adcb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB0 # adcb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB3 # adcb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB1 # adcb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB2 # adcb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB7 # adcb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB6 # adcb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB5 # adcb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA8 # adcb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAB # adcb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA9 # adcb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAA # adcb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAF # adcb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAE # adcb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAD # adcb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA8 # adcb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA9 # adcb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAA # adcb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAB # adcb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAD # adcb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAE # adcb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XAF # adcb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA8 # adcb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAB # adcb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA9 # adcb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAA # adcb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAF # adcb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAE # adcb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAD # adcb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA0 # adcb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA3 # adcb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA1 # adcb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA2 # adcb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA7 # adcb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA6 # adcb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA5 # adcb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA0 # adcb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA1 # adcb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA2 # adcb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA3 # adcb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA5 # adcb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA6 # adcb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X12, 0XA7 # adcb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA0 # adcb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA3 # adcb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA1 # adcb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA2 # adcb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA7 # adcb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA6 # adcb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA5 # adcb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X80 # adcb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X83 # adcb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X81 # adcb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X82 # adcb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X87 # adcb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X86 # adcb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X85 # adcb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X80 # adcb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X81 # adcb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X82 # adcb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X83 # adcb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X85 # adcb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X86 # adcb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X87 # adcb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X80 # adcb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X83 # adcb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X81 # adcb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X82 # adcb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X87 # adcb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X86 # adcb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X85 # adcb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X84, 0X24 # adcb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X88 # adcb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8B # adcb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X89 # adcb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8A # adcb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8F # adcb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8E # adcb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8D # adcb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X88 # adcb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X89 # adcb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8A # adcb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8B # adcb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8D # adcb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8E # adcb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X8F # adcb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X88 # adcb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8B # adcb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X89 # adcb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8A # adcb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8F # adcb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8E # adcb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8D # adcb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X8C, 0X24 # adcb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X90 # adcb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X93 # adcb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X91 # adcb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X92 # adcb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X97 # adcb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X96 # adcb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X95 # adcb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X90 # adcb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X91 # adcb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X92 # adcb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X93 # adcb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X95 # adcb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X96 # adcb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X97 # adcb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X90 # adcb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X93 # adcb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X91 # adcb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X92 # adcb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X97 # adcb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X96 # adcb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X95 # adcb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X94, 0X24 # adcb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X98 # adcb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9B # adcb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X99 # adcb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9A # adcb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9F # adcb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9E # adcb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9D # adcb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X98 # adcb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X99 # adcb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9A # adcb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9B # adcb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9D # adcb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9E # adcb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0X9F # adcb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X98 # adcb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9B # adcb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X99 # adcb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9A # adcb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9F # adcb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9E # adcb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9D # adcb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0X9C, 0X24 # adcb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA0 # adcb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA3 # adcb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA1 # adcb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA2 # adcb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA7 # adcb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA6 # adcb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA5 # adcb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA0 # adcb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA1 # adcb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA2 # adcb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA3 # adcb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA5 # adcb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA6 # adcb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA7 # adcb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA0 # adcb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA3 # adcb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA1 # adcb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA2 # adcb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA7 # adcb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA6 # adcb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA5 # adcb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA4, 0X24 # adcb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA8 # adcb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAB # adcb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XA9 # adcb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAA # adcb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAF # adcb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAE # adcb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAD # adcb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA8 # adcb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XA9 # adcb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAA # adcb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAB # adcb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAD # adcb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAE # adcb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XAF # adcb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA8 # adcb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAB # adcb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XA9 # adcb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAA # adcb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAF # adcb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAE # adcb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAD # adcb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XAC, 0X24 # adcb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB0 # adcb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB3 # adcb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB1 # adcb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB2 # adcb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB7 # adcb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB6 # adcb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB5 # adcb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB0 # adcb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB1 # adcb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB2 # adcb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB3 # adcb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB5 # adcb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB6 # adcb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB7 # adcb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB0 # adcb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB3 # adcb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB1 # adcb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB2 # adcb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB7 # adcb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB6 # adcb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB5 # adcb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB4, 0X24 # adcb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB8 # adcb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBB # adcb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XB9 # adcb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBA # adcb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBF # adcb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBE # adcb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBD # adcb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB8 # adcb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XB9 # adcb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBA # adcb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBB # adcb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBD # adcb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBE # adcb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X12, 0XBF # adcb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB8 # adcb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBB # adcb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XB9 # adcb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBA # adcb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBF # adcb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBE # adcb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBD # adcb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X12, 0XBC, 0X24 # adcb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X80 # adcb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X83 # adcb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X81 # adcb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X82 # adcb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X87 # adcb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X86 # adcb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X85 # adcb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X84, 0X24 # adcb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X80 # adcb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X81 # adcb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X82 # adcb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X83 # adcb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X84, 0X24 # adcb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X85 # adcb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X86 # adcb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X87 # adcb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X80 # adcb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X83 # adcb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X81 # adcb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X82 # adcb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X87 # adcb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X86 # adcb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X85 # adcb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X84, 0X24 # adcb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X98 # adcb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9B # adcb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X99 # adcb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9A # adcb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9F # adcb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9E # adcb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9D # adcb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X9C, 0X24 # adcb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X98 # adcb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X99 # adcb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9A # adcb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9B # adcb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9C, 0X24 # adcb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9D # adcb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9E # adcb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X9F # adcb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X98 # adcb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9B # adcb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X99 # adcb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9A # adcb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9F # adcb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9E # adcb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9D # adcb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X9C, 0X24 # adcb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X88 # adcb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8B # adcb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X89 # adcb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8A # adcb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8F # adcb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8E # adcb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8D # adcb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X8C, 0X24 # adcb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X88 # adcb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X89 # adcb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8A # adcb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8B # adcb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8C, 0X24 # adcb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8D # adcb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8E # adcb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X8F # adcb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X88 # adcb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8B # adcb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X89 # adcb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8A # adcb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8F # adcb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8E # adcb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8D # adcb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X8C, 0X24 # adcb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X90 # adcb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X93 # adcb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X91 # adcb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X10, 0X92 # adcb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X97 # adcb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X10, 0X96 # adcb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X95 # adcb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X10, 0X94, 0X24 # adcb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X90 # adcb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X91 # adcb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X92 # adcb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X93 # adcb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X94, 0X24 # adcb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X95 # adcb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X96 # adcb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0X97 # adcb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X90 # adcb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X93 # adcb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X91 # adcb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X92 # adcb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X97 # adcb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X96 # adcb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X95 # adcb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X10, 0X94, 0X24 # adcb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB8 # adcb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBB # adcb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB9 # adcb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBA # adcb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBF # adcb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBE # adcb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBD # adcb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XBC, 0X24 # adcb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB8 # adcb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB9 # adcb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBA # adcb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBB # adcb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBC, 0X24 # adcb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBD # adcb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBE # adcb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XBF # adcb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB8 # adcb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBB # adcb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB9 # adcb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBA # adcb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBF # adcb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBE # adcb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBD # adcb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XBC, 0X24 # adcb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB0 # adcb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB3 # adcb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB1 # adcb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB2 # adcb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB7 # adcb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB6 # adcb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB5 # adcb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XB4, 0X24 # adcb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB0 # adcb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB1 # adcb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB2 # adcb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB3 # adcb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB4, 0X24 # adcb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB5 # adcb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB6 # adcb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XB7 # adcb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB0 # adcb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB3 # adcb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB1 # adcb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB2 # adcb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB7 # adcb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB6 # adcb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB5 # adcb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XB4, 0X24 # adcb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA8 # adcb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAB # adcb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA9 # adcb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAA # adcb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAF # adcb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAE # adcb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAD # adcb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XAC, 0X24 # adcb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA8 # adcb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA9 # adcb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAA # adcb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAB # adcb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAC, 0X24 # adcb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAD # adcb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAE # adcb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XAF # adcb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA8 # adcb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAB # adcb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA9 # adcb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAA # adcb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAF # adcb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAE # adcb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAD # adcb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XAC, 0X24 # adcb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA0 # adcb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA3 # adcb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA1 # adcb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA2 # adcb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA7 # adcb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA6 # adcb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA5 # adcb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X10, 0XA4, 0X24 # adcb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA0 # adcb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA1 # adcb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA2 # adcb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA3 # adcb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA4, 0X24 # adcb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA5 # adcb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA6 # adcb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X10, 0XA7 # adcb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA0 # adcb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA3 # adcb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA1 # adcb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA2 # adcb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA7 # adcb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA6 # adcb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA5 # adcb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X10, 0XA4, 0X24 # adcb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X80 # adcb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X83 # adcb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X81 # adcb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X82 # adcb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X87 # adcb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X86 # adcb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X85 # adcb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X84, 0X24 # adcb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X80 # adcb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X81 # adcb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X82 # adcb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X83 # adcb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X84, 0X24 # adcb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X85 # adcb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X86 # adcb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X87 # adcb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X80 # adcb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X83 # adcb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X81 # adcb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X82 # adcb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X87 # adcb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X86 # adcb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X85 # adcb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X84, 0X24 # adcb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X88 # adcb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8B # adcb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X89 # adcb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8A # adcb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8F # adcb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8E # adcb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8D # adcb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X8C, 0X24 # adcb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X88 # adcb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X89 # adcb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8A # adcb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8B # adcb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8C, 0X24 # adcb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8D # adcb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8E # adcb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X8F # adcb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X88 # adcb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8B # adcb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X89 # adcb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8A # adcb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8F # adcb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8E # adcb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8D # adcb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X8C, 0X24 # adcb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X90 # adcb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X93 # adcb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X91 # adcb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X92 # adcb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X97 # adcb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X96 # adcb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X95 # adcb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X94, 0X24 # adcb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X90 # adcb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X91 # adcb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X92 # adcb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X93 # adcb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X94, 0X24 # adcb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X95 # adcb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X96 # adcb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X97 # adcb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X90 # adcb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X93 # adcb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X91 # adcb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X92 # adcb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X97 # adcb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X96 # adcb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X95 # adcb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X94, 0X24 # adcb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X98 # adcb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9B # adcb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X99 # adcb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9A # adcb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9F # adcb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9E # adcb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9D # adcb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0X9C, 0X24 # adcb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X98 # adcb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X99 # adcb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9A # adcb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9B # adcb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9C, 0X24 # adcb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9D # adcb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9E # adcb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0X9F # adcb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X98 # adcb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9B # adcb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X99 # adcb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9A # adcb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9F # adcb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9E # adcb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9D # adcb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0X9C, 0X24 # adcb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA0 # adcb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA3 # adcb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA1 # adcb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA2 # adcb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA7 # adcb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA6 # adcb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA5 # adcb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA4, 0X24 # adcb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA0 # adcb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA1 # adcb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA2 # adcb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA3 # adcb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA4, 0X24 # adcb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA5 # adcb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA6 # adcb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA7 # adcb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA0 # adcb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA3 # adcb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA1 # adcb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA2 # adcb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA7 # adcb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA6 # adcb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA5 # adcb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA4, 0X24 # adcb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA8 # adcb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAB # adcb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XA9 # adcb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAA # adcb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAF # adcb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAE # adcb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAD # adcb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XAC, 0X24 # adcb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA8 # adcb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XA9 # adcb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAA # adcb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAB # adcb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAC, 0X24 # adcb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAD # adcb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAE # adcb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XAF # adcb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA8 # adcb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAB # adcb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XA9 # adcb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAA # adcb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAF # adcb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAE # adcb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAD # adcb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XAC, 0X24 # adcb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB0 # adcb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB3 # adcb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB1 # adcb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB2 # adcb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB7 # adcb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB6 # adcb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB5 # adcb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB4, 0X24 # adcb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB0 # adcb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB1 # adcb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB2 # adcb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB3 # adcb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB4, 0X24 # adcb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB5 # adcb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB6 # adcb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB7 # adcb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB0 # adcb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB3 # adcb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB1 # adcb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB2 # adcb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB7 # adcb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB6 # adcb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB5 # adcb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB4, 0X24 # adcb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB8 # adcb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBB # adcb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XB9 # adcb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBA # adcb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBF # adcb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBE # adcb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBD # adcb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X10, 0XBC, 0X24 # adcb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB8 # adcb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XB9 # adcb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBA # adcb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBB # adcb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBC, 0X24 # adcb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBD # adcb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBE # adcb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X10, 0XBF # adcb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB8 # adcb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBB # adcb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XB9 # adcb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBA # adcb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBF # adcb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBE # adcb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBD # adcb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X10, 0XBC, 0X24 # adcb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define ADC_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X06 # adcw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X1E # adcw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X0E # adcw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X16 # adcw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X3E # adcw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X36 # adcw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X2E # adcw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X26 # adcw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X06 # adcw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X1E # adcw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X0E # adcw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X16 # adcw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X3E # adcw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X36 # adcw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X2E # adcw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X26 # adcw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AX_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X07 # adcw (%bx), %ax")
#define ADC_AX_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X46, 0X00 # adcw (%bp), %ax")
#define ADC_AX_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X04 # adcw (%si), %ax")
#define ADC_AX_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X05 # adcw (%di), %ax")

#define ADC_BX_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X1F # adcw (%bx), %bx")
#define ADC_BX_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X5E, 0X00 # adcw (%bp), %bx")
#define ADC_BX_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X1C # adcw (%si), %bx")
#define ADC_BX_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X1D # adcw (%di), %bx")

#define ADC_CX_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X0F # adcw (%bx), %cx")
#define ADC_CX_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X4E, 0X00 # adcw (%bp), %cx")
#define ADC_CX_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X0C # adcw (%si), %cx")
#define ADC_CX_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X0D # adcw (%di), %cx")

#define ADC_DX_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X17 # adcw (%bx), %dx")
#define ADC_DX_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X56, 0X00 # adcw (%bp), %dx")
#define ADC_DX_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X14 # adcw (%si), %dx")
#define ADC_DX_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X15 # adcw (%di), %dx")

#define ADC_DI_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X3F # adcw (%bx), %di")
#define ADC_DI_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X7E, 0X00 # adcw (%bp), %di")
#define ADC_DI_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X3C # adcw (%si), %di")
#define ADC_DI_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X3D # adcw (%di), %di")

#define ADC_SI_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X37 # adcw (%bx), %si")
#define ADC_SI_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X76, 0X00 # adcw (%bp), %si")
#define ADC_SI_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X34 # adcw (%si), %si")
#define ADC_SI_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X35 # adcw (%di), %si")

#define ADC_BP_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X2F # adcw (%bx), %bp")
#define ADC_BP_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X6E, 0X00 # adcw (%bp), %bp")
#define ADC_BP_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X2C # adcw (%si), %bp")
#define ADC_BP_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X2D # adcw (%di), %bp")

#define ADC_SP_FROM_PTR_BX CMT_ASM(".byte 0X13, 0X27 # adcw (%bx), %sp")
#define ADC_SP_FROM_PTR_BP CMT_ASM(".byte 0X13, 0X66, 0X00 # adcw (%bp), %sp")
#define ADC_SP_FROM_PTR_SI CMT_ASM(".byte 0X13, 0X24 # adcw (%si), %sp")
#define ADC_SP_FROM_PTR_DI CMT_ASM(".byte 0X13, 0X25 # adcw (%di), %sp")

#define ADC_AX_TO_PTR_BX CMT_ASM(".byte 0X11, 0X07 # adcw %ax, (%bx)")
#define ADC_AX_TO_PTR_BP CMT_ASM(".byte 0X11, 0X46, 0X00 # adcw %ax, (%bp)")
#define ADC_AX_TO_PTR_SI CMT_ASM(".byte 0X11, 0X04 # adcw %ax, (%si)")
#define ADC_AX_TO_PTR_DI CMT_ASM(".byte 0X11, 0X05 # adcw %ax, (%di)")

#define ADC_BX_TO_PTR_BX CMT_ASM(".byte 0X11, 0X1F # adcw %bx, (%bx)")
#define ADC_BX_TO_PTR_BP CMT_ASM(".byte 0X11, 0X5E, 0X00 # adcw %bx, (%bp)")
#define ADC_BX_TO_PTR_SI CMT_ASM(".byte 0X11, 0X1C # adcw %bx, (%si)")
#define ADC_BX_TO_PTR_DI CMT_ASM(".byte 0X11, 0X1D # adcw %bx, (%di)")

#define ADC_CX_TO_PTR_BX CMT_ASM(".byte 0X11, 0X0F # adcw %cx, (%bx)")
#define ADC_CX_TO_PTR_BP CMT_ASM(".byte 0X11, 0X4E, 0X00 # adcw %cx, (%bp)")
#define ADC_CX_TO_PTR_SI CMT_ASM(".byte 0X11, 0X0C # adcw %cx, (%si)")
#define ADC_CX_TO_PTR_DI CMT_ASM(".byte 0X11, 0X0D # adcw %cx, (%di)")

#define ADC_DX_TO_PTR_BX CMT_ASM(".byte 0X11, 0X17 # adcw %dx, (%bx)")
#define ADC_DX_TO_PTR_BP CMT_ASM(".byte 0X11, 0X56, 0X00 # adcw %dx, (%bp)")
#define ADC_DX_TO_PTR_SI CMT_ASM(".byte 0X11, 0X14 # adcw %dx, (%si)")
#define ADC_DX_TO_PTR_DI CMT_ASM(".byte 0X11, 0X15 # adcw %dx, (%di)")

#define ADC_DI_TO_PTR_BX CMT_ASM(".byte 0X11, 0X3F # adcw %di, (%bx)")
#define ADC_DI_TO_PTR_BP CMT_ASM(".byte 0X11, 0X7E, 0X00 # adcw %di, (%bp)")
#define ADC_DI_TO_PTR_SI CMT_ASM(".byte 0X11, 0X3C # adcw %di, (%si)")
#define ADC_DI_TO_PTR_DI CMT_ASM(".byte 0X11, 0X3D # adcw %di, (%di)")

#define ADC_SI_TO_PTR_BX CMT_ASM(".byte 0X11, 0X37 # adcw %si, (%bx)")
#define ADC_SI_TO_PTR_BP CMT_ASM(".byte 0X11, 0X76, 0X00 # adcw %si, (%bp)")
#define ADC_SI_TO_PTR_SI CMT_ASM(".byte 0X11, 0X34 # adcw %si, (%si)")
#define ADC_SI_TO_PTR_DI CMT_ASM(".byte 0X11, 0X35 # adcw %si, (%di)")

#define ADC_BP_TO_PTR_BX CMT_ASM(".byte 0X11, 0X2F # adcw %bp, (%bx)")
#define ADC_BP_TO_PTR_BP CMT_ASM(".byte 0X11, 0X6E, 0X00 # adcw %bp, (%bp)")
#define ADC_BP_TO_PTR_SI CMT_ASM(".byte 0X11, 0X2C # adcw %bp, (%si)")
#define ADC_BP_TO_PTR_DI CMT_ASM(".byte 0X11, 0X2D # adcw %bp, (%di)")

#define ADC_SP_TO_PTR_BX CMT_ASM(".byte 0X11, 0X27 # adcw %sp, (%bx)")
#define ADC_SP_TO_PTR_BP CMT_ASM(".byte 0X11, 0X66, 0X00 # adcw %sp, (%bp)")
#define ADC_SP_TO_PTR_SI CMT_ASM(".byte 0X11, 0X24 # adcw %sp, (%si)")
#define ADC_SP_TO_PTR_DI CMT_ASM(".byte 0X11, 0X25 # adcw %sp, (%di)")

#define ADC_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X87 # adcw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X86 # adcw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X84 # adcw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X85 # adcw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9F # adcw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9E # adcw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9C # adcw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9D # adcw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8F # adcw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8E # adcw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8C # adcw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8D # adcw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X97 # adcw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X96 # adcw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X94 # adcw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X95 # adcw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBF # adcw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBE # adcw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBC # adcw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBD # adcw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB7 # adcw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB6 # adcw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB4 # adcw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB5 # adcw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAF # adcw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAE # adcw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAC # adcw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAD # adcw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA7 # adcw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA6 # adcw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA4 # adcw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA5 # adcw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X87 # adcw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X86 # adcw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X84 # adcw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X85 # adcw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9F # adcw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9E # adcw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9C # adcw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9D # adcw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8F # adcw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8E # adcw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8C # adcw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8D # adcw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X97 # adcw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X96 # adcw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X94 # adcw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X95 # adcw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBF # adcw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBE # adcw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBC # adcw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBD # adcw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB7 # adcw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB6 # adcw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB4 # adcw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB5 # adcw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAF # adcw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAE # adcw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAC # adcw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAD # adcw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA4 # adcw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X05 # adcw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X1D # adcw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X0D # adcw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X15 # adcw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X3D # adcw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X35 # adcw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X2D # adcw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X25 # adcw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X05 # adcw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X1D # adcw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X0D # adcw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X15 # adcw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X3D # adcw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X35 # adcw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X2D # adcw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X25 # adcw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X00 # adcw (%eax), %ax")
#define ADC_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X03 # adcw (%ebx), %ax")
#define ADC_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X01 # adcw (%ecx), %ax")
#define ADC_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X02 # adcw (%edx), %ax")
#define ADC_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X07 # adcw (%edi), %ax")
#define ADC_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X06 # adcw (%esi), %ax")
#define ADC_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X45, 0X00 # adcw (%ebp), %ax")
#define ADC_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X04, 0X24 # adcw (%esp), %ax")
#define ADC_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X07 # adcw (%bx), %ax")
#define ADC_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X46, 0X00 # adcw (%bp), %ax")
#define ADC_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X04 # adcw (%si), %ax")
#define ADC_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X05 # adcw (%di), %ax")

#define ADC_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X18 # adcw (%eax), %bx")
#define ADC_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X1B # adcw (%ebx), %bx")
#define ADC_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X19 # adcw (%ecx), %bx")
#define ADC_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X1A # adcw (%edx), %bx")
#define ADC_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X1F # adcw (%edi), %bx")
#define ADC_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X1E # adcw (%esi), %bx")
#define ADC_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X5D, 0X00 # adcw (%ebp), %bx")
#define ADC_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X1C, 0X24 # adcw (%esp), %bx")
#define ADC_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1F # adcw (%bx), %bx")
#define ADC_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X5E, 0X00 # adcw (%bp), %bx")
#define ADC_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1C # adcw (%si), %bx")
#define ADC_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1D # adcw (%di), %bx")

#define ADC_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X08 # adcw (%eax), %cx")
#define ADC_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X0B # adcw (%ebx), %cx")
#define ADC_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X09 # adcw (%ecx), %cx")
#define ADC_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X0A # adcw (%edx), %cx")
#define ADC_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X0F # adcw (%edi), %cx")
#define ADC_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X0E # adcw (%esi), %cx")
#define ADC_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X4D, 0X00 # adcw (%ebp), %cx")
#define ADC_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X0C, 0X24 # adcw (%esp), %cx")
#define ADC_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0F # adcw (%bx), %cx")
#define ADC_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X4E, 0X00 # adcw (%bp), %cx")
#define ADC_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0C # adcw (%si), %cx")
#define ADC_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0D # adcw (%di), %cx")

#define ADC_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X10 # adcw (%eax), %dx")
#define ADC_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X13 # adcw (%ebx), %dx")
#define ADC_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X11 # adcw (%ecx), %dx")
#define ADC_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X12 # adcw (%edx), %dx")
#define ADC_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X17 # adcw (%edi), %dx")
#define ADC_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X16 # adcw (%esi), %dx")
#define ADC_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X55, 0X00 # adcw (%ebp), %dx")
#define ADC_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X14, 0X24 # adcw (%esp), %dx")
#define ADC_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X17 # adcw (%bx), %dx")
#define ADC_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X56, 0X00 # adcw (%bp), %dx")
#define ADC_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X14 # adcw (%si), %dx")
#define ADC_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X15 # adcw (%di), %dx")

#define ADC_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X38 # adcw (%eax), %di")
#define ADC_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X3B # adcw (%ebx), %di")
#define ADC_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X39 # adcw (%ecx), %di")
#define ADC_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X3A # adcw (%edx), %di")
#define ADC_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X3F # adcw (%edi), %di")
#define ADC_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X3E # adcw (%esi), %di")
#define ADC_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X7D, 0X00 # adcw (%ebp), %di")
#define ADC_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X3C, 0X24 # adcw (%esp), %di")
#define ADC_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3F # adcw (%bx), %di")
#define ADC_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X7E, 0X00 # adcw (%bp), %di")
#define ADC_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3C # adcw (%si), %di")
#define ADC_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3D # adcw (%di), %di")

#define ADC_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X30 # adcw (%eax), %si")
#define ADC_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X33 # adcw (%ebx), %si")
#define ADC_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X31 # adcw (%ecx), %si")
#define ADC_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X32 # adcw (%edx), %si")
#define ADC_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X37 # adcw (%edi), %si")
#define ADC_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X36 # adcw (%esi), %si")
#define ADC_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X75, 0X00 # adcw (%ebp), %si")
#define ADC_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X34, 0X24 # adcw (%esp), %si")
#define ADC_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X37 # adcw (%bx), %si")
#define ADC_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X76, 0X00 # adcw (%bp), %si")
#define ADC_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X34 # adcw (%si), %si")
#define ADC_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X35 # adcw (%di), %si")

#define ADC_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X28 # adcw (%eax), %bp")
#define ADC_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X2B # adcw (%ebx), %bp")
#define ADC_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X29 # adcw (%ecx), %bp")
#define ADC_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X2A # adcw (%edx), %bp")
#define ADC_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X2F # adcw (%edi), %bp")
#define ADC_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X2E # adcw (%esi), %bp")
#define ADC_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X6D, 0X00 # adcw (%ebp), %bp")
#define ADC_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X2C, 0X24 # adcw (%esp), %bp")
#define ADC_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2F # adcw (%bx), %bp")
#define ADC_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X6E, 0X00 # adcw (%bp), %bp")
#define ADC_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2C # adcw (%si), %bp")
#define ADC_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2D # adcw (%di), %bp")

#define ADC_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X13, 0X20 # adcw (%eax), %sp")
#define ADC_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X13, 0X23 # adcw (%ebx), %sp")
#define ADC_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X13, 0X21 # adcw (%ecx), %sp")
#define ADC_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X13, 0X22 # adcw (%edx), %sp")
#define ADC_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X13, 0X27 # adcw (%edi), %sp")
#define ADC_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X13, 0X26 # adcw (%esi), %sp")
#define ADC_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X13, 0X65, 0X00 # adcw (%ebp), %sp")
#define ADC_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X13, 0X24, 0X24 # adcw (%esp), %sp")
#define ADC_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X27 # adcw (%bx), %sp")
#define ADC_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X66, 0X00 # adcw (%bp), %sp")
#define ADC_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X24 # adcw (%si), %sp")
#define ADC_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X25 # adcw (%di), %sp")

#define ADC_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X00 # adcw %ax, (%eax)")
#define ADC_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X03 # adcw %ax, (%ebx)")
#define ADC_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X01 # adcw %ax, (%ecx)")
#define ADC_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X02 # adcw %ax, (%edx)")
#define ADC_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X07 # adcw %ax, (%edi)")
#define ADC_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X06 # adcw %ax, (%esi)")
#define ADC_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X45, 0X00 # adcw %ax, (%ebp)")
#define ADC_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X04, 0X24 # adcw %ax, (%esp)")
#define ADC_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X07 # adcw %ax, (%bx)")
#define ADC_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X46, 0X00 # adcw %ax, (%bp)")
#define ADC_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X04 # adcw %ax, (%si)")
#define ADC_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X05 # adcw %ax, (%di)")

#define ADC_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X18 # adcw %bx, (%eax)")
#define ADC_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X1B # adcw %bx, (%ebx)")
#define ADC_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X19 # adcw %bx, (%ecx)")
#define ADC_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X1A # adcw %bx, (%edx)")
#define ADC_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X1F # adcw %bx, (%edi)")
#define ADC_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X1E # adcw %bx, (%esi)")
#define ADC_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X5D, 0X00 # adcw %bx, (%ebp)")
#define ADC_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X1C, 0X24 # adcw %bx, (%esp)")
#define ADC_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1F # adcw %bx, (%bx)")
#define ADC_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X5E, 0X00 # adcw %bx, (%bp)")
#define ADC_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1C # adcw %bx, (%si)")
#define ADC_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1D # adcw %bx, (%di)")

#define ADC_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X08 # adcw %cx, (%eax)")
#define ADC_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X0B # adcw %cx, (%ebx)")
#define ADC_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X09 # adcw %cx, (%ecx)")
#define ADC_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X0A # adcw %cx, (%edx)")
#define ADC_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X0F # adcw %cx, (%edi)")
#define ADC_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X0E # adcw %cx, (%esi)")
#define ADC_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X4D, 0X00 # adcw %cx, (%ebp)")
#define ADC_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X0C, 0X24 # adcw %cx, (%esp)")
#define ADC_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0F # adcw %cx, (%bx)")
#define ADC_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X4E, 0X00 # adcw %cx, (%bp)")
#define ADC_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0C # adcw %cx, (%si)")
#define ADC_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0D # adcw %cx, (%di)")

#define ADC_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X10 # adcw %dx, (%eax)")
#define ADC_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X13 # adcw %dx, (%ebx)")
#define ADC_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X11 # adcw %dx, (%ecx)")
#define ADC_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X12 # adcw %dx, (%edx)")
#define ADC_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X17 # adcw %dx, (%edi)")
#define ADC_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X16 # adcw %dx, (%esi)")
#define ADC_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X55, 0X00 # adcw %dx, (%ebp)")
#define ADC_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X14, 0X24 # adcw %dx, (%esp)")
#define ADC_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X17 # adcw %dx, (%bx)")
#define ADC_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X56, 0X00 # adcw %dx, (%bp)")
#define ADC_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X14 # adcw %dx, (%si)")
#define ADC_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X15 # adcw %dx, (%di)")

#define ADC_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X38 # adcw %di, (%eax)")
#define ADC_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X3B # adcw %di, (%ebx)")
#define ADC_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X39 # adcw %di, (%ecx)")
#define ADC_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X3A # adcw %di, (%edx)")
#define ADC_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X3F # adcw %di, (%edi)")
#define ADC_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X3E # adcw %di, (%esi)")
#define ADC_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X7D, 0X00 # adcw %di, (%ebp)")
#define ADC_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X3C, 0X24 # adcw %di, (%esp)")
#define ADC_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3F # adcw %di, (%bx)")
#define ADC_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X7E, 0X00 # adcw %di, (%bp)")
#define ADC_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3C # adcw %di, (%si)")
#define ADC_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3D # adcw %di, (%di)")

#define ADC_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X30 # adcw %si, (%eax)")
#define ADC_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X33 # adcw %si, (%ebx)")
#define ADC_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X31 # adcw %si, (%ecx)")
#define ADC_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X32 # adcw %si, (%edx)")
#define ADC_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X37 # adcw %si, (%edi)")
#define ADC_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X36 # adcw %si, (%esi)")
#define ADC_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X75, 0X00 # adcw %si, (%ebp)")
#define ADC_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X34, 0X24 # adcw %si, (%esp)")
#define ADC_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X37 # adcw %si, (%bx)")
#define ADC_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X76, 0X00 # adcw %si, (%bp)")
#define ADC_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X34 # adcw %si, (%si)")
#define ADC_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X35 # adcw %si, (%di)")

#define ADC_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X28 # adcw %bp, (%eax)")
#define ADC_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X2B # adcw %bp, (%ebx)")
#define ADC_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X29 # adcw %bp, (%ecx)")
#define ADC_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X2A # adcw %bp, (%edx)")
#define ADC_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X2F # adcw %bp, (%edi)")
#define ADC_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X2E # adcw %bp, (%esi)")
#define ADC_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X6D, 0X00 # adcw %bp, (%ebp)")
#define ADC_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X2C, 0X24 # adcw %bp, (%esp)")
#define ADC_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2F # adcw %bp, (%bx)")
#define ADC_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X6E, 0X00 # adcw %bp, (%bp)")
#define ADC_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2C # adcw %bp, (%si)")
#define ADC_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2D # adcw %bp, (%di)")

#define ADC_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X11, 0X20 # adcw %sp, (%eax)")
#define ADC_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X11, 0X23 # adcw %sp, (%ebx)")
#define ADC_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X11, 0X21 # adcw %sp, (%ecx)")
#define ADC_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X11, 0X22 # adcw %sp, (%edx)")
#define ADC_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X11, 0X27 # adcw %sp, (%edi)")
#define ADC_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X11, 0X26 # adcw %sp, (%esi)")
#define ADC_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X11, 0X65, 0X00 # adcw %sp, (%ebp)")
#define ADC_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X11, 0X24, 0X24 # adcw %sp, (%esp)")
#define ADC_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X27 # adcw %sp, (%bx)")
#define ADC_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X66, 0X00 # adcw %sp, (%bp)")
#define ADC_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X24 # adcw %sp, (%si)")
#define ADC_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X25 # adcw %sp, (%di)")

#define ADC_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X80 # adcw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X83 # adcw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X81 # adcw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X82 # adcw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X87 # adcw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X86 # adcw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X85 # adcw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X87 # adcw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X86 # adcw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X84 # adcw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X85 # adcw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X98 # adcw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9B # adcw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X99 # adcw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9A # adcw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9F # adcw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9E # adcw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9D # adcw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9F # adcw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9E # adcw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9C # adcw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9D # adcw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X88 # adcw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8B # adcw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X89 # adcw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8A # adcw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8F # adcw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8E # adcw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8D # adcw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8F # adcw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8E # adcw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8C # adcw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8D # adcw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X90 # adcw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X93 # adcw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X91 # adcw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X92 # adcw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X97 # adcw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X96 # adcw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X95 # adcw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X97 # adcw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X96 # adcw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X94 # adcw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X95 # adcw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB8 # adcw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBB # adcw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB9 # adcw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBA # adcw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBF # adcw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBE # adcw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBD # adcw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBF # adcw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBE # adcw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBC # adcw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBD # adcw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB0 # adcw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB3 # adcw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB1 # adcw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB2 # adcw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB7 # adcw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB6 # adcw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB5 # adcw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB7 # adcw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB6 # adcw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB4 # adcw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB5 # adcw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA8 # adcw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAB # adcw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA9 # adcw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAA # adcw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAF # adcw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAE # adcw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAD # adcw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAF # adcw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAE # adcw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAC # adcw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAD # adcw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA0 # adcw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA3 # adcw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA1 # adcw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA2 # adcw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA7 # adcw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA6 # adcw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA5 # adcw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA7 # adcw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA6 # adcw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA4 # adcw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA5 # adcw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X80 # adcw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X83 # adcw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X81 # adcw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X82 # adcw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X87 # adcw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X86 # adcw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X85 # adcw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X84, 0X24 # adcw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X87 # adcw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X86 # adcw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X84 # adcw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X85 # adcw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X98 # adcw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9B # adcw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X99 # adcw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9A # adcw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9F # adcw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9E # adcw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9D # adcw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9C, 0X24 # adcw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9F # adcw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9E # adcw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9C # adcw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9D # adcw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X88 # adcw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8B # adcw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X89 # adcw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8A # adcw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8F # adcw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8E # adcw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8D # adcw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8C, 0X24 # adcw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8F # adcw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8E # adcw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8C # adcw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8D # adcw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X90 # adcw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X93 # adcw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X91 # adcw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X92 # adcw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X97 # adcw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X96 # adcw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X95 # adcw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X94, 0X24 # adcw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X97 # adcw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X96 # adcw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X94 # adcw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X95 # adcw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB8 # adcw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBB # adcw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB9 # adcw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBA # adcw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBF # adcw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBE # adcw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBD # adcw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBC, 0X24 # adcw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBF # adcw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBE # adcw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBC # adcw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBD # adcw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB0 # adcw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB3 # adcw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB1 # adcw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB2 # adcw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB7 # adcw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB6 # adcw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB5 # adcw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB4, 0X24 # adcw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB7 # adcw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB6 # adcw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB4 # adcw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB5 # adcw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA8 # adcw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAB # adcw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA9 # adcw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAA # adcw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAF # adcw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAE # adcw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAD # adcw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAC, 0X24 # adcw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAF # adcw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAE # adcw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAC # adcw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAD # adcw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA0 # adcw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA3 # adcw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA1 # adcw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA2 # adcw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA4, 0X24 # adcw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA4 # adcw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X04, 0X25 # adcw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X1C, 0X25 # adcw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X0C, 0X25 # adcw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X14, 0X25 # adcw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X3C, 0X25 # adcw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X34, 0X25 # adcw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X2C, 0X25 # adcw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X24, 0X25 # adcw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X04, 0X25 # adcw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0C, 0X25 # adcw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X14, 0X25 # adcw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1C, 0X25 # adcw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X24, 0X25 # adcw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2C, 0X25 # adcw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X34, 0X25 # adcw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3C, 0X25 # adcw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X04, 0X25 # adcw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X1C, 0X25 # adcw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X0C, 0X25 # adcw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X14, 0X25 # adcw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X3C, 0X25 # adcw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X34, 0X25 # adcw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X2C, 0X25 # adcw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X24, 0X25 # adcw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X04, 0X25 # adcw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0C, 0X25 # adcw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X14, 0X25 # adcw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1C, 0X25 # adcw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X24, 0X25 # adcw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2C, 0X25 # adcw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X34, 0X25 # adcw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3C, 0X25 # adcw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X00 # adcw (%rax), %ax")
#define ADC_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X03 # adcw (%rbx), %ax")
#define ADC_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X01 # adcw (%rcx), %ax")
#define ADC_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X02 # adcw (%rdx), %ax")
#define ADC_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X07 # adcw (%rdi), %ax")
#define ADC_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X06 # adcw (%rsi), %ax")
#define ADC_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X45, 0X00 # adcw (%rbp), %ax")
#define ADC_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X04, 0X24 # adcw (%rsp), %ax")
#define ADC_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X00 # adcw (%r8), %ax")
#define ADC_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X01 # adcw (%r9), %ax")
#define ADC_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X02 # adcw (%r10), %ax")
#define ADC_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X03 # adcw (%r11), %ax")
#define ADC_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X04, 0X24 # adcw (%r12), %ax")
#define ADC_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X45, 0X00 # adcw (%r13), %ax")
#define ADC_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X06 # adcw (%r14), %ax")
#define ADC_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X07 # adcw (%r15), %ax")
#define ADC_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X00 # adcw (%eax), %ax")
#define ADC_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X03 # adcw (%ebx), %ax")
#define ADC_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X01 # adcw (%ecx), %ax")
#define ADC_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X02 # adcw (%edx), %ax")
#define ADC_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X07 # adcw (%edi), %ax")
#define ADC_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X06 # adcw (%esi), %ax")
#define ADC_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X45, 0X00 # adcw (%ebp), %ax")
#define ADC_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X04, 0X24 # adcw (%esp), %ax")

#define ADC_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X18 # adcw (%rax), %bx")
#define ADC_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X1B # adcw (%rbx), %bx")
#define ADC_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X19 # adcw (%rcx), %bx")
#define ADC_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X1A # adcw (%rdx), %bx")
#define ADC_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X1F # adcw (%rdi), %bx")
#define ADC_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X1E # adcw (%rsi), %bx")
#define ADC_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X5D, 0X00 # adcw (%rbp), %bx")
#define ADC_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X1C, 0X24 # adcw (%rsp), %bx")
#define ADC_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X18 # adcw (%r8), %bx")
#define ADC_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X19 # adcw (%r9), %bx")
#define ADC_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X1A # adcw (%r10), %bx")
#define ADC_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X1B # adcw (%r11), %bx")
#define ADC_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X1C, 0X24 # adcw (%r12), %bx")
#define ADC_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X5D, 0X00 # adcw (%r13), %bx")
#define ADC_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X1E # adcw (%r14), %bx")
#define ADC_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X1F # adcw (%r15), %bx")
#define ADC_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X18 # adcw (%eax), %bx")
#define ADC_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1B # adcw (%ebx), %bx")
#define ADC_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X19 # adcw (%ecx), %bx")
#define ADC_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1A # adcw (%edx), %bx")
#define ADC_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1F # adcw (%edi), %bx")
#define ADC_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1E # adcw (%esi), %bx")
#define ADC_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X5D, 0X00 # adcw (%ebp), %bx")
#define ADC_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X1C, 0X24 # adcw (%esp), %bx")

#define ADC_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X08 # adcw (%rax), %cx")
#define ADC_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X0B # adcw (%rbx), %cx")
#define ADC_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X09 # adcw (%rcx), %cx")
#define ADC_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X0A # adcw (%rdx), %cx")
#define ADC_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X0F # adcw (%rdi), %cx")
#define ADC_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X0E # adcw (%rsi), %cx")
#define ADC_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X4D, 0X00 # adcw (%rbp), %cx")
#define ADC_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X0C, 0X24 # adcw (%rsp), %cx")
#define ADC_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X08 # adcw (%r8), %cx")
#define ADC_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X09 # adcw (%r9), %cx")
#define ADC_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X0A # adcw (%r10), %cx")
#define ADC_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X0B # adcw (%r11), %cx")
#define ADC_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X0C, 0X24 # adcw (%r12), %cx")
#define ADC_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X4D, 0X00 # adcw (%r13), %cx")
#define ADC_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X0E # adcw (%r14), %cx")
#define ADC_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X0F # adcw (%r15), %cx")
#define ADC_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X08 # adcw (%eax), %cx")
#define ADC_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0B # adcw (%ebx), %cx")
#define ADC_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X09 # adcw (%ecx), %cx")
#define ADC_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0A # adcw (%edx), %cx")
#define ADC_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0F # adcw (%edi), %cx")
#define ADC_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0E # adcw (%esi), %cx")
#define ADC_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X4D, 0X00 # adcw (%ebp), %cx")
#define ADC_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X0C, 0X24 # adcw (%esp), %cx")

#define ADC_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X10 # adcw (%rax), %dx")
#define ADC_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X13 # adcw (%rbx), %dx")
#define ADC_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X11 # adcw (%rcx), %dx")
#define ADC_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X12 # adcw (%rdx), %dx")
#define ADC_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X17 # adcw (%rdi), %dx")
#define ADC_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X16 # adcw (%rsi), %dx")
#define ADC_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X55, 0X00 # adcw (%rbp), %dx")
#define ADC_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X14, 0X24 # adcw (%rsp), %dx")
#define ADC_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X10 # adcw (%r8), %dx")
#define ADC_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X11 # adcw (%r9), %dx")
#define ADC_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X12 # adcw (%r10), %dx")
#define ADC_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X13 # adcw (%r11), %dx")
#define ADC_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X14, 0X24 # adcw (%r12), %dx")
#define ADC_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X55, 0X00 # adcw (%r13), %dx")
#define ADC_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X16 # adcw (%r14), %dx")
#define ADC_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X17 # adcw (%r15), %dx")
#define ADC_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X10 # adcw (%eax), %dx")
#define ADC_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X13 # adcw (%ebx), %dx")
#define ADC_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X11 # adcw (%ecx), %dx")
#define ADC_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X12 # adcw (%edx), %dx")
#define ADC_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X17 # adcw (%edi), %dx")
#define ADC_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X16 # adcw (%esi), %dx")
#define ADC_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X55, 0X00 # adcw (%ebp), %dx")
#define ADC_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X14, 0X24 # adcw (%esp), %dx")

#define ADC_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X38 # adcw (%rax), %di")
#define ADC_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X3B # adcw (%rbx), %di")
#define ADC_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X39 # adcw (%rcx), %di")
#define ADC_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X3A # adcw (%rdx), %di")
#define ADC_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X3F # adcw (%rdi), %di")
#define ADC_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X3E # adcw (%rsi), %di")
#define ADC_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X7D, 0X00 # adcw (%rbp), %di")
#define ADC_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X3C, 0X24 # adcw (%rsp), %di")
#define ADC_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X38 # adcw (%r8), %di")
#define ADC_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X39 # adcw (%r9), %di")
#define ADC_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X3A # adcw (%r10), %di")
#define ADC_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X3B # adcw (%r11), %di")
#define ADC_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X3C, 0X24 # adcw (%r12), %di")
#define ADC_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X7D, 0X00 # adcw (%r13), %di")
#define ADC_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X3E # adcw (%r14), %di")
#define ADC_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X3F # adcw (%r15), %di")
#define ADC_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X38 # adcw (%eax), %di")
#define ADC_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3B # adcw (%ebx), %di")
#define ADC_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X39 # adcw (%ecx), %di")
#define ADC_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3A # adcw (%edx), %di")
#define ADC_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3F # adcw (%edi), %di")
#define ADC_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3E # adcw (%esi), %di")
#define ADC_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X7D, 0X00 # adcw (%ebp), %di")
#define ADC_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X3C, 0X24 # adcw (%esp), %di")

#define ADC_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X30 # adcw (%rax), %si")
#define ADC_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X33 # adcw (%rbx), %si")
#define ADC_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X31 # adcw (%rcx), %si")
#define ADC_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X32 # adcw (%rdx), %si")
#define ADC_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X37 # adcw (%rdi), %si")
#define ADC_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X36 # adcw (%rsi), %si")
#define ADC_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X75, 0X00 # adcw (%rbp), %si")
#define ADC_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X34, 0X24 # adcw (%rsp), %si")
#define ADC_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X30 # adcw (%r8), %si")
#define ADC_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X31 # adcw (%r9), %si")
#define ADC_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X32 # adcw (%r10), %si")
#define ADC_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X33 # adcw (%r11), %si")
#define ADC_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X34, 0X24 # adcw (%r12), %si")
#define ADC_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X75, 0X00 # adcw (%r13), %si")
#define ADC_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X36 # adcw (%r14), %si")
#define ADC_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X37 # adcw (%r15), %si")
#define ADC_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X30 # adcw (%eax), %si")
#define ADC_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X33 # adcw (%ebx), %si")
#define ADC_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X31 # adcw (%ecx), %si")
#define ADC_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X32 # adcw (%edx), %si")
#define ADC_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X37 # adcw (%edi), %si")
#define ADC_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X36 # adcw (%esi), %si")
#define ADC_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X75, 0X00 # adcw (%ebp), %si")
#define ADC_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X34, 0X24 # adcw (%esp), %si")

#define ADC_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X28 # adcw (%rax), %bp")
#define ADC_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X2B # adcw (%rbx), %bp")
#define ADC_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X29 # adcw (%rcx), %bp")
#define ADC_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X2A # adcw (%rdx), %bp")
#define ADC_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X2F # adcw (%rdi), %bp")
#define ADC_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X2E # adcw (%rsi), %bp")
#define ADC_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X6D, 0X00 # adcw (%rbp), %bp")
#define ADC_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X2C, 0X24 # adcw (%rsp), %bp")
#define ADC_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X28 # adcw (%r8), %bp")
#define ADC_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X29 # adcw (%r9), %bp")
#define ADC_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X2A # adcw (%r10), %bp")
#define ADC_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X2B # adcw (%r11), %bp")
#define ADC_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X2C, 0X24 # adcw (%r12), %bp")
#define ADC_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X6D, 0X00 # adcw (%r13), %bp")
#define ADC_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X2E # adcw (%r14), %bp")
#define ADC_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X2F # adcw (%r15), %bp")
#define ADC_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X28 # adcw (%eax), %bp")
#define ADC_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2B # adcw (%ebx), %bp")
#define ADC_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X29 # adcw (%ecx), %bp")
#define ADC_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2A # adcw (%edx), %bp")
#define ADC_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2F # adcw (%edi), %bp")
#define ADC_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2E # adcw (%esi), %bp")
#define ADC_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X6D, 0X00 # adcw (%ebp), %bp")
#define ADC_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X2C, 0X24 # adcw (%esp), %bp")

#define ADC_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X13, 0X20 # adcw (%rax), %sp")
#define ADC_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X13, 0X23 # adcw (%rbx), %sp")
#define ADC_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X13, 0X21 # adcw (%rcx), %sp")
#define ADC_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X13, 0X22 # adcw (%rdx), %sp")
#define ADC_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X13, 0X27 # adcw (%rdi), %sp")
#define ADC_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X13, 0X26 # adcw (%rsi), %sp")
#define ADC_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X13, 0X65, 0X00 # adcw (%rbp), %sp")
#define ADC_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X13, 0X24, 0X24 # adcw (%rsp), %sp")
#define ADC_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X20 # adcw (%r8), %sp")
#define ADC_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X21 # adcw (%r9), %sp")
#define ADC_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X22 # adcw (%r10), %sp")
#define ADC_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X23 # adcw (%r11), %sp")
#define ADC_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X24, 0X24 # adcw (%r12), %sp")
#define ADC_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X65, 0X00 # adcw (%r13), %sp")
#define ADC_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X26 # adcw (%r14), %sp")
#define ADC_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X13, 0X27 # adcw (%r15), %sp")
#define ADC_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X20 # adcw (%eax), %sp")
#define ADC_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X23 # adcw (%ebx), %sp")
#define ADC_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X21 # adcw (%ecx), %sp")
#define ADC_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X13, 0X22 # adcw (%edx), %sp")
#define ADC_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X27 # adcw (%edi), %sp")
#define ADC_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X13, 0X26 # adcw (%esi), %sp")
#define ADC_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X65, 0X00 # adcw (%ebp), %sp")
#define ADC_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X13, 0X24, 0X24 # adcw (%esp), %sp")

#define ADC_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X00 # adcw (%rax), %r8w")
#define ADC_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X03 # adcw (%rbx), %r8w")
#define ADC_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X01 # adcw (%rcx), %r8w")
#define ADC_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X02 # adcw (%rdx), %r8w")
#define ADC_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X07 # adcw (%rdi), %r8w")
#define ADC_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X06 # adcw (%rsi), %r8w")
#define ADC_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X45, 0X00 # adcw (%rbp), %r8w")
#define ADC_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X04, 0X24 # adcw (%rsp), %r8w")
#define ADC_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X00 # adcw (%r8), %r8w")
#define ADC_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X01 # adcw (%r9), %r8w")
#define ADC_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X02 # adcw (%r10), %r8w")
#define ADC_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X03 # adcw (%r11), %r8w")
#define ADC_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X04, 0X24 # adcw (%r12), %r8w")
#define ADC_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X45, 0X00 # adcw (%r13), %r8w")
#define ADC_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X06 # adcw (%r14), %r8w")
#define ADC_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X07 # adcw (%r15), %r8w")
#define ADC_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X00 # adcw (%eax), %r8w")
#define ADC_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X03 # adcw (%ebx), %r8w")
#define ADC_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X01 # adcw (%ecx), %r8w")
#define ADC_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X02 # adcw (%edx), %r8w")
#define ADC_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X07 # adcw (%edi), %r8w")
#define ADC_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X06 # adcw (%esi), %r8w")
#define ADC_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X45, 0X00 # adcw (%ebp), %r8w")
#define ADC_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X04, 0X24 # adcw (%esp), %r8w")

#define ADC_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X08 # adcw (%rax), %r9w")
#define ADC_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0B # adcw (%rbx), %r9w")
#define ADC_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X09 # adcw (%rcx), %r9w")
#define ADC_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0A # adcw (%rdx), %r9w")
#define ADC_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0F # adcw (%rdi), %r9w")
#define ADC_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0E # adcw (%rsi), %r9w")
#define ADC_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X4D, 0X00 # adcw (%rbp), %r9w")
#define ADC_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X0C, 0X24 # adcw (%rsp), %r9w")
#define ADC_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X08 # adcw (%r8), %r9w")
#define ADC_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X09 # adcw (%r9), %r9w")
#define ADC_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X0A # adcw (%r10), %r9w")
#define ADC_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X0B # adcw (%r11), %r9w")
#define ADC_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X0C, 0X24 # adcw (%r12), %r9w")
#define ADC_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X4D, 0X00 # adcw (%r13), %r9w")
#define ADC_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X0E # adcw (%r14), %r9w")
#define ADC_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X0F # adcw (%r15), %r9w")
#define ADC_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X08 # adcw (%eax), %r9w")
#define ADC_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X0B # adcw (%ebx), %r9w")
#define ADC_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X09 # adcw (%ecx), %r9w")
#define ADC_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X0A # adcw (%edx), %r9w")
#define ADC_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X0F # adcw (%edi), %r9w")
#define ADC_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X0E # adcw (%esi), %r9w")
#define ADC_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X4D, 0X00 # adcw (%ebp), %r9w")
#define ADC_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X0C, 0X24 # adcw (%esp), %r9w")

#define ADC_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X10 # adcw (%rax), %r10w")
#define ADC_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X13 # adcw (%rbx), %r10w")
#define ADC_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X11 # adcw (%rcx), %r10w")
#define ADC_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X12 # adcw (%rdx), %r10w")
#define ADC_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X17 # adcw (%rdi), %r10w")
#define ADC_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X16 # adcw (%rsi), %r10w")
#define ADC_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X55, 0X00 # adcw (%rbp), %r10w")
#define ADC_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X14, 0X24 # adcw (%rsp), %r10w")
#define ADC_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X10 # adcw (%r8), %r10w")
#define ADC_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X11 # adcw (%r9), %r10w")
#define ADC_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X12 # adcw (%r10), %r10w")
#define ADC_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X13 # adcw (%r11), %r10w")
#define ADC_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X14, 0X24 # adcw (%r12), %r10w")
#define ADC_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X55, 0X00 # adcw (%r13), %r10w")
#define ADC_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X16 # adcw (%r14), %r10w")
#define ADC_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X17 # adcw (%r15), %r10w")
#define ADC_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X10 # adcw (%eax), %r10w")
#define ADC_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X13 # adcw (%ebx), %r10w")
#define ADC_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X11 # adcw (%ecx), %r10w")
#define ADC_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X12 # adcw (%edx), %r10w")
#define ADC_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X17 # adcw (%edi), %r10w")
#define ADC_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X16 # adcw (%esi), %r10w")
#define ADC_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X55, 0X00 # adcw (%ebp), %r10w")
#define ADC_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X14, 0X24 # adcw (%esp), %r10w")

#define ADC_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X18 # adcw (%rax), %r11w")
#define ADC_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1B # adcw (%rbx), %r11w")
#define ADC_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X19 # adcw (%rcx), %r11w")
#define ADC_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1A # adcw (%rdx), %r11w")
#define ADC_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1F # adcw (%rdi), %r11w")
#define ADC_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1E # adcw (%rsi), %r11w")
#define ADC_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X5D, 0X00 # adcw (%rbp), %r11w")
#define ADC_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X1C, 0X24 # adcw (%rsp), %r11w")
#define ADC_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X18 # adcw (%r8), %r11w")
#define ADC_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X19 # adcw (%r9), %r11w")
#define ADC_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X1A # adcw (%r10), %r11w")
#define ADC_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X1B # adcw (%r11), %r11w")
#define ADC_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X1C, 0X24 # adcw (%r12), %r11w")
#define ADC_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X5D, 0X00 # adcw (%r13), %r11w")
#define ADC_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X1E # adcw (%r14), %r11w")
#define ADC_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X1F # adcw (%r15), %r11w")
#define ADC_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X18 # adcw (%eax), %r11w")
#define ADC_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X1B # adcw (%ebx), %r11w")
#define ADC_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X19 # adcw (%ecx), %r11w")
#define ADC_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X1A # adcw (%edx), %r11w")
#define ADC_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X1F # adcw (%edi), %r11w")
#define ADC_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X1E # adcw (%esi), %r11w")
#define ADC_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X5D, 0X00 # adcw (%ebp), %r11w")
#define ADC_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X1C, 0X24 # adcw (%esp), %r11w")

#define ADC_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X20 # adcw (%rax), %r12w")
#define ADC_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X23 # adcw (%rbx), %r12w")
#define ADC_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X21 # adcw (%rcx), %r12w")
#define ADC_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X22 # adcw (%rdx), %r12w")
#define ADC_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X27 # adcw (%rdi), %r12w")
#define ADC_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X26 # adcw (%rsi), %r12w")
#define ADC_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X65, 0X00 # adcw (%rbp), %r12w")
#define ADC_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X24, 0X24 # adcw (%rsp), %r12w")
#define ADC_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X20 # adcw (%r8), %r12w")
#define ADC_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X21 # adcw (%r9), %r12w")
#define ADC_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X22 # adcw (%r10), %r12w")
#define ADC_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X23 # adcw (%r11), %r12w")
#define ADC_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X24, 0X24 # adcw (%r12), %r12w")
#define ADC_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X65, 0X00 # adcw (%r13), %r12w")
#define ADC_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X26 # adcw (%r14), %r12w")
#define ADC_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X27 # adcw (%r15), %r12w")
#define ADC_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X20 # adcw (%eax), %r12w")
#define ADC_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X23 # adcw (%ebx), %r12w")
#define ADC_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X21 # adcw (%ecx), %r12w")
#define ADC_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X22 # adcw (%edx), %r12w")
#define ADC_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X27 # adcw (%edi), %r12w")
#define ADC_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X26 # adcw (%esi), %r12w")
#define ADC_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X65, 0X00 # adcw (%ebp), %r12w")
#define ADC_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X24, 0X24 # adcw (%esp), %r12w")

#define ADC_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X28 # adcw (%rax), %r13w")
#define ADC_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2B # adcw (%rbx), %r13w")
#define ADC_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X29 # adcw (%rcx), %r13w")
#define ADC_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2A # adcw (%rdx), %r13w")
#define ADC_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2F # adcw (%rdi), %r13w")
#define ADC_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2E # adcw (%rsi), %r13w")
#define ADC_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X6D, 0X00 # adcw (%rbp), %r13w")
#define ADC_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X2C, 0X24 # adcw (%rsp), %r13w")
#define ADC_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X28 # adcw (%r8), %r13w")
#define ADC_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X29 # adcw (%r9), %r13w")
#define ADC_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X2A # adcw (%r10), %r13w")
#define ADC_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X2B # adcw (%r11), %r13w")
#define ADC_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X2C, 0X24 # adcw (%r12), %r13w")
#define ADC_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X6D, 0X00 # adcw (%r13), %r13w")
#define ADC_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X2E # adcw (%r14), %r13w")
#define ADC_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X2F # adcw (%r15), %r13w")
#define ADC_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X28 # adcw (%eax), %r13w")
#define ADC_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X2B # adcw (%ebx), %r13w")
#define ADC_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X29 # adcw (%ecx), %r13w")
#define ADC_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X2A # adcw (%edx), %r13w")
#define ADC_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X2F # adcw (%edi), %r13w")
#define ADC_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X2E # adcw (%esi), %r13w")
#define ADC_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X6D, 0X00 # adcw (%ebp), %r13w")
#define ADC_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X2C, 0X24 # adcw (%esp), %r13w")

#define ADC_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X30 # adcw (%rax), %r14w")
#define ADC_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X33 # adcw (%rbx), %r14w")
#define ADC_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X31 # adcw (%rcx), %r14w")
#define ADC_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X32 # adcw (%rdx), %r14w")
#define ADC_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X37 # adcw (%rdi), %r14w")
#define ADC_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X36 # adcw (%rsi), %r14w")
#define ADC_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X75, 0X00 # adcw (%rbp), %r14w")
#define ADC_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X34, 0X24 # adcw (%rsp), %r14w")
#define ADC_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X30 # adcw (%r8), %r14w")
#define ADC_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X31 # adcw (%r9), %r14w")
#define ADC_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X32 # adcw (%r10), %r14w")
#define ADC_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X33 # adcw (%r11), %r14w")
#define ADC_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X34, 0X24 # adcw (%r12), %r14w")
#define ADC_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X75, 0X00 # adcw (%r13), %r14w")
#define ADC_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X36 # adcw (%r14), %r14w")
#define ADC_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X37 # adcw (%r15), %r14w")
#define ADC_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X30 # adcw (%eax), %r14w")
#define ADC_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X33 # adcw (%ebx), %r14w")
#define ADC_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X31 # adcw (%ecx), %r14w")
#define ADC_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X32 # adcw (%edx), %r14w")
#define ADC_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X37 # adcw (%edi), %r14w")
#define ADC_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X36 # adcw (%esi), %r14w")
#define ADC_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X75, 0X00 # adcw (%ebp), %r14w")
#define ADC_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X34, 0X24 # adcw (%esp), %r14w")

#define ADC_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X38 # adcw (%rax), %r15w")
#define ADC_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3B # adcw (%rbx), %r15w")
#define ADC_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X39 # adcw (%rcx), %r15w")
#define ADC_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3A # adcw (%rdx), %r15w")
#define ADC_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3F # adcw (%rdi), %r15w")
#define ADC_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3E # adcw (%rsi), %r15w")
#define ADC_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X7D, 0X00 # adcw (%rbp), %r15w")
#define ADC_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X13, 0X3C, 0X24 # adcw (%rsp), %r15w")
#define ADC_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X38 # adcw (%r8), %r15w")
#define ADC_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X39 # adcw (%r9), %r15w")
#define ADC_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X3A # adcw (%r10), %r15w")
#define ADC_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X3B # adcw (%r11), %r15w")
#define ADC_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X3C, 0X24 # adcw (%r12), %r15w")
#define ADC_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X7D, 0X00 # adcw (%r13), %r15w")
#define ADC_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X3E # adcw (%r14), %r15w")
#define ADC_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X13, 0X3F # adcw (%r15), %r15w")
#define ADC_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X38 # adcw (%eax), %r15w")
#define ADC_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X3B # adcw (%ebx), %r15w")
#define ADC_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X39 # adcw (%ecx), %r15w")
#define ADC_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X3A # adcw (%edx), %r15w")
#define ADC_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X3F # adcw (%edi), %r15w")
#define ADC_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X3E # adcw (%esi), %r15w")
#define ADC_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X7D, 0X00 # adcw (%ebp), %r15w")
#define ADC_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X3C, 0X24 # adcw (%esp), %r15w")

#define ADC_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X00 # adcw %ax, (%rax)")
#define ADC_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X03 # adcw %ax, (%rbx)")
#define ADC_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X01 # adcw %ax, (%rcx)")
#define ADC_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X02 # adcw %ax, (%rdx)")
#define ADC_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X07 # adcw %ax, (%rdi)")
#define ADC_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X06 # adcw %ax, (%rsi)")
#define ADC_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X45, 0X00 # adcw %ax, (%rbp)")
#define ADC_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X04, 0X24 # adcw %ax, (%rsp)")
#define ADC_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X00 # adcw %ax, (%r8)")
#define ADC_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X01 # adcw %ax, (%r9)")
#define ADC_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X02 # adcw %ax, (%r10)")
#define ADC_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X03 # adcw %ax, (%r11)")
#define ADC_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X04, 0X24 # adcw %ax, (%r12)")
#define ADC_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X45, 0X00 # adcw %ax, (%r13)")
#define ADC_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X06 # adcw %ax, (%r14)")
#define ADC_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X07 # adcw %ax, (%r15)")
#define ADC_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X00 # adcw %ax, (%eax)")
#define ADC_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X03 # adcw %ax, (%ebx)")
#define ADC_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X01 # adcw %ax, (%ecx)")
#define ADC_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X02 # adcw %ax, (%edx)")
#define ADC_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X07 # adcw %ax, (%edi)")
#define ADC_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X06 # adcw %ax, (%esi)")
#define ADC_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X45, 0X00 # adcw %ax, (%ebp)")
#define ADC_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X04, 0X24 # adcw %ax, (%esp)")

#define ADC_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X18 # adcw %bx, (%rax)")
#define ADC_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X1B # adcw %bx, (%rbx)")
#define ADC_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X19 # adcw %bx, (%rcx)")
#define ADC_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X1A # adcw %bx, (%rdx)")
#define ADC_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X1F # adcw %bx, (%rdi)")
#define ADC_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X1E # adcw %bx, (%rsi)")
#define ADC_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X5D, 0X00 # adcw %bx, (%rbp)")
#define ADC_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X1C, 0X24 # adcw %bx, (%rsp)")
#define ADC_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X18 # adcw %bx, (%r8)")
#define ADC_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X19 # adcw %bx, (%r9)")
#define ADC_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X1A # adcw %bx, (%r10)")
#define ADC_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X1B # adcw %bx, (%r11)")
#define ADC_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X1C, 0X24 # adcw %bx, (%r12)")
#define ADC_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X5D, 0X00 # adcw %bx, (%r13)")
#define ADC_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X1E # adcw %bx, (%r14)")
#define ADC_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X1F # adcw %bx, (%r15)")
#define ADC_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X18 # adcw %bx, (%eax)")
#define ADC_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1B # adcw %bx, (%ebx)")
#define ADC_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X19 # adcw %bx, (%ecx)")
#define ADC_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1A # adcw %bx, (%edx)")
#define ADC_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1F # adcw %bx, (%edi)")
#define ADC_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1E # adcw %bx, (%esi)")
#define ADC_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X5D, 0X00 # adcw %bx, (%ebp)")
#define ADC_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X1C, 0X24 # adcw %bx, (%esp)")

#define ADC_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X08 # adcw %cx, (%rax)")
#define ADC_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X0B # adcw %cx, (%rbx)")
#define ADC_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X09 # adcw %cx, (%rcx)")
#define ADC_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X0A # adcw %cx, (%rdx)")
#define ADC_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X0F # adcw %cx, (%rdi)")
#define ADC_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X0E # adcw %cx, (%rsi)")
#define ADC_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X4D, 0X00 # adcw %cx, (%rbp)")
#define ADC_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X0C, 0X24 # adcw %cx, (%rsp)")
#define ADC_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X08 # adcw %cx, (%r8)")
#define ADC_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X09 # adcw %cx, (%r9)")
#define ADC_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X0A # adcw %cx, (%r10)")
#define ADC_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X0B # adcw %cx, (%r11)")
#define ADC_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X0C, 0X24 # adcw %cx, (%r12)")
#define ADC_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X4D, 0X00 # adcw %cx, (%r13)")
#define ADC_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X0E # adcw %cx, (%r14)")
#define ADC_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X0F # adcw %cx, (%r15)")
#define ADC_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X08 # adcw %cx, (%eax)")
#define ADC_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0B # adcw %cx, (%ebx)")
#define ADC_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X09 # adcw %cx, (%ecx)")
#define ADC_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0A # adcw %cx, (%edx)")
#define ADC_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0F # adcw %cx, (%edi)")
#define ADC_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0E # adcw %cx, (%esi)")
#define ADC_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X4D, 0X00 # adcw %cx, (%ebp)")
#define ADC_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X0C, 0X24 # adcw %cx, (%esp)")

#define ADC_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X10 # adcw %dx, (%rax)")
#define ADC_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X13 # adcw %dx, (%rbx)")
#define ADC_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X11 # adcw %dx, (%rcx)")
#define ADC_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X12 # adcw %dx, (%rdx)")
#define ADC_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X17 # adcw %dx, (%rdi)")
#define ADC_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X16 # adcw %dx, (%rsi)")
#define ADC_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X55, 0X00 # adcw %dx, (%rbp)")
#define ADC_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X14, 0X24 # adcw %dx, (%rsp)")
#define ADC_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X10 # adcw %dx, (%r8)")
#define ADC_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X11 # adcw %dx, (%r9)")
#define ADC_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X12 # adcw %dx, (%r10)")
#define ADC_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X13 # adcw %dx, (%r11)")
#define ADC_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X14, 0X24 # adcw %dx, (%r12)")
#define ADC_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X55, 0X00 # adcw %dx, (%r13)")
#define ADC_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X16 # adcw %dx, (%r14)")
#define ADC_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X17 # adcw %dx, (%r15)")
#define ADC_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X10 # adcw %dx, (%eax)")
#define ADC_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X13 # adcw %dx, (%ebx)")
#define ADC_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X11 # adcw %dx, (%ecx)")
#define ADC_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X12 # adcw %dx, (%edx)")
#define ADC_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X17 # adcw %dx, (%edi)")
#define ADC_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X16 # adcw %dx, (%esi)")
#define ADC_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X55, 0X00 # adcw %dx, (%ebp)")
#define ADC_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X14, 0X24 # adcw %dx, (%esp)")

#define ADC_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X38 # adcw %di, (%rax)")
#define ADC_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X3B # adcw %di, (%rbx)")
#define ADC_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X39 # adcw %di, (%rcx)")
#define ADC_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X3A # adcw %di, (%rdx)")
#define ADC_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X3F # adcw %di, (%rdi)")
#define ADC_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X3E # adcw %di, (%rsi)")
#define ADC_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X7D, 0X00 # adcw %di, (%rbp)")
#define ADC_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X3C, 0X24 # adcw %di, (%rsp)")
#define ADC_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X38 # adcw %di, (%r8)")
#define ADC_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X39 # adcw %di, (%r9)")
#define ADC_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X3A # adcw %di, (%r10)")
#define ADC_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X3B # adcw %di, (%r11)")
#define ADC_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X3C, 0X24 # adcw %di, (%r12)")
#define ADC_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X7D, 0X00 # adcw %di, (%r13)")
#define ADC_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X3E # adcw %di, (%r14)")
#define ADC_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X3F # adcw %di, (%r15)")
#define ADC_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X38 # adcw %di, (%eax)")
#define ADC_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3B # adcw %di, (%ebx)")
#define ADC_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X39 # adcw %di, (%ecx)")
#define ADC_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3A # adcw %di, (%edx)")
#define ADC_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3F # adcw %di, (%edi)")
#define ADC_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3E # adcw %di, (%esi)")
#define ADC_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X7D, 0X00 # adcw %di, (%ebp)")
#define ADC_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X3C, 0X24 # adcw %di, (%esp)")

#define ADC_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X30 # adcw %si, (%rax)")
#define ADC_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X33 # adcw %si, (%rbx)")
#define ADC_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X31 # adcw %si, (%rcx)")
#define ADC_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X32 # adcw %si, (%rdx)")
#define ADC_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X37 # adcw %si, (%rdi)")
#define ADC_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X36 # adcw %si, (%rsi)")
#define ADC_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X75, 0X00 # adcw %si, (%rbp)")
#define ADC_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X34, 0X24 # adcw %si, (%rsp)")
#define ADC_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X30 # adcw %si, (%r8)")
#define ADC_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X31 # adcw %si, (%r9)")
#define ADC_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X32 # adcw %si, (%r10)")
#define ADC_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X33 # adcw %si, (%r11)")
#define ADC_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X34, 0X24 # adcw %si, (%r12)")
#define ADC_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X75, 0X00 # adcw %si, (%r13)")
#define ADC_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X36 # adcw %si, (%r14)")
#define ADC_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X37 # adcw %si, (%r15)")
#define ADC_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X30 # adcw %si, (%eax)")
#define ADC_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X33 # adcw %si, (%ebx)")
#define ADC_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X31 # adcw %si, (%ecx)")
#define ADC_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X32 # adcw %si, (%edx)")
#define ADC_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X37 # adcw %si, (%edi)")
#define ADC_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X36 # adcw %si, (%esi)")
#define ADC_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X75, 0X00 # adcw %si, (%ebp)")
#define ADC_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X34, 0X24 # adcw %si, (%esp)")

#define ADC_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X28 # adcw %bp, (%rax)")
#define ADC_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X2B # adcw %bp, (%rbx)")
#define ADC_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X29 # adcw %bp, (%rcx)")
#define ADC_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X2A # adcw %bp, (%rdx)")
#define ADC_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X2F # adcw %bp, (%rdi)")
#define ADC_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X2E # adcw %bp, (%rsi)")
#define ADC_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X6D, 0X00 # adcw %bp, (%rbp)")
#define ADC_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X2C, 0X24 # adcw %bp, (%rsp)")
#define ADC_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X28 # adcw %bp, (%r8)")
#define ADC_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X29 # adcw %bp, (%r9)")
#define ADC_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X2A # adcw %bp, (%r10)")
#define ADC_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X2B # adcw %bp, (%r11)")
#define ADC_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X2C, 0X24 # adcw %bp, (%r12)")
#define ADC_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X6D, 0X00 # adcw %bp, (%r13)")
#define ADC_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X2E # adcw %bp, (%r14)")
#define ADC_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X2F # adcw %bp, (%r15)")
#define ADC_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X28 # adcw %bp, (%eax)")
#define ADC_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2B # adcw %bp, (%ebx)")
#define ADC_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X29 # adcw %bp, (%ecx)")
#define ADC_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2A # adcw %bp, (%edx)")
#define ADC_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2F # adcw %bp, (%edi)")
#define ADC_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2E # adcw %bp, (%esi)")
#define ADC_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X6D, 0X00 # adcw %bp, (%ebp)")
#define ADC_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X2C, 0X24 # adcw %bp, (%esp)")

#define ADC_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X11, 0X20 # adcw %sp, (%rax)")
#define ADC_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X11, 0X23 # adcw %sp, (%rbx)")
#define ADC_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X11, 0X21 # adcw %sp, (%rcx)")
#define ADC_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X11, 0X22 # adcw %sp, (%rdx)")
#define ADC_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X11, 0X27 # adcw %sp, (%rdi)")
#define ADC_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X11, 0X26 # adcw %sp, (%rsi)")
#define ADC_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X11, 0X65, 0X00 # adcw %sp, (%rbp)")
#define ADC_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X11, 0X24, 0X24 # adcw %sp, (%rsp)")
#define ADC_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X20 # adcw %sp, (%r8)")
#define ADC_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X21 # adcw %sp, (%r9)")
#define ADC_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X22 # adcw %sp, (%r10)")
#define ADC_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X23 # adcw %sp, (%r11)")
#define ADC_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X24, 0X24 # adcw %sp, (%r12)")
#define ADC_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X65, 0X00 # adcw %sp, (%r13)")
#define ADC_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X26 # adcw %sp, (%r14)")
#define ADC_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X11, 0X27 # adcw %sp, (%r15)")
#define ADC_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X20 # adcw %sp, (%eax)")
#define ADC_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X23 # adcw %sp, (%ebx)")
#define ADC_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X21 # adcw %sp, (%ecx)")
#define ADC_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X11, 0X22 # adcw %sp, (%edx)")
#define ADC_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X27 # adcw %sp, (%edi)")
#define ADC_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X11, 0X26 # adcw %sp, (%esi)")
#define ADC_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X65, 0X00 # adcw %sp, (%ebp)")
#define ADC_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X11, 0X24, 0X24 # adcw %sp, (%esp)")

#define ADC_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X00 # adcw %r8w, (%rax)")
#define ADC_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X03 # adcw %r8w, (%rbx)")
#define ADC_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X01 # adcw %r8w, (%rcx)")
#define ADC_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X02 # adcw %r8w, (%rdx)")
#define ADC_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X07 # adcw %r8w, (%rdi)")
#define ADC_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X06 # adcw %r8w, (%rsi)")
#define ADC_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X45, 0X00 # adcw %r8w, (%rbp)")
#define ADC_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X04, 0X24 # adcw %r8w, (%rsp)")
#define ADC_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X00 # adcw %r8w, (%r8)")
#define ADC_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X01 # adcw %r8w, (%r9)")
#define ADC_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X02 # adcw %r8w, (%r10)")
#define ADC_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X03 # adcw %r8w, (%r11)")
#define ADC_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X04, 0X24 # adcw %r8w, (%r12)")
#define ADC_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X45, 0X00 # adcw %r8w, (%r13)")
#define ADC_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X06 # adcw %r8w, (%r14)")
#define ADC_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X07 # adcw %r8w, (%r15)")
#define ADC_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X00 # adcw %r8w, (%eax)")
#define ADC_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X03 # adcw %r8w, (%ebx)")
#define ADC_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X01 # adcw %r8w, (%ecx)")
#define ADC_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X02 # adcw %r8w, (%edx)")
#define ADC_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X07 # adcw %r8w, (%edi)")
#define ADC_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X06 # adcw %r8w, (%esi)")
#define ADC_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X45, 0X00 # adcw %r8w, (%ebp)")
#define ADC_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X04, 0X24 # adcw %r8w, (%esp)")

#define ADC_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X08 # adcw %r9w, (%rax)")
#define ADC_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0B # adcw %r9w, (%rbx)")
#define ADC_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X09 # adcw %r9w, (%rcx)")
#define ADC_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0A # adcw %r9w, (%rdx)")
#define ADC_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0F # adcw %r9w, (%rdi)")
#define ADC_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0E # adcw %r9w, (%rsi)")
#define ADC_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X4D, 0X00 # adcw %r9w, (%rbp)")
#define ADC_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X0C, 0X24 # adcw %r9w, (%rsp)")
#define ADC_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X08 # adcw %r9w, (%r8)")
#define ADC_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X09 # adcw %r9w, (%r9)")
#define ADC_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X0A # adcw %r9w, (%r10)")
#define ADC_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X0B # adcw %r9w, (%r11)")
#define ADC_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X0C, 0X24 # adcw %r9w, (%r12)")
#define ADC_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X4D, 0X00 # adcw %r9w, (%r13)")
#define ADC_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X0E # adcw %r9w, (%r14)")
#define ADC_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X0F # adcw %r9w, (%r15)")
#define ADC_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X08 # adcw %r9w, (%eax)")
#define ADC_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X0B # adcw %r9w, (%ebx)")
#define ADC_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X09 # adcw %r9w, (%ecx)")
#define ADC_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X0A # adcw %r9w, (%edx)")
#define ADC_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X0F # adcw %r9w, (%edi)")
#define ADC_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X0E # adcw %r9w, (%esi)")
#define ADC_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X4D, 0X00 # adcw %r9w, (%ebp)")
#define ADC_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X0C, 0X24 # adcw %r9w, (%esp)")

#define ADC_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X10 # adcw %r10w, (%rax)")
#define ADC_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X13 # adcw %r10w, (%rbx)")
#define ADC_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X11 # adcw %r10w, (%rcx)")
#define ADC_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X12 # adcw %r10w, (%rdx)")
#define ADC_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X17 # adcw %r10w, (%rdi)")
#define ADC_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X16 # adcw %r10w, (%rsi)")
#define ADC_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X55, 0X00 # adcw %r10w, (%rbp)")
#define ADC_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X14, 0X24 # adcw %r10w, (%rsp)")
#define ADC_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X10 # adcw %r10w, (%r8)")
#define ADC_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X11 # adcw %r10w, (%r9)")
#define ADC_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X12 # adcw %r10w, (%r10)")
#define ADC_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X13 # adcw %r10w, (%r11)")
#define ADC_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X14, 0X24 # adcw %r10w, (%r12)")
#define ADC_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X55, 0X00 # adcw %r10w, (%r13)")
#define ADC_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X16 # adcw %r10w, (%r14)")
#define ADC_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X17 # adcw %r10w, (%r15)")
#define ADC_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X10 # adcw %r10w, (%eax)")
#define ADC_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X13 # adcw %r10w, (%ebx)")
#define ADC_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X11 # adcw %r10w, (%ecx)")
#define ADC_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X12 # adcw %r10w, (%edx)")
#define ADC_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X17 # adcw %r10w, (%edi)")
#define ADC_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X16 # adcw %r10w, (%esi)")
#define ADC_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X55, 0X00 # adcw %r10w, (%ebp)")
#define ADC_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X14, 0X24 # adcw %r10w, (%esp)")

#define ADC_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X18 # adcw %r11w, (%rax)")
#define ADC_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1B # adcw %r11w, (%rbx)")
#define ADC_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X19 # adcw %r11w, (%rcx)")
#define ADC_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1A # adcw %r11w, (%rdx)")
#define ADC_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1F # adcw %r11w, (%rdi)")
#define ADC_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1E # adcw %r11w, (%rsi)")
#define ADC_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X5D, 0X00 # adcw %r11w, (%rbp)")
#define ADC_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X1C, 0X24 # adcw %r11w, (%rsp)")
#define ADC_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X18 # adcw %r11w, (%r8)")
#define ADC_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X19 # adcw %r11w, (%r9)")
#define ADC_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X1A # adcw %r11w, (%r10)")
#define ADC_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X1B # adcw %r11w, (%r11)")
#define ADC_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X1C, 0X24 # adcw %r11w, (%r12)")
#define ADC_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X5D, 0X00 # adcw %r11w, (%r13)")
#define ADC_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X1E # adcw %r11w, (%r14)")
#define ADC_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X1F # adcw %r11w, (%r15)")
#define ADC_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X18 # adcw %r11w, (%eax)")
#define ADC_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X1B # adcw %r11w, (%ebx)")
#define ADC_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X19 # adcw %r11w, (%ecx)")
#define ADC_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X1A # adcw %r11w, (%edx)")
#define ADC_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X1F # adcw %r11w, (%edi)")
#define ADC_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X1E # adcw %r11w, (%esi)")
#define ADC_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X5D, 0X00 # adcw %r11w, (%ebp)")
#define ADC_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X1C, 0X24 # adcw %r11w, (%esp)")

#define ADC_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X20 # adcw %r12w, (%rax)")
#define ADC_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X23 # adcw %r12w, (%rbx)")
#define ADC_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X21 # adcw %r12w, (%rcx)")
#define ADC_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X22 # adcw %r12w, (%rdx)")
#define ADC_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X27 # adcw %r12w, (%rdi)")
#define ADC_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X26 # adcw %r12w, (%rsi)")
#define ADC_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X65, 0X00 # adcw %r12w, (%rbp)")
#define ADC_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X24, 0X24 # adcw %r12w, (%rsp)")
#define ADC_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X20 # adcw %r12w, (%r8)")
#define ADC_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X21 # adcw %r12w, (%r9)")
#define ADC_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X22 # adcw %r12w, (%r10)")
#define ADC_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X23 # adcw %r12w, (%r11)")
#define ADC_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X24, 0X24 # adcw %r12w, (%r12)")
#define ADC_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X65, 0X00 # adcw %r12w, (%r13)")
#define ADC_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X26 # adcw %r12w, (%r14)")
#define ADC_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X27 # adcw %r12w, (%r15)")
#define ADC_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X20 # adcw %r12w, (%eax)")
#define ADC_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X23 # adcw %r12w, (%ebx)")
#define ADC_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X21 # adcw %r12w, (%ecx)")
#define ADC_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X22 # adcw %r12w, (%edx)")
#define ADC_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X27 # adcw %r12w, (%edi)")
#define ADC_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X26 # adcw %r12w, (%esi)")
#define ADC_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X65, 0X00 # adcw %r12w, (%ebp)")
#define ADC_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X24, 0X24 # adcw %r12w, (%esp)")

#define ADC_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X28 # adcw %r13w, (%rax)")
#define ADC_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2B # adcw %r13w, (%rbx)")
#define ADC_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X29 # adcw %r13w, (%rcx)")
#define ADC_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2A # adcw %r13w, (%rdx)")
#define ADC_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2F # adcw %r13w, (%rdi)")
#define ADC_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2E # adcw %r13w, (%rsi)")
#define ADC_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X6D, 0X00 # adcw %r13w, (%rbp)")
#define ADC_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X2C, 0X24 # adcw %r13w, (%rsp)")
#define ADC_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X28 # adcw %r13w, (%r8)")
#define ADC_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X29 # adcw %r13w, (%r9)")
#define ADC_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X2A # adcw %r13w, (%r10)")
#define ADC_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X2B # adcw %r13w, (%r11)")
#define ADC_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X2C, 0X24 # adcw %r13w, (%r12)")
#define ADC_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X6D, 0X00 # adcw %r13w, (%r13)")
#define ADC_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X2E # adcw %r13w, (%r14)")
#define ADC_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X2F # adcw %r13w, (%r15)")
#define ADC_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X28 # adcw %r13w, (%eax)")
#define ADC_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X2B # adcw %r13w, (%ebx)")
#define ADC_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X29 # adcw %r13w, (%ecx)")
#define ADC_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X2A # adcw %r13w, (%edx)")
#define ADC_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X2F # adcw %r13w, (%edi)")
#define ADC_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X2E # adcw %r13w, (%esi)")
#define ADC_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X6D, 0X00 # adcw %r13w, (%ebp)")
#define ADC_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X2C, 0X24 # adcw %r13w, (%esp)")

#define ADC_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X30 # adcw %r14w, (%rax)")
#define ADC_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X33 # adcw %r14w, (%rbx)")
#define ADC_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X31 # adcw %r14w, (%rcx)")
#define ADC_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X32 # adcw %r14w, (%rdx)")
#define ADC_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X37 # adcw %r14w, (%rdi)")
#define ADC_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X36 # adcw %r14w, (%rsi)")
#define ADC_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X75, 0X00 # adcw %r14w, (%rbp)")
#define ADC_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X34, 0X24 # adcw %r14w, (%rsp)")
#define ADC_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X30 # adcw %r14w, (%r8)")
#define ADC_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X31 # adcw %r14w, (%r9)")
#define ADC_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X32 # adcw %r14w, (%r10)")
#define ADC_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X33 # adcw %r14w, (%r11)")
#define ADC_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X34, 0X24 # adcw %r14w, (%r12)")
#define ADC_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X75, 0X00 # adcw %r14w, (%r13)")
#define ADC_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X36 # adcw %r14w, (%r14)")
#define ADC_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X37 # adcw %r14w, (%r15)")
#define ADC_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X30 # adcw %r14w, (%eax)")
#define ADC_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X33 # adcw %r14w, (%ebx)")
#define ADC_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X31 # adcw %r14w, (%ecx)")
#define ADC_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X32 # adcw %r14w, (%edx)")
#define ADC_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X37 # adcw %r14w, (%edi)")
#define ADC_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X36 # adcw %r14w, (%esi)")
#define ADC_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X75, 0X00 # adcw %r14w, (%ebp)")
#define ADC_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X34, 0X24 # adcw %r14w, (%esp)")

#define ADC_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X38 # adcw %r15w, (%rax)")
#define ADC_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3B # adcw %r15w, (%rbx)")
#define ADC_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X39 # adcw %r15w, (%rcx)")
#define ADC_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3A # adcw %r15w, (%rdx)")
#define ADC_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3F # adcw %r15w, (%rdi)")
#define ADC_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3E # adcw %r15w, (%rsi)")
#define ADC_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X7D, 0X00 # adcw %r15w, (%rbp)")
#define ADC_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X11, 0X3C, 0X24 # adcw %r15w, (%rsp)")
#define ADC_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X38 # adcw %r15w, (%r8)")
#define ADC_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X39 # adcw %r15w, (%r9)")
#define ADC_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X3A # adcw %r15w, (%r10)")
#define ADC_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X3B # adcw %r15w, (%r11)")
#define ADC_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X3C, 0X24 # adcw %r15w, (%r12)")
#define ADC_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X7D, 0X00 # adcw %r15w, (%r13)")
#define ADC_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X3E # adcw %r15w, (%r14)")
#define ADC_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X11, 0X3F # adcw %r15w, (%r15)")
#define ADC_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X38 # adcw %r15w, (%eax)")
#define ADC_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X3B # adcw %r15w, (%ebx)")
#define ADC_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X39 # adcw %r15w, (%ecx)")
#define ADC_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X3A # adcw %r15w, (%edx)")
#define ADC_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X3F # adcw %r15w, (%edi)")
#define ADC_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X3E # adcw %r15w, (%esi)")
#define ADC_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X7D, 0X00 # adcw %r15w, (%ebp)")
#define ADC_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X3C, 0X24 # adcw %r15w, (%esp)")

#define ADC_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X80 # adcw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X83 # adcw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X81 # adcw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X82 # adcw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X87 # adcw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X86 # adcw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X85 # adcw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X80 # adcw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X81 # adcw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X82 # adcw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X83 # adcw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X85 # adcw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X86 # adcw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X87 # adcw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X80 # adcw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X83 # adcw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X81 # adcw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X82 # adcw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X87 # adcw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X86 # adcw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X85 # adcw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X98 # adcw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9B # adcw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X99 # adcw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9A # adcw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9F # adcw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9E # adcw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9D # adcw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X98 # adcw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X99 # adcw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9A # adcw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9B # adcw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9D # adcw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9E # adcw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X9F # adcw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X98 # adcw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9B # adcw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X99 # adcw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9A # adcw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9F # adcw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9E # adcw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9D # adcw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X88 # adcw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8B # adcw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X89 # adcw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8A # adcw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8F # adcw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8E # adcw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8D # adcw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X88 # adcw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X89 # adcw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8A # adcw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8B # adcw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8D # adcw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8E # adcw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X8F # adcw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X88 # adcw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8B # adcw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X89 # adcw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8A # adcw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8F # adcw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8E # adcw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8D # adcw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X90 # adcw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X93 # adcw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X91 # adcw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X92 # adcw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X97 # adcw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X96 # adcw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X95 # adcw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X90 # adcw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X91 # adcw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X92 # adcw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X93 # adcw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X95 # adcw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X96 # adcw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0X97 # adcw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X90 # adcw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X93 # adcw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X91 # adcw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X92 # adcw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X97 # adcw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X96 # adcw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X95 # adcw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB8 # adcw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBB # adcw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB9 # adcw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBA # adcw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBF # adcw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBE # adcw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBD # adcw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB8 # adcw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB9 # adcw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBA # adcw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBB # adcw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBD # adcw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBE # adcw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XBF # adcw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB8 # adcw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBB # adcw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB9 # adcw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBA # adcw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBF # adcw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBE # adcw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBD # adcw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB0 # adcw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB3 # adcw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB1 # adcw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB2 # adcw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB7 # adcw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB6 # adcw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB5 # adcw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB0 # adcw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB1 # adcw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB2 # adcw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB3 # adcw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB5 # adcw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB6 # adcw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XB7 # adcw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB0 # adcw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB3 # adcw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB1 # adcw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB2 # adcw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB7 # adcw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB6 # adcw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB5 # adcw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA8 # adcw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAB # adcw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA9 # adcw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAA # adcw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAF # adcw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAE # adcw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAD # adcw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA8 # adcw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA9 # adcw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAA # adcw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAB # adcw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAD # adcw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAE # adcw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XAF # adcw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA8 # adcw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAB # adcw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA9 # adcw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAA # adcw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAF # adcw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAE # adcw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAD # adcw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA0 # adcw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA3 # adcw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA1 # adcw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA2 # adcw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA7 # adcw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA6 # adcw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA5 # adcw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA0 # adcw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA1 # adcw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA2 # adcw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA3 # adcw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA5 # adcw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA6 # adcw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X13, 0XA7 # adcw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA0 # adcw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA3 # adcw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA1 # adcw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA2 # adcw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA7 # adcw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA6 # adcw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA5 # adcw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X80 # adcw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X83 # adcw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X81 # adcw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X82 # adcw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X87 # adcw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X86 # adcw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X85 # adcw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X80 # adcw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X81 # adcw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X82 # adcw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X83 # adcw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X85 # adcw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X86 # adcw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X87 # adcw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X80 # adcw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X83 # adcw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X81 # adcw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X82 # adcw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X87 # adcw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X86 # adcw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X85 # adcw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X84, 0X24 # adcw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X88 # adcw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8B # adcw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X89 # adcw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8A # adcw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8F # adcw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8E # adcw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8D # adcw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X88 # adcw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X89 # adcw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8A # adcw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8B # adcw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8D # adcw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8E # adcw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X8F # adcw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X88 # adcw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8B # adcw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X89 # adcw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8A # adcw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8F # adcw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8E # adcw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8D # adcw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X8C, 0X24 # adcw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X90 # adcw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X93 # adcw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X91 # adcw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X92 # adcw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X97 # adcw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X96 # adcw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X95 # adcw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X90 # adcw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X91 # adcw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X92 # adcw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X93 # adcw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X95 # adcw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X96 # adcw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X97 # adcw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X90 # adcw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X93 # adcw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X91 # adcw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X92 # adcw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X97 # adcw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X96 # adcw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X95 # adcw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X94, 0X24 # adcw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X98 # adcw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9B # adcw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X99 # adcw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9A # adcw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9F # adcw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9E # adcw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9D # adcw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X98 # adcw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X99 # adcw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9A # adcw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9B # adcw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9D # adcw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9E # adcw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0X9F # adcw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X98 # adcw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9B # adcw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X99 # adcw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9A # adcw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9F # adcw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9E # adcw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9D # adcw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0X9C, 0X24 # adcw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA0 # adcw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA3 # adcw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA1 # adcw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA2 # adcw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA7 # adcw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA6 # adcw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA5 # adcw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA0 # adcw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA1 # adcw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA2 # adcw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA3 # adcw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA5 # adcw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA6 # adcw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA7 # adcw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA0 # adcw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA3 # adcw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA1 # adcw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA2 # adcw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA7 # adcw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA6 # adcw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA5 # adcw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA4, 0X24 # adcw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA8 # adcw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAB # adcw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XA9 # adcw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAA # adcw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAF # adcw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAE # adcw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAD # adcw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA8 # adcw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XA9 # adcw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAA # adcw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAB # adcw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAD # adcw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAE # adcw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XAF # adcw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA8 # adcw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAB # adcw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XA9 # adcw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAA # adcw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAF # adcw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAE # adcw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAD # adcw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XAC, 0X24 # adcw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB0 # adcw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB3 # adcw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB1 # adcw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB2 # adcw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB7 # adcw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB6 # adcw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB5 # adcw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB0 # adcw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB1 # adcw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB2 # adcw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB3 # adcw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB5 # adcw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB6 # adcw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB7 # adcw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB0 # adcw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB3 # adcw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB1 # adcw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB2 # adcw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB7 # adcw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB6 # adcw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB5 # adcw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB4, 0X24 # adcw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB8 # adcw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBB # adcw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XB9 # adcw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBA # adcw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBF # adcw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBE # adcw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBD # adcw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB8 # adcw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XB9 # adcw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBA # adcw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBB # adcw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBD # adcw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBE # adcw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X13, 0XBF # adcw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB8 # adcw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBB # adcw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XB9 # adcw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBA # adcw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBF # adcw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBE # adcw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBD # adcw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X13, 0XBC, 0X24 # adcw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define ADC_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X80 # adcw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X83 # adcw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X81 # adcw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X82 # adcw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X87 # adcw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X86 # adcw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X85 # adcw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X84, 0X24 # adcw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X80 # adcw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X81 # adcw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X82 # adcw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X83 # adcw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X84, 0X24 # adcw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X85 # adcw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X86 # adcw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X87 # adcw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X80 # adcw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X83 # adcw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X81 # adcw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X82 # adcw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X87 # adcw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X86 # adcw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X85 # adcw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X84, 0X24 # adcw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X98 # adcw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9B # adcw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X99 # adcw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9A # adcw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9F # adcw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9E # adcw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9D # adcw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X9C, 0X24 # adcw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X98 # adcw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X99 # adcw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9A # adcw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9B # adcw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9C, 0X24 # adcw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9D # adcw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9E # adcw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X9F # adcw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X98 # adcw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9B # adcw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X99 # adcw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9A # adcw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9F # adcw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9E # adcw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9D # adcw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X9C, 0X24 # adcw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X88 # adcw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8B # adcw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X89 # adcw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8A # adcw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8F # adcw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8E # adcw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8D # adcw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X8C, 0X24 # adcw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X88 # adcw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X89 # adcw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8A # adcw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8B # adcw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8C, 0X24 # adcw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8D # adcw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8E # adcw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X8F # adcw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X88 # adcw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8B # adcw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X89 # adcw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8A # adcw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8F # adcw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8E # adcw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8D # adcw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X8C, 0X24 # adcw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X90 # adcw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X93 # adcw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X91 # adcw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X92 # adcw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X97 # adcw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X96 # adcw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X95 # adcw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0X94, 0X24 # adcw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X90 # adcw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X91 # adcw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X92 # adcw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X93 # adcw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X94, 0X24 # adcw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X95 # adcw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X96 # adcw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0X97 # adcw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X90 # adcw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X93 # adcw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X91 # adcw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X92 # adcw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X97 # adcw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X96 # adcw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X95 # adcw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0X94, 0X24 # adcw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB8 # adcw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBB # adcw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB9 # adcw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBA # adcw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBF # adcw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBE # adcw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBD # adcw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XBC, 0X24 # adcw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB8 # adcw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB9 # adcw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBA # adcw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBB # adcw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBC, 0X24 # adcw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBD # adcw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBE # adcw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XBF # adcw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB8 # adcw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBB # adcw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB9 # adcw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBA # adcw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBF # adcw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBE # adcw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBD # adcw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XBC, 0X24 # adcw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB0 # adcw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB3 # adcw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB1 # adcw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB2 # adcw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB7 # adcw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB6 # adcw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB5 # adcw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XB4, 0X24 # adcw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB0 # adcw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB1 # adcw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB2 # adcw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB3 # adcw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB4, 0X24 # adcw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB5 # adcw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB6 # adcw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XB7 # adcw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB0 # adcw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB3 # adcw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB1 # adcw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB2 # adcw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB7 # adcw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB6 # adcw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB5 # adcw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XB4, 0X24 # adcw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA8 # adcw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAB # adcw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA9 # adcw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAA # adcw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAF # adcw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAE # adcw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAD # adcw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XAC, 0X24 # adcw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA8 # adcw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA9 # adcw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAA # adcw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAB # adcw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAC, 0X24 # adcw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAD # adcw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAE # adcw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XAF # adcw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA8 # adcw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAB # adcw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA9 # adcw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAA # adcw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAF # adcw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAE # adcw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAD # adcw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XAC, 0X24 # adcw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA0 # adcw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA3 # adcw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA1 # adcw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA2 # adcw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X11, 0XA4, 0X24 # adcw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA0 # adcw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA1 # adcw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA2 # adcw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA3 # adcw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA4, 0X24 # adcw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA0 # adcw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA3 # adcw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA1 # adcw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA2 # adcw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA7 # adcw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA6 # adcw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA5 # adcw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X11, 0XA4, 0X24 # adcw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X80 # adcw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X83 # adcw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X81 # adcw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X82 # adcw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X87 # adcw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X86 # adcw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X85 # adcw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X84, 0X24 # adcw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X80 # adcw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X81 # adcw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X82 # adcw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X83 # adcw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X84, 0X24 # adcw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X85 # adcw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X86 # adcw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X87 # adcw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X80 # adcw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X83 # adcw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X81 # adcw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X82 # adcw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X87 # adcw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X86 # adcw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X85 # adcw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X84, 0X24 # adcw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X88 # adcw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8B # adcw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X89 # adcw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8A # adcw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8F # adcw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8E # adcw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8D # adcw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X8C, 0X24 # adcw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X88 # adcw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X89 # adcw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8A # adcw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8B # adcw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8C, 0X24 # adcw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8D # adcw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8E # adcw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X8F # adcw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X88 # adcw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8B # adcw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X89 # adcw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8A # adcw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8F # adcw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8E # adcw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8D # adcw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X8C, 0X24 # adcw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X90 # adcw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X93 # adcw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X91 # adcw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X92 # adcw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X97 # adcw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X96 # adcw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X95 # adcw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X94, 0X24 # adcw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X90 # adcw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X91 # adcw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X92 # adcw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X93 # adcw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X94, 0X24 # adcw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X95 # adcw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X96 # adcw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X97 # adcw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X90 # adcw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X93 # adcw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X91 # adcw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X92 # adcw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X97 # adcw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X96 # adcw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X95 # adcw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X94, 0X24 # adcw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X98 # adcw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9B # adcw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X99 # adcw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9A # adcw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9F # adcw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9E # adcw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9D # adcw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0X9C, 0X24 # adcw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X98 # adcw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X99 # adcw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9A # adcw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9B # adcw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9C, 0X24 # adcw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9D # adcw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9E # adcw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0X9F # adcw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X98 # adcw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9B # adcw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X99 # adcw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9A # adcw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9F # adcw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9E # adcw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9D # adcw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0X9C, 0X24 # adcw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA0 # adcw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA3 # adcw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA1 # adcw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA2 # adcw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA7 # adcw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA6 # adcw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA5 # adcw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA4, 0X24 # adcw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA0 # adcw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA1 # adcw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA2 # adcw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA3 # adcw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA4, 0X24 # adcw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA5 # adcw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA6 # adcw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA7 # adcw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA0 # adcw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA3 # adcw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA1 # adcw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA2 # adcw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA7 # adcw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA6 # adcw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA5 # adcw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA4, 0X24 # adcw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA8 # adcw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAB # adcw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XA9 # adcw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAA # adcw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAF # adcw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAE # adcw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAD # adcw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XAC, 0X24 # adcw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA8 # adcw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XA9 # adcw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAA # adcw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAB # adcw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAC, 0X24 # adcw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAD # adcw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAE # adcw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XAF # adcw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA8 # adcw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAB # adcw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XA9 # adcw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAA # adcw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAF # adcw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAE # adcw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAD # adcw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XAC, 0X24 # adcw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB0 # adcw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB3 # adcw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB1 # adcw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB2 # adcw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB7 # adcw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB6 # adcw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB5 # adcw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB4, 0X24 # adcw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB0 # adcw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB1 # adcw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB2 # adcw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB3 # adcw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB4, 0X24 # adcw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB5 # adcw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB6 # adcw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB7 # adcw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB0 # adcw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB3 # adcw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB1 # adcw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB2 # adcw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB7 # adcw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB6 # adcw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB5 # adcw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB4, 0X24 # adcw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB8 # adcw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBB # adcw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XB9 # adcw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBA # adcw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBF # adcw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBE # adcw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBD # adcw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X11, 0XBC, 0X24 # adcw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB8 # adcw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XB9 # adcw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBA # adcw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBB # adcw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBC, 0X24 # adcw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBD # adcw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBE # adcw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X11, 0XBF # adcw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB8 # adcw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBB # adcw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XB9 # adcw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBA # adcw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBF # adcw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBE # adcw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBD # adcw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X11, 0XBC, 0X24 # adcw %r15w, " _(VALUE) "(%esp)")\
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
