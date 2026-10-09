#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define TEST_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X06 # testb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1E # testb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0E # testb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X16 # testb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X06 # testb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1E # testb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0E # testb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X16 # testb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AL_FROM_PTR_BX CMT_ASM(".byte 0X84, 0X07 # testb (%bx), %al")
#define TEST_AL_FROM_PTR_BP CMT_ASM(".byte 0X84, 0X46, 0X00 # testb (%bp), %al")
#define TEST_AL_FROM_PTR_SI CMT_ASM(".byte 0X84, 0X04 # testb (%si), %al")
#define TEST_AL_FROM_PTR_DI CMT_ASM(".byte 0X84, 0X05 # testb (%di), %al")

#define TEST_BL_FROM_PTR_BX CMT_ASM(".byte 0X84, 0X1F # testb (%bx), %bl")
#define TEST_BL_FROM_PTR_BP CMT_ASM(".byte 0X84, 0X5E, 0X00 # testb (%bp), %bl")
#define TEST_BL_FROM_PTR_SI CMT_ASM(".byte 0X84, 0X1C # testb (%si), %bl")
#define TEST_BL_FROM_PTR_DI CMT_ASM(".byte 0X84, 0X1D # testb (%di), %bl")

#define TEST_CL_FROM_PTR_BX CMT_ASM(".byte 0X84, 0X0F # testb (%bx), %cl")
#define TEST_CL_FROM_PTR_BP CMT_ASM(".byte 0X84, 0X4E, 0X00 # testb (%bp), %cl")
#define TEST_CL_FROM_PTR_SI CMT_ASM(".byte 0X84, 0X0C # testb (%si), %cl")
#define TEST_CL_FROM_PTR_DI CMT_ASM(".byte 0X84, 0X0D # testb (%di), %cl")

#define TEST_DL_FROM_PTR_BX CMT_ASM(".byte 0X84, 0X17 # testb (%bx), %dl")
#define TEST_DL_FROM_PTR_BP CMT_ASM(".byte 0X84, 0X56, 0X00 # testb (%bp), %dl")
#define TEST_DL_FROM_PTR_SI CMT_ASM(".byte 0X84, 0X14 # testb (%si), %dl")
#define TEST_DL_FROM_PTR_DI CMT_ASM(".byte 0X84, 0X15 # testb (%di), %dl")

#define TEST_AL_TO_PTR_BX CMT_ASM(".byte 0X84, 0X07 # testb %al, (%bx)")
#define TEST_AL_TO_PTR_BP CMT_ASM(".byte 0X84, 0X46, 0X00 # testb %al, (%bp)")
#define TEST_AL_TO_PTR_SI CMT_ASM(".byte 0X84, 0X04 # testb %al, (%si)")
#define TEST_AL_TO_PTR_DI CMT_ASM(".byte 0X84, 0X05 # testb %al, (%di)")

#define TEST_BL_TO_PTR_BX CMT_ASM(".byte 0X84, 0X1F # testb %bl, (%bx)")
#define TEST_BL_TO_PTR_BP CMT_ASM(".byte 0X84, 0X5E, 0X00 # testb %bl, (%bp)")
#define TEST_BL_TO_PTR_SI CMT_ASM(".byte 0X84, 0X1C # testb %bl, (%si)")
#define TEST_BL_TO_PTR_DI CMT_ASM(".byte 0X84, 0X1D # testb %bl, (%di)")

#define TEST_CL_TO_PTR_BX CMT_ASM(".byte 0X84, 0X0F # testb %cl, (%bx)")
#define TEST_CL_TO_PTR_BP CMT_ASM(".byte 0X84, 0X4E, 0X00 # testb %cl, (%bp)")
#define TEST_CL_TO_PTR_SI CMT_ASM(".byte 0X84, 0X0C # testb %cl, (%si)")
#define TEST_CL_TO_PTR_DI CMT_ASM(".byte 0X84, 0X0D # testb %cl, (%di)")

#define TEST_DL_TO_PTR_BX CMT_ASM(".byte 0X84, 0X17 # testb %dl, (%bx)")
#define TEST_DL_TO_PTR_BP CMT_ASM(".byte 0X84, 0X56, 0X00 # testb %dl, (%bp)")
#define TEST_DL_TO_PTR_SI CMT_ASM(".byte 0X84, 0X14 # testb %dl, (%si)")
#define TEST_DL_TO_PTR_DI CMT_ASM(".byte 0X84, 0X15 # testb %dl, (%di)")

#define TEST_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84 # testb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C # testb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C # testb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94 # testb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84 # testb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C # testb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C # testb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94 # testb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X05 # testb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1D # testb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0D # testb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X15 # testb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X05 # testb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1D # testb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0D # testb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X15 # testb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AL_FROM_PTR_EAX CMT_ASM(".byte 0X84, 0X00 # testb (%eax), %al")
#define TEST_AL_FROM_PTR_EBX CMT_ASM(".byte 0X84, 0X03 # testb (%ebx), %al")
#define TEST_AL_FROM_PTR_ECX CMT_ASM(".byte 0X84, 0X01 # testb (%ecx), %al")
#define TEST_AL_FROM_PTR_EDX CMT_ASM(".byte 0X84, 0X02 # testb (%edx), %al")
#define TEST_AL_FROM_PTR_EDI CMT_ASM(".byte 0X84, 0X07 # testb (%edi), %al")
#define TEST_AL_FROM_PTR_ESI CMT_ASM(".byte 0X84, 0X06 # testb (%esi), %al")
#define TEST_AL_FROM_PTR_EBP CMT_ASM(".byte 0X84, 0X45, 0X00 # testb (%ebp), %al")
#define TEST_AL_FROM_PTR_ESP CMT_ASM(".byte 0X84, 0X04, 0X24 # testb (%esp), %al")
#define TEST_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X07 # testb (%bx), %al")
#define TEST_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X46, 0X00 # testb (%bp), %al")
#define TEST_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X04 # testb (%si), %al")
#define TEST_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X05 # testb (%di), %al")

#define TEST_BL_FROM_PTR_EAX CMT_ASM(".byte 0X84, 0X18 # testb (%eax), %bl")
#define TEST_BL_FROM_PTR_EBX CMT_ASM(".byte 0X84, 0X1B # testb (%ebx), %bl")
#define TEST_BL_FROM_PTR_ECX CMT_ASM(".byte 0X84, 0X19 # testb (%ecx), %bl")
#define TEST_BL_FROM_PTR_EDX CMT_ASM(".byte 0X84, 0X1A # testb (%edx), %bl")
#define TEST_BL_FROM_PTR_EDI CMT_ASM(".byte 0X84, 0X1F # testb (%edi), %bl")
#define TEST_BL_FROM_PTR_ESI CMT_ASM(".byte 0X84, 0X1E # testb (%esi), %bl")
#define TEST_BL_FROM_PTR_EBP CMT_ASM(".byte 0X84, 0X5D, 0X00 # testb (%ebp), %bl")
#define TEST_BL_FROM_PTR_ESP CMT_ASM(".byte 0X84, 0X1C, 0X24 # testb (%esp), %bl")
#define TEST_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X1F # testb (%bx), %bl")
#define TEST_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X5E, 0X00 # testb (%bp), %bl")
#define TEST_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X1C # testb (%si), %bl")
#define TEST_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X1D # testb (%di), %bl")

#define TEST_CL_FROM_PTR_EAX CMT_ASM(".byte 0X84, 0X08 # testb (%eax), %cl")
#define TEST_CL_FROM_PTR_EBX CMT_ASM(".byte 0X84, 0X0B # testb (%ebx), %cl")
#define TEST_CL_FROM_PTR_ECX CMT_ASM(".byte 0X84, 0X09 # testb (%ecx), %cl")
#define TEST_CL_FROM_PTR_EDX CMT_ASM(".byte 0X84, 0X0A # testb (%edx), %cl")
#define TEST_CL_FROM_PTR_EDI CMT_ASM(".byte 0X84, 0X0F # testb (%edi), %cl")
#define TEST_CL_FROM_PTR_ESI CMT_ASM(".byte 0X84, 0X0E # testb (%esi), %cl")
#define TEST_CL_FROM_PTR_EBP CMT_ASM(".byte 0X84, 0X4D, 0X00 # testb (%ebp), %cl")
#define TEST_CL_FROM_PTR_ESP CMT_ASM(".byte 0X84, 0X0C, 0X24 # testb (%esp), %cl")
#define TEST_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X0F # testb (%bx), %cl")
#define TEST_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X4E, 0X00 # testb (%bp), %cl")
#define TEST_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X0C # testb (%si), %cl")
#define TEST_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X0D # testb (%di), %cl")

#define TEST_DL_FROM_PTR_EAX CMT_ASM(".byte 0X84, 0X10 # testb (%eax), %dl")
#define TEST_DL_FROM_PTR_EBX CMT_ASM(".byte 0X84, 0X13 # testb (%ebx), %dl")
#define TEST_DL_FROM_PTR_ECX CMT_ASM(".byte 0X84, 0X11 # testb (%ecx), %dl")
#define TEST_DL_FROM_PTR_EDX CMT_ASM(".byte 0X84, 0X12 # testb (%edx), %dl")
#define TEST_DL_FROM_PTR_EDI CMT_ASM(".byte 0X84, 0X17 # testb (%edi), %dl")
#define TEST_DL_FROM_PTR_ESI CMT_ASM(".byte 0X84, 0X16 # testb (%esi), %dl")
#define TEST_DL_FROM_PTR_EBP CMT_ASM(".byte 0X84, 0X55, 0X00 # testb (%ebp), %dl")
#define TEST_DL_FROM_PTR_ESP CMT_ASM(".byte 0X84, 0X14, 0X24 # testb (%esp), %dl")
#define TEST_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X17 # testb (%bx), %dl")
#define TEST_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X56, 0X00 # testb (%bp), %dl")
#define TEST_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X14 # testb (%si), %dl")
#define TEST_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X15 # testb (%di), %dl")

#define TEST_AL_TO_PTR_EAX CMT_ASM(".byte 0X84, 0X00 # testb %al, (%eax)")
#define TEST_AL_TO_PTR_EBX CMT_ASM(".byte 0X84, 0X03 # testb %al, (%ebx)")
#define TEST_AL_TO_PTR_ECX CMT_ASM(".byte 0X84, 0X01 # testb %al, (%ecx)")
#define TEST_AL_TO_PTR_EDX CMT_ASM(".byte 0X84, 0X02 # testb %al, (%edx)")
#define TEST_AL_TO_PTR_EDI CMT_ASM(".byte 0X84, 0X07 # testb %al, (%edi)")
#define TEST_AL_TO_PTR_ESI CMT_ASM(".byte 0X84, 0X06 # testb %al, (%esi)")
#define TEST_AL_TO_PTR_EBP CMT_ASM(".byte 0X84, 0X45, 0X00 # testb %al, (%ebp)")
#define TEST_AL_TO_PTR_ESP CMT_ASM(".byte 0X84, 0X04, 0X24 # testb %al, (%esp)")
#define TEST_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X07 # testb %al, (%bx)")
#define TEST_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X46, 0X00 # testb %al, (%bp)")
#define TEST_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X04 # testb %al, (%si)")
#define TEST_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X05 # testb %al, (%di)")

#define TEST_BL_TO_PTR_EAX CMT_ASM(".byte 0X84, 0X18 # testb %bl, (%eax)")
#define TEST_BL_TO_PTR_EBX CMT_ASM(".byte 0X84, 0X1B # testb %bl, (%ebx)")
#define TEST_BL_TO_PTR_ECX CMT_ASM(".byte 0X84, 0X19 # testb %bl, (%ecx)")
#define TEST_BL_TO_PTR_EDX CMT_ASM(".byte 0X84, 0X1A # testb %bl, (%edx)")
#define TEST_BL_TO_PTR_EDI CMT_ASM(".byte 0X84, 0X1F # testb %bl, (%edi)")
#define TEST_BL_TO_PTR_ESI CMT_ASM(".byte 0X84, 0X1E # testb %bl, (%esi)")
#define TEST_BL_TO_PTR_EBP CMT_ASM(".byte 0X84, 0X5D, 0X00 # testb %bl, (%ebp)")
#define TEST_BL_TO_PTR_ESP CMT_ASM(".byte 0X84, 0X1C, 0X24 # testb %bl, (%esp)")
#define TEST_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X1F # testb %bl, (%bx)")
#define TEST_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X5E, 0X00 # testb %bl, (%bp)")
#define TEST_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X1C # testb %bl, (%si)")
#define TEST_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X1D # testb %bl, (%di)")

#define TEST_CL_TO_PTR_EAX CMT_ASM(".byte 0X84, 0X08 # testb %cl, (%eax)")
#define TEST_CL_TO_PTR_EBX CMT_ASM(".byte 0X84, 0X0B # testb %cl, (%ebx)")
#define TEST_CL_TO_PTR_ECX CMT_ASM(".byte 0X84, 0X09 # testb %cl, (%ecx)")
#define TEST_CL_TO_PTR_EDX CMT_ASM(".byte 0X84, 0X0A # testb %cl, (%edx)")
#define TEST_CL_TO_PTR_EDI CMT_ASM(".byte 0X84, 0X0F # testb %cl, (%edi)")
#define TEST_CL_TO_PTR_ESI CMT_ASM(".byte 0X84, 0X0E # testb %cl, (%esi)")
#define TEST_CL_TO_PTR_EBP CMT_ASM(".byte 0X84, 0X4D, 0X00 # testb %cl, (%ebp)")
#define TEST_CL_TO_PTR_ESP CMT_ASM(".byte 0X84, 0X0C, 0X24 # testb %cl, (%esp)")
#define TEST_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X0F # testb %cl, (%bx)")
#define TEST_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X4E, 0X00 # testb %cl, (%bp)")
#define TEST_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X0C # testb %cl, (%si)")
#define TEST_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X0D # testb %cl, (%di)")

#define TEST_DL_TO_PTR_EAX CMT_ASM(".byte 0X84, 0X10 # testb %dl, (%eax)")
#define TEST_DL_TO_PTR_EBX CMT_ASM(".byte 0X84, 0X13 # testb %dl, (%ebx)")
#define TEST_DL_TO_PTR_ECX CMT_ASM(".byte 0X84, 0X11 # testb %dl, (%ecx)")
#define TEST_DL_TO_PTR_EDX CMT_ASM(".byte 0X84, 0X12 # testb %dl, (%edx)")
#define TEST_DL_TO_PTR_EDI CMT_ASM(".byte 0X84, 0X17 # testb %dl, (%edi)")
#define TEST_DL_TO_PTR_ESI CMT_ASM(".byte 0X84, 0X16 # testb %dl, (%esi)")
#define TEST_DL_TO_PTR_EBP CMT_ASM(".byte 0X84, 0X55, 0X00 # testb %dl, (%ebp)")
#define TEST_DL_TO_PTR_ESP CMT_ASM(".byte 0X84, 0X14, 0X24 # testb %dl, (%esp)")
#define TEST_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X84, 0X17 # testb %dl, (%bx)")
#define TEST_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X84, 0X56, 0X00 # testb %dl, (%bp)")
#define TEST_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X84, 0X14 # testb %dl, (%si)")
#define TEST_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X84, 0X15 # testb %dl, (%di)")

#define TEST_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X80 # testb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X83 # testb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X81 # testb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X82 # testb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84, 0X24 # testb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X87 # testb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X86 # testb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X84 # testb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X85 # testb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X98 # testb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9B # testb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X99 # testb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9A # testb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9F # testb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9E # testb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9C # testb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9D # testb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X88 # testb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8B # testb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X89 # testb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8A # testb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8F # testb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8E # testb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8C # testb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8D # testb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X90 # testb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X93 # testb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X91 # testb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X92 # testb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94, 0X24 # testb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X97 # testb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X96 # testb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X94 # testb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X95 # testb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X80 # testb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X83 # testb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X81 # testb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X82 # testb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84, 0X24 # testb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X87 # testb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X86 # testb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X84 # testb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X85 # testb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X98 # testb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9B # testb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X99 # testb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9A # testb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C, 0X24 # testb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9F # testb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9E # testb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9C # testb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9D # testb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X88 # testb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8B # testb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X89 # testb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8A # testb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C, 0X24 # testb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8F # testb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8E # testb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8C # testb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8D # testb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X90 # testb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X93 # testb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X91 # testb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X92 # testb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94, 0X24 # testb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X97 # testb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X96 # testb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X94 # testb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X95 # testb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X04, 0X25 # testb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1C, 0X25 # testb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0C, 0X25 # testb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X14, 0X25 # testb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X3C, 0X25 # testb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X34, 0X25 # testb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X2C, 0X25 # testb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X24, 0X25 # testb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X04, 0X25 # testb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X0C, 0X25 # testb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X14, 0X25 # testb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X1C, 0X25 # testb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X24, 0X25 # testb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X2C, 0X25 # testb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X34, 0X25 # testb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X3C, 0X25 # testb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X04, 0X25 # testb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X1C, 0X25 # testb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X0C, 0X25 # testb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X84, 0X14, 0X25 # testb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X3C, 0X25 # testb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X34, 0X25 # testb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X2C, 0X25 # testb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0X24, 0X25 # testb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X04, 0X25 # testb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X0C, 0X25 # testb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X14, 0X25 # testb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X1C, 0X25 # testb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X24, 0X25 # testb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X2C, 0X25 # testb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X34, 0X25 # testb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X3C, 0X25 # testb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AL_FROM_PTR_RAX CMT_ASM(".byte 0X84, 0X00 # testb (%rax), %al")
#define TEST_AL_FROM_PTR_RBX CMT_ASM(".byte 0X84, 0X03 # testb (%rbx), %al")
#define TEST_AL_FROM_PTR_RCX CMT_ASM(".byte 0X84, 0X01 # testb (%rcx), %al")
#define TEST_AL_FROM_PTR_RDX CMT_ASM(".byte 0X84, 0X02 # testb (%rdx), %al")
#define TEST_AL_FROM_PTR_RDI CMT_ASM(".byte 0X84, 0X07 # testb (%rdi), %al")
#define TEST_AL_FROM_PTR_RSI CMT_ASM(".byte 0X84, 0X06 # testb (%rsi), %al")
#define TEST_AL_FROM_PTR_RBP CMT_ASM(".byte 0X84, 0X45, 0X00 # testb (%rbp), %al")
#define TEST_AL_FROM_PTR_RSP CMT_ASM(".byte 0X84, 0X04, 0X24 # testb (%rsp), %al")
#define TEST_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X00 # testb (%r8), %al")
#define TEST_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X01 # testb (%r9), %al")
#define TEST_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X02 # testb (%r10), %al")
#define TEST_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X03 # testb (%r11), %al")
#define TEST_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X04, 0X24 # testb (%r12), %al")
#define TEST_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X45, 0X00 # testb (%r13), %al")
#define TEST_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X06 # testb (%r14), %al")
#define TEST_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X07 # testb (%r15), %al")
#define TEST_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X00 # testb (%eax), %al")
#define TEST_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X03 # testb (%ebx), %al")
#define TEST_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X01 # testb (%ecx), %al")
#define TEST_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X02 # testb (%edx), %al")
#define TEST_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X07 # testb (%edi), %al")
#define TEST_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X06 # testb (%esi), %al")
#define TEST_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X45, 0X00 # testb (%ebp), %al")
#define TEST_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X04, 0X24 # testb (%esp), %al")

#define TEST_BL_FROM_PTR_RAX CMT_ASM(".byte 0X84, 0X18 # testb (%rax), %bl")
#define TEST_BL_FROM_PTR_RBX CMT_ASM(".byte 0X84, 0X1B # testb (%rbx), %bl")
#define TEST_BL_FROM_PTR_RCX CMT_ASM(".byte 0X84, 0X19 # testb (%rcx), %bl")
#define TEST_BL_FROM_PTR_RDX CMT_ASM(".byte 0X84, 0X1A # testb (%rdx), %bl")
#define TEST_BL_FROM_PTR_RDI CMT_ASM(".byte 0X84, 0X1F # testb (%rdi), %bl")
#define TEST_BL_FROM_PTR_RSI CMT_ASM(".byte 0X84, 0X1E # testb (%rsi), %bl")
#define TEST_BL_FROM_PTR_RBP CMT_ASM(".byte 0X84, 0X5D, 0X00 # testb (%rbp), %bl")
#define TEST_BL_FROM_PTR_RSP CMT_ASM(".byte 0X84, 0X1C, 0X24 # testb (%rsp), %bl")
#define TEST_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X18 # testb (%r8), %bl")
#define TEST_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X19 # testb (%r9), %bl")
#define TEST_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X1A # testb (%r10), %bl")
#define TEST_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X1B # testb (%r11), %bl")
#define TEST_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X1C, 0X24 # testb (%r12), %bl")
#define TEST_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X5D, 0X00 # testb (%r13), %bl")
#define TEST_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X1E # testb (%r14), %bl")
#define TEST_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X1F # testb (%r15), %bl")
#define TEST_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X18 # testb (%eax), %bl")
#define TEST_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X1B # testb (%ebx), %bl")
#define TEST_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X19 # testb (%ecx), %bl")
#define TEST_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X1A # testb (%edx), %bl")
#define TEST_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X1F # testb (%edi), %bl")
#define TEST_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X1E # testb (%esi), %bl")
#define TEST_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X5D, 0X00 # testb (%ebp), %bl")
#define TEST_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X1C, 0X24 # testb (%esp), %bl")

#define TEST_CL_FROM_PTR_RAX CMT_ASM(".byte 0X84, 0X08 # testb (%rax), %cl")
#define TEST_CL_FROM_PTR_RBX CMT_ASM(".byte 0X84, 0X0B # testb (%rbx), %cl")
#define TEST_CL_FROM_PTR_RCX CMT_ASM(".byte 0X84, 0X09 # testb (%rcx), %cl")
#define TEST_CL_FROM_PTR_RDX CMT_ASM(".byte 0X84, 0X0A # testb (%rdx), %cl")
#define TEST_CL_FROM_PTR_RDI CMT_ASM(".byte 0X84, 0X0F # testb (%rdi), %cl")
#define TEST_CL_FROM_PTR_RSI CMT_ASM(".byte 0X84, 0X0E # testb (%rsi), %cl")
#define TEST_CL_FROM_PTR_RBP CMT_ASM(".byte 0X84, 0X4D, 0X00 # testb (%rbp), %cl")
#define TEST_CL_FROM_PTR_RSP CMT_ASM(".byte 0X84, 0X0C, 0X24 # testb (%rsp), %cl")
#define TEST_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X08 # testb (%r8), %cl")
#define TEST_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X09 # testb (%r9), %cl")
#define TEST_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X0A # testb (%r10), %cl")
#define TEST_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X0B # testb (%r11), %cl")
#define TEST_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X0C, 0X24 # testb (%r12), %cl")
#define TEST_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X4D, 0X00 # testb (%r13), %cl")
#define TEST_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X0E # testb (%r14), %cl")
#define TEST_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X0F # testb (%r15), %cl")
#define TEST_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X08 # testb (%eax), %cl")
#define TEST_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X0B # testb (%ebx), %cl")
#define TEST_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X09 # testb (%ecx), %cl")
#define TEST_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X0A # testb (%edx), %cl")
#define TEST_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X0F # testb (%edi), %cl")
#define TEST_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X0E # testb (%esi), %cl")
#define TEST_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X4D, 0X00 # testb (%ebp), %cl")
#define TEST_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X0C, 0X24 # testb (%esp), %cl")

#define TEST_DL_FROM_PTR_RAX CMT_ASM(".byte 0X84, 0X10 # testb (%rax), %dl")
#define TEST_DL_FROM_PTR_RBX CMT_ASM(".byte 0X84, 0X13 # testb (%rbx), %dl")
#define TEST_DL_FROM_PTR_RCX CMT_ASM(".byte 0X84, 0X11 # testb (%rcx), %dl")
#define TEST_DL_FROM_PTR_RDX CMT_ASM(".byte 0X84, 0X12 # testb (%rdx), %dl")
#define TEST_DL_FROM_PTR_RDI CMT_ASM(".byte 0X84, 0X17 # testb (%rdi), %dl")
#define TEST_DL_FROM_PTR_RSI CMT_ASM(".byte 0X84, 0X16 # testb (%rsi), %dl")
#define TEST_DL_FROM_PTR_RBP CMT_ASM(".byte 0X84, 0X55, 0X00 # testb (%rbp), %dl")
#define TEST_DL_FROM_PTR_RSP CMT_ASM(".byte 0X84, 0X14, 0X24 # testb (%rsp), %dl")
#define TEST_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X10 # testb (%r8), %dl")
#define TEST_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X11 # testb (%r9), %dl")
#define TEST_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X12 # testb (%r10), %dl")
#define TEST_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X13 # testb (%r11), %dl")
#define TEST_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X14, 0X24 # testb (%r12), %dl")
#define TEST_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X55, 0X00 # testb (%r13), %dl")
#define TEST_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X16 # testb (%r14), %dl")
#define TEST_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X17 # testb (%r15), %dl")
#define TEST_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X10 # testb (%eax), %dl")
#define TEST_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X13 # testb (%ebx), %dl")
#define TEST_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X11 # testb (%ecx), %dl")
#define TEST_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X12 # testb (%edx), %dl")
#define TEST_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X17 # testb (%edi), %dl")
#define TEST_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X16 # testb (%esi), %dl")
#define TEST_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X55, 0X00 # testb (%ebp), %dl")
#define TEST_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X14, 0X24 # testb (%esp), %dl")

#define TEST_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X38 # testb (%rax), %dil")
#define TEST_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X3B # testb (%rbx), %dil")
#define TEST_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X39 # testb (%rcx), %dil")
#define TEST_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X3A # testb (%rdx), %dil")
#define TEST_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X3F # testb (%rdi), %dil")
#define TEST_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X3E # testb (%rsi), %dil")
#define TEST_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X7D, 0X00 # testb (%rbp), %dil")
#define TEST_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X3C, 0X24 # testb (%rsp), %dil")
#define TEST_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X38 # testb (%r8), %dil")
#define TEST_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X39 # testb (%r9), %dil")
#define TEST_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X3A # testb (%r10), %dil")
#define TEST_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X3B # testb (%r11), %dil")
#define TEST_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X3C, 0X24 # testb (%r12), %dil")
#define TEST_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X7D, 0X00 # testb (%r13), %dil")
#define TEST_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X3E # testb (%r14), %dil")
#define TEST_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X3F # testb (%r15), %dil")
#define TEST_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X38 # testb (%eax), %dil")
#define TEST_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3B # testb (%ebx), %dil")
#define TEST_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X39 # testb (%ecx), %dil")
#define TEST_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3A # testb (%edx), %dil")
#define TEST_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3F # testb (%edi), %dil")
#define TEST_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3E # testb (%esi), %dil")
#define TEST_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X7D, 0X00 # testb (%ebp), %dil")
#define TEST_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3C, 0X24 # testb (%esp), %dil")

#define TEST_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X30 # testb (%rax), %sil")
#define TEST_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X33 # testb (%rbx), %sil")
#define TEST_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X31 # testb (%rcx), %sil")
#define TEST_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X32 # testb (%rdx), %sil")
#define TEST_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X37 # testb (%rdi), %sil")
#define TEST_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X36 # testb (%rsi), %sil")
#define TEST_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X75, 0X00 # testb (%rbp), %sil")
#define TEST_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X34, 0X24 # testb (%rsp), %sil")
#define TEST_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X30 # testb (%r8), %sil")
#define TEST_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X31 # testb (%r9), %sil")
#define TEST_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X32 # testb (%r10), %sil")
#define TEST_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X33 # testb (%r11), %sil")
#define TEST_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X34, 0X24 # testb (%r12), %sil")
#define TEST_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X75, 0X00 # testb (%r13), %sil")
#define TEST_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X36 # testb (%r14), %sil")
#define TEST_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X37 # testb (%r15), %sil")
#define TEST_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X30 # testb (%eax), %sil")
#define TEST_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X33 # testb (%ebx), %sil")
#define TEST_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X31 # testb (%ecx), %sil")
#define TEST_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X32 # testb (%edx), %sil")
#define TEST_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X37 # testb (%edi), %sil")
#define TEST_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X36 # testb (%esi), %sil")
#define TEST_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X75, 0X00 # testb (%ebp), %sil")
#define TEST_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X34, 0X24 # testb (%esp), %sil")

#define TEST_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X28 # testb (%rax), %bpl")
#define TEST_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X2B # testb (%rbx), %bpl")
#define TEST_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X29 # testb (%rcx), %bpl")
#define TEST_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X2A # testb (%rdx), %bpl")
#define TEST_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X2F # testb (%rdi), %bpl")
#define TEST_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X2E # testb (%rsi), %bpl")
#define TEST_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X6D, 0X00 # testb (%rbp), %bpl")
#define TEST_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X2C, 0X24 # testb (%rsp), %bpl")
#define TEST_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X28 # testb (%r8), %bpl")
#define TEST_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X29 # testb (%r9), %bpl")
#define TEST_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X2A # testb (%r10), %bpl")
#define TEST_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X2B # testb (%r11), %bpl")
#define TEST_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X2C, 0X24 # testb (%r12), %bpl")
#define TEST_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X6D, 0X00 # testb (%r13), %bpl")
#define TEST_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X2E # testb (%r14), %bpl")
#define TEST_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X2F # testb (%r15), %bpl")
#define TEST_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X28 # testb (%eax), %bpl")
#define TEST_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2B # testb (%ebx), %bpl")
#define TEST_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X29 # testb (%ecx), %bpl")
#define TEST_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2A # testb (%edx), %bpl")
#define TEST_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2F # testb (%edi), %bpl")
#define TEST_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2E # testb (%esi), %bpl")
#define TEST_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X6D, 0X00 # testb (%ebp), %bpl")
#define TEST_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2C, 0X24 # testb (%esp), %bpl")

#define TEST_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X20 # testb (%rax), %spl")
#define TEST_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X23 # testb (%rbx), %spl")
#define TEST_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X21 # testb (%rcx), %spl")
#define TEST_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X22 # testb (%rdx), %spl")
#define TEST_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X27 # testb (%rdi), %spl")
#define TEST_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X26 # testb (%rsi), %spl")
#define TEST_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X65, 0X00 # testb (%rbp), %spl")
#define TEST_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X24, 0X24 # testb (%rsp), %spl")
#define TEST_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X20 # testb (%r8), %spl")
#define TEST_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X21 # testb (%r9), %spl")
#define TEST_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X22 # testb (%r10), %spl")
#define TEST_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X23 # testb (%r11), %spl")
#define TEST_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X24, 0X24 # testb (%r12), %spl")
#define TEST_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X65, 0X00 # testb (%r13), %spl")
#define TEST_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X26 # testb (%r14), %spl")
#define TEST_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X27 # testb (%r15), %spl")
#define TEST_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X20 # testb (%eax), %spl")
#define TEST_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X23 # testb (%ebx), %spl")
#define TEST_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X21 # testb (%ecx), %spl")
#define TEST_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X22 # testb (%edx), %spl")
#define TEST_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X27 # testb (%edi), %spl")
#define TEST_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X26 # testb (%esi), %spl")
#define TEST_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X65, 0X00 # testb (%ebp), %spl")
#define TEST_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X24, 0X24 # testb (%esp), %spl")

#define TEST_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X00 # testb (%rax), %r8b")
#define TEST_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X03 # testb (%rbx), %r8b")
#define TEST_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X01 # testb (%rcx), %r8b")
#define TEST_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X02 # testb (%rdx), %r8b")
#define TEST_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X07 # testb (%rdi), %r8b")
#define TEST_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X06 # testb (%rsi), %r8b")
#define TEST_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X45, 0X00 # testb (%rbp), %r8b")
#define TEST_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X04, 0X24 # testb (%rsp), %r8b")
#define TEST_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X00 # testb (%r8), %r8b")
#define TEST_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X01 # testb (%r9), %r8b")
#define TEST_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X02 # testb (%r10), %r8b")
#define TEST_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X03 # testb (%r11), %r8b")
#define TEST_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X04, 0X24 # testb (%r12), %r8b")
#define TEST_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X45, 0X00 # testb (%r13), %r8b")
#define TEST_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X06 # testb (%r14), %r8b")
#define TEST_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X07 # testb (%r15), %r8b")
#define TEST_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X00 # testb (%eax), %r8b")
#define TEST_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X03 # testb (%ebx), %r8b")
#define TEST_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X01 # testb (%ecx), %r8b")
#define TEST_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X02 # testb (%edx), %r8b")
#define TEST_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X07 # testb (%edi), %r8b")
#define TEST_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X06 # testb (%esi), %r8b")
#define TEST_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X45, 0X00 # testb (%ebp), %r8b")
#define TEST_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X04, 0X24 # testb (%esp), %r8b")

#define TEST_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X08 # testb (%rax), %r9b")
#define TEST_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X0B # testb (%rbx), %r9b")
#define TEST_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X09 # testb (%rcx), %r9b")
#define TEST_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X0A # testb (%rdx), %r9b")
#define TEST_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X0F # testb (%rdi), %r9b")
#define TEST_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X0E # testb (%rsi), %r9b")
#define TEST_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X4D, 0X00 # testb (%rbp), %r9b")
#define TEST_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X0C, 0X24 # testb (%rsp), %r9b")
#define TEST_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X08 # testb (%r8), %r9b")
#define TEST_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X09 # testb (%r9), %r9b")
#define TEST_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X0A # testb (%r10), %r9b")
#define TEST_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X0B # testb (%r11), %r9b")
#define TEST_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X0C, 0X24 # testb (%r12), %r9b")
#define TEST_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X4D, 0X00 # testb (%r13), %r9b")
#define TEST_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X0E # testb (%r14), %r9b")
#define TEST_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X0F # testb (%r15), %r9b")
#define TEST_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X08 # testb (%eax), %r9b")
#define TEST_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0B # testb (%ebx), %r9b")
#define TEST_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X09 # testb (%ecx), %r9b")
#define TEST_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0A # testb (%edx), %r9b")
#define TEST_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0F # testb (%edi), %r9b")
#define TEST_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0E # testb (%esi), %r9b")
#define TEST_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X4D, 0X00 # testb (%ebp), %r9b")
#define TEST_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0C, 0X24 # testb (%esp), %r9b")

#define TEST_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X10 # testb (%rax), %r10b")
#define TEST_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X13 # testb (%rbx), %r10b")
#define TEST_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X11 # testb (%rcx), %r10b")
#define TEST_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X12 # testb (%rdx), %r10b")
#define TEST_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X17 # testb (%rdi), %r10b")
#define TEST_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X16 # testb (%rsi), %r10b")
#define TEST_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X55, 0X00 # testb (%rbp), %r10b")
#define TEST_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X14, 0X24 # testb (%rsp), %r10b")
#define TEST_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X10 # testb (%r8), %r10b")
#define TEST_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X11 # testb (%r9), %r10b")
#define TEST_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X12 # testb (%r10), %r10b")
#define TEST_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X13 # testb (%r11), %r10b")
#define TEST_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X14, 0X24 # testb (%r12), %r10b")
#define TEST_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X55, 0X00 # testb (%r13), %r10b")
#define TEST_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X16 # testb (%r14), %r10b")
#define TEST_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X17 # testb (%r15), %r10b")
#define TEST_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X10 # testb (%eax), %r10b")
#define TEST_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X13 # testb (%ebx), %r10b")
#define TEST_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X11 # testb (%ecx), %r10b")
#define TEST_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X12 # testb (%edx), %r10b")
#define TEST_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X17 # testb (%edi), %r10b")
#define TEST_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X16 # testb (%esi), %r10b")
#define TEST_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X55, 0X00 # testb (%ebp), %r10b")
#define TEST_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X14, 0X24 # testb (%esp), %r10b")

#define TEST_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X18 # testb (%rax), %r11b")
#define TEST_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X1B # testb (%rbx), %r11b")
#define TEST_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X19 # testb (%rcx), %r11b")
#define TEST_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X1A # testb (%rdx), %r11b")
#define TEST_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X1F # testb (%rdi), %r11b")
#define TEST_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X1E # testb (%rsi), %r11b")
#define TEST_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X5D, 0X00 # testb (%rbp), %r11b")
#define TEST_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X1C, 0X24 # testb (%rsp), %r11b")
#define TEST_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X18 # testb (%r8), %r11b")
#define TEST_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X19 # testb (%r9), %r11b")
#define TEST_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X1A # testb (%r10), %r11b")
#define TEST_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X1B # testb (%r11), %r11b")
#define TEST_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X1C, 0X24 # testb (%r12), %r11b")
#define TEST_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X5D, 0X00 # testb (%r13), %r11b")
#define TEST_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X1E # testb (%r14), %r11b")
#define TEST_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X1F # testb (%r15), %r11b")
#define TEST_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X18 # testb (%eax), %r11b")
#define TEST_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1B # testb (%ebx), %r11b")
#define TEST_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X19 # testb (%ecx), %r11b")
#define TEST_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1A # testb (%edx), %r11b")
#define TEST_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1F # testb (%edi), %r11b")
#define TEST_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1E # testb (%esi), %r11b")
#define TEST_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X5D, 0X00 # testb (%ebp), %r11b")
#define TEST_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1C, 0X24 # testb (%esp), %r11b")

#define TEST_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X20 # testb (%rax), %r12b")
#define TEST_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X23 # testb (%rbx), %r12b")
#define TEST_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X21 # testb (%rcx), %r12b")
#define TEST_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X22 # testb (%rdx), %r12b")
#define TEST_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X27 # testb (%rdi), %r12b")
#define TEST_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X26 # testb (%rsi), %r12b")
#define TEST_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X65, 0X00 # testb (%rbp), %r12b")
#define TEST_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X24, 0X24 # testb (%rsp), %r12b")
#define TEST_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X20 # testb (%r8), %r12b")
#define TEST_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X21 # testb (%r9), %r12b")
#define TEST_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X22 # testb (%r10), %r12b")
#define TEST_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X23 # testb (%r11), %r12b")
#define TEST_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X24, 0X24 # testb (%r12), %r12b")
#define TEST_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X65, 0X00 # testb (%r13), %r12b")
#define TEST_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X26 # testb (%r14), %r12b")
#define TEST_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X27 # testb (%r15), %r12b")
#define TEST_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X20 # testb (%eax), %r12b")
#define TEST_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X23 # testb (%ebx), %r12b")
#define TEST_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X21 # testb (%ecx), %r12b")
#define TEST_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X22 # testb (%edx), %r12b")
#define TEST_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X27 # testb (%edi), %r12b")
#define TEST_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X26 # testb (%esi), %r12b")
#define TEST_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X65, 0X00 # testb (%ebp), %r12b")
#define TEST_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X24, 0X24 # testb (%esp), %r12b")

#define TEST_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X28 # testb (%rax), %r13b")
#define TEST_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X2B # testb (%rbx), %r13b")
#define TEST_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X29 # testb (%rcx), %r13b")
#define TEST_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X2A # testb (%rdx), %r13b")
#define TEST_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X2F # testb (%rdi), %r13b")
#define TEST_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X2E # testb (%rsi), %r13b")
#define TEST_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X6D, 0X00 # testb (%rbp), %r13b")
#define TEST_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X2C, 0X24 # testb (%rsp), %r13b")
#define TEST_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X28 # testb (%r8), %r13b")
#define TEST_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X29 # testb (%r9), %r13b")
#define TEST_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X2A # testb (%r10), %r13b")
#define TEST_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X2B # testb (%r11), %r13b")
#define TEST_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X2C, 0X24 # testb (%r12), %r13b")
#define TEST_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X6D, 0X00 # testb (%r13), %r13b")
#define TEST_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X2E # testb (%r14), %r13b")
#define TEST_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X2F # testb (%r15), %r13b")
#define TEST_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X28 # testb (%eax), %r13b")
#define TEST_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2B # testb (%ebx), %r13b")
#define TEST_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X29 # testb (%ecx), %r13b")
#define TEST_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2A # testb (%edx), %r13b")
#define TEST_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2F # testb (%edi), %r13b")
#define TEST_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2E # testb (%esi), %r13b")
#define TEST_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X6D, 0X00 # testb (%ebp), %r13b")
#define TEST_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2C, 0X24 # testb (%esp), %r13b")

#define TEST_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X30 # testb (%rax), %r14b")
#define TEST_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X33 # testb (%rbx), %r14b")
#define TEST_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X31 # testb (%rcx), %r14b")
#define TEST_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X32 # testb (%rdx), %r14b")
#define TEST_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X37 # testb (%rdi), %r14b")
#define TEST_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X36 # testb (%rsi), %r14b")
#define TEST_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X75, 0X00 # testb (%rbp), %r14b")
#define TEST_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X34, 0X24 # testb (%rsp), %r14b")
#define TEST_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X30 # testb (%r8), %r14b")
#define TEST_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X31 # testb (%r9), %r14b")
#define TEST_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X32 # testb (%r10), %r14b")
#define TEST_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X33 # testb (%r11), %r14b")
#define TEST_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X34, 0X24 # testb (%r12), %r14b")
#define TEST_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X75, 0X00 # testb (%r13), %r14b")
#define TEST_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X36 # testb (%r14), %r14b")
#define TEST_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X37 # testb (%r15), %r14b")
#define TEST_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X30 # testb (%eax), %r14b")
#define TEST_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X33 # testb (%ebx), %r14b")
#define TEST_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X31 # testb (%ecx), %r14b")
#define TEST_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X32 # testb (%edx), %r14b")
#define TEST_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X37 # testb (%edi), %r14b")
#define TEST_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X36 # testb (%esi), %r14b")
#define TEST_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X75, 0X00 # testb (%ebp), %r14b")
#define TEST_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X34, 0X24 # testb (%esp), %r14b")

#define TEST_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X38 # testb (%rax), %r15b")
#define TEST_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X3B # testb (%rbx), %r15b")
#define TEST_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X39 # testb (%rcx), %r15b")
#define TEST_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X3A # testb (%rdx), %r15b")
#define TEST_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X3F # testb (%rdi), %r15b")
#define TEST_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X3E # testb (%rsi), %r15b")
#define TEST_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X7D, 0X00 # testb (%rbp), %r15b")
#define TEST_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X3C, 0X24 # testb (%rsp), %r15b")
#define TEST_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X38 # testb (%r8), %r15b")
#define TEST_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X39 # testb (%r9), %r15b")
#define TEST_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X3A # testb (%r10), %r15b")
#define TEST_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X3B # testb (%r11), %r15b")
#define TEST_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X3C, 0X24 # testb (%r12), %r15b")
#define TEST_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X7D, 0X00 # testb (%r13), %r15b")
#define TEST_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X3E # testb (%r14), %r15b")
#define TEST_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X3F # testb (%r15), %r15b")
#define TEST_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X38 # testb (%eax), %r15b")
#define TEST_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3B # testb (%ebx), %r15b")
#define TEST_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X39 # testb (%ecx), %r15b")
#define TEST_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3A # testb (%edx), %r15b")
#define TEST_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3F # testb (%edi), %r15b")
#define TEST_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3E # testb (%esi), %r15b")
#define TEST_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X7D, 0X00 # testb (%ebp), %r15b")
#define TEST_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3C, 0X24 # testb (%esp), %r15b")

#define TEST_AL_TO_PTR_RAX CMT_ASM(".byte 0X84, 0X00 # testb %al, (%rax)")
#define TEST_AL_TO_PTR_RBX CMT_ASM(".byte 0X84, 0X03 # testb %al, (%rbx)")
#define TEST_AL_TO_PTR_RCX CMT_ASM(".byte 0X84, 0X01 # testb %al, (%rcx)")
#define TEST_AL_TO_PTR_RDX CMT_ASM(".byte 0X84, 0X02 # testb %al, (%rdx)")
#define TEST_AL_TO_PTR_RDI CMT_ASM(".byte 0X84, 0X07 # testb %al, (%rdi)")
#define TEST_AL_TO_PTR_RSI CMT_ASM(".byte 0X84, 0X06 # testb %al, (%rsi)")
#define TEST_AL_TO_PTR_RBP CMT_ASM(".byte 0X84, 0X45, 0X00 # testb %al, (%rbp)")
#define TEST_AL_TO_PTR_RSP CMT_ASM(".byte 0X84, 0X04, 0X24 # testb %al, (%rsp)")
#define TEST_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X00 # testb %al, (%r8)")
#define TEST_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X01 # testb %al, (%r9)")
#define TEST_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X02 # testb %al, (%r10)")
#define TEST_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X03 # testb %al, (%r11)")
#define TEST_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X04, 0X24 # testb %al, (%r12)")
#define TEST_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X45, 0X00 # testb %al, (%r13)")
#define TEST_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X06 # testb %al, (%r14)")
#define TEST_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X07 # testb %al, (%r15)")
#define TEST_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X00 # testb %al, (%eax)")
#define TEST_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X03 # testb %al, (%ebx)")
#define TEST_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X01 # testb %al, (%ecx)")
#define TEST_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X02 # testb %al, (%edx)")
#define TEST_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X07 # testb %al, (%edi)")
#define TEST_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X06 # testb %al, (%esi)")
#define TEST_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X45, 0X00 # testb %al, (%ebp)")
#define TEST_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X04, 0X24 # testb %al, (%esp)")

#define TEST_BL_TO_PTR_RAX CMT_ASM(".byte 0X84, 0X18 # testb %bl, (%rax)")
#define TEST_BL_TO_PTR_RBX CMT_ASM(".byte 0X84, 0X1B # testb %bl, (%rbx)")
#define TEST_BL_TO_PTR_RCX CMT_ASM(".byte 0X84, 0X19 # testb %bl, (%rcx)")
#define TEST_BL_TO_PTR_RDX CMT_ASM(".byte 0X84, 0X1A # testb %bl, (%rdx)")
#define TEST_BL_TO_PTR_RDI CMT_ASM(".byte 0X84, 0X1F # testb %bl, (%rdi)")
#define TEST_BL_TO_PTR_RSI CMT_ASM(".byte 0X84, 0X1E # testb %bl, (%rsi)")
#define TEST_BL_TO_PTR_RBP CMT_ASM(".byte 0X84, 0X5D, 0X00 # testb %bl, (%rbp)")
#define TEST_BL_TO_PTR_RSP CMT_ASM(".byte 0X84, 0X1C, 0X24 # testb %bl, (%rsp)")
#define TEST_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X18 # testb %bl, (%r8)")
#define TEST_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X19 # testb %bl, (%r9)")
#define TEST_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X1A # testb %bl, (%r10)")
#define TEST_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X1B # testb %bl, (%r11)")
#define TEST_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X1C, 0X24 # testb %bl, (%r12)")
#define TEST_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X5D, 0X00 # testb %bl, (%r13)")
#define TEST_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X1E # testb %bl, (%r14)")
#define TEST_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X1F # testb %bl, (%r15)")
#define TEST_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X18 # testb %bl, (%eax)")
#define TEST_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X1B # testb %bl, (%ebx)")
#define TEST_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X19 # testb %bl, (%ecx)")
#define TEST_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X1A # testb %bl, (%edx)")
#define TEST_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X1F # testb %bl, (%edi)")
#define TEST_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X1E # testb %bl, (%esi)")
#define TEST_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X5D, 0X00 # testb %bl, (%ebp)")
#define TEST_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X1C, 0X24 # testb %bl, (%esp)")

#define TEST_CL_TO_PTR_RAX CMT_ASM(".byte 0X84, 0X08 # testb %cl, (%rax)")
#define TEST_CL_TO_PTR_RBX CMT_ASM(".byte 0X84, 0X0B # testb %cl, (%rbx)")
#define TEST_CL_TO_PTR_RCX CMT_ASM(".byte 0X84, 0X09 # testb %cl, (%rcx)")
#define TEST_CL_TO_PTR_RDX CMT_ASM(".byte 0X84, 0X0A # testb %cl, (%rdx)")
#define TEST_CL_TO_PTR_RDI CMT_ASM(".byte 0X84, 0X0F # testb %cl, (%rdi)")
#define TEST_CL_TO_PTR_RSI CMT_ASM(".byte 0X84, 0X0E # testb %cl, (%rsi)")
#define TEST_CL_TO_PTR_RBP CMT_ASM(".byte 0X84, 0X4D, 0X00 # testb %cl, (%rbp)")
#define TEST_CL_TO_PTR_RSP CMT_ASM(".byte 0X84, 0X0C, 0X24 # testb %cl, (%rsp)")
#define TEST_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X08 # testb %cl, (%r8)")
#define TEST_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X09 # testb %cl, (%r9)")
#define TEST_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X0A # testb %cl, (%r10)")
#define TEST_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X0B # testb %cl, (%r11)")
#define TEST_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X0C, 0X24 # testb %cl, (%r12)")
#define TEST_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X4D, 0X00 # testb %cl, (%r13)")
#define TEST_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X0E # testb %cl, (%r14)")
#define TEST_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X0F # testb %cl, (%r15)")
#define TEST_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X08 # testb %cl, (%eax)")
#define TEST_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X0B # testb %cl, (%ebx)")
#define TEST_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X09 # testb %cl, (%ecx)")
#define TEST_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X0A # testb %cl, (%edx)")
#define TEST_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X0F # testb %cl, (%edi)")
#define TEST_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X0E # testb %cl, (%esi)")
#define TEST_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X4D, 0X00 # testb %cl, (%ebp)")
#define TEST_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X0C, 0X24 # testb %cl, (%esp)")

#define TEST_DL_TO_PTR_RAX CMT_ASM(".byte 0X84, 0X10 # testb %dl, (%rax)")
#define TEST_DL_TO_PTR_RBX CMT_ASM(".byte 0X84, 0X13 # testb %dl, (%rbx)")
#define TEST_DL_TO_PTR_RCX CMT_ASM(".byte 0X84, 0X11 # testb %dl, (%rcx)")
#define TEST_DL_TO_PTR_RDX CMT_ASM(".byte 0X84, 0X12 # testb %dl, (%rdx)")
#define TEST_DL_TO_PTR_RDI CMT_ASM(".byte 0X84, 0X17 # testb %dl, (%rdi)")
#define TEST_DL_TO_PTR_RSI CMT_ASM(".byte 0X84, 0X16 # testb %dl, (%rsi)")
#define TEST_DL_TO_PTR_RBP CMT_ASM(".byte 0X84, 0X55, 0X00 # testb %dl, (%rbp)")
#define TEST_DL_TO_PTR_RSP CMT_ASM(".byte 0X84, 0X14, 0X24 # testb %dl, (%rsp)")
#define TEST_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X10 # testb %dl, (%r8)")
#define TEST_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X11 # testb %dl, (%r9)")
#define TEST_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X12 # testb %dl, (%r10)")
#define TEST_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X13 # testb %dl, (%r11)")
#define TEST_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X14, 0X24 # testb %dl, (%r12)")
#define TEST_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X55, 0X00 # testb %dl, (%r13)")
#define TEST_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X16 # testb %dl, (%r14)")
#define TEST_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X17 # testb %dl, (%r15)")
#define TEST_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X84, 0X10 # testb %dl, (%eax)")
#define TEST_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X84, 0X13 # testb %dl, (%ebx)")
#define TEST_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X84, 0X11 # testb %dl, (%ecx)")
#define TEST_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X84, 0X12 # testb %dl, (%edx)")
#define TEST_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X84, 0X17 # testb %dl, (%edi)")
#define TEST_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X84, 0X16 # testb %dl, (%esi)")
#define TEST_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X84, 0X55, 0X00 # testb %dl, (%ebp)")
#define TEST_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X84, 0X14, 0X24 # testb %dl, (%esp)")

#define TEST_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X38 # testb %dil, (%rax)")
#define TEST_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X3B # testb %dil, (%rbx)")
#define TEST_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X39 # testb %dil, (%rcx)")
#define TEST_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X3A # testb %dil, (%rdx)")
#define TEST_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X3F # testb %dil, (%rdi)")
#define TEST_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X3E # testb %dil, (%rsi)")
#define TEST_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X7D, 0X00 # testb %dil, (%rbp)")
#define TEST_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X3C, 0X24 # testb %dil, (%rsp)")
#define TEST_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X38 # testb %dil, (%r8)")
#define TEST_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X39 # testb %dil, (%r9)")
#define TEST_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X3A # testb %dil, (%r10)")
#define TEST_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X3B # testb %dil, (%r11)")
#define TEST_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X3C, 0X24 # testb %dil, (%r12)")
#define TEST_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X7D, 0X00 # testb %dil, (%r13)")
#define TEST_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X3E # testb %dil, (%r14)")
#define TEST_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X3F # testb %dil, (%r15)")
#define TEST_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X38 # testb %dil, (%eax)")
#define TEST_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3B # testb %dil, (%ebx)")
#define TEST_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X39 # testb %dil, (%ecx)")
#define TEST_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3A # testb %dil, (%edx)")
#define TEST_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3F # testb %dil, (%edi)")
#define TEST_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3E # testb %dil, (%esi)")
#define TEST_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X7D, 0X00 # testb %dil, (%ebp)")
#define TEST_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X3C, 0X24 # testb %dil, (%esp)")

#define TEST_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X30 # testb %sil, (%rax)")
#define TEST_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X33 # testb %sil, (%rbx)")
#define TEST_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X31 # testb %sil, (%rcx)")
#define TEST_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X32 # testb %sil, (%rdx)")
#define TEST_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X37 # testb %sil, (%rdi)")
#define TEST_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X36 # testb %sil, (%rsi)")
#define TEST_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X75, 0X00 # testb %sil, (%rbp)")
#define TEST_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X34, 0X24 # testb %sil, (%rsp)")
#define TEST_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X30 # testb %sil, (%r8)")
#define TEST_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X31 # testb %sil, (%r9)")
#define TEST_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X32 # testb %sil, (%r10)")
#define TEST_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X33 # testb %sil, (%r11)")
#define TEST_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X34, 0X24 # testb %sil, (%r12)")
#define TEST_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X75, 0X00 # testb %sil, (%r13)")
#define TEST_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X36 # testb %sil, (%r14)")
#define TEST_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X37 # testb %sil, (%r15)")
#define TEST_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X30 # testb %sil, (%eax)")
#define TEST_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X33 # testb %sil, (%ebx)")
#define TEST_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X31 # testb %sil, (%ecx)")
#define TEST_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X32 # testb %sil, (%edx)")
#define TEST_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X37 # testb %sil, (%edi)")
#define TEST_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X36 # testb %sil, (%esi)")
#define TEST_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X75, 0X00 # testb %sil, (%ebp)")
#define TEST_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X34, 0X24 # testb %sil, (%esp)")

#define TEST_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X28 # testb %bpl, (%rax)")
#define TEST_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X2B # testb %bpl, (%rbx)")
#define TEST_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X29 # testb %bpl, (%rcx)")
#define TEST_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X2A # testb %bpl, (%rdx)")
#define TEST_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X2F # testb %bpl, (%rdi)")
#define TEST_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X2E # testb %bpl, (%rsi)")
#define TEST_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X6D, 0X00 # testb %bpl, (%rbp)")
#define TEST_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X2C, 0X24 # testb %bpl, (%rsp)")
#define TEST_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X28 # testb %bpl, (%r8)")
#define TEST_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X29 # testb %bpl, (%r9)")
#define TEST_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X2A # testb %bpl, (%r10)")
#define TEST_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X2B # testb %bpl, (%r11)")
#define TEST_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X2C, 0X24 # testb %bpl, (%r12)")
#define TEST_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X6D, 0X00 # testb %bpl, (%r13)")
#define TEST_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X2E # testb %bpl, (%r14)")
#define TEST_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X2F # testb %bpl, (%r15)")
#define TEST_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X28 # testb %bpl, (%eax)")
#define TEST_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2B # testb %bpl, (%ebx)")
#define TEST_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X29 # testb %bpl, (%ecx)")
#define TEST_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2A # testb %bpl, (%edx)")
#define TEST_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2F # testb %bpl, (%edi)")
#define TEST_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2E # testb %bpl, (%esi)")
#define TEST_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X6D, 0X00 # testb %bpl, (%ebp)")
#define TEST_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X2C, 0X24 # testb %bpl, (%esp)")

#define TEST_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X84, 0X20 # testb %spl, (%rax)")
#define TEST_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X84, 0X23 # testb %spl, (%rbx)")
#define TEST_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X84, 0X21 # testb %spl, (%rcx)")
#define TEST_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X84, 0X22 # testb %spl, (%rdx)")
#define TEST_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X84, 0X27 # testb %spl, (%rdi)")
#define TEST_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X84, 0X26 # testb %spl, (%rsi)")
#define TEST_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X84, 0X65, 0X00 # testb %spl, (%rbp)")
#define TEST_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X84, 0X24, 0X24 # testb %spl, (%rsp)")
#define TEST_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X84, 0X20 # testb %spl, (%r8)")
#define TEST_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X84, 0X21 # testb %spl, (%r9)")
#define TEST_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X84, 0X22 # testb %spl, (%r10)")
#define TEST_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X84, 0X23 # testb %spl, (%r11)")
#define TEST_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X84, 0X24, 0X24 # testb %spl, (%r12)")
#define TEST_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X84, 0X65, 0X00 # testb %spl, (%r13)")
#define TEST_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X84, 0X26 # testb %spl, (%r14)")
#define TEST_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X84, 0X27 # testb %spl, (%r15)")
#define TEST_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X20 # testb %spl, (%eax)")
#define TEST_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X23 # testb %spl, (%ebx)")
#define TEST_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X21 # testb %spl, (%ecx)")
#define TEST_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X84, 0X22 # testb %spl, (%edx)")
#define TEST_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X27 # testb %spl, (%edi)")
#define TEST_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X84, 0X26 # testb %spl, (%esi)")
#define TEST_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X65, 0X00 # testb %spl, (%ebp)")
#define TEST_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X84, 0X24, 0X24 # testb %spl, (%esp)")

#define TEST_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X00 # testb %r8b, (%rax)")
#define TEST_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X03 # testb %r8b, (%rbx)")
#define TEST_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X01 # testb %r8b, (%rcx)")
#define TEST_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X02 # testb %r8b, (%rdx)")
#define TEST_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X07 # testb %r8b, (%rdi)")
#define TEST_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X06 # testb %r8b, (%rsi)")
#define TEST_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X45, 0X00 # testb %r8b, (%rbp)")
#define TEST_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X04, 0X24 # testb %r8b, (%rsp)")
#define TEST_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X00 # testb %r8b, (%r8)")
#define TEST_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X01 # testb %r8b, (%r9)")
#define TEST_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X02 # testb %r8b, (%r10)")
#define TEST_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X03 # testb %r8b, (%r11)")
#define TEST_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X04, 0X24 # testb %r8b, (%r12)")
#define TEST_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X45, 0X00 # testb %r8b, (%r13)")
#define TEST_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X06 # testb %r8b, (%r14)")
#define TEST_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X07 # testb %r8b, (%r15)")
#define TEST_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X00 # testb %r8b, (%eax)")
#define TEST_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X03 # testb %r8b, (%ebx)")
#define TEST_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X01 # testb %r8b, (%ecx)")
#define TEST_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X02 # testb %r8b, (%edx)")
#define TEST_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X07 # testb %r8b, (%edi)")
#define TEST_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X06 # testb %r8b, (%esi)")
#define TEST_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X45, 0X00 # testb %r8b, (%ebp)")
#define TEST_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X04, 0X24 # testb %r8b, (%esp)")

#define TEST_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X08 # testb %r9b, (%rax)")
#define TEST_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X0B # testb %r9b, (%rbx)")
#define TEST_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X09 # testb %r9b, (%rcx)")
#define TEST_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X0A # testb %r9b, (%rdx)")
#define TEST_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X0F # testb %r9b, (%rdi)")
#define TEST_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X0E # testb %r9b, (%rsi)")
#define TEST_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X4D, 0X00 # testb %r9b, (%rbp)")
#define TEST_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X0C, 0X24 # testb %r9b, (%rsp)")
#define TEST_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X08 # testb %r9b, (%r8)")
#define TEST_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X09 # testb %r9b, (%r9)")
#define TEST_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X0A # testb %r9b, (%r10)")
#define TEST_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X0B # testb %r9b, (%r11)")
#define TEST_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X0C, 0X24 # testb %r9b, (%r12)")
#define TEST_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X4D, 0X00 # testb %r9b, (%r13)")
#define TEST_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X0E # testb %r9b, (%r14)")
#define TEST_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X0F # testb %r9b, (%r15)")
#define TEST_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X08 # testb %r9b, (%eax)")
#define TEST_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0B # testb %r9b, (%ebx)")
#define TEST_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X09 # testb %r9b, (%ecx)")
#define TEST_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0A # testb %r9b, (%edx)")
#define TEST_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0F # testb %r9b, (%edi)")
#define TEST_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0E # testb %r9b, (%esi)")
#define TEST_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X4D, 0X00 # testb %r9b, (%ebp)")
#define TEST_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X0C, 0X24 # testb %r9b, (%esp)")

#define TEST_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X10 # testb %r10b, (%rax)")
#define TEST_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X13 # testb %r10b, (%rbx)")
#define TEST_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X11 # testb %r10b, (%rcx)")
#define TEST_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X12 # testb %r10b, (%rdx)")
#define TEST_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X17 # testb %r10b, (%rdi)")
#define TEST_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X16 # testb %r10b, (%rsi)")
#define TEST_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X55, 0X00 # testb %r10b, (%rbp)")
#define TEST_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X14, 0X24 # testb %r10b, (%rsp)")
#define TEST_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X10 # testb %r10b, (%r8)")
#define TEST_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X11 # testb %r10b, (%r9)")
#define TEST_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X12 # testb %r10b, (%r10)")
#define TEST_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X13 # testb %r10b, (%r11)")
#define TEST_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X14, 0X24 # testb %r10b, (%r12)")
#define TEST_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X55, 0X00 # testb %r10b, (%r13)")
#define TEST_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X16 # testb %r10b, (%r14)")
#define TEST_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X17 # testb %r10b, (%r15)")
#define TEST_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X10 # testb %r10b, (%eax)")
#define TEST_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X13 # testb %r10b, (%ebx)")
#define TEST_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X11 # testb %r10b, (%ecx)")
#define TEST_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X12 # testb %r10b, (%edx)")
#define TEST_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X17 # testb %r10b, (%edi)")
#define TEST_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X16 # testb %r10b, (%esi)")
#define TEST_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X55, 0X00 # testb %r10b, (%ebp)")
#define TEST_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X14, 0X24 # testb %r10b, (%esp)")

#define TEST_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X18 # testb %r11b, (%rax)")
#define TEST_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X1B # testb %r11b, (%rbx)")
#define TEST_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X19 # testb %r11b, (%rcx)")
#define TEST_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X1A # testb %r11b, (%rdx)")
#define TEST_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X1F # testb %r11b, (%rdi)")
#define TEST_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X1E # testb %r11b, (%rsi)")
#define TEST_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X5D, 0X00 # testb %r11b, (%rbp)")
#define TEST_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X1C, 0X24 # testb %r11b, (%rsp)")
#define TEST_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X18 # testb %r11b, (%r8)")
#define TEST_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X19 # testb %r11b, (%r9)")
#define TEST_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X1A # testb %r11b, (%r10)")
#define TEST_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X1B # testb %r11b, (%r11)")
#define TEST_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X1C, 0X24 # testb %r11b, (%r12)")
#define TEST_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X5D, 0X00 # testb %r11b, (%r13)")
#define TEST_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X1E # testb %r11b, (%r14)")
#define TEST_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X1F # testb %r11b, (%r15)")
#define TEST_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X18 # testb %r11b, (%eax)")
#define TEST_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1B # testb %r11b, (%ebx)")
#define TEST_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X19 # testb %r11b, (%ecx)")
#define TEST_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1A # testb %r11b, (%edx)")
#define TEST_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1F # testb %r11b, (%edi)")
#define TEST_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1E # testb %r11b, (%esi)")
#define TEST_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X5D, 0X00 # testb %r11b, (%ebp)")
#define TEST_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X1C, 0X24 # testb %r11b, (%esp)")

#define TEST_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X20 # testb %r12b, (%rax)")
#define TEST_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X23 # testb %r12b, (%rbx)")
#define TEST_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X21 # testb %r12b, (%rcx)")
#define TEST_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X22 # testb %r12b, (%rdx)")
#define TEST_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X27 # testb %r12b, (%rdi)")
#define TEST_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X26 # testb %r12b, (%rsi)")
#define TEST_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X65, 0X00 # testb %r12b, (%rbp)")
#define TEST_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X24, 0X24 # testb %r12b, (%rsp)")
#define TEST_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X20 # testb %r12b, (%r8)")
#define TEST_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X21 # testb %r12b, (%r9)")
#define TEST_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X22 # testb %r12b, (%r10)")
#define TEST_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X23 # testb %r12b, (%r11)")
#define TEST_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X24, 0X24 # testb %r12b, (%r12)")
#define TEST_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X65, 0X00 # testb %r12b, (%r13)")
#define TEST_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X26 # testb %r12b, (%r14)")
#define TEST_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X27 # testb %r12b, (%r15)")
#define TEST_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X20 # testb %r12b, (%eax)")
#define TEST_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X23 # testb %r12b, (%ebx)")
#define TEST_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X21 # testb %r12b, (%ecx)")
#define TEST_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X22 # testb %r12b, (%edx)")
#define TEST_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X27 # testb %r12b, (%edi)")
#define TEST_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X26 # testb %r12b, (%esi)")
#define TEST_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X65, 0X00 # testb %r12b, (%ebp)")
#define TEST_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X24, 0X24 # testb %r12b, (%esp)")

#define TEST_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X28 # testb %r13b, (%rax)")
#define TEST_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X2B # testb %r13b, (%rbx)")
#define TEST_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X29 # testb %r13b, (%rcx)")
#define TEST_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X2A # testb %r13b, (%rdx)")
#define TEST_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X2F # testb %r13b, (%rdi)")
#define TEST_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X2E # testb %r13b, (%rsi)")
#define TEST_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X6D, 0X00 # testb %r13b, (%rbp)")
#define TEST_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X2C, 0X24 # testb %r13b, (%rsp)")
#define TEST_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X28 # testb %r13b, (%r8)")
#define TEST_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X29 # testb %r13b, (%r9)")
#define TEST_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X2A # testb %r13b, (%r10)")
#define TEST_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X2B # testb %r13b, (%r11)")
#define TEST_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X2C, 0X24 # testb %r13b, (%r12)")
#define TEST_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X6D, 0X00 # testb %r13b, (%r13)")
#define TEST_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X2E # testb %r13b, (%r14)")
#define TEST_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X2F # testb %r13b, (%r15)")
#define TEST_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X28 # testb %r13b, (%eax)")
#define TEST_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2B # testb %r13b, (%ebx)")
#define TEST_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X29 # testb %r13b, (%ecx)")
#define TEST_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2A # testb %r13b, (%edx)")
#define TEST_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2F # testb %r13b, (%edi)")
#define TEST_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2E # testb %r13b, (%esi)")
#define TEST_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X6D, 0X00 # testb %r13b, (%ebp)")
#define TEST_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X2C, 0X24 # testb %r13b, (%esp)")

#define TEST_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X30 # testb %r14b, (%rax)")
#define TEST_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X33 # testb %r14b, (%rbx)")
#define TEST_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X31 # testb %r14b, (%rcx)")
#define TEST_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X32 # testb %r14b, (%rdx)")
#define TEST_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X37 # testb %r14b, (%rdi)")
#define TEST_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X36 # testb %r14b, (%rsi)")
#define TEST_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X75, 0X00 # testb %r14b, (%rbp)")
#define TEST_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X34, 0X24 # testb %r14b, (%rsp)")
#define TEST_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X30 # testb %r14b, (%r8)")
#define TEST_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X31 # testb %r14b, (%r9)")
#define TEST_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X32 # testb %r14b, (%r10)")
#define TEST_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X33 # testb %r14b, (%r11)")
#define TEST_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X34, 0X24 # testb %r14b, (%r12)")
#define TEST_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X75, 0X00 # testb %r14b, (%r13)")
#define TEST_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X36 # testb %r14b, (%r14)")
#define TEST_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X37 # testb %r14b, (%r15)")
#define TEST_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X30 # testb %r14b, (%eax)")
#define TEST_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X33 # testb %r14b, (%ebx)")
#define TEST_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X31 # testb %r14b, (%ecx)")
#define TEST_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X32 # testb %r14b, (%edx)")
#define TEST_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X37 # testb %r14b, (%edi)")
#define TEST_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X36 # testb %r14b, (%esi)")
#define TEST_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X75, 0X00 # testb %r14b, (%ebp)")
#define TEST_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X34, 0X24 # testb %r14b, (%esp)")

#define TEST_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X84, 0X38 # testb %r15b, (%rax)")
#define TEST_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X84, 0X3B # testb %r15b, (%rbx)")
#define TEST_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X84, 0X39 # testb %r15b, (%rcx)")
#define TEST_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X84, 0X3A # testb %r15b, (%rdx)")
#define TEST_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X84, 0X3F # testb %r15b, (%rdi)")
#define TEST_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X84, 0X3E # testb %r15b, (%rsi)")
#define TEST_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X84, 0X7D, 0X00 # testb %r15b, (%rbp)")
#define TEST_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X84, 0X3C, 0X24 # testb %r15b, (%rsp)")
#define TEST_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X84, 0X38 # testb %r15b, (%r8)")
#define TEST_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X84, 0X39 # testb %r15b, (%r9)")
#define TEST_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X84, 0X3A # testb %r15b, (%r10)")
#define TEST_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X84, 0X3B # testb %r15b, (%r11)")
#define TEST_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X84, 0X3C, 0X24 # testb %r15b, (%r12)")
#define TEST_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X84, 0X7D, 0X00 # testb %r15b, (%r13)")
#define TEST_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X84, 0X3E # testb %r15b, (%r14)")
#define TEST_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X84, 0X3F # testb %r15b, (%r15)")
#define TEST_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X38 # testb %r15b, (%eax)")
#define TEST_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3B # testb %r15b, (%ebx)")
#define TEST_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X39 # testb %r15b, (%ecx)")
#define TEST_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3A # testb %r15b, (%edx)")
#define TEST_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3F # testb %r15b, (%edi)")
#define TEST_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3E # testb %r15b, (%esi)")
#define TEST_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X7D, 0X00 # testb %r15b, (%ebp)")
#define TEST_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X84, 0X3C, 0X24 # testb %r15b, (%esp)")

#define TEST_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X80 # testb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X83 # testb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X81 # testb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X82 # testb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84, 0X24 # testb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X80 # testb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X81 # testb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X82 # testb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X83 # testb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X84, 0X24 # testb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X85 # testb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X86 # testb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X87 # testb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X80 # testb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X83 # testb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X81 # testb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X82 # testb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X87 # testb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X86 # testb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X85 # testb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X84, 0X24 # testb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X98 # testb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9B # testb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X99 # testb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9A # testb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X98 # testb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X99 # testb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9A # testb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9B # testb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9D # testb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9E # testb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9F # testb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X98 # testb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9B # testb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X99 # testb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9A # testb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9F # testb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9E # testb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9D # testb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X88 # testb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8B # testb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X89 # testb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8A # testb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X88 # testb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X89 # testb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8A # testb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8B # testb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8D # testb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8E # testb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8F # testb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X88 # testb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8B # testb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X89 # testb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8A # testb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8F # testb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8E # testb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8D # testb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X90 # testb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X93 # testb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X91 # testb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X92 # testb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94, 0X24 # testb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X90 # testb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X91 # testb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X92 # testb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X93 # testb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X94, 0X24 # testb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X95 # testb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X96 # testb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X97 # testb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X90 # testb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X93 # testb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X91 # testb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X92 # testb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X97 # testb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X96 # testb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X95 # testb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X94, 0X24 # testb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB8 # testb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBB # testb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB9 # testb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBA # testb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBF # testb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBE # testb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBD # testb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB8 # testb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB9 # testb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBA # testb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBB # testb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBD # testb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBE # testb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBF # testb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB8 # testb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBB # testb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB9 # testb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBA # testb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBF # testb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBE # testb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBD # testb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB0 # testb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB3 # testb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB1 # testb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB2 # testb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB7 # testb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB6 # testb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB5 # testb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB0 # testb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB1 # testb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB2 # testb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB3 # testb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB5 # testb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB6 # testb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB7 # testb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB0 # testb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB3 # testb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB1 # testb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB2 # testb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB7 # testb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB6 # testb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB5 # testb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA8 # testb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAB # testb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA9 # testb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAA # testb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAF # testb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAE # testb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAD # testb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA8 # testb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA9 # testb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAA # testb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAB # testb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAD # testb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAE # testb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAF # testb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA8 # testb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAB # testb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA9 # testb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAA # testb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAF # testb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAE # testb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAD # testb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA0 # testb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA3 # testb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA1 # testb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA2 # testb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA7 # testb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA6 # testb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA5 # testb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA0 # testb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA1 # testb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA2 # testb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA3 # testb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA5 # testb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA6 # testb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA7 # testb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA0 # testb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA3 # testb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA1 # testb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA2 # testb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA7 # testb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA6 # testb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA5 # testb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X80 # testb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X83 # testb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X81 # testb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X82 # testb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X87 # testb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X86 # testb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X85 # testb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X84, 0X24 # testb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X80 # testb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X81 # testb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X82 # testb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X83 # testb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X84, 0X24 # testb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X85 # testb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X86 # testb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X87 # testb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X80 # testb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X83 # testb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X81 # testb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X82 # testb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X87 # testb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X86 # testb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X85 # testb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X84, 0X24 # testb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X88 # testb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8B # testb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X89 # testb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8A # testb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8F # testb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8E # testb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8D # testb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X88 # testb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X89 # testb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8A # testb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8B # testb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8D # testb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8E # testb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8F # testb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X88 # testb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8B # testb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X89 # testb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8A # testb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8F # testb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8E # testb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8D # testb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8C, 0X24 # testb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X90 # testb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X93 # testb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X91 # testb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X92 # testb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X97 # testb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X96 # testb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X95 # testb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X94, 0X24 # testb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X90 # testb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X91 # testb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X92 # testb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X93 # testb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X94, 0X24 # testb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X95 # testb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X96 # testb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X97 # testb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X90 # testb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X93 # testb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X91 # testb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X92 # testb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X97 # testb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X96 # testb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X95 # testb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X94, 0X24 # testb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X98 # testb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9B # testb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X99 # testb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9A # testb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9F # testb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9E # testb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9D # testb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X98 # testb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X99 # testb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9A # testb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9B # testb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9D # testb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9E # testb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9F # testb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X98 # testb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9B # testb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X99 # testb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9A # testb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9F # testb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9E # testb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9D # testb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9C, 0X24 # testb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA0 # testb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA3 # testb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA1 # testb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA2 # testb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA7 # testb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA6 # testb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA5 # testb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA0 # testb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA1 # testb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA2 # testb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA3 # testb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA5 # testb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA6 # testb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA7 # testb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA0 # testb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA3 # testb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA1 # testb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA2 # testb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA7 # testb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA6 # testb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA5 # testb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA4, 0X24 # testb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA8 # testb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAB # testb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA9 # testb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAA # testb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAF # testb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAE # testb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAD # testb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA8 # testb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA9 # testb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAA # testb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAB # testb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAD # testb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAE # testb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAF # testb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA8 # testb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAB # testb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA9 # testb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAA # testb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAF # testb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAE # testb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAD # testb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAC, 0X24 # testb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB0 # testb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB3 # testb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB1 # testb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB2 # testb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB7 # testb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB6 # testb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB5 # testb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB0 # testb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB1 # testb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB2 # testb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB3 # testb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB5 # testb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB6 # testb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB7 # testb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB0 # testb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB3 # testb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB1 # testb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB2 # testb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB7 # testb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB6 # testb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB5 # testb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB4, 0X24 # testb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB8 # testb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBB # testb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB9 # testb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBA # testb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBF # testb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBE # testb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBD # testb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB8 # testb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB9 # testb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBA # testb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBB # testb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBD # testb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBE # testb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBF # testb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB8 # testb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBB # testb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB9 # testb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBA # testb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBF # testb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBE # testb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBD # testb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBC, 0X24 # testb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X80 # testb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X83 # testb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X81 # testb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X82 # testb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X87 # testb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X86 # testb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X85 # testb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X84, 0X24 # testb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X80 # testb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X81 # testb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X82 # testb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X83 # testb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X84, 0X24 # testb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X85 # testb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X86 # testb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X87 # testb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X80 # testb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X83 # testb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X81 # testb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X82 # testb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X87 # testb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X86 # testb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X85 # testb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X84, 0X24 # testb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X98 # testb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9B # testb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X99 # testb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9A # testb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9F # testb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9E # testb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9D # testb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X9C, 0X24 # testb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X98 # testb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X99 # testb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9A # testb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9B # testb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9C, 0X24 # testb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9D # testb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9E # testb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X9F # testb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X98 # testb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9B # testb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X99 # testb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9A # testb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9F # testb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9E # testb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9D # testb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X9C, 0X24 # testb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X88 # testb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8B # testb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X89 # testb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8A # testb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8F # testb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8E # testb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8D # testb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X8C, 0X24 # testb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X88 # testb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X89 # testb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8A # testb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8B # testb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8C, 0X24 # testb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8D # testb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8E # testb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X8F # testb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X88 # testb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8B # testb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X89 # testb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8A # testb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8F # testb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8E # testb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8D # testb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X8C, 0X24 # testb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X90 # testb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X93 # testb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X91 # testb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X84, 0X92 # testb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X97 # testb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X84, 0X96 # testb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X95 # testb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X84, 0X94, 0X24 # testb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X90 # testb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X91 # testb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X92 # testb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X93 # testb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X94, 0X24 # testb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X95 # testb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X96 # testb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0X97 # testb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X90 # testb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X93 # testb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X91 # testb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X92 # testb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X97 # testb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X96 # testb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X95 # testb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X84, 0X94, 0X24 # testb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB8 # testb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBB # testb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB9 # testb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBA # testb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBF # testb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBE # testb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBD # testb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XBC, 0X24 # testb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB8 # testb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB9 # testb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBA # testb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBB # testb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBC, 0X24 # testb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBD # testb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBE # testb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XBF # testb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB8 # testb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBB # testb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB9 # testb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBA # testb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBF # testb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBE # testb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBD # testb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XBC, 0X24 # testb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB0 # testb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB3 # testb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB1 # testb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB2 # testb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB7 # testb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB6 # testb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB5 # testb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XB4, 0X24 # testb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB0 # testb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB1 # testb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB2 # testb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB3 # testb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB4, 0X24 # testb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB5 # testb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB6 # testb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XB7 # testb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB0 # testb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB3 # testb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB1 # testb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB2 # testb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB7 # testb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB6 # testb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB5 # testb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XB4, 0X24 # testb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA8 # testb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAB # testb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA9 # testb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAA # testb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAF # testb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAE # testb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAD # testb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XAC, 0X24 # testb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA8 # testb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA9 # testb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAA # testb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAB # testb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAC, 0X24 # testb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAD # testb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAE # testb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XAF # testb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA8 # testb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAB # testb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA9 # testb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAA # testb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAF # testb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAE # testb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAD # testb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XAC, 0X24 # testb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA0 # testb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA3 # testb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA1 # testb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA2 # testb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA7 # testb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA6 # testb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA5 # testb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X84, 0XA4, 0X24 # testb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA0 # testb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA1 # testb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA2 # testb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA3 # testb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA4, 0X24 # testb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA5 # testb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA6 # testb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X84, 0XA7 # testb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA0 # testb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA3 # testb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA1 # testb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA2 # testb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA7 # testb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA6 # testb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA5 # testb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X84, 0XA4, 0X24 # testb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X80 # testb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X83 # testb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X81 # testb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X82 # testb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X87 # testb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X86 # testb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X85 # testb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X84, 0X24 # testb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X80 # testb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X81 # testb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X82 # testb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X83 # testb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X84, 0X24 # testb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X85 # testb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X86 # testb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X87 # testb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X80 # testb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X83 # testb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X81 # testb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X82 # testb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X87 # testb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X86 # testb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X85 # testb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X84, 0X24 # testb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X88 # testb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8B # testb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X89 # testb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8A # testb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8F # testb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8E # testb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8D # testb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X8C, 0X24 # testb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X88 # testb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X89 # testb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8A # testb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8B # testb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8C, 0X24 # testb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8D # testb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8E # testb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X8F # testb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X88 # testb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8B # testb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X89 # testb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8A # testb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8F # testb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8E # testb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8D # testb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X8C, 0X24 # testb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X90 # testb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X93 # testb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X91 # testb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X92 # testb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X97 # testb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X96 # testb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X95 # testb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X94, 0X24 # testb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X90 # testb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X91 # testb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X92 # testb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X93 # testb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X94, 0X24 # testb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X95 # testb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X96 # testb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X97 # testb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X90 # testb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X93 # testb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X91 # testb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X92 # testb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X97 # testb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X96 # testb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X95 # testb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X94, 0X24 # testb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X98 # testb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9B # testb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X99 # testb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9A # testb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9F # testb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9E # testb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9D # testb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0X9C, 0X24 # testb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X98 # testb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X99 # testb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9A # testb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9B # testb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9C, 0X24 # testb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9D # testb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9E # testb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0X9F # testb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X98 # testb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9B # testb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X99 # testb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9A # testb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9F # testb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9E # testb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9D # testb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0X9C, 0X24 # testb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA0 # testb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA3 # testb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA1 # testb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA2 # testb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA7 # testb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA6 # testb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA5 # testb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA4, 0X24 # testb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA0 # testb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA1 # testb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA2 # testb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA3 # testb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA4, 0X24 # testb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA5 # testb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA6 # testb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA7 # testb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA0 # testb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA3 # testb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA1 # testb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA2 # testb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA7 # testb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA6 # testb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA5 # testb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA4, 0X24 # testb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA8 # testb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAB # testb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XA9 # testb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAA # testb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAF # testb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAE # testb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAD # testb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XAC, 0X24 # testb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA8 # testb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XA9 # testb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAA # testb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAB # testb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAC, 0X24 # testb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAD # testb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAE # testb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XAF # testb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA8 # testb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAB # testb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XA9 # testb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAA # testb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAF # testb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAE # testb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAD # testb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XAC, 0X24 # testb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB0 # testb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB3 # testb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB1 # testb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB2 # testb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB7 # testb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB6 # testb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB5 # testb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB4, 0X24 # testb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB0 # testb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB1 # testb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB2 # testb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB3 # testb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB4, 0X24 # testb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB5 # testb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB6 # testb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB7 # testb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB0 # testb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB3 # testb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB1 # testb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB2 # testb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB7 # testb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB6 # testb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB5 # testb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB4, 0X24 # testb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB8 # testb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBB # testb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XB9 # testb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBA # testb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBF # testb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBE # testb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBD # testb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X84, 0XBC, 0X24 # testb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB8 # testb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XB9 # testb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBA # testb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBB # testb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBC, 0X24 # testb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBD # testb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBE # testb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X84, 0XBF # testb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB8 # testb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBB # testb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XB9 # testb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBA # testb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBF # testb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBE # testb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBD # testb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X84, 0XBC, 0X24 # testb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define TEST_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X06 # testw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1E # testw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0E # testw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X16 # testw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3E # testw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X36 # testw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2E # testw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X26 # testw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X06 # testw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1E # testw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0E # testw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X16 # testw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3E # testw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X36 # testw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2E # testw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X26 # testw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AX_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X07 # testw (%bx), %ax")
#define TEST_AX_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X46, 0X00 # testw (%bp), %ax")
#define TEST_AX_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X04 # testw (%si), %ax")
#define TEST_AX_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X05 # testw (%di), %ax")

#define TEST_BX_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X1F # testw (%bx), %bx")
#define TEST_BX_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X5E, 0X00 # testw (%bp), %bx")
#define TEST_BX_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X1C # testw (%si), %bx")
#define TEST_BX_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X1D # testw (%di), %bx")

#define TEST_CX_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X0F # testw (%bx), %cx")
#define TEST_CX_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X4E, 0X00 # testw (%bp), %cx")
#define TEST_CX_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X0C # testw (%si), %cx")
#define TEST_CX_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X0D # testw (%di), %cx")

#define TEST_DX_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X17 # testw (%bx), %dx")
#define TEST_DX_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X56, 0X00 # testw (%bp), %dx")
#define TEST_DX_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X14 # testw (%si), %dx")
#define TEST_DX_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X15 # testw (%di), %dx")

#define TEST_DI_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X3F # testw (%bx), %di")
#define TEST_DI_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X7E, 0X00 # testw (%bp), %di")
#define TEST_DI_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X3C # testw (%si), %di")
#define TEST_DI_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X3D # testw (%di), %di")

#define TEST_SI_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X37 # testw (%bx), %si")
#define TEST_SI_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X76, 0X00 # testw (%bp), %si")
#define TEST_SI_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X34 # testw (%si), %si")
#define TEST_SI_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X35 # testw (%di), %si")

#define TEST_BP_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X2F # testw (%bx), %bp")
#define TEST_BP_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X6E, 0X00 # testw (%bp), %bp")
#define TEST_BP_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X2C # testw (%si), %bp")
#define TEST_BP_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X2D # testw (%di), %bp")

#define TEST_SP_FROM_PTR_BX CMT_ASM(".byte 0X85, 0X27 # testw (%bx), %sp")
#define TEST_SP_FROM_PTR_BP CMT_ASM(".byte 0X85, 0X66, 0X00 # testw (%bp), %sp")
#define TEST_SP_FROM_PTR_SI CMT_ASM(".byte 0X85, 0X24 # testw (%si), %sp")
#define TEST_SP_FROM_PTR_DI CMT_ASM(".byte 0X85, 0X25 # testw (%di), %sp")

#define TEST_AX_TO_PTR_BX CMT_ASM(".byte 0X85, 0X07 # testw %ax, (%bx)")
#define TEST_AX_TO_PTR_BP CMT_ASM(".byte 0X85, 0X46, 0X00 # testw %ax, (%bp)")
#define TEST_AX_TO_PTR_SI CMT_ASM(".byte 0X85, 0X04 # testw %ax, (%si)")
#define TEST_AX_TO_PTR_DI CMT_ASM(".byte 0X85, 0X05 # testw %ax, (%di)")

#define TEST_BX_TO_PTR_BX CMT_ASM(".byte 0X85, 0X1F # testw %bx, (%bx)")
#define TEST_BX_TO_PTR_BP CMT_ASM(".byte 0X85, 0X5E, 0X00 # testw %bx, (%bp)")
#define TEST_BX_TO_PTR_SI CMT_ASM(".byte 0X85, 0X1C # testw %bx, (%si)")
#define TEST_BX_TO_PTR_DI CMT_ASM(".byte 0X85, 0X1D # testw %bx, (%di)")

#define TEST_CX_TO_PTR_BX CMT_ASM(".byte 0X85, 0X0F # testw %cx, (%bx)")
#define TEST_CX_TO_PTR_BP CMT_ASM(".byte 0X85, 0X4E, 0X00 # testw %cx, (%bp)")
#define TEST_CX_TO_PTR_SI CMT_ASM(".byte 0X85, 0X0C # testw %cx, (%si)")
#define TEST_CX_TO_PTR_DI CMT_ASM(".byte 0X85, 0X0D # testw %cx, (%di)")

#define TEST_DX_TO_PTR_BX CMT_ASM(".byte 0X85, 0X17 # testw %dx, (%bx)")
#define TEST_DX_TO_PTR_BP CMT_ASM(".byte 0X85, 0X56, 0X00 # testw %dx, (%bp)")
#define TEST_DX_TO_PTR_SI CMT_ASM(".byte 0X85, 0X14 # testw %dx, (%si)")
#define TEST_DX_TO_PTR_DI CMT_ASM(".byte 0X85, 0X15 # testw %dx, (%di)")

#define TEST_DI_TO_PTR_BX CMT_ASM(".byte 0X85, 0X3F # testw %di, (%bx)")
#define TEST_DI_TO_PTR_BP CMT_ASM(".byte 0X85, 0X7E, 0X00 # testw %di, (%bp)")
#define TEST_DI_TO_PTR_SI CMT_ASM(".byte 0X85, 0X3C # testw %di, (%si)")
#define TEST_DI_TO_PTR_DI CMT_ASM(".byte 0X85, 0X3D # testw %di, (%di)")

#define TEST_SI_TO_PTR_BX CMT_ASM(".byte 0X85, 0X37 # testw %si, (%bx)")
#define TEST_SI_TO_PTR_BP CMT_ASM(".byte 0X85, 0X76, 0X00 # testw %si, (%bp)")
#define TEST_SI_TO_PTR_SI CMT_ASM(".byte 0X85, 0X34 # testw %si, (%si)")
#define TEST_SI_TO_PTR_DI CMT_ASM(".byte 0X85, 0X35 # testw %si, (%di)")

#define TEST_BP_TO_PTR_BX CMT_ASM(".byte 0X85, 0X2F # testw %bp, (%bx)")
#define TEST_BP_TO_PTR_BP CMT_ASM(".byte 0X85, 0X6E, 0X00 # testw %bp, (%bp)")
#define TEST_BP_TO_PTR_SI CMT_ASM(".byte 0X85, 0X2C # testw %bp, (%si)")
#define TEST_BP_TO_PTR_DI CMT_ASM(".byte 0X85, 0X2D # testw %bp, (%di)")

#define TEST_SP_TO_PTR_BX CMT_ASM(".byte 0X85, 0X27 # testw %sp, (%bx)")
#define TEST_SP_TO_PTR_BP CMT_ASM(".byte 0X85, 0X66, 0X00 # testw %sp, (%bp)")
#define TEST_SP_TO_PTR_SI CMT_ASM(".byte 0X85, 0X24 # testw %sp, (%si)")
#define TEST_SP_TO_PTR_DI CMT_ASM(".byte 0X85, 0X25 # testw %sp, (%di)")

#define TEST_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84 # testw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C # testw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C # testw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94 # testw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC # testw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4 # testw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC # testw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4 # testw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84 # testw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C # testw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C # testw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94 # testw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC # testw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4 # testw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC # testw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4 # testw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X05 # testw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X1D # testw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X0D # testw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X15 # testw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X3D # testw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X35 # testw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X2D # testw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X25 # testw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X05 # testw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X1D # testw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X0D # testw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X15 # testw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X3D # testw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X35 # testw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X2D # testw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X25 # testw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X00 # testw (%eax), %ax")
#define TEST_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X03 # testw (%ebx), %ax")
#define TEST_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X01 # testw (%ecx), %ax")
#define TEST_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X02 # testw (%edx), %ax")
#define TEST_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X07 # testw (%edi), %ax")
#define TEST_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X06 # testw (%esi), %ax")
#define TEST_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X45, 0X00 # testw (%ebp), %ax")
#define TEST_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X04, 0X24 # testw (%esp), %ax")
#define TEST_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X07 # testw (%bx), %ax")
#define TEST_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X46, 0X00 # testw (%bp), %ax")
#define TEST_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X04 # testw (%si), %ax")
#define TEST_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X05 # testw (%di), %ax")

#define TEST_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X18 # testw (%eax), %bx")
#define TEST_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X1B # testw (%ebx), %bx")
#define TEST_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X19 # testw (%ecx), %bx")
#define TEST_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X1A # testw (%edx), %bx")
#define TEST_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X1F # testw (%edi), %bx")
#define TEST_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X1E # testw (%esi), %bx")
#define TEST_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X5D, 0X00 # testw (%ebp), %bx")
#define TEST_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X24 # testw (%esp), %bx")
#define TEST_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1F # testw (%bx), %bx")
#define TEST_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X5E, 0X00 # testw (%bp), %bx")
#define TEST_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1C # testw (%si), %bx")
#define TEST_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1D # testw (%di), %bx")

#define TEST_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X08 # testw (%eax), %cx")
#define TEST_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X0B # testw (%ebx), %cx")
#define TEST_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X09 # testw (%ecx), %cx")
#define TEST_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X0A # testw (%edx), %cx")
#define TEST_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X0F # testw (%edi), %cx")
#define TEST_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X0E # testw (%esi), %cx")
#define TEST_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X4D, 0X00 # testw (%ebp), %cx")
#define TEST_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X24 # testw (%esp), %cx")
#define TEST_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0F # testw (%bx), %cx")
#define TEST_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X4E, 0X00 # testw (%bp), %cx")
#define TEST_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0C # testw (%si), %cx")
#define TEST_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0D # testw (%di), %cx")

#define TEST_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X10 # testw (%eax), %dx")
#define TEST_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X13 # testw (%ebx), %dx")
#define TEST_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X11 # testw (%ecx), %dx")
#define TEST_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X12 # testw (%edx), %dx")
#define TEST_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X17 # testw (%edi), %dx")
#define TEST_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X16 # testw (%esi), %dx")
#define TEST_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X55, 0X00 # testw (%ebp), %dx")
#define TEST_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X14, 0X24 # testw (%esp), %dx")
#define TEST_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X17 # testw (%bx), %dx")
#define TEST_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X56, 0X00 # testw (%bp), %dx")
#define TEST_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X14 # testw (%si), %dx")
#define TEST_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X15 # testw (%di), %dx")

#define TEST_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X38 # testw (%eax), %di")
#define TEST_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X3B # testw (%ebx), %di")
#define TEST_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X39 # testw (%ecx), %di")
#define TEST_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X3A # testw (%edx), %di")
#define TEST_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X3F # testw (%edi), %di")
#define TEST_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X3E # testw (%esi), %di")
#define TEST_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X7D, 0X00 # testw (%ebp), %di")
#define TEST_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X24 # testw (%esp), %di")
#define TEST_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3F # testw (%bx), %di")
#define TEST_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X7E, 0X00 # testw (%bp), %di")
#define TEST_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3C # testw (%si), %di")
#define TEST_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3D # testw (%di), %di")

#define TEST_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X30 # testw (%eax), %si")
#define TEST_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X33 # testw (%ebx), %si")
#define TEST_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X31 # testw (%ecx), %si")
#define TEST_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X32 # testw (%edx), %si")
#define TEST_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X37 # testw (%edi), %si")
#define TEST_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X36 # testw (%esi), %si")
#define TEST_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X75, 0X00 # testw (%ebp), %si")
#define TEST_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X34, 0X24 # testw (%esp), %si")
#define TEST_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X37 # testw (%bx), %si")
#define TEST_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X76, 0X00 # testw (%bp), %si")
#define TEST_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X34 # testw (%si), %si")
#define TEST_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X35 # testw (%di), %si")

#define TEST_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X28 # testw (%eax), %bp")
#define TEST_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X2B # testw (%ebx), %bp")
#define TEST_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X29 # testw (%ecx), %bp")
#define TEST_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X2A # testw (%edx), %bp")
#define TEST_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X2F # testw (%edi), %bp")
#define TEST_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X2E # testw (%esi), %bp")
#define TEST_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X6D, 0X00 # testw (%ebp), %bp")
#define TEST_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X24 # testw (%esp), %bp")
#define TEST_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2F # testw (%bx), %bp")
#define TEST_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X6E, 0X00 # testw (%bp), %bp")
#define TEST_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2C # testw (%si), %bp")
#define TEST_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2D # testw (%di), %bp")

#define TEST_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X20 # testw (%eax), %sp")
#define TEST_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X23 # testw (%ebx), %sp")
#define TEST_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X21 # testw (%ecx), %sp")
#define TEST_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X22 # testw (%edx), %sp")
#define TEST_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X27 # testw (%edi), %sp")
#define TEST_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X26 # testw (%esi), %sp")
#define TEST_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X65, 0X00 # testw (%ebp), %sp")
#define TEST_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X24, 0X24 # testw (%esp), %sp")
#define TEST_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X27 # testw (%bx), %sp")
#define TEST_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X66, 0X00 # testw (%bp), %sp")
#define TEST_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X24 # testw (%si), %sp")
#define TEST_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X25 # testw (%di), %sp")

#define TEST_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X00 # testw %ax, (%eax)")
#define TEST_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X03 # testw %ax, (%ebx)")
#define TEST_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X01 # testw %ax, (%ecx)")
#define TEST_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X02 # testw %ax, (%edx)")
#define TEST_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X07 # testw %ax, (%edi)")
#define TEST_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X06 # testw %ax, (%esi)")
#define TEST_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X45, 0X00 # testw %ax, (%ebp)")
#define TEST_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X04, 0X24 # testw %ax, (%esp)")
#define TEST_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X07 # testw %ax, (%bx)")
#define TEST_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X46, 0X00 # testw %ax, (%bp)")
#define TEST_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X04 # testw %ax, (%si)")
#define TEST_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X05 # testw %ax, (%di)")

#define TEST_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X18 # testw %bx, (%eax)")
#define TEST_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X1B # testw %bx, (%ebx)")
#define TEST_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X19 # testw %bx, (%ecx)")
#define TEST_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X1A # testw %bx, (%edx)")
#define TEST_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X1F # testw %bx, (%edi)")
#define TEST_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X1E # testw %bx, (%esi)")
#define TEST_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X5D, 0X00 # testw %bx, (%ebp)")
#define TEST_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X24 # testw %bx, (%esp)")
#define TEST_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1F # testw %bx, (%bx)")
#define TEST_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X5E, 0X00 # testw %bx, (%bp)")
#define TEST_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1C # testw %bx, (%si)")
#define TEST_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1D # testw %bx, (%di)")

#define TEST_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X08 # testw %cx, (%eax)")
#define TEST_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X0B # testw %cx, (%ebx)")
#define TEST_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X09 # testw %cx, (%ecx)")
#define TEST_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X0A # testw %cx, (%edx)")
#define TEST_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X0F # testw %cx, (%edi)")
#define TEST_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X0E # testw %cx, (%esi)")
#define TEST_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X4D, 0X00 # testw %cx, (%ebp)")
#define TEST_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X24 # testw %cx, (%esp)")
#define TEST_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0F # testw %cx, (%bx)")
#define TEST_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X4E, 0X00 # testw %cx, (%bp)")
#define TEST_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0C # testw %cx, (%si)")
#define TEST_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0D # testw %cx, (%di)")

#define TEST_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X10 # testw %dx, (%eax)")
#define TEST_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X13 # testw %dx, (%ebx)")
#define TEST_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X11 # testw %dx, (%ecx)")
#define TEST_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X12 # testw %dx, (%edx)")
#define TEST_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X17 # testw %dx, (%edi)")
#define TEST_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X16 # testw %dx, (%esi)")
#define TEST_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X55, 0X00 # testw %dx, (%ebp)")
#define TEST_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X14, 0X24 # testw %dx, (%esp)")
#define TEST_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X17 # testw %dx, (%bx)")
#define TEST_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X56, 0X00 # testw %dx, (%bp)")
#define TEST_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X14 # testw %dx, (%si)")
#define TEST_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X15 # testw %dx, (%di)")

#define TEST_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X38 # testw %di, (%eax)")
#define TEST_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X3B # testw %di, (%ebx)")
#define TEST_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X39 # testw %di, (%ecx)")
#define TEST_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X3A # testw %di, (%edx)")
#define TEST_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X3F # testw %di, (%edi)")
#define TEST_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X3E # testw %di, (%esi)")
#define TEST_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X7D, 0X00 # testw %di, (%ebp)")
#define TEST_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X24 # testw %di, (%esp)")
#define TEST_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3F # testw %di, (%bx)")
#define TEST_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X7E, 0X00 # testw %di, (%bp)")
#define TEST_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3C # testw %di, (%si)")
#define TEST_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3D # testw %di, (%di)")

#define TEST_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X30 # testw %si, (%eax)")
#define TEST_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X33 # testw %si, (%ebx)")
#define TEST_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X31 # testw %si, (%ecx)")
#define TEST_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X32 # testw %si, (%edx)")
#define TEST_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X37 # testw %si, (%edi)")
#define TEST_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X36 # testw %si, (%esi)")
#define TEST_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X75, 0X00 # testw %si, (%ebp)")
#define TEST_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X34, 0X24 # testw %si, (%esp)")
#define TEST_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X37 # testw %si, (%bx)")
#define TEST_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X76, 0X00 # testw %si, (%bp)")
#define TEST_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X34 # testw %si, (%si)")
#define TEST_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X35 # testw %si, (%di)")

#define TEST_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X28 # testw %bp, (%eax)")
#define TEST_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X2B # testw %bp, (%ebx)")
#define TEST_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X29 # testw %bp, (%ecx)")
#define TEST_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X2A # testw %bp, (%edx)")
#define TEST_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X2F # testw %bp, (%edi)")
#define TEST_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X2E # testw %bp, (%esi)")
#define TEST_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X6D, 0X00 # testw %bp, (%ebp)")
#define TEST_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X24 # testw %bp, (%esp)")
#define TEST_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2F # testw %bp, (%bx)")
#define TEST_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X6E, 0X00 # testw %bp, (%bp)")
#define TEST_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2C # testw %bp, (%si)")
#define TEST_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2D # testw %bp, (%di)")

#define TEST_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X85, 0X20 # testw %sp, (%eax)")
#define TEST_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X85, 0X23 # testw %sp, (%ebx)")
#define TEST_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X85, 0X21 # testw %sp, (%ecx)")
#define TEST_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X85, 0X22 # testw %sp, (%edx)")
#define TEST_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X85, 0X27 # testw %sp, (%edi)")
#define TEST_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X85, 0X26 # testw %sp, (%esi)")
#define TEST_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X85, 0X65, 0X00 # testw %sp, (%ebp)")
#define TEST_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X85, 0X24, 0X24 # testw %sp, (%esp)")
#define TEST_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X27 # testw %sp, (%bx)")
#define TEST_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X66, 0X00 # testw %sp, (%bp)")
#define TEST_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X24 # testw %sp, (%si)")
#define TEST_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X25 # testw %sp, (%di)")

#define TEST_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X80 # testw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X83 # testw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X81 # testw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X82 # testw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X87 # testw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X86 # testw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X85 # testw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X87 # testw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X86 # testw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X84 # testw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X85 # testw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X98 # testw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9B # testw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X99 # testw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9A # testw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9F # testw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9E # testw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9D # testw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9F # testw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9E # testw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9C # testw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9D # testw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X88 # testw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8B # testw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X89 # testw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8A # testw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8F # testw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8E # testw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8D # testw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8F # testw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8E # testw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8C # testw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8D # testw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X90 # testw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X93 # testw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X91 # testw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X92 # testw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X97 # testw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X96 # testw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X95 # testw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X97 # testw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X96 # testw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X94 # testw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X95 # testw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB8 # testw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBB # testw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB9 # testw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBA # testw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBF # testw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBE # testw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBD # testw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBF # testw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBE # testw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBC # testw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBD # testw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB0 # testw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB3 # testw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB1 # testw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB2 # testw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB7 # testw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB6 # testw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB5 # testw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB7 # testw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB6 # testw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB4 # testw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB5 # testw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA8 # testw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAB # testw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA9 # testw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAA # testw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAF # testw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAE # testw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAD # testw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAF # testw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAE # testw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAC # testw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAD # testw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA0 # testw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA3 # testw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA1 # testw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA2 # testw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA7 # testw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA6 # testw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA5 # testw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA7 # testw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA6 # testw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA4 # testw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA5 # testw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X80 # testw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X83 # testw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X81 # testw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X82 # testw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X87 # testw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X86 # testw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X85 # testw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X84, 0X24 # testw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X87 # testw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X86 # testw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X84 # testw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X85 # testw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X98 # testw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9B # testw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X99 # testw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9A # testw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9F # testw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9E # testw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9D # testw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9C, 0X24 # testw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9F # testw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9E # testw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9C # testw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9D # testw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X88 # testw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8B # testw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X89 # testw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8A # testw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8F # testw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8E # testw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8D # testw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8C, 0X24 # testw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8F # testw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8E # testw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8C # testw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8D # testw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X90 # testw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X93 # testw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X91 # testw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X92 # testw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X97 # testw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X96 # testw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X95 # testw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X94, 0X24 # testw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X97 # testw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X96 # testw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X94 # testw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X95 # testw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB8 # testw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBB # testw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB9 # testw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBA # testw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBF # testw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBE # testw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBD # testw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBC, 0X24 # testw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBF # testw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBE # testw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBC # testw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBD # testw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB0 # testw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB3 # testw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB1 # testw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB2 # testw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB7 # testw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB6 # testw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB5 # testw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB4, 0X24 # testw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB7 # testw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB6 # testw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB4 # testw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB5 # testw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA8 # testw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAB # testw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA9 # testw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAA # testw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAF # testw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAE # testw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAD # testw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAC, 0X24 # testw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAF # testw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAE # testw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAC # testw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAD # testw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA0 # testw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA3 # testw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA1 # testw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA2 # testw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA7 # testw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA6 # testw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA5 # testw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA4, 0X24 # testw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA7 # testw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA6 # testw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA4 # testw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA5 # testw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X04, 0X25 # testw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X25 # testw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X25 # testw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X14, 0X25 # testw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X25 # testw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X34, 0X25 # testw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X25 # testw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X24, 0X25 # testw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X04, 0X25 # testw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0C, 0X25 # testw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X14, 0X25 # testw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1C, 0X25 # testw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X24, 0X25 # testw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2C, 0X25 # testw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X34, 0X25 # testw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3C, 0X25 # testw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X04, 0X25 # testw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X25 # testw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X25 # testw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X14, 0X25 # testw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X25 # testw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X34, 0X25 # testw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X25 # testw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X24, 0X25 # testw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X04, 0X25 # testw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0C, 0X25 # testw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X14, 0X25 # testw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1C, 0X25 # testw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X24, 0X25 # testw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2C, 0X25 # testw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X34, 0X25 # testw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3C, 0X25 # testw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X00 # testw (%rax), %ax")
#define TEST_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X03 # testw (%rbx), %ax")
#define TEST_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X01 # testw (%rcx), %ax")
#define TEST_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X02 # testw (%rdx), %ax")
#define TEST_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X07 # testw (%rdi), %ax")
#define TEST_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X06 # testw (%rsi), %ax")
#define TEST_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X45, 0X00 # testw (%rbp), %ax")
#define TEST_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X04, 0X24 # testw (%rsp), %ax")
#define TEST_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X00 # testw (%r8), %ax")
#define TEST_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X01 # testw (%r9), %ax")
#define TEST_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X02 # testw (%r10), %ax")
#define TEST_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X03 # testw (%r11), %ax")
#define TEST_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X04, 0X24 # testw (%r12), %ax")
#define TEST_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X45, 0X00 # testw (%r13), %ax")
#define TEST_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X06 # testw (%r14), %ax")
#define TEST_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X07 # testw (%r15), %ax")
#define TEST_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X00 # testw (%eax), %ax")
#define TEST_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X03 # testw (%ebx), %ax")
#define TEST_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X01 # testw (%ecx), %ax")
#define TEST_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X02 # testw (%edx), %ax")
#define TEST_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X07 # testw (%edi), %ax")
#define TEST_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X06 # testw (%esi), %ax")
#define TEST_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X45, 0X00 # testw (%ebp), %ax")
#define TEST_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X04, 0X24 # testw (%esp), %ax")

#define TEST_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X18 # testw (%rax), %bx")
#define TEST_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X1B # testw (%rbx), %bx")
#define TEST_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X19 # testw (%rcx), %bx")
#define TEST_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X1A # testw (%rdx), %bx")
#define TEST_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X1F # testw (%rdi), %bx")
#define TEST_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X1E # testw (%rsi), %bx")
#define TEST_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X5D, 0X00 # testw (%rbp), %bx")
#define TEST_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X24 # testw (%rsp), %bx")
#define TEST_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X18 # testw (%r8), %bx")
#define TEST_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X19 # testw (%r9), %bx")
#define TEST_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1A # testw (%r10), %bx")
#define TEST_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1B # testw (%r11), %bx")
#define TEST_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1C, 0X24 # testw (%r12), %bx")
#define TEST_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X5D, 0X00 # testw (%r13), %bx")
#define TEST_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1E # testw (%r14), %bx")
#define TEST_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1F # testw (%r15), %bx")
#define TEST_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X18 # testw (%eax), %bx")
#define TEST_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1B # testw (%ebx), %bx")
#define TEST_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X19 # testw (%ecx), %bx")
#define TEST_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1A # testw (%edx), %bx")
#define TEST_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1F # testw (%edi), %bx")
#define TEST_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1E # testw (%esi), %bx")
#define TEST_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X5D, 0X00 # testw (%ebp), %bx")
#define TEST_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1C, 0X24 # testw (%esp), %bx")

#define TEST_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X08 # testw (%rax), %cx")
#define TEST_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X0B # testw (%rbx), %cx")
#define TEST_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X09 # testw (%rcx), %cx")
#define TEST_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X0A # testw (%rdx), %cx")
#define TEST_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X0F # testw (%rdi), %cx")
#define TEST_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X0E # testw (%rsi), %cx")
#define TEST_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X4D, 0X00 # testw (%rbp), %cx")
#define TEST_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X24 # testw (%rsp), %cx")
#define TEST_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X08 # testw (%r8), %cx")
#define TEST_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X09 # testw (%r9), %cx")
#define TEST_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0A # testw (%r10), %cx")
#define TEST_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0B # testw (%r11), %cx")
#define TEST_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0C, 0X24 # testw (%r12), %cx")
#define TEST_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X4D, 0X00 # testw (%r13), %cx")
#define TEST_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0E # testw (%r14), %cx")
#define TEST_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0F # testw (%r15), %cx")
#define TEST_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X08 # testw (%eax), %cx")
#define TEST_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0B # testw (%ebx), %cx")
#define TEST_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X09 # testw (%ecx), %cx")
#define TEST_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0A # testw (%edx), %cx")
#define TEST_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0F # testw (%edi), %cx")
#define TEST_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0E # testw (%esi), %cx")
#define TEST_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X4D, 0X00 # testw (%ebp), %cx")
#define TEST_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0C, 0X24 # testw (%esp), %cx")

#define TEST_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X10 # testw (%rax), %dx")
#define TEST_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X13 # testw (%rbx), %dx")
#define TEST_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X11 # testw (%rcx), %dx")
#define TEST_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X12 # testw (%rdx), %dx")
#define TEST_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X17 # testw (%rdi), %dx")
#define TEST_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X16 # testw (%rsi), %dx")
#define TEST_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X55, 0X00 # testw (%rbp), %dx")
#define TEST_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X14, 0X24 # testw (%rsp), %dx")
#define TEST_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X10 # testw (%r8), %dx")
#define TEST_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X11 # testw (%r9), %dx")
#define TEST_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X12 # testw (%r10), %dx")
#define TEST_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X13 # testw (%r11), %dx")
#define TEST_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X14, 0X24 # testw (%r12), %dx")
#define TEST_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X55, 0X00 # testw (%r13), %dx")
#define TEST_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X16 # testw (%r14), %dx")
#define TEST_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X17 # testw (%r15), %dx")
#define TEST_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X10 # testw (%eax), %dx")
#define TEST_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X13 # testw (%ebx), %dx")
#define TEST_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X11 # testw (%ecx), %dx")
#define TEST_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X12 # testw (%edx), %dx")
#define TEST_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X17 # testw (%edi), %dx")
#define TEST_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X16 # testw (%esi), %dx")
#define TEST_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X55, 0X00 # testw (%ebp), %dx")
#define TEST_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X14, 0X24 # testw (%esp), %dx")

#define TEST_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X38 # testw (%rax), %di")
#define TEST_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X3B # testw (%rbx), %di")
#define TEST_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X39 # testw (%rcx), %di")
#define TEST_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X3A # testw (%rdx), %di")
#define TEST_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X3F # testw (%rdi), %di")
#define TEST_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X3E # testw (%rsi), %di")
#define TEST_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X7D, 0X00 # testw (%rbp), %di")
#define TEST_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X24 # testw (%rsp), %di")
#define TEST_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X38 # testw (%r8), %di")
#define TEST_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X39 # testw (%r9), %di")
#define TEST_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3A # testw (%r10), %di")
#define TEST_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3B # testw (%r11), %di")
#define TEST_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3C, 0X24 # testw (%r12), %di")
#define TEST_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X7D, 0X00 # testw (%r13), %di")
#define TEST_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3E # testw (%r14), %di")
#define TEST_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3F # testw (%r15), %di")
#define TEST_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X38 # testw (%eax), %di")
#define TEST_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3B # testw (%ebx), %di")
#define TEST_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X39 # testw (%ecx), %di")
#define TEST_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3A # testw (%edx), %di")
#define TEST_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3F # testw (%edi), %di")
#define TEST_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3E # testw (%esi), %di")
#define TEST_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X7D, 0X00 # testw (%ebp), %di")
#define TEST_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3C, 0X24 # testw (%esp), %di")

#define TEST_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X30 # testw (%rax), %si")
#define TEST_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X33 # testw (%rbx), %si")
#define TEST_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X31 # testw (%rcx), %si")
#define TEST_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X32 # testw (%rdx), %si")
#define TEST_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X37 # testw (%rdi), %si")
#define TEST_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X36 # testw (%rsi), %si")
#define TEST_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X75, 0X00 # testw (%rbp), %si")
#define TEST_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X34, 0X24 # testw (%rsp), %si")
#define TEST_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X30 # testw (%r8), %si")
#define TEST_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X31 # testw (%r9), %si")
#define TEST_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X32 # testw (%r10), %si")
#define TEST_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X33 # testw (%r11), %si")
#define TEST_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X34, 0X24 # testw (%r12), %si")
#define TEST_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X75, 0X00 # testw (%r13), %si")
#define TEST_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X36 # testw (%r14), %si")
#define TEST_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X37 # testw (%r15), %si")
#define TEST_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X30 # testw (%eax), %si")
#define TEST_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X33 # testw (%ebx), %si")
#define TEST_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X31 # testw (%ecx), %si")
#define TEST_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X32 # testw (%edx), %si")
#define TEST_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X37 # testw (%edi), %si")
#define TEST_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X36 # testw (%esi), %si")
#define TEST_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X75, 0X00 # testw (%ebp), %si")
#define TEST_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X34, 0X24 # testw (%esp), %si")

#define TEST_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X28 # testw (%rax), %bp")
#define TEST_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X2B # testw (%rbx), %bp")
#define TEST_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X29 # testw (%rcx), %bp")
#define TEST_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X2A # testw (%rdx), %bp")
#define TEST_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X2F # testw (%rdi), %bp")
#define TEST_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X2E # testw (%rsi), %bp")
#define TEST_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X6D, 0X00 # testw (%rbp), %bp")
#define TEST_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X24 # testw (%rsp), %bp")
#define TEST_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X28 # testw (%r8), %bp")
#define TEST_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X29 # testw (%r9), %bp")
#define TEST_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2A # testw (%r10), %bp")
#define TEST_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2B # testw (%r11), %bp")
#define TEST_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2C, 0X24 # testw (%r12), %bp")
#define TEST_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X6D, 0X00 # testw (%r13), %bp")
#define TEST_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2E # testw (%r14), %bp")
#define TEST_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2F # testw (%r15), %bp")
#define TEST_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X28 # testw (%eax), %bp")
#define TEST_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2B # testw (%ebx), %bp")
#define TEST_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X29 # testw (%ecx), %bp")
#define TEST_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2A # testw (%edx), %bp")
#define TEST_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2F # testw (%edi), %bp")
#define TEST_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2E # testw (%esi), %bp")
#define TEST_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X6D, 0X00 # testw (%ebp), %bp")
#define TEST_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2C, 0X24 # testw (%esp), %bp")

#define TEST_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X20 # testw (%rax), %sp")
#define TEST_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X23 # testw (%rbx), %sp")
#define TEST_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X21 # testw (%rcx), %sp")
#define TEST_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X22 # testw (%rdx), %sp")
#define TEST_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X27 # testw (%rdi), %sp")
#define TEST_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X26 # testw (%rsi), %sp")
#define TEST_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X65, 0X00 # testw (%rbp), %sp")
#define TEST_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X24, 0X24 # testw (%rsp), %sp")
#define TEST_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X20 # testw (%r8), %sp")
#define TEST_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X21 # testw (%r9), %sp")
#define TEST_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X22 # testw (%r10), %sp")
#define TEST_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X23 # testw (%r11), %sp")
#define TEST_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X24, 0X24 # testw (%r12), %sp")
#define TEST_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X65, 0X00 # testw (%r13), %sp")
#define TEST_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X26 # testw (%r14), %sp")
#define TEST_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X27 # testw (%r15), %sp")
#define TEST_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X20 # testw (%eax), %sp")
#define TEST_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X23 # testw (%ebx), %sp")
#define TEST_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X21 # testw (%ecx), %sp")
#define TEST_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X22 # testw (%edx), %sp")
#define TEST_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X27 # testw (%edi), %sp")
#define TEST_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X26 # testw (%esi), %sp")
#define TEST_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X65, 0X00 # testw (%ebp), %sp")
#define TEST_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X24, 0X24 # testw (%esp), %sp")

#define TEST_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X00 # testw (%rax), %r8w")
#define TEST_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X03 # testw (%rbx), %r8w")
#define TEST_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X01 # testw (%rcx), %r8w")
#define TEST_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X02 # testw (%rdx), %r8w")
#define TEST_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X07 # testw (%rdi), %r8w")
#define TEST_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X06 # testw (%rsi), %r8w")
#define TEST_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X45, 0X00 # testw (%rbp), %r8w")
#define TEST_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X04, 0X24 # testw (%rsp), %r8w")
#define TEST_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X00 # testw (%r8), %r8w")
#define TEST_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X01 # testw (%r9), %r8w")
#define TEST_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X02 # testw (%r10), %r8w")
#define TEST_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X03 # testw (%r11), %r8w")
#define TEST_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X04, 0X24 # testw (%r12), %r8w")
#define TEST_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X45, 0X00 # testw (%r13), %r8w")
#define TEST_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X06 # testw (%r14), %r8w")
#define TEST_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X07 # testw (%r15), %r8w")
#define TEST_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X00 # testw (%eax), %r8w")
#define TEST_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X03 # testw (%ebx), %r8w")
#define TEST_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X01 # testw (%ecx), %r8w")
#define TEST_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X02 # testw (%edx), %r8w")
#define TEST_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X07 # testw (%edi), %r8w")
#define TEST_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X06 # testw (%esi), %r8w")
#define TEST_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X45, 0X00 # testw (%ebp), %r8w")
#define TEST_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X04, 0X24 # testw (%esp), %r8w")

#define TEST_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X08 # testw (%rax), %r9w")
#define TEST_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0B # testw (%rbx), %r9w")
#define TEST_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X09 # testw (%rcx), %r9w")
#define TEST_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0A # testw (%rdx), %r9w")
#define TEST_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0F # testw (%rdi), %r9w")
#define TEST_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0E # testw (%rsi), %r9w")
#define TEST_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X4D, 0X00 # testw (%rbp), %r9w")
#define TEST_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0C, 0X24 # testw (%rsp), %r9w")
#define TEST_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X08 # testw (%r8), %r9w")
#define TEST_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X09 # testw (%r9), %r9w")
#define TEST_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0A # testw (%r10), %r9w")
#define TEST_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0B # testw (%r11), %r9w")
#define TEST_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0C, 0X24 # testw (%r12), %r9w")
#define TEST_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X4D, 0X00 # testw (%r13), %r9w")
#define TEST_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0E # testw (%r14), %r9w")
#define TEST_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0F # testw (%r15), %r9w")
#define TEST_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X08 # testw (%eax), %r9w")
#define TEST_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0B # testw (%ebx), %r9w")
#define TEST_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X09 # testw (%ecx), %r9w")
#define TEST_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0A # testw (%edx), %r9w")
#define TEST_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0F # testw (%edi), %r9w")
#define TEST_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0E # testw (%esi), %r9w")
#define TEST_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X4D, 0X00 # testw (%ebp), %r9w")
#define TEST_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0C, 0X24 # testw (%esp), %r9w")

#define TEST_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X10 # testw (%rax), %r10w")
#define TEST_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X13 # testw (%rbx), %r10w")
#define TEST_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X11 # testw (%rcx), %r10w")
#define TEST_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X12 # testw (%rdx), %r10w")
#define TEST_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X17 # testw (%rdi), %r10w")
#define TEST_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X16 # testw (%rsi), %r10w")
#define TEST_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X55, 0X00 # testw (%rbp), %r10w")
#define TEST_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X14, 0X24 # testw (%rsp), %r10w")
#define TEST_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X10 # testw (%r8), %r10w")
#define TEST_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X11 # testw (%r9), %r10w")
#define TEST_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X12 # testw (%r10), %r10w")
#define TEST_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X13 # testw (%r11), %r10w")
#define TEST_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X14, 0X24 # testw (%r12), %r10w")
#define TEST_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X55, 0X00 # testw (%r13), %r10w")
#define TEST_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X16 # testw (%r14), %r10w")
#define TEST_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X17 # testw (%r15), %r10w")
#define TEST_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X10 # testw (%eax), %r10w")
#define TEST_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X13 # testw (%ebx), %r10w")
#define TEST_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X11 # testw (%ecx), %r10w")
#define TEST_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X12 # testw (%edx), %r10w")
#define TEST_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X17 # testw (%edi), %r10w")
#define TEST_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X16 # testw (%esi), %r10w")
#define TEST_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X55, 0X00 # testw (%ebp), %r10w")
#define TEST_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X14, 0X24 # testw (%esp), %r10w")

#define TEST_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X18 # testw (%rax), %r11w")
#define TEST_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1B # testw (%rbx), %r11w")
#define TEST_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X19 # testw (%rcx), %r11w")
#define TEST_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1A # testw (%rdx), %r11w")
#define TEST_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1F # testw (%rdi), %r11w")
#define TEST_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1E # testw (%rsi), %r11w")
#define TEST_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X5D, 0X00 # testw (%rbp), %r11w")
#define TEST_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1C, 0X24 # testw (%rsp), %r11w")
#define TEST_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X18 # testw (%r8), %r11w")
#define TEST_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X19 # testw (%r9), %r11w")
#define TEST_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1A # testw (%r10), %r11w")
#define TEST_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1B # testw (%r11), %r11w")
#define TEST_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1C, 0X24 # testw (%r12), %r11w")
#define TEST_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X5D, 0X00 # testw (%r13), %r11w")
#define TEST_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1E # testw (%r14), %r11w")
#define TEST_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1F # testw (%r15), %r11w")
#define TEST_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X18 # testw (%eax), %r11w")
#define TEST_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1B # testw (%ebx), %r11w")
#define TEST_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X19 # testw (%ecx), %r11w")
#define TEST_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1A # testw (%edx), %r11w")
#define TEST_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1F # testw (%edi), %r11w")
#define TEST_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1E # testw (%esi), %r11w")
#define TEST_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X5D, 0X00 # testw (%ebp), %r11w")
#define TEST_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1C, 0X24 # testw (%esp), %r11w")

#define TEST_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X20 # testw (%rax), %r12w")
#define TEST_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X23 # testw (%rbx), %r12w")
#define TEST_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X21 # testw (%rcx), %r12w")
#define TEST_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X22 # testw (%rdx), %r12w")
#define TEST_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X27 # testw (%rdi), %r12w")
#define TEST_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X26 # testw (%rsi), %r12w")
#define TEST_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X65, 0X00 # testw (%rbp), %r12w")
#define TEST_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X24, 0X24 # testw (%rsp), %r12w")
#define TEST_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X20 # testw (%r8), %r12w")
#define TEST_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X21 # testw (%r9), %r12w")
#define TEST_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X22 # testw (%r10), %r12w")
#define TEST_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X23 # testw (%r11), %r12w")
#define TEST_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X24, 0X24 # testw (%r12), %r12w")
#define TEST_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X65, 0X00 # testw (%r13), %r12w")
#define TEST_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X26 # testw (%r14), %r12w")
#define TEST_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X27 # testw (%r15), %r12w")
#define TEST_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X20 # testw (%eax), %r12w")
#define TEST_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X23 # testw (%ebx), %r12w")
#define TEST_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X21 # testw (%ecx), %r12w")
#define TEST_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X22 # testw (%edx), %r12w")
#define TEST_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X27 # testw (%edi), %r12w")
#define TEST_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X26 # testw (%esi), %r12w")
#define TEST_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X65, 0X00 # testw (%ebp), %r12w")
#define TEST_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X24, 0X24 # testw (%esp), %r12w")

#define TEST_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X28 # testw (%rax), %r13w")
#define TEST_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2B # testw (%rbx), %r13w")
#define TEST_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X29 # testw (%rcx), %r13w")
#define TEST_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2A # testw (%rdx), %r13w")
#define TEST_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2F # testw (%rdi), %r13w")
#define TEST_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2E # testw (%rsi), %r13w")
#define TEST_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X6D, 0X00 # testw (%rbp), %r13w")
#define TEST_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2C, 0X24 # testw (%rsp), %r13w")
#define TEST_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X28 # testw (%r8), %r13w")
#define TEST_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X29 # testw (%r9), %r13w")
#define TEST_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2A # testw (%r10), %r13w")
#define TEST_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2B # testw (%r11), %r13w")
#define TEST_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2C, 0X24 # testw (%r12), %r13w")
#define TEST_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X6D, 0X00 # testw (%r13), %r13w")
#define TEST_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2E # testw (%r14), %r13w")
#define TEST_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2F # testw (%r15), %r13w")
#define TEST_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X28 # testw (%eax), %r13w")
#define TEST_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2B # testw (%ebx), %r13w")
#define TEST_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X29 # testw (%ecx), %r13w")
#define TEST_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2A # testw (%edx), %r13w")
#define TEST_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2F # testw (%edi), %r13w")
#define TEST_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2E # testw (%esi), %r13w")
#define TEST_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X6D, 0X00 # testw (%ebp), %r13w")
#define TEST_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2C, 0X24 # testw (%esp), %r13w")

#define TEST_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X30 # testw (%rax), %r14w")
#define TEST_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X33 # testw (%rbx), %r14w")
#define TEST_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X31 # testw (%rcx), %r14w")
#define TEST_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X32 # testw (%rdx), %r14w")
#define TEST_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X37 # testw (%rdi), %r14w")
#define TEST_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X36 # testw (%rsi), %r14w")
#define TEST_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X75, 0X00 # testw (%rbp), %r14w")
#define TEST_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X34, 0X24 # testw (%rsp), %r14w")
#define TEST_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X30 # testw (%r8), %r14w")
#define TEST_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X31 # testw (%r9), %r14w")
#define TEST_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X32 # testw (%r10), %r14w")
#define TEST_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X33 # testw (%r11), %r14w")
#define TEST_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X34, 0X24 # testw (%r12), %r14w")
#define TEST_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X75, 0X00 # testw (%r13), %r14w")
#define TEST_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X36 # testw (%r14), %r14w")
#define TEST_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X37 # testw (%r15), %r14w")
#define TEST_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X30 # testw (%eax), %r14w")
#define TEST_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X33 # testw (%ebx), %r14w")
#define TEST_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X31 # testw (%ecx), %r14w")
#define TEST_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X32 # testw (%edx), %r14w")
#define TEST_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X37 # testw (%edi), %r14w")
#define TEST_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X36 # testw (%esi), %r14w")
#define TEST_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X75, 0X00 # testw (%ebp), %r14w")
#define TEST_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X34, 0X24 # testw (%esp), %r14w")

#define TEST_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X38 # testw (%rax), %r15w")
#define TEST_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3B # testw (%rbx), %r15w")
#define TEST_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X39 # testw (%rcx), %r15w")
#define TEST_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3A # testw (%rdx), %r15w")
#define TEST_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3F # testw (%rdi), %r15w")
#define TEST_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3E # testw (%rsi), %r15w")
#define TEST_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X7D, 0X00 # testw (%rbp), %r15w")
#define TEST_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3C, 0X24 # testw (%rsp), %r15w")
#define TEST_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X38 # testw (%r8), %r15w")
#define TEST_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X39 # testw (%r9), %r15w")
#define TEST_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3A # testw (%r10), %r15w")
#define TEST_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3B # testw (%r11), %r15w")
#define TEST_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3C, 0X24 # testw (%r12), %r15w")
#define TEST_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X7D, 0X00 # testw (%r13), %r15w")
#define TEST_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3E # testw (%r14), %r15w")
#define TEST_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3F # testw (%r15), %r15w")
#define TEST_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X38 # testw (%eax), %r15w")
#define TEST_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3B # testw (%ebx), %r15w")
#define TEST_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X39 # testw (%ecx), %r15w")
#define TEST_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3A # testw (%edx), %r15w")
#define TEST_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3F # testw (%edi), %r15w")
#define TEST_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3E # testw (%esi), %r15w")
#define TEST_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X7D, 0X00 # testw (%ebp), %r15w")
#define TEST_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3C, 0X24 # testw (%esp), %r15w")

#define TEST_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X00 # testw %ax, (%rax)")
#define TEST_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X03 # testw %ax, (%rbx)")
#define TEST_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X01 # testw %ax, (%rcx)")
#define TEST_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X02 # testw %ax, (%rdx)")
#define TEST_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X07 # testw %ax, (%rdi)")
#define TEST_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X06 # testw %ax, (%rsi)")
#define TEST_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X45, 0X00 # testw %ax, (%rbp)")
#define TEST_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X04, 0X24 # testw %ax, (%rsp)")
#define TEST_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X00 # testw %ax, (%r8)")
#define TEST_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X01 # testw %ax, (%r9)")
#define TEST_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X02 # testw %ax, (%r10)")
#define TEST_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X03 # testw %ax, (%r11)")
#define TEST_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X04, 0X24 # testw %ax, (%r12)")
#define TEST_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X45, 0X00 # testw %ax, (%r13)")
#define TEST_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X06 # testw %ax, (%r14)")
#define TEST_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X07 # testw %ax, (%r15)")
#define TEST_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X00 # testw %ax, (%eax)")
#define TEST_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X03 # testw %ax, (%ebx)")
#define TEST_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X01 # testw %ax, (%ecx)")
#define TEST_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X02 # testw %ax, (%edx)")
#define TEST_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X07 # testw %ax, (%edi)")
#define TEST_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X06 # testw %ax, (%esi)")
#define TEST_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X45, 0X00 # testw %ax, (%ebp)")
#define TEST_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X04, 0X24 # testw %ax, (%esp)")

#define TEST_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X18 # testw %bx, (%rax)")
#define TEST_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X1B # testw %bx, (%rbx)")
#define TEST_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X19 # testw %bx, (%rcx)")
#define TEST_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X1A # testw %bx, (%rdx)")
#define TEST_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X1F # testw %bx, (%rdi)")
#define TEST_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X1E # testw %bx, (%rsi)")
#define TEST_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X5D, 0X00 # testw %bx, (%rbp)")
#define TEST_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X1C, 0X24 # testw %bx, (%rsp)")
#define TEST_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X18 # testw %bx, (%r8)")
#define TEST_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X19 # testw %bx, (%r9)")
#define TEST_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1A # testw %bx, (%r10)")
#define TEST_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1B # testw %bx, (%r11)")
#define TEST_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1C, 0X24 # testw %bx, (%r12)")
#define TEST_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X5D, 0X00 # testw %bx, (%r13)")
#define TEST_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1E # testw %bx, (%r14)")
#define TEST_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X1F # testw %bx, (%r15)")
#define TEST_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X18 # testw %bx, (%eax)")
#define TEST_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1B # testw %bx, (%ebx)")
#define TEST_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X19 # testw %bx, (%ecx)")
#define TEST_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1A # testw %bx, (%edx)")
#define TEST_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1F # testw %bx, (%edi)")
#define TEST_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1E # testw %bx, (%esi)")
#define TEST_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X5D, 0X00 # testw %bx, (%ebp)")
#define TEST_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X1C, 0X24 # testw %bx, (%esp)")

#define TEST_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X08 # testw %cx, (%rax)")
#define TEST_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X0B # testw %cx, (%rbx)")
#define TEST_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X09 # testw %cx, (%rcx)")
#define TEST_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X0A # testw %cx, (%rdx)")
#define TEST_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X0F # testw %cx, (%rdi)")
#define TEST_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X0E # testw %cx, (%rsi)")
#define TEST_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X4D, 0X00 # testw %cx, (%rbp)")
#define TEST_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X0C, 0X24 # testw %cx, (%rsp)")
#define TEST_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X08 # testw %cx, (%r8)")
#define TEST_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X09 # testw %cx, (%r9)")
#define TEST_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0A # testw %cx, (%r10)")
#define TEST_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0B # testw %cx, (%r11)")
#define TEST_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0C, 0X24 # testw %cx, (%r12)")
#define TEST_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X4D, 0X00 # testw %cx, (%r13)")
#define TEST_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0E # testw %cx, (%r14)")
#define TEST_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X0F # testw %cx, (%r15)")
#define TEST_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X08 # testw %cx, (%eax)")
#define TEST_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0B # testw %cx, (%ebx)")
#define TEST_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X09 # testw %cx, (%ecx)")
#define TEST_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0A # testw %cx, (%edx)")
#define TEST_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0F # testw %cx, (%edi)")
#define TEST_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0E # testw %cx, (%esi)")
#define TEST_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X4D, 0X00 # testw %cx, (%ebp)")
#define TEST_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X0C, 0X24 # testw %cx, (%esp)")

#define TEST_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X10 # testw %dx, (%rax)")
#define TEST_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X13 # testw %dx, (%rbx)")
#define TEST_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X11 # testw %dx, (%rcx)")
#define TEST_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X12 # testw %dx, (%rdx)")
#define TEST_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X17 # testw %dx, (%rdi)")
#define TEST_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X16 # testw %dx, (%rsi)")
#define TEST_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X55, 0X00 # testw %dx, (%rbp)")
#define TEST_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X14, 0X24 # testw %dx, (%rsp)")
#define TEST_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X10 # testw %dx, (%r8)")
#define TEST_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X11 # testw %dx, (%r9)")
#define TEST_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X12 # testw %dx, (%r10)")
#define TEST_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X13 # testw %dx, (%r11)")
#define TEST_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X14, 0X24 # testw %dx, (%r12)")
#define TEST_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X55, 0X00 # testw %dx, (%r13)")
#define TEST_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X16 # testw %dx, (%r14)")
#define TEST_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X17 # testw %dx, (%r15)")
#define TEST_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X10 # testw %dx, (%eax)")
#define TEST_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X13 # testw %dx, (%ebx)")
#define TEST_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X11 # testw %dx, (%ecx)")
#define TEST_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X12 # testw %dx, (%edx)")
#define TEST_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X17 # testw %dx, (%edi)")
#define TEST_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X16 # testw %dx, (%esi)")
#define TEST_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X55, 0X00 # testw %dx, (%ebp)")
#define TEST_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X14, 0X24 # testw %dx, (%esp)")

#define TEST_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X38 # testw %di, (%rax)")
#define TEST_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X3B # testw %di, (%rbx)")
#define TEST_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X39 # testw %di, (%rcx)")
#define TEST_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X3A # testw %di, (%rdx)")
#define TEST_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X3F # testw %di, (%rdi)")
#define TEST_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X3E # testw %di, (%rsi)")
#define TEST_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X7D, 0X00 # testw %di, (%rbp)")
#define TEST_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X3C, 0X24 # testw %di, (%rsp)")
#define TEST_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X38 # testw %di, (%r8)")
#define TEST_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X39 # testw %di, (%r9)")
#define TEST_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3A # testw %di, (%r10)")
#define TEST_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3B # testw %di, (%r11)")
#define TEST_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3C, 0X24 # testw %di, (%r12)")
#define TEST_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X7D, 0X00 # testw %di, (%r13)")
#define TEST_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3E # testw %di, (%r14)")
#define TEST_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X3F # testw %di, (%r15)")
#define TEST_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X38 # testw %di, (%eax)")
#define TEST_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3B # testw %di, (%ebx)")
#define TEST_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X39 # testw %di, (%ecx)")
#define TEST_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3A # testw %di, (%edx)")
#define TEST_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3F # testw %di, (%edi)")
#define TEST_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3E # testw %di, (%esi)")
#define TEST_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X7D, 0X00 # testw %di, (%ebp)")
#define TEST_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X3C, 0X24 # testw %di, (%esp)")

#define TEST_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X30 # testw %si, (%rax)")
#define TEST_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X33 # testw %si, (%rbx)")
#define TEST_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X31 # testw %si, (%rcx)")
#define TEST_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X32 # testw %si, (%rdx)")
#define TEST_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X37 # testw %si, (%rdi)")
#define TEST_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X36 # testw %si, (%rsi)")
#define TEST_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X75, 0X00 # testw %si, (%rbp)")
#define TEST_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X34, 0X24 # testw %si, (%rsp)")
#define TEST_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X30 # testw %si, (%r8)")
#define TEST_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X31 # testw %si, (%r9)")
#define TEST_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X32 # testw %si, (%r10)")
#define TEST_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X33 # testw %si, (%r11)")
#define TEST_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X34, 0X24 # testw %si, (%r12)")
#define TEST_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X75, 0X00 # testw %si, (%r13)")
#define TEST_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X36 # testw %si, (%r14)")
#define TEST_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X37 # testw %si, (%r15)")
#define TEST_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X30 # testw %si, (%eax)")
#define TEST_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X33 # testw %si, (%ebx)")
#define TEST_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X31 # testw %si, (%ecx)")
#define TEST_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X32 # testw %si, (%edx)")
#define TEST_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X37 # testw %si, (%edi)")
#define TEST_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X36 # testw %si, (%esi)")
#define TEST_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X75, 0X00 # testw %si, (%ebp)")
#define TEST_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X34, 0X24 # testw %si, (%esp)")

#define TEST_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X28 # testw %bp, (%rax)")
#define TEST_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X2B # testw %bp, (%rbx)")
#define TEST_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X29 # testw %bp, (%rcx)")
#define TEST_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X2A # testw %bp, (%rdx)")
#define TEST_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X2F # testw %bp, (%rdi)")
#define TEST_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X2E # testw %bp, (%rsi)")
#define TEST_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X6D, 0X00 # testw %bp, (%rbp)")
#define TEST_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X2C, 0X24 # testw %bp, (%rsp)")
#define TEST_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X28 # testw %bp, (%r8)")
#define TEST_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X29 # testw %bp, (%r9)")
#define TEST_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2A # testw %bp, (%r10)")
#define TEST_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2B # testw %bp, (%r11)")
#define TEST_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2C, 0X24 # testw %bp, (%r12)")
#define TEST_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X6D, 0X00 # testw %bp, (%r13)")
#define TEST_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2E # testw %bp, (%r14)")
#define TEST_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X2F # testw %bp, (%r15)")
#define TEST_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X28 # testw %bp, (%eax)")
#define TEST_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2B # testw %bp, (%ebx)")
#define TEST_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X29 # testw %bp, (%ecx)")
#define TEST_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2A # testw %bp, (%edx)")
#define TEST_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2F # testw %bp, (%edi)")
#define TEST_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2E # testw %bp, (%esi)")
#define TEST_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X6D, 0X00 # testw %bp, (%ebp)")
#define TEST_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X2C, 0X24 # testw %bp, (%esp)")

#define TEST_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X85, 0X20 # testw %sp, (%rax)")
#define TEST_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X85, 0X23 # testw %sp, (%rbx)")
#define TEST_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X85, 0X21 # testw %sp, (%rcx)")
#define TEST_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X85, 0X22 # testw %sp, (%rdx)")
#define TEST_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X85, 0X27 # testw %sp, (%rdi)")
#define TEST_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X85, 0X26 # testw %sp, (%rsi)")
#define TEST_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X85, 0X65, 0X00 # testw %sp, (%rbp)")
#define TEST_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X85, 0X24, 0X24 # testw %sp, (%rsp)")
#define TEST_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X20 # testw %sp, (%r8)")
#define TEST_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X21 # testw %sp, (%r9)")
#define TEST_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X22 # testw %sp, (%r10)")
#define TEST_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X23 # testw %sp, (%r11)")
#define TEST_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X24, 0X24 # testw %sp, (%r12)")
#define TEST_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X65, 0X00 # testw %sp, (%r13)")
#define TEST_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X26 # testw %sp, (%r14)")
#define TEST_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X85, 0X27 # testw %sp, (%r15)")
#define TEST_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X20 # testw %sp, (%eax)")
#define TEST_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X23 # testw %sp, (%ebx)")
#define TEST_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X21 # testw %sp, (%ecx)")
#define TEST_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X85, 0X22 # testw %sp, (%edx)")
#define TEST_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X27 # testw %sp, (%edi)")
#define TEST_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X85, 0X26 # testw %sp, (%esi)")
#define TEST_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X65, 0X00 # testw %sp, (%ebp)")
#define TEST_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X85, 0X24, 0X24 # testw %sp, (%esp)")

#define TEST_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X00 # testw %r8w, (%rax)")
#define TEST_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X03 # testw %r8w, (%rbx)")
#define TEST_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X01 # testw %r8w, (%rcx)")
#define TEST_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X02 # testw %r8w, (%rdx)")
#define TEST_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X07 # testw %r8w, (%rdi)")
#define TEST_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X06 # testw %r8w, (%rsi)")
#define TEST_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X45, 0X00 # testw %r8w, (%rbp)")
#define TEST_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X04, 0X24 # testw %r8w, (%rsp)")
#define TEST_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X00 # testw %r8w, (%r8)")
#define TEST_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X01 # testw %r8w, (%r9)")
#define TEST_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X02 # testw %r8w, (%r10)")
#define TEST_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X03 # testw %r8w, (%r11)")
#define TEST_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X04, 0X24 # testw %r8w, (%r12)")
#define TEST_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X45, 0X00 # testw %r8w, (%r13)")
#define TEST_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X06 # testw %r8w, (%r14)")
#define TEST_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X07 # testw %r8w, (%r15)")
#define TEST_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X00 # testw %r8w, (%eax)")
#define TEST_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X03 # testw %r8w, (%ebx)")
#define TEST_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X01 # testw %r8w, (%ecx)")
#define TEST_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X02 # testw %r8w, (%edx)")
#define TEST_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X07 # testw %r8w, (%edi)")
#define TEST_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X06 # testw %r8w, (%esi)")
#define TEST_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X45, 0X00 # testw %r8w, (%ebp)")
#define TEST_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X04, 0X24 # testw %r8w, (%esp)")

#define TEST_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X08 # testw %r9w, (%rax)")
#define TEST_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0B # testw %r9w, (%rbx)")
#define TEST_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X09 # testw %r9w, (%rcx)")
#define TEST_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0A # testw %r9w, (%rdx)")
#define TEST_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0F # testw %r9w, (%rdi)")
#define TEST_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0E # testw %r9w, (%rsi)")
#define TEST_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X4D, 0X00 # testw %r9w, (%rbp)")
#define TEST_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X0C, 0X24 # testw %r9w, (%rsp)")
#define TEST_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X08 # testw %r9w, (%r8)")
#define TEST_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X09 # testw %r9w, (%r9)")
#define TEST_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0A # testw %r9w, (%r10)")
#define TEST_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0B # testw %r9w, (%r11)")
#define TEST_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0C, 0X24 # testw %r9w, (%r12)")
#define TEST_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X4D, 0X00 # testw %r9w, (%r13)")
#define TEST_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0E # testw %r9w, (%r14)")
#define TEST_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X0F # testw %r9w, (%r15)")
#define TEST_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X08 # testw %r9w, (%eax)")
#define TEST_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0B # testw %r9w, (%ebx)")
#define TEST_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X09 # testw %r9w, (%ecx)")
#define TEST_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0A # testw %r9w, (%edx)")
#define TEST_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0F # testw %r9w, (%edi)")
#define TEST_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0E # testw %r9w, (%esi)")
#define TEST_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X4D, 0X00 # testw %r9w, (%ebp)")
#define TEST_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X0C, 0X24 # testw %r9w, (%esp)")

#define TEST_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X10 # testw %r10w, (%rax)")
#define TEST_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X13 # testw %r10w, (%rbx)")
#define TEST_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X11 # testw %r10w, (%rcx)")
#define TEST_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X12 # testw %r10w, (%rdx)")
#define TEST_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X17 # testw %r10w, (%rdi)")
#define TEST_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X16 # testw %r10w, (%rsi)")
#define TEST_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X55, 0X00 # testw %r10w, (%rbp)")
#define TEST_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X14, 0X24 # testw %r10w, (%rsp)")
#define TEST_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X10 # testw %r10w, (%r8)")
#define TEST_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X11 # testw %r10w, (%r9)")
#define TEST_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X12 # testw %r10w, (%r10)")
#define TEST_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X13 # testw %r10w, (%r11)")
#define TEST_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X14, 0X24 # testw %r10w, (%r12)")
#define TEST_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X55, 0X00 # testw %r10w, (%r13)")
#define TEST_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X16 # testw %r10w, (%r14)")
#define TEST_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X17 # testw %r10w, (%r15)")
#define TEST_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X10 # testw %r10w, (%eax)")
#define TEST_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X13 # testw %r10w, (%ebx)")
#define TEST_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X11 # testw %r10w, (%ecx)")
#define TEST_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X12 # testw %r10w, (%edx)")
#define TEST_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X17 # testw %r10w, (%edi)")
#define TEST_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X16 # testw %r10w, (%esi)")
#define TEST_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X55, 0X00 # testw %r10w, (%ebp)")
#define TEST_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X14, 0X24 # testw %r10w, (%esp)")

#define TEST_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X18 # testw %r11w, (%rax)")
#define TEST_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1B # testw %r11w, (%rbx)")
#define TEST_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X19 # testw %r11w, (%rcx)")
#define TEST_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1A # testw %r11w, (%rdx)")
#define TEST_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1F # testw %r11w, (%rdi)")
#define TEST_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1E # testw %r11w, (%rsi)")
#define TEST_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X5D, 0X00 # testw %r11w, (%rbp)")
#define TEST_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X1C, 0X24 # testw %r11w, (%rsp)")
#define TEST_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X18 # testw %r11w, (%r8)")
#define TEST_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X19 # testw %r11w, (%r9)")
#define TEST_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1A # testw %r11w, (%r10)")
#define TEST_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1B # testw %r11w, (%r11)")
#define TEST_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1C, 0X24 # testw %r11w, (%r12)")
#define TEST_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X5D, 0X00 # testw %r11w, (%r13)")
#define TEST_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1E # testw %r11w, (%r14)")
#define TEST_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X1F # testw %r11w, (%r15)")
#define TEST_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X18 # testw %r11w, (%eax)")
#define TEST_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1B # testw %r11w, (%ebx)")
#define TEST_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X19 # testw %r11w, (%ecx)")
#define TEST_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1A # testw %r11w, (%edx)")
#define TEST_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1F # testw %r11w, (%edi)")
#define TEST_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1E # testw %r11w, (%esi)")
#define TEST_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X5D, 0X00 # testw %r11w, (%ebp)")
#define TEST_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X1C, 0X24 # testw %r11w, (%esp)")

#define TEST_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X20 # testw %r12w, (%rax)")
#define TEST_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X23 # testw %r12w, (%rbx)")
#define TEST_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X21 # testw %r12w, (%rcx)")
#define TEST_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X22 # testw %r12w, (%rdx)")
#define TEST_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X27 # testw %r12w, (%rdi)")
#define TEST_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X26 # testw %r12w, (%rsi)")
#define TEST_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X65, 0X00 # testw %r12w, (%rbp)")
#define TEST_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X24, 0X24 # testw %r12w, (%rsp)")
#define TEST_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X20 # testw %r12w, (%r8)")
#define TEST_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X21 # testw %r12w, (%r9)")
#define TEST_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X22 # testw %r12w, (%r10)")
#define TEST_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X23 # testw %r12w, (%r11)")
#define TEST_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X24, 0X24 # testw %r12w, (%r12)")
#define TEST_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X65, 0X00 # testw %r12w, (%r13)")
#define TEST_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X26 # testw %r12w, (%r14)")
#define TEST_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X27 # testw %r12w, (%r15)")
#define TEST_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X20 # testw %r12w, (%eax)")
#define TEST_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X23 # testw %r12w, (%ebx)")
#define TEST_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X21 # testw %r12w, (%ecx)")
#define TEST_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X22 # testw %r12w, (%edx)")
#define TEST_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X27 # testw %r12w, (%edi)")
#define TEST_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X26 # testw %r12w, (%esi)")
#define TEST_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X65, 0X00 # testw %r12w, (%ebp)")
#define TEST_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X24, 0X24 # testw %r12w, (%esp)")

#define TEST_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X28 # testw %r13w, (%rax)")
#define TEST_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2B # testw %r13w, (%rbx)")
#define TEST_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X29 # testw %r13w, (%rcx)")
#define TEST_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2A # testw %r13w, (%rdx)")
#define TEST_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2F # testw %r13w, (%rdi)")
#define TEST_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2E # testw %r13w, (%rsi)")
#define TEST_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X6D, 0X00 # testw %r13w, (%rbp)")
#define TEST_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X2C, 0X24 # testw %r13w, (%rsp)")
#define TEST_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X28 # testw %r13w, (%r8)")
#define TEST_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X29 # testw %r13w, (%r9)")
#define TEST_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2A # testw %r13w, (%r10)")
#define TEST_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2B # testw %r13w, (%r11)")
#define TEST_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2C, 0X24 # testw %r13w, (%r12)")
#define TEST_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X6D, 0X00 # testw %r13w, (%r13)")
#define TEST_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2E # testw %r13w, (%r14)")
#define TEST_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X2F # testw %r13w, (%r15)")
#define TEST_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X28 # testw %r13w, (%eax)")
#define TEST_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2B # testw %r13w, (%ebx)")
#define TEST_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X29 # testw %r13w, (%ecx)")
#define TEST_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2A # testw %r13w, (%edx)")
#define TEST_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2F # testw %r13w, (%edi)")
#define TEST_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2E # testw %r13w, (%esi)")
#define TEST_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X6D, 0X00 # testw %r13w, (%ebp)")
#define TEST_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X2C, 0X24 # testw %r13w, (%esp)")

#define TEST_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X30 # testw %r14w, (%rax)")
#define TEST_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X33 # testw %r14w, (%rbx)")
#define TEST_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X31 # testw %r14w, (%rcx)")
#define TEST_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X32 # testw %r14w, (%rdx)")
#define TEST_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X37 # testw %r14w, (%rdi)")
#define TEST_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X36 # testw %r14w, (%rsi)")
#define TEST_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X75, 0X00 # testw %r14w, (%rbp)")
#define TEST_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X34, 0X24 # testw %r14w, (%rsp)")
#define TEST_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X30 # testw %r14w, (%r8)")
#define TEST_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X31 # testw %r14w, (%r9)")
#define TEST_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X32 # testw %r14w, (%r10)")
#define TEST_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X33 # testw %r14w, (%r11)")
#define TEST_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X34, 0X24 # testw %r14w, (%r12)")
#define TEST_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X75, 0X00 # testw %r14w, (%r13)")
#define TEST_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X36 # testw %r14w, (%r14)")
#define TEST_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X37 # testw %r14w, (%r15)")
#define TEST_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X30 # testw %r14w, (%eax)")
#define TEST_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X33 # testw %r14w, (%ebx)")
#define TEST_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X31 # testw %r14w, (%ecx)")
#define TEST_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X32 # testw %r14w, (%edx)")
#define TEST_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X37 # testw %r14w, (%edi)")
#define TEST_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X36 # testw %r14w, (%esi)")
#define TEST_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X75, 0X00 # testw %r14w, (%ebp)")
#define TEST_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X34, 0X24 # testw %r14w, (%esp)")

#define TEST_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X38 # testw %r15w, (%rax)")
#define TEST_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3B # testw %r15w, (%rbx)")
#define TEST_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X39 # testw %r15w, (%rcx)")
#define TEST_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3A # testw %r15w, (%rdx)")
#define TEST_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3F # testw %r15w, (%rdi)")
#define TEST_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3E # testw %r15w, (%rsi)")
#define TEST_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X7D, 0X00 # testw %r15w, (%rbp)")
#define TEST_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X85, 0X3C, 0X24 # testw %r15w, (%rsp)")
#define TEST_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X38 # testw %r15w, (%r8)")
#define TEST_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X39 # testw %r15w, (%r9)")
#define TEST_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3A # testw %r15w, (%r10)")
#define TEST_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3B # testw %r15w, (%r11)")
#define TEST_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3C, 0X24 # testw %r15w, (%r12)")
#define TEST_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X7D, 0X00 # testw %r15w, (%r13)")
#define TEST_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3E # testw %r15w, (%r14)")
#define TEST_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X85, 0X3F # testw %r15w, (%r15)")
#define TEST_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X38 # testw %r15w, (%eax)")
#define TEST_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3B # testw %r15w, (%ebx)")
#define TEST_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X39 # testw %r15w, (%ecx)")
#define TEST_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3A # testw %r15w, (%edx)")
#define TEST_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3F # testw %r15w, (%edi)")
#define TEST_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3E # testw %r15w, (%esi)")
#define TEST_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X7D, 0X00 # testw %r15w, (%ebp)")
#define TEST_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X3C, 0X24 # testw %r15w, (%esp)")

#define TEST_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X80 # testw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X83 # testw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X81 # testw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X82 # testw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X87 # testw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X86 # testw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X85 # testw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X80 # testw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X81 # testw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X82 # testw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X83 # testw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X85 # testw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X86 # testw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X87 # testw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X80 # testw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X83 # testw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X81 # testw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X82 # testw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X87 # testw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X86 # testw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X85 # testw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X98 # testw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9B # testw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X99 # testw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9A # testw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9F # testw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9E # testw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9D # testw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X98 # testw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X99 # testw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9A # testw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9B # testw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9D # testw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9E # testw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9F # testw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X98 # testw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9B # testw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X99 # testw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9A # testw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9F # testw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9E # testw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9D # testw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X88 # testw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8B # testw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X89 # testw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8A # testw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8F # testw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8E # testw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8D # testw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X88 # testw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X89 # testw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8A # testw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8B # testw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8D # testw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8E # testw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8F # testw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X88 # testw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8B # testw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X89 # testw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8A # testw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8F # testw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8E # testw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8D # testw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X90 # testw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X93 # testw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X91 # testw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X92 # testw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X97 # testw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X96 # testw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X95 # testw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X90 # testw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X91 # testw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X92 # testw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X93 # testw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X95 # testw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X96 # testw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X97 # testw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X90 # testw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X93 # testw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X91 # testw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X92 # testw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X97 # testw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X96 # testw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X95 # testw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB8 # testw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBB # testw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB9 # testw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBA # testw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBF # testw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBE # testw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBD # testw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB8 # testw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB9 # testw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBA # testw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBB # testw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBD # testw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBE # testw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBF # testw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB8 # testw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBB # testw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB9 # testw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBA # testw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBF # testw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBE # testw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBD # testw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB0 # testw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB3 # testw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB1 # testw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB2 # testw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB7 # testw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB6 # testw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB5 # testw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB0 # testw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB1 # testw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB2 # testw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB3 # testw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB5 # testw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB6 # testw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB7 # testw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB0 # testw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB3 # testw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB1 # testw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB2 # testw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB7 # testw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB6 # testw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB5 # testw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA8 # testw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAB # testw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA9 # testw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAA # testw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAF # testw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAE # testw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAD # testw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA8 # testw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA9 # testw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAA # testw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAB # testw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAD # testw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAE # testw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAF # testw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA8 # testw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAB # testw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA9 # testw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAA # testw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAF # testw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAE # testw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAD # testw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA0 # testw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA3 # testw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA1 # testw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA2 # testw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA7 # testw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA6 # testw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA5 # testw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA0 # testw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA1 # testw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA2 # testw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA3 # testw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA5 # testw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA6 # testw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA7 # testw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA0 # testw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA3 # testw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA1 # testw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA2 # testw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA7 # testw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA6 # testw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA5 # testw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X80 # testw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X83 # testw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X81 # testw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X82 # testw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X87 # testw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X86 # testw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X85 # testw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X80 # testw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X81 # testw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X82 # testw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X83 # testw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X85 # testw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X86 # testw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X87 # testw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X80 # testw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X83 # testw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X81 # testw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X82 # testw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X87 # testw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X86 # testw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X85 # testw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X84, 0X24 # testw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X88 # testw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8B # testw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X89 # testw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8A # testw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8F # testw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8E # testw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8D # testw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X88 # testw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X89 # testw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8A # testw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8B # testw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8D # testw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8E # testw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8F # testw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X88 # testw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8B # testw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X89 # testw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8A # testw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8F # testw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8E # testw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8D # testw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8C, 0X24 # testw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X90 # testw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X93 # testw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X91 # testw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X92 # testw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X97 # testw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X96 # testw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X95 # testw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X90 # testw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X91 # testw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X92 # testw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X93 # testw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X95 # testw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X96 # testw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X97 # testw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X90 # testw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X93 # testw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X91 # testw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X92 # testw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X97 # testw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X96 # testw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X95 # testw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X94, 0X24 # testw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X98 # testw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9B # testw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X99 # testw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9A # testw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9F # testw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9E # testw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9D # testw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X98 # testw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X99 # testw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9A # testw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9B # testw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9D # testw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9E # testw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9F # testw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X98 # testw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9B # testw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X99 # testw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9A # testw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9F # testw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9E # testw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9D # testw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9C, 0X24 # testw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA0 # testw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA3 # testw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA1 # testw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA2 # testw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA7 # testw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA6 # testw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA5 # testw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA0 # testw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA1 # testw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA2 # testw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA3 # testw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA5 # testw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA6 # testw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA7 # testw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA0 # testw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA3 # testw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA1 # testw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA2 # testw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA7 # testw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA6 # testw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA5 # testw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA4, 0X24 # testw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA8 # testw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAB # testw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA9 # testw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAA # testw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAF # testw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAE # testw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAD # testw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA8 # testw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA9 # testw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAA # testw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAB # testw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAD # testw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAE # testw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAF # testw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA8 # testw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAB # testw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA9 # testw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAA # testw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAF # testw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAE # testw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAD # testw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAC, 0X24 # testw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB0 # testw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB3 # testw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB1 # testw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB2 # testw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB7 # testw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB6 # testw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB5 # testw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB0 # testw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB1 # testw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB2 # testw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB3 # testw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB5 # testw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB6 # testw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB7 # testw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB0 # testw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB3 # testw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB1 # testw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB2 # testw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB7 # testw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB6 # testw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB5 # testw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB4, 0X24 # testw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB8 # testw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBB # testw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB9 # testw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBA # testw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBF # testw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBE # testw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBD # testw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB8 # testw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB9 # testw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBA # testw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBB # testw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBD # testw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBE # testw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBF # testw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB8 # testw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBB # testw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB9 # testw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBA # testw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBF # testw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBE # testw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBD # testw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBC, 0X24 # testw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define TEST_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X80 # testw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X83 # testw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X81 # testw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X82 # testw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X87 # testw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X86 # testw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X85 # testw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X84, 0X24 # testw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X80 # testw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X81 # testw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X82 # testw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X83 # testw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X84, 0X24 # testw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X85 # testw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X86 # testw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X87 # testw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X80 # testw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X83 # testw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X81 # testw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X82 # testw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X87 # testw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X86 # testw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X85 # testw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X84, 0X24 # testw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X98 # testw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9B # testw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X99 # testw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9A # testw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9F # testw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9E # testw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9D # testw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X9C, 0X24 # testw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X98 # testw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X99 # testw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9A # testw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9B # testw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9C, 0X24 # testw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9D # testw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9E # testw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X9F # testw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X98 # testw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9B # testw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X99 # testw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9A # testw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9F # testw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9E # testw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9D # testw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X9C, 0X24 # testw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X88 # testw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8B # testw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X89 # testw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8A # testw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8F # testw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8E # testw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8D # testw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X8C, 0X24 # testw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X88 # testw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X89 # testw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8A # testw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8B # testw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8C, 0X24 # testw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8D # testw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8E # testw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X8F # testw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X88 # testw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8B # testw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X89 # testw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8A # testw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8F # testw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8E # testw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8D # testw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X8C, 0X24 # testw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X90 # testw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X93 # testw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X91 # testw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X92 # testw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X97 # testw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X96 # testw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X95 # testw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0X94, 0X24 # testw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X90 # testw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X91 # testw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X92 # testw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X93 # testw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X94, 0X24 # testw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X95 # testw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X96 # testw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0X97 # testw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X90 # testw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X93 # testw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X91 # testw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X92 # testw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X97 # testw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X96 # testw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X95 # testw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0X94, 0X24 # testw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB8 # testw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBB # testw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB9 # testw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBA # testw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBF # testw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBE # testw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBD # testw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XBC, 0X24 # testw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB8 # testw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB9 # testw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBA # testw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBB # testw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBC, 0X24 # testw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBD # testw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBE # testw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XBF # testw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB8 # testw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBB # testw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB9 # testw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBA # testw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBF # testw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBE # testw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBD # testw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XBC, 0X24 # testw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB0 # testw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB3 # testw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB1 # testw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB2 # testw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB7 # testw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB6 # testw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB5 # testw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XB4, 0X24 # testw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB0 # testw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB1 # testw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB2 # testw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB3 # testw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB4, 0X24 # testw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB5 # testw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB6 # testw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XB7 # testw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB0 # testw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB3 # testw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB1 # testw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB2 # testw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB7 # testw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB6 # testw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB5 # testw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XB4, 0X24 # testw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA8 # testw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAB # testw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA9 # testw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAA # testw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAF # testw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAE # testw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAD # testw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XAC, 0X24 # testw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA8 # testw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA9 # testw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAA # testw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAB # testw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAC, 0X24 # testw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAD # testw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAE # testw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XAF # testw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA8 # testw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAB # testw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA9 # testw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAA # testw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAF # testw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAE # testw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAD # testw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XAC, 0X24 # testw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA0 # testw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA3 # testw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA1 # testw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA2 # testw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA7 # testw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA6 # testw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA5 # testw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X85, 0XA4, 0X24 # testw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA0 # testw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA1 # testw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA2 # testw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA3 # testw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA4, 0X24 # testw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA5 # testw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA6 # testw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X85, 0XA7 # testw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA0 # testw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA3 # testw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA1 # testw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA2 # testw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA7 # testw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA6 # testw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA5 # testw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X85, 0XA4, 0X24 # testw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X80 # testw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X83 # testw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X81 # testw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X82 # testw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X87 # testw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X86 # testw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X85 # testw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X84, 0X24 # testw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X80 # testw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X81 # testw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X82 # testw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X83 # testw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X84, 0X24 # testw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X85 # testw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X86 # testw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X87 # testw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X80 # testw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X83 # testw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X81 # testw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X82 # testw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X87 # testw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X86 # testw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X85 # testw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X84, 0X24 # testw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X88 # testw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8B # testw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X89 # testw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8A # testw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8F # testw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8E # testw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8D # testw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X8C, 0X24 # testw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X88 # testw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X89 # testw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8A # testw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8B # testw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8C, 0X24 # testw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8D # testw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8E # testw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X8F # testw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X88 # testw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8B # testw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X89 # testw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8A # testw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8F # testw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8E # testw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8D # testw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X8C, 0X24 # testw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X90 # testw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X93 # testw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X91 # testw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X92 # testw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X97 # testw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X96 # testw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X95 # testw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X94, 0X24 # testw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X90 # testw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X91 # testw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X92 # testw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X93 # testw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X94, 0X24 # testw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X95 # testw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X96 # testw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X97 # testw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X90 # testw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X93 # testw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X91 # testw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X92 # testw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X97 # testw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X96 # testw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X95 # testw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X94, 0X24 # testw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X98 # testw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9B # testw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X99 # testw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9A # testw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9F # testw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9E # testw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9D # testw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0X9C, 0X24 # testw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X98 # testw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X99 # testw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9A # testw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9B # testw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9C, 0X24 # testw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9D # testw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9E # testw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0X9F # testw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X98 # testw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9B # testw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X99 # testw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9A # testw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9F # testw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9E # testw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9D # testw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0X9C, 0X24 # testw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA0 # testw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA3 # testw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA1 # testw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA2 # testw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA7 # testw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA6 # testw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA5 # testw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA4, 0X24 # testw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA0 # testw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA1 # testw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA2 # testw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA3 # testw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA4, 0X24 # testw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA5 # testw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA6 # testw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA7 # testw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA0 # testw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA3 # testw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA1 # testw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA2 # testw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA7 # testw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA6 # testw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA5 # testw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA4, 0X24 # testw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA8 # testw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAB # testw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XA9 # testw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAA # testw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAF # testw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAE # testw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAD # testw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XAC, 0X24 # testw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA8 # testw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XA9 # testw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAA # testw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAB # testw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAC, 0X24 # testw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAD # testw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAE # testw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XAF # testw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA8 # testw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAB # testw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XA9 # testw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAA # testw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAF # testw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAE # testw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAD # testw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XAC, 0X24 # testw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB0 # testw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB3 # testw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB1 # testw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB2 # testw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB7 # testw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB6 # testw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB5 # testw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB4, 0X24 # testw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB0 # testw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB1 # testw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB2 # testw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB3 # testw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB4, 0X24 # testw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB5 # testw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB6 # testw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB7 # testw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB0 # testw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB3 # testw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB1 # testw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB2 # testw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB7 # testw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB6 # testw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB5 # testw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB4, 0X24 # testw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB8 # testw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBB # testw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XB9 # testw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBA # testw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBF # testw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBE # testw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBD # testw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X85, 0XBC, 0X24 # testw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB8 # testw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XB9 # testw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBA # testw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBB # testw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBC, 0X24 # testw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBD # testw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBE # testw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X85, 0XBF # testw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB8 # testw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBB # testw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XB9 # testw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBA # testw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBF # testw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBE # testw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBD # testw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X85, 0XBC, 0X24 # testw %r15w, " _(VALUE) "(%esp)")\
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
