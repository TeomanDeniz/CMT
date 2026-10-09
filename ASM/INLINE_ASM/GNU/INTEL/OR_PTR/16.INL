#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define OR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X06 # orb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X1E # orb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X0E # orb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X16 # orb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define OR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X06 # orb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X1E # orb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X0E # orb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X16 # orb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define OR_AL_FROM_PTR_BX CMT_ASM(".byte 0X0A, 0X07 # orb (%bx), %al")
#define OR_AL_FROM_PTR_BP CMT_ASM(".byte 0X0A, 0X46, 0X00 # orb (%bp), %al")
#define OR_AL_FROM_PTR_SI CMT_ASM(".byte 0X0A, 0X04 # orb (%si), %al")
#define OR_AL_FROM_PTR_DI CMT_ASM(".byte 0X0A, 0X05 # orb (%di), %al")

#define OR_BL_FROM_PTR_BX CMT_ASM(".byte 0X0A, 0X1F # orb (%bx), %bl")
#define OR_BL_FROM_PTR_BP CMT_ASM(".byte 0X0A, 0X5E, 0X00 # orb (%bp), %bl")
#define OR_BL_FROM_PTR_SI CMT_ASM(".byte 0X0A, 0X1C # orb (%si), %bl")
#define OR_BL_FROM_PTR_DI CMT_ASM(".byte 0X0A, 0X1D # orb (%di), %bl")

#define OR_CL_FROM_PTR_BX CMT_ASM(".byte 0X0A, 0X0F # orb (%bx), %cl")
#define OR_CL_FROM_PTR_BP CMT_ASM(".byte 0X0A, 0X4E, 0X00 # orb (%bp), %cl")
#define OR_CL_FROM_PTR_SI CMT_ASM(".byte 0X0A, 0X0C # orb (%si), %cl")
#define OR_CL_FROM_PTR_DI CMT_ASM(".byte 0X0A, 0X0D # orb (%di), %cl")

#define OR_DL_FROM_PTR_BX CMT_ASM(".byte 0X0A, 0X17 # orb (%bx), %dl")
#define OR_DL_FROM_PTR_BP CMT_ASM(".byte 0X0A, 0X56, 0X00 # orb (%bp), %dl")
#define OR_DL_FROM_PTR_SI CMT_ASM(".byte 0X0A, 0X14 # orb (%si), %dl")
#define OR_DL_FROM_PTR_DI CMT_ASM(".byte 0X0A, 0X15 # orb (%di), %dl")

#define OR_AL_TO_PTR_BX CMT_ASM(".byte 0X08, 0X07 # orb %al, (%bx)")
#define OR_AL_TO_PTR_BP CMT_ASM(".byte 0X08, 0X46, 0X00 # orb %al, (%bp)")
#define OR_AL_TO_PTR_SI CMT_ASM(".byte 0X08, 0X04 # orb %al, (%si)")
#define OR_AL_TO_PTR_DI CMT_ASM(".byte 0X08, 0X05 # orb %al, (%di)")

#define OR_BL_TO_PTR_BX CMT_ASM(".byte 0X08, 0X1F # orb %bl, (%bx)")
#define OR_BL_TO_PTR_BP CMT_ASM(".byte 0X08, 0X5E, 0X00 # orb %bl, (%bp)")
#define OR_BL_TO_PTR_SI CMT_ASM(".byte 0X08, 0X1C # orb %bl, (%si)")
#define OR_BL_TO_PTR_DI CMT_ASM(".byte 0X08, 0X1D # orb %bl, (%di)")

#define OR_CL_TO_PTR_BX CMT_ASM(".byte 0X08, 0X0F # orb %cl, (%bx)")
#define OR_CL_TO_PTR_BP CMT_ASM(".byte 0X08, 0X4E, 0X00 # orb %cl, (%bp)")
#define OR_CL_TO_PTR_SI CMT_ASM(".byte 0X08, 0X0C # orb %cl, (%si)")
#define OR_CL_TO_PTR_DI CMT_ASM(".byte 0X08, 0X0D # orb %cl, (%di)")

#define OR_DL_TO_PTR_BX CMT_ASM(".byte 0X08, 0X17 # orb %dl, (%bx)")
#define OR_DL_TO_PTR_BP CMT_ASM(".byte 0X08, 0X56, 0X00 # orb %dl, (%bp)")
#define OR_DL_TO_PTR_SI CMT_ASM(".byte 0X08, 0X14 # orb %dl, (%si)")
#define OR_DL_TO_PTR_DI CMT_ASM(".byte 0X08, 0X15 # orb %dl, (%di)")

#define OR_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X87 # orb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X86 # orb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X84 # orb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X85 # orb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define OR_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9F # orb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9E # orb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9C # orb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9D # orb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define OR_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8F # orb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8E # orb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8C # orb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8D # orb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define OR_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X97 # orb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X96 # orb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X94 # orb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X95 # orb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define OR_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X87 # orb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X86 # orb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X84 # orb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X85 # orb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9F # orb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9E # orb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9C # orb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9D # orb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8F # orb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8E # orb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8C # orb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8D # orb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X97 # orb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X96 # orb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X94 # orb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X95 # orb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X05 # orb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X1D # orb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X0D # orb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X15 # orb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define OR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X05 # orb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X1D # orb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X0D # orb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X15 # orb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_AL_FROM_PTR_EAX CMT_ASM(".byte 0X0A, 0X00 # orb (%eax), %al")
#define OR_AL_FROM_PTR_EBX CMT_ASM(".byte 0X0A, 0X03 # orb (%ebx), %al")
#define OR_AL_FROM_PTR_ECX CMT_ASM(".byte 0X0A, 0X01 # orb (%ecx), %al")
#define OR_AL_FROM_PTR_EDX CMT_ASM(".byte 0X0A, 0X02 # orb (%edx), %al")
#define OR_AL_FROM_PTR_EDI CMT_ASM(".byte 0X0A, 0X07 # orb (%edi), %al")
#define OR_AL_FROM_PTR_ESI CMT_ASM(".byte 0X0A, 0X06 # orb (%esi), %al")
#define OR_AL_FROM_PTR_EBP CMT_ASM(".byte 0X0A, 0X45, 0X00 # orb (%ebp), %al")
#define OR_AL_FROM_PTR_ESP CMT_ASM(".byte 0X0A, 0X04, 0X24 # orb (%esp), %al")
#define OR_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0A, 0X07 # orb (%bx), %al")
#define OR_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0A, 0X46, 0X00 # orb (%bp), %al")
#define OR_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0A, 0X04 # orb (%si), %al")
#define OR_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0A, 0X05 # orb (%di), %al")

#define OR_BL_FROM_PTR_EAX CMT_ASM(".byte 0X0A, 0X18 # orb (%eax), %bl")
#define OR_BL_FROM_PTR_EBX CMT_ASM(".byte 0X0A, 0X1B # orb (%ebx), %bl")
#define OR_BL_FROM_PTR_ECX CMT_ASM(".byte 0X0A, 0X19 # orb (%ecx), %bl")
#define OR_BL_FROM_PTR_EDX CMT_ASM(".byte 0X0A, 0X1A # orb (%edx), %bl")
#define OR_BL_FROM_PTR_EDI CMT_ASM(".byte 0X0A, 0X1F # orb (%edi), %bl")
#define OR_BL_FROM_PTR_ESI CMT_ASM(".byte 0X0A, 0X1E # orb (%esi), %bl")
#define OR_BL_FROM_PTR_EBP CMT_ASM(".byte 0X0A, 0X5D, 0X00 # orb (%ebp), %bl")
#define OR_BL_FROM_PTR_ESP CMT_ASM(".byte 0X0A, 0X1C, 0X24 # orb (%esp), %bl")
#define OR_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0A, 0X1F # orb (%bx), %bl")
#define OR_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0A, 0X5E, 0X00 # orb (%bp), %bl")
#define OR_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0A, 0X1C # orb (%si), %bl")
#define OR_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0A, 0X1D # orb (%di), %bl")

#define OR_CL_FROM_PTR_EAX CMT_ASM(".byte 0X0A, 0X08 # orb (%eax), %cl")
#define OR_CL_FROM_PTR_EBX CMT_ASM(".byte 0X0A, 0X0B # orb (%ebx), %cl")
#define OR_CL_FROM_PTR_ECX CMT_ASM(".byte 0X0A, 0X09 # orb (%ecx), %cl")
#define OR_CL_FROM_PTR_EDX CMT_ASM(".byte 0X0A, 0X0A # orb (%edx), %cl")
#define OR_CL_FROM_PTR_EDI CMT_ASM(".byte 0X0A, 0X0F # orb (%edi), %cl")
#define OR_CL_FROM_PTR_ESI CMT_ASM(".byte 0X0A, 0X0E # orb (%esi), %cl")
#define OR_CL_FROM_PTR_EBP CMT_ASM(".byte 0X0A, 0X4D, 0X00 # orb (%ebp), %cl")
#define OR_CL_FROM_PTR_ESP CMT_ASM(".byte 0X0A, 0X0C, 0X24 # orb (%esp), %cl")
#define OR_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0A, 0X0F # orb (%bx), %cl")
#define OR_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0A, 0X4E, 0X00 # orb (%bp), %cl")
#define OR_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0A, 0X0C # orb (%si), %cl")
#define OR_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0A, 0X0D # orb (%di), %cl")

#define OR_DL_FROM_PTR_EAX CMT_ASM(".byte 0X0A, 0X10 # orb (%eax), %dl")
#define OR_DL_FROM_PTR_EBX CMT_ASM(".byte 0X0A, 0X13 # orb (%ebx), %dl")
#define OR_DL_FROM_PTR_ECX CMT_ASM(".byte 0X0A, 0X11 # orb (%ecx), %dl")
#define OR_DL_FROM_PTR_EDX CMT_ASM(".byte 0X0A, 0X12 # orb (%edx), %dl")
#define OR_DL_FROM_PTR_EDI CMT_ASM(".byte 0X0A, 0X17 # orb (%edi), %dl")
#define OR_DL_FROM_PTR_ESI CMT_ASM(".byte 0X0A, 0X16 # orb (%esi), %dl")
#define OR_DL_FROM_PTR_EBP CMT_ASM(".byte 0X0A, 0X55, 0X00 # orb (%ebp), %dl")
#define OR_DL_FROM_PTR_ESP CMT_ASM(".byte 0X0A, 0X14, 0X24 # orb (%esp), %dl")
#define OR_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0A, 0X17 # orb (%bx), %dl")
#define OR_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0A, 0X56, 0X00 # orb (%bp), %dl")
#define OR_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0A, 0X14 # orb (%si), %dl")
#define OR_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0A, 0X15 # orb (%di), %dl")

#define OR_AL_TO_PTR_EAX CMT_ASM(".byte 0X08, 0X00 # orb %al, (%eax)")
#define OR_AL_TO_PTR_EBX CMT_ASM(".byte 0X08, 0X03 # orb %al, (%ebx)")
#define OR_AL_TO_PTR_ECX CMT_ASM(".byte 0X08, 0X01 # orb %al, (%ecx)")
#define OR_AL_TO_PTR_EDX CMT_ASM(".byte 0X08, 0X02 # orb %al, (%edx)")
#define OR_AL_TO_PTR_EDI CMT_ASM(".byte 0X08, 0X07 # orb %al, (%edi)")
#define OR_AL_TO_PTR_ESI CMT_ASM(".byte 0X08, 0X06 # orb %al, (%esi)")
#define OR_AL_TO_PTR_EBP CMT_ASM(".byte 0X08, 0X45, 0X00 # orb %al, (%ebp)")
#define OR_AL_TO_PTR_ESP CMT_ASM(".byte 0X08, 0X04, 0X24 # orb %al, (%esp)")
#define OR_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X08, 0X07 # orb %al, (%bx)")
#define OR_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X08, 0X46, 0X00 # orb %al, (%bp)")
#define OR_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X08, 0X04 # orb %al, (%si)")
#define OR_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X08, 0X05 # orb %al, (%di)")

#define OR_BL_TO_PTR_EAX CMT_ASM(".byte 0X08, 0X18 # orb %bl, (%eax)")
#define OR_BL_TO_PTR_EBX CMT_ASM(".byte 0X08, 0X1B # orb %bl, (%ebx)")
#define OR_BL_TO_PTR_ECX CMT_ASM(".byte 0X08, 0X19 # orb %bl, (%ecx)")
#define OR_BL_TO_PTR_EDX CMT_ASM(".byte 0X08, 0X1A # orb %bl, (%edx)")
#define OR_BL_TO_PTR_EDI CMT_ASM(".byte 0X08, 0X1F # orb %bl, (%edi)")
#define OR_BL_TO_PTR_ESI CMT_ASM(".byte 0X08, 0X1E # orb %bl, (%esi)")
#define OR_BL_TO_PTR_EBP CMT_ASM(".byte 0X08, 0X5D, 0X00 # orb %bl, (%ebp)")
#define OR_BL_TO_PTR_ESP CMT_ASM(".byte 0X08, 0X1C, 0X24 # orb %bl, (%esp)")
#define OR_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X08, 0X1F # orb %bl, (%bx)")
#define OR_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X08, 0X5E, 0X00 # orb %bl, (%bp)")
#define OR_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X08, 0X1C # orb %bl, (%si)")
#define OR_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X08, 0X1D # orb %bl, (%di)")

#define OR_CL_TO_PTR_EAX CMT_ASM(".byte 0X08, 0X08 # orb %cl, (%eax)")
#define OR_CL_TO_PTR_EBX CMT_ASM(".byte 0X08, 0X0B # orb %cl, (%ebx)")
#define OR_CL_TO_PTR_ECX CMT_ASM(".byte 0X08, 0X09 # orb %cl, (%ecx)")
#define OR_CL_TO_PTR_EDX CMT_ASM(".byte 0X08, 0X0A # orb %cl, (%edx)")
#define OR_CL_TO_PTR_EDI CMT_ASM(".byte 0X08, 0X0F # orb %cl, (%edi)")
#define OR_CL_TO_PTR_ESI CMT_ASM(".byte 0X08, 0X0E # orb %cl, (%esi)")
#define OR_CL_TO_PTR_EBP CMT_ASM(".byte 0X08, 0X4D, 0X00 # orb %cl, (%ebp)")
#define OR_CL_TO_PTR_ESP CMT_ASM(".byte 0X08, 0X0C, 0X24 # orb %cl, (%esp)")
#define OR_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X08, 0X0F # orb %cl, (%bx)")
#define OR_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X08, 0X4E, 0X00 # orb %cl, (%bp)")
#define OR_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X08, 0X0C # orb %cl, (%si)")
#define OR_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X08, 0X0D # orb %cl, (%di)")

#define OR_DL_TO_PTR_EAX CMT_ASM(".byte 0X08, 0X10 # orb %dl, (%eax)")
#define OR_DL_TO_PTR_EBX CMT_ASM(".byte 0X08, 0X13 # orb %dl, (%ebx)")
#define OR_DL_TO_PTR_ECX CMT_ASM(".byte 0X08, 0X11 # orb %dl, (%ecx)")
#define OR_DL_TO_PTR_EDX CMT_ASM(".byte 0X08, 0X12 # orb %dl, (%edx)")
#define OR_DL_TO_PTR_EDI CMT_ASM(".byte 0X08, 0X17 # orb %dl, (%edi)")
#define OR_DL_TO_PTR_ESI CMT_ASM(".byte 0X08, 0X16 # orb %dl, (%esi)")
#define OR_DL_TO_PTR_EBP CMT_ASM(".byte 0X08, 0X55, 0X00 # orb %dl, (%ebp)")
#define OR_DL_TO_PTR_ESP CMT_ASM(".byte 0X08, 0X14, 0X24 # orb %dl, (%esp)")
#define OR_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X08, 0X17 # orb %dl, (%bx)")
#define OR_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X08, 0X56, 0X00 # orb %dl, (%bp)")
#define OR_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X08, 0X14 # orb %dl, (%si)")
#define OR_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X08, 0X15 # orb %dl, (%di)")

#define OR_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X80 # orb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X83 # orb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X81 # orb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X82 # orb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X87 # orb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X86 # orb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X85 # orb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X87 # orb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X86 # orb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X84 # orb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X85 # orb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define OR_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X98 # orb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9B # orb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X99 # orb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9A # orb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9F # orb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9E # orb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9D # orb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9F # orb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9E # orb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9C # orb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9D # orb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define OR_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X88 # orb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8B # orb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X89 # orb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8A # orb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8F # orb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8E # orb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8D # orb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8F # orb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8E # orb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8C # orb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8D # orb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define OR_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X90 # orb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X93 # orb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X91 # orb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X92 # orb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X97 # orb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X96 # orb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X95 # orb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X97 # orb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X96 # orb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X94 # orb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X95 # orb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define OR_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X80 # orb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X83 # orb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X81 # orb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X82 # orb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X87 # orb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X86 # orb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X85 # orb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X84, 0X24 # orb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X87 # orb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X86 # orb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X84 # orb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X85 # orb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X98 # orb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9B # orb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X99 # orb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9A # orb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9F # orb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9E # orb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9D # orb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9C, 0X24 # orb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9F # orb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9E # orb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9C # orb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9D # orb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X88 # orb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8B # orb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X89 # orb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8A # orb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8F # orb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8E # orb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8D # orb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8C, 0X24 # orb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8F # orb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8E # orb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8C # orb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8D # orb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X90 # orb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X93 # orb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X91 # orb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X92 # orb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X97 # orb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X96 # orb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X95 # orb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X94, 0X24 # orb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X97 # orb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X96 # orb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X94 # orb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X95 # orb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X04, 0X25 # orb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X1C, 0X25 # orb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X0C, 0X25 # orb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X14, 0X25 # orb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0X3C, 0X25 # orb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0X34, 0X25 # orb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0X2C, 0X25 # orb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0X24, 0X25 # orb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X04, 0X25 # orb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X0C, 0X25 # orb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X14, 0X25 # orb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X1C, 0X25 # orb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X24, 0X25 # orb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X2C, 0X25 # orb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X34, 0X25 # orb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X3C, 0X25 # orb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define OR_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X04, 0X25 # orb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X1C, 0X25 # orb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X0C, 0X25 # orb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X08, 0X14, 0X25 # orb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0X3C, 0X25 # orb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0X34, 0X25 # orb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0X2C, 0X25 # orb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0X24, 0X25 # orb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X04, 0X25 # orb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X0C, 0X25 # orb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X14, 0X25 # orb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X1C, 0X25 # orb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X24, 0X25 # orb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X2C, 0X25 # orb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X34, 0X25 # orb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X3C, 0X25 # orb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_AL_FROM_PTR_RAX CMT_ASM(".byte 0X0A, 0X00 # orb (%rax), %al")
#define OR_AL_FROM_PTR_RBX CMT_ASM(".byte 0X0A, 0X03 # orb (%rbx), %al")
#define OR_AL_FROM_PTR_RCX CMT_ASM(".byte 0X0A, 0X01 # orb (%rcx), %al")
#define OR_AL_FROM_PTR_RDX CMT_ASM(".byte 0X0A, 0X02 # orb (%rdx), %al")
#define OR_AL_FROM_PTR_RDI CMT_ASM(".byte 0X0A, 0X07 # orb (%rdi), %al")
#define OR_AL_FROM_PTR_RSI CMT_ASM(".byte 0X0A, 0X06 # orb (%rsi), %al")
#define OR_AL_FROM_PTR_RBP CMT_ASM(".byte 0X0A, 0X45, 0X00 # orb (%rbp), %al")
#define OR_AL_FROM_PTR_RSP CMT_ASM(".byte 0X0A, 0X04, 0X24 # orb (%rsp), %al")
#define OR_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X00 # orb (%r8), %al")
#define OR_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X01 # orb (%r9), %al")
#define OR_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X02 # orb (%r10), %al")
#define OR_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X03 # orb (%r11), %al")
#define OR_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X04, 0X24 # orb (%r12), %al")
#define OR_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X45, 0X00 # orb (%r13), %al")
#define OR_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X06 # orb (%r14), %al")
#define OR_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X07 # orb (%r15), %al")
#define OR_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0A, 0X00 # orb (%eax), %al")
#define OR_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0A, 0X03 # orb (%ebx), %al")
#define OR_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0A, 0X01 # orb (%ecx), %al")
#define OR_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0A, 0X02 # orb (%edx), %al")
#define OR_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0A, 0X07 # orb (%edi), %al")
#define OR_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0A, 0X06 # orb (%esi), %al")
#define OR_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0A, 0X45, 0X00 # orb (%ebp), %al")
#define OR_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0A, 0X04, 0X24 # orb (%esp), %al")

#define OR_BL_FROM_PTR_RAX CMT_ASM(".byte 0X0A, 0X18 # orb (%rax), %bl")
#define OR_BL_FROM_PTR_RBX CMT_ASM(".byte 0X0A, 0X1B # orb (%rbx), %bl")
#define OR_BL_FROM_PTR_RCX CMT_ASM(".byte 0X0A, 0X19 # orb (%rcx), %bl")
#define OR_BL_FROM_PTR_RDX CMT_ASM(".byte 0X0A, 0X1A # orb (%rdx), %bl")
#define OR_BL_FROM_PTR_RDI CMT_ASM(".byte 0X0A, 0X1F # orb (%rdi), %bl")
#define OR_BL_FROM_PTR_RSI CMT_ASM(".byte 0X0A, 0X1E # orb (%rsi), %bl")
#define OR_BL_FROM_PTR_RBP CMT_ASM(".byte 0X0A, 0X5D, 0X00 # orb (%rbp), %bl")
#define OR_BL_FROM_PTR_RSP CMT_ASM(".byte 0X0A, 0X1C, 0X24 # orb (%rsp), %bl")
#define OR_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X18 # orb (%r8), %bl")
#define OR_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X19 # orb (%r9), %bl")
#define OR_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X1A # orb (%r10), %bl")
#define OR_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X1B # orb (%r11), %bl")
#define OR_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X1C, 0X24 # orb (%r12), %bl")
#define OR_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X5D, 0X00 # orb (%r13), %bl")
#define OR_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X1E # orb (%r14), %bl")
#define OR_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X1F # orb (%r15), %bl")
#define OR_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0A, 0X18 # orb (%eax), %bl")
#define OR_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0A, 0X1B # orb (%ebx), %bl")
#define OR_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0A, 0X19 # orb (%ecx), %bl")
#define OR_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0A, 0X1A # orb (%edx), %bl")
#define OR_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0A, 0X1F # orb (%edi), %bl")
#define OR_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0A, 0X1E # orb (%esi), %bl")
#define OR_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0A, 0X5D, 0X00 # orb (%ebp), %bl")
#define OR_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0A, 0X1C, 0X24 # orb (%esp), %bl")

#define OR_CL_FROM_PTR_RAX CMT_ASM(".byte 0X0A, 0X08 # orb (%rax), %cl")
#define OR_CL_FROM_PTR_RBX CMT_ASM(".byte 0X0A, 0X0B # orb (%rbx), %cl")
#define OR_CL_FROM_PTR_RCX CMT_ASM(".byte 0X0A, 0X09 # orb (%rcx), %cl")
#define OR_CL_FROM_PTR_RDX CMT_ASM(".byte 0X0A, 0X0A # orb (%rdx), %cl")
#define OR_CL_FROM_PTR_RDI CMT_ASM(".byte 0X0A, 0X0F # orb (%rdi), %cl")
#define OR_CL_FROM_PTR_RSI CMT_ASM(".byte 0X0A, 0X0E # orb (%rsi), %cl")
#define OR_CL_FROM_PTR_RBP CMT_ASM(".byte 0X0A, 0X4D, 0X00 # orb (%rbp), %cl")
#define OR_CL_FROM_PTR_RSP CMT_ASM(".byte 0X0A, 0X0C, 0X24 # orb (%rsp), %cl")
#define OR_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X08 # orb (%r8), %cl")
#define OR_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X09 # orb (%r9), %cl")
#define OR_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X0A # orb (%r10), %cl")
#define OR_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X0B # orb (%r11), %cl")
#define OR_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X0C, 0X24 # orb (%r12), %cl")
#define OR_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X4D, 0X00 # orb (%r13), %cl")
#define OR_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X0E # orb (%r14), %cl")
#define OR_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X0F # orb (%r15), %cl")
#define OR_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0A, 0X08 # orb (%eax), %cl")
#define OR_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0A, 0X0B # orb (%ebx), %cl")
#define OR_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0A, 0X09 # orb (%ecx), %cl")
#define OR_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0A, 0X0A # orb (%edx), %cl")
#define OR_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0A, 0X0F # orb (%edi), %cl")
#define OR_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0A, 0X0E # orb (%esi), %cl")
#define OR_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0A, 0X4D, 0X00 # orb (%ebp), %cl")
#define OR_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0A, 0X0C, 0X24 # orb (%esp), %cl")

#define OR_DL_FROM_PTR_RAX CMT_ASM(".byte 0X0A, 0X10 # orb (%rax), %dl")
#define OR_DL_FROM_PTR_RBX CMT_ASM(".byte 0X0A, 0X13 # orb (%rbx), %dl")
#define OR_DL_FROM_PTR_RCX CMT_ASM(".byte 0X0A, 0X11 # orb (%rcx), %dl")
#define OR_DL_FROM_PTR_RDX CMT_ASM(".byte 0X0A, 0X12 # orb (%rdx), %dl")
#define OR_DL_FROM_PTR_RDI CMT_ASM(".byte 0X0A, 0X17 # orb (%rdi), %dl")
#define OR_DL_FROM_PTR_RSI CMT_ASM(".byte 0X0A, 0X16 # orb (%rsi), %dl")
#define OR_DL_FROM_PTR_RBP CMT_ASM(".byte 0X0A, 0X55, 0X00 # orb (%rbp), %dl")
#define OR_DL_FROM_PTR_RSP CMT_ASM(".byte 0X0A, 0X14, 0X24 # orb (%rsp), %dl")
#define OR_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X10 # orb (%r8), %dl")
#define OR_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X11 # orb (%r9), %dl")
#define OR_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X12 # orb (%r10), %dl")
#define OR_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X13 # orb (%r11), %dl")
#define OR_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X14, 0X24 # orb (%r12), %dl")
#define OR_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X55, 0X00 # orb (%r13), %dl")
#define OR_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X16 # orb (%r14), %dl")
#define OR_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X17 # orb (%r15), %dl")
#define OR_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0A, 0X10 # orb (%eax), %dl")
#define OR_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0A, 0X13 # orb (%ebx), %dl")
#define OR_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0A, 0X11 # orb (%ecx), %dl")
#define OR_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0A, 0X12 # orb (%edx), %dl")
#define OR_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0A, 0X17 # orb (%edi), %dl")
#define OR_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0A, 0X16 # orb (%esi), %dl")
#define OR_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0A, 0X55, 0X00 # orb (%ebp), %dl")
#define OR_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0A, 0X14, 0X24 # orb (%esp), %dl")

#define OR_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X0A, 0X38 # orb (%rax), %dil")
#define OR_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X0A, 0X3B # orb (%rbx), %dil")
#define OR_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X0A, 0X39 # orb (%rcx), %dil")
#define OR_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X0A, 0X3A # orb (%rdx), %dil")
#define OR_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X0A, 0X3F # orb (%rdi), %dil")
#define OR_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X0A, 0X3E # orb (%rsi), %dil")
#define OR_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X0A, 0X7D, 0X00 # orb (%rbp), %dil")
#define OR_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X0A, 0X3C, 0X24 # orb (%rsp), %dil")
#define OR_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X38 # orb (%r8), %dil")
#define OR_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X39 # orb (%r9), %dil")
#define OR_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X3A # orb (%r10), %dil")
#define OR_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X3B # orb (%r11), %dil")
#define OR_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X3C, 0X24 # orb (%r12), %dil")
#define OR_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X7D, 0X00 # orb (%r13), %dil")
#define OR_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X3E # orb (%r14), %dil")
#define OR_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X3F # orb (%r15), %dil")
#define OR_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X38 # orb (%eax), %dil")
#define OR_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X3B # orb (%ebx), %dil")
#define OR_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X39 # orb (%ecx), %dil")
#define OR_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X3A # orb (%edx), %dil")
#define OR_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X3F # orb (%edi), %dil")
#define OR_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X3E # orb (%esi), %dil")
#define OR_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X7D, 0X00 # orb (%ebp), %dil")
#define OR_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X3C, 0X24 # orb (%esp), %dil")

#define OR_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X0A, 0X30 # orb (%rax), %sil")
#define OR_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X0A, 0X33 # orb (%rbx), %sil")
#define OR_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X0A, 0X31 # orb (%rcx), %sil")
#define OR_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X0A, 0X32 # orb (%rdx), %sil")
#define OR_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X0A, 0X37 # orb (%rdi), %sil")
#define OR_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X0A, 0X36 # orb (%rsi), %sil")
#define OR_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X0A, 0X75, 0X00 # orb (%rbp), %sil")
#define OR_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X0A, 0X34, 0X24 # orb (%rsp), %sil")
#define OR_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X30 # orb (%r8), %sil")
#define OR_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X31 # orb (%r9), %sil")
#define OR_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X32 # orb (%r10), %sil")
#define OR_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X33 # orb (%r11), %sil")
#define OR_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X34, 0X24 # orb (%r12), %sil")
#define OR_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X75, 0X00 # orb (%r13), %sil")
#define OR_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X36 # orb (%r14), %sil")
#define OR_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X37 # orb (%r15), %sil")
#define OR_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X30 # orb (%eax), %sil")
#define OR_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X33 # orb (%ebx), %sil")
#define OR_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X31 # orb (%ecx), %sil")
#define OR_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X32 # orb (%edx), %sil")
#define OR_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X37 # orb (%edi), %sil")
#define OR_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X36 # orb (%esi), %sil")
#define OR_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X75, 0X00 # orb (%ebp), %sil")
#define OR_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X34, 0X24 # orb (%esp), %sil")

#define OR_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X0A, 0X28 # orb (%rax), %bpl")
#define OR_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X0A, 0X2B # orb (%rbx), %bpl")
#define OR_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X0A, 0X29 # orb (%rcx), %bpl")
#define OR_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X0A, 0X2A # orb (%rdx), %bpl")
#define OR_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X0A, 0X2F # orb (%rdi), %bpl")
#define OR_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X0A, 0X2E # orb (%rsi), %bpl")
#define OR_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X0A, 0X6D, 0X00 # orb (%rbp), %bpl")
#define OR_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X0A, 0X2C, 0X24 # orb (%rsp), %bpl")
#define OR_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X28 # orb (%r8), %bpl")
#define OR_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X29 # orb (%r9), %bpl")
#define OR_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X2A # orb (%r10), %bpl")
#define OR_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X2B # orb (%r11), %bpl")
#define OR_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X2C, 0X24 # orb (%r12), %bpl")
#define OR_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X6D, 0X00 # orb (%r13), %bpl")
#define OR_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X2E # orb (%r14), %bpl")
#define OR_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X2F # orb (%r15), %bpl")
#define OR_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X28 # orb (%eax), %bpl")
#define OR_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X2B # orb (%ebx), %bpl")
#define OR_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X29 # orb (%ecx), %bpl")
#define OR_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X2A # orb (%edx), %bpl")
#define OR_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X2F # orb (%edi), %bpl")
#define OR_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X2E # orb (%esi), %bpl")
#define OR_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X6D, 0X00 # orb (%ebp), %bpl")
#define OR_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X2C, 0X24 # orb (%esp), %bpl")

#define OR_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X0A, 0X20 # orb (%rax), %spl")
#define OR_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X0A, 0X23 # orb (%rbx), %spl")
#define OR_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X0A, 0X21 # orb (%rcx), %spl")
#define OR_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X0A, 0X22 # orb (%rdx), %spl")
#define OR_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X0A, 0X27 # orb (%rdi), %spl")
#define OR_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X0A, 0X26 # orb (%rsi), %spl")
#define OR_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X0A, 0X65, 0X00 # orb (%rbp), %spl")
#define OR_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X0A, 0X24, 0X24 # orb (%rsp), %spl")
#define OR_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0A, 0X20 # orb (%r8), %spl")
#define OR_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0A, 0X21 # orb (%r9), %spl")
#define OR_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0A, 0X22 # orb (%r10), %spl")
#define OR_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0A, 0X23 # orb (%r11), %spl")
#define OR_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0A, 0X24, 0X24 # orb (%r12), %spl")
#define OR_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0A, 0X65, 0X00 # orb (%r13), %spl")
#define OR_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0A, 0X26 # orb (%r14), %spl")
#define OR_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0A, 0X27 # orb (%r15), %spl")
#define OR_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X20 # orb (%eax), %spl")
#define OR_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X23 # orb (%ebx), %spl")
#define OR_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X21 # orb (%ecx), %spl")
#define OR_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X22 # orb (%edx), %spl")
#define OR_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X27 # orb (%edi), %spl")
#define OR_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X26 # orb (%esi), %spl")
#define OR_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X65, 0X00 # orb (%ebp), %spl")
#define OR_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X0A, 0X24, 0X24 # orb (%esp), %spl")

#define OR_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X00 # orb (%rax), %r8b")
#define OR_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X03 # orb (%rbx), %r8b")
#define OR_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X01 # orb (%rcx), %r8b")
#define OR_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X02 # orb (%rdx), %r8b")
#define OR_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X07 # orb (%rdi), %r8b")
#define OR_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X06 # orb (%rsi), %r8b")
#define OR_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X45, 0X00 # orb (%rbp), %r8b")
#define OR_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X04, 0X24 # orb (%rsp), %r8b")
#define OR_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X00 # orb (%r8), %r8b")
#define OR_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X01 # orb (%r9), %r8b")
#define OR_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X02 # orb (%r10), %r8b")
#define OR_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X03 # orb (%r11), %r8b")
#define OR_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X04, 0X24 # orb (%r12), %r8b")
#define OR_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X45, 0X00 # orb (%r13), %r8b")
#define OR_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X06 # orb (%r14), %r8b")
#define OR_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X07 # orb (%r15), %r8b")
#define OR_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X00 # orb (%eax), %r8b")
#define OR_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X03 # orb (%ebx), %r8b")
#define OR_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X01 # orb (%ecx), %r8b")
#define OR_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X02 # orb (%edx), %r8b")
#define OR_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X07 # orb (%edi), %r8b")
#define OR_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X06 # orb (%esi), %r8b")
#define OR_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X45, 0X00 # orb (%ebp), %r8b")
#define OR_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X04, 0X24 # orb (%esp), %r8b")

#define OR_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X08 # orb (%rax), %r9b")
#define OR_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X0B # orb (%rbx), %r9b")
#define OR_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X09 # orb (%rcx), %r9b")
#define OR_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X0A # orb (%rdx), %r9b")
#define OR_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X0F # orb (%rdi), %r9b")
#define OR_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X0E # orb (%rsi), %r9b")
#define OR_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X4D, 0X00 # orb (%rbp), %r9b")
#define OR_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X0C, 0X24 # orb (%rsp), %r9b")
#define OR_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X08 # orb (%r8), %r9b")
#define OR_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X09 # orb (%r9), %r9b")
#define OR_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X0A # orb (%r10), %r9b")
#define OR_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X0B # orb (%r11), %r9b")
#define OR_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X0C, 0X24 # orb (%r12), %r9b")
#define OR_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X4D, 0X00 # orb (%r13), %r9b")
#define OR_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X0E # orb (%r14), %r9b")
#define OR_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X0F # orb (%r15), %r9b")
#define OR_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X08 # orb (%eax), %r9b")
#define OR_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X0B # orb (%ebx), %r9b")
#define OR_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X09 # orb (%ecx), %r9b")
#define OR_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X0A # orb (%edx), %r9b")
#define OR_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X0F # orb (%edi), %r9b")
#define OR_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X0E # orb (%esi), %r9b")
#define OR_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X4D, 0X00 # orb (%ebp), %r9b")
#define OR_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X0C, 0X24 # orb (%esp), %r9b")

#define OR_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X10 # orb (%rax), %r10b")
#define OR_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X13 # orb (%rbx), %r10b")
#define OR_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X11 # orb (%rcx), %r10b")
#define OR_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X12 # orb (%rdx), %r10b")
#define OR_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X17 # orb (%rdi), %r10b")
#define OR_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X16 # orb (%rsi), %r10b")
#define OR_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X55, 0X00 # orb (%rbp), %r10b")
#define OR_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X14, 0X24 # orb (%rsp), %r10b")
#define OR_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X10 # orb (%r8), %r10b")
#define OR_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X11 # orb (%r9), %r10b")
#define OR_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X12 # orb (%r10), %r10b")
#define OR_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X13 # orb (%r11), %r10b")
#define OR_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X14, 0X24 # orb (%r12), %r10b")
#define OR_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X55, 0X00 # orb (%r13), %r10b")
#define OR_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X16 # orb (%r14), %r10b")
#define OR_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X17 # orb (%r15), %r10b")
#define OR_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X10 # orb (%eax), %r10b")
#define OR_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X13 # orb (%ebx), %r10b")
#define OR_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X11 # orb (%ecx), %r10b")
#define OR_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X12 # orb (%edx), %r10b")
#define OR_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X17 # orb (%edi), %r10b")
#define OR_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X16 # orb (%esi), %r10b")
#define OR_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X55, 0X00 # orb (%ebp), %r10b")
#define OR_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X14, 0X24 # orb (%esp), %r10b")

#define OR_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X18 # orb (%rax), %r11b")
#define OR_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X1B # orb (%rbx), %r11b")
#define OR_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X19 # orb (%rcx), %r11b")
#define OR_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X1A # orb (%rdx), %r11b")
#define OR_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X1F # orb (%rdi), %r11b")
#define OR_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X1E # orb (%rsi), %r11b")
#define OR_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X5D, 0X00 # orb (%rbp), %r11b")
#define OR_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X1C, 0X24 # orb (%rsp), %r11b")
#define OR_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X18 # orb (%r8), %r11b")
#define OR_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X19 # orb (%r9), %r11b")
#define OR_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X1A # orb (%r10), %r11b")
#define OR_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X1B # orb (%r11), %r11b")
#define OR_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X1C, 0X24 # orb (%r12), %r11b")
#define OR_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X5D, 0X00 # orb (%r13), %r11b")
#define OR_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X1E # orb (%r14), %r11b")
#define OR_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X1F # orb (%r15), %r11b")
#define OR_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X18 # orb (%eax), %r11b")
#define OR_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X1B # orb (%ebx), %r11b")
#define OR_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X19 # orb (%ecx), %r11b")
#define OR_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X1A # orb (%edx), %r11b")
#define OR_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X1F # orb (%edi), %r11b")
#define OR_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X1E # orb (%esi), %r11b")
#define OR_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X5D, 0X00 # orb (%ebp), %r11b")
#define OR_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X1C, 0X24 # orb (%esp), %r11b")

#define OR_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X20 # orb (%rax), %r12b")
#define OR_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X23 # orb (%rbx), %r12b")
#define OR_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X21 # orb (%rcx), %r12b")
#define OR_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X22 # orb (%rdx), %r12b")
#define OR_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X27 # orb (%rdi), %r12b")
#define OR_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X26 # orb (%rsi), %r12b")
#define OR_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X65, 0X00 # orb (%rbp), %r12b")
#define OR_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X24, 0X24 # orb (%rsp), %r12b")
#define OR_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X20 # orb (%r8), %r12b")
#define OR_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X21 # orb (%r9), %r12b")
#define OR_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X22 # orb (%r10), %r12b")
#define OR_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X23 # orb (%r11), %r12b")
#define OR_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X24, 0X24 # orb (%r12), %r12b")
#define OR_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X65, 0X00 # orb (%r13), %r12b")
#define OR_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X26 # orb (%r14), %r12b")
#define OR_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X27 # orb (%r15), %r12b")
#define OR_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X20 # orb (%eax), %r12b")
#define OR_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X23 # orb (%ebx), %r12b")
#define OR_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X21 # orb (%ecx), %r12b")
#define OR_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X22 # orb (%edx), %r12b")
#define OR_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X27 # orb (%edi), %r12b")
#define OR_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X26 # orb (%esi), %r12b")
#define OR_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X65, 0X00 # orb (%ebp), %r12b")
#define OR_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X24, 0X24 # orb (%esp), %r12b")

#define OR_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X28 # orb (%rax), %r13b")
#define OR_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X2B # orb (%rbx), %r13b")
#define OR_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X29 # orb (%rcx), %r13b")
#define OR_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X2A # orb (%rdx), %r13b")
#define OR_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X2F # orb (%rdi), %r13b")
#define OR_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X2E # orb (%rsi), %r13b")
#define OR_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X6D, 0X00 # orb (%rbp), %r13b")
#define OR_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X2C, 0X24 # orb (%rsp), %r13b")
#define OR_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X28 # orb (%r8), %r13b")
#define OR_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X29 # orb (%r9), %r13b")
#define OR_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X2A # orb (%r10), %r13b")
#define OR_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X2B # orb (%r11), %r13b")
#define OR_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X2C, 0X24 # orb (%r12), %r13b")
#define OR_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X6D, 0X00 # orb (%r13), %r13b")
#define OR_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X2E # orb (%r14), %r13b")
#define OR_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X2F # orb (%r15), %r13b")
#define OR_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X28 # orb (%eax), %r13b")
#define OR_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X2B # orb (%ebx), %r13b")
#define OR_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X29 # orb (%ecx), %r13b")
#define OR_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X2A # orb (%edx), %r13b")
#define OR_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X2F # orb (%edi), %r13b")
#define OR_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X2E # orb (%esi), %r13b")
#define OR_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X6D, 0X00 # orb (%ebp), %r13b")
#define OR_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X2C, 0X24 # orb (%esp), %r13b")

#define OR_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X30 # orb (%rax), %r14b")
#define OR_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X33 # orb (%rbx), %r14b")
#define OR_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X31 # orb (%rcx), %r14b")
#define OR_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X32 # orb (%rdx), %r14b")
#define OR_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X37 # orb (%rdi), %r14b")
#define OR_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X36 # orb (%rsi), %r14b")
#define OR_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X75, 0X00 # orb (%rbp), %r14b")
#define OR_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X34, 0X24 # orb (%rsp), %r14b")
#define OR_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X30 # orb (%r8), %r14b")
#define OR_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X31 # orb (%r9), %r14b")
#define OR_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X32 # orb (%r10), %r14b")
#define OR_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X33 # orb (%r11), %r14b")
#define OR_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X34, 0X24 # orb (%r12), %r14b")
#define OR_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X75, 0X00 # orb (%r13), %r14b")
#define OR_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X36 # orb (%r14), %r14b")
#define OR_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X37 # orb (%r15), %r14b")
#define OR_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X30 # orb (%eax), %r14b")
#define OR_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X33 # orb (%ebx), %r14b")
#define OR_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X31 # orb (%ecx), %r14b")
#define OR_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X32 # orb (%edx), %r14b")
#define OR_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X37 # orb (%edi), %r14b")
#define OR_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X36 # orb (%esi), %r14b")
#define OR_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X75, 0X00 # orb (%ebp), %r14b")
#define OR_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X34, 0X24 # orb (%esp), %r14b")

#define OR_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0A, 0X38 # orb (%rax), %r15b")
#define OR_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0A, 0X3B # orb (%rbx), %r15b")
#define OR_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0A, 0X39 # orb (%rcx), %r15b")
#define OR_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0A, 0X3A # orb (%rdx), %r15b")
#define OR_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0A, 0X3F # orb (%rdi), %r15b")
#define OR_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0A, 0X3E # orb (%rsi), %r15b")
#define OR_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0A, 0X7D, 0X00 # orb (%rbp), %r15b")
#define OR_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0A, 0X3C, 0X24 # orb (%rsp), %r15b")
#define OR_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0A, 0X38 # orb (%r8), %r15b")
#define OR_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0A, 0X39 # orb (%r9), %r15b")
#define OR_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0A, 0X3A # orb (%r10), %r15b")
#define OR_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0A, 0X3B # orb (%r11), %r15b")
#define OR_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0A, 0X3C, 0X24 # orb (%r12), %r15b")
#define OR_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0A, 0X7D, 0X00 # orb (%r13), %r15b")
#define OR_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0A, 0X3E # orb (%r14), %r15b")
#define OR_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0A, 0X3F # orb (%r15), %r15b")
#define OR_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X38 # orb (%eax), %r15b")
#define OR_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X3B # orb (%ebx), %r15b")
#define OR_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X39 # orb (%ecx), %r15b")
#define OR_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X3A # orb (%edx), %r15b")
#define OR_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X3F # orb (%edi), %r15b")
#define OR_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X3E # orb (%esi), %r15b")
#define OR_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X7D, 0X00 # orb (%ebp), %r15b")
#define OR_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X3C, 0X24 # orb (%esp), %r15b")

#define OR_AL_TO_PTR_RAX CMT_ASM(".byte 0X08, 0X00 # orb %al, (%rax)")
#define OR_AL_TO_PTR_RBX CMT_ASM(".byte 0X08, 0X03 # orb %al, (%rbx)")
#define OR_AL_TO_PTR_RCX CMT_ASM(".byte 0X08, 0X01 # orb %al, (%rcx)")
#define OR_AL_TO_PTR_RDX CMT_ASM(".byte 0X08, 0X02 # orb %al, (%rdx)")
#define OR_AL_TO_PTR_RDI CMT_ASM(".byte 0X08, 0X07 # orb %al, (%rdi)")
#define OR_AL_TO_PTR_RSI CMT_ASM(".byte 0X08, 0X06 # orb %al, (%rsi)")
#define OR_AL_TO_PTR_RBP CMT_ASM(".byte 0X08, 0X45, 0X00 # orb %al, (%rbp)")
#define OR_AL_TO_PTR_RSP CMT_ASM(".byte 0X08, 0X04, 0X24 # orb %al, (%rsp)")
#define OR_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X00 # orb %al, (%r8)")
#define OR_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X01 # orb %al, (%r9)")
#define OR_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X02 # orb %al, (%r10)")
#define OR_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X03 # orb %al, (%r11)")
#define OR_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X04, 0X24 # orb %al, (%r12)")
#define OR_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X45, 0X00 # orb %al, (%r13)")
#define OR_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X06 # orb %al, (%r14)")
#define OR_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X07 # orb %al, (%r15)")
#define OR_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X08, 0X00 # orb %al, (%eax)")
#define OR_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X08, 0X03 # orb %al, (%ebx)")
#define OR_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X08, 0X01 # orb %al, (%ecx)")
#define OR_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X08, 0X02 # orb %al, (%edx)")
#define OR_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X08, 0X07 # orb %al, (%edi)")
#define OR_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X08, 0X06 # orb %al, (%esi)")
#define OR_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X08, 0X45, 0X00 # orb %al, (%ebp)")
#define OR_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X08, 0X04, 0X24 # orb %al, (%esp)")

#define OR_BL_TO_PTR_RAX CMT_ASM(".byte 0X08, 0X18 # orb %bl, (%rax)")
#define OR_BL_TO_PTR_RBX CMT_ASM(".byte 0X08, 0X1B # orb %bl, (%rbx)")
#define OR_BL_TO_PTR_RCX CMT_ASM(".byte 0X08, 0X19 # orb %bl, (%rcx)")
#define OR_BL_TO_PTR_RDX CMT_ASM(".byte 0X08, 0X1A # orb %bl, (%rdx)")
#define OR_BL_TO_PTR_RDI CMT_ASM(".byte 0X08, 0X1F # orb %bl, (%rdi)")
#define OR_BL_TO_PTR_RSI CMT_ASM(".byte 0X08, 0X1E # orb %bl, (%rsi)")
#define OR_BL_TO_PTR_RBP CMT_ASM(".byte 0X08, 0X5D, 0X00 # orb %bl, (%rbp)")
#define OR_BL_TO_PTR_RSP CMT_ASM(".byte 0X08, 0X1C, 0X24 # orb %bl, (%rsp)")
#define OR_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X18 # orb %bl, (%r8)")
#define OR_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X19 # orb %bl, (%r9)")
#define OR_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X1A # orb %bl, (%r10)")
#define OR_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X1B # orb %bl, (%r11)")
#define OR_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X1C, 0X24 # orb %bl, (%r12)")
#define OR_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X5D, 0X00 # orb %bl, (%r13)")
#define OR_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X1E # orb %bl, (%r14)")
#define OR_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X1F # orb %bl, (%r15)")
#define OR_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X08, 0X18 # orb %bl, (%eax)")
#define OR_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X08, 0X1B # orb %bl, (%ebx)")
#define OR_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X08, 0X19 # orb %bl, (%ecx)")
#define OR_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X08, 0X1A # orb %bl, (%edx)")
#define OR_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X08, 0X1F # orb %bl, (%edi)")
#define OR_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X08, 0X1E # orb %bl, (%esi)")
#define OR_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X08, 0X5D, 0X00 # orb %bl, (%ebp)")
#define OR_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X08, 0X1C, 0X24 # orb %bl, (%esp)")

#define OR_CL_TO_PTR_RAX CMT_ASM(".byte 0X08, 0X08 # orb %cl, (%rax)")
#define OR_CL_TO_PTR_RBX CMT_ASM(".byte 0X08, 0X0B # orb %cl, (%rbx)")
#define OR_CL_TO_PTR_RCX CMT_ASM(".byte 0X08, 0X09 # orb %cl, (%rcx)")
#define OR_CL_TO_PTR_RDX CMT_ASM(".byte 0X08, 0X0A # orb %cl, (%rdx)")
#define OR_CL_TO_PTR_RDI CMT_ASM(".byte 0X08, 0X0F # orb %cl, (%rdi)")
#define OR_CL_TO_PTR_RSI CMT_ASM(".byte 0X08, 0X0E # orb %cl, (%rsi)")
#define OR_CL_TO_PTR_RBP CMT_ASM(".byte 0X08, 0X4D, 0X00 # orb %cl, (%rbp)")
#define OR_CL_TO_PTR_RSP CMT_ASM(".byte 0X08, 0X0C, 0X24 # orb %cl, (%rsp)")
#define OR_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X08 # orb %cl, (%r8)")
#define OR_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X09 # orb %cl, (%r9)")
#define OR_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X0A # orb %cl, (%r10)")
#define OR_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X0B # orb %cl, (%r11)")
#define OR_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X0C, 0X24 # orb %cl, (%r12)")
#define OR_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X4D, 0X00 # orb %cl, (%r13)")
#define OR_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X0E # orb %cl, (%r14)")
#define OR_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X0F # orb %cl, (%r15)")
#define OR_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X08, 0X08 # orb %cl, (%eax)")
#define OR_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X08, 0X0B # orb %cl, (%ebx)")
#define OR_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X08, 0X09 # orb %cl, (%ecx)")
#define OR_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X08, 0X0A # orb %cl, (%edx)")
#define OR_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X08, 0X0F # orb %cl, (%edi)")
#define OR_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X08, 0X0E # orb %cl, (%esi)")
#define OR_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X08, 0X4D, 0X00 # orb %cl, (%ebp)")
#define OR_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X08, 0X0C, 0X24 # orb %cl, (%esp)")

#define OR_DL_TO_PTR_RAX CMT_ASM(".byte 0X08, 0X10 # orb %dl, (%rax)")
#define OR_DL_TO_PTR_RBX CMT_ASM(".byte 0X08, 0X13 # orb %dl, (%rbx)")
#define OR_DL_TO_PTR_RCX CMT_ASM(".byte 0X08, 0X11 # orb %dl, (%rcx)")
#define OR_DL_TO_PTR_RDX CMT_ASM(".byte 0X08, 0X12 # orb %dl, (%rdx)")
#define OR_DL_TO_PTR_RDI CMT_ASM(".byte 0X08, 0X17 # orb %dl, (%rdi)")
#define OR_DL_TO_PTR_RSI CMT_ASM(".byte 0X08, 0X16 # orb %dl, (%rsi)")
#define OR_DL_TO_PTR_RBP CMT_ASM(".byte 0X08, 0X55, 0X00 # orb %dl, (%rbp)")
#define OR_DL_TO_PTR_RSP CMT_ASM(".byte 0X08, 0X14, 0X24 # orb %dl, (%rsp)")
#define OR_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X10 # orb %dl, (%r8)")
#define OR_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X11 # orb %dl, (%r9)")
#define OR_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X12 # orb %dl, (%r10)")
#define OR_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X13 # orb %dl, (%r11)")
#define OR_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X14, 0X24 # orb %dl, (%r12)")
#define OR_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X55, 0X00 # orb %dl, (%r13)")
#define OR_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X16 # orb %dl, (%r14)")
#define OR_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X17 # orb %dl, (%r15)")
#define OR_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X08, 0X10 # orb %dl, (%eax)")
#define OR_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X08, 0X13 # orb %dl, (%ebx)")
#define OR_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X08, 0X11 # orb %dl, (%ecx)")
#define OR_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X08, 0X12 # orb %dl, (%edx)")
#define OR_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X08, 0X17 # orb %dl, (%edi)")
#define OR_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X08, 0X16 # orb %dl, (%esi)")
#define OR_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X08, 0X55, 0X00 # orb %dl, (%ebp)")
#define OR_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X08, 0X14, 0X24 # orb %dl, (%esp)")

#define OR_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X08, 0X38 # orb %dil, (%rax)")
#define OR_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X08, 0X3B # orb %dil, (%rbx)")
#define OR_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X08, 0X39 # orb %dil, (%rcx)")
#define OR_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X08, 0X3A # orb %dil, (%rdx)")
#define OR_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X08, 0X3F # orb %dil, (%rdi)")
#define OR_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X08, 0X3E # orb %dil, (%rsi)")
#define OR_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X08, 0X7D, 0X00 # orb %dil, (%rbp)")
#define OR_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X08, 0X3C, 0X24 # orb %dil, (%rsp)")
#define OR_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X38 # orb %dil, (%r8)")
#define OR_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X39 # orb %dil, (%r9)")
#define OR_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X3A # orb %dil, (%r10)")
#define OR_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X3B # orb %dil, (%r11)")
#define OR_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X3C, 0X24 # orb %dil, (%r12)")
#define OR_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X7D, 0X00 # orb %dil, (%r13)")
#define OR_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X3E # orb %dil, (%r14)")
#define OR_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X3F # orb %dil, (%r15)")
#define OR_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X38 # orb %dil, (%eax)")
#define OR_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X3B # orb %dil, (%ebx)")
#define OR_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X39 # orb %dil, (%ecx)")
#define OR_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X3A # orb %dil, (%edx)")
#define OR_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X3F # orb %dil, (%edi)")
#define OR_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X3E # orb %dil, (%esi)")
#define OR_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X7D, 0X00 # orb %dil, (%ebp)")
#define OR_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X3C, 0X24 # orb %dil, (%esp)")

#define OR_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X08, 0X30 # orb %sil, (%rax)")
#define OR_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X08, 0X33 # orb %sil, (%rbx)")
#define OR_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X08, 0X31 # orb %sil, (%rcx)")
#define OR_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X08, 0X32 # orb %sil, (%rdx)")
#define OR_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X08, 0X37 # orb %sil, (%rdi)")
#define OR_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X08, 0X36 # orb %sil, (%rsi)")
#define OR_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X08, 0X75, 0X00 # orb %sil, (%rbp)")
#define OR_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X08, 0X34, 0X24 # orb %sil, (%rsp)")
#define OR_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X30 # orb %sil, (%r8)")
#define OR_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X31 # orb %sil, (%r9)")
#define OR_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X32 # orb %sil, (%r10)")
#define OR_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X33 # orb %sil, (%r11)")
#define OR_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X34, 0X24 # orb %sil, (%r12)")
#define OR_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X75, 0X00 # orb %sil, (%r13)")
#define OR_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X36 # orb %sil, (%r14)")
#define OR_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X37 # orb %sil, (%r15)")
#define OR_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X30 # orb %sil, (%eax)")
#define OR_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X33 # orb %sil, (%ebx)")
#define OR_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X31 # orb %sil, (%ecx)")
#define OR_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X32 # orb %sil, (%edx)")
#define OR_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X37 # orb %sil, (%edi)")
#define OR_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X36 # orb %sil, (%esi)")
#define OR_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X75, 0X00 # orb %sil, (%ebp)")
#define OR_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X34, 0X24 # orb %sil, (%esp)")

#define OR_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X08, 0X28 # orb %bpl, (%rax)")
#define OR_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X08, 0X2B # orb %bpl, (%rbx)")
#define OR_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X08, 0X29 # orb %bpl, (%rcx)")
#define OR_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X08, 0X2A # orb %bpl, (%rdx)")
#define OR_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X08, 0X2F # orb %bpl, (%rdi)")
#define OR_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X08, 0X2E # orb %bpl, (%rsi)")
#define OR_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X08, 0X6D, 0X00 # orb %bpl, (%rbp)")
#define OR_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X08, 0X2C, 0X24 # orb %bpl, (%rsp)")
#define OR_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X28 # orb %bpl, (%r8)")
#define OR_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X29 # orb %bpl, (%r9)")
#define OR_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X2A # orb %bpl, (%r10)")
#define OR_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X2B # orb %bpl, (%r11)")
#define OR_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X2C, 0X24 # orb %bpl, (%r12)")
#define OR_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X6D, 0X00 # orb %bpl, (%r13)")
#define OR_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X2E # orb %bpl, (%r14)")
#define OR_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X2F # orb %bpl, (%r15)")
#define OR_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X28 # orb %bpl, (%eax)")
#define OR_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X2B # orb %bpl, (%ebx)")
#define OR_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X29 # orb %bpl, (%ecx)")
#define OR_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X2A # orb %bpl, (%edx)")
#define OR_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X2F # orb %bpl, (%edi)")
#define OR_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X2E # orb %bpl, (%esi)")
#define OR_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X6D, 0X00 # orb %bpl, (%ebp)")
#define OR_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X2C, 0X24 # orb %bpl, (%esp)")

#define OR_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X08, 0X20 # orb %spl, (%rax)")
#define OR_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X08, 0X23 # orb %spl, (%rbx)")
#define OR_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X08, 0X21 # orb %spl, (%rcx)")
#define OR_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X08, 0X22 # orb %spl, (%rdx)")
#define OR_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X08, 0X27 # orb %spl, (%rdi)")
#define OR_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X08, 0X26 # orb %spl, (%rsi)")
#define OR_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X08, 0X65, 0X00 # orb %spl, (%rbp)")
#define OR_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X08, 0X24, 0X24 # orb %spl, (%rsp)")
#define OR_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X08, 0X20 # orb %spl, (%r8)")
#define OR_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X08, 0X21 # orb %spl, (%r9)")
#define OR_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X08, 0X22 # orb %spl, (%r10)")
#define OR_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X08, 0X23 # orb %spl, (%r11)")
#define OR_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X08, 0X24, 0X24 # orb %spl, (%r12)")
#define OR_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X08, 0X65, 0X00 # orb %spl, (%r13)")
#define OR_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X08, 0X26 # orb %spl, (%r14)")
#define OR_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X08, 0X27 # orb %spl, (%r15)")
#define OR_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X20 # orb %spl, (%eax)")
#define OR_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X23 # orb %spl, (%ebx)")
#define OR_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X21 # orb %spl, (%ecx)")
#define OR_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X08, 0X22 # orb %spl, (%edx)")
#define OR_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X27 # orb %spl, (%edi)")
#define OR_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X08, 0X26 # orb %spl, (%esi)")
#define OR_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X65, 0X00 # orb %spl, (%ebp)")
#define OR_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X08, 0X24, 0X24 # orb %spl, (%esp)")

#define OR_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X00 # orb %r8b, (%rax)")
#define OR_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X03 # orb %r8b, (%rbx)")
#define OR_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X01 # orb %r8b, (%rcx)")
#define OR_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X02 # orb %r8b, (%rdx)")
#define OR_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X07 # orb %r8b, (%rdi)")
#define OR_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X06 # orb %r8b, (%rsi)")
#define OR_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X45, 0X00 # orb %r8b, (%rbp)")
#define OR_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X04, 0X24 # orb %r8b, (%rsp)")
#define OR_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X00 # orb %r8b, (%r8)")
#define OR_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X01 # orb %r8b, (%r9)")
#define OR_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X02 # orb %r8b, (%r10)")
#define OR_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X03 # orb %r8b, (%r11)")
#define OR_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X04, 0X24 # orb %r8b, (%r12)")
#define OR_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X45, 0X00 # orb %r8b, (%r13)")
#define OR_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X06 # orb %r8b, (%r14)")
#define OR_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X07 # orb %r8b, (%r15)")
#define OR_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X00 # orb %r8b, (%eax)")
#define OR_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X03 # orb %r8b, (%ebx)")
#define OR_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X01 # orb %r8b, (%ecx)")
#define OR_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X02 # orb %r8b, (%edx)")
#define OR_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X07 # orb %r8b, (%edi)")
#define OR_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X06 # orb %r8b, (%esi)")
#define OR_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X45, 0X00 # orb %r8b, (%ebp)")
#define OR_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X04, 0X24 # orb %r8b, (%esp)")

#define OR_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X08 # orb %r9b, (%rax)")
#define OR_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X0B # orb %r9b, (%rbx)")
#define OR_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X09 # orb %r9b, (%rcx)")
#define OR_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X0A # orb %r9b, (%rdx)")
#define OR_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X0F # orb %r9b, (%rdi)")
#define OR_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X0E # orb %r9b, (%rsi)")
#define OR_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X4D, 0X00 # orb %r9b, (%rbp)")
#define OR_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X0C, 0X24 # orb %r9b, (%rsp)")
#define OR_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X08 # orb %r9b, (%r8)")
#define OR_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X09 # orb %r9b, (%r9)")
#define OR_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X0A # orb %r9b, (%r10)")
#define OR_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X0B # orb %r9b, (%r11)")
#define OR_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X0C, 0X24 # orb %r9b, (%r12)")
#define OR_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X4D, 0X00 # orb %r9b, (%r13)")
#define OR_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X0E # orb %r9b, (%r14)")
#define OR_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X0F # orb %r9b, (%r15)")
#define OR_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X08 # orb %r9b, (%eax)")
#define OR_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X0B # orb %r9b, (%ebx)")
#define OR_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X09 # orb %r9b, (%ecx)")
#define OR_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X0A # orb %r9b, (%edx)")
#define OR_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X0F # orb %r9b, (%edi)")
#define OR_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X0E # orb %r9b, (%esi)")
#define OR_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X4D, 0X00 # orb %r9b, (%ebp)")
#define OR_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X0C, 0X24 # orb %r9b, (%esp)")

#define OR_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X10 # orb %r10b, (%rax)")
#define OR_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X13 # orb %r10b, (%rbx)")
#define OR_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X11 # orb %r10b, (%rcx)")
#define OR_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X12 # orb %r10b, (%rdx)")
#define OR_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X17 # orb %r10b, (%rdi)")
#define OR_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X16 # orb %r10b, (%rsi)")
#define OR_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X55, 0X00 # orb %r10b, (%rbp)")
#define OR_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X14, 0X24 # orb %r10b, (%rsp)")
#define OR_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X10 # orb %r10b, (%r8)")
#define OR_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X11 # orb %r10b, (%r9)")
#define OR_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X12 # orb %r10b, (%r10)")
#define OR_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X13 # orb %r10b, (%r11)")
#define OR_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X14, 0X24 # orb %r10b, (%r12)")
#define OR_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X55, 0X00 # orb %r10b, (%r13)")
#define OR_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X16 # orb %r10b, (%r14)")
#define OR_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X17 # orb %r10b, (%r15)")
#define OR_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X10 # orb %r10b, (%eax)")
#define OR_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X13 # orb %r10b, (%ebx)")
#define OR_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X11 # orb %r10b, (%ecx)")
#define OR_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X12 # orb %r10b, (%edx)")
#define OR_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X17 # orb %r10b, (%edi)")
#define OR_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X16 # orb %r10b, (%esi)")
#define OR_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X55, 0X00 # orb %r10b, (%ebp)")
#define OR_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X14, 0X24 # orb %r10b, (%esp)")

#define OR_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X18 # orb %r11b, (%rax)")
#define OR_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X1B # orb %r11b, (%rbx)")
#define OR_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X19 # orb %r11b, (%rcx)")
#define OR_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X1A # orb %r11b, (%rdx)")
#define OR_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X1F # orb %r11b, (%rdi)")
#define OR_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X1E # orb %r11b, (%rsi)")
#define OR_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X5D, 0X00 # orb %r11b, (%rbp)")
#define OR_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X1C, 0X24 # orb %r11b, (%rsp)")
#define OR_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X18 # orb %r11b, (%r8)")
#define OR_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X19 # orb %r11b, (%r9)")
#define OR_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X1A # orb %r11b, (%r10)")
#define OR_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X1B # orb %r11b, (%r11)")
#define OR_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X1C, 0X24 # orb %r11b, (%r12)")
#define OR_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X5D, 0X00 # orb %r11b, (%r13)")
#define OR_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X1E # orb %r11b, (%r14)")
#define OR_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X1F # orb %r11b, (%r15)")
#define OR_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X18 # orb %r11b, (%eax)")
#define OR_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X1B # orb %r11b, (%ebx)")
#define OR_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X19 # orb %r11b, (%ecx)")
#define OR_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X1A # orb %r11b, (%edx)")
#define OR_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X1F # orb %r11b, (%edi)")
#define OR_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X1E # orb %r11b, (%esi)")
#define OR_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X5D, 0X00 # orb %r11b, (%ebp)")
#define OR_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X1C, 0X24 # orb %r11b, (%esp)")

#define OR_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X20 # orb %r12b, (%rax)")
#define OR_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X23 # orb %r12b, (%rbx)")
#define OR_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X21 # orb %r12b, (%rcx)")
#define OR_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X22 # orb %r12b, (%rdx)")
#define OR_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X27 # orb %r12b, (%rdi)")
#define OR_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X26 # orb %r12b, (%rsi)")
#define OR_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X65, 0X00 # orb %r12b, (%rbp)")
#define OR_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X24, 0X24 # orb %r12b, (%rsp)")
#define OR_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X20 # orb %r12b, (%r8)")
#define OR_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X21 # orb %r12b, (%r9)")
#define OR_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X22 # orb %r12b, (%r10)")
#define OR_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X23 # orb %r12b, (%r11)")
#define OR_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X24, 0X24 # orb %r12b, (%r12)")
#define OR_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X65, 0X00 # orb %r12b, (%r13)")
#define OR_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X26 # orb %r12b, (%r14)")
#define OR_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X27 # orb %r12b, (%r15)")
#define OR_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X20 # orb %r12b, (%eax)")
#define OR_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X23 # orb %r12b, (%ebx)")
#define OR_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X21 # orb %r12b, (%ecx)")
#define OR_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X22 # orb %r12b, (%edx)")
#define OR_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X27 # orb %r12b, (%edi)")
#define OR_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X26 # orb %r12b, (%esi)")
#define OR_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X65, 0X00 # orb %r12b, (%ebp)")
#define OR_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X24, 0X24 # orb %r12b, (%esp)")

#define OR_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X28 # orb %r13b, (%rax)")
#define OR_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X2B # orb %r13b, (%rbx)")
#define OR_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X29 # orb %r13b, (%rcx)")
#define OR_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X2A # orb %r13b, (%rdx)")
#define OR_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X2F # orb %r13b, (%rdi)")
#define OR_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X2E # orb %r13b, (%rsi)")
#define OR_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X6D, 0X00 # orb %r13b, (%rbp)")
#define OR_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X2C, 0X24 # orb %r13b, (%rsp)")
#define OR_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X28 # orb %r13b, (%r8)")
#define OR_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X29 # orb %r13b, (%r9)")
#define OR_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X2A # orb %r13b, (%r10)")
#define OR_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X2B # orb %r13b, (%r11)")
#define OR_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X2C, 0X24 # orb %r13b, (%r12)")
#define OR_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X6D, 0X00 # orb %r13b, (%r13)")
#define OR_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X2E # orb %r13b, (%r14)")
#define OR_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X2F # orb %r13b, (%r15)")
#define OR_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X28 # orb %r13b, (%eax)")
#define OR_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X2B # orb %r13b, (%ebx)")
#define OR_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X29 # orb %r13b, (%ecx)")
#define OR_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X2A # orb %r13b, (%edx)")
#define OR_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X2F # orb %r13b, (%edi)")
#define OR_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X2E # orb %r13b, (%esi)")
#define OR_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X6D, 0X00 # orb %r13b, (%ebp)")
#define OR_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X2C, 0X24 # orb %r13b, (%esp)")

#define OR_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X30 # orb %r14b, (%rax)")
#define OR_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X33 # orb %r14b, (%rbx)")
#define OR_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X31 # orb %r14b, (%rcx)")
#define OR_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X32 # orb %r14b, (%rdx)")
#define OR_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X37 # orb %r14b, (%rdi)")
#define OR_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X36 # orb %r14b, (%rsi)")
#define OR_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X75, 0X00 # orb %r14b, (%rbp)")
#define OR_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X34, 0X24 # orb %r14b, (%rsp)")
#define OR_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X30 # orb %r14b, (%r8)")
#define OR_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X31 # orb %r14b, (%r9)")
#define OR_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X32 # orb %r14b, (%r10)")
#define OR_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X33 # orb %r14b, (%r11)")
#define OR_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X34, 0X24 # orb %r14b, (%r12)")
#define OR_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X75, 0X00 # orb %r14b, (%r13)")
#define OR_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X36 # orb %r14b, (%r14)")
#define OR_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X37 # orb %r14b, (%r15)")
#define OR_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X30 # orb %r14b, (%eax)")
#define OR_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X33 # orb %r14b, (%ebx)")
#define OR_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X31 # orb %r14b, (%ecx)")
#define OR_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X32 # orb %r14b, (%edx)")
#define OR_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X37 # orb %r14b, (%edi)")
#define OR_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X36 # orb %r14b, (%esi)")
#define OR_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X75, 0X00 # orb %r14b, (%ebp)")
#define OR_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X34, 0X24 # orb %r14b, (%esp)")

#define OR_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X08, 0X38 # orb %r15b, (%rax)")
#define OR_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X08, 0X3B # orb %r15b, (%rbx)")
#define OR_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X08, 0X39 # orb %r15b, (%rcx)")
#define OR_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X08, 0X3A # orb %r15b, (%rdx)")
#define OR_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X08, 0X3F # orb %r15b, (%rdi)")
#define OR_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X08, 0X3E # orb %r15b, (%rsi)")
#define OR_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X08, 0X7D, 0X00 # orb %r15b, (%rbp)")
#define OR_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X08, 0X3C, 0X24 # orb %r15b, (%rsp)")
#define OR_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X08, 0X38 # orb %r15b, (%r8)")
#define OR_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X08, 0X39 # orb %r15b, (%r9)")
#define OR_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X08, 0X3A # orb %r15b, (%r10)")
#define OR_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X08, 0X3B # orb %r15b, (%r11)")
#define OR_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X08, 0X3C, 0X24 # orb %r15b, (%r12)")
#define OR_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X08, 0X7D, 0X00 # orb %r15b, (%r13)")
#define OR_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X08, 0X3E # orb %r15b, (%r14)")
#define OR_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X08, 0X3F # orb %r15b, (%r15)")
#define OR_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X38 # orb %r15b, (%eax)")
#define OR_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X3B # orb %r15b, (%ebx)")
#define OR_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X39 # orb %r15b, (%ecx)")
#define OR_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X08, 0X3A # orb %r15b, (%edx)")
#define OR_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X3F # orb %r15b, (%edi)")
#define OR_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X08, 0X3E # orb %r15b, (%esi)")
#define OR_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X7D, 0X00 # orb %r15b, (%ebp)")
#define OR_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X08, 0X3C, 0X24 # orb %r15b, (%esp)")

#define OR_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X80 # orb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X83 # orb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X81 # orb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X82 # orb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X87 # orb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X86 # orb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X85 # orb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X80 # orb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X81 # orb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X82 # orb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X83 # orb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X85 # orb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X86 # orb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X87 # orb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X80 # orb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X83 # orb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X81 # orb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X82 # orb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X87 # orb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X86 # orb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X85 # orb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define OR_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X98 # orb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9B # orb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X99 # orb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9A # orb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9F # orb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9E # orb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9D # orb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X98 # orb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X99 # orb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9A # orb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9B # orb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9D # orb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9E # orb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X9F # orb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X98 # orb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9B # orb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X99 # orb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9A # orb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9F # orb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9E # orb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9D # orb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define OR_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X88 # orb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8B # orb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X89 # orb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8A # orb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8F # orb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8E # orb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8D # orb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X88 # orb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X89 # orb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8A # orb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8B # orb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8D # orb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8E # orb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X8F # orb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X88 # orb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8B # orb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X89 # orb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8A # orb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8F # orb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8E # orb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8D # orb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define OR_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X90 # orb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X93 # orb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X91 # orb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X92 # orb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X97 # orb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X96 # orb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X95 # orb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X90 # orb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X91 # orb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X92 # orb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X93 # orb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X95 # orb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X96 # orb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0X97 # orb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X90 # orb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X93 # orb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X91 # orb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X92 # orb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X97 # orb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X96 # orb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X95 # orb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define OR_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB8 # orb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBB # orb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB9 # orb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBA # orb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBF # orb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBE # orb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBD # orb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB8 # orb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB9 # orb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBA # orb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBB # orb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBD # orb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBE # orb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XBF # orb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB8 # orb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBB # orb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB9 # orb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBA # orb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBF # orb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBE # orb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBD # orb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define OR_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB0 # orb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB3 # orb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB1 # orb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB2 # orb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB7 # orb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB6 # orb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB5 # orb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB0 # orb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB1 # orb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB2 # orb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB3 # orb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB5 # orb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB6 # orb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XB7 # orb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB0 # orb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB3 # orb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB1 # orb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB2 # orb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB7 # orb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB6 # orb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB5 # orb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define OR_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA8 # orb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAB # orb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA9 # orb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAA # orb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAF # orb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAE # orb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAD # orb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA8 # orb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA9 # orb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAA # orb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAB # orb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAD # orb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAE # orb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XAF # orb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA8 # orb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAB # orb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA9 # orb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAA # orb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAF # orb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAE # orb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAD # orb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define OR_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA0 # orb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA3 # orb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA1 # orb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA2 # orb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA7 # orb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA6 # orb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA5 # orb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA0 # orb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA1 # orb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA2 # orb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA3 # orb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA5 # orb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA6 # orb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0A, 0XA7 # orb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA0 # orb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA3 # orb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA1 # orb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA2 # orb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA7 # orb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA6 # orb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA5 # orb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X80 # orb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X83 # orb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X81 # orb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X82 # orb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X87 # orb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X86 # orb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X85 # orb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X80 # orb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X81 # orb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X82 # orb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X83 # orb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X85 # orb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X86 # orb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X87 # orb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X80 # orb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X83 # orb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X81 # orb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X82 # orb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X87 # orb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X86 # orb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X85 # orb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X84, 0X24 # orb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X88 # orb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8B # orb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X89 # orb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8A # orb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8F # orb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8E # orb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8D # orb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X88 # orb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X89 # orb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8A # orb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8B # orb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8D # orb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8E # orb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X8F # orb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X88 # orb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8B # orb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X89 # orb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8A # orb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8F # orb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8E # orb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8D # orb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X8C, 0X24 # orb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X90 # orb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X93 # orb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X91 # orb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X92 # orb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X97 # orb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X96 # orb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X95 # orb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X90 # orb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X91 # orb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X92 # orb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X93 # orb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X95 # orb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X96 # orb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X97 # orb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X90 # orb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X93 # orb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X91 # orb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X92 # orb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X97 # orb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X96 # orb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X95 # orb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X94, 0X24 # orb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X98 # orb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9B # orb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X99 # orb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9A # orb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9F # orb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9E # orb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9D # orb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X98 # orb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X99 # orb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9A # orb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9B # orb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9D # orb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9E # orb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0X9F # orb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X98 # orb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9B # orb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X99 # orb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9A # orb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9F # orb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9E # orb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9D # orb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0X9C, 0X24 # orb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA0 # orb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA3 # orb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA1 # orb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA2 # orb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA7 # orb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA6 # orb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA5 # orb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA0 # orb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA1 # orb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA2 # orb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA3 # orb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA5 # orb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA6 # orb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA7 # orb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA0 # orb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA3 # orb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA1 # orb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA2 # orb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA7 # orb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA6 # orb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA5 # orb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA4, 0X24 # orb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA8 # orb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAB # orb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XA9 # orb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAA # orb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAF # orb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAE # orb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAD # orb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA8 # orb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XA9 # orb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAA # orb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAB # orb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAD # orb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAE # orb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XAF # orb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA8 # orb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAB # orb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XA9 # orb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAA # orb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAF # orb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAE # orb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAD # orb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XAC, 0X24 # orb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB0 # orb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB3 # orb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB1 # orb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB2 # orb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB7 # orb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB6 # orb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB5 # orb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB0 # orb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB1 # orb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB2 # orb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB3 # orb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB5 # orb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB6 # orb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB7 # orb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB0 # orb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB3 # orb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB1 # orb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB2 # orb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB7 # orb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB6 # orb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB5 # orb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB4, 0X24 # orb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB8 # orb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBB # orb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XB9 # orb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBA # orb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBF # orb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBE # orb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBD # orb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB8 # orb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XB9 # orb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBA # orb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBB # orb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBD # orb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBE # orb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0A, 0XBF # orb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB8 # orb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBB # orb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XB9 # orb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBA # orb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBF # orb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBE # orb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBD # orb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0A, 0XBC, 0X24 # orb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define OR_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X80 # orb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X83 # orb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X81 # orb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X82 # orb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X87 # orb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X86 # orb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X85 # orb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X84, 0X24 # orb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X80 # orb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X81 # orb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X82 # orb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X83 # orb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X84, 0X24 # orb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X85 # orb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X86 # orb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X87 # orb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X80 # orb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X83 # orb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X81 # orb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X82 # orb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X87 # orb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X86 # orb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X85 # orb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X84, 0X24 # orb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X98 # orb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9B # orb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X99 # orb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9A # orb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9F # orb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9E # orb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9D # orb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X9C, 0X24 # orb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X98 # orb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X99 # orb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9A # orb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9B # orb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9C, 0X24 # orb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9D # orb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9E # orb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X9F # orb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X98 # orb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9B # orb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X99 # orb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9A # orb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9F # orb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9E # orb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9D # orb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X9C, 0X24 # orb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X88 # orb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8B # orb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X89 # orb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8A # orb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8F # orb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8E # orb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8D # orb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X8C, 0X24 # orb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X88 # orb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X89 # orb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8A # orb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8B # orb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8C, 0X24 # orb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8D # orb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8E # orb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X8F # orb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X88 # orb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8B # orb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X89 # orb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8A # orb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8F # orb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8E # orb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8D # orb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X8C, 0X24 # orb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X90 # orb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X93 # orb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X91 # orb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X08, 0X92 # orb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X97 # orb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X08, 0X96 # orb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X95 # orb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X08, 0X94, 0X24 # orb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X90 # orb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X91 # orb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X92 # orb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X93 # orb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X94, 0X24 # orb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X95 # orb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X96 # orb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0X97 # orb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X90 # orb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X93 # orb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X91 # orb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X92 # orb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X97 # orb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X96 # orb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X95 # orb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X08, 0X94, 0X24 # orb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB8 # orb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBB # orb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB9 # orb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBA # orb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBF # orb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBE # orb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBD # orb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XBC, 0X24 # orb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB8 # orb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB9 # orb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBA # orb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBB # orb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBC, 0X24 # orb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBD # orb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBE # orb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XBF # orb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB8 # orb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBB # orb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB9 # orb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBA # orb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBF # orb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBE # orb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBD # orb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XBC, 0X24 # orb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB0 # orb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB3 # orb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB1 # orb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB2 # orb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB7 # orb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB6 # orb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB5 # orb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XB4, 0X24 # orb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB0 # orb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB1 # orb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB2 # orb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB3 # orb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB4, 0X24 # orb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB5 # orb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB6 # orb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XB7 # orb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB0 # orb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB3 # orb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB1 # orb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB2 # orb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB7 # orb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB6 # orb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB5 # orb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XB4, 0X24 # orb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA8 # orb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAB # orb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA9 # orb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAA # orb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAF # orb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAE # orb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAD # orb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XAC, 0X24 # orb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA8 # orb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA9 # orb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAA # orb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAB # orb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAC, 0X24 # orb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAD # orb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAE # orb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XAF # orb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA8 # orb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAB # orb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA9 # orb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAA # orb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAF # orb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAE # orb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAD # orb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XAC, 0X24 # orb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA0 # orb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA3 # orb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA1 # orb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA2 # orb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA7 # orb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA6 # orb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA5 # orb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X08, 0XA4, 0X24 # orb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA0 # orb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA1 # orb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA2 # orb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA3 # orb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA4, 0X24 # orb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA5 # orb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA6 # orb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X08, 0XA7 # orb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA0 # orb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA3 # orb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA1 # orb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA2 # orb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA7 # orb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA6 # orb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA5 # orb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X08, 0XA4, 0X24 # orb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X80 # orb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X83 # orb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X81 # orb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X82 # orb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X87 # orb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X86 # orb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X85 # orb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X84, 0X24 # orb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X80 # orb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X81 # orb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X82 # orb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X83 # orb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X84, 0X24 # orb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X85 # orb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X86 # orb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X87 # orb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X80 # orb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X83 # orb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X81 # orb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X82 # orb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X87 # orb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X86 # orb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X85 # orb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X84, 0X24 # orb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X88 # orb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8B # orb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X89 # orb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8A # orb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8F # orb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8E # orb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8D # orb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X8C, 0X24 # orb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X88 # orb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X89 # orb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8A # orb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8B # orb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8C, 0X24 # orb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8D # orb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8E # orb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X8F # orb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X88 # orb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8B # orb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X89 # orb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8A # orb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8F # orb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8E # orb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8D # orb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X8C, 0X24 # orb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X90 # orb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X93 # orb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X91 # orb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X92 # orb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X97 # orb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X96 # orb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X95 # orb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X94, 0X24 # orb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X90 # orb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X91 # orb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X92 # orb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X93 # orb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X94, 0X24 # orb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X95 # orb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X96 # orb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X97 # orb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X90 # orb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X93 # orb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X91 # orb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X92 # orb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X97 # orb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X96 # orb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X95 # orb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X94, 0X24 # orb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X98 # orb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9B # orb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X99 # orb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9A # orb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9F # orb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9E # orb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9D # orb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0X9C, 0X24 # orb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X98 # orb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X99 # orb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9A # orb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9B # orb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9C, 0X24 # orb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9D # orb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9E # orb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0X9F # orb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X98 # orb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9B # orb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X99 # orb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9A # orb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9F # orb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9E # orb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9D # orb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0X9C, 0X24 # orb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA0 # orb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA3 # orb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA1 # orb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA2 # orb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA7 # orb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA6 # orb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA5 # orb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA4, 0X24 # orb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA0 # orb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA1 # orb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA2 # orb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA3 # orb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA4, 0X24 # orb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA5 # orb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA6 # orb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA7 # orb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA0 # orb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA3 # orb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA1 # orb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA2 # orb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA7 # orb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA6 # orb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA5 # orb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA4, 0X24 # orb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA8 # orb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAB # orb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XA9 # orb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAA # orb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAF # orb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAE # orb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAD # orb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XAC, 0X24 # orb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA8 # orb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XA9 # orb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAA # orb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAB # orb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAC, 0X24 # orb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAD # orb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAE # orb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XAF # orb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA8 # orb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAB # orb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XA9 # orb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAA # orb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAF # orb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAE # orb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAD # orb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XAC, 0X24 # orb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB0 # orb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB3 # orb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB1 # orb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB2 # orb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB7 # orb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB6 # orb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB5 # orb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB4, 0X24 # orb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB0 # orb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB1 # orb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB2 # orb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB3 # orb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB4, 0X24 # orb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB5 # orb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB6 # orb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB7 # orb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB0 # orb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB3 # orb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB1 # orb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB2 # orb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB7 # orb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB6 # orb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB5 # orb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB4, 0X24 # orb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB8 # orb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBB # orb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XB9 # orb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBA # orb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBF # orb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBE # orb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBD # orb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X08, 0XBC, 0X24 # orb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB8 # orb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XB9 # orb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBA # orb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBB # orb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBC, 0X24 # orb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBD # orb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBE # orb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X08, 0XBF # orb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB8 # orb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBB # orb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XB9 # orb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBA # orb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBF # orb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBE # orb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBD # orb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X08, 0XBC, 0X24 # orb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define OR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X06 # orw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X1E # orw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X0E # orw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X16 # orw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X3E # orw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X36 # orw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X2E # orw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X26 # orw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define OR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X06 # orw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X1E # orw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X0E # orw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X16 # orw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X3E # orw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X36 # orw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X2E # orw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X26 # orw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define OR_AX_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X07 # orw (%bx), %ax")
#define OR_AX_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X46, 0X00 # orw (%bp), %ax")
#define OR_AX_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X04 # orw (%si), %ax")
#define OR_AX_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X05 # orw (%di), %ax")

#define OR_BX_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X1F # orw (%bx), %bx")
#define OR_BX_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X5E, 0X00 # orw (%bp), %bx")
#define OR_BX_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X1C # orw (%si), %bx")
#define OR_BX_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X1D # orw (%di), %bx")

#define OR_CX_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X0F # orw (%bx), %cx")
#define OR_CX_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X4E, 0X00 # orw (%bp), %cx")
#define OR_CX_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X0C # orw (%si), %cx")
#define OR_CX_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X0D # orw (%di), %cx")

#define OR_DX_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X17 # orw (%bx), %dx")
#define OR_DX_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X56, 0X00 # orw (%bp), %dx")
#define OR_DX_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X14 # orw (%si), %dx")
#define OR_DX_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X15 # orw (%di), %dx")

#define OR_DI_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X3F # orw (%bx), %di")
#define OR_DI_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X7E, 0X00 # orw (%bp), %di")
#define OR_DI_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X3C # orw (%si), %di")
#define OR_DI_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X3D # orw (%di), %di")

#define OR_SI_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X37 # orw (%bx), %si")
#define OR_SI_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X76, 0X00 # orw (%bp), %si")
#define OR_SI_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X34 # orw (%si), %si")
#define OR_SI_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X35 # orw (%di), %si")

#define OR_BP_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X2F # orw (%bx), %bp")
#define OR_BP_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X6E, 0X00 # orw (%bp), %bp")
#define OR_BP_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X2C # orw (%si), %bp")
#define OR_BP_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X2D # orw (%di), %bp")

#define OR_SP_FROM_PTR_BX CMT_ASM(".byte 0X0B, 0X27 # orw (%bx), %sp")
#define OR_SP_FROM_PTR_BP CMT_ASM(".byte 0X0B, 0X66, 0X00 # orw (%bp), %sp")
#define OR_SP_FROM_PTR_SI CMT_ASM(".byte 0X0B, 0X24 # orw (%si), %sp")
#define OR_SP_FROM_PTR_DI CMT_ASM(".byte 0X0B, 0X25 # orw (%di), %sp")

#define OR_AX_TO_PTR_BX CMT_ASM(".byte 0X09, 0X07 # orw %ax, (%bx)")
#define OR_AX_TO_PTR_BP CMT_ASM(".byte 0X09, 0X46, 0X00 # orw %ax, (%bp)")
#define OR_AX_TO_PTR_SI CMT_ASM(".byte 0X09, 0X04 # orw %ax, (%si)")
#define OR_AX_TO_PTR_DI CMT_ASM(".byte 0X09, 0X05 # orw %ax, (%di)")

#define OR_BX_TO_PTR_BX CMT_ASM(".byte 0X09, 0X1F # orw %bx, (%bx)")
#define OR_BX_TO_PTR_BP CMT_ASM(".byte 0X09, 0X5E, 0X00 # orw %bx, (%bp)")
#define OR_BX_TO_PTR_SI CMT_ASM(".byte 0X09, 0X1C # orw %bx, (%si)")
#define OR_BX_TO_PTR_DI CMT_ASM(".byte 0X09, 0X1D # orw %bx, (%di)")

#define OR_CX_TO_PTR_BX CMT_ASM(".byte 0X09, 0X0F # orw %cx, (%bx)")
#define OR_CX_TO_PTR_BP CMT_ASM(".byte 0X09, 0X4E, 0X00 # orw %cx, (%bp)")
#define OR_CX_TO_PTR_SI CMT_ASM(".byte 0X09, 0X0C # orw %cx, (%si)")
#define OR_CX_TO_PTR_DI CMT_ASM(".byte 0X09, 0X0D # orw %cx, (%di)")

#define OR_DX_TO_PTR_BX CMT_ASM(".byte 0X09, 0X17 # orw %dx, (%bx)")
#define OR_DX_TO_PTR_BP CMT_ASM(".byte 0X09, 0X56, 0X00 # orw %dx, (%bp)")
#define OR_DX_TO_PTR_SI CMT_ASM(".byte 0X09, 0X14 # orw %dx, (%si)")
#define OR_DX_TO_PTR_DI CMT_ASM(".byte 0X09, 0X15 # orw %dx, (%di)")

#define OR_DI_TO_PTR_BX CMT_ASM(".byte 0X09, 0X3F # orw %di, (%bx)")
#define OR_DI_TO_PTR_BP CMT_ASM(".byte 0X09, 0X7E, 0X00 # orw %di, (%bp)")
#define OR_DI_TO_PTR_SI CMT_ASM(".byte 0X09, 0X3C # orw %di, (%si)")
#define OR_DI_TO_PTR_DI CMT_ASM(".byte 0X09, 0X3D # orw %di, (%di)")

#define OR_SI_TO_PTR_BX CMT_ASM(".byte 0X09, 0X37 # orw %si, (%bx)")
#define OR_SI_TO_PTR_BP CMT_ASM(".byte 0X09, 0X76, 0X00 # orw %si, (%bp)")
#define OR_SI_TO_PTR_SI CMT_ASM(".byte 0X09, 0X34 # orw %si, (%si)")
#define OR_SI_TO_PTR_DI CMT_ASM(".byte 0X09, 0X35 # orw %si, (%di)")

#define OR_BP_TO_PTR_BX CMT_ASM(".byte 0X09, 0X2F # orw %bp, (%bx)")
#define OR_BP_TO_PTR_BP CMT_ASM(".byte 0X09, 0X6E, 0X00 # orw %bp, (%bp)")
#define OR_BP_TO_PTR_SI CMT_ASM(".byte 0X09, 0X2C # orw %bp, (%si)")
#define OR_BP_TO_PTR_DI CMT_ASM(".byte 0X09, 0X2D # orw %bp, (%di)")

#define OR_SP_TO_PTR_BX CMT_ASM(".byte 0X09, 0X27 # orw %sp, (%bx)")
#define OR_SP_TO_PTR_BP CMT_ASM(".byte 0X09, 0X66, 0X00 # orw %sp, (%bp)")
#define OR_SP_TO_PTR_SI CMT_ASM(".byte 0X09, 0X24 # orw %sp, (%si)")
#define OR_SP_TO_PTR_DI CMT_ASM(".byte 0X09, 0X25 # orw %sp, (%di)")

#define OR_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X87 # orw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X86 # orw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X84 # orw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X85 # orw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define OR_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9F # orw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9E # orw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9C # orw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9D # orw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define OR_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8F # orw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8E # orw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8C # orw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8D # orw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define OR_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X97 # orw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X96 # orw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X94 # orw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X95 # orw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define OR_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBF # orw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBE # orw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBC # orw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBD # orw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define OR_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB7 # orw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB6 # orw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB4 # orw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB5 # orw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define OR_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAF # orw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAE # orw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAC # orw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAD # orw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define OR_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA7 # orw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA6 # orw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA4 # orw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA5 # orw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define OR_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X87 # orw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X86 # orw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X84 # orw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X85 # orw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9F # orw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9E # orw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9C # orw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9D # orw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8F # orw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8E # orw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8C # orw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8D # orw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X97 # orw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X96 # orw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X94 # orw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X95 # orw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBF # orw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBE # orw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBC # orw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBD # orw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB7 # orw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB6 # orw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB4 # orw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB5 # orw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAF # orw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAE # orw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAC # orw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAD # orw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA7 # orw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA6 # orw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA4 # orw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA5 # orw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X05 # orw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X1D # orw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X0D # orw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X15 # orw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X3D # orw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X35 # orw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X2D # orw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X25 # orw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define OR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X05 # orw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X1D # orw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X0D # orw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X15 # orw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X3D # orw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X35 # orw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X2D # orw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X25 # orw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X00 # orw (%eax), %ax")
#define OR_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X03 # orw (%ebx), %ax")
#define OR_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X01 # orw (%ecx), %ax")
#define OR_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X02 # orw (%edx), %ax")
#define OR_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X07 # orw (%edi), %ax")
#define OR_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X06 # orw (%esi), %ax")
#define OR_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X45, 0X00 # orw (%ebp), %ax")
#define OR_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X04, 0X24 # orw (%esp), %ax")
#define OR_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X07 # orw (%bx), %ax")
#define OR_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X46, 0X00 # orw (%bp), %ax")
#define OR_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X04 # orw (%si), %ax")
#define OR_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X05 # orw (%di), %ax")

#define OR_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X18 # orw (%eax), %bx")
#define OR_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X1B # orw (%ebx), %bx")
#define OR_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X19 # orw (%ecx), %bx")
#define OR_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X1A # orw (%edx), %bx")
#define OR_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X1F # orw (%edi), %bx")
#define OR_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X1E # orw (%esi), %bx")
#define OR_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X5D, 0X00 # orw (%ebp), %bx")
#define OR_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X1C, 0X24 # orw (%esp), %bx")
#define OR_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1F # orw (%bx), %bx")
#define OR_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X5E, 0X00 # orw (%bp), %bx")
#define OR_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1C # orw (%si), %bx")
#define OR_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1D # orw (%di), %bx")

#define OR_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X08 # orw (%eax), %cx")
#define OR_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X0B # orw (%ebx), %cx")
#define OR_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X09 # orw (%ecx), %cx")
#define OR_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X0A # orw (%edx), %cx")
#define OR_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X0F # orw (%edi), %cx")
#define OR_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X0E # orw (%esi), %cx")
#define OR_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X4D, 0X00 # orw (%ebp), %cx")
#define OR_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X0C, 0X24 # orw (%esp), %cx")
#define OR_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0F # orw (%bx), %cx")
#define OR_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X4E, 0X00 # orw (%bp), %cx")
#define OR_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0C # orw (%si), %cx")
#define OR_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0D # orw (%di), %cx")

#define OR_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X10 # orw (%eax), %dx")
#define OR_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X13 # orw (%ebx), %dx")
#define OR_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X11 # orw (%ecx), %dx")
#define OR_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X12 # orw (%edx), %dx")
#define OR_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X17 # orw (%edi), %dx")
#define OR_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X16 # orw (%esi), %dx")
#define OR_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X55, 0X00 # orw (%ebp), %dx")
#define OR_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X14, 0X24 # orw (%esp), %dx")
#define OR_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X17 # orw (%bx), %dx")
#define OR_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X56, 0X00 # orw (%bp), %dx")
#define OR_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X14 # orw (%si), %dx")
#define OR_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X15 # orw (%di), %dx")

#define OR_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X38 # orw (%eax), %di")
#define OR_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X3B # orw (%ebx), %di")
#define OR_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X39 # orw (%ecx), %di")
#define OR_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X3A # orw (%edx), %di")
#define OR_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X3F # orw (%edi), %di")
#define OR_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X3E # orw (%esi), %di")
#define OR_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X7D, 0X00 # orw (%ebp), %di")
#define OR_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X3C, 0X24 # orw (%esp), %di")
#define OR_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3F # orw (%bx), %di")
#define OR_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X7E, 0X00 # orw (%bp), %di")
#define OR_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3C # orw (%si), %di")
#define OR_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3D # orw (%di), %di")

#define OR_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X30 # orw (%eax), %si")
#define OR_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X33 # orw (%ebx), %si")
#define OR_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X31 # orw (%ecx), %si")
#define OR_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X32 # orw (%edx), %si")
#define OR_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X37 # orw (%edi), %si")
#define OR_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X36 # orw (%esi), %si")
#define OR_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X75, 0X00 # orw (%ebp), %si")
#define OR_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X34, 0X24 # orw (%esp), %si")
#define OR_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X37 # orw (%bx), %si")
#define OR_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X76, 0X00 # orw (%bp), %si")
#define OR_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X34 # orw (%si), %si")
#define OR_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X35 # orw (%di), %si")

#define OR_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X28 # orw (%eax), %bp")
#define OR_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X2B # orw (%ebx), %bp")
#define OR_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X29 # orw (%ecx), %bp")
#define OR_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X2A # orw (%edx), %bp")
#define OR_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X2F # orw (%edi), %bp")
#define OR_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X2E # orw (%esi), %bp")
#define OR_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X6D, 0X00 # orw (%ebp), %bp")
#define OR_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X2C, 0X24 # orw (%esp), %bp")
#define OR_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2F # orw (%bx), %bp")
#define OR_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X6E, 0X00 # orw (%bp), %bp")
#define OR_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2C # orw (%si), %bp")
#define OR_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2D # orw (%di), %bp")

#define OR_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X0B, 0X20 # orw (%eax), %sp")
#define OR_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X0B, 0X23 # orw (%ebx), %sp")
#define OR_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X0B, 0X21 # orw (%ecx), %sp")
#define OR_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X0B, 0X22 # orw (%edx), %sp")
#define OR_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X0B, 0X27 # orw (%edi), %sp")
#define OR_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X0B, 0X26 # orw (%esi), %sp")
#define OR_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X0B, 0X65, 0X00 # orw (%ebp), %sp")
#define OR_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X0B, 0X24, 0X24 # orw (%esp), %sp")
#define OR_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X27 # orw (%bx), %sp")
#define OR_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X66, 0X00 # orw (%bp), %sp")
#define OR_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X24 # orw (%si), %sp")
#define OR_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X25 # orw (%di), %sp")

#define OR_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X00 # orw %ax, (%eax)")
#define OR_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X03 # orw %ax, (%ebx)")
#define OR_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X01 # orw %ax, (%ecx)")
#define OR_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X02 # orw %ax, (%edx)")
#define OR_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X07 # orw %ax, (%edi)")
#define OR_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X06 # orw %ax, (%esi)")
#define OR_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X45, 0X00 # orw %ax, (%ebp)")
#define OR_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X04, 0X24 # orw %ax, (%esp)")
#define OR_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X07 # orw %ax, (%bx)")
#define OR_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X46, 0X00 # orw %ax, (%bp)")
#define OR_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X04 # orw %ax, (%si)")
#define OR_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X05 # orw %ax, (%di)")

#define OR_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X18 # orw %bx, (%eax)")
#define OR_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X1B # orw %bx, (%ebx)")
#define OR_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X19 # orw %bx, (%ecx)")
#define OR_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X1A # orw %bx, (%edx)")
#define OR_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X1F # orw %bx, (%edi)")
#define OR_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X1E # orw %bx, (%esi)")
#define OR_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X5D, 0X00 # orw %bx, (%ebp)")
#define OR_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X1C, 0X24 # orw %bx, (%esp)")
#define OR_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1F # orw %bx, (%bx)")
#define OR_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X5E, 0X00 # orw %bx, (%bp)")
#define OR_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1C # orw %bx, (%si)")
#define OR_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1D # orw %bx, (%di)")

#define OR_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X08 # orw %cx, (%eax)")
#define OR_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X0B # orw %cx, (%ebx)")
#define OR_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X09 # orw %cx, (%ecx)")
#define OR_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X0A # orw %cx, (%edx)")
#define OR_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X0F # orw %cx, (%edi)")
#define OR_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X0E # orw %cx, (%esi)")
#define OR_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X4D, 0X00 # orw %cx, (%ebp)")
#define OR_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X0C, 0X24 # orw %cx, (%esp)")
#define OR_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0F # orw %cx, (%bx)")
#define OR_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X4E, 0X00 # orw %cx, (%bp)")
#define OR_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0C # orw %cx, (%si)")
#define OR_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0D # orw %cx, (%di)")

#define OR_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X10 # orw %dx, (%eax)")
#define OR_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X13 # orw %dx, (%ebx)")
#define OR_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X11 # orw %dx, (%ecx)")
#define OR_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X12 # orw %dx, (%edx)")
#define OR_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X17 # orw %dx, (%edi)")
#define OR_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X16 # orw %dx, (%esi)")
#define OR_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X55, 0X00 # orw %dx, (%ebp)")
#define OR_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X14, 0X24 # orw %dx, (%esp)")
#define OR_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X17 # orw %dx, (%bx)")
#define OR_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X56, 0X00 # orw %dx, (%bp)")
#define OR_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X14 # orw %dx, (%si)")
#define OR_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X15 # orw %dx, (%di)")

#define OR_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X38 # orw %di, (%eax)")
#define OR_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X3B # orw %di, (%ebx)")
#define OR_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X39 # orw %di, (%ecx)")
#define OR_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X3A # orw %di, (%edx)")
#define OR_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X3F # orw %di, (%edi)")
#define OR_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X3E # orw %di, (%esi)")
#define OR_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X7D, 0X00 # orw %di, (%ebp)")
#define OR_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X3C, 0X24 # orw %di, (%esp)")
#define OR_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3F # orw %di, (%bx)")
#define OR_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X7E, 0X00 # orw %di, (%bp)")
#define OR_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3C # orw %di, (%si)")
#define OR_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3D # orw %di, (%di)")

#define OR_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X30 # orw %si, (%eax)")
#define OR_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X33 # orw %si, (%ebx)")
#define OR_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X31 # orw %si, (%ecx)")
#define OR_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X32 # orw %si, (%edx)")
#define OR_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X37 # orw %si, (%edi)")
#define OR_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X36 # orw %si, (%esi)")
#define OR_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X75, 0X00 # orw %si, (%ebp)")
#define OR_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X34, 0X24 # orw %si, (%esp)")
#define OR_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X37 # orw %si, (%bx)")
#define OR_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X76, 0X00 # orw %si, (%bp)")
#define OR_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X34 # orw %si, (%si)")
#define OR_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X35 # orw %si, (%di)")

#define OR_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X28 # orw %bp, (%eax)")
#define OR_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X2B # orw %bp, (%ebx)")
#define OR_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X29 # orw %bp, (%ecx)")
#define OR_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X2A # orw %bp, (%edx)")
#define OR_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X2F # orw %bp, (%edi)")
#define OR_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X2E # orw %bp, (%esi)")
#define OR_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X6D, 0X00 # orw %bp, (%ebp)")
#define OR_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X2C, 0X24 # orw %bp, (%esp)")
#define OR_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2F # orw %bp, (%bx)")
#define OR_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X6E, 0X00 # orw %bp, (%bp)")
#define OR_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2C # orw %bp, (%si)")
#define OR_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2D # orw %bp, (%di)")

#define OR_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X09, 0X20 # orw %sp, (%eax)")
#define OR_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X09, 0X23 # orw %sp, (%ebx)")
#define OR_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X09, 0X21 # orw %sp, (%ecx)")
#define OR_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X09, 0X22 # orw %sp, (%edx)")
#define OR_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X09, 0X27 # orw %sp, (%edi)")
#define OR_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X09, 0X26 # orw %sp, (%esi)")
#define OR_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X09, 0X65, 0X00 # orw %sp, (%ebp)")
#define OR_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X09, 0X24, 0X24 # orw %sp, (%esp)")
#define OR_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X27 # orw %sp, (%bx)")
#define OR_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X66, 0X00 # orw %sp, (%bp)")
#define OR_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X24 # orw %sp, (%si)")
#define OR_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X25 # orw %sp, (%di)")

#define OR_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X80 # orw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X83 # orw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X81 # orw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X82 # orw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X87 # orw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X86 # orw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X85 # orw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X87 # orw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X86 # orw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X84 # orw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X85 # orw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define OR_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X98 # orw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9B # orw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X99 # orw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9A # orw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9F # orw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9E # orw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9D # orw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9F # orw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9E # orw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9C # orw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9D # orw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define OR_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X88 # orw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8B # orw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X89 # orw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8A # orw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8F # orw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8E # orw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8D # orw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8F # orw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8E # orw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8C # orw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8D # orw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define OR_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X90 # orw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X93 # orw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X91 # orw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X92 # orw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X97 # orw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X96 # orw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X95 # orw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X97 # orw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X96 # orw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X94 # orw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X95 # orw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define OR_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB8 # orw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBB # orw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB9 # orw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBA # orw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBF # orw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBE # orw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBD # orw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBF # orw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBE # orw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBC # orw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBD # orw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define OR_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB0 # orw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB3 # orw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB1 # orw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB2 # orw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB7 # orw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB6 # orw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB5 # orw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB7 # orw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB6 # orw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB4 # orw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB5 # orw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define OR_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA8 # orw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAB # orw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA9 # orw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAA # orw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAF # orw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAE # orw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAD # orw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAF # orw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAE # orw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAC # orw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAD # orw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define OR_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA0 # orw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA3 # orw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA1 # orw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA2 # orw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA7 # orw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA6 # orw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA5 # orw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA7 # orw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA6 # orw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA4 # orw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA5 # orw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define OR_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X80 # orw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X83 # orw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X81 # orw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X82 # orw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X87 # orw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X86 # orw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X85 # orw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X84, 0X24 # orw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X87 # orw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X86 # orw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X84 # orw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X85 # orw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X98 # orw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9B # orw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X99 # orw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9A # orw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9F # orw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9E # orw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9D # orw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9C, 0X24 # orw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9F # orw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9E # orw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9C # orw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9D # orw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X88 # orw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8B # orw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X89 # orw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8A # orw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8F # orw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8E # orw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8D # orw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8C, 0X24 # orw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8F # orw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8E # orw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8C # orw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8D # orw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X90 # orw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X93 # orw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X91 # orw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X92 # orw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X97 # orw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X96 # orw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X95 # orw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X94, 0X24 # orw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X97 # orw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X96 # orw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X94 # orw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X95 # orw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB8 # orw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBB # orw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB9 # orw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBA # orw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBF # orw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBE # orw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBD # orw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBC, 0X24 # orw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBF # orw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBE # orw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBC # orw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBD # orw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB0 # orw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB3 # orw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB1 # orw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB2 # orw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB7 # orw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB6 # orw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB5 # orw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB4, 0X24 # orw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB7 # orw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB6 # orw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB4 # orw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB5 # orw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA8 # orw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAB # orw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA9 # orw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAA # orw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAF # orw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAE # orw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAD # orw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAC, 0X24 # orw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAF # orw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAE # orw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAC # orw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAD # orw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA0 # orw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA3 # orw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA1 # orw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA2 # orw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA7 # orw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA6 # orw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA5 # orw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA4, 0X24 # orw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA7 # orw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA6 # orw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA4 # orw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA5 # orw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X04, 0X25 # orw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X1C, 0X25 # orw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X0C, 0X25 # orw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X14, 0X25 # orw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X3C, 0X25 # orw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X34, 0X25 # orw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X2C, 0X25 # orw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X24, 0X25 # orw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X04, 0X25 # orw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0C, 0X25 # orw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X14, 0X25 # orw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1C, 0X25 # orw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X24, 0X25 # orw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2C, 0X25 # orw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X34, 0X25 # orw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3C, 0X25 # orw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define OR_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X04, 0X25 # orw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X1C, 0X25 # orw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X0C, 0X25 # orw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X14, 0X25 # orw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X3C, 0X25 # orw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X34, 0X25 # orw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X2C, 0X25 # orw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X24, 0X25 # orw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X04, 0X25 # orw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0C, 0X25 # orw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X14, 0X25 # orw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1C, 0X25 # orw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X24, 0X25 # orw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2C, 0X25 # orw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X34, 0X25 # orw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3C, 0X25 # orw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X00 # orw (%rax), %ax")
#define OR_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X03 # orw (%rbx), %ax")
#define OR_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X01 # orw (%rcx), %ax")
#define OR_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X02 # orw (%rdx), %ax")
#define OR_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X07 # orw (%rdi), %ax")
#define OR_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X06 # orw (%rsi), %ax")
#define OR_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X45, 0X00 # orw (%rbp), %ax")
#define OR_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X04, 0X24 # orw (%rsp), %ax")
#define OR_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X00 # orw (%r8), %ax")
#define OR_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X01 # orw (%r9), %ax")
#define OR_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X02 # orw (%r10), %ax")
#define OR_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X03 # orw (%r11), %ax")
#define OR_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X04, 0X24 # orw (%r12), %ax")
#define OR_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X45, 0X00 # orw (%r13), %ax")
#define OR_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X06 # orw (%r14), %ax")
#define OR_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X07 # orw (%r15), %ax")
#define OR_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X00 # orw (%eax), %ax")
#define OR_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X03 # orw (%ebx), %ax")
#define OR_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X01 # orw (%ecx), %ax")
#define OR_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X02 # orw (%edx), %ax")
#define OR_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X07 # orw (%edi), %ax")
#define OR_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X06 # orw (%esi), %ax")
#define OR_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X45, 0X00 # orw (%ebp), %ax")
#define OR_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X04, 0X24 # orw (%esp), %ax")

#define OR_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X18 # orw (%rax), %bx")
#define OR_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X1B # orw (%rbx), %bx")
#define OR_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X19 # orw (%rcx), %bx")
#define OR_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X1A # orw (%rdx), %bx")
#define OR_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X1F # orw (%rdi), %bx")
#define OR_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X1E # orw (%rsi), %bx")
#define OR_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X5D, 0X00 # orw (%rbp), %bx")
#define OR_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X1C, 0X24 # orw (%rsp), %bx")
#define OR_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X18 # orw (%r8), %bx")
#define OR_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X19 # orw (%r9), %bx")
#define OR_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X1A # orw (%r10), %bx")
#define OR_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X1B # orw (%r11), %bx")
#define OR_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X1C, 0X24 # orw (%r12), %bx")
#define OR_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X5D, 0X00 # orw (%r13), %bx")
#define OR_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X1E # orw (%r14), %bx")
#define OR_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X1F # orw (%r15), %bx")
#define OR_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X18 # orw (%eax), %bx")
#define OR_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1B # orw (%ebx), %bx")
#define OR_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X19 # orw (%ecx), %bx")
#define OR_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1A # orw (%edx), %bx")
#define OR_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1F # orw (%edi), %bx")
#define OR_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1E # orw (%esi), %bx")
#define OR_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X5D, 0X00 # orw (%ebp), %bx")
#define OR_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X1C, 0X24 # orw (%esp), %bx")

#define OR_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X08 # orw (%rax), %cx")
#define OR_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X0B # orw (%rbx), %cx")
#define OR_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X09 # orw (%rcx), %cx")
#define OR_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X0A # orw (%rdx), %cx")
#define OR_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X0F # orw (%rdi), %cx")
#define OR_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X0E # orw (%rsi), %cx")
#define OR_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X4D, 0X00 # orw (%rbp), %cx")
#define OR_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X0C, 0X24 # orw (%rsp), %cx")
#define OR_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X08 # orw (%r8), %cx")
#define OR_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X09 # orw (%r9), %cx")
#define OR_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X0A # orw (%r10), %cx")
#define OR_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X0B # orw (%r11), %cx")
#define OR_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X0C, 0X24 # orw (%r12), %cx")
#define OR_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X4D, 0X00 # orw (%r13), %cx")
#define OR_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X0E # orw (%r14), %cx")
#define OR_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X0F # orw (%r15), %cx")
#define OR_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X08 # orw (%eax), %cx")
#define OR_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0B # orw (%ebx), %cx")
#define OR_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X09 # orw (%ecx), %cx")
#define OR_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0A # orw (%edx), %cx")
#define OR_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0F # orw (%edi), %cx")
#define OR_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0E # orw (%esi), %cx")
#define OR_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X4D, 0X00 # orw (%ebp), %cx")
#define OR_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X0C, 0X24 # orw (%esp), %cx")

#define OR_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X10 # orw (%rax), %dx")
#define OR_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X13 # orw (%rbx), %dx")
#define OR_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X11 # orw (%rcx), %dx")
#define OR_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X12 # orw (%rdx), %dx")
#define OR_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X17 # orw (%rdi), %dx")
#define OR_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X16 # orw (%rsi), %dx")
#define OR_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X55, 0X00 # orw (%rbp), %dx")
#define OR_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X14, 0X24 # orw (%rsp), %dx")
#define OR_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X10 # orw (%r8), %dx")
#define OR_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X11 # orw (%r9), %dx")
#define OR_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X12 # orw (%r10), %dx")
#define OR_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X13 # orw (%r11), %dx")
#define OR_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X14, 0X24 # orw (%r12), %dx")
#define OR_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X55, 0X00 # orw (%r13), %dx")
#define OR_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X16 # orw (%r14), %dx")
#define OR_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X17 # orw (%r15), %dx")
#define OR_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X10 # orw (%eax), %dx")
#define OR_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X13 # orw (%ebx), %dx")
#define OR_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X11 # orw (%ecx), %dx")
#define OR_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X12 # orw (%edx), %dx")
#define OR_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X17 # orw (%edi), %dx")
#define OR_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X16 # orw (%esi), %dx")
#define OR_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X55, 0X00 # orw (%ebp), %dx")
#define OR_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X14, 0X24 # orw (%esp), %dx")

#define OR_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X38 # orw (%rax), %di")
#define OR_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X3B # orw (%rbx), %di")
#define OR_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X39 # orw (%rcx), %di")
#define OR_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X3A # orw (%rdx), %di")
#define OR_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X3F # orw (%rdi), %di")
#define OR_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X3E # orw (%rsi), %di")
#define OR_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X7D, 0X00 # orw (%rbp), %di")
#define OR_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X3C, 0X24 # orw (%rsp), %di")
#define OR_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X38 # orw (%r8), %di")
#define OR_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X39 # orw (%r9), %di")
#define OR_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X3A # orw (%r10), %di")
#define OR_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X3B # orw (%r11), %di")
#define OR_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X3C, 0X24 # orw (%r12), %di")
#define OR_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X7D, 0X00 # orw (%r13), %di")
#define OR_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X3E # orw (%r14), %di")
#define OR_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X3F # orw (%r15), %di")
#define OR_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X38 # orw (%eax), %di")
#define OR_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3B # orw (%ebx), %di")
#define OR_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X39 # orw (%ecx), %di")
#define OR_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3A # orw (%edx), %di")
#define OR_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3F # orw (%edi), %di")
#define OR_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3E # orw (%esi), %di")
#define OR_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X7D, 0X00 # orw (%ebp), %di")
#define OR_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X3C, 0X24 # orw (%esp), %di")

#define OR_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X30 # orw (%rax), %si")
#define OR_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X33 # orw (%rbx), %si")
#define OR_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X31 # orw (%rcx), %si")
#define OR_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X32 # orw (%rdx), %si")
#define OR_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X37 # orw (%rdi), %si")
#define OR_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X36 # orw (%rsi), %si")
#define OR_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X75, 0X00 # orw (%rbp), %si")
#define OR_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X34, 0X24 # orw (%rsp), %si")
#define OR_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X30 # orw (%r8), %si")
#define OR_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X31 # orw (%r9), %si")
#define OR_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X32 # orw (%r10), %si")
#define OR_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X33 # orw (%r11), %si")
#define OR_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X34, 0X24 # orw (%r12), %si")
#define OR_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X75, 0X00 # orw (%r13), %si")
#define OR_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X36 # orw (%r14), %si")
#define OR_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X37 # orw (%r15), %si")
#define OR_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X30 # orw (%eax), %si")
#define OR_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X33 # orw (%ebx), %si")
#define OR_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X31 # orw (%ecx), %si")
#define OR_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X32 # orw (%edx), %si")
#define OR_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X37 # orw (%edi), %si")
#define OR_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X36 # orw (%esi), %si")
#define OR_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X75, 0X00 # orw (%ebp), %si")
#define OR_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X34, 0X24 # orw (%esp), %si")

#define OR_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X28 # orw (%rax), %bp")
#define OR_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X2B # orw (%rbx), %bp")
#define OR_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X29 # orw (%rcx), %bp")
#define OR_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X2A # orw (%rdx), %bp")
#define OR_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X2F # orw (%rdi), %bp")
#define OR_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X2E # orw (%rsi), %bp")
#define OR_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X6D, 0X00 # orw (%rbp), %bp")
#define OR_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X2C, 0X24 # orw (%rsp), %bp")
#define OR_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X28 # orw (%r8), %bp")
#define OR_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X29 # orw (%r9), %bp")
#define OR_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X2A # orw (%r10), %bp")
#define OR_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X2B # orw (%r11), %bp")
#define OR_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X2C, 0X24 # orw (%r12), %bp")
#define OR_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X6D, 0X00 # orw (%r13), %bp")
#define OR_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X2E # orw (%r14), %bp")
#define OR_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X2F # orw (%r15), %bp")
#define OR_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X28 # orw (%eax), %bp")
#define OR_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2B # orw (%ebx), %bp")
#define OR_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X29 # orw (%ecx), %bp")
#define OR_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2A # orw (%edx), %bp")
#define OR_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2F # orw (%edi), %bp")
#define OR_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2E # orw (%esi), %bp")
#define OR_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X6D, 0X00 # orw (%ebp), %bp")
#define OR_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X2C, 0X24 # orw (%esp), %bp")

#define OR_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X0B, 0X20 # orw (%rax), %sp")
#define OR_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X0B, 0X23 # orw (%rbx), %sp")
#define OR_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X0B, 0X21 # orw (%rcx), %sp")
#define OR_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X0B, 0X22 # orw (%rdx), %sp")
#define OR_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X0B, 0X27 # orw (%rdi), %sp")
#define OR_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X0B, 0X26 # orw (%rsi), %sp")
#define OR_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X0B, 0X65, 0X00 # orw (%rbp), %sp")
#define OR_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X0B, 0X24, 0X24 # orw (%rsp), %sp")
#define OR_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X20 # orw (%r8), %sp")
#define OR_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X21 # orw (%r9), %sp")
#define OR_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X22 # orw (%r10), %sp")
#define OR_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X23 # orw (%r11), %sp")
#define OR_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X24, 0X24 # orw (%r12), %sp")
#define OR_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X65, 0X00 # orw (%r13), %sp")
#define OR_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X26 # orw (%r14), %sp")
#define OR_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X27 # orw (%r15), %sp")
#define OR_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X20 # orw (%eax), %sp")
#define OR_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X23 # orw (%ebx), %sp")
#define OR_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X21 # orw (%ecx), %sp")
#define OR_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X22 # orw (%edx), %sp")
#define OR_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X27 # orw (%edi), %sp")
#define OR_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X26 # orw (%esi), %sp")
#define OR_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X65, 0X00 # orw (%ebp), %sp")
#define OR_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X24, 0X24 # orw (%esp), %sp")

#define OR_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X00 # orw (%rax), %r8w")
#define OR_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X03 # orw (%rbx), %r8w")
#define OR_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X01 # orw (%rcx), %r8w")
#define OR_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X02 # orw (%rdx), %r8w")
#define OR_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X07 # orw (%rdi), %r8w")
#define OR_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X06 # orw (%rsi), %r8w")
#define OR_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X45, 0X00 # orw (%rbp), %r8w")
#define OR_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X04, 0X24 # orw (%rsp), %r8w")
#define OR_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X00 # orw (%r8), %r8w")
#define OR_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X01 # orw (%r9), %r8w")
#define OR_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X02 # orw (%r10), %r8w")
#define OR_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X03 # orw (%r11), %r8w")
#define OR_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X04, 0X24 # orw (%r12), %r8w")
#define OR_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X45, 0X00 # orw (%r13), %r8w")
#define OR_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X06 # orw (%r14), %r8w")
#define OR_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X07 # orw (%r15), %r8w")
#define OR_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X00 # orw (%eax), %r8w")
#define OR_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X03 # orw (%ebx), %r8w")
#define OR_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X01 # orw (%ecx), %r8w")
#define OR_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X02 # orw (%edx), %r8w")
#define OR_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X07 # orw (%edi), %r8w")
#define OR_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X06 # orw (%esi), %r8w")
#define OR_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X45, 0X00 # orw (%ebp), %r8w")
#define OR_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X04, 0X24 # orw (%esp), %r8w")

#define OR_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X08 # orw (%rax), %r9w")
#define OR_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0B # orw (%rbx), %r9w")
#define OR_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X09 # orw (%rcx), %r9w")
#define OR_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0A # orw (%rdx), %r9w")
#define OR_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0F # orw (%rdi), %r9w")
#define OR_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0E # orw (%rsi), %r9w")
#define OR_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X4D, 0X00 # orw (%rbp), %r9w")
#define OR_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X0C, 0X24 # orw (%rsp), %r9w")
#define OR_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X08 # orw (%r8), %r9w")
#define OR_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X09 # orw (%r9), %r9w")
#define OR_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X0A # orw (%r10), %r9w")
#define OR_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X0B # orw (%r11), %r9w")
#define OR_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X0C, 0X24 # orw (%r12), %r9w")
#define OR_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X4D, 0X00 # orw (%r13), %r9w")
#define OR_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X0E # orw (%r14), %r9w")
#define OR_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X0F # orw (%r15), %r9w")
#define OR_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X08 # orw (%eax), %r9w")
#define OR_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X0B # orw (%ebx), %r9w")
#define OR_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X09 # orw (%ecx), %r9w")
#define OR_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X0A # orw (%edx), %r9w")
#define OR_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X0F # orw (%edi), %r9w")
#define OR_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X0E # orw (%esi), %r9w")
#define OR_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X4D, 0X00 # orw (%ebp), %r9w")
#define OR_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X0C, 0X24 # orw (%esp), %r9w")

#define OR_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X10 # orw (%rax), %r10w")
#define OR_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X13 # orw (%rbx), %r10w")
#define OR_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X11 # orw (%rcx), %r10w")
#define OR_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X12 # orw (%rdx), %r10w")
#define OR_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X17 # orw (%rdi), %r10w")
#define OR_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X16 # orw (%rsi), %r10w")
#define OR_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X55, 0X00 # orw (%rbp), %r10w")
#define OR_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X14, 0X24 # orw (%rsp), %r10w")
#define OR_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X10 # orw (%r8), %r10w")
#define OR_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X11 # orw (%r9), %r10w")
#define OR_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X12 # orw (%r10), %r10w")
#define OR_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X13 # orw (%r11), %r10w")
#define OR_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X14, 0X24 # orw (%r12), %r10w")
#define OR_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X55, 0X00 # orw (%r13), %r10w")
#define OR_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X16 # orw (%r14), %r10w")
#define OR_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X17 # orw (%r15), %r10w")
#define OR_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X10 # orw (%eax), %r10w")
#define OR_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X13 # orw (%ebx), %r10w")
#define OR_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X11 # orw (%ecx), %r10w")
#define OR_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X12 # orw (%edx), %r10w")
#define OR_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X17 # orw (%edi), %r10w")
#define OR_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X16 # orw (%esi), %r10w")
#define OR_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X55, 0X00 # orw (%ebp), %r10w")
#define OR_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X14, 0X24 # orw (%esp), %r10w")

#define OR_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X18 # orw (%rax), %r11w")
#define OR_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1B # orw (%rbx), %r11w")
#define OR_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X19 # orw (%rcx), %r11w")
#define OR_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1A # orw (%rdx), %r11w")
#define OR_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1F # orw (%rdi), %r11w")
#define OR_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1E # orw (%rsi), %r11w")
#define OR_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X5D, 0X00 # orw (%rbp), %r11w")
#define OR_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X1C, 0X24 # orw (%rsp), %r11w")
#define OR_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X18 # orw (%r8), %r11w")
#define OR_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X19 # orw (%r9), %r11w")
#define OR_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X1A # orw (%r10), %r11w")
#define OR_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X1B # orw (%r11), %r11w")
#define OR_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X1C, 0X24 # orw (%r12), %r11w")
#define OR_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X5D, 0X00 # orw (%r13), %r11w")
#define OR_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X1E # orw (%r14), %r11w")
#define OR_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X1F # orw (%r15), %r11w")
#define OR_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X18 # orw (%eax), %r11w")
#define OR_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X1B # orw (%ebx), %r11w")
#define OR_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X19 # orw (%ecx), %r11w")
#define OR_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X1A # orw (%edx), %r11w")
#define OR_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X1F # orw (%edi), %r11w")
#define OR_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X1E # orw (%esi), %r11w")
#define OR_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X5D, 0X00 # orw (%ebp), %r11w")
#define OR_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X1C, 0X24 # orw (%esp), %r11w")

#define OR_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X20 # orw (%rax), %r12w")
#define OR_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X23 # orw (%rbx), %r12w")
#define OR_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X21 # orw (%rcx), %r12w")
#define OR_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X22 # orw (%rdx), %r12w")
#define OR_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X27 # orw (%rdi), %r12w")
#define OR_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X26 # orw (%rsi), %r12w")
#define OR_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X65, 0X00 # orw (%rbp), %r12w")
#define OR_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X24, 0X24 # orw (%rsp), %r12w")
#define OR_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X20 # orw (%r8), %r12w")
#define OR_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X21 # orw (%r9), %r12w")
#define OR_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X22 # orw (%r10), %r12w")
#define OR_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X23 # orw (%r11), %r12w")
#define OR_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X24, 0X24 # orw (%r12), %r12w")
#define OR_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X65, 0X00 # orw (%r13), %r12w")
#define OR_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X26 # orw (%r14), %r12w")
#define OR_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X27 # orw (%r15), %r12w")
#define OR_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X20 # orw (%eax), %r12w")
#define OR_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X23 # orw (%ebx), %r12w")
#define OR_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X21 # orw (%ecx), %r12w")
#define OR_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X22 # orw (%edx), %r12w")
#define OR_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X27 # orw (%edi), %r12w")
#define OR_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X26 # orw (%esi), %r12w")
#define OR_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X65, 0X00 # orw (%ebp), %r12w")
#define OR_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X24, 0X24 # orw (%esp), %r12w")

#define OR_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X28 # orw (%rax), %r13w")
#define OR_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2B # orw (%rbx), %r13w")
#define OR_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X29 # orw (%rcx), %r13w")
#define OR_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2A # orw (%rdx), %r13w")
#define OR_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2F # orw (%rdi), %r13w")
#define OR_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2E # orw (%rsi), %r13w")
#define OR_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X6D, 0X00 # orw (%rbp), %r13w")
#define OR_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X2C, 0X24 # orw (%rsp), %r13w")
#define OR_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X28 # orw (%r8), %r13w")
#define OR_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X29 # orw (%r9), %r13w")
#define OR_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X2A # orw (%r10), %r13w")
#define OR_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X2B # orw (%r11), %r13w")
#define OR_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X2C, 0X24 # orw (%r12), %r13w")
#define OR_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X6D, 0X00 # orw (%r13), %r13w")
#define OR_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X2E # orw (%r14), %r13w")
#define OR_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X2F # orw (%r15), %r13w")
#define OR_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X28 # orw (%eax), %r13w")
#define OR_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X2B # orw (%ebx), %r13w")
#define OR_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X29 # orw (%ecx), %r13w")
#define OR_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X2A # orw (%edx), %r13w")
#define OR_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X2F # orw (%edi), %r13w")
#define OR_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X2E # orw (%esi), %r13w")
#define OR_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X6D, 0X00 # orw (%ebp), %r13w")
#define OR_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X2C, 0X24 # orw (%esp), %r13w")

#define OR_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X30 # orw (%rax), %r14w")
#define OR_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X33 # orw (%rbx), %r14w")
#define OR_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X31 # orw (%rcx), %r14w")
#define OR_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X32 # orw (%rdx), %r14w")
#define OR_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X37 # orw (%rdi), %r14w")
#define OR_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X36 # orw (%rsi), %r14w")
#define OR_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X75, 0X00 # orw (%rbp), %r14w")
#define OR_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X34, 0X24 # orw (%rsp), %r14w")
#define OR_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X30 # orw (%r8), %r14w")
#define OR_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X31 # orw (%r9), %r14w")
#define OR_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X32 # orw (%r10), %r14w")
#define OR_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X33 # orw (%r11), %r14w")
#define OR_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X34, 0X24 # orw (%r12), %r14w")
#define OR_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X75, 0X00 # orw (%r13), %r14w")
#define OR_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X36 # orw (%r14), %r14w")
#define OR_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X37 # orw (%r15), %r14w")
#define OR_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X30 # orw (%eax), %r14w")
#define OR_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X33 # orw (%ebx), %r14w")
#define OR_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X31 # orw (%ecx), %r14w")
#define OR_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X32 # orw (%edx), %r14w")
#define OR_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X37 # orw (%edi), %r14w")
#define OR_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X36 # orw (%esi), %r14w")
#define OR_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X75, 0X00 # orw (%ebp), %r14w")
#define OR_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X34, 0X24 # orw (%esp), %r14w")

#define OR_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X38 # orw (%rax), %r15w")
#define OR_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3B # orw (%rbx), %r15w")
#define OR_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X39 # orw (%rcx), %r15w")
#define OR_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3A # orw (%rdx), %r15w")
#define OR_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3F # orw (%rdi), %r15w")
#define OR_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3E # orw (%rsi), %r15w")
#define OR_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X7D, 0X00 # orw (%rbp), %r15w")
#define OR_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X3C, 0X24 # orw (%rsp), %r15w")
#define OR_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X38 # orw (%r8), %r15w")
#define OR_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X39 # orw (%r9), %r15w")
#define OR_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X3A # orw (%r10), %r15w")
#define OR_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X3B # orw (%r11), %r15w")
#define OR_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X3C, 0X24 # orw (%r12), %r15w")
#define OR_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X7D, 0X00 # orw (%r13), %r15w")
#define OR_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X3E # orw (%r14), %r15w")
#define OR_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X3F # orw (%r15), %r15w")
#define OR_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X38 # orw (%eax), %r15w")
#define OR_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X3B # orw (%ebx), %r15w")
#define OR_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X39 # orw (%ecx), %r15w")
#define OR_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X3A # orw (%edx), %r15w")
#define OR_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X3F # orw (%edi), %r15w")
#define OR_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X3E # orw (%esi), %r15w")
#define OR_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X7D, 0X00 # orw (%ebp), %r15w")
#define OR_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X3C, 0X24 # orw (%esp), %r15w")

#define OR_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X00 # orw %ax, (%rax)")
#define OR_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X03 # orw %ax, (%rbx)")
#define OR_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X01 # orw %ax, (%rcx)")
#define OR_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X02 # orw %ax, (%rdx)")
#define OR_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X07 # orw %ax, (%rdi)")
#define OR_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X06 # orw %ax, (%rsi)")
#define OR_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X45, 0X00 # orw %ax, (%rbp)")
#define OR_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X04, 0X24 # orw %ax, (%rsp)")
#define OR_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X00 # orw %ax, (%r8)")
#define OR_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X01 # orw %ax, (%r9)")
#define OR_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X02 # orw %ax, (%r10)")
#define OR_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X03 # orw %ax, (%r11)")
#define OR_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X04, 0X24 # orw %ax, (%r12)")
#define OR_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X45, 0X00 # orw %ax, (%r13)")
#define OR_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X06 # orw %ax, (%r14)")
#define OR_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X07 # orw %ax, (%r15)")
#define OR_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X00 # orw %ax, (%eax)")
#define OR_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X03 # orw %ax, (%ebx)")
#define OR_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X01 # orw %ax, (%ecx)")
#define OR_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X02 # orw %ax, (%edx)")
#define OR_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X07 # orw %ax, (%edi)")
#define OR_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X06 # orw %ax, (%esi)")
#define OR_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X45, 0X00 # orw %ax, (%ebp)")
#define OR_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X04, 0X24 # orw %ax, (%esp)")

#define OR_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X18 # orw %bx, (%rax)")
#define OR_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X1B # orw %bx, (%rbx)")
#define OR_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X19 # orw %bx, (%rcx)")
#define OR_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X1A # orw %bx, (%rdx)")
#define OR_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X1F # orw %bx, (%rdi)")
#define OR_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X1E # orw %bx, (%rsi)")
#define OR_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X5D, 0X00 # orw %bx, (%rbp)")
#define OR_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X1C, 0X24 # orw %bx, (%rsp)")
#define OR_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X18 # orw %bx, (%r8)")
#define OR_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X19 # orw %bx, (%r9)")
#define OR_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X1A # orw %bx, (%r10)")
#define OR_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X1B # orw %bx, (%r11)")
#define OR_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X1C, 0X24 # orw %bx, (%r12)")
#define OR_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X5D, 0X00 # orw %bx, (%r13)")
#define OR_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X1E # orw %bx, (%r14)")
#define OR_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X1F # orw %bx, (%r15)")
#define OR_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X18 # orw %bx, (%eax)")
#define OR_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1B # orw %bx, (%ebx)")
#define OR_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X19 # orw %bx, (%ecx)")
#define OR_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1A # orw %bx, (%edx)")
#define OR_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1F # orw %bx, (%edi)")
#define OR_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1E # orw %bx, (%esi)")
#define OR_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X5D, 0X00 # orw %bx, (%ebp)")
#define OR_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X1C, 0X24 # orw %bx, (%esp)")

#define OR_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X08 # orw %cx, (%rax)")
#define OR_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X0B # orw %cx, (%rbx)")
#define OR_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X09 # orw %cx, (%rcx)")
#define OR_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X0A # orw %cx, (%rdx)")
#define OR_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X0F # orw %cx, (%rdi)")
#define OR_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X0E # orw %cx, (%rsi)")
#define OR_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X4D, 0X00 # orw %cx, (%rbp)")
#define OR_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X0C, 0X24 # orw %cx, (%rsp)")
#define OR_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X08 # orw %cx, (%r8)")
#define OR_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X09 # orw %cx, (%r9)")
#define OR_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X0A # orw %cx, (%r10)")
#define OR_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X0B # orw %cx, (%r11)")
#define OR_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X0C, 0X24 # orw %cx, (%r12)")
#define OR_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X4D, 0X00 # orw %cx, (%r13)")
#define OR_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X0E # orw %cx, (%r14)")
#define OR_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X0F # orw %cx, (%r15)")
#define OR_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X08 # orw %cx, (%eax)")
#define OR_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0B # orw %cx, (%ebx)")
#define OR_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X09 # orw %cx, (%ecx)")
#define OR_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0A # orw %cx, (%edx)")
#define OR_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0F # orw %cx, (%edi)")
#define OR_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0E # orw %cx, (%esi)")
#define OR_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X4D, 0X00 # orw %cx, (%ebp)")
#define OR_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X0C, 0X24 # orw %cx, (%esp)")

#define OR_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X10 # orw %dx, (%rax)")
#define OR_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X13 # orw %dx, (%rbx)")
#define OR_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X11 # orw %dx, (%rcx)")
#define OR_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X12 # orw %dx, (%rdx)")
#define OR_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X17 # orw %dx, (%rdi)")
#define OR_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X16 # orw %dx, (%rsi)")
#define OR_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X55, 0X00 # orw %dx, (%rbp)")
#define OR_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X14, 0X24 # orw %dx, (%rsp)")
#define OR_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X10 # orw %dx, (%r8)")
#define OR_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X11 # orw %dx, (%r9)")
#define OR_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X12 # orw %dx, (%r10)")
#define OR_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X13 # orw %dx, (%r11)")
#define OR_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X14, 0X24 # orw %dx, (%r12)")
#define OR_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X55, 0X00 # orw %dx, (%r13)")
#define OR_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X16 # orw %dx, (%r14)")
#define OR_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X17 # orw %dx, (%r15)")
#define OR_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X10 # orw %dx, (%eax)")
#define OR_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X13 # orw %dx, (%ebx)")
#define OR_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X11 # orw %dx, (%ecx)")
#define OR_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X12 # orw %dx, (%edx)")
#define OR_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X17 # orw %dx, (%edi)")
#define OR_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X16 # orw %dx, (%esi)")
#define OR_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X55, 0X00 # orw %dx, (%ebp)")
#define OR_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X14, 0X24 # orw %dx, (%esp)")

#define OR_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X38 # orw %di, (%rax)")
#define OR_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X3B # orw %di, (%rbx)")
#define OR_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X39 # orw %di, (%rcx)")
#define OR_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X3A # orw %di, (%rdx)")
#define OR_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X3F # orw %di, (%rdi)")
#define OR_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X3E # orw %di, (%rsi)")
#define OR_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X7D, 0X00 # orw %di, (%rbp)")
#define OR_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X3C, 0X24 # orw %di, (%rsp)")
#define OR_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X38 # orw %di, (%r8)")
#define OR_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X39 # orw %di, (%r9)")
#define OR_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X3A # orw %di, (%r10)")
#define OR_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X3B # orw %di, (%r11)")
#define OR_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X3C, 0X24 # orw %di, (%r12)")
#define OR_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X7D, 0X00 # orw %di, (%r13)")
#define OR_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X3E # orw %di, (%r14)")
#define OR_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X3F # orw %di, (%r15)")
#define OR_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X38 # orw %di, (%eax)")
#define OR_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3B # orw %di, (%ebx)")
#define OR_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X39 # orw %di, (%ecx)")
#define OR_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3A # orw %di, (%edx)")
#define OR_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3F # orw %di, (%edi)")
#define OR_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3E # orw %di, (%esi)")
#define OR_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X7D, 0X00 # orw %di, (%ebp)")
#define OR_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X3C, 0X24 # orw %di, (%esp)")

#define OR_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X30 # orw %si, (%rax)")
#define OR_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X33 # orw %si, (%rbx)")
#define OR_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X31 # orw %si, (%rcx)")
#define OR_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X32 # orw %si, (%rdx)")
#define OR_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X37 # orw %si, (%rdi)")
#define OR_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X36 # orw %si, (%rsi)")
#define OR_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X75, 0X00 # orw %si, (%rbp)")
#define OR_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X34, 0X24 # orw %si, (%rsp)")
#define OR_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X30 # orw %si, (%r8)")
#define OR_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X31 # orw %si, (%r9)")
#define OR_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X32 # orw %si, (%r10)")
#define OR_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X33 # orw %si, (%r11)")
#define OR_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X34, 0X24 # orw %si, (%r12)")
#define OR_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X75, 0X00 # orw %si, (%r13)")
#define OR_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X36 # orw %si, (%r14)")
#define OR_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X37 # orw %si, (%r15)")
#define OR_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X30 # orw %si, (%eax)")
#define OR_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X33 # orw %si, (%ebx)")
#define OR_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X31 # orw %si, (%ecx)")
#define OR_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X32 # orw %si, (%edx)")
#define OR_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X37 # orw %si, (%edi)")
#define OR_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X36 # orw %si, (%esi)")
#define OR_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X75, 0X00 # orw %si, (%ebp)")
#define OR_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X34, 0X24 # orw %si, (%esp)")

#define OR_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X28 # orw %bp, (%rax)")
#define OR_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X2B # orw %bp, (%rbx)")
#define OR_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X29 # orw %bp, (%rcx)")
#define OR_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X2A # orw %bp, (%rdx)")
#define OR_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X2F # orw %bp, (%rdi)")
#define OR_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X2E # orw %bp, (%rsi)")
#define OR_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X6D, 0X00 # orw %bp, (%rbp)")
#define OR_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X2C, 0X24 # orw %bp, (%rsp)")
#define OR_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X28 # orw %bp, (%r8)")
#define OR_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X29 # orw %bp, (%r9)")
#define OR_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X2A # orw %bp, (%r10)")
#define OR_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X2B # orw %bp, (%r11)")
#define OR_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X2C, 0X24 # orw %bp, (%r12)")
#define OR_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X6D, 0X00 # orw %bp, (%r13)")
#define OR_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X2E # orw %bp, (%r14)")
#define OR_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X2F # orw %bp, (%r15)")
#define OR_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X28 # orw %bp, (%eax)")
#define OR_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2B # orw %bp, (%ebx)")
#define OR_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X29 # orw %bp, (%ecx)")
#define OR_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2A # orw %bp, (%edx)")
#define OR_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2F # orw %bp, (%edi)")
#define OR_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2E # orw %bp, (%esi)")
#define OR_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X6D, 0X00 # orw %bp, (%ebp)")
#define OR_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X2C, 0X24 # orw %bp, (%esp)")

#define OR_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X09, 0X20 # orw %sp, (%rax)")
#define OR_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X09, 0X23 # orw %sp, (%rbx)")
#define OR_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X09, 0X21 # orw %sp, (%rcx)")
#define OR_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X09, 0X22 # orw %sp, (%rdx)")
#define OR_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X09, 0X27 # orw %sp, (%rdi)")
#define OR_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X09, 0X26 # orw %sp, (%rsi)")
#define OR_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X09, 0X65, 0X00 # orw %sp, (%rbp)")
#define OR_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X09, 0X24, 0X24 # orw %sp, (%rsp)")
#define OR_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X20 # orw %sp, (%r8)")
#define OR_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X21 # orw %sp, (%r9)")
#define OR_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X22 # orw %sp, (%r10)")
#define OR_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X23 # orw %sp, (%r11)")
#define OR_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X24, 0X24 # orw %sp, (%r12)")
#define OR_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X65, 0X00 # orw %sp, (%r13)")
#define OR_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X26 # orw %sp, (%r14)")
#define OR_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X09, 0X27 # orw %sp, (%r15)")
#define OR_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X20 # orw %sp, (%eax)")
#define OR_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X23 # orw %sp, (%ebx)")
#define OR_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X21 # orw %sp, (%ecx)")
#define OR_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X09, 0X22 # orw %sp, (%edx)")
#define OR_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X27 # orw %sp, (%edi)")
#define OR_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X09, 0X26 # orw %sp, (%esi)")
#define OR_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X65, 0X00 # orw %sp, (%ebp)")
#define OR_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X09, 0X24, 0X24 # orw %sp, (%esp)")

#define OR_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X00 # orw %r8w, (%rax)")
#define OR_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X03 # orw %r8w, (%rbx)")
#define OR_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X01 # orw %r8w, (%rcx)")
#define OR_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X02 # orw %r8w, (%rdx)")
#define OR_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X07 # orw %r8w, (%rdi)")
#define OR_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X06 # orw %r8w, (%rsi)")
#define OR_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X45, 0X00 # orw %r8w, (%rbp)")
#define OR_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X04, 0X24 # orw %r8w, (%rsp)")
#define OR_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X00 # orw %r8w, (%r8)")
#define OR_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X01 # orw %r8w, (%r9)")
#define OR_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X02 # orw %r8w, (%r10)")
#define OR_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X03 # orw %r8w, (%r11)")
#define OR_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X04, 0X24 # orw %r8w, (%r12)")
#define OR_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X45, 0X00 # orw %r8w, (%r13)")
#define OR_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X06 # orw %r8w, (%r14)")
#define OR_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X07 # orw %r8w, (%r15)")
#define OR_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X00 # orw %r8w, (%eax)")
#define OR_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X03 # orw %r8w, (%ebx)")
#define OR_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X01 # orw %r8w, (%ecx)")
#define OR_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X02 # orw %r8w, (%edx)")
#define OR_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X07 # orw %r8w, (%edi)")
#define OR_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X06 # orw %r8w, (%esi)")
#define OR_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X45, 0X00 # orw %r8w, (%ebp)")
#define OR_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X04, 0X24 # orw %r8w, (%esp)")

#define OR_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X08 # orw %r9w, (%rax)")
#define OR_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0B # orw %r9w, (%rbx)")
#define OR_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X09 # orw %r9w, (%rcx)")
#define OR_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0A # orw %r9w, (%rdx)")
#define OR_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0F # orw %r9w, (%rdi)")
#define OR_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0E # orw %r9w, (%rsi)")
#define OR_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X4D, 0X00 # orw %r9w, (%rbp)")
#define OR_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X0C, 0X24 # orw %r9w, (%rsp)")
#define OR_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X08 # orw %r9w, (%r8)")
#define OR_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X09 # orw %r9w, (%r9)")
#define OR_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X0A # orw %r9w, (%r10)")
#define OR_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X0B # orw %r9w, (%r11)")
#define OR_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X0C, 0X24 # orw %r9w, (%r12)")
#define OR_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X4D, 0X00 # orw %r9w, (%r13)")
#define OR_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X0E # orw %r9w, (%r14)")
#define OR_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X0F # orw %r9w, (%r15)")
#define OR_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X08 # orw %r9w, (%eax)")
#define OR_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X0B # orw %r9w, (%ebx)")
#define OR_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X09 # orw %r9w, (%ecx)")
#define OR_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X0A # orw %r9w, (%edx)")
#define OR_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X0F # orw %r9w, (%edi)")
#define OR_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X0E # orw %r9w, (%esi)")
#define OR_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X4D, 0X00 # orw %r9w, (%ebp)")
#define OR_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X0C, 0X24 # orw %r9w, (%esp)")

#define OR_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X10 # orw %r10w, (%rax)")
#define OR_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X13 # orw %r10w, (%rbx)")
#define OR_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X11 # orw %r10w, (%rcx)")
#define OR_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X12 # orw %r10w, (%rdx)")
#define OR_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X17 # orw %r10w, (%rdi)")
#define OR_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X16 # orw %r10w, (%rsi)")
#define OR_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X55, 0X00 # orw %r10w, (%rbp)")
#define OR_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X14, 0X24 # orw %r10w, (%rsp)")
#define OR_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X10 # orw %r10w, (%r8)")
#define OR_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X11 # orw %r10w, (%r9)")
#define OR_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X12 # orw %r10w, (%r10)")
#define OR_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X13 # orw %r10w, (%r11)")
#define OR_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X14, 0X24 # orw %r10w, (%r12)")
#define OR_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X55, 0X00 # orw %r10w, (%r13)")
#define OR_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X16 # orw %r10w, (%r14)")
#define OR_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X17 # orw %r10w, (%r15)")
#define OR_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X10 # orw %r10w, (%eax)")
#define OR_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X13 # orw %r10w, (%ebx)")
#define OR_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X11 # orw %r10w, (%ecx)")
#define OR_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X12 # orw %r10w, (%edx)")
#define OR_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X17 # orw %r10w, (%edi)")
#define OR_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X16 # orw %r10w, (%esi)")
#define OR_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X55, 0X00 # orw %r10w, (%ebp)")
#define OR_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X14, 0X24 # orw %r10w, (%esp)")

#define OR_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X18 # orw %r11w, (%rax)")
#define OR_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1B # orw %r11w, (%rbx)")
#define OR_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X19 # orw %r11w, (%rcx)")
#define OR_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1A # orw %r11w, (%rdx)")
#define OR_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1F # orw %r11w, (%rdi)")
#define OR_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1E # orw %r11w, (%rsi)")
#define OR_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X5D, 0X00 # orw %r11w, (%rbp)")
#define OR_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X1C, 0X24 # orw %r11w, (%rsp)")
#define OR_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X18 # orw %r11w, (%r8)")
#define OR_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X19 # orw %r11w, (%r9)")
#define OR_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X1A # orw %r11w, (%r10)")
#define OR_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X1B # orw %r11w, (%r11)")
#define OR_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X1C, 0X24 # orw %r11w, (%r12)")
#define OR_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X5D, 0X00 # orw %r11w, (%r13)")
#define OR_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X1E # orw %r11w, (%r14)")
#define OR_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X1F # orw %r11w, (%r15)")
#define OR_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X18 # orw %r11w, (%eax)")
#define OR_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X1B # orw %r11w, (%ebx)")
#define OR_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X19 # orw %r11w, (%ecx)")
#define OR_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X1A # orw %r11w, (%edx)")
#define OR_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X1F # orw %r11w, (%edi)")
#define OR_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X1E # orw %r11w, (%esi)")
#define OR_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X5D, 0X00 # orw %r11w, (%ebp)")
#define OR_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X1C, 0X24 # orw %r11w, (%esp)")

#define OR_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X20 # orw %r12w, (%rax)")
#define OR_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X23 # orw %r12w, (%rbx)")
#define OR_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X21 # orw %r12w, (%rcx)")
#define OR_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X22 # orw %r12w, (%rdx)")
#define OR_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X27 # orw %r12w, (%rdi)")
#define OR_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X26 # orw %r12w, (%rsi)")
#define OR_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X65, 0X00 # orw %r12w, (%rbp)")
#define OR_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X24, 0X24 # orw %r12w, (%rsp)")
#define OR_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X20 # orw %r12w, (%r8)")
#define OR_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X21 # orw %r12w, (%r9)")
#define OR_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X22 # orw %r12w, (%r10)")
#define OR_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X23 # orw %r12w, (%r11)")
#define OR_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X24, 0X24 # orw %r12w, (%r12)")
#define OR_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X65, 0X00 # orw %r12w, (%r13)")
#define OR_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X26 # orw %r12w, (%r14)")
#define OR_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X27 # orw %r12w, (%r15)")
#define OR_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X20 # orw %r12w, (%eax)")
#define OR_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X23 # orw %r12w, (%ebx)")
#define OR_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X21 # orw %r12w, (%ecx)")
#define OR_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X22 # orw %r12w, (%edx)")
#define OR_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X27 # orw %r12w, (%edi)")
#define OR_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X26 # orw %r12w, (%esi)")
#define OR_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X65, 0X00 # orw %r12w, (%ebp)")
#define OR_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X24, 0X24 # orw %r12w, (%esp)")

#define OR_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X28 # orw %r13w, (%rax)")
#define OR_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2B # orw %r13w, (%rbx)")
#define OR_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X29 # orw %r13w, (%rcx)")
#define OR_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2A # orw %r13w, (%rdx)")
#define OR_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2F # orw %r13w, (%rdi)")
#define OR_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2E # orw %r13w, (%rsi)")
#define OR_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X6D, 0X00 # orw %r13w, (%rbp)")
#define OR_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X2C, 0X24 # orw %r13w, (%rsp)")
#define OR_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X28 # orw %r13w, (%r8)")
#define OR_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X29 # orw %r13w, (%r9)")
#define OR_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X2A # orw %r13w, (%r10)")
#define OR_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X2B # orw %r13w, (%r11)")
#define OR_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X2C, 0X24 # orw %r13w, (%r12)")
#define OR_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X6D, 0X00 # orw %r13w, (%r13)")
#define OR_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X2E # orw %r13w, (%r14)")
#define OR_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X2F # orw %r13w, (%r15)")
#define OR_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X28 # orw %r13w, (%eax)")
#define OR_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X2B # orw %r13w, (%ebx)")
#define OR_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X29 # orw %r13w, (%ecx)")
#define OR_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X2A # orw %r13w, (%edx)")
#define OR_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X2F # orw %r13w, (%edi)")
#define OR_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X2E # orw %r13w, (%esi)")
#define OR_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X6D, 0X00 # orw %r13w, (%ebp)")
#define OR_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X2C, 0X24 # orw %r13w, (%esp)")

#define OR_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X30 # orw %r14w, (%rax)")
#define OR_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X33 # orw %r14w, (%rbx)")
#define OR_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X31 # orw %r14w, (%rcx)")
#define OR_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X32 # orw %r14w, (%rdx)")
#define OR_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X37 # orw %r14w, (%rdi)")
#define OR_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X36 # orw %r14w, (%rsi)")
#define OR_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X75, 0X00 # orw %r14w, (%rbp)")
#define OR_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X34, 0X24 # orw %r14w, (%rsp)")
#define OR_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X30 # orw %r14w, (%r8)")
#define OR_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X31 # orw %r14w, (%r9)")
#define OR_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X32 # orw %r14w, (%r10)")
#define OR_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X33 # orw %r14w, (%r11)")
#define OR_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X34, 0X24 # orw %r14w, (%r12)")
#define OR_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X75, 0X00 # orw %r14w, (%r13)")
#define OR_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X36 # orw %r14w, (%r14)")
#define OR_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X37 # orw %r14w, (%r15)")
#define OR_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X30 # orw %r14w, (%eax)")
#define OR_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X33 # orw %r14w, (%ebx)")
#define OR_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X31 # orw %r14w, (%ecx)")
#define OR_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X32 # orw %r14w, (%edx)")
#define OR_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X37 # orw %r14w, (%edi)")
#define OR_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X36 # orw %r14w, (%esi)")
#define OR_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X75, 0X00 # orw %r14w, (%ebp)")
#define OR_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X34, 0X24 # orw %r14w, (%esp)")

#define OR_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X38 # orw %r15w, (%rax)")
#define OR_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3B # orw %r15w, (%rbx)")
#define OR_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X39 # orw %r15w, (%rcx)")
#define OR_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3A # orw %r15w, (%rdx)")
#define OR_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3F # orw %r15w, (%rdi)")
#define OR_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3E # orw %r15w, (%rsi)")
#define OR_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X7D, 0X00 # orw %r15w, (%rbp)")
#define OR_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X09, 0X3C, 0X24 # orw %r15w, (%rsp)")
#define OR_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X38 # orw %r15w, (%r8)")
#define OR_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X39 # orw %r15w, (%r9)")
#define OR_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X3A # orw %r15w, (%r10)")
#define OR_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X3B # orw %r15w, (%r11)")
#define OR_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X3C, 0X24 # orw %r15w, (%r12)")
#define OR_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X7D, 0X00 # orw %r15w, (%r13)")
#define OR_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X3E # orw %r15w, (%r14)")
#define OR_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X09, 0X3F # orw %r15w, (%r15)")
#define OR_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X38 # orw %r15w, (%eax)")
#define OR_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X3B # orw %r15w, (%ebx)")
#define OR_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X39 # orw %r15w, (%ecx)")
#define OR_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X3A # orw %r15w, (%edx)")
#define OR_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X3F # orw %r15w, (%edi)")
#define OR_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X3E # orw %r15w, (%esi)")
#define OR_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X7D, 0X00 # orw %r15w, (%ebp)")
#define OR_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X3C, 0X24 # orw %r15w, (%esp)")

#define OR_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X80 # orw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X83 # orw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X81 # orw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X82 # orw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X87 # orw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X86 # orw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X85 # orw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X80 # orw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X81 # orw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X82 # orw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X83 # orw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X85 # orw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X86 # orw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X87 # orw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X80 # orw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X83 # orw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X81 # orw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X82 # orw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X87 # orw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X86 # orw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X85 # orw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define OR_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X98 # orw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9B # orw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X99 # orw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9A # orw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9F # orw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9E # orw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9D # orw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X98 # orw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X99 # orw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9A # orw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9B # orw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9D # orw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9E # orw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X9F # orw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X98 # orw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9B # orw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X99 # orw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9A # orw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9F # orw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9E # orw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9D # orw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define OR_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X88 # orw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8B # orw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X89 # orw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8A # orw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8F # orw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8E # orw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8D # orw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X88 # orw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X89 # orw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8A # orw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8B # orw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8D # orw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8E # orw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X8F # orw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X88 # orw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8B # orw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X89 # orw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8A # orw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8F # orw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8E # orw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8D # orw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define OR_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X90 # orw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X93 # orw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X91 # orw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X92 # orw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X97 # orw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X96 # orw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X95 # orw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X90 # orw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X91 # orw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X92 # orw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X93 # orw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X95 # orw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X96 # orw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0X97 # orw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X90 # orw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X93 # orw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X91 # orw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X92 # orw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X97 # orw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X96 # orw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X95 # orw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define OR_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB8 # orw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBB # orw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB9 # orw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBA # orw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBF # orw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBE # orw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBD # orw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB8 # orw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB9 # orw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBA # orw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBB # orw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBD # orw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBE # orw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XBF # orw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB8 # orw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBB # orw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB9 # orw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBA # orw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBF # orw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBE # orw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBD # orw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define OR_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB0 # orw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB3 # orw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB1 # orw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB2 # orw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB7 # orw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB6 # orw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB5 # orw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB0 # orw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB1 # orw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB2 # orw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB3 # orw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB5 # orw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB6 # orw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XB7 # orw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB0 # orw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB3 # orw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB1 # orw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB2 # orw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB7 # orw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB6 # orw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB5 # orw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define OR_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA8 # orw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAB # orw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA9 # orw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAA # orw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAF # orw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAE # orw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAD # orw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA8 # orw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA9 # orw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAA # orw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAB # orw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAD # orw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAE # orw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XAF # orw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA8 # orw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAB # orw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA9 # orw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAA # orw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAF # orw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAE # orw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAD # orw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define OR_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA0 # orw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA3 # orw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA1 # orw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA2 # orw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA7 # orw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA6 # orw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA5 # orw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA0 # orw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA1 # orw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA2 # orw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA3 # orw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA5 # orw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA6 # orw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X0B, 0XA7 # orw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA0 # orw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA3 # orw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA1 # orw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA2 # orw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA7 # orw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA6 # orw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA5 # orw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X80 # orw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X83 # orw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X81 # orw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X82 # orw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X87 # orw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X86 # orw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X85 # orw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X80 # orw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X81 # orw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X82 # orw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X83 # orw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X85 # orw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X86 # orw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X87 # orw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X80 # orw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X83 # orw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X81 # orw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X82 # orw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X87 # orw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X86 # orw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X85 # orw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X84, 0X24 # orw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X88 # orw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8B # orw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X89 # orw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8A # orw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8F # orw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8E # orw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8D # orw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X88 # orw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X89 # orw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8A # orw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8B # orw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8D # orw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8E # orw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X8F # orw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X88 # orw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8B # orw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X89 # orw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8A # orw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8F # orw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8E # orw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8D # orw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X8C, 0X24 # orw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X90 # orw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X93 # orw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X91 # orw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X92 # orw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X97 # orw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X96 # orw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X95 # orw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X90 # orw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X91 # orw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X92 # orw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X93 # orw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X95 # orw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X96 # orw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X97 # orw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X90 # orw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X93 # orw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X91 # orw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X92 # orw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X97 # orw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X96 # orw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X95 # orw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X94, 0X24 # orw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X98 # orw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9B # orw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X99 # orw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9A # orw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9F # orw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9E # orw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9D # orw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X98 # orw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X99 # orw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9A # orw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9B # orw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9D # orw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9E # orw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0X9F # orw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X98 # orw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9B # orw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X99 # orw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9A # orw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9F # orw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9E # orw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9D # orw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0X9C, 0X24 # orw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA0 # orw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA3 # orw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA1 # orw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA2 # orw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA7 # orw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA6 # orw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA5 # orw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA0 # orw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA1 # orw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA2 # orw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA3 # orw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA5 # orw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA6 # orw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA7 # orw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA0 # orw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA3 # orw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA1 # orw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA2 # orw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA7 # orw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA6 # orw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA5 # orw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA4, 0X24 # orw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA8 # orw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAB # orw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XA9 # orw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAA # orw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAF # orw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAE # orw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAD # orw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA8 # orw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XA9 # orw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAA # orw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAB # orw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAD # orw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAE # orw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XAF # orw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA8 # orw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAB # orw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XA9 # orw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAA # orw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAF # orw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAE # orw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAD # orw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XAC, 0X24 # orw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB0 # orw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB3 # orw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB1 # orw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB2 # orw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB7 # orw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB6 # orw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB5 # orw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB0 # orw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB1 # orw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB2 # orw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB3 # orw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB5 # orw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB6 # orw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB7 # orw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB0 # orw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB3 # orw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB1 # orw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB2 # orw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB7 # orw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB6 # orw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB5 # orw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB4, 0X24 # orw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB8 # orw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBB # orw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XB9 # orw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBA # orw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBF # orw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBE # orw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBD # orw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB8 # orw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XB9 # orw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBA # orw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBB # orw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBD # orw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBE # orw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X0B, 0XBF # orw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB8 # orw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBB # orw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XB9 # orw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBA # orw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBF # orw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBE # orw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBD # orw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X0B, 0XBC, 0X24 # orw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define OR_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X80 # orw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X83 # orw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X81 # orw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X82 # orw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X87 # orw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X86 # orw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X85 # orw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X84, 0X24 # orw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X80 # orw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X81 # orw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X82 # orw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X83 # orw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X84, 0X24 # orw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X85 # orw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X86 # orw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X87 # orw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X80 # orw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X83 # orw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X81 # orw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X82 # orw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X87 # orw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X86 # orw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X85 # orw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X84, 0X24 # orw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X98 # orw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9B # orw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X99 # orw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9A # orw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9F # orw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9E # orw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9D # orw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X9C, 0X24 # orw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X98 # orw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X99 # orw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9A # orw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9B # orw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9C, 0X24 # orw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9D # orw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9E # orw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X9F # orw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X98 # orw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9B # orw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X99 # orw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9A # orw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9F # orw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9E # orw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9D # orw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X9C, 0X24 # orw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X88 # orw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8B # orw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X89 # orw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8A # orw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8F # orw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8E # orw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8D # orw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X8C, 0X24 # orw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X88 # orw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X89 # orw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8A # orw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8B # orw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8C, 0X24 # orw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8D # orw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8E # orw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X8F # orw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X88 # orw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8B # orw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X89 # orw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8A # orw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8F # orw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8E # orw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8D # orw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X8C, 0X24 # orw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X90 # orw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X93 # orw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X91 # orw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X92 # orw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X97 # orw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X96 # orw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X95 # orw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0X94, 0X24 # orw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X90 # orw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X91 # orw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X92 # orw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X93 # orw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X94, 0X24 # orw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X95 # orw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X96 # orw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0X97 # orw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X90 # orw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X93 # orw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X91 # orw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X92 # orw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X97 # orw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X96 # orw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X95 # orw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0X94, 0X24 # orw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB8 # orw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBB # orw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB9 # orw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBA # orw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBF # orw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBE # orw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBD # orw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XBC, 0X24 # orw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB8 # orw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB9 # orw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBA # orw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBB # orw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBC, 0X24 # orw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBD # orw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBE # orw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XBF # orw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB8 # orw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBB # orw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB9 # orw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBA # orw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBF # orw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBE # orw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBD # orw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XBC, 0X24 # orw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB0 # orw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB3 # orw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB1 # orw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB2 # orw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB7 # orw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB6 # orw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB5 # orw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XB4, 0X24 # orw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB0 # orw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB1 # orw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB2 # orw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB3 # orw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB4, 0X24 # orw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB5 # orw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB6 # orw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XB7 # orw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB0 # orw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB3 # orw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB1 # orw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB2 # orw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB7 # orw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB6 # orw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB5 # orw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XB4, 0X24 # orw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA8 # orw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAB # orw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA9 # orw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAA # orw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAF # orw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAE # orw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAD # orw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XAC, 0X24 # orw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA8 # orw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA9 # orw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAA # orw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAB # orw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAC, 0X24 # orw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAD # orw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAE # orw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XAF # orw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA8 # orw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAB # orw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA9 # orw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAA # orw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAF # orw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAE # orw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAD # orw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XAC, 0X24 # orw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA0 # orw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA3 # orw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA1 # orw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA2 # orw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA7 # orw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA6 # orw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA5 # orw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X09, 0XA4, 0X24 # orw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA0 # orw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA1 # orw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA2 # orw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA3 # orw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA4, 0X24 # orw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA5 # orw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA6 # orw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X09, 0XA7 # orw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA0 # orw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA3 # orw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA1 # orw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA2 # orw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA7 # orw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA6 # orw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA5 # orw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X09, 0XA4, 0X24 # orw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X80 # orw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X83 # orw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X81 # orw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X82 # orw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X87 # orw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X86 # orw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X85 # orw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X84, 0X24 # orw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X80 # orw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X81 # orw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X82 # orw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X83 # orw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X84, 0X24 # orw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X85 # orw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X86 # orw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X87 # orw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X80 # orw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X83 # orw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X81 # orw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X82 # orw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X87 # orw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X86 # orw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X85 # orw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X84, 0X24 # orw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X88 # orw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8B # orw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X89 # orw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8A # orw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8F # orw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8E # orw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8D # orw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X8C, 0X24 # orw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X88 # orw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X89 # orw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8A # orw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8B # orw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8C, 0X24 # orw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8D # orw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8E # orw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X8F # orw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X88 # orw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8B # orw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X89 # orw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8A # orw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8F # orw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8E # orw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8D # orw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X8C, 0X24 # orw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X90 # orw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X93 # orw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X91 # orw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X92 # orw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X97 # orw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X96 # orw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X95 # orw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X94, 0X24 # orw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X90 # orw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X91 # orw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X92 # orw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X93 # orw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X94, 0X24 # orw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X95 # orw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X96 # orw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X97 # orw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X90 # orw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X93 # orw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X91 # orw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X92 # orw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X97 # orw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X96 # orw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X95 # orw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X94, 0X24 # orw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X98 # orw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9B # orw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X99 # orw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9A # orw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9F # orw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9E # orw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9D # orw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0X9C, 0X24 # orw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X98 # orw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X99 # orw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9A # orw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9B # orw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9C, 0X24 # orw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9D # orw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9E # orw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0X9F # orw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X98 # orw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9B # orw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X99 # orw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9A # orw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9F # orw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9E # orw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9D # orw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0X9C, 0X24 # orw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA0 # orw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA3 # orw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA1 # orw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA2 # orw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA7 # orw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA6 # orw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA5 # orw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA4, 0X24 # orw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA0 # orw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA1 # orw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA2 # orw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA3 # orw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA4, 0X24 # orw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA5 # orw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA6 # orw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA7 # orw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA0 # orw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA3 # orw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA1 # orw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA2 # orw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA7 # orw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA6 # orw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA5 # orw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA4, 0X24 # orw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA8 # orw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAB # orw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XA9 # orw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAA # orw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAF # orw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAE # orw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAD # orw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XAC, 0X24 # orw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA8 # orw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XA9 # orw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAA # orw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAB # orw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAC, 0X24 # orw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAD # orw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAE # orw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XAF # orw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA8 # orw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAB # orw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XA9 # orw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAA # orw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAF # orw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAE # orw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAD # orw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XAC, 0X24 # orw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB0 # orw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB3 # orw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB1 # orw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB2 # orw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB7 # orw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB6 # orw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB5 # orw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB4, 0X24 # orw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB0 # orw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB1 # orw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB2 # orw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB3 # orw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB4, 0X24 # orw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB5 # orw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB6 # orw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB7 # orw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB0 # orw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB3 # orw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB1 # orw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB2 # orw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB7 # orw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB6 # orw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB5 # orw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB4, 0X24 # orw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB8 # orw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBB # orw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XB9 # orw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBA # orw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBF # orw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBE # orw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBD # orw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X09, 0XBC, 0X24 # orw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB8 # orw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XB9 # orw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBA # orw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBB # orw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBC, 0X24 # orw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBD # orw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBE # orw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X09, 0XBF # orw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB8 # orw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBB # orw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XB9 # orw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBA # orw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBF # orw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBE # orw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBD # orw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X09, 0XBC, 0X24 # orw %r15w, " _(VALUE) "(%esp)")\
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
