#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_16_BIT__
#define MOV_PTR8_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC6, 0X06 # movb $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".short " _(POINTER))\
	CMT_ASM(".byte " _(VALUE))
#else /* !__SYSTEM_16_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define MOV_PTR8_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC6, 0X05 # movb $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".byte " _(VALUE))
#else /* !__SYSTEM_32_BIT__ */
#define MOV_PTR8_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC6, 0X04, 0X25 # movb $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".byte " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */
#endif /* __SYSTEM_16_BIT__ */
#ifdef __SYSTEM_16_BIT__
#define MOV_PTR16_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC7, 0X06 # movw $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".short " _(POINTER))\
	CMT_ASM(".short " _(VALUE))
#else /* !__SYSTEM_16_BIT__ */
#ifdef __SYSTEM_32_BIT__
#define MOV_PTR16_(POINTER, VALUE) \
	CMT_ASM(".byte 0X66, 0XC7, 0X05 # movw $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".short " _(VALUE))
#else /* !__SYSTEM_32_BIT__ */
#define MOV_PTR16_(POINTER, VALUE) \
	CMT_ASM(".byte 0X66, 0XC7, 0X04, 0X25 # movw $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */
#endif /* __SYSTEM_16_BIT__ */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define MOV_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X06 # movb (" _(VALUE) "), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X1E # movb (" _(VALUE) "), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X0E # movb (" _(VALUE) "), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X16 # movb (" _(VALUE) "), %dl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X06 # movb %al, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X1E # movb %bl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X0E # movb %cl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X16 # movb %dl, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AL_FROM_PTR_BX CMT_ASM(".byte 0X8A, 0X07 # movb (%bx), %al")
#define MOV_AL_FROM_PTR_BP CMT_ASM(".byte 0X8A, 0X46, 0X00 # movb (%bp), %al")
#define MOV_AL_FROM_PTR_SI CMT_ASM(".byte 0X8A, 0X04 # movb (%si), %al")
#define MOV_AL_FROM_PTR_DI CMT_ASM(".byte 0X8A, 0X05 # movb (%di), %al")

#define MOV_BL_FROM_PTR_BX CMT_ASM(".byte 0X8A, 0X1F # movb (%bx), %bl")
#define MOV_BL_FROM_PTR_BP CMT_ASM(".byte 0X8A, 0X5E, 0X00 # movb (%bp), %bl")
#define MOV_BL_FROM_PTR_SI CMT_ASM(".byte 0X8A, 0X1C # movb (%si), %bl")
#define MOV_BL_FROM_PTR_DI CMT_ASM(".byte 0X8A, 0X1D # movb (%di), %bl")

#define MOV_CL_FROM_PTR_BX CMT_ASM(".byte 0X8A, 0X0F # movb (%bx), %cl")
#define MOV_CL_FROM_PTR_BP CMT_ASM(".byte 0X8A, 0X4E, 0X00 # movb (%bp), %cl")
#define MOV_CL_FROM_PTR_SI CMT_ASM(".byte 0X8A, 0X0C # movb (%si), %cl")
#define MOV_CL_FROM_PTR_DI CMT_ASM(".byte 0X8A, 0X0D # movb (%di), %cl")

#define MOV_DL_FROM_PTR_BX CMT_ASM(".byte 0X8A, 0X17 # movb (%bx), %dl")
#define MOV_DL_FROM_PTR_BP CMT_ASM(".byte 0X8A, 0X56, 0X00 # movb (%bp), %dl")
#define MOV_DL_FROM_PTR_SI CMT_ASM(".byte 0X8A, 0X14 # movb (%si), %dl")
#define MOV_DL_FROM_PTR_DI CMT_ASM(".byte 0X8A, 0X15 # movb (%di), %dl")

#define MOV_AL_TO_PTR_BX CMT_ASM(".byte 0X88, 0X07 # movb %al, (%bx)")
#define MOV_AL_TO_PTR_BP CMT_ASM(".byte 0X88, 0X46, 0X00 # movb %al, (%bp)")
#define MOV_AL_TO_PTR_SI CMT_ASM(".byte 0X88, 0X04 # movb %al, (%si)")
#define MOV_AL_TO_PTR_DI CMT_ASM(".byte 0X88, 0X05 # movb %al, (%di)")

#define MOV_BL_TO_PTR_BX CMT_ASM(".byte 0X88, 0X1F # movb %bl, (%bx)")
#define MOV_BL_TO_PTR_BP CMT_ASM(".byte 0X88, 0X5E, 0X00 # movb %bl, (%bp)")
#define MOV_BL_TO_PTR_SI CMT_ASM(".byte 0X88, 0X1C # movb %bl, (%si)")
#define MOV_BL_TO_PTR_DI CMT_ASM(".byte 0X88, 0X1D # movb %bl, (%di)")

#define MOV_CL_TO_PTR_BX CMT_ASM(".byte 0X88, 0X0F # movb %cl, (%bx)")
#define MOV_CL_TO_PTR_BP CMT_ASM(".byte 0X88, 0X4E, 0X00 # movb %cl, (%bp)")
#define MOV_CL_TO_PTR_SI CMT_ASM(".byte 0X88, 0X0C # movb %cl, (%si)")
#define MOV_CL_TO_PTR_DI CMT_ASM(".byte 0X88, 0X0D # movb %cl, (%di)")

#define MOV_DL_TO_PTR_BX CMT_ASM(".byte 0X88, 0X17 # movb %dl, (%bx)")
#define MOV_DL_TO_PTR_BP CMT_ASM(".byte 0X88, 0X56, 0X00 # movb %dl, (%bp)")
#define MOV_DL_TO_PTR_SI CMT_ASM(".byte 0X88, 0X14 # movb %dl, (%si)")
#define MOV_DL_TO_PTR_DI CMT_ASM(".byte 0X88, 0X15 # movb %dl, (%di)")

#define MOV_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X87 # movb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X86 # movb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X84 # movb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X85 # movb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9F # movb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9E # movb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9C # movb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9D # movb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8F # movb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8E # movb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8C # movb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8D # movb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X97 # movb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X96 # movb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X94 # movb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X95 # movb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X87 # movb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X86 # movb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X84 # movb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X85 # movb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9F # movb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9E # movb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9C # movb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9D # movb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8F # movb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8E # movb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8C # movb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8D # movb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X97 # movb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X96 # movb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X94 # movb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X95 # movb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define MOV_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X05 # movb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X1D # movb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X0D # movb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X15 # movb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X05 # movb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X1D # movb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X0D # movb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X15 # movb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AL_FROM_PTR_EAX CMT_ASM(".byte 0X8A, 0X00 # movb (%eax), %al")
#define MOV_AL_FROM_PTR_EBX CMT_ASM(".byte 0X8A, 0X03 # movb (%ebx), %al")
#define MOV_AL_FROM_PTR_ECX CMT_ASM(".byte 0X8A, 0X01 # movb (%ecx), %al")
#define MOV_AL_FROM_PTR_EDX CMT_ASM(".byte 0X8A, 0X02 # movb (%edx), %al")
#define MOV_AL_FROM_PTR_EDI CMT_ASM(".byte 0X8A, 0X07 # movb (%edi), %al")
#define MOV_AL_FROM_PTR_ESI CMT_ASM(".byte 0X8A, 0X06 # movb (%esi), %al")
#define MOV_AL_FROM_PTR_EBP CMT_ASM(".byte 0X8A, 0X45, 0X00 # movb (%ebp), %al")
#define MOV_AL_FROM_PTR_ESP CMT_ASM(".byte 0X8A, 0X04, 0X24 # movb (%esp), %al")
#define MOV_AL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8A, 0X07 # movb (%bx), %al")
#define MOV_AL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8A, 0X46, 0X00 # movb (%bp), %al")
#define MOV_AL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8A, 0X04 # movb (%si), %al")
#define MOV_AL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8A, 0X05 # movb (%di), %al")

#define MOV_BL_FROM_PTR_EAX CMT_ASM(".byte 0X8A, 0X18 # movb (%eax), %bl")
#define MOV_BL_FROM_PTR_EBX CMT_ASM(".byte 0X8A, 0X1B # movb (%ebx), %bl")
#define MOV_BL_FROM_PTR_ECX CMT_ASM(".byte 0X8A, 0X19 # movb (%ecx), %bl")
#define MOV_BL_FROM_PTR_EDX CMT_ASM(".byte 0X8A, 0X1A # movb (%edx), %bl")
#define MOV_BL_FROM_PTR_EDI CMT_ASM(".byte 0X8A, 0X1F # movb (%edi), %bl")
#define MOV_BL_FROM_PTR_ESI CMT_ASM(".byte 0X8A, 0X1E # movb (%esi), %bl")
#define MOV_BL_FROM_PTR_EBP CMT_ASM(".byte 0X8A, 0X5D, 0X00 # movb (%ebp), %bl")
#define MOV_BL_FROM_PTR_ESP CMT_ASM(".byte 0X8A, 0X1C, 0X24 # movb (%esp), %bl")
#define MOV_BL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8A, 0X1F # movb (%bx), %bl")
#define MOV_BL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8A, 0X5E, 0X00 # movb (%bp), %bl")
#define MOV_BL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8A, 0X1C # movb (%si), %bl")
#define MOV_BL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8A, 0X1D # movb (%di), %bl")

#define MOV_CL_FROM_PTR_EAX CMT_ASM(".byte 0X8A, 0X08 # movb (%eax), %cl")
#define MOV_CL_FROM_PTR_EBX CMT_ASM(".byte 0X8A, 0X0B # movb (%ebx), %cl")
#define MOV_CL_FROM_PTR_ECX CMT_ASM(".byte 0X8A, 0X09 # movb (%ecx), %cl")
#define MOV_CL_FROM_PTR_EDX CMT_ASM(".byte 0X8A, 0X0A # movb (%edx), %cl")
#define MOV_CL_FROM_PTR_EDI CMT_ASM(".byte 0X8A, 0X0F # movb (%edi), %cl")
#define MOV_CL_FROM_PTR_ESI CMT_ASM(".byte 0X8A, 0X0E # movb (%esi), %cl")
#define MOV_CL_FROM_PTR_EBP CMT_ASM(".byte 0X8A, 0X4D, 0X00 # movb (%ebp), %cl")
#define MOV_CL_FROM_PTR_ESP CMT_ASM(".byte 0X8A, 0X0C, 0X24 # movb (%esp), %cl")
#define MOV_CL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8A, 0X0F # movb (%bx), %cl")
#define MOV_CL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8A, 0X4E, 0X00 # movb (%bp), %cl")
#define MOV_CL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8A, 0X0C # movb (%si), %cl")
#define MOV_CL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8A, 0X0D # movb (%di), %cl")

#define MOV_DL_FROM_PTR_EAX CMT_ASM(".byte 0X8A, 0X10 # movb (%eax), %dl")
#define MOV_DL_FROM_PTR_EBX CMT_ASM(".byte 0X8A, 0X13 # movb (%ebx), %dl")
#define MOV_DL_FROM_PTR_ECX CMT_ASM(".byte 0X8A, 0X11 # movb (%ecx), %dl")
#define MOV_DL_FROM_PTR_EDX CMT_ASM(".byte 0X8A, 0X12 # movb (%edx), %dl")
#define MOV_DL_FROM_PTR_EDI CMT_ASM(".byte 0X8A, 0X17 # movb (%edi), %dl")
#define MOV_DL_FROM_PTR_ESI CMT_ASM(".byte 0X8A, 0X16 # movb (%esi), %dl")
#define MOV_DL_FROM_PTR_EBP CMT_ASM(".byte 0X8A, 0X55, 0X00 # movb (%ebp), %dl")
#define MOV_DL_FROM_PTR_ESP CMT_ASM(".byte 0X8A, 0X14, 0X24 # movb (%esp), %dl")
#define MOV_DL_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8A, 0X17 # movb (%bx), %dl")
#define MOV_DL_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8A, 0X56, 0X00 # movb (%bp), %dl")
#define MOV_DL_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8A, 0X14 # movb (%si), %dl")
#define MOV_DL_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8A, 0X15 # movb (%di), %dl")

#define MOV_AL_TO_PTR_EAX CMT_ASM(".byte 0X88, 0X00 # movb %al, (%eax)")
#define MOV_AL_TO_PTR_EBX CMT_ASM(".byte 0X88, 0X03 # movb %al, (%ebx)")
#define MOV_AL_TO_PTR_ECX CMT_ASM(".byte 0X88, 0X01 # movb %al, (%ecx)")
#define MOV_AL_TO_PTR_EDX CMT_ASM(".byte 0X88, 0X02 # movb %al, (%edx)")
#define MOV_AL_TO_PTR_EDI CMT_ASM(".byte 0X88, 0X07 # movb %al, (%edi)")
#define MOV_AL_TO_PTR_ESI CMT_ASM(".byte 0X88, 0X06 # movb %al, (%esi)")
#define MOV_AL_TO_PTR_EBP CMT_ASM(".byte 0X88, 0X45, 0X00 # movb %al, (%ebp)")
#define MOV_AL_TO_PTR_ESP CMT_ASM(".byte 0X88, 0X04, 0X24 # movb %al, (%esp)")
#define MOV_AL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X88, 0X07 # movb %al, (%bx)")
#define MOV_AL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X88, 0X46, 0X00 # movb %al, (%bp)")
#define MOV_AL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X88, 0X04 # movb %al, (%si)")
#define MOV_AL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X88, 0X05 # movb %al, (%di)")

#define MOV_BL_TO_PTR_EAX CMT_ASM(".byte 0X88, 0X18 # movb %bl, (%eax)")
#define MOV_BL_TO_PTR_EBX CMT_ASM(".byte 0X88, 0X1B # movb %bl, (%ebx)")
#define MOV_BL_TO_PTR_ECX CMT_ASM(".byte 0X88, 0X19 # movb %bl, (%ecx)")
#define MOV_BL_TO_PTR_EDX CMT_ASM(".byte 0X88, 0X1A # movb %bl, (%edx)")
#define MOV_BL_TO_PTR_EDI CMT_ASM(".byte 0X88, 0X1F # movb %bl, (%edi)")
#define MOV_BL_TO_PTR_ESI CMT_ASM(".byte 0X88, 0X1E # movb %bl, (%esi)")
#define MOV_BL_TO_PTR_EBP CMT_ASM(".byte 0X88, 0X5D, 0X00 # movb %bl, (%ebp)")
#define MOV_BL_TO_PTR_ESP CMT_ASM(".byte 0X88, 0X1C, 0X24 # movb %bl, (%esp)")
#define MOV_BL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X88, 0X1F # movb %bl, (%bx)")
#define MOV_BL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X88, 0X5E, 0X00 # movb %bl, (%bp)")
#define MOV_BL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X88, 0X1C # movb %bl, (%si)")
#define MOV_BL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X88, 0X1D # movb %bl, (%di)")

#define MOV_CL_TO_PTR_EAX CMT_ASM(".byte 0X88, 0X08 # movb %cl, (%eax)")
#define MOV_CL_TO_PTR_EBX CMT_ASM(".byte 0X88, 0X0B # movb %cl, (%ebx)")
#define MOV_CL_TO_PTR_ECX CMT_ASM(".byte 0X88, 0X09 # movb %cl, (%ecx)")
#define MOV_CL_TO_PTR_EDX CMT_ASM(".byte 0X88, 0X0A # movb %cl, (%edx)")
#define MOV_CL_TO_PTR_EDI CMT_ASM(".byte 0X88, 0X0F # movb %cl, (%edi)")
#define MOV_CL_TO_PTR_ESI CMT_ASM(".byte 0X88, 0X0E # movb %cl, (%esi)")
#define MOV_CL_TO_PTR_EBP CMT_ASM(".byte 0X88, 0X4D, 0X00 # movb %cl, (%ebp)")
#define MOV_CL_TO_PTR_ESP CMT_ASM(".byte 0X88, 0X0C, 0X24 # movb %cl, (%esp)")
#define MOV_CL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X88, 0X0F # movb %cl, (%bx)")
#define MOV_CL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X88, 0X4E, 0X00 # movb %cl, (%bp)")
#define MOV_CL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X88, 0X0C # movb %cl, (%si)")
#define MOV_CL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X88, 0X0D # movb %cl, (%di)")

#define MOV_DL_TO_PTR_EAX CMT_ASM(".byte 0X88, 0X10 # movb %dl, (%eax)")
#define MOV_DL_TO_PTR_EBX CMT_ASM(".byte 0X88, 0X13 # movb %dl, (%ebx)")
#define MOV_DL_TO_PTR_ECX CMT_ASM(".byte 0X88, 0X11 # movb %dl, (%ecx)")
#define MOV_DL_TO_PTR_EDX CMT_ASM(".byte 0X88, 0X12 # movb %dl, (%edx)")
#define MOV_DL_TO_PTR_EDI CMT_ASM(".byte 0X88, 0X17 # movb %dl, (%edi)")
#define MOV_DL_TO_PTR_ESI CMT_ASM(".byte 0X88, 0X16 # movb %dl, (%esi)")
#define MOV_DL_TO_PTR_EBP CMT_ASM(".byte 0X88, 0X55, 0X00 # movb %dl, (%ebp)")
#define MOV_DL_TO_PTR_ESP CMT_ASM(".byte 0X88, 0X14, 0X24 # movb %dl, (%esp)")
#define MOV_DL_TO_PTR_BX CMT_ASM(".byte 0X67, 0X88, 0X17 # movb %dl, (%bx)")
#define MOV_DL_TO_PTR_BP CMT_ASM(".byte 0X67, 0X88, 0X56, 0X00 # movb %dl, (%bp)")
#define MOV_DL_TO_PTR_SI CMT_ASM(".byte 0X67, 0X88, 0X14 # movb %dl, (%si)")
#define MOV_DL_TO_PTR_DI CMT_ASM(".byte 0X67, 0X88, 0X15 # movb %dl, (%di)")

#define MOV_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X80 # movb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X83 # movb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X81 # movb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X82 # movb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X87 # movb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X86 # movb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X85 # movb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X87 # movb " _(VALUE) "(%bx), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X86 # movb " _(VALUE) "(%bp), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X84 # movb " _(VALUE) "(%si), %al")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X85 # movb " _(VALUE) "(%di), %al")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X98 # movb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9B # movb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X99 # movb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9A # movb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9F # movb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9E # movb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9D # movb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9F # movb " _(VALUE) "(%bx), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9E # movb " _(VALUE) "(%bp), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9C # movb " _(VALUE) "(%si), %bl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9D # movb " _(VALUE) "(%di), %bl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X88 # movb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8B # movb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X89 # movb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8A # movb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8F # movb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8E # movb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8D # movb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8F # movb " _(VALUE) "(%bx), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8E # movb " _(VALUE) "(%bp), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8C # movb " _(VALUE) "(%si), %cl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8D # movb " _(VALUE) "(%di), %cl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X90 # movb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X93 # movb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X91 # movb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X92 # movb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X97 # movb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X96 # movb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X95 # movb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X97 # movb " _(VALUE) "(%bx), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X96 # movb " _(VALUE) "(%bp), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X94 # movb " _(VALUE) "(%si), %dl")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X95 # movb " _(VALUE) "(%di), %dl")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X80 # movb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X83 # movb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X81 # movb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X82 # movb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X87 # movb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X86 # movb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X85 # movb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X84, 0X24 # movb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X87 # movb %al, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X86 # movb %al, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X84 # movb %al, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X85 # movb %al, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X98 # movb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9B # movb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X99 # movb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9A # movb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9F # movb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9E # movb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9D # movb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9C, 0X24 # movb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9F # movb %bl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9E # movb %bl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9C # movb %bl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9D # movb %bl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X88 # movb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8B # movb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X89 # movb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8A # movb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8F # movb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8E # movb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8D # movb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8C, 0X24 # movb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8F # movb %cl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8E # movb %cl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8C # movb %cl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8D # movb %cl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X90 # movb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X93 # movb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X91 # movb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X92 # movb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X97 # movb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X96 # movb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X95 # movb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X94, 0X24 # movb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X97 # movb %dl, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X96 # movb %dl, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X94 # movb %dl, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DL_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X95 # movb %dl, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_AL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X04, 0X25 # movb (" _(VALUE) "), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X1C, 0X25 # movb (" _(VALUE) "), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X0C, 0X25 # movb (" _(VALUE) "), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X14, 0X25 # movb (" _(VALUE) "), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0X3C, 0X25 # movb (" _(VALUE) "), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0X34, 0X25 # movb (" _(VALUE) "), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0X2C, 0X25 # movb (" _(VALUE) "), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0X24, 0X25 # movb (" _(VALUE) "), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X04, 0X25 # movb (" _(VALUE) "), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X0C, 0X25 # movb (" _(VALUE) "), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X14, 0X25 # movb (" _(VALUE) "), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X1C, 0X25 # movb (" _(VALUE) "), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X24, 0X25 # movb (" _(VALUE) "), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X2C, 0X25 # movb (" _(VALUE) "), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X34, 0X25 # movb (" _(VALUE) "), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X3C, 0X25 # movb (" _(VALUE) "), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X04, 0X25 # movb %al, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X1C, 0X25 # movb %bl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X0C, 0X25 # movb %cl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X88, 0X14, 0X25 # movb %dl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0X3C, 0X25 # movb %dil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0X34, 0X25 # movb %sil, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0X2C, 0X25 # movb %bpl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0X24, 0X25 # movb %spl, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X04, 0X25 # movb %r8b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X0C, 0X25 # movb %r9b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X14, 0X25 # movb %r10b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X1C, 0X25 # movb %r11b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X24, 0X25 # movb %r12b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X2C, 0X25 # movb %r13b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X34, 0X25 # movb %r14b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X3C, 0X25 # movb %r15b, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AL_FROM_PTR_RAX CMT_ASM(".byte 0X8A, 0X00 # movb (%rax), %al")
#define MOV_AL_FROM_PTR_RBX CMT_ASM(".byte 0X8A, 0X03 # movb (%rbx), %al")
#define MOV_AL_FROM_PTR_RCX CMT_ASM(".byte 0X8A, 0X01 # movb (%rcx), %al")
#define MOV_AL_FROM_PTR_RDX CMT_ASM(".byte 0X8A, 0X02 # movb (%rdx), %al")
#define MOV_AL_FROM_PTR_RDI CMT_ASM(".byte 0X8A, 0X07 # movb (%rdi), %al")
#define MOV_AL_FROM_PTR_RSI CMT_ASM(".byte 0X8A, 0X06 # movb (%rsi), %al")
#define MOV_AL_FROM_PTR_RBP CMT_ASM(".byte 0X8A, 0X45, 0X00 # movb (%rbp), %al")
#define MOV_AL_FROM_PTR_RSP CMT_ASM(".byte 0X8A, 0X04, 0X24 # movb (%rsp), %al")
#define MOV_AL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X00 # movb (%r8), %al")
#define MOV_AL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X01 # movb (%r9), %al")
#define MOV_AL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X02 # movb (%r10), %al")
#define MOV_AL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X03 # movb (%r11), %al")
#define MOV_AL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X04, 0X24 # movb (%r12), %al")
#define MOV_AL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X45, 0X00 # movb (%r13), %al")
#define MOV_AL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X06 # movb (%r14), %al")
#define MOV_AL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X07 # movb (%r15), %al")
#define MOV_AL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8A, 0X00 # movb (%eax), %al")
#define MOV_AL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8A, 0X03 # movb (%ebx), %al")
#define MOV_AL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8A, 0X01 # movb (%ecx), %al")
#define MOV_AL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8A, 0X02 # movb (%edx), %al")
#define MOV_AL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8A, 0X07 # movb (%edi), %al")
#define MOV_AL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8A, 0X06 # movb (%esi), %al")
#define MOV_AL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8A, 0X45, 0X00 # movb (%ebp), %al")
#define MOV_AL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8A, 0X04, 0X24 # movb (%esp), %al")

#define MOV_BL_FROM_PTR_RAX CMT_ASM(".byte 0X8A, 0X18 # movb (%rax), %bl")
#define MOV_BL_FROM_PTR_RBX CMT_ASM(".byte 0X8A, 0X1B # movb (%rbx), %bl")
#define MOV_BL_FROM_PTR_RCX CMT_ASM(".byte 0X8A, 0X19 # movb (%rcx), %bl")
#define MOV_BL_FROM_PTR_RDX CMT_ASM(".byte 0X8A, 0X1A # movb (%rdx), %bl")
#define MOV_BL_FROM_PTR_RDI CMT_ASM(".byte 0X8A, 0X1F # movb (%rdi), %bl")
#define MOV_BL_FROM_PTR_RSI CMT_ASM(".byte 0X8A, 0X1E # movb (%rsi), %bl")
#define MOV_BL_FROM_PTR_RBP CMT_ASM(".byte 0X8A, 0X5D, 0X00 # movb (%rbp), %bl")
#define MOV_BL_FROM_PTR_RSP CMT_ASM(".byte 0X8A, 0X1C, 0X24 # movb (%rsp), %bl")
#define MOV_BL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X18 # movb (%r8), %bl")
#define MOV_BL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X19 # movb (%r9), %bl")
#define MOV_BL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X1A # movb (%r10), %bl")
#define MOV_BL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X1B # movb (%r11), %bl")
#define MOV_BL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X1C, 0X24 # movb (%r12), %bl")
#define MOV_BL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X5D, 0X00 # movb (%r13), %bl")
#define MOV_BL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X1E # movb (%r14), %bl")
#define MOV_BL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X1F # movb (%r15), %bl")
#define MOV_BL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8A, 0X18 # movb (%eax), %bl")
#define MOV_BL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8A, 0X1B # movb (%ebx), %bl")
#define MOV_BL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8A, 0X19 # movb (%ecx), %bl")
#define MOV_BL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8A, 0X1A # movb (%edx), %bl")
#define MOV_BL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8A, 0X1F # movb (%edi), %bl")
#define MOV_BL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8A, 0X1E # movb (%esi), %bl")
#define MOV_BL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8A, 0X5D, 0X00 # movb (%ebp), %bl")
#define MOV_BL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8A, 0X1C, 0X24 # movb (%esp), %bl")

#define MOV_CL_FROM_PTR_RAX CMT_ASM(".byte 0X8A, 0X08 # movb (%rax), %cl")
#define MOV_CL_FROM_PTR_RBX CMT_ASM(".byte 0X8A, 0X0B # movb (%rbx), %cl")
#define MOV_CL_FROM_PTR_RCX CMT_ASM(".byte 0X8A, 0X09 # movb (%rcx), %cl")
#define MOV_CL_FROM_PTR_RDX CMT_ASM(".byte 0X8A, 0X0A # movb (%rdx), %cl")
#define MOV_CL_FROM_PTR_RDI CMT_ASM(".byte 0X8A, 0X0F # movb (%rdi), %cl")
#define MOV_CL_FROM_PTR_RSI CMT_ASM(".byte 0X8A, 0X0E # movb (%rsi), %cl")
#define MOV_CL_FROM_PTR_RBP CMT_ASM(".byte 0X8A, 0X4D, 0X00 # movb (%rbp), %cl")
#define MOV_CL_FROM_PTR_RSP CMT_ASM(".byte 0X8A, 0X0C, 0X24 # movb (%rsp), %cl")
#define MOV_CL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X08 # movb (%r8), %cl")
#define MOV_CL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X09 # movb (%r9), %cl")
#define MOV_CL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X0A # movb (%r10), %cl")
#define MOV_CL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X0B # movb (%r11), %cl")
#define MOV_CL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X0C, 0X24 # movb (%r12), %cl")
#define MOV_CL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X4D, 0X00 # movb (%r13), %cl")
#define MOV_CL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X0E # movb (%r14), %cl")
#define MOV_CL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X0F # movb (%r15), %cl")
#define MOV_CL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8A, 0X08 # movb (%eax), %cl")
#define MOV_CL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8A, 0X0B # movb (%ebx), %cl")
#define MOV_CL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8A, 0X09 # movb (%ecx), %cl")
#define MOV_CL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8A, 0X0A # movb (%edx), %cl")
#define MOV_CL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8A, 0X0F # movb (%edi), %cl")
#define MOV_CL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8A, 0X0E # movb (%esi), %cl")
#define MOV_CL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8A, 0X4D, 0X00 # movb (%ebp), %cl")
#define MOV_CL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8A, 0X0C, 0X24 # movb (%esp), %cl")

#define MOV_DL_FROM_PTR_RAX CMT_ASM(".byte 0X8A, 0X10 # movb (%rax), %dl")
#define MOV_DL_FROM_PTR_RBX CMT_ASM(".byte 0X8A, 0X13 # movb (%rbx), %dl")
#define MOV_DL_FROM_PTR_RCX CMT_ASM(".byte 0X8A, 0X11 # movb (%rcx), %dl")
#define MOV_DL_FROM_PTR_RDX CMT_ASM(".byte 0X8A, 0X12 # movb (%rdx), %dl")
#define MOV_DL_FROM_PTR_RDI CMT_ASM(".byte 0X8A, 0X17 # movb (%rdi), %dl")
#define MOV_DL_FROM_PTR_RSI CMT_ASM(".byte 0X8A, 0X16 # movb (%rsi), %dl")
#define MOV_DL_FROM_PTR_RBP CMT_ASM(".byte 0X8A, 0X55, 0X00 # movb (%rbp), %dl")
#define MOV_DL_FROM_PTR_RSP CMT_ASM(".byte 0X8A, 0X14, 0X24 # movb (%rsp), %dl")
#define MOV_DL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X10 # movb (%r8), %dl")
#define MOV_DL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X11 # movb (%r9), %dl")
#define MOV_DL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X12 # movb (%r10), %dl")
#define MOV_DL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X13 # movb (%r11), %dl")
#define MOV_DL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X14, 0X24 # movb (%r12), %dl")
#define MOV_DL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X55, 0X00 # movb (%r13), %dl")
#define MOV_DL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X16 # movb (%r14), %dl")
#define MOV_DL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X17 # movb (%r15), %dl")
#define MOV_DL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8A, 0X10 # movb (%eax), %dl")
#define MOV_DL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8A, 0X13 # movb (%ebx), %dl")
#define MOV_DL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8A, 0X11 # movb (%ecx), %dl")
#define MOV_DL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8A, 0X12 # movb (%edx), %dl")
#define MOV_DL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8A, 0X17 # movb (%edi), %dl")
#define MOV_DL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8A, 0X16 # movb (%esi), %dl")
#define MOV_DL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8A, 0X55, 0X00 # movb (%ebp), %dl")
#define MOV_DL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8A, 0X14, 0X24 # movb (%esp), %dl")

#define MOV_DIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X8A, 0X38 # movb (%rax), %dil")
#define MOV_DIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X8A, 0X3B # movb (%rbx), %dil")
#define MOV_DIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X8A, 0X39 # movb (%rcx), %dil")
#define MOV_DIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X8A, 0X3A # movb (%rdx), %dil")
#define MOV_DIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X8A, 0X3F # movb (%rdi), %dil")
#define MOV_DIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X8A, 0X3E # movb (%rsi), %dil")
#define MOV_DIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X8A, 0X7D, 0X00 # movb (%rbp), %dil")
#define MOV_DIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X8A, 0X3C, 0X24 # movb (%rsp), %dil")
#define MOV_DIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X38 # movb (%r8), %dil")
#define MOV_DIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X39 # movb (%r9), %dil")
#define MOV_DIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X3A # movb (%r10), %dil")
#define MOV_DIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X3B # movb (%r11), %dil")
#define MOV_DIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X3C, 0X24 # movb (%r12), %dil")
#define MOV_DIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X7D, 0X00 # movb (%r13), %dil")
#define MOV_DIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X3E # movb (%r14), %dil")
#define MOV_DIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X3F # movb (%r15), %dil")
#define MOV_DIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X38 # movb (%eax), %dil")
#define MOV_DIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X3B # movb (%ebx), %dil")
#define MOV_DIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X39 # movb (%ecx), %dil")
#define MOV_DIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X3A # movb (%edx), %dil")
#define MOV_DIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X3F # movb (%edi), %dil")
#define MOV_DIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X3E # movb (%esi), %dil")
#define MOV_DIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X7D, 0X00 # movb (%ebp), %dil")
#define MOV_DIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X3C, 0X24 # movb (%esp), %dil")

#define MOV_SIL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X8A, 0X30 # movb (%rax), %sil")
#define MOV_SIL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X8A, 0X33 # movb (%rbx), %sil")
#define MOV_SIL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X8A, 0X31 # movb (%rcx), %sil")
#define MOV_SIL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X8A, 0X32 # movb (%rdx), %sil")
#define MOV_SIL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X8A, 0X37 # movb (%rdi), %sil")
#define MOV_SIL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X8A, 0X36 # movb (%rsi), %sil")
#define MOV_SIL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X8A, 0X75, 0X00 # movb (%rbp), %sil")
#define MOV_SIL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X8A, 0X34, 0X24 # movb (%rsp), %sil")
#define MOV_SIL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X30 # movb (%r8), %sil")
#define MOV_SIL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X31 # movb (%r9), %sil")
#define MOV_SIL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X32 # movb (%r10), %sil")
#define MOV_SIL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X33 # movb (%r11), %sil")
#define MOV_SIL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X34, 0X24 # movb (%r12), %sil")
#define MOV_SIL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X75, 0X00 # movb (%r13), %sil")
#define MOV_SIL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X36 # movb (%r14), %sil")
#define MOV_SIL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X37 # movb (%r15), %sil")
#define MOV_SIL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X30 # movb (%eax), %sil")
#define MOV_SIL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X33 # movb (%ebx), %sil")
#define MOV_SIL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X31 # movb (%ecx), %sil")
#define MOV_SIL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X32 # movb (%edx), %sil")
#define MOV_SIL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X37 # movb (%edi), %sil")
#define MOV_SIL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X36 # movb (%esi), %sil")
#define MOV_SIL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X75, 0X00 # movb (%ebp), %sil")
#define MOV_SIL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X34, 0X24 # movb (%esp), %sil")

#define MOV_BPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X8A, 0X28 # movb (%rax), %bpl")
#define MOV_BPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X8A, 0X2B # movb (%rbx), %bpl")
#define MOV_BPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X8A, 0X29 # movb (%rcx), %bpl")
#define MOV_BPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X8A, 0X2A # movb (%rdx), %bpl")
#define MOV_BPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X8A, 0X2F # movb (%rdi), %bpl")
#define MOV_BPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X8A, 0X2E # movb (%rsi), %bpl")
#define MOV_BPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X8A, 0X6D, 0X00 # movb (%rbp), %bpl")
#define MOV_BPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X8A, 0X2C, 0X24 # movb (%rsp), %bpl")
#define MOV_BPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X28 # movb (%r8), %bpl")
#define MOV_BPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X29 # movb (%r9), %bpl")
#define MOV_BPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X2A # movb (%r10), %bpl")
#define MOV_BPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X2B # movb (%r11), %bpl")
#define MOV_BPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X2C, 0X24 # movb (%r12), %bpl")
#define MOV_BPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X6D, 0X00 # movb (%r13), %bpl")
#define MOV_BPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X2E # movb (%r14), %bpl")
#define MOV_BPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X2F # movb (%r15), %bpl")
#define MOV_BPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X28 # movb (%eax), %bpl")
#define MOV_BPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X2B # movb (%ebx), %bpl")
#define MOV_BPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X29 # movb (%ecx), %bpl")
#define MOV_BPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X2A # movb (%edx), %bpl")
#define MOV_BPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X2F # movb (%edi), %bpl")
#define MOV_BPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X2E # movb (%esi), %bpl")
#define MOV_BPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X6D, 0X00 # movb (%ebp), %bpl")
#define MOV_BPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X2C, 0X24 # movb (%esp), %bpl")

#define MOV_SPL_FROM_PTR_RAX CMT_ASM(".byte 0X40, 0X8A, 0X20 # movb (%rax), %spl")
#define MOV_SPL_FROM_PTR_RBX CMT_ASM(".byte 0X40, 0X8A, 0X23 # movb (%rbx), %spl")
#define MOV_SPL_FROM_PTR_RCX CMT_ASM(".byte 0X40, 0X8A, 0X21 # movb (%rcx), %spl")
#define MOV_SPL_FROM_PTR_RDX CMT_ASM(".byte 0X40, 0X8A, 0X22 # movb (%rdx), %spl")
#define MOV_SPL_FROM_PTR_RDI CMT_ASM(".byte 0X40, 0X8A, 0X27 # movb (%rdi), %spl")
#define MOV_SPL_FROM_PTR_RSI CMT_ASM(".byte 0X40, 0X8A, 0X26 # movb (%rsi), %spl")
#define MOV_SPL_FROM_PTR_RBP CMT_ASM(".byte 0X40, 0X8A, 0X65, 0X00 # movb (%rbp), %spl")
#define MOV_SPL_FROM_PTR_RSP CMT_ASM(".byte 0X40, 0X8A, 0X24, 0X24 # movb (%rsp), %spl")
#define MOV_SPL_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8A, 0X20 # movb (%r8), %spl")
#define MOV_SPL_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8A, 0X21 # movb (%r9), %spl")
#define MOV_SPL_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8A, 0X22 # movb (%r10), %spl")
#define MOV_SPL_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8A, 0X23 # movb (%r11), %spl")
#define MOV_SPL_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8A, 0X24, 0X24 # movb (%r12), %spl")
#define MOV_SPL_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8A, 0X65, 0X00 # movb (%r13), %spl")
#define MOV_SPL_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8A, 0X26 # movb (%r14), %spl")
#define MOV_SPL_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8A, 0X27 # movb (%r15), %spl")
#define MOV_SPL_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X20 # movb (%eax), %spl")
#define MOV_SPL_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X23 # movb (%ebx), %spl")
#define MOV_SPL_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X21 # movb (%ecx), %spl")
#define MOV_SPL_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X22 # movb (%edx), %spl")
#define MOV_SPL_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X27 # movb (%edi), %spl")
#define MOV_SPL_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X26 # movb (%esi), %spl")
#define MOV_SPL_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X65, 0X00 # movb (%ebp), %spl")
#define MOV_SPL_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X8A, 0X24, 0X24 # movb (%esp), %spl")

#define MOV_R8B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X00 # movb (%rax), %r8b")
#define MOV_R8B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X03 # movb (%rbx), %r8b")
#define MOV_R8B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X01 # movb (%rcx), %r8b")
#define MOV_R8B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X02 # movb (%rdx), %r8b")
#define MOV_R8B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X07 # movb (%rdi), %r8b")
#define MOV_R8B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X06 # movb (%rsi), %r8b")
#define MOV_R8B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X45, 0X00 # movb (%rbp), %r8b")
#define MOV_R8B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X04, 0X24 # movb (%rsp), %r8b")
#define MOV_R8B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X00 # movb (%r8), %r8b")
#define MOV_R8B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X01 # movb (%r9), %r8b")
#define MOV_R8B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X02 # movb (%r10), %r8b")
#define MOV_R8B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X03 # movb (%r11), %r8b")
#define MOV_R8B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X04, 0X24 # movb (%r12), %r8b")
#define MOV_R8B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X45, 0X00 # movb (%r13), %r8b")
#define MOV_R8B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X06 # movb (%r14), %r8b")
#define MOV_R8B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X07 # movb (%r15), %r8b")
#define MOV_R8B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X00 # movb (%eax), %r8b")
#define MOV_R8B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X03 # movb (%ebx), %r8b")
#define MOV_R8B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X01 # movb (%ecx), %r8b")
#define MOV_R8B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X02 # movb (%edx), %r8b")
#define MOV_R8B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X07 # movb (%edi), %r8b")
#define MOV_R8B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X06 # movb (%esi), %r8b")
#define MOV_R8B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X45, 0X00 # movb (%ebp), %r8b")
#define MOV_R8B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X04, 0X24 # movb (%esp), %r8b")

#define MOV_R9B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X08 # movb (%rax), %r9b")
#define MOV_R9B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X0B # movb (%rbx), %r9b")
#define MOV_R9B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X09 # movb (%rcx), %r9b")
#define MOV_R9B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X0A # movb (%rdx), %r9b")
#define MOV_R9B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X0F # movb (%rdi), %r9b")
#define MOV_R9B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X0E # movb (%rsi), %r9b")
#define MOV_R9B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X4D, 0X00 # movb (%rbp), %r9b")
#define MOV_R9B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X0C, 0X24 # movb (%rsp), %r9b")
#define MOV_R9B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X08 # movb (%r8), %r9b")
#define MOV_R9B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X09 # movb (%r9), %r9b")
#define MOV_R9B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X0A # movb (%r10), %r9b")
#define MOV_R9B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X0B # movb (%r11), %r9b")
#define MOV_R9B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X0C, 0X24 # movb (%r12), %r9b")
#define MOV_R9B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X4D, 0X00 # movb (%r13), %r9b")
#define MOV_R9B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X0E # movb (%r14), %r9b")
#define MOV_R9B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X0F # movb (%r15), %r9b")
#define MOV_R9B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X08 # movb (%eax), %r9b")
#define MOV_R9B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X0B # movb (%ebx), %r9b")
#define MOV_R9B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X09 # movb (%ecx), %r9b")
#define MOV_R9B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X0A # movb (%edx), %r9b")
#define MOV_R9B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X0F # movb (%edi), %r9b")
#define MOV_R9B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X0E # movb (%esi), %r9b")
#define MOV_R9B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X4D, 0X00 # movb (%ebp), %r9b")
#define MOV_R9B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X0C, 0X24 # movb (%esp), %r9b")

#define MOV_R10B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X10 # movb (%rax), %r10b")
#define MOV_R10B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X13 # movb (%rbx), %r10b")
#define MOV_R10B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X11 # movb (%rcx), %r10b")
#define MOV_R10B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X12 # movb (%rdx), %r10b")
#define MOV_R10B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X17 # movb (%rdi), %r10b")
#define MOV_R10B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X16 # movb (%rsi), %r10b")
#define MOV_R10B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X55, 0X00 # movb (%rbp), %r10b")
#define MOV_R10B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X14, 0X24 # movb (%rsp), %r10b")
#define MOV_R10B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X10 # movb (%r8), %r10b")
#define MOV_R10B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X11 # movb (%r9), %r10b")
#define MOV_R10B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X12 # movb (%r10), %r10b")
#define MOV_R10B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X13 # movb (%r11), %r10b")
#define MOV_R10B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X14, 0X24 # movb (%r12), %r10b")
#define MOV_R10B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X55, 0X00 # movb (%r13), %r10b")
#define MOV_R10B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X16 # movb (%r14), %r10b")
#define MOV_R10B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X17 # movb (%r15), %r10b")
#define MOV_R10B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X10 # movb (%eax), %r10b")
#define MOV_R10B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X13 # movb (%ebx), %r10b")
#define MOV_R10B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X11 # movb (%ecx), %r10b")
#define MOV_R10B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X12 # movb (%edx), %r10b")
#define MOV_R10B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X17 # movb (%edi), %r10b")
#define MOV_R10B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X16 # movb (%esi), %r10b")
#define MOV_R10B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X55, 0X00 # movb (%ebp), %r10b")
#define MOV_R10B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X14, 0X24 # movb (%esp), %r10b")

#define MOV_R11B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X18 # movb (%rax), %r11b")
#define MOV_R11B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X1B # movb (%rbx), %r11b")
#define MOV_R11B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X19 # movb (%rcx), %r11b")
#define MOV_R11B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X1A # movb (%rdx), %r11b")
#define MOV_R11B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X1F # movb (%rdi), %r11b")
#define MOV_R11B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X1E # movb (%rsi), %r11b")
#define MOV_R11B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X5D, 0X00 # movb (%rbp), %r11b")
#define MOV_R11B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X1C, 0X24 # movb (%rsp), %r11b")
#define MOV_R11B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X18 # movb (%r8), %r11b")
#define MOV_R11B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X19 # movb (%r9), %r11b")
#define MOV_R11B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X1A # movb (%r10), %r11b")
#define MOV_R11B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X1B # movb (%r11), %r11b")
#define MOV_R11B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X1C, 0X24 # movb (%r12), %r11b")
#define MOV_R11B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X5D, 0X00 # movb (%r13), %r11b")
#define MOV_R11B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X1E # movb (%r14), %r11b")
#define MOV_R11B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X1F # movb (%r15), %r11b")
#define MOV_R11B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X18 # movb (%eax), %r11b")
#define MOV_R11B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X1B # movb (%ebx), %r11b")
#define MOV_R11B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X19 # movb (%ecx), %r11b")
#define MOV_R11B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X1A # movb (%edx), %r11b")
#define MOV_R11B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X1F # movb (%edi), %r11b")
#define MOV_R11B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X1E # movb (%esi), %r11b")
#define MOV_R11B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X5D, 0X00 # movb (%ebp), %r11b")
#define MOV_R11B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X1C, 0X24 # movb (%esp), %r11b")

#define MOV_R12B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X20 # movb (%rax), %r12b")
#define MOV_R12B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X23 # movb (%rbx), %r12b")
#define MOV_R12B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X21 # movb (%rcx), %r12b")
#define MOV_R12B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X22 # movb (%rdx), %r12b")
#define MOV_R12B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X27 # movb (%rdi), %r12b")
#define MOV_R12B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X26 # movb (%rsi), %r12b")
#define MOV_R12B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X65, 0X00 # movb (%rbp), %r12b")
#define MOV_R12B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X24, 0X24 # movb (%rsp), %r12b")
#define MOV_R12B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X20 # movb (%r8), %r12b")
#define MOV_R12B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X21 # movb (%r9), %r12b")
#define MOV_R12B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X22 # movb (%r10), %r12b")
#define MOV_R12B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X23 # movb (%r11), %r12b")
#define MOV_R12B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X24, 0X24 # movb (%r12), %r12b")
#define MOV_R12B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X65, 0X00 # movb (%r13), %r12b")
#define MOV_R12B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X26 # movb (%r14), %r12b")
#define MOV_R12B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X27 # movb (%r15), %r12b")
#define MOV_R12B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X20 # movb (%eax), %r12b")
#define MOV_R12B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X23 # movb (%ebx), %r12b")
#define MOV_R12B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X21 # movb (%ecx), %r12b")
#define MOV_R12B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X22 # movb (%edx), %r12b")
#define MOV_R12B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X27 # movb (%edi), %r12b")
#define MOV_R12B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X26 # movb (%esi), %r12b")
#define MOV_R12B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X65, 0X00 # movb (%ebp), %r12b")
#define MOV_R12B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X24, 0X24 # movb (%esp), %r12b")

#define MOV_R13B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X28 # movb (%rax), %r13b")
#define MOV_R13B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X2B # movb (%rbx), %r13b")
#define MOV_R13B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X29 # movb (%rcx), %r13b")
#define MOV_R13B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X2A # movb (%rdx), %r13b")
#define MOV_R13B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X2F # movb (%rdi), %r13b")
#define MOV_R13B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X2E # movb (%rsi), %r13b")
#define MOV_R13B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X6D, 0X00 # movb (%rbp), %r13b")
#define MOV_R13B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X2C, 0X24 # movb (%rsp), %r13b")
#define MOV_R13B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X28 # movb (%r8), %r13b")
#define MOV_R13B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X29 # movb (%r9), %r13b")
#define MOV_R13B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X2A # movb (%r10), %r13b")
#define MOV_R13B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X2B # movb (%r11), %r13b")
#define MOV_R13B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X2C, 0X24 # movb (%r12), %r13b")
#define MOV_R13B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X6D, 0X00 # movb (%r13), %r13b")
#define MOV_R13B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X2E # movb (%r14), %r13b")
#define MOV_R13B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X2F # movb (%r15), %r13b")
#define MOV_R13B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X28 # movb (%eax), %r13b")
#define MOV_R13B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X2B # movb (%ebx), %r13b")
#define MOV_R13B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X29 # movb (%ecx), %r13b")
#define MOV_R13B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X2A # movb (%edx), %r13b")
#define MOV_R13B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X2F # movb (%edi), %r13b")
#define MOV_R13B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X2E # movb (%esi), %r13b")
#define MOV_R13B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X6D, 0X00 # movb (%ebp), %r13b")
#define MOV_R13B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X2C, 0X24 # movb (%esp), %r13b")

#define MOV_R14B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X30 # movb (%rax), %r14b")
#define MOV_R14B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X33 # movb (%rbx), %r14b")
#define MOV_R14B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X31 # movb (%rcx), %r14b")
#define MOV_R14B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X32 # movb (%rdx), %r14b")
#define MOV_R14B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X37 # movb (%rdi), %r14b")
#define MOV_R14B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X36 # movb (%rsi), %r14b")
#define MOV_R14B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X75, 0X00 # movb (%rbp), %r14b")
#define MOV_R14B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X34, 0X24 # movb (%rsp), %r14b")
#define MOV_R14B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X30 # movb (%r8), %r14b")
#define MOV_R14B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X31 # movb (%r9), %r14b")
#define MOV_R14B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X32 # movb (%r10), %r14b")
#define MOV_R14B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X33 # movb (%r11), %r14b")
#define MOV_R14B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X34, 0X24 # movb (%r12), %r14b")
#define MOV_R14B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X75, 0X00 # movb (%r13), %r14b")
#define MOV_R14B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X36 # movb (%r14), %r14b")
#define MOV_R14B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X37 # movb (%r15), %r14b")
#define MOV_R14B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X30 # movb (%eax), %r14b")
#define MOV_R14B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X33 # movb (%ebx), %r14b")
#define MOV_R14B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X31 # movb (%ecx), %r14b")
#define MOV_R14B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X32 # movb (%edx), %r14b")
#define MOV_R14B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X37 # movb (%edi), %r14b")
#define MOV_R14B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X36 # movb (%esi), %r14b")
#define MOV_R14B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X75, 0X00 # movb (%ebp), %r14b")
#define MOV_R14B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X34, 0X24 # movb (%esp), %r14b")

#define MOV_R15B_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8A, 0X38 # movb (%rax), %r15b")
#define MOV_R15B_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8A, 0X3B # movb (%rbx), %r15b")
#define MOV_R15B_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8A, 0X39 # movb (%rcx), %r15b")
#define MOV_R15B_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8A, 0X3A # movb (%rdx), %r15b")
#define MOV_R15B_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8A, 0X3F # movb (%rdi), %r15b")
#define MOV_R15B_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8A, 0X3E # movb (%rsi), %r15b")
#define MOV_R15B_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8A, 0X7D, 0X00 # movb (%rbp), %r15b")
#define MOV_R15B_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8A, 0X3C, 0X24 # movb (%rsp), %r15b")
#define MOV_R15B_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8A, 0X38 # movb (%r8), %r15b")
#define MOV_R15B_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8A, 0X39 # movb (%r9), %r15b")
#define MOV_R15B_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8A, 0X3A # movb (%r10), %r15b")
#define MOV_R15B_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8A, 0X3B # movb (%r11), %r15b")
#define MOV_R15B_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8A, 0X3C, 0X24 # movb (%r12), %r15b")
#define MOV_R15B_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8A, 0X7D, 0X00 # movb (%r13), %r15b")
#define MOV_R15B_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8A, 0X3E # movb (%r14), %r15b")
#define MOV_R15B_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8A, 0X3F # movb (%r15), %r15b")
#define MOV_R15B_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X38 # movb (%eax), %r15b")
#define MOV_R15B_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X3B # movb (%ebx), %r15b")
#define MOV_R15B_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X39 # movb (%ecx), %r15b")
#define MOV_R15B_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X3A # movb (%edx), %r15b")
#define MOV_R15B_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X3F # movb (%edi), %r15b")
#define MOV_R15B_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X3E # movb (%esi), %r15b")
#define MOV_R15B_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X7D, 0X00 # movb (%ebp), %r15b")
#define MOV_R15B_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X3C, 0X24 # movb (%esp), %r15b")

#define MOV_AL_TO_PTR_RAX CMT_ASM(".byte 0X88, 0X00 # movb %al, (%rax)")
#define MOV_AL_TO_PTR_RBX CMT_ASM(".byte 0X88, 0X03 # movb %al, (%rbx)")
#define MOV_AL_TO_PTR_RCX CMT_ASM(".byte 0X88, 0X01 # movb %al, (%rcx)")
#define MOV_AL_TO_PTR_RDX CMT_ASM(".byte 0X88, 0X02 # movb %al, (%rdx)")
#define MOV_AL_TO_PTR_RDI CMT_ASM(".byte 0X88, 0X07 # movb %al, (%rdi)")
#define MOV_AL_TO_PTR_RSI CMT_ASM(".byte 0X88, 0X06 # movb %al, (%rsi)")
#define MOV_AL_TO_PTR_RBP CMT_ASM(".byte 0X88, 0X45, 0X00 # movb %al, (%rbp)")
#define MOV_AL_TO_PTR_RSP CMT_ASM(".byte 0X88, 0X04, 0X24 # movb %al, (%rsp)")
#define MOV_AL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X00 # movb %al, (%r8)")
#define MOV_AL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X01 # movb %al, (%r9)")
#define MOV_AL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X02 # movb %al, (%r10)")
#define MOV_AL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X03 # movb %al, (%r11)")
#define MOV_AL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X04, 0X24 # movb %al, (%r12)")
#define MOV_AL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X45, 0X00 # movb %al, (%r13)")
#define MOV_AL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X06 # movb %al, (%r14)")
#define MOV_AL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X07 # movb %al, (%r15)")
#define MOV_AL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X88, 0X00 # movb %al, (%eax)")
#define MOV_AL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X88, 0X03 # movb %al, (%ebx)")
#define MOV_AL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X88, 0X01 # movb %al, (%ecx)")
#define MOV_AL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X88, 0X02 # movb %al, (%edx)")
#define MOV_AL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X88, 0X07 # movb %al, (%edi)")
#define MOV_AL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X88, 0X06 # movb %al, (%esi)")
#define MOV_AL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X88, 0X45, 0X00 # movb %al, (%ebp)")
#define MOV_AL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X88, 0X04, 0X24 # movb %al, (%esp)")

#define MOV_BL_TO_PTR_RAX CMT_ASM(".byte 0X88, 0X18 # movb %bl, (%rax)")
#define MOV_BL_TO_PTR_RBX CMT_ASM(".byte 0X88, 0X1B # movb %bl, (%rbx)")
#define MOV_BL_TO_PTR_RCX CMT_ASM(".byte 0X88, 0X19 # movb %bl, (%rcx)")
#define MOV_BL_TO_PTR_RDX CMT_ASM(".byte 0X88, 0X1A # movb %bl, (%rdx)")
#define MOV_BL_TO_PTR_RDI CMT_ASM(".byte 0X88, 0X1F # movb %bl, (%rdi)")
#define MOV_BL_TO_PTR_RSI CMT_ASM(".byte 0X88, 0X1E # movb %bl, (%rsi)")
#define MOV_BL_TO_PTR_RBP CMT_ASM(".byte 0X88, 0X5D, 0X00 # movb %bl, (%rbp)")
#define MOV_BL_TO_PTR_RSP CMT_ASM(".byte 0X88, 0X1C, 0X24 # movb %bl, (%rsp)")
#define MOV_BL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X18 # movb %bl, (%r8)")
#define MOV_BL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X19 # movb %bl, (%r9)")
#define MOV_BL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X1A # movb %bl, (%r10)")
#define MOV_BL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X1B # movb %bl, (%r11)")
#define MOV_BL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X1C, 0X24 # movb %bl, (%r12)")
#define MOV_BL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X5D, 0X00 # movb %bl, (%r13)")
#define MOV_BL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X1E # movb %bl, (%r14)")
#define MOV_BL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X1F # movb %bl, (%r15)")
#define MOV_BL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X88, 0X18 # movb %bl, (%eax)")
#define MOV_BL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X88, 0X1B # movb %bl, (%ebx)")
#define MOV_BL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X88, 0X19 # movb %bl, (%ecx)")
#define MOV_BL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X88, 0X1A # movb %bl, (%edx)")
#define MOV_BL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X88, 0X1F # movb %bl, (%edi)")
#define MOV_BL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X88, 0X1E # movb %bl, (%esi)")
#define MOV_BL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X88, 0X5D, 0X00 # movb %bl, (%ebp)")
#define MOV_BL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X88, 0X1C, 0X24 # movb %bl, (%esp)")

#define MOV_CL_TO_PTR_RAX CMT_ASM(".byte 0X88, 0X08 # movb %cl, (%rax)")
#define MOV_CL_TO_PTR_RBX CMT_ASM(".byte 0X88, 0X0B # movb %cl, (%rbx)")
#define MOV_CL_TO_PTR_RCX CMT_ASM(".byte 0X88, 0X09 # movb %cl, (%rcx)")
#define MOV_CL_TO_PTR_RDX CMT_ASM(".byte 0X88, 0X0A # movb %cl, (%rdx)")
#define MOV_CL_TO_PTR_RDI CMT_ASM(".byte 0X88, 0X0F # movb %cl, (%rdi)")
#define MOV_CL_TO_PTR_RSI CMT_ASM(".byte 0X88, 0X0E # movb %cl, (%rsi)")
#define MOV_CL_TO_PTR_RBP CMT_ASM(".byte 0X88, 0X4D, 0X00 # movb %cl, (%rbp)")
#define MOV_CL_TO_PTR_RSP CMT_ASM(".byte 0X88, 0X0C, 0X24 # movb %cl, (%rsp)")
#define MOV_CL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X08 # movb %cl, (%r8)")
#define MOV_CL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X09 # movb %cl, (%r9)")
#define MOV_CL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X0A # movb %cl, (%r10)")
#define MOV_CL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X0B # movb %cl, (%r11)")
#define MOV_CL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X0C, 0X24 # movb %cl, (%r12)")
#define MOV_CL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X4D, 0X00 # movb %cl, (%r13)")
#define MOV_CL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X0E # movb %cl, (%r14)")
#define MOV_CL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X0F # movb %cl, (%r15)")
#define MOV_CL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X88, 0X08 # movb %cl, (%eax)")
#define MOV_CL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X88, 0X0B # movb %cl, (%ebx)")
#define MOV_CL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X88, 0X09 # movb %cl, (%ecx)")
#define MOV_CL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X88, 0X0A # movb %cl, (%edx)")
#define MOV_CL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X88, 0X0F # movb %cl, (%edi)")
#define MOV_CL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X88, 0X0E # movb %cl, (%esi)")
#define MOV_CL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X88, 0X4D, 0X00 # movb %cl, (%ebp)")
#define MOV_CL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X88, 0X0C, 0X24 # movb %cl, (%esp)")

#define MOV_DL_TO_PTR_RAX CMT_ASM(".byte 0X88, 0X10 # movb %dl, (%rax)")
#define MOV_DL_TO_PTR_RBX CMT_ASM(".byte 0X88, 0X13 # movb %dl, (%rbx)")
#define MOV_DL_TO_PTR_RCX CMT_ASM(".byte 0X88, 0X11 # movb %dl, (%rcx)")
#define MOV_DL_TO_PTR_RDX CMT_ASM(".byte 0X88, 0X12 # movb %dl, (%rdx)")
#define MOV_DL_TO_PTR_RDI CMT_ASM(".byte 0X88, 0X17 # movb %dl, (%rdi)")
#define MOV_DL_TO_PTR_RSI CMT_ASM(".byte 0X88, 0X16 # movb %dl, (%rsi)")
#define MOV_DL_TO_PTR_RBP CMT_ASM(".byte 0X88, 0X55, 0X00 # movb %dl, (%rbp)")
#define MOV_DL_TO_PTR_RSP CMT_ASM(".byte 0X88, 0X14, 0X24 # movb %dl, (%rsp)")
#define MOV_DL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X10 # movb %dl, (%r8)")
#define MOV_DL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X11 # movb %dl, (%r9)")
#define MOV_DL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X12 # movb %dl, (%r10)")
#define MOV_DL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X13 # movb %dl, (%r11)")
#define MOV_DL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X14, 0X24 # movb %dl, (%r12)")
#define MOV_DL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X55, 0X00 # movb %dl, (%r13)")
#define MOV_DL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X16 # movb %dl, (%r14)")
#define MOV_DL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X17 # movb %dl, (%r15)")
#define MOV_DL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X88, 0X10 # movb %dl, (%eax)")
#define MOV_DL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X88, 0X13 # movb %dl, (%ebx)")
#define MOV_DL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X88, 0X11 # movb %dl, (%ecx)")
#define MOV_DL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X88, 0X12 # movb %dl, (%edx)")
#define MOV_DL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X88, 0X17 # movb %dl, (%edi)")
#define MOV_DL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X88, 0X16 # movb %dl, (%esi)")
#define MOV_DL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X88, 0X55, 0X00 # movb %dl, (%ebp)")
#define MOV_DL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X88, 0X14, 0X24 # movb %dl, (%esp)")

#define MOV_DIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X88, 0X38 # movb %dil, (%rax)")
#define MOV_DIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X88, 0X3B # movb %dil, (%rbx)")
#define MOV_DIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X88, 0X39 # movb %dil, (%rcx)")
#define MOV_DIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X88, 0X3A # movb %dil, (%rdx)")
#define MOV_DIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X88, 0X3F # movb %dil, (%rdi)")
#define MOV_DIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X88, 0X3E # movb %dil, (%rsi)")
#define MOV_DIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X88, 0X7D, 0X00 # movb %dil, (%rbp)")
#define MOV_DIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X88, 0X3C, 0X24 # movb %dil, (%rsp)")
#define MOV_DIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X38 # movb %dil, (%r8)")
#define MOV_DIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X39 # movb %dil, (%r9)")
#define MOV_DIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X3A # movb %dil, (%r10)")
#define MOV_DIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X3B # movb %dil, (%r11)")
#define MOV_DIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X3C, 0X24 # movb %dil, (%r12)")
#define MOV_DIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X7D, 0X00 # movb %dil, (%r13)")
#define MOV_DIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X3E # movb %dil, (%r14)")
#define MOV_DIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X3F # movb %dil, (%r15)")
#define MOV_DIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X38 # movb %dil, (%eax)")
#define MOV_DIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X3B # movb %dil, (%ebx)")
#define MOV_DIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X39 # movb %dil, (%ecx)")
#define MOV_DIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X3A # movb %dil, (%edx)")
#define MOV_DIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X3F # movb %dil, (%edi)")
#define MOV_DIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X3E # movb %dil, (%esi)")
#define MOV_DIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X7D, 0X00 # movb %dil, (%ebp)")
#define MOV_DIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X3C, 0X24 # movb %dil, (%esp)")

#define MOV_SIL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X88, 0X30 # movb %sil, (%rax)")
#define MOV_SIL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X88, 0X33 # movb %sil, (%rbx)")
#define MOV_SIL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X88, 0X31 # movb %sil, (%rcx)")
#define MOV_SIL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X88, 0X32 # movb %sil, (%rdx)")
#define MOV_SIL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X88, 0X37 # movb %sil, (%rdi)")
#define MOV_SIL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X88, 0X36 # movb %sil, (%rsi)")
#define MOV_SIL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X88, 0X75, 0X00 # movb %sil, (%rbp)")
#define MOV_SIL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X88, 0X34, 0X24 # movb %sil, (%rsp)")
#define MOV_SIL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X30 # movb %sil, (%r8)")
#define MOV_SIL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X31 # movb %sil, (%r9)")
#define MOV_SIL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X32 # movb %sil, (%r10)")
#define MOV_SIL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X33 # movb %sil, (%r11)")
#define MOV_SIL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X34, 0X24 # movb %sil, (%r12)")
#define MOV_SIL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X75, 0X00 # movb %sil, (%r13)")
#define MOV_SIL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X36 # movb %sil, (%r14)")
#define MOV_SIL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X37 # movb %sil, (%r15)")
#define MOV_SIL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X30 # movb %sil, (%eax)")
#define MOV_SIL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X33 # movb %sil, (%ebx)")
#define MOV_SIL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X31 # movb %sil, (%ecx)")
#define MOV_SIL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X32 # movb %sil, (%edx)")
#define MOV_SIL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X37 # movb %sil, (%edi)")
#define MOV_SIL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X36 # movb %sil, (%esi)")
#define MOV_SIL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X75, 0X00 # movb %sil, (%ebp)")
#define MOV_SIL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X34, 0X24 # movb %sil, (%esp)")

#define MOV_BPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X88, 0X28 # movb %bpl, (%rax)")
#define MOV_BPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X88, 0X2B # movb %bpl, (%rbx)")
#define MOV_BPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X88, 0X29 # movb %bpl, (%rcx)")
#define MOV_BPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X88, 0X2A # movb %bpl, (%rdx)")
#define MOV_BPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X88, 0X2F # movb %bpl, (%rdi)")
#define MOV_BPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X88, 0X2E # movb %bpl, (%rsi)")
#define MOV_BPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X88, 0X6D, 0X00 # movb %bpl, (%rbp)")
#define MOV_BPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X88, 0X2C, 0X24 # movb %bpl, (%rsp)")
#define MOV_BPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X28 # movb %bpl, (%r8)")
#define MOV_BPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X29 # movb %bpl, (%r9)")
#define MOV_BPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X2A # movb %bpl, (%r10)")
#define MOV_BPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X2B # movb %bpl, (%r11)")
#define MOV_BPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X2C, 0X24 # movb %bpl, (%r12)")
#define MOV_BPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X6D, 0X00 # movb %bpl, (%r13)")
#define MOV_BPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X2E # movb %bpl, (%r14)")
#define MOV_BPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X2F # movb %bpl, (%r15)")
#define MOV_BPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X28 # movb %bpl, (%eax)")
#define MOV_BPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X2B # movb %bpl, (%ebx)")
#define MOV_BPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X29 # movb %bpl, (%ecx)")
#define MOV_BPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X2A # movb %bpl, (%edx)")
#define MOV_BPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X2F # movb %bpl, (%edi)")
#define MOV_BPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X2E # movb %bpl, (%esi)")
#define MOV_BPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X6D, 0X00 # movb %bpl, (%ebp)")
#define MOV_BPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X2C, 0X24 # movb %bpl, (%esp)")

#define MOV_SPL_TO_PTR_RAX CMT_ASM(".byte 0X40, 0X88, 0X20 # movb %spl, (%rax)")
#define MOV_SPL_TO_PTR_RBX CMT_ASM(".byte 0X40, 0X88, 0X23 # movb %spl, (%rbx)")
#define MOV_SPL_TO_PTR_RCX CMT_ASM(".byte 0X40, 0X88, 0X21 # movb %spl, (%rcx)")
#define MOV_SPL_TO_PTR_RDX CMT_ASM(".byte 0X40, 0X88, 0X22 # movb %spl, (%rdx)")
#define MOV_SPL_TO_PTR_RDI CMT_ASM(".byte 0X40, 0X88, 0X27 # movb %spl, (%rdi)")
#define MOV_SPL_TO_PTR_RSI CMT_ASM(".byte 0X40, 0X88, 0X26 # movb %spl, (%rsi)")
#define MOV_SPL_TO_PTR_RBP CMT_ASM(".byte 0X40, 0X88, 0X65, 0X00 # movb %spl, (%rbp)")
#define MOV_SPL_TO_PTR_RSP CMT_ASM(".byte 0X40, 0X88, 0X24, 0X24 # movb %spl, (%rsp)")
#define MOV_SPL_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X88, 0X20 # movb %spl, (%r8)")
#define MOV_SPL_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X88, 0X21 # movb %spl, (%r9)")
#define MOV_SPL_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X88, 0X22 # movb %spl, (%r10)")
#define MOV_SPL_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X88, 0X23 # movb %spl, (%r11)")
#define MOV_SPL_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X88, 0X24, 0X24 # movb %spl, (%r12)")
#define MOV_SPL_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X88, 0X65, 0X00 # movb %spl, (%r13)")
#define MOV_SPL_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X88, 0X26 # movb %spl, (%r14)")
#define MOV_SPL_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X88, 0X27 # movb %spl, (%r15)")
#define MOV_SPL_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X20 # movb %spl, (%eax)")
#define MOV_SPL_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X23 # movb %spl, (%ebx)")
#define MOV_SPL_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X21 # movb %spl, (%ecx)")
#define MOV_SPL_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X40, 0X88, 0X22 # movb %spl, (%edx)")
#define MOV_SPL_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X27 # movb %spl, (%edi)")
#define MOV_SPL_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X40, 0X88, 0X26 # movb %spl, (%esi)")
#define MOV_SPL_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X65, 0X00 # movb %spl, (%ebp)")
#define MOV_SPL_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X40, 0X88, 0X24, 0X24 # movb %spl, (%esp)")

#define MOV_R8B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X00 # movb %r8b, (%rax)")
#define MOV_R8B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X03 # movb %r8b, (%rbx)")
#define MOV_R8B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X01 # movb %r8b, (%rcx)")
#define MOV_R8B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X02 # movb %r8b, (%rdx)")
#define MOV_R8B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X07 # movb %r8b, (%rdi)")
#define MOV_R8B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X06 # movb %r8b, (%rsi)")
#define MOV_R8B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X45, 0X00 # movb %r8b, (%rbp)")
#define MOV_R8B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X04, 0X24 # movb %r8b, (%rsp)")
#define MOV_R8B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X00 # movb %r8b, (%r8)")
#define MOV_R8B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X01 # movb %r8b, (%r9)")
#define MOV_R8B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X02 # movb %r8b, (%r10)")
#define MOV_R8B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X03 # movb %r8b, (%r11)")
#define MOV_R8B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X04, 0X24 # movb %r8b, (%r12)")
#define MOV_R8B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X45, 0X00 # movb %r8b, (%r13)")
#define MOV_R8B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X06 # movb %r8b, (%r14)")
#define MOV_R8B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X07 # movb %r8b, (%r15)")
#define MOV_R8B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X00 # movb %r8b, (%eax)")
#define MOV_R8B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X03 # movb %r8b, (%ebx)")
#define MOV_R8B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X01 # movb %r8b, (%ecx)")
#define MOV_R8B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X02 # movb %r8b, (%edx)")
#define MOV_R8B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X07 # movb %r8b, (%edi)")
#define MOV_R8B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X06 # movb %r8b, (%esi)")
#define MOV_R8B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X45, 0X00 # movb %r8b, (%ebp)")
#define MOV_R8B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X04, 0X24 # movb %r8b, (%esp)")

#define MOV_R9B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X08 # movb %r9b, (%rax)")
#define MOV_R9B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X0B # movb %r9b, (%rbx)")
#define MOV_R9B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X09 # movb %r9b, (%rcx)")
#define MOV_R9B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X0A # movb %r9b, (%rdx)")
#define MOV_R9B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X0F # movb %r9b, (%rdi)")
#define MOV_R9B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X0E # movb %r9b, (%rsi)")
#define MOV_R9B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X4D, 0X00 # movb %r9b, (%rbp)")
#define MOV_R9B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X0C, 0X24 # movb %r9b, (%rsp)")
#define MOV_R9B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X08 # movb %r9b, (%r8)")
#define MOV_R9B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X09 # movb %r9b, (%r9)")
#define MOV_R9B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X0A # movb %r9b, (%r10)")
#define MOV_R9B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X0B # movb %r9b, (%r11)")
#define MOV_R9B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X0C, 0X24 # movb %r9b, (%r12)")
#define MOV_R9B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X4D, 0X00 # movb %r9b, (%r13)")
#define MOV_R9B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X0E # movb %r9b, (%r14)")
#define MOV_R9B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X0F # movb %r9b, (%r15)")
#define MOV_R9B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X08 # movb %r9b, (%eax)")
#define MOV_R9B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X0B # movb %r9b, (%ebx)")
#define MOV_R9B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X09 # movb %r9b, (%ecx)")
#define MOV_R9B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X0A # movb %r9b, (%edx)")
#define MOV_R9B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X0F # movb %r9b, (%edi)")
#define MOV_R9B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X0E # movb %r9b, (%esi)")
#define MOV_R9B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X4D, 0X00 # movb %r9b, (%ebp)")
#define MOV_R9B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X0C, 0X24 # movb %r9b, (%esp)")

#define MOV_R10B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X10 # movb %r10b, (%rax)")
#define MOV_R10B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X13 # movb %r10b, (%rbx)")
#define MOV_R10B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X11 # movb %r10b, (%rcx)")
#define MOV_R10B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X12 # movb %r10b, (%rdx)")
#define MOV_R10B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X17 # movb %r10b, (%rdi)")
#define MOV_R10B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X16 # movb %r10b, (%rsi)")
#define MOV_R10B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X55, 0X00 # movb %r10b, (%rbp)")
#define MOV_R10B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X14, 0X24 # movb %r10b, (%rsp)")
#define MOV_R10B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X10 # movb %r10b, (%r8)")
#define MOV_R10B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X11 # movb %r10b, (%r9)")
#define MOV_R10B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X12 # movb %r10b, (%r10)")
#define MOV_R10B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X13 # movb %r10b, (%r11)")
#define MOV_R10B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X14, 0X24 # movb %r10b, (%r12)")
#define MOV_R10B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X55, 0X00 # movb %r10b, (%r13)")
#define MOV_R10B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X16 # movb %r10b, (%r14)")
#define MOV_R10B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X17 # movb %r10b, (%r15)")
#define MOV_R10B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X10 # movb %r10b, (%eax)")
#define MOV_R10B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X13 # movb %r10b, (%ebx)")
#define MOV_R10B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X11 # movb %r10b, (%ecx)")
#define MOV_R10B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X12 # movb %r10b, (%edx)")
#define MOV_R10B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X17 # movb %r10b, (%edi)")
#define MOV_R10B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X16 # movb %r10b, (%esi)")
#define MOV_R10B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X55, 0X00 # movb %r10b, (%ebp)")
#define MOV_R10B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X14, 0X24 # movb %r10b, (%esp)")

#define MOV_R11B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X18 # movb %r11b, (%rax)")
#define MOV_R11B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X1B # movb %r11b, (%rbx)")
#define MOV_R11B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X19 # movb %r11b, (%rcx)")
#define MOV_R11B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X1A # movb %r11b, (%rdx)")
#define MOV_R11B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X1F # movb %r11b, (%rdi)")
#define MOV_R11B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X1E # movb %r11b, (%rsi)")
#define MOV_R11B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X5D, 0X00 # movb %r11b, (%rbp)")
#define MOV_R11B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X1C, 0X24 # movb %r11b, (%rsp)")
#define MOV_R11B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X18 # movb %r11b, (%r8)")
#define MOV_R11B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X19 # movb %r11b, (%r9)")
#define MOV_R11B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X1A # movb %r11b, (%r10)")
#define MOV_R11B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X1B # movb %r11b, (%r11)")
#define MOV_R11B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X1C, 0X24 # movb %r11b, (%r12)")
#define MOV_R11B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X5D, 0X00 # movb %r11b, (%r13)")
#define MOV_R11B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X1E # movb %r11b, (%r14)")
#define MOV_R11B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X1F # movb %r11b, (%r15)")
#define MOV_R11B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X18 # movb %r11b, (%eax)")
#define MOV_R11B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X1B # movb %r11b, (%ebx)")
#define MOV_R11B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X19 # movb %r11b, (%ecx)")
#define MOV_R11B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X1A # movb %r11b, (%edx)")
#define MOV_R11B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X1F # movb %r11b, (%edi)")
#define MOV_R11B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X1E # movb %r11b, (%esi)")
#define MOV_R11B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X5D, 0X00 # movb %r11b, (%ebp)")
#define MOV_R11B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X1C, 0X24 # movb %r11b, (%esp)")

#define MOV_R12B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X20 # movb %r12b, (%rax)")
#define MOV_R12B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X23 # movb %r12b, (%rbx)")
#define MOV_R12B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X21 # movb %r12b, (%rcx)")
#define MOV_R12B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X22 # movb %r12b, (%rdx)")
#define MOV_R12B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X27 # movb %r12b, (%rdi)")
#define MOV_R12B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X26 # movb %r12b, (%rsi)")
#define MOV_R12B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X65, 0X00 # movb %r12b, (%rbp)")
#define MOV_R12B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X24, 0X24 # movb %r12b, (%rsp)")
#define MOV_R12B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X20 # movb %r12b, (%r8)")
#define MOV_R12B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X21 # movb %r12b, (%r9)")
#define MOV_R12B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X22 # movb %r12b, (%r10)")
#define MOV_R12B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X23 # movb %r12b, (%r11)")
#define MOV_R12B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X24, 0X24 # movb %r12b, (%r12)")
#define MOV_R12B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X65, 0X00 # movb %r12b, (%r13)")
#define MOV_R12B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X26 # movb %r12b, (%r14)")
#define MOV_R12B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X27 # movb %r12b, (%r15)")
#define MOV_R12B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X20 # movb %r12b, (%eax)")
#define MOV_R12B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X23 # movb %r12b, (%ebx)")
#define MOV_R12B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X21 # movb %r12b, (%ecx)")
#define MOV_R12B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X22 # movb %r12b, (%edx)")
#define MOV_R12B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X27 # movb %r12b, (%edi)")
#define MOV_R12B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X26 # movb %r12b, (%esi)")
#define MOV_R12B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X65, 0X00 # movb %r12b, (%ebp)")
#define MOV_R12B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X24, 0X24 # movb %r12b, (%esp)")

#define MOV_R13B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X28 # movb %r13b, (%rax)")
#define MOV_R13B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X2B # movb %r13b, (%rbx)")
#define MOV_R13B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X29 # movb %r13b, (%rcx)")
#define MOV_R13B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X2A # movb %r13b, (%rdx)")
#define MOV_R13B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X2F # movb %r13b, (%rdi)")
#define MOV_R13B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X2E # movb %r13b, (%rsi)")
#define MOV_R13B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X6D, 0X00 # movb %r13b, (%rbp)")
#define MOV_R13B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X2C, 0X24 # movb %r13b, (%rsp)")
#define MOV_R13B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X28 # movb %r13b, (%r8)")
#define MOV_R13B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X29 # movb %r13b, (%r9)")
#define MOV_R13B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X2A # movb %r13b, (%r10)")
#define MOV_R13B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X2B # movb %r13b, (%r11)")
#define MOV_R13B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X2C, 0X24 # movb %r13b, (%r12)")
#define MOV_R13B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X6D, 0X00 # movb %r13b, (%r13)")
#define MOV_R13B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X2E # movb %r13b, (%r14)")
#define MOV_R13B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X2F # movb %r13b, (%r15)")
#define MOV_R13B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X28 # movb %r13b, (%eax)")
#define MOV_R13B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X2B # movb %r13b, (%ebx)")
#define MOV_R13B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X29 # movb %r13b, (%ecx)")
#define MOV_R13B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X2A # movb %r13b, (%edx)")
#define MOV_R13B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X2F # movb %r13b, (%edi)")
#define MOV_R13B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X2E # movb %r13b, (%esi)")
#define MOV_R13B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X6D, 0X00 # movb %r13b, (%ebp)")
#define MOV_R13B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X2C, 0X24 # movb %r13b, (%esp)")

#define MOV_R14B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X30 # movb %r14b, (%rax)")
#define MOV_R14B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X33 # movb %r14b, (%rbx)")
#define MOV_R14B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X31 # movb %r14b, (%rcx)")
#define MOV_R14B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X32 # movb %r14b, (%rdx)")
#define MOV_R14B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X37 # movb %r14b, (%rdi)")
#define MOV_R14B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X36 # movb %r14b, (%rsi)")
#define MOV_R14B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X75, 0X00 # movb %r14b, (%rbp)")
#define MOV_R14B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X34, 0X24 # movb %r14b, (%rsp)")
#define MOV_R14B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X30 # movb %r14b, (%r8)")
#define MOV_R14B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X31 # movb %r14b, (%r9)")
#define MOV_R14B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X32 # movb %r14b, (%r10)")
#define MOV_R14B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X33 # movb %r14b, (%r11)")
#define MOV_R14B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X34, 0X24 # movb %r14b, (%r12)")
#define MOV_R14B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X75, 0X00 # movb %r14b, (%r13)")
#define MOV_R14B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X36 # movb %r14b, (%r14)")
#define MOV_R14B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X37 # movb %r14b, (%r15)")
#define MOV_R14B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X30 # movb %r14b, (%eax)")
#define MOV_R14B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X33 # movb %r14b, (%ebx)")
#define MOV_R14B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X31 # movb %r14b, (%ecx)")
#define MOV_R14B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X32 # movb %r14b, (%edx)")
#define MOV_R14B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X37 # movb %r14b, (%edi)")
#define MOV_R14B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X36 # movb %r14b, (%esi)")
#define MOV_R14B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X75, 0X00 # movb %r14b, (%ebp)")
#define MOV_R14B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X34, 0X24 # movb %r14b, (%esp)")

#define MOV_R15B_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X88, 0X38 # movb %r15b, (%rax)")
#define MOV_R15B_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X88, 0X3B # movb %r15b, (%rbx)")
#define MOV_R15B_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X88, 0X39 # movb %r15b, (%rcx)")
#define MOV_R15B_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X88, 0X3A # movb %r15b, (%rdx)")
#define MOV_R15B_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X88, 0X3F # movb %r15b, (%rdi)")
#define MOV_R15B_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X88, 0X3E # movb %r15b, (%rsi)")
#define MOV_R15B_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X88, 0X7D, 0X00 # movb %r15b, (%rbp)")
#define MOV_R15B_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X88, 0X3C, 0X24 # movb %r15b, (%rsp)")
#define MOV_R15B_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X88, 0X38 # movb %r15b, (%r8)")
#define MOV_R15B_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X88, 0X39 # movb %r15b, (%r9)")
#define MOV_R15B_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X88, 0X3A # movb %r15b, (%r10)")
#define MOV_R15B_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X88, 0X3B # movb %r15b, (%r11)")
#define MOV_R15B_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X88, 0X3C, 0X24 # movb %r15b, (%r12)")
#define MOV_R15B_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X88, 0X7D, 0X00 # movb %r15b, (%r13)")
#define MOV_R15B_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X88, 0X3E # movb %r15b, (%r14)")
#define MOV_R15B_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X88, 0X3F # movb %r15b, (%r15)")
#define MOV_R15B_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X38 # movb %r15b, (%eax)")
#define MOV_R15B_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X3B # movb %r15b, (%ebx)")
#define MOV_R15B_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X39 # movb %r15b, (%ecx)")
#define MOV_R15B_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X88, 0X3A # movb %r15b, (%edx)")
#define MOV_R15B_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X3F # movb %r15b, (%edi)")
#define MOV_R15B_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X88, 0X3E # movb %r15b, (%esi)")
#define MOV_R15B_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X7D, 0X00 # movb %r15b, (%ebp)")
#define MOV_R15B_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X88, 0X3C, 0X24 # movb %r15b, (%esp)")

#define MOV_AL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X80 # movb " _(VALUE) "(%rax), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X83 # movb " _(VALUE) "(%rbx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X81 # movb " _(VALUE) "(%rcx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X82 # movb " _(VALUE) "(%rdx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X87 # movb " _(VALUE) "(%rdi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X86 # movb " _(VALUE) "(%rsi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X85 # movb " _(VALUE) "(%rbp), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%rsp), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X80 # movb " _(VALUE) "(%r8), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X81 # movb " _(VALUE) "(%r9), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X82 # movb " _(VALUE) "(%r10), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X83 # movb " _(VALUE) "(%r11), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%r12), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X85 # movb " _(VALUE) "(%r13), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X86 # movb " _(VALUE) "(%r14), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X87 # movb " _(VALUE) "(%r15), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X80 # movb " _(VALUE) "(%eax), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X83 # movb " _(VALUE) "(%ebx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X81 # movb " _(VALUE) "(%ecx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X82 # movb " _(VALUE) "(%edx), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X87 # movb " _(VALUE) "(%edi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X86 # movb " _(VALUE) "(%esi), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X85 # movb " _(VALUE) "(%ebp), %al")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%esp), %al")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X98 # movb " _(VALUE) "(%rax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9B # movb " _(VALUE) "(%rbx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X99 # movb " _(VALUE) "(%rcx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9A # movb " _(VALUE) "(%rdx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9F # movb " _(VALUE) "(%rdi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9E # movb " _(VALUE) "(%rsi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9D # movb " _(VALUE) "(%rbp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%rsp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X98 # movb " _(VALUE) "(%r8), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X99 # movb " _(VALUE) "(%r9), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9A # movb " _(VALUE) "(%r10), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9B # movb " _(VALUE) "(%r11), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%r12), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9D # movb " _(VALUE) "(%r13), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9E # movb " _(VALUE) "(%r14), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X9F # movb " _(VALUE) "(%r15), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X98 # movb " _(VALUE) "(%eax), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9B # movb " _(VALUE) "(%ebx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X99 # movb " _(VALUE) "(%ecx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9A # movb " _(VALUE) "(%edx), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9F # movb " _(VALUE) "(%edi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9E # movb " _(VALUE) "(%esi), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9D # movb " _(VALUE) "(%ebp), %bl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%esp), %bl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_CL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X88 # movb " _(VALUE) "(%rax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8B # movb " _(VALUE) "(%rbx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X89 # movb " _(VALUE) "(%rcx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8A # movb " _(VALUE) "(%rdx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8F # movb " _(VALUE) "(%rdi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8E # movb " _(VALUE) "(%rsi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8D # movb " _(VALUE) "(%rbp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%rsp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X88 # movb " _(VALUE) "(%r8), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X89 # movb " _(VALUE) "(%r9), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8A # movb " _(VALUE) "(%r10), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8B # movb " _(VALUE) "(%r11), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%r12), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8D # movb " _(VALUE) "(%r13), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8E # movb " _(VALUE) "(%r14), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X8F # movb " _(VALUE) "(%r15), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X88 # movb " _(VALUE) "(%eax), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8B # movb " _(VALUE) "(%ebx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X89 # movb " _(VALUE) "(%ecx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8A # movb " _(VALUE) "(%edx), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8F # movb " _(VALUE) "(%edi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8E # movb " _(VALUE) "(%esi), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8D # movb " _(VALUE) "(%ebp), %cl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%esp), %cl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X90 # movb " _(VALUE) "(%rax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X93 # movb " _(VALUE) "(%rbx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X91 # movb " _(VALUE) "(%rcx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X92 # movb " _(VALUE) "(%rdx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X97 # movb " _(VALUE) "(%rdi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X96 # movb " _(VALUE) "(%rsi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X95 # movb " _(VALUE) "(%rbp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%rsp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X90 # movb " _(VALUE) "(%r8), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X91 # movb " _(VALUE) "(%r9), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X92 # movb " _(VALUE) "(%r10), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X93 # movb " _(VALUE) "(%r11), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%r12), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X95 # movb " _(VALUE) "(%r13), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X96 # movb " _(VALUE) "(%r14), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0X97 # movb " _(VALUE) "(%r15), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X90 # movb " _(VALUE) "(%eax), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X93 # movb " _(VALUE) "(%ebx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X91 # movb " _(VALUE) "(%ecx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X92 # movb " _(VALUE) "(%edx), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X97 # movb " _(VALUE) "(%edi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X96 # movb " _(VALUE) "(%esi), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X95 # movb " _(VALUE) "(%ebp), %dl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%esp), %dl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB8 # movb " _(VALUE) "(%rax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBB # movb " _(VALUE) "(%rbx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB9 # movb " _(VALUE) "(%rcx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBA # movb " _(VALUE) "(%rdx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBF # movb " _(VALUE) "(%rdi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBE # movb " _(VALUE) "(%rsi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBD # movb " _(VALUE) "(%rbp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%rsp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB8 # movb " _(VALUE) "(%r8), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB9 # movb " _(VALUE) "(%r9), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBA # movb " _(VALUE) "(%r10), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBB # movb " _(VALUE) "(%r11), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%r12), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBD # movb " _(VALUE) "(%r13), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBE # movb " _(VALUE) "(%r14), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XBF # movb " _(VALUE) "(%r15), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB8 # movb " _(VALUE) "(%eax), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBB # movb " _(VALUE) "(%ebx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB9 # movb " _(VALUE) "(%ecx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBA # movb " _(VALUE) "(%edx), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBF # movb " _(VALUE) "(%edi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBE # movb " _(VALUE) "(%esi), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBD # movb " _(VALUE) "(%ebp), %dil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%esp), %dil")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SIL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB0 # movb " _(VALUE) "(%rax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB3 # movb " _(VALUE) "(%rbx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB1 # movb " _(VALUE) "(%rcx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB2 # movb " _(VALUE) "(%rdx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB7 # movb " _(VALUE) "(%rdi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB6 # movb " _(VALUE) "(%rsi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB5 # movb " _(VALUE) "(%rbp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%rsp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB0 # movb " _(VALUE) "(%r8), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB1 # movb " _(VALUE) "(%r9), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB2 # movb " _(VALUE) "(%r10), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB3 # movb " _(VALUE) "(%r11), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%r12), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB5 # movb " _(VALUE) "(%r13), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB6 # movb " _(VALUE) "(%r14), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XB7 # movb " _(VALUE) "(%r15), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB0 # movb " _(VALUE) "(%eax), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB3 # movb " _(VALUE) "(%ebx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB1 # movb " _(VALUE) "(%ecx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB2 # movb " _(VALUE) "(%edx), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB7 # movb " _(VALUE) "(%edi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB6 # movb " _(VALUE) "(%esi), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB5 # movb " _(VALUE) "(%ebp), %sil")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%esp), %sil")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA8 # movb " _(VALUE) "(%rax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAB # movb " _(VALUE) "(%rbx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA9 # movb " _(VALUE) "(%rcx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAA # movb " _(VALUE) "(%rdx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAF # movb " _(VALUE) "(%rdi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAE # movb " _(VALUE) "(%rsi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAD # movb " _(VALUE) "(%rbp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%rsp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA8 # movb " _(VALUE) "(%r8), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA9 # movb " _(VALUE) "(%r9), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAA # movb " _(VALUE) "(%r10), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAB # movb " _(VALUE) "(%r11), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%r12), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAD # movb " _(VALUE) "(%r13), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAE # movb " _(VALUE) "(%r14), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XAF # movb " _(VALUE) "(%r15), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA8 # movb " _(VALUE) "(%eax), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAB # movb " _(VALUE) "(%ebx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA9 # movb " _(VALUE) "(%ecx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAA # movb " _(VALUE) "(%edx), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAF # movb " _(VALUE) "(%edi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAE # movb " _(VALUE) "(%esi), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAD # movb " _(VALUE) "(%ebp), %bpl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%esp), %bpl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SPL_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA0 # movb " _(VALUE) "(%rax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA3 # movb " _(VALUE) "(%rbx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA1 # movb " _(VALUE) "(%rcx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA2 # movb " _(VALUE) "(%rdx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA7 # movb " _(VALUE) "(%rdi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA6 # movb " _(VALUE) "(%rsi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA5 # movb " _(VALUE) "(%rbp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%rsp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA0 # movb " _(VALUE) "(%r8), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA1 # movb " _(VALUE) "(%r9), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA2 # movb " _(VALUE) "(%r10), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA3 # movb " _(VALUE) "(%r11), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%r12), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA5 # movb " _(VALUE) "(%r13), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA6 # movb " _(VALUE) "(%r14), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8A, 0XA7 # movb " _(VALUE) "(%r15), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA0 # movb " _(VALUE) "(%eax), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA3 # movb " _(VALUE) "(%ebx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA1 # movb " _(VALUE) "(%ecx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA2 # movb " _(VALUE) "(%edx), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA7 # movb " _(VALUE) "(%edi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA6 # movb " _(VALUE) "(%esi), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA5 # movb " _(VALUE) "(%ebp), %spl")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%esp), %spl")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X80 # movb " _(VALUE) "(%rax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X83 # movb " _(VALUE) "(%rbx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X81 # movb " _(VALUE) "(%rcx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X82 # movb " _(VALUE) "(%rdx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X87 # movb " _(VALUE) "(%rdi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X86 # movb " _(VALUE) "(%rsi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X85 # movb " _(VALUE) "(%rbp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%rsp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X80 # movb " _(VALUE) "(%r8), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X81 # movb " _(VALUE) "(%r9), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X82 # movb " _(VALUE) "(%r10), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X83 # movb " _(VALUE) "(%r11), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%r12), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X85 # movb " _(VALUE) "(%r13), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X86 # movb " _(VALUE) "(%r14), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X87 # movb " _(VALUE) "(%r15), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X80 # movb " _(VALUE) "(%eax), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X83 # movb " _(VALUE) "(%ebx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X81 # movb " _(VALUE) "(%ecx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X82 # movb " _(VALUE) "(%edx), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X87 # movb " _(VALUE) "(%edi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X86 # movb " _(VALUE) "(%esi), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X85 # movb " _(VALUE) "(%ebp), %r8b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X84, 0X24 # movb " _(VALUE) "(%esp), %r8b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X88 # movb " _(VALUE) "(%rax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8B # movb " _(VALUE) "(%rbx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X89 # movb " _(VALUE) "(%rcx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8A # movb " _(VALUE) "(%rdx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8F # movb " _(VALUE) "(%rdi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8E # movb " _(VALUE) "(%rsi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8D # movb " _(VALUE) "(%rbp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%rsp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X88 # movb " _(VALUE) "(%r8), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X89 # movb " _(VALUE) "(%r9), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8A # movb " _(VALUE) "(%r10), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8B # movb " _(VALUE) "(%r11), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%r12), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8D # movb " _(VALUE) "(%r13), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8E # movb " _(VALUE) "(%r14), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X8F # movb " _(VALUE) "(%r15), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X88 # movb " _(VALUE) "(%eax), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8B # movb " _(VALUE) "(%ebx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X89 # movb " _(VALUE) "(%ecx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8A # movb " _(VALUE) "(%edx), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8F # movb " _(VALUE) "(%edi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8E # movb " _(VALUE) "(%esi), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8D # movb " _(VALUE) "(%ebp), %r9b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X8C, 0X24 # movb " _(VALUE) "(%esp), %r9b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X90 # movb " _(VALUE) "(%rax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X93 # movb " _(VALUE) "(%rbx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X91 # movb " _(VALUE) "(%rcx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X92 # movb " _(VALUE) "(%rdx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X97 # movb " _(VALUE) "(%rdi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X96 # movb " _(VALUE) "(%rsi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X95 # movb " _(VALUE) "(%rbp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%rsp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X90 # movb " _(VALUE) "(%r8), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X91 # movb " _(VALUE) "(%r9), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X92 # movb " _(VALUE) "(%r10), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X93 # movb " _(VALUE) "(%r11), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%r12), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X95 # movb " _(VALUE) "(%r13), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X96 # movb " _(VALUE) "(%r14), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X97 # movb " _(VALUE) "(%r15), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X90 # movb " _(VALUE) "(%eax), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X93 # movb " _(VALUE) "(%ebx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X91 # movb " _(VALUE) "(%ecx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X92 # movb " _(VALUE) "(%edx), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X97 # movb " _(VALUE) "(%edi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X96 # movb " _(VALUE) "(%esi), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X95 # movb " _(VALUE) "(%ebp), %r10b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X94, 0X24 # movb " _(VALUE) "(%esp), %r10b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X98 # movb " _(VALUE) "(%rax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9B # movb " _(VALUE) "(%rbx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X99 # movb " _(VALUE) "(%rcx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9A # movb " _(VALUE) "(%rdx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9F # movb " _(VALUE) "(%rdi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9E # movb " _(VALUE) "(%rsi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9D # movb " _(VALUE) "(%rbp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%rsp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X98 # movb " _(VALUE) "(%r8), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X99 # movb " _(VALUE) "(%r9), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9A # movb " _(VALUE) "(%r10), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9B # movb " _(VALUE) "(%r11), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%r12), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9D # movb " _(VALUE) "(%r13), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9E # movb " _(VALUE) "(%r14), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0X9F # movb " _(VALUE) "(%r15), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X98 # movb " _(VALUE) "(%eax), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9B # movb " _(VALUE) "(%ebx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X99 # movb " _(VALUE) "(%ecx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9A # movb " _(VALUE) "(%edx), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9F # movb " _(VALUE) "(%edi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9E # movb " _(VALUE) "(%esi), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9D # movb " _(VALUE) "(%ebp), %r11b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0X9C, 0X24 # movb " _(VALUE) "(%esp), %r11b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA0 # movb " _(VALUE) "(%rax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA3 # movb " _(VALUE) "(%rbx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA1 # movb " _(VALUE) "(%rcx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA2 # movb " _(VALUE) "(%rdx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA7 # movb " _(VALUE) "(%rdi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA6 # movb " _(VALUE) "(%rsi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA5 # movb " _(VALUE) "(%rbp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%rsp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA0 # movb " _(VALUE) "(%r8), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA1 # movb " _(VALUE) "(%r9), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA2 # movb " _(VALUE) "(%r10), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA3 # movb " _(VALUE) "(%r11), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%r12), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA5 # movb " _(VALUE) "(%r13), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA6 # movb " _(VALUE) "(%r14), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA7 # movb " _(VALUE) "(%r15), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA0 # movb " _(VALUE) "(%eax), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA3 # movb " _(VALUE) "(%ebx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA1 # movb " _(VALUE) "(%ecx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA2 # movb " _(VALUE) "(%edx), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA7 # movb " _(VALUE) "(%edi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA6 # movb " _(VALUE) "(%esi), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA5 # movb " _(VALUE) "(%ebp), %r12b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA4, 0X24 # movb " _(VALUE) "(%esp), %r12b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA8 # movb " _(VALUE) "(%rax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAB # movb " _(VALUE) "(%rbx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XA9 # movb " _(VALUE) "(%rcx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAA # movb " _(VALUE) "(%rdx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAF # movb " _(VALUE) "(%rdi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAE # movb " _(VALUE) "(%rsi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAD # movb " _(VALUE) "(%rbp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%rsp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA8 # movb " _(VALUE) "(%r8), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XA9 # movb " _(VALUE) "(%r9), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAA # movb " _(VALUE) "(%r10), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAB # movb " _(VALUE) "(%r11), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%r12), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAD # movb " _(VALUE) "(%r13), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAE # movb " _(VALUE) "(%r14), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XAF # movb " _(VALUE) "(%r15), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA8 # movb " _(VALUE) "(%eax), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAB # movb " _(VALUE) "(%ebx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XA9 # movb " _(VALUE) "(%ecx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAA # movb " _(VALUE) "(%edx), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAF # movb " _(VALUE) "(%edi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAE # movb " _(VALUE) "(%esi), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAD # movb " _(VALUE) "(%ebp), %r13b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XAC, 0X24 # movb " _(VALUE) "(%esp), %r13b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB0 # movb " _(VALUE) "(%rax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB3 # movb " _(VALUE) "(%rbx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB1 # movb " _(VALUE) "(%rcx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB2 # movb " _(VALUE) "(%rdx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB7 # movb " _(VALUE) "(%rdi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB6 # movb " _(VALUE) "(%rsi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB5 # movb " _(VALUE) "(%rbp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%rsp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB0 # movb " _(VALUE) "(%r8), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB1 # movb " _(VALUE) "(%r9), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB2 # movb " _(VALUE) "(%r10), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB3 # movb " _(VALUE) "(%r11), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%r12), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB5 # movb " _(VALUE) "(%r13), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB6 # movb " _(VALUE) "(%r14), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB7 # movb " _(VALUE) "(%r15), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB0 # movb " _(VALUE) "(%eax), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB3 # movb " _(VALUE) "(%ebx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB1 # movb " _(VALUE) "(%ecx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB2 # movb " _(VALUE) "(%edx), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB7 # movb " _(VALUE) "(%edi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB6 # movb " _(VALUE) "(%esi), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB5 # movb " _(VALUE) "(%ebp), %r14b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB4, 0X24 # movb " _(VALUE) "(%esp), %r14b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15B_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB8 # movb " _(VALUE) "(%rax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBB # movb " _(VALUE) "(%rbx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XB9 # movb " _(VALUE) "(%rcx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBA # movb " _(VALUE) "(%rdx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBF # movb " _(VALUE) "(%rdi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBE # movb " _(VALUE) "(%rsi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBD # movb " _(VALUE) "(%rbp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%rsp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB8 # movb " _(VALUE) "(%r8), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XB9 # movb " _(VALUE) "(%r9), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBA # movb " _(VALUE) "(%r10), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBB # movb " _(VALUE) "(%r11), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%r12), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBD # movb " _(VALUE) "(%r13), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBE # movb " _(VALUE) "(%r14), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8A, 0XBF # movb " _(VALUE) "(%r15), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB8 # movb " _(VALUE) "(%eax), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBB # movb " _(VALUE) "(%ebx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XB9 # movb " _(VALUE) "(%ecx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBA # movb " _(VALUE) "(%edx), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBF # movb " _(VALUE) "(%edi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBE # movb " _(VALUE) "(%esi), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBD # movb " _(VALUE) "(%ebp), %r15b")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8A, 0XBC, 0X24 # movb " _(VALUE) "(%esp), %r15b")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X80 # movb %al, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X83 # movb %al, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X81 # movb %al, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X82 # movb %al, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X87 # movb %al, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X86 # movb %al, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X85 # movb %al, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X84, 0X24 # movb %al, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X80 # movb %al, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X81 # movb %al, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X82 # movb %al, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X83 # movb %al, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X84, 0X24 # movb %al, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X85 # movb %al, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X86 # movb %al, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X87 # movb %al, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X80 # movb %al, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X83 # movb %al, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X81 # movb %al, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X82 # movb %al, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X87 # movb %al, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X86 # movb %al, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X85 # movb %al, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X84, 0X24 # movb %al, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X98 # movb %bl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9B # movb %bl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X99 # movb %bl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9A # movb %bl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9F # movb %bl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9E # movb %bl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9D # movb %bl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X9C, 0X24 # movb %bl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X98 # movb %bl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X99 # movb %bl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9A # movb %bl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9B # movb %bl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9C, 0X24 # movb %bl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9D # movb %bl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9E # movb %bl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X9F # movb %bl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X98 # movb %bl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9B # movb %bl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X99 # movb %bl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9A # movb %bl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9F # movb %bl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9E # movb %bl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9D # movb %bl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X9C, 0X24 # movb %bl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_CL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X88 # movb %cl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8B # movb %cl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X89 # movb %cl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8A # movb %cl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8F # movb %cl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8E # movb %cl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8D # movb %cl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X8C, 0X24 # movb %cl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X88 # movb %cl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X89 # movb %cl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8A # movb %cl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8B # movb %cl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8C, 0X24 # movb %cl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8D # movb %cl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8E # movb %cl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X8F # movb %cl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X88 # movb %cl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8B # movb %cl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X89 # movb %cl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8A # movb %cl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8F # movb %cl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8E # movb %cl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8D # movb %cl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X8C, 0X24 # movb %cl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X90 # movb %dl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X93 # movb %dl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X91 # movb %dl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X88, 0X92 # movb %dl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X97 # movb %dl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X88, 0X96 # movb %dl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X95 # movb %dl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X88, 0X94, 0X24 # movb %dl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X90 # movb %dl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X91 # movb %dl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X92 # movb %dl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X93 # movb %dl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X94, 0X24 # movb %dl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X95 # movb %dl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X96 # movb %dl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0X97 # movb %dl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X90 # movb %dl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X93 # movb %dl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X91 # movb %dl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X92 # movb %dl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X97 # movb %dl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X96 # movb %dl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X95 # movb %dl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X88, 0X94, 0X24 # movb %dl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB8 # movb %dil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBB # movb %dil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB9 # movb %dil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBA # movb %dil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBF # movb %dil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBE # movb %dil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBD # movb %dil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XBC, 0X24 # movb %dil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB8 # movb %dil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB9 # movb %dil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBA # movb %dil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBB # movb %dil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBC, 0X24 # movb %dil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBD # movb %dil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBE # movb %dil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XBF # movb %dil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB8 # movb %dil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBB # movb %dil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB9 # movb %dil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBA # movb %dil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBF # movb %dil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBE # movb %dil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBD # movb %dil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XBC, 0X24 # movb %dil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SIL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB0 # movb %sil, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB3 # movb %sil, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB1 # movb %sil, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB2 # movb %sil, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB7 # movb %sil, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB6 # movb %sil, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB5 # movb %sil, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XB4, 0X24 # movb %sil, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB0 # movb %sil, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB1 # movb %sil, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB2 # movb %sil, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB3 # movb %sil, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB4, 0X24 # movb %sil, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB5 # movb %sil, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB6 # movb %sil, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XB7 # movb %sil, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB0 # movb %sil, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB3 # movb %sil, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB1 # movb %sil, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB2 # movb %sil, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB7 # movb %sil, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB6 # movb %sil, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB5 # movb %sil, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SIL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XB4, 0X24 # movb %sil, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA8 # movb %bpl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAB # movb %bpl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA9 # movb %bpl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAA # movb %bpl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAF # movb %bpl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAE # movb %bpl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAD # movb %bpl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XAC, 0X24 # movb %bpl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA8 # movb %bpl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA9 # movb %bpl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAA # movb %bpl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAB # movb %bpl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAC, 0X24 # movb %bpl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAD # movb %bpl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAE # movb %bpl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XAF # movb %bpl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA8 # movb %bpl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAB # movb %bpl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA9 # movb %bpl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAA # movb %bpl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAF # movb %bpl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAE # movb %bpl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAD # movb %bpl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XAC, 0X24 # movb %bpl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SPL_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA0 # movb %spl, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA3 # movb %spl, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA1 # movb %spl, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA2 # movb %spl, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA7 # movb %spl, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA6 # movb %spl, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA5 # movb %spl, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X40, 0X88, 0XA4, 0X24 # movb %spl, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA0 # movb %spl, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA1 # movb %spl, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA2 # movb %spl, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA3 # movb %spl, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA4, 0X24 # movb %spl, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA5 # movb %spl, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA6 # movb %spl, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X88, 0XA7 # movb %spl, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA0 # movb %spl, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA3 # movb %spl, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA1 # movb %spl, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA2 # movb %spl, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA7 # movb %spl, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA6 # movb %spl, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA5 # movb %spl, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SPL_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X40, 0X88, 0XA4, 0X24 # movb %spl, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X80 # movb %r8b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X83 # movb %r8b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X81 # movb %r8b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X82 # movb %r8b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X87 # movb %r8b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X86 # movb %r8b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X85 # movb %r8b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X84, 0X24 # movb %r8b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X80 # movb %r8b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X81 # movb %r8b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X82 # movb %r8b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X83 # movb %r8b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X84, 0X24 # movb %r8b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X85 # movb %r8b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X86 # movb %r8b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X87 # movb %r8b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X80 # movb %r8b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X83 # movb %r8b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X81 # movb %r8b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X82 # movb %r8b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X87 # movb %r8b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X86 # movb %r8b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X85 # movb %r8b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X84, 0X24 # movb %r8b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X88 # movb %r9b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8B # movb %r9b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X89 # movb %r9b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8A # movb %r9b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8F # movb %r9b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8E # movb %r9b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8D # movb %r9b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X8C, 0X24 # movb %r9b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X88 # movb %r9b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X89 # movb %r9b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8A # movb %r9b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8B # movb %r9b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8C, 0X24 # movb %r9b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8D # movb %r9b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8E # movb %r9b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X8F # movb %r9b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X88 # movb %r9b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8B # movb %r9b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X89 # movb %r9b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8A # movb %r9b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8F # movb %r9b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8E # movb %r9b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8D # movb %r9b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X8C, 0X24 # movb %r9b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X90 # movb %r10b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X93 # movb %r10b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X91 # movb %r10b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X92 # movb %r10b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X97 # movb %r10b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X96 # movb %r10b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X95 # movb %r10b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X94, 0X24 # movb %r10b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X90 # movb %r10b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X91 # movb %r10b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X92 # movb %r10b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X93 # movb %r10b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X94, 0X24 # movb %r10b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X95 # movb %r10b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X96 # movb %r10b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X97 # movb %r10b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X90 # movb %r10b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X93 # movb %r10b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X91 # movb %r10b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X92 # movb %r10b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X97 # movb %r10b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X96 # movb %r10b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X95 # movb %r10b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X94, 0X24 # movb %r10b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X98 # movb %r11b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9B # movb %r11b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X99 # movb %r11b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9A # movb %r11b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9F # movb %r11b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9E # movb %r11b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9D # movb %r11b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0X9C, 0X24 # movb %r11b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X98 # movb %r11b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X99 # movb %r11b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9A # movb %r11b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9B # movb %r11b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9C, 0X24 # movb %r11b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9D # movb %r11b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9E # movb %r11b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0X9F # movb %r11b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X98 # movb %r11b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9B # movb %r11b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X99 # movb %r11b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9A # movb %r11b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9F # movb %r11b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9E # movb %r11b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9D # movb %r11b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0X9C, 0X24 # movb %r11b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA0 # movb %r12b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA3 # movb %r12b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA1 # movb %r12b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA2 # movb %r12b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA7 # movb %r12b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA6 # movb %r12b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA5 # movb %r12b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA4, 0X24 # movb %r12b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA0 # movb %r12b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA1 # movb %r12b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA2 # movb %r12b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA3 # movb %r12b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA4, 0X24 # movb %r12b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA5 # movb %r12b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA6 # movb %r12b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA7 # movb %r12b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA0 # movb %r12b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA3 # movb %r12b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA1 # movb %r12b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA2 # movb %r12b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA7 # movb %r12b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA6 # movb %r12b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA5 # movb %r12b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA4, 0X24 # movb %r12b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA8 # movb %r13b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAB # movb %r13b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XA9 # movb %r13b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAA # movb %r13b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAF # movb %r13b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAE # movb %r13b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAD # movb %r13b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XAC, 0X24 # movb %r13b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA8 # movb %r13b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XA9 # movb %r13b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAA # movb %r13b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAB # movb %r13b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAC, 0X24 # movb %r13b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAD # movb %r13b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAE # movb %r13b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XAF # movb %r13b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA8 # movb %r13b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAB # movb %r13b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XA9 # movb %r13b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAA # movb %r13b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAF # movb %r13b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAE # movb %r13b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAD # movb %r13b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XAC, 0X24 # movb %r13b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB0 # movb %r14b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB3 # movb %r14b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB1 # movb %r14b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB2 # movb %r14b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB7 # movb %r14b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB6 # movb %r14b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB5 # movb %r14b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB4, 0X24 # movb %r14b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB0 # movb %r14b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB1 # movb %r14b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB2 # movb %r14b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB3 # movb %r14b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB4, 0X24 # movb %r14b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB5 # movb %r14b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB6 # movb %r14b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB7 # movb %r14b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB0 # movb %r14b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB3 # movb %r14b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB1 # movb %r14b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB2 # movb %r14b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB7 # movb %r14b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB6 # movb %r14b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB5 # movb %r14b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB4, 0X24 # movb %r14b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15B_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB8 # movb %r15b, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBB # movb %r15b, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XB9 # movb %r15b, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBA # movb %r15b, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBF # movb %r15b, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBE # movb %r15b, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBD # movb %r15b, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X88, 0XBC, 0X24 # movb %r15b, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB8 # movb %r15b, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XB9 # movb %r15b, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBA # movb %r15b, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBB # movb %r15b, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBC, 0X24 # movb %r15b, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBD # movb %r15b, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBE # movb %r15b, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X88, 0XBF # movb %r15b, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB8 # movb %r15b, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBB # movb %r15b, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XB9 # movb %r15b, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBA # movb %r15b, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBF # movb %r15b, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBE # movb %r15b, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBD # movb %r15b, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15B_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X88, 0XBC, 0X24 # movb %r15b, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define MOV_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X06 # movw (" _(VALUE) "), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X1E # movw (" _(VALUE) "), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X0E # movw (" _(VALUE) "), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X16 # movw (" _(VALUE) "), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X3E # movw (" _(VALUE) "), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X36 # movw (" _(VALUE) "), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X2E # movw (" _(VALUE) "), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X26 # movw (" _(VALUE) "), %sp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X06 # movw %ax, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X1E # movw %bx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X0E # movw %cx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X16 # movw %dx, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X3E # movw %di, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X36 # movw %si, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X2E # movw %bp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X26 # movw %sp, (" _(VALUE) ")")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AX_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X07 # movw (%bx), %ax")
#define MOV_AX_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X46, 0X00 # movw (%bp), %ax")
#define MOV_AX_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X04 # movw (%si), %ax")
#define MOV_AX_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X05 # movw (%di), %ax")

#define MOV_BX_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X1F # movw (%bx), %bx")
#define MOV_BX_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X5E, 0X00 # movw (%bp), %bx")
#define MOV_BX_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X1C # movw (%si), %bx")
#define MOV_BX_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X1D # movw (%di), %bx")

#define MOV_CX_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X0F # movw (%bx), %cx")
#define MOV_CX_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X4E, 0X00 # movw (%bp), %cx")
#define MOV_CX_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X0C # movw (%si), %cx")
#define MOV_CX_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X0D # movw (%di), %cx")

#define MOV_DX_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X17 # movw (%bx), %dx")
#define MOV_DX_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X56, 0X00 # movw (%bp), %dx")
#define MOV_DX_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X14 # movw (%si), %dx")
#define MOV_DX_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X15 # movw (%di), %dx")

#define MOV_DI_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X3F # movw (%bx), %di")
#define MOV_DI_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X7E, 0X00 # movw (%bp), %di")
#define MOV_DI_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X3C # movw (%si), %di")
#define MOV_DI_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X3D # movw (%di), %di")

#define MOV_SI_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X37 # movw (%bx), %si")
#define MOV_SI_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X76, 0X00 # movw (%bp), %si")
#define MOV_SI_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X34 # movw (%si), %si")
#define MOV_SI_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X35 # movw (%di), %si")

#define MOV_BP_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X2F # movw (%bx), %bp")
#define MOV_BP_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X6E, 0X00 # movw (%bp), %bp")
#define MOV_BP_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X2C # movw (%si), %bp")
#define MOV_BP_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X2D # movw (%di), %bp")

#define MOV_SP_FROM_PTR_BX CMT_ASM(".byte 0X8B, 0X27 # movw (%bx), %sp")
#define MOV_SP_FROM_PTR_BP CMT_ASM(".byte 0X8B, 0X66, 0X00 # movw (%bp), %sp")
#define MOV_SP_FROM_PTR_SI CMT_ASM(".byte 0X8B, 0X24 # movw (%si), %sp")
#define MOV_SP_FROM_PTR_DI CMT_ASM(".byte 0X8B, 0X25 # movw (%di), %sp")

#define MOV_AX_TO_PTR_BX CMT_ASM(".byte 0X89, 0X07 # movw %ax, (%bx)")
#define MOV_AX_TO_PTR_BP CMT_ASM(".byte 0X89, 0X46, 0X00 # movw %ax, (%bp)")
#define MOV_AX_TO_PTR_SI CMT_ASM(".byte 0X89, 0X04 # movw %ax, (%si)")
#define MOV_AX_TO_PTR_DI CMT_ASM(".byte 0X89, 0X05 # movw %ax, (%di)")

#define MOV_BX_TO_PTR_BX CMT_ASM(".byte 0X89, 0X1F # movw %bx, (%bx)")
#define MOV_BX_TO_PTR_BP CMT_ASM(".byte 0X89, 0X5E, 0X00 # movw %bx, (%bp)")
#define MOV_BX_TO_PTR_SI CMT_ASM(".byte 0X89, 0X1C # movw %bx, (%si)")
#define MOV_BX_TO_PTR_DI CMT_ASM(".byte 0X89, 0X1D # movw %bx, (%di)")

#define MOV_CX_TO_PTR_BX CMT_ASM(".byte 0X89, 0X0F # movw %cx, (%bx)")
#define MOV_CX_TO_PTR_BP CMT_ASM(".byte 0X89, 0X4E, 0X00 # movw %cx, (%bp)")
#define MOV_CX_TO_PTR_SI CMT_ASM(".byte 0X89, 0X0C # movw %cx, (%si)")
#define MOV_CX_TO_PTR_DI CMT_ASM(".byte 0X89, 0X0D # movw %cx, (%di)")

#define MOV_DX_TO_PTR_BX CMT_ASM(".byte 0X89, 0X17 # movw %dx, (%bx)")
#define MOV_DX_TO_PTR_BP CMT_ASM(".byte 0X89, 0X56, 0X00 # movw %dx, (%bp)")
#define MOV_DX_TO_PTR_SI CMT_ASM(".byte 0X89, 0X14 # movw %dx, (%si)")
#define MOV_DX_TO_PTR_DI CMT_ASM(".byte 0X89, 0X15 # movw %dx, (%di)")

#define MOV_DI_TO_PTR_BX CMT_ASM(".byte 0X89, 0X3F # movw %di, (%bx)")
#define MOV_DI_TO_PTR_BP CMT_ASM(".byte 0X89, 0X7E, 0X00 # movw %di, (%bp)")
#define MOV_DI_TO_PTR_SI CMT_ASM(".byte 0X89, 0X3C # movw %di, (%si)")
#define MOV_DI_TO_PTR_DI CMT_ASM(".byte 0X89, 0X3D # movw %di, (%di)")

#define MOV_SI_TO_PTR_BX CMT_ASM(".byte 0X89, 0X37 # movw %si, (%bx)")
#define MOV_SI_TO_PTR_BP CMT_ASM(".byte 0X89, 0X76, 0X00 # movw %si, (%bp)")
#define MOV_SI_TO_PTR_SI CMT_ASM(".byte 0X89, 0X34 # movw %si, (%si)")
#define MOV_SI_TO_PTR_DI CMT_ASM(".byte 0X89, 0X35 # movw %si, (%di)")

#define MOV_BP_TO_PTR_BX CMT_ASM(".byte 0X89, 0X2F # movw %bp, (%bx)")
#define MOV_BP_TO_PTR_BP CMT_ASM(".byte 0X89, 0X6E, 0X00 # movw %bp, (%bp)")
#define MOV_BP_TO_PTR_SI CMT_ASM(".byte 0X89, 0X2C # movw %bp, (%si)")
#define MOV_BP_TO_PTR_DI CMT_ASM(".byte 0X89, 0X2D # movw %bp, (%di)")

#define MOV_SP_TO_PTR_BX CMT_ASM(".byte 0X89, 0X27 # movw %sp, (%bx)")
#define MOV_SP_TO_PTR_BP CMT_ASM(".byte 0X89, 0X66, 0X00 # movw %sp, (%bp)")
#define MOV_SP_TO_PTR_SI CMT_ASM(".byte 0X89, 0X24 # movw %sp, (%si)")
#define MOV_SP_TO_PTR_DI CMT_ASM(".byte 0X89, 0X25 # movw %sp, (%di)")

#define MOV_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X87 # movw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X86 # movw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X84 # movw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X85 # movw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9F # movw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9E # movw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9C # movw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9D # movw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8F # movw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8E # movw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8C # movw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8D # movw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X97 # movw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X96 # movw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X94 # movw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X95 # movw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBF # movw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBE # movw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBC # movw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBD # movw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB7 # movw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB6 # movw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB4 # movw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB5 # movw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAF # movw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAE # movw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAC # movw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAD # movw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA7 # movw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA6 # movw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA4 # movw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA5 # movw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X87 # movw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X86 # movw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X84 # movw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X85 # movw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9F # movw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9E # movw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9C # movw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9D # movw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8F # movw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8E # movw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8C # movw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8D # movw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X97 # movw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X96 # movw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X94 # movw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X95 # movw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBF # movw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBE # movw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBC # movw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBD # movw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB7 # movw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB6 # movw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB4 # movw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB5 # movw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAF # movw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAE # movw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAC # movw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAD # movw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA7 # movw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA6 # movw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA4 # movw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA5 # movw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define MOV_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X05 # movw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X1D # movw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X0D # movw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X15 # movw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X3D # movw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X35 # movw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X2D # movw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X25 # movw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X05 # movw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X1D # movw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X0D # movw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X15 # movw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X3D # movw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X35 # movw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X2D # movw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X25 # movw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X00 # movw (%eax), %ax")
#define MOV_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X03 # movw (%ebx), %ax")
#define MOV_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X01 # movw (%ecx), %ax")
#define MOV_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X02 # movw (%edx), %ax")
#define MOV_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X07 # movw (%edi), %ax")
#define MOV_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X06 # movw (%esi), %ax")
#define MOV_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X45, 0X00 # movw (%ebp), %ax")
#define MOV_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X04, 0X24 # movw (%esp), %ax")
#define MOV_AX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X07 # movw (%bx), %ax")
#define MOV_AX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X46, 0X00 # movw (%bp), %ax")
#define MOV_AX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X04 # movw (%si), %ax")
#define MOV_AX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X05 # movw (%di), %ax")

#define MOV_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X18 # movw (%eax), %bx")
#define MOV_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X1B # movw (%ebx), %bx")
#define MOV_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X19 # movw (%ecx), %bx")
#define MOV_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X1A # movw (%edx), %bx")
#define MOV_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X1F # movw (%edi), %bx")
#define MOV_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X1E # movw (%esi), %bx")
#define MOV_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X5D, 0X00 # movw (%ebp), %bx")
#define MOV_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X1C, 0X24 # movw (%esp), %bx")
#define MOV_BX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1F # movw (%bx), %bx")
#define MOV_BX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X5E, 0X00 # movw (%bp), %bx")
#define MOV_BX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1C # movw (%si), %bx")
#define MOV_BX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1D # movw (%di), %bx")

#define MOV_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X08 # movw (%eax), %cx")
#define MOV_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X0B # movw (%ebx), %cx")
#define MOV_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X09 # movw (%ecx), %cx")
#define MOV_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X0A # movw (%edx), %cx")
#define MOV_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X0F # movw (%edi), %cx")
#define MOV_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X0E # movw (%esi), %cx")
#define MOV_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X4D, 0X00 # movw (%ebp), %cx")
#define MOV_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X0C, 0X24 # movw (%esp), %cx")
#define MOV_CX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0F # movw (%bx), %cx")
#define MOV_CX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X4E, 0X00 # movw (%bp), %cx")
#define MOV_CX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0C # movw (%si), %cx")
#define MOV_CX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0D # movw (%di), %cx")

#define MOV_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X10 # movw (%eax), %dx")
#define MOV_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X13 # movw (%ebx), %dx")
#define MOV_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X11 # movw (%ecx), %dx")
#define MOV_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X12 # movw (%edx), %dx")
#define MOV_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X17 # movw (%edi), %dx")
#define MOV_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X16 # movw (%esi), %dx")
#define MOV_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X55, 0X00 # movw (%ebp), %dx")
#define MOV_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X14, 0X24 # movw (%esp), %dx")
#define MOV_DX_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X17 # movw (%bx), %dx")
#define MOV_DX_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X56, 0X00 # movw (%bp), %dx")
#define MOV_DX_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X14 # movw (%si), %dx")
#define MOV_DX_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X15 # movw (%di), %dx")

#define MOV_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X38 # movw (%eax), %di")
#define MOV_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X3B # movw (%ebx), %di")
#define MOV_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X39 # movw (%ecx), %di")
#define MOV_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X3A # movw (%edx), %di")
#define MOV_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X3F # movw (%edi), %di")
#define MOV_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X3E # movw (%esi), %di")
#define MOV_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X7D, 0X00 # movw (%ebp), %di")
#define MOV_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X3C, 0X24 # movw (%esp), %di")
#define MOV_DI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3F # movw (%bx), %di")
#define MOV_DI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X7E, 0X00 # movw (%bp), %di")
#define MOV_DI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3C # movw (%si), %di")
#define MOV_DI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3D # movw (%di), %di")

#define MOV_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X30 # movw (%eax), %si")
#define MOV_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X33 # movw (%ebx), %si")
#define MOV_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X31 # movw (%ecx), %si")
#define MOV_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X32 # movw (%edx), %si")
#define MOV_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X37 # movw (%edi), %si")
#define MOV_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X36 # movw (%esi), %si")
#define MOV_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X75, 0X00 # movw (%ebp), %si")
#define MOV_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X34, 0X24 # movw (%esp), %si")
#define MOV_SI_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X37 # movw (%bx), %si")
#define MOV_SI_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X76, 0X00 # movw (%bp), %si")
#define MOV_SI_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X34 # movw (%si), %si")
#define MOV_SI_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X35 # movw (%di), %si")

#define MOV_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X28 # movw (%eax), %bp")
#define MOV_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X2B # movw (%ebx), %bp")
#define MOV_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X29 # movw (%ecx), %bp")
#define MOV_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X2A # movw (%edx), %bp")
#define MOV_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X2F # movw (%edi), %bp")
#define MOV_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X2E # movw (%esi), %bp")
#define MOV_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X6D, 0X00 # movw (%ebp), %bp")
#define MOV_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X2C, 0X24 # movw (%esp), %bp")
#define MOV_BP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2F # movw (%bx), %bp")
#define MOV_BP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X6E, 0X00 # movw (%bp), %bp")
#define MOV_BP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2C # movw (%si), %bp")
#define MOV_BP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2D # movw (%di), %bp")

#define MOV_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X8B, 0X20 # movw (%eax), %sp")
#define MOV_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X8B, 0X23 # movw (%ebx), %sp")
#define MOV_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X8B, 0X21 # movw (%ecx), %sp")
#define MOV_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X8B, 0X22 # movw (%edx), %sp")
#define MOV_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X8B, 0X27 # movw (%edi), %sp")
#define MOV_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X8B, 0X26 # movw (%esi), %sp")
#define MOV_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X8B, 0X65, 0X00 # movw (%ebp), %sp")
#define MOV_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X8B, 0X24, 0X24 # movw (%esp), %sp")
#define MOV_SP_FROM_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X27 # movw (%bx), %sp")
#define MOV_SP_FROM_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X66, 0X00 # movw (%bp), %sp")
#define MOV_SP_FROM_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X24 # movw (%si), %sp")
#define MOV_SP_FROM_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X25 # movw (%di), %sp")

#define MOV_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X00 # movw %ax, (%eax)")
#define MOV_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X03 # movw %ax, (%ebx)")
#define MOV_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X01 # movw %ax, (%ecx)")
#define MOV_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X02 # movw %ax, (%edx)")
#define MOV_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X07 # movw %ax, (%edi)")
#define MOV_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X06 # movw %ax, (%esi)")
#define MOV_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X45, 0X00 # movw %ax, (%ebp)")
#define MOV_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X04, 0X24 # movw %ax, (%esp)")
#define MOV_AX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X07 # movw %ax, (%bx)")
#define MOV_AX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X46, 0X00 # movw %ax, (%bp)")
#define MOV_AX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X04 # movw %ax, (%si)")
#define MOV_AX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X05 # movw %ax, (%di)")

#define MOV_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X18 # movw %bx, (%eax)")
#define MOV_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X1B # movw %bx, (%ebx)")
#define MOV_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X19 # movw %bx, (%ecx)")
#define MOV_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X1A # movw %bx, (%edx)")
#define MOV_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X1F # movw %bx, (%edi)")
#define MOV_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X1E # movw %bx, (%esi)")
#define MOV_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X5D, 0X00 # movw %bx, (%ebp)")
#define MOV_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X1C, 0X24 # movw %bx, (%esp)")
#define MOV_BX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1F # movw %bx, (%bx)")
#define MOV_BX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X5E, 0X00 # movw %bx, (%bp)")
#define MOV_BX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1C # movw %bx, (%si)")
#define MOV_BX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1D # movw %bx, (%di)")

#define MOV_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X08 # movw %cx, (%eax)")
#define MOV_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X0B # movw %cx, (%ebx)")
#define MOV_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X09 # movw %cx, (%ecx)")
#define MOV_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X0A # movw %cx, (%edx)")
#define MOV_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X0F # movw %cx, (%edi)")
#define MOV_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X0E # movw %cx, (%esi)")
#define MOV_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X4D, 0X00 # movw %cx, (%ebp)")
#define MOV_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X0C, 0X24 # movw %cx, (%esp)")
#define MOV_CX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0F # movw %cx, (%bx)")
#define MOV_CX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X4E, 0X00 # movw %cx, (%bp)")
#define MOV_CX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0C # movw %cx, (%si)")
#define MOV_CX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0D # movw %cx, (%di)")

#define MOV_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X10 # movw %dx, (%eax)")
#define MOV_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X13 # movw %dx, (%ebx)")
#define MOV_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X11 # movw %dx, (%ecx)")
#define MOV_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X12 # movw %dx, (%edx)")
#define MOV_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X17 # movw %dx, (%edi)")
#define MOV_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X16 # movw %dx, (%esi)")
#define MOV_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X55, 0X00 # movw %dx, (%ebp)")
#define MOV_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X14, 0X24 # movw %dx, (%esp)")
#define MOV_DX_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X17 # movw %dx, (%bx)")
#define MOV_DX_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X56, 0X00 # movw %dx, (%bp)")
#define MOV_DX_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X14 # movw %dx, (%si)")
#define MOV_DX_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X15 # movw %dx, (%di)")

#define MOV_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X38 # movw %di, (%eax)")
#define MOV_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X3B # movw %di, (%ebx)")
#define MOV_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X39 # movw %di, (%ecx)")
#define MOV_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X3A # movw %di, (%edx)")
#define MOV_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X3F # movw %di, (%edi)")
#define MOV_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X3E # movw %di, (%esi)")
#define MOV_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X7D, 0X00 # movw %di, (%ebp)")
#define MOV_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X3C, 0X24 # movw %di, (%esp)")
#define MOV_DI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3F # movw %di, (%bx)")
#define MOV_DI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X7E, 0X00 # movw %di, (%bp)")
#define MOV_DI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3C # movw %di, (%si)")
#define MOV_DI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3D # movw %di, (%di)")

#define MOV_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X30 # movw %si, (%eax)")
#define MOV_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X33 # movw %si, (%ebx)")
#define MOV_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X31 # movw %si, (%ecx)")
#define MOV_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X32 # movw %si, (%edx)")
#define MOV_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X37 # movw %si, (%edi)")
#define MOV_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X36 # movw %si, (%esi)")
#define MOV_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X75, 0X00 # movw %si, (%ebp)")
#define MOV_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X34, 0X24 # movw %si, (%esp)")
#define MOV_SI_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X37 # movw %si, (%bx)")
#define MOV_SI_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X76, 0X00 # movw %si, (%bp)")
#define MOV_SI_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X34 # movw %si, (%si)")
#define MOV_SI_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X35 # movw %si, (%di)")

#define MOV_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X28 # movw %bp, (%eax)")
#define MOV_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X2B # movw %bp, (%ebx)")
#define MOV_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X29 # movw %bp, (%ecx)")
#define MOV_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X2A # movw %bp, (%edx)")
#define MOV_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X2F # movw %bp, (%edi)")
#define MOV_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X2E # movw %bp, (%esi)")
#define MOV_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X6D, 0X00 # movw %bp, (%ebp)")
#define MOV_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X2C, 0X24 # movw %bp, (%esp)")
#define MOV_BP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2F # movw %bp, (%bx)")
#define MOV_BP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X6E, 0X00 # movw %bp, (%bp)")
#define MOV_BP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2C # movw %bp, (%si)")
#define MOV_BP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2D # movw %bp, (%di)")

#define MOV_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X89, 0X20 # movw %sp, (%eax)")
#define MOV_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X89, 0X23 # movw %sp, (%ebx)")
#define MOV_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X89, 0X21 # movw %sp, (%ecx)")
#define MOV_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X89, 0X22 # movw %sp, (%edx)")
#define MOV_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X89, 0X27 # movw %sp, (%edi)")
#define MOV_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X89, 0X26 # movw %sp, (%esi)")
#define MOV_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X89, 0X65, 0X00 # movw %sp, (%ebp)")
#define MOV_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X89, 0X24, 0X24 # movw %sp, (%esp)")
#define MOV_SP_TO_PTR_BX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X27 # movw %sp, (%bx)")
#define MOV_SP_TO_PTR_BP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X66, 0X00 # movw %sp, (%bp)")
#define MOV_SP_TO_PTR_SI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X24 # movw %sp, (%si)")
#define MOV_SP_TO_PTR_DI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X25 # movw %sp, (%di)")

#define MOV_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X80 # movw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X83 # movw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X81 # movw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X82 # movw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X87 # movw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X86 # movw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X85 # movw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X87 # movw " _(VALUE) "(%bx), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X86 # movw " _(VALUE) "(%bp), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X84 # movw " _(VALUE) "(%si), %ax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X85 # movw " _(VALUE) "(%di), %ax")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X98 # movw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9B # movw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X99 # movw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9A # movw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9F # movw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9E # movw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9D # movw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9F # movw " _(VALUE) "(%bx), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9E # movw " _(VALUE) "(%bp), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9C # movw " _(VALUE) "(%si), %bx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9D # movw " _(VALUE) "(%di), %bx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X88 # movw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8B # movw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X89 # movw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8A # movw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8F # movw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8E # movw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8D # movw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8F # movw " _(VALUE) "(%bx), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8E # movw " _(VALUE) "(%bp), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8C # movw " _(VALUE) "(%si), %cx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8D # movw " _(VALUE) "(%di), %cx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X90 # movw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X93 # movw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X91 # movw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X92 # movw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X97 # movw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X96 # movw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X95 # movw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X97 # movw " _(VALUE) "(%bx), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X96 # movw " _(VALUE) "(%bp), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X94 # movw " _(VALUE) "(%si), %dx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X95 # movw " _(VALUE) "(%di), %dx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB8 # movw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBB # movw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB9 # movw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBA # movw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBF # movw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBE # movw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBD # movw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBF # movw " _(VALUE) "(%bx), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBE # movw " _(VALUE) "(%bp), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBC # movw " _(VALUE) "(%si), %di")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBD # movw " _(VALUE) "(%di), %di")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB0 # movw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB3 # movw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB1 # movw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB2 # movw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB7 # movw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB6 # movw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB5 # movw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB7 # movw " _(VALUE) "(%bx), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB6 # movw " _(VALUE) "(%bp), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB4 # movw " _(VALUE) "(%si), %si")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB5 # movw " _(VALUE) "(%di), %si")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA8 # movw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAB # movw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA9 # movw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAA # movw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAF # movw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAE # movw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAD # movw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAF # movw " _(VALUE) "(%bx), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAE # movw " _(VALUE) "(%bp), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAC # movw " _(VALUE) "(%si), %bp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAD # movw " _(VALUE) "(%di), %bp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA0 # movw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA3 # movw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA1 # movw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA2 # movw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA7 # movw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA6 # movw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA5 # movw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA7 # movw " _(VALUE) "(%bx), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA6 # movw " _(VALUE) "(%bp), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA4 # movw " _(VALUE) "(%si), %sp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA5 # movw " _(VALUE) "(%di), %sp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X80 # movw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X83 # movw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X81 # movw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X82 # movw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X87 # movw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X86 # movw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X85 # movw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X84, 0X24 # movw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X87 # movw %ax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X86 # movw %ax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X84 # movw %ax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_AX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X85 # movw %ax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X98 # movw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9B # movw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X99 # movw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9A # movw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9F # movw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9E # movw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9D # movw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9C, 0X24 # movw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9F # movw %bx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9E # movw %bx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9C # movw %bx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9D # movw %bx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X88 # movw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8B # movw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X89 # movw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8A # movw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8F # movw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8E # movw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8D # movw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8C, 0X24 # movw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8F # movw %cx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8E # movw %cx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8C # movw %cx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_CX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8D # movw %cx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X90 # movw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X93 # movw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X91 # movw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X92 # movw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X97 # movw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X96 # movw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X95 # movw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X94, 0X24 # movw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X97 # movw %dx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X96 # movw %dx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X94 # movw %dx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X95 # movw %dx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB8 # movw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBB # movw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB9 # movw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBA # movw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBF # movw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBE # movw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBD # movw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBC, 0X24 # movw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBF # movw %di, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBE # movw %di, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBC # movw %di, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_DI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBD # movw %di, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB0 # movw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB3 # movw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB1 # movw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB2 # movw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB7 # movw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB6 # movw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB5 # movw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB4, 0X24 # movw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB7 # movw %si, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB6 # movw %si, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB4 # movw %si, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB5 # movw %si, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA8 # movw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAB # movw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA9 # movw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAA # movw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAF # movw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAE # movw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAD # movw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAC, 0X24 # movw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAF # movw %bp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAE # movw %bp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAC # movw %bp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_BP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAD # movw %bp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA0 # movw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA3 # movw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA1 # movw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA2 # movw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA7 # movw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA6 # movw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA5 # movw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA4, 0X24 # movw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA7 # movw %sp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA6 # movw %sp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA4 # movw %sp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_SP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA5 # movw %sp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_AX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X04, 0X25 # movw (" _(VALUE) "), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X1C, 0X25 # movw (" _(VALUE) "), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X0C, 0X25 # movw (" _(VALUE) "), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X14, 0X25 # movw (" _(VALUE) "), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X3C, 0X25 # movw (" _(VALUE) "), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X34, 0X25 # movw (" _(VALUE) "), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X2C, 0X25 # movw (" _(VALUE) "), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X24, 0X25 # movw (" _(VALUE) "), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X04, 0X25 # movw (" _(VALUE) "), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0C, 0X25 # movw (" _(VALUE) "), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X14, 0X25 # movw (" _(VALUE) "), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1C, 0X25 # movw (" _(VALUE) "), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X24, 0X25 # movw (" _(VALUE) "), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2C, 0X25 # movw (" _(VALUE) "), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X34, 0X25 # movw (" _(VALUE) "), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3C, 0X25 # movw (" _(VALUE) "), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X04, 0X25 # movw %ax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X1C, 0X25 # movw %bx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X0C, 0X25 # movw %cx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X14, 0X25 # movw %dx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X3C, 0X25 # movw %di, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X34, 0X25 # movw %si, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X2C, 0X25 # movw %bp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X24, 0X25 # movw %sp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X04, 0X25 # movw %r8w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0C, 0X25 # movw %r9w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X14, 0X25 # movw %r10w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1C, 0X25 # movw %r11w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X24, 0X25 # movw %r12w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2C, 0X25 # movw %r13w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X34, 0X25 # movw %r14w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3C, 0X25 # movw %r15w, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X00 # movw (%rax), %ax")
#define MOV_AX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X03 # movw (%rbx), %ax")
#define MOV_AX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X01 # movw (%rcx), %ax")
#define MOV_AX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X02 # movw (%rdx), %ax")
#define MOV_AX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X07 # movw (%rdi), %ax")
#define MOV_AX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X06 # movw (%rsi), %ax")
#define MOV_AX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X45, 0X00 # movw (%rbp), %ax")
#define MOV_AX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X04, 0X24 # movw (%rsp), %ax")
#define MOV_AX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X00 # movw (%r8), %ax")
#define MOV_AX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X01 # movw (%r9), %ax")
#define MOV_AX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X02 # movw (%r10), %ax")
#define MOV_AX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X03 # movw (%r11), %ax")
#define MOV_AX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X04, 0X24 # movw (%r12), %ax")
#define MOV_AX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X45, 0X00 # movw (%r13), %ax")
#define MOV_AX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X06 # movw (%r14), %ax")
#define MOV_AX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X07 # movw (%r15), %ax")
#define MOV_AX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X00 # movw (%eax), %ax")
#define MOV_AX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X03 # movw (%ebx), %ax")
#define MOV_AX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X01 # movw (%ecx), %ax")
#define MOV_AX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X02 # movw (%edx), %ax")
#define MOV_AX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X07 # movw (%edi), %ax")
#define MOV_AX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X06 # movw (%esi), %ax")
#define MOV_AX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X45, 0X00 # movw (%ebp), %ax")
#define MOV_AX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X04, 0X24 # movw (%esp), %ax")

#define MOV_BX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X18 # movw (%rax), %bx")
#define MOV_BX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X1B # movw (%rbx), %bx")
#define MOV_BX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X19 # movw (%rcx), %bx")
#define MOV_BX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X1A # movw (%rdx), %bx")
#define MOV_BX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X1F # movw (%rdi), %bx")
#define MOV_BX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X1E # movw (%rsi), %bx")
#define MOV_BX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X5D, 0X00 # movw (%rbp), %bx")
#define MOV_BX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X1C, 0X24 # movw (%rsp), %bx")
#define MOV_BX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X18 # movw (%r8), %bx")
#define MOV_BX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X19 # movw (%r9), %bx")
#define MOV_BX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X1A # movw (%r10), %bx")
#define MOV_BX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X1B # movw (%r11), %bx")
#define MOV_BX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X1C, 0X24 # movw (%r12), %bx")
#define MOV_BX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X5D, 0X00 # movw (%r13), %bx")
#define MOV_BX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X1E # movw (%r14), %bx")
#define MOV_BX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X1F # movw (%r15), %bx")
#define MOV_BX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X18 # movw (%eax), %bx")
#define MOV_BX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1B # movw (%ebx), %bx")
#define MOV_BX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X19 # movw (%ecx), %bx")
#define MOV_BX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1A # movw (%edx), %bx")
#define MOV_BX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1F # movw (%edi), %bx")
#define MOV_BX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1E # movw (%esi), %bx")
#define MOV_BX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X5D, 0X00 # movw (%ebp), %bx")
#define MOV_BX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X1C, 0X24 # movw (%esp), %bx")

#define MOV_CX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X08 # movw (%rax), %cx")
#define MOV_CX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X0B # movw (%rbx), %cx")
#define MOV_CX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X09 # movw (%rcx), %cx")
#define MOV_CX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X0A # movw (%rdx), %cx")
#define MOV_CX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X0F # movw (%rdi), %cx")
#define MOV_CX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X0E # movw (%rsi), %cx")
#define MOV_CX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X4D, 0X00 # movw (%rbp), %cx")
#define MOV_CX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X0C, 0X24 # movw (%rsp), %cx")
#define MOV_CX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X08 # movw (%r8), %cx")
#define MOV_CX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X09 # movw (%r9), %cx")
#define MOV_CX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X0A # movw (%r10), %cx")
#define MOV_CX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X0B # movw (%r11), %cx")
#define MOV_CX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X0C, 0X24 # movw (%r12), %cx")
#define MOV_CX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X4D, 0X00 # movw (%r13), %cx")
#define MOV_CX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X0E # movw (%r14), %cx")
#define MOV_CX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X0F # movw (%r15), %cx")
#define MOV_CX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X08 # movw (%eax), %cx")
#define MOV_CX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0B # movw (%ebx), %cx")
#define MOV_CX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X09 # movw (%ecx), %cx")
#define MOV_CX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0A # movw (%edx), %cx")
#define MOV_CX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0F # movw (%edi), %cx")
#define MOV_CX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0E # movw (%esi), %cx")
#define MOV_CX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X4D, 0X00 # movw (%ebp), %cx")
#define MOV_CX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X0C, 0X24 # movw (%esp), %cx")

#define MOV_DX_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X10 # movw (%rax), %dx")
#define MOV_DX_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X13 # movw (%rbx), %dx")
#define MOV_DX_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X11 # movw (%rcx), %dx")
#define MOV_DX_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X12 # movw (%rdx), %dx")
#define MOV_DX_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X17 # movw (%rdi), %dx")
#define MOV_DX_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X16 # movw (%rsi), %dx")
#define MOV_DX_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X55, 0X00 # movw (%rbp), %dx")
#define MOV_DX_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X14, 0X24 # movw (%rsp), %dx")
#define MOV_DX_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X10 # movw (%r8), %dx")
#define MOV_DX_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X11 # movw (%r9), %dx")
#define MOV_DX_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X12 # movw (%r10), %dx")
#define MOV_DX_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X13 # movw (%r11), %dx")
#define MOV_DX_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X14, 0X24 # movw (%r12), %dx")
#define MOV_DX_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X55, 0X00 # movw (%r13), %dx")
#define MOV_DX_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X16 # movw (%r14), %dx")
#define MOV_DX_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X17 # movw (%r15), %dx")
#define MOV_DX_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X10 # movw (%eax), %dx")
#define MOV_DX_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X13 # movw (%ebx), %dx")
#define MOV_DX_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X11 # movw (%ecx), %dx")
#define MOV_DX_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X12 # movw (%edx), %dx")
#define MOV_DX_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X17 # movw (%edi), %dx")
#define MOV_DX_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X16 # movw (%esi), %dx")
#define MOV_DX_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X55, 0X00 # movw (%ebp), %dx")
#define MOV_DX_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X14, 0X24 # movw (%esp), %dx")

#define MOV_DI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X38 # movw (%rax), %di")
#define MOV_DI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X3B # movw (%rbx), %di")
#define MOV_DI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X39 # movw (%rcx), %di")
#define MOV_DI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X3A # movw (%rdx), %di")
#define MOV_DI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X3F # movw (%rdi), %di")
#define MOV_DI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X3E # movw (%rsi), %di")
#define MOV_DI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X7D, 0X00 # movw (%rbp), %di")
#define MOV_DI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X3C, 0X24 # movw (%rsp), %di")
#define MOV_DI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X38 # movw (%r8), %di")
#define MOV_DI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X39 # movw (%r9), %di")
#define MOV_DI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X3A # movw (%r10), %di")
#define MOV_DI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X3B # movw (%r11), %di")
#define MOV_DI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X3C, 0X24 # movw (%r12), %di")
#define MOV_DI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X7D, 0X00 # movw (%r13), %di")
#define MOV_DI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X3E # movw (%r14), %di")
#define MOV_DI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X3F # movw (%r15), %di")
#define MOV_DI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X38 # movw (%eax), %di")
#define MOV_DI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3B # movw (%ebx), %di")
#define MOV_DI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X39 # movw (%ecx), %di")
#define MOV_DI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3A # movw (%edx), %di")
#define MOV_DI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3F # movw (%edi), %di")
#define MOV_DI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3E # movw (%esi), %di")
#define MOV_DI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X7D, 0X00 # movw (%ebp), %di")
#define MOV_DI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X3C, 0X24 # movw (%esp), %di")

#define MOV_SI_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X30 # movw (%rax), %si")
#define MOV_SI_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X33 # movw (%rbx), %si")
#define MOV_SI_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X31 # movw (%rcx), %si")
#define MOV_SI_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X32 # movw (%rdx), %si")
#define MOV_SI_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X37 # movw (%rdi), %si")
#define MOV_SI_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X36 # movw (%rsi), %si")
#define MOV_SI_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X75, 0X00 # movw (%rbp), %si")
#define MOV_SI_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X34, 0X24 # movw (%rsp), %si")
#define MOV_SI_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X30 # movw (%r8), %si")
#define MOV_SI_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X31 # movw (%r9), %si")
#define MOV_SI_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X32 # movw (%r10), %si")
#define MOV_SI_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X33 # movw (%r11), %si")
#define MOV_SI_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X34, 0X24 # movw (%r12), %si")
#define MOV_SI_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X75, 0X00 # movw (%r13), %si")
#define MOV_SI_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X36 # movw (%r14), %si")
#define MOV_SI_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X37 # movw (%r15), %si")
#define MOV_SI_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X30 # movw (%eax), %si")
#define MOV_SI_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X33 # movw (%ebx), %si")
#define MOV_SI_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X31 # movw (%ecx), %si")
#define MOV_SI_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X32 # movw (%edx), %si")
#define MOV_SI_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X37 # movw (%edi), %si")
#define MOV_SI_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X36 # movw (%esi), %si")
#define MOV_SI_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X75, 0X00 # movw (%ebp), %si")
#define MOV_SI_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X34, 0X24 # movw (%esp), %si")

#define MOV_BP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X28 # movw (%rax), %bp")
#define MOV_BP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X2B # movw (%rbx), %bp")
#define MOV_BP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X29 # movw (%rcx), %bp")
#define MOV_BP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X2A # movw (%rdx), %bp")
#define MOV_BP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X2F # movw (%rdi), %bp")
#define MOV_BP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X2E # movw (%rsi), %bp")
#define MOV_BP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X6D, 0X00 # movw (%rbp), %bp")
#define MOV_BP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X2C, 0X24 # movw (%rsp), %bp")
#define MOV_BP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X28 # movw (%r8), %bp")
#define MOV_BP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X29 # movw (%r9), %bp")
#define MOV_BP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X2A # movw (%r10), %bp")
#define MOV_BP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X2B # movw (%r11), %bp")
#define MOV_BP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X2C, 0X24 # movw (%r12), %bp")
#define MOV_BP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X6D, 0X00 # movw (%r13), %bp")
#define MOV_BP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X2E # movw (%r14), %bp")
#define MOV_BP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X2F # movw (%r15), %bp")
#define MOV_BP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X28 # movw (%eax), %bp")
#define MOV_BP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2B # movw (%ebx), %bp")
#define MOV_BP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X29 # movw (%ecx), %bp")
#define MOV_BP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2A # movw (%edx), %bp")
#define MOV_BP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2F # movw (%edi), %bp")
#define MOV_BP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2E # movw (%esi), %bp")
#define MOV_BP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X6D, 0X00 # movw (%ebp), %bp")
#define MOV_BP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X2C, 0X24 # movw (%esp), %bp")

#define MOV_SP_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X8B, 0X20 # movw (%rax), %sp")
#define MOV_SP_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X8B, 0X23 # movw (%rbx), %sp")
#define MOV_SP_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X8B, 0X21 # movw (%rcx), %sp")
#define MOV_SP_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X8B, 0X22 # movw (%rdx), %sp")
#define MOV_SP_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X8B, 0X27 # movw (%rdi), %sp")
#define MOV_SP_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X8B, 0X26 # movw (%rsi), %sp")
#define MOV_SP_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X8B, 0X65, 0X00 # movw (%rbp), %sp")
#define MOV_SP_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X8B, 0X24, 0X24 # movw (%rsp), %sp")
#define MOV_SP_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X20 # movw (%r8), %sp")
#define MOV_SP_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X21 # movw (%r9), %sp")
#define MOV_SP_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X22 # movw (%r10), %sp")
#define MOV_SP_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X23 # movw (%r11), %sp")
#define MOV_SP_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X24, 0X24 # movw (%r12), %sp")
#define MOV_SP_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X65, 0X00 # movw (%r13), %sp")
#define MOV_SP_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X26 # movw (%r14), %sp")
#define MOV_SP_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X27 # movw (%r15), %sp")
#define MOV_SP_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X20 # movw (%eax), %sp")
#define MOV_SP_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X23 # movw (%ebx), %sp")
#define MOV_SP_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X21 # movw (%ecx), %sp")
#define MOV_SP_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X22 # movw (%edx), %sp")
#define MOV_SP_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X27 # movw (%edi), %sp")
#define MOV_SP_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X26 # movw (%esi), %sp")
#define MOV_SP_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X65, 0X00 # movw (%ebp), %sp")
#define MOV_SP_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X24, 0X24 # movw (%esp), %sp")

#define MOV_R8W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X00 # movw (%rax), %r8w")
#define MOV_R8W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X03 # movw (%rbx), %r8w")
#define MOV_R8W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X01 # movw (%rcx), %r8w")
#define MOV_R8W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X02 # movw (%rdx), %r8w")
#define MOV_R8W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X07 # movw (%rdi), %r8w")
#define MOV_R8W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X06 # movw (%rsi), %r8w")
#define MOV_R8W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X45, 0X00 # movw (%rbp), %r8w")
#define MOV_R8W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X04, 0X24 # movw (%rsp), %r8w")
#define MOV_R8W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X00 # movw (%r8), %r8w")
#define MOV_R8W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X01 # movw (%r9), %r8w")
#define MOV_R8W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X02 # movw (%r10), %r8w")
#define MOV_R8W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X03 # movw (%r11), %r8w")
#define MOV_R8W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X04, 0X24 # movw (%r12), %r8w")
#define MOV_R8W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X45, 0X00 # movw (%r13), %r8w")
#define MOV_R8W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X06 # movw (%r14), %r8w")
#define MOV_R8W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X07 # movw (%r15), %r8w")
#define MOV_R8W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X00 # movw (%eax), %r8w")
#define MOV_R8W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X03 # movw (%ebx), %r8w")
#define MOV_R8W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X01 # movw (%ecx), %r8w")
#define MOV_R8W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X02 # movw (%edx), %r8w")
#define MOV_R8W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X07 # movw (%edi), %r8w")
#define MOV_R8W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X06 # movw (%esi), %r8w")
#define MOV_R8W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X45, 0X00 # movw (%ebp), %r8w")
#define MOV_R8W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X04, 0X24 # movw (%esp), %r8w")

#define MOV_R9W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X08 # movw (%rax), %r9w")
#define MOV_R9W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0B # movw (%rbx), %r9w")
#define MOV_R9W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X09 # movw (%rcx), %r9w")
#define MOV_R9W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0A # movw (%rdx), %r9w")
#define MOV_R9W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0F # movw (%rdi), %r9w")
#define MOV_R9W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0E # movw (%rsi), %r9w")
#define MOV_R9W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X4D, 0X00 # movw (%rbp), %r9w")
#define MOV_R9W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X0C, 0X24 # movw (%rsp), %r9w")
#define MOV_R9W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X08 # movw (%r8), %r9w")
#define MOV_R9W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X09 # movw (%r9), %r9w")
#define MOV_R9W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X0A # movw (%r10), %r9w")
#define MOV_R9W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X0B # movw (%r11), %r9w")
#define MOV_R9W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X0C, 0X24 # movw (%r12), %r9w")
#define MOV_R9W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X4D, 0X00 # movw (%r13), %r9w")
#define MOV_R9W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X0E # movw (%r14), %r9w")
#define MOV_R9W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X0F # movw (%r15), %r9w")
#define MOV_R9W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X08 # movw (%eax), %r9w")
#define MOV_R9W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X0B # movw (%ebx), %r9w")
#define MOV_R9W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X09 # movw (%ecx), %r9w")
#define MOV_R9W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X0A # movw (%edx), %r9w")
#define MOV_R9W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X0F # movw (%edi), %r9w")
#define MOV_R9W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X0E # movw (%esi), %r9w")
#define MOV_R9W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X4D, 0X00 # movw (%ebp), %r9w")
#define MOV_R9W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X0C, 0X24 # movw (%esp), %r9w")

#define MOV_R10W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X10 # movw (%rax), %r10w")
#define MOV_R10W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X13 # movw (%rbx), %r10w")
#define MOV_R10W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X11 # movw (%rcx), %r10w")
#define MOV_R10W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X12 # movw (%rdx), %r10w")
#define MOV_R10W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X17 # movw (%rdi), %r10w")
#define MOV_R10W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X16 # movw (%rsi), %r10w")
#define MOV_R10W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X55, 0X00 # movw (%rbp), %r10w")
#define MOV_R10W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X14, 0X24 # movw (%rsp), %r10w")
#define MOV_R10W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X10 # movw (%r8), %r10w")
#define MOV_R10W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X11 # movw (%r9), %r10w")
#define MOV_R10W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X12 # movw (%r10), %r10w")
#define MOV_R10W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X13 # movw (%r11), %r10w")
#define MOV_R10W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X14, 0X24 # movw (%r12), %r10w")
#define MOV_R10W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X55, 0X00 # movw (%r13), %r10w")
#define MOV_R10W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X16 # movw (%r14), %r10w")
#define MOV_R10W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X17 # movw (%r15), %r10w")
#define MOV_R10W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X10 # movw (%eax), %r10w")
#define MOV_R10W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X13 # movw (%ebx), %r10w")
#define MOV_R10W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X11 # movw (%ecx), %r10w")
#define MOV_R10W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X12 # movw (%edx), %r10w")
#define MOV_R10W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X17 # movw (%edi), %r10w")
#define MOV_R10W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X16 # movw (%esi), %r10w")
#define MOV_R10W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X55, 0X00 # movw (%ebp), %r10w")
#define MOV_R10W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X14, 0X24 # movw (%esp), %r10w")

#define MOV_R11W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X18 # movw (%rax), %r11w")
#define MOV_R11W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1B # movw (%rbx), %r11w")
#define MOV_R11W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X19 # movw (%rcx), %r11w")
#define MOV_R11W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1A # movw (%rdx), %r11w")
#define MOV_R11W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1F # movw (%rdi), %r11w")
#define MOV_R11W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1E # movw (%rsi), %r11w")
#define MOV_R11W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X5D, 0X00 # movw (%rbp), %r11w")
#define MOV_R11W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X1C, 0X24 # movw (%rsp), %r11w")
#define MOV_R11W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X18 # movw (%r8), %r11w")
#define MOV_R11W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X19 # movw (%r9), %r11w")
#define MOV_R11W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X1A # movw (%r10), %r11w")
#define MOV_R11W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X1B # movw (%r11), %r11w")
#define MOV_R11W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X1C, 0X24 # movw (%r12), %r11w")
#define MOV_R11W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X5D, 0X00 # movw (%r13), %r11w")
#define MOV_R11W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X1E # movw (%r14), %r11w")
#define MOV_R11W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X1F # movw (%r15), %r11w")
#define MOV_R11W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X18 # movw (%eax), %r11w")
#define MOV_R11W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X1B # movw (%ebx), %r11w")
#define MOV_R11W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X19 # movw (%ecx), %r11w")
#define MOV_R11W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X1A # movw (%edx), %r11w")
#define MOV_R11W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X1F # movw (%edi), %r11w")
#define MOV_R11W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X1E # movw (%esi), %r11w")
#define MOV_R11W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X5D, 0X00 # movw (%ebp), %r11w")
#define MOV_R11W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X1C, 0X24 # movw (%esp), %r11w")

#define MOV_R12W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X20 # movw (%rax), %r12w")
#define MOV_R12W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X23 # movw (%rbx), %r12w")
#define MOV_R12W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X21 # movw (%rcx), %r12w")
#define MOV_R12W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X22 # movw (%rdx), %r12w")
#define MOV_R12W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X27 # movw (%rdi), %r12w")
#define MOV_R12W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X26 # movw (%rsi), %r12w")
#define MOV_R12W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X65, 0X00 # movw (%rbp), %r12w")
#define MOV_R12W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X24, 0X24 # movw (%rsp), %r12w")
#define MOV_R12W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X20 # movw (%r8), %r12w")
#define MOV_R12W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X21 # movw (%r9), %r12w")
#define MOV_R12W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X22 # movw (%r10), %r12w")
#define MOV_R12W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X23 # movw (%r11), %r12w")
#define MOV_R12W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X24, 0X24 # movw (%r12), %r12w")
#define MOV_R12W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X65, 0X00 # movw (%r13), %r12w")
#define MOV_R12W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X26 # movw (%r14), %r12w")
#define MOV_R12W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X27 # movw (%r15), %r12w")
#define MOV_R12W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X20 # movw (%eax), %r12w")
#define MOV_R12W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X23 # movw (%ebx), %r12w")
#define MOV_R12W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X21 # movw (%ecx), %r12w")
#define MOV_R12W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X22 # movw (%edx), %r12w")
#define MOV_R12W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X27 # movw (%edi), %r12w")
#define MOV_R12W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X26 # movw (%esi), %r12w")
#define MOV_R12W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X65, 0X00 # movw (%ebp), %r12w")
#define MOV_R12W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X24, 0X24 # movw (%esp), %r12w")

#define MOV_R13W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X28 # movw (%rax), %r13w")
#define MOV_R13W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2B # movw (%rbx), %r13w")
#define MOV_R13W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X29 # movw (%rcx), %r13w")
#define MOV_R13W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2A # movw (%rdx), %r13w")
#define MOV_R13W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2F # movw (%rdi), %r13w")
#define MOV_R13W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2E # movw (%rsi), %r13w")
#define MOV_R13W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X6D, 0X00 # movw (%rbp), %r13w")
#define MOV_R13W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X2C, 0X24 # movw (%rsp), %r13w")
#define MOV_R13W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X28 # movw (%r8), %r13w")
#define MOV_R13W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X29 # movw (%r9), %r13w")
#define MOV_R13W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X2A # movw (%r10), %r13w")
#define MOV_R13W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X2B # movw (%r11), %r13w")
#define MOV_R13W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X2C, 0X24 # movw (%r12), %r13w")
#define MOV_R13W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X6D, 0X00 # movw (%r13), %r13w")
#define MOV_R13W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X2E # movw (%r14), %r13w")
#define MOV_R13W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X2F # movw (%r15), %r13w")
#define MOV_R13W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X28 # movw (%eax), %r13w")
#define MOV_R13W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X2B # movw (%ebx), %r13w")
#define MOV_R13W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X29 # movw (%ecx), %r13w")
#define MOV_R13W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X2A # movw (%edx), %r13w")
#define MOV_R13W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X2F # movw (%edi), %r13w")
#define MOV_R13W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X2E # movw (%esi), %r13w")
#define MOV_R13W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X6D, 0X00 # movw (%ebp), %r13w")
#define MOV_R13W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X2C, 0X24 # movw (%esp), %r13w")

#define MOV_R14W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X30 # movw (%rax), %r14w")
#define MOV_R14W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X33 # movw (%rbx), %r14w")
#define MOV_R14W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X31 # movw (%rcx), %r14w")
#define MOV_R14W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X32 # movw (%rdx), %r14w")
#define MOV_R14W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X37 # movw (%rdi), %r14w")
#define MOV_R14W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X36 # movw (%rsi), %r14w")
#define MOV_R14W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X75, 0X00 # movw (%rbp), %r14w")
#define MOV_R14W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X34, 0X24 # movw (%rsp), %r14w")
#define MOV_R14W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X30 # movw (%r8), %r14w")
#define MOV_R14W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X31 # movw (%r9), %r14w")
#define MOV_R14W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X32 # movw (%r10), %r14w")
#define MOV_R14W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X33 # movw (%r11), %r14w")
#define MOV_R14W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X34, 0X24 # movw (%r12), %r14w")
#define MOV_R14W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X75, 0X00 # movw (%r13), %r14w")
#define MOV_R14W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X36 # movw (%r14), %r14w")
#define MOV_R14W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X37 # movw (%r15), %r14w")
#define MOV_R14W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X30 # movw (%eax), %r14w")
#define MOV_R14W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X33 # movw (%ebx), %r14w")
#define MOV_R14W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X31 # movw (%ecx), %r14w")
#define MOV_R14W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X32 # movw (%edx), %r14w")
#define MOV_R14W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X37 # movw (%edi), %r14w")
#define MOV_R14W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X36 # movw (%esi), %r14w")
#define MOV_R14W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X75, 0X00 # movw (%ebp), %r14w")
#define MOV_R14W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X34, 0X24 # movw (%esp), %r14w")

#define MOV_R15W_FROM_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X38 # movw (%rax), %r15w")
#define MOV_R15W_FROM_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3B # movw (%rbx), %r15w")
#define MOV_R15W_FROM_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X39 # movw (%rcx), %r15w")
#define MOV_R15W_FROM_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3A # movw (%rdx), %r15w")
#define MOV_R15W_FROM_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3F # movw (%rdi), %r15w")
#define MOV_R15W_FROM_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3E # movw (%rsi), %r15w")
#define MOV_R15W_FROM_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X7D, 0X00 # movw (%rbp), %r15w")
#define MOV_R15W_FROM_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X3C, 0X24 # movw (%rsp), %r15w")
#define MOV_R15W_FROM_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X38 # movw (%r8), %r15w")
#define MOV_R15W_FROM_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X39 # movw (%r9), %r15w")
#define MOV_R15W_FROM_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X3A # movw (%r10), %r15w")
#define MOV_R15W_FROM_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X3B # movw (%r11), %r15w")
#define MOV_R15W_FROM_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X3C, 0X24 # movw (%r12), %r15w")
#define MOV_R15W_FROM_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X7D, 0X00 # movw (%r13), %r15w")
#define MOV_R15W_FROM_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X3E # movw (%r14), %r15w")
#define MOV_R15W_FROM_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X3F # movw (%r15), %r15w")
#define MOV_R15W_FROM_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X38 # movw (%eax), %r15w")
#define MOV_R15W_FROM_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X3B # movw (%ebx), %r15w")
#define MOV_R15W_FROM_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X39 # movw (%ecx), %r15w")
#define MOV_R15W_FROM_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X3A # movw (%edx), %r15w")
#define MOV_R15W_FROM_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X3F # movw (%edi), %r15w")
#define MOV_R15W_FROM_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X3E # movw (%esi), %r15w")
#define MOV_R15W_FROM_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X7D, 0X00 # movw (%ebp), %r15w")
#define MOV_R15W_FROM_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X3C, 0X24 # movw (%esp), %r15w")

#define MOV_AX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X00 # movw %ax, (%rax)")
#define MOV_AX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X03 # movw %ax, (%rbx)")
#define MOV_AX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X01 # movw %ax, (%rcx)")
#define MOV_AX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X02 # movw %ax, (%rdx)")
#define MOV_AX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X07 # movw %ax, (%rdi)")
#define MOV_AX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X06 # movw %ax, (%rsi)")
#define MOV_AX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X45, 0X00 # movw %ax, (%rbp)")
#define MOV_AX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X04, 0X24 # movw %ax, (%rsp)")
#define MOV_AX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X00 # movw %ax, (%r8)")
#define MOV_AX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X01 # movw %ax, (%r9)")
#define MOV_AX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X02 # movw %ax, (%r10)")
#define MOV_AX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X03 # movw %ax, (%r11)")
#define MOV_AX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X04, 0X24 # movw %ax, (%r12)")
#define MOV_AX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X45, 0X00 # movw %ax, (%r13)")
#define MOV_AX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X06 # movw %ax, (%r14)")
#define MOV_AX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X07 # movw %ax, (%r15)")
#define MOV_AX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X00 # movw %ax, (%eax)")
#define MOV_AX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X03 # movw %ax, (%ebx)")
#define MOV_AX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X01 # movw %ax, (%ecx)")
#define MOV_AX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X02 # movw %ax, (%edx)")
#define MOV_AX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X07 # movw %ax, (%edi)")
#define MOV_AX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X06 # movw %ax, (%esi)")
#define MOV_AX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X45, 0X00 # movw %ax, (%ebp)")
#define MOV_AX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X04, 0X24 # movw %ax, (%esp)")

#define MOV_BX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X18 # movw %bx, (%rax)")
#define MOV_BX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X1B # movw %bx, (%rbx)")
#define MOV_BX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X19 # movw %bx, (%rcx)")
#define MOV_BX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X1A # movw %bx, (%rdx)")
#define MOV_BX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X1F # movw %bx, (%rdi)")
#define MOV_BX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X1E # movw %bx, (%rsi)")
#define MOV_BX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X5D, 0X00 # movw %bx, (%rbp)")
#define MOV_BX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X1C, 0X24 # movw %bx, (%rsp)")
#define MOV_BX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X18 # movw %bx, (%r8)")
#define MOV_BX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X19 # movw %bx, (%r9)")
#define MOV_BX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X1A # movw %bx, (%r10)")
#define MOV_BX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X1B # movw %bx, (%r11)")
#define MOV_BX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X1C, 0X24 # movw %bx, (%r12)")
#define MOV_BX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X5D, 0X00 # movw %bx, (%r13)")
#define MOV_BX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X1E # movw %bx, (%r14)")
#define MOV_BX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X1F # movw %bx, (%r15)")
#define MOV_BX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X18 # movw %bx, (%eax)")
#define MOV_BX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1B # movw %bx, (%ebx)")
#define MOV_BX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X19 # movw %bx, (%ecx)")
#define MOV_BX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1A # movw %bx, (%edx)")
#define MOV_BX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1F # movw %bx, (%edi)")
#define MOV_BX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1E # movw %bx, (%esi)")
#define MOV_BX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X5D, 0X00 # movw %bx, (%ebp)")
#define MOV_BX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X1C, 0X24 # movw %bx, (%esp)")

#define MOV_CX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X08 # movw %cx, (%rax)")
#define MOV_CX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X0B # movw %cx, (%rbx)")
#define MOV_CX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X09 # movw %cx, (%rcx)")
#define MOV_CX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X0A # movw %cx, (%rdx)")
#define MOV_CX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X0F # movw %cx, (%rdi)")
#define MOV_CX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X0E # movw %cx, (%rsi)")
#define MOV_CX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X4D, 0X00 # movw %cx, (%rbp)")
#define MOV_CX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X0C, 0X24 # movw %cx, (%rsp)")
#define MOV_CX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X08 # movw %cx, (%r8)")
#define MOV_CX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X09 # movw %cx, (%r9)")
#define MOV_CX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X0A # movw %cx, (%r10)")
#define MOV_CX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X0B # movw %cx, (%r11)")
#define MOV_CX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X0C, 0X24 # movw %cx, (%r12)")
#define MOV_CX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X4D, 0X00 # movw %cx, (%r13)")
#define MOV_CX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X0E # movw %cx, (%r14)")
#define MOV_CX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X0F # movw %cx, (%r15)")
#define MOV_CX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X08 # movw %cx, (%eax)")
#define MOV_CX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0B # movw %cx, (%ebx)")
#define MOV_CX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X09 # movw %cx, (%ecx)")
#define MOV_CX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0A # movw %cx, (%edx)")
#define MOV_CX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0F # movw %cx, (%edi)")
#define MOV_CX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0E # movw %cx, (%esi)")
#define MOV_CX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X4D, 0X00 # movw %cx, (%ebp)")
#define MOV_CX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X0C, 0X24 # movw %cx, (%esp)")

#define MOV_DX_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X10 # movw %dx, (%rax)")
#define MOV_DX_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X13 # movw %dx, (%rbx)")
#define MOV_DX_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X11 # movw %dx, (%rcx)")
#define MOV_DX_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X12 # movw %dx, (%rdx)")
#define MOV_DX_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X17 # movw %dx, (%rdi)")
#define MOV_DX_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X16 # movw %dx, (%rsi)")
#define MOV_DX_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X55, 0X00 # movw %dx, (%rbp)")
#define MOV_DX_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X14, 0X24 # movw %dx, (%rsp)")
#define MOV_DX_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X10 # movw %dx, (%r8)")
#define MOV_DX_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X11 # movw %dx, (%r9)")
#define MOV_DX_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X12 # movw %dx, (%r10)")
#define MOV_DX_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X13 # movw %dx, (%r11)")
#define MOV_DX_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X14, 0X24 # movw %dx, (%r12)")
#define MOV_DX_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X55, 0X00 # movw %dx, (%r13)")
#define MOV_DX_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X16 # movw %dx, (%r14)")
#define MOV_DX_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X17 # movw %dx, (%r15)")
#define MOV_DX_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X10 # movw %dx, (%eax)")
#define MOV_DX_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X13 # movw %dx, (%ebx)")
#define MOV_DX_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X11 # movw %dx, (%ecx)")
#define MOV_DX_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X12 # movw %dx, (%edx)")
#define MOV_DX_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X17 # movw %dx, (%edi)")
#define MOV_DX_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X16 # movw %dx, (%esi)")
#define MOV_DX_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X55, 0X00 # movw %dx, (%ebp)")
#define MOV_DX_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X14, 0X24 # movw %dx, (%esp)")

#define MOV_DI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X38 # movw %di, (%rax)")
#define MOV_DI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X3B # movw %di, (%rbx)")
#define MOV_DI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X39 # movw %di, (%rcx)")
#define MOV_DI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X3A # movw %di, (%rdx)")
#define MOV_DI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X3F # movw %di, (%rdi)")
#define MOV_DI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X3E # movw %di, (%rsi)")
#define MOV_DI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X7D, 0X00 # movw %di, (%rbp)")
#define MOV_DI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X3C, 0X24 # movw %di, (%rsp)")
#define MOV_DI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X38 # movw %di, (%r8)")
#define MOV_DI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X39 # movw %di, (%r9)")
#define MOV_DI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X3A # movw %di, (%r10)")
#define MOV_DI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X3B # movw %di, (%r11)")
#define MOV_DI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X3C, 0X24 # movw %di, (%r12)")
#define MOV_DI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X7D, 0X00 # movw %di, (%r13)")
#define MOV_DI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X3E # movw %di, (%r14)")
#define MOV_DI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X3F # movw %di, (%r15)")
#define MOV_DI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X38 # movw %di, (%eax)")
#define MOV_DI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3B # movw %di, (%ebx)")
#define MOV_DI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X39 # movw %di, (%ecx)")
#define MOV_DI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3A # movw %di, (%edx)")
#define MOV_DI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3F # movw %di, (%edi)")
#define MOV_DI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3E # movw %di, (%esi)")
#define MOV_DI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X7D, 0X00 # movw %di, (%ebp)")
#define MOV_DI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X3C, 0X24 # movw %di, (%esp)")

#define MOV_SI_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X30 # movw %si, (%rax)")
#define MOV_SI_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X33 # movw %si, (%rbx)")
#define MOV_SI_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X31 # movw %si, (%rcx)")
#define MOV_SI_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X32 # movw %si, (%rdx)")
#define MOV_SI_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X37 # movw %si, (%rdi)")
#define MOV_SI_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X36 # movw %si, (%rsi)")
#define MOV_SI_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X75, 0X00 # movw %si, (%rbp)")
#define MOV_SI_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X34, 0X24 # movw %si, (%rsp)")
#define MOV_SI_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X30 # movw %si, (%r8)")
#define MOV_SI_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X31 # movw %si, (%r9)")
#define MOV_SI_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X32 # movw %si, (%r10)")
#define MOV_SI_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X33 # movw %si, (%r11)")
#define MOV_SI_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X34, 0X24 # movw %si, (%r12)")
#define MOV_SI_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X75, 0X00 # movw %si, (%r13)")
#define MOV_SI_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X36 # movw %si, (%r14)")
#define MOV_SI_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X37 # movw %si, (%r15)")
#define MOV_SI_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X30 # movw %si, (%eax)")
#define MOV_SI_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X33 # movw %si, (%ebx)")
#define MOV_SI_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X31 # movw %si, (%ecx)")
#define MOV_SI_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X32 # movw %si, (%edx)")
#define MOV_SI_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X37 # movw %si, (%edi)")
#define MOV_SI_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X36 # movw %si, (%esi)")
#define MOV_SI_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X75, 0X00 # movw %si, (%ebp)")
#define MOV_SI_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X34, 0X24 # movw %si, (%esp)")

#define MOV_BP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X28 # movw %bp, (%rax)")
#define MOV_BP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X2B # movw %bp, (%rbx)")
#define MOV_BP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X29 # movw %bp, (%rcx)")
#define MOV_BP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X2A # movw %bp, (%rdx)")
#define MOV_BP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X2F # movw %bp, (%rdi)")
#define MOV_BP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X2E # movw %bp, (%rsi)")
#define MOV_BP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X6D, 0X00 # movw %bp, (%rbp)")
#define MOV_BP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X2C, 0X24 # movw %bp, (%rsp)")
#define MOV_BP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X28 # movw %bp, (%r8)")
#define MOV_BP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X29 # movw %bp, (%r9)")
#define MOV_BP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X2A # movw %bp, (%r10)")
#define MOV_BP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X2B # movw %bp, (%r11)")
#define MOV_BP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X2C, 0X24 # movw %bp, (%r12)")
#define MOV_BP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X6D, 0X00 # movw %bp, (%r13)")
#define MOV_BP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X2E # movw %bp, (%r14)")
#define MOV_BP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X2F # movw %bp, (%r15)")
#define MOV_BP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X28 # movw %bp, (%eax)")
#define MOV_BP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2B # movw %bp, (%ebx)")
#define MOV_BP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X29 # movw %bp, (%ecx)")
#define MOV_BP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2A # movw %bp, (%edx)")
#define MOV_BP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2F # movw %bp, (%edi)")
#define MOV_BP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2E # movw %bp, (%esi)")
#define MOV_BP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X6D, 0X00 # movw %bp, (%ebp)")
#define MOV_BP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X2C, 0X24 # movw %bp, (%esp)")

#define MOV_SP_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X89, 0X20 # movw %sp, (%rax)")
#define MOV_SP_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X89, 0X23 # movw %sp, (%rbx)")
#define MOV_SP_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X89, 0X21 # movw %sp, (%rcx)")
#define MOV_SP_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X89, 0X22 # movw %sp, (%rdx)")
#define MOV_SP_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X89, 0X27 # movw %sp, (%rdi)")
#define MOV_SP_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X89, 0X26 # movw %sp, (%rsi)")
#define MOV_SP_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X89, 0X65, 0X00 # movw %sp, (%rbp)")
#define MOV_SP_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X89, 0X24, 0X24 # movw %sp, (%rsp)")
#define MOV_SP_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X20 # movw %sp, (%r8)")
#define MOV_SP_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X21 # movw %sp, (%r9)")
#define MOV_SP_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X22 # movw %sp, (%r10)")
#define MOV_SP_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X23 # movw %sp, (%r11)")
#define MOV_SP_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X24, 0X24 # movw %sp, (%r12)")
#define MOV_SP_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X65, 0X00 # movw %sp, (%r13)")
#define MOV_SP_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X26 # movw %sp, (%r14)")
#define MOV_SP_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X41, 0X89, 0X27 # movw %sp, (%r15)")
#define MOV_SP_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X20 # movw %sp, (%eax)")
#define MOV_SP_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X23 # movw %sp, (%ebx)")
#define MOV_SP_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X21 # movw %sp, (%ecx)")
#define MOV_SP_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X89, 0X22 # movw %sp, (%edx)")
#define MOV_SP_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X27 # movw %sp, (%edi)")
#define MOV_SP_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X89, 0X26 # movw %sp, (%esi)")
#define MOV_SP_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X65, 0X00 # movw %sp, (%ebp)")
#define MOV_SP_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X89, 0X24, 0X24 # movw %sp, (%esp)")

#define MOV_R8W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X00 # movw %r8w, (%rax)")
#define MOV_R8W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X03 # movw %r8w, (%rbx)")
#define MOV_R8W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X01 # movw %r8w, (%rcx)")
#define MOV_R8W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X02 # movw %r8w, (%rdx)")
#define MOV_R8W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X07 # movw %r8w, (%rdi)")
#define MOV_R8W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X06 # movw %r8w, (%rsi)")
#define MOV_R8W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X45, 0X00 # movw %r8w, (%rbp)")
#define MOV_R8W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X04, 0X24 # movw %r8w, (%rsp)")
#define MOV_R8W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X00 # movw %r8w, (%r8)")
#define MOV_R8W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X01 # movw %r8w, (%r9)")
#define MOV_R8W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X02 # movw %r8w, (%r10)")
#define MOV_R8W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X03 # movw %r8w, (%r11)")
#define MOV_R8W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X04, 0X24 # movw %r8w, (%r12)")
#define MOV_R8W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X45, 0X00 # movw %r8w, (%r13)")
#define MOV_R8W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X06 # movw %r8w, (%r14)")
#define MOV_R8W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X07 # movw %r8w, (%r15)")
#define MOV_R8W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X00 # movw %r8w, (%eax)")
#define MOV_R8W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X03 # movw %r8w, (%ebx)")
#define MOV_R8W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X01 # movw %r8w, (%ecx)")
#define MOV_R8W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X02 # movw %r8w, (%edx)")
#define MOV_R8W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X07 # movw %r8w, (%edi)")
#define MOV_R8W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X06 # movw %r8w, (%esi)")
#define MOV_R8W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X45, 0X00 # movw %r8w, (%ebp)")
#define MOV_R8W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X04, 0X24 # movw %r8w, (%esp)")

#define MOV_R9W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X08 # movw %r9w, (%rax)")
#define MOV_R9W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0B # movw %r9w, (%rbx)")
#define MOV_R9W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X09 # movw %r9w, (%rcx)")
#define MOV_R9W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0A # movw %r9w, (%rdx)")
#define MOV_R9W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0F # movw %r9w, (%rdi)")
#define MOV_R9W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0E # movw %r9w, (%rsi)")
#define MOV_R9W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X4D, 0X00 # movw %r9w, (%rbp)")
#define MOV_R9W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X0C, 0X24 # movw %r9w, (%rsp)")
#define MOV_R9W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X08 # movw %r9w, (%r8)")
#define MOV_R9W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X09 # movw %r9w, (%r9)")
#define MOV_R9W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X0A # movw %r9w, (%r10)")
#define MOV_R9W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X0B # movw %r9w, (%r11)")
#define MOV_R9W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X0C, 0X24 # movw %r9w, (%r12)")
#define MOV_R9W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X4D, 0X00 # movw %r9w, (%r13)")
#define MOV_R9W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X0E # movw %r9w, (%r14)")
#define MOV_R9W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X0F # movw %r9w, (%r15)")
#define MOV_R9W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X08 # movw %r9w, (%eax)")
#define MOV_R9W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X0B # movw %r9w, (%ebx)")
#define MOV_R9W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X09 # movw %r9w, (%ecx)")
#define MOV_R9W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X0A # movw %r9w, (%edx)")
#define MOV_R9W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X0F # movw %r9w, (%edi)")
#define MOV_R9W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X0E # movw %r9w, (%esi)")
#define MOV_R9W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X4D, 0X00 # movw %r9w, (%ebp)")
#define MOV_R9W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X0C, 0X24 # movw %r9w, (%esp)")

#define MOV_R10W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X10 # movw %r10w, (%rax)")
#define MOV_R10W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X13 # movw %r10w, (%rbx)")
#define MOV_R10W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X11 # movw %r10w, (%rcx)")
#define MOV_R10W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X12 # movw %r10w, (%rdx)")
#define MOV_R10W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X17 # movw %r10w, (%rdi)")
#define MOV_R10W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X16 # movw %r10w, (%rsi)")
#define MOV_R10W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X55, 0X00 # movw %r10w, (%rbp)")
#define MOV_R10W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X14, 0X24 # movw %r10w, (%rsp)")
#define MOV_R10W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X10 # movw %r10w, (%r8)")
#define MOV_R10W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X11 # movw %r10w, (%r9)")
#define MOV_R10W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X12 # movw %r10w, (%r10)")
#define MOV_R10W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X13 # movw %r10w, (%r11)")
#define MOV_R10W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X14, 0X24 # movw %r10w, (%r12)")
#define MOV_R10W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X55, 0X00 # movw %r10w, (%r13)")
#define MOV_R10W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X16 # movw %r10w, (%r14)")
#define MOV_R10W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X17 # movw %r10w, (%r15)")
#define MOV_R10W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X10 # movw %r10w, (%eax)")
#define MOV_R10W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X13 # movw %r10w, (%ebx)")
#define MOV_R10W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X11 # movw %r10w, (%ecx)")
#define MOV_R10W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X12 # movw %r10w, (%edx)")
#define MOV_R10W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X17 # movw %r10w, (%edi)")
#define MOV_R10W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X16 # movw %r10w, (%esi)")
#define MOV_R10W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X55, 0X00 # movw %r10w, (%ebp)")
#define MOV_R10W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X14, 0X24 # movw %r10w, (%esp)")

#define MOV_R11W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X18 # movw %r11w, (%rax)")
#define MOV_R11W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1B # movw %r11w, (%rbx)")
#define MOV_R11W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X19 # movw %r11w, (%rcx)")
#define MOV_R11W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1A # movw %r11w, (%rdx)")
#define MOV_R11W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1F # movw %r11w, (%rdi)")
#define MOV_R11W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1E # movw %r11w, (%rsi)")
#define MOV_R11W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X5D, 0X00 # movw %r11w, (%rbp)")
#define MOV_R11W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X1C, 0X24 # movw %r11w, (%rsp)")
#define MOV_R11W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X18 # movw %r11w, (%r8)")
#define MOV_R11W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X19 # movw %r11w, (%r9)")
#define MOV_R11W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X1A # movw %r11w, (%r10)")
#define MOV_R11W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X1B # movw %r11w, (%r11)")
#define MOV_R11W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X1C, 0X24 # movw %r11w, (%r12)")
#define MOV_R11W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X5D, 0X00 # movw %r11w, (%r13)")
#define MOV_R11W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X1E # movw %r11w, (%r14)")
#define MOV_R11W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X1F # movw %r11w, (%r15)")
#define MOV_R11W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X18 # movw %r11w, (%eax)")
#define MOV_R11W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X1B # movw %r11w, (%ebx)")
#define MOV_R11W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X19 # movw %r11w, (%ecx)")
#define MOV_R11W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X1A # movw %r11w, (%edx)")
#define MOV_R11W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X1F # movw %r11w, (%edi)")
#define MOV_R11W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X1E # movw %r11w, (%esi)")
#define MOV_R11W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X5D, 0X00 # movw %r11w, (%ebp)")
#define MOV_R11W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X1C, 0X24 # movw %r11w, (%esp)")

#define MOV_R12W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X20 # movw %r12w, (%rax)")
#define MOV_R12W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X23 # movw %r12w, (%rbx)")
#define MOV_R12W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X21 # movw %r12w, (%rcx)")
#define MOV_R12W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X22 # movw %r12w, (%rdx)")
#define MOV_R12W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X27 # movw %r12w, (%rdi)")
#define MOV_R12W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X26 # movw %r12w, (%rsi)")
#define MOV_R12W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X65, 0X00 # movw %r12w, (%rbp)")
#define MOV_R12W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X24, 0X24 # movw %r12w, (%rsp)")
#define MOV_R12W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X20 # movw %r12w, (%r8)")
#define MOV_R12W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X21 # movw %r12w, (%r9)")
#define MOV_R12W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X22 # movw %r12w, (%r10)")
#define MOV_R12W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X23 # movw %r12w, (%r11)")
#define MOV_R12W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X24, 0X24 # movw %r12w, (%r12)")
#define MOV_R12W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X65, 0X00 # movw %r12w, (%r13)")
#define MOV_R12W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X26 # movw %r12w, (%r14)")
#define MOV_R12W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X27 # movw %r12w, (%r15)")
#define MOV_R12W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X20 # movw %r12w, (%eax)")
#define MOV_R12W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X23 # movw %r12w, (%ebx)")
#define MOV_R12W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X21 # movw %r12w, (%ecx)")
#define MOV_R12W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X22 # movw %r12w, (%edx)")
#define MOV_R12W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X27 # movw %r12w, (%edi)")
#define MOV_R12W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X26 # movw %r12w, (%esi)")
#define MOV_R12W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X65, 0X00 # movw %r12w, (%ebp)")
#define MOV_R12W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X24, 0X24 # movw %r12w, (%esp)")

#define MOV_R13W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X28 # movw %r13w, (%rax)")
#define MOV_R13W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2B # movw %r13w, (%rbx)")
#define MOV_R13W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X29 # movw %r13w, (%rcx)")
#define MOV_R13W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2A # movw %r13w, (%rdx)")
#define MOV_R13W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2F # movw %r13w, (%rdi)")
#define MOV_R13W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2E # movw %r13w, (%rsi)")
#define MOV_R13W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X6D, 0X00 # movw %r13w, (%rbp)")
#define MOV_R13W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X2C, 0X24 # movw %r13w, (%rsp)")
#define MOV_R13W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X28 # movw %r13w, (%r8)")
#define MOV_R13W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X29 # movw %r13w, (%r9)")
#define MOV_R13W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X2A # movw %r13w, (%r10)")
#define MOV_R13W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X2B # movw %r13w, (%r11)")
#define MOV_R13W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X2C, 0X24 # movw %r13w, (%r12)")
#define MOV_R13W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X6D, 0X00 # movw %r13w, (%r13)")
#define MOV_R13W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X2E # movw %r13w, (%r14)")
#define MOV_R13W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X2F # movw %r13w, (%r15)")
#define MOV_R13W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X28 # movw %r13w, (%eax)")
#define MOV_R13W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X2B # movw %r13w, (%ebx)")
#define MOV_R13W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X29 # movw %r13w, (%ecx)")
#define MOV_R13W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X2A # movw %r13w, (%edx)")
#define MOV_R13W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X2F # movw %r13w, (%edi)")
#define MOV_R13W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X2E # movw %r13w, (%esi)")
#define MOV_R13W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X6D, 0X00 # movw %r13w, (%ebp)")
#define MOV_R13W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X2C, 0X24 # movw %r13w, (%esp)")

#define MOV_R14W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X30 # movw %r14w, (%rax)")
#define MOV_R14W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X33 # movw %r14w, (%rbx)")
#define MOV_R14W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X31 # movw %r14w, (%rcx)")
#define MOV_R14W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X32 # movw %r14w, (%rdx)")
#define MOV_R14W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X37 # movw %r14w, (%rdi)")
#define MOV_R14W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X36 # movw %r14w, (%rsi)")
#define MOV_R14W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X75, 0X00 # movw %r14w, (%rbp)")
#define MOV_R14W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X34, 0X24 # movw %r14w, (%rsp)")
#define MOV_R14W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X30 # movw %r14w, (%r8)")
#define MOV_R14W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X31 # movw %r14w, (%r9)")
#define MOV_R14W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X32 # movw %r14w, (%r10)")
#define MOV_R14W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X33 # movw %r14w, (%r11)")
#define MOV_R14W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X34, 0X24 # movw %r14w, (%r12)")
#define MOV_R14W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X75, 0X00 # movw %r14w, (%r13)")
#define MOV_R14W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X36 # movw %r14w, (%r14)")
#define MOV_R14W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X37 # movw %r14w, (%r15)")
#define MOV_R14W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X30 # movw %r14w, (%eax)")
#define MOV_R14W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X33 # movw %r14w, (%ebx)")
#define MOV_R14W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X31 # movw %r14w, (%ecx)")
#define MOV_R14W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X32 # movw %r14w, (%edx)")
#define MOV_R14W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X37 # movw %r14w, (%edi)")
#define MOV_R14W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X36 # movw %r14w, (%esi)")
#define MOV_R14W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X75, 0X00 # movw %r14w, (%ebp)")
#define MOV_R14W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X34, 0X24 # movw %r14w, (%esp)")

#define MOV_R15W_TO_PTR_RAX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X38 # movw %r15w, (%rax)")
#define MOV_R15W_TO_PTR_RBX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3B # movw %r15w, (%rbx)")
#define MOV_R15W_TO_PTR_RCX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X39 # movw %r15w, (%rcx)")
#define MOV_R15W_TO_PTR_RDX CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3A # movw %r15w, (%rdx)")
#define MOV_R15W_TO_PTR_RDI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3F # movw %r15w, (%rdi)")
#define MOV_R15W_TO_PTR_RSI CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3E # movw %r15w, (%rsi)")
#define MOV_R15W_TO_PTR_RBP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X7D, 0X00 # movw %r15w, (%rbp)")
#define MOV_R15W_TO_PTR_RSP CMT_ASM(".byte 0X66, 0X44, 0X89, 0X3C, 0X24 # movw %r15w, (%rsp)")
#define MOV_R15W_TO_PTR_R8 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X38 # movw %r15w, (%r8)")
#define MOV_R15W_TO_PTR_R9 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X39 # movw %r15w, (%r9)")
#define MOV_R15W_TO_PTR_R10 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X3A # movw %r15w, (%r10)")
#define MOV_R15W_TO_PTR_R11 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X3B # movw %r15w, (%r11)")
#define MOV_R15W_TO_PTR_R12 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X3C, 0X24 # movw %r15w, (%r12)")
#define MOV_R15W_TO_PTR_R13 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X7D, 0X00 # movw %r15w, (%r13)")
#define MOV_R15W_TO_PTR_R14 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X3E # movw %r15w, (%r14)")
#define MOV_R15W_TO_PTR_R15 CMT_ASM(".byte 0X66, 0X45, 0X89, 0X3F # movw %r15w, (%r15)")
#define MOV_R15W_TO_PTR_EAX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X38 # movw %r15w, (%eax)")
#define MOV_R15W_TO_PTR_EBX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X3B # movw %r15w, (%ebx)")
#define MOV_R15W_TO_PTR_ECX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X39 # movw %r15w, (%ecx)")
#define MOV_R15W_TO_PTR_EDX CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X3A # movw %r15w, (%edx)")
#define MOV_R15W_TO_PTR_EDI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X3F # movw %r15w, (%edi)")
#define MOV_R15W_TO_PTR_ESI CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X3E # movw %r15w, (%esi)")
#define MOV_R15W_TO_PTR_EBP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X7D, 0X00 # movw %r15w, (%ebp)")
#define MOV_R15W_TO_PTR_ESP CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X3C, 0X24 # movw %r15w, (%esp)")

#define MOV_AX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X80 # movw " _(VALUE) "(%rax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X83 # movw " _(VALUE) "(%rbx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X81 # movw " _(VALUE) "(%rcx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X82 # movw " _(VALUE) "(%rdx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X87 # movw " _(VALUE) "(%rdi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X86 # movw " _(VALUE) "(%rsi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X85 # movw " _(VALUE) "(%rbp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%rsp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X80 # movw " _(VALUE) "(%r8), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X81 # movw " _(VALUE) "(%r9), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X82 # movw " _(VALUE) "(%r10), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X83 # movw " _(VALUE) "(%r11), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%r12), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X85 # movw " _(VALUE) "(%r13), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X86 # movw " _(VALUE) "(%r14), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X87 # movw " _(VALUE) "(%r15), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X80 # movw " _(VALUE) "(%eax), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X83 # movw " _(VALUE) "(%ebx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X81 # movw " _(VALUE) "(%ecx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X82 # movw " _(VALUE) "(%edx), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X87 # movw " _(VALUE) "(%edi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X86 # movw " _(VALUE) "(%esi), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X85 # movw " _(VALUE) "(%ebp), %ax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%esp), %ax")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X98 # movw " _(VALUE) "(%rax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9B # movw " _(VALUE) "(%rbx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X99 # movw " _(VALUE) "(%rcx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9A # movw " _(VALUE) "(%rdx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9F # movw " _(VALUE) "(%rdi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9E # movw " _(VALUE) "(%rsi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9D # movw " _(VALUE) "(%rbp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%rsp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X98 # movw " _(VALUE) "(%r8), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X99 # movw " _(VALUE) "(%r9), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9A # movw " _(VALUE) "(%r10), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9B # movw " _(VALUE) "(%r11), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%r12), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9D # movw " _(VALUE) "(%r13), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9E # movw " _(VALUE) "(%r14), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X9F # movw " _(VALUE) "(%r15), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X98 # movw " _(VALUE) "(%eax), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9B # movw " _(VALUE) "(%ebx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X99 # movw " _(VALUE) "(%ecx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9A # movw " _(VALUE) "(%edx), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9F # movw " _(VALUE) "(%edi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9E # movw " _(VALUE) "(%esi), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9D # movw " _(VALUE) "(%ebp), %bx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%esp), %bx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_CX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X88 # movw " _(VALUE) "(%rax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8B # movw " _(VALUE) "(%rbx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X89 # movw " _(VALUE) "(%rcx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8A # movw " _(VALUE) "(%rdx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8F # movw " _(VALUE) "(%rdi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8E # movw " _(VALUE) "(%rsi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8D # movw " _(VALUE) "(%rbp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%rsp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X88 # movw " _(VALUE) "(%r8), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X89 # movw " _(VALUE) "(%r9), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8A # movw " _(VALUE) "(%r10), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8B # movw " _(VALUE) "(%r11), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%r12), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8D # movw " _(VALUE) "(%r13), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8E # movw " _(VALUE) "(%r14), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X8F # movw " _(VALUE) "(%r15), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X88 # movw " _(VALUE) "(%eax), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8B # movw " _(VALUE) "(%ebx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X89 # movw " _(VALUE) "(%ecx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8A # movw " _(VALUE) "(%edx), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8F # movw " _(VALUE) "(%edi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8E # movw " _(VALUE) "(%esi), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8D # movw " _(VALUE) "(%ebp), %cx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%esp), %cx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X90 # movw " _(VALUE) "(%rax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X93 # movw " _(VALUE) "(%rbx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X91 # movw " _(VALUE) "(%rcx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X92 # movw " _(VALUE) "(%rdx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X97 # movw " _(VALUE) "(%rdi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X96 # movw " _(VALUE) "(%rsi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X95 # movw " _(VALUE) "(%rbp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%rsp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X90 # movw " _(VALUE) "(%r8), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X91 # movw " _(VALUE) "(%r9), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X92 # movw " _(VALUE) "(%r10), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X93 # movw " _(VALUE) "(%r11), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%r12), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X95 # movw " _(VALUE) "(%r13), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X96 # movw " _(VALUE) "(%r14), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0X97 # movw " _(VALUE) "(%r15), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X90 # movw " _(VALUE) "(%eax), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X93 # movw " _(VALUE) "(%ebx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X91 # movw " _(VALUE) "(%ecx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X92 # movw " _(VALUE) "(%edx), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X97 # movw " _(VALUE) "(%edi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X96 # movw " _(VALUE) "(%esi), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X95 # movw " _(VALUE) "(%ebp), %dx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%esp), %dx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB8 # movw " _(VALUE) "(%rax), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBB # movw " _(VALUE) "(%rbx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB9 # movw " _(VALUE) "(%rcx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBA # movw " _(VALUE) "(%rdx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBF # movw " _(VALUE) "(%rdi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBE # movw " _(VALUE) "(%rsi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBD # movw " _(VALUE) "(%rbp), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%rsp), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB8 # movw " _(VALUE) "(%r8), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB9 # movw " _(VALUE) "(%r9), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBA # movw " _(VALUE) "(%r10), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBB # movw " _(VALUE) "(%r11), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%r12), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBD # movw " _(VALUE) "(%r13), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBE # movw " _(VALUE) "(%r14), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XBF # movw " _(VALUE) "(%r15), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB8 # movw " _(VALUE) "(%eax), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBB # movw " _(VALUE) "(%ebx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB9 # movw " _(VALUE) "(%ecx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBA # movw " _(VALUE) "(%edx), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBF # movw " _(VALUE) "(%edi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBE # movw " _(VALUE) "(%esi), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBD # movw " _(VALUE) "(%ebp), %di")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%esp), %di")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB0 # movw " _(VALUE) "(%rax), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB3 # movw " _(VALUE) "(%rbx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB1 # movw " _(VALUE) "(%rcx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB2 # movw " _(VALUE) "(%rdx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB7 # movw " _(VALUE) "(%rdi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB6 # movw " _(VALUE) "(%rsi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB5 # movw " _(VALUE) "(%rbp), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%rsp), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB0 # movw " _(VALUE) "(%r8), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB1 # movw " _(VALUE) "(%r9), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB2 # movw " _(VALUE) "(%r10), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB3 # movw " _(VALUE) "(%r11), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%r12), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB5 # movw " _(VALUE) "(%r13), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB6 # movw " _(VALUE) "(%r14), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XB7 # movw " _(VALUE) "(%r15), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB0 # movw " _(VALUE) "(%eax), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB3 # movw " _(VALUE) "(%ebx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB1 # movw " _(VALUE) "(%ecx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB2 # movw " _(VALUE) "(%edx), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB7 # movw " _(VALUE) "(%edi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB6 # movw " _(VALUE) "(%esi), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB5 # movw " _(VALUE) "(%ebp), %si")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%esp), %si")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA8 # movw " _(VALUE) "(%rax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAB # movw " _(VALUE) "(%rbx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA9 # movw " _(VALUE) "(%rcx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAA # movw " _(VALUE) "(%rdx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAF # movw " _(VALUE) "(%rdi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAE # movw " _(VALUE) "(%rsi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAD # movw " _(VALUE) "(%rbp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%rsp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA8 # movw " _(VALUE) "(%r8), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA9 # movw " _(VALUE) "(%r9), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAA # movw " _(VALUE) "(%r10), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAB # movw " _(VALUE) "(%r11), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%r12), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAD # movw " _(VALUE) "(%r13), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAE # movw " _(VALUE) "(%r14), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XAF # movw " _(VALUE) "(%r15), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA8 # movw " _(VALUE) "(%eax), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAB # movw " _(VALUE) "(%ebx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA9 # movw " _(VALUE) "(%ecx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAA # movw " _(VALUE) "(%edx), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAF # movw " _(VALUE) "(%edi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAE # movw " _(VALUE) "(%esi), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAD # movw " _(VALUE) "(%ebp), %bp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%esp), %bp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA0 # movw " _(VALUE) "(%rax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA3 # movw " _(VALUE) "(%rbx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA1 # movw " _(VALUE) "(%rcx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA2 # movw " _(VALUE) "(%rdx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA7 # movw " _(VALUE) "(%rdi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA6 # movw " _(VALUE) "(%rsi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA5 # movw " _(VALUE) "(%rbp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%rsp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA0 # movw " _(VALUE) "(%r8), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA1 # movw " _(VALUE) "(%r9), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA2 # movw " _(VALUE) "(%r10), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA3 # movw " _(VALUE) "(%r11), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%r12), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA5 # movw " _(VALUE) "(%r13), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA6 # movw " _(VALUE) "(%r14), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X8B, 0XA7 # movw " _(VALUE) "(%r15), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA0 # movw " _(VALUE) "(%eax), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA3 # movw " _(VALUE) "(%ebx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA1 # movw " _(VALUE) "(%ecx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA2 # movw " _(VALUE) "(%edx), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA7 # movw " _(VALUE) "(%edi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA6 # movw " _(VALUE) "(%esi), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA5 # movw " _(VALUE) "(%ebp), %sp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%esp), %sp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X80 # movw " _(VALUE) "(%rax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X83 # movw " _(VALUE) "(%rbx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X81 # movw " _(VALUE) "(%rcx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X82 # movw " _(VALUE) "(%rdx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X87 # movw " _(VALUE) "(%rdi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X86 # movw " _(VALUE) "(%rsi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X85 # movw " _(VALUE) "(%rbp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%rsp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X80 # movw " _(VALUE) "(%r8), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X81 # movw " _(VALUE) "(%r9), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X82 # movw " _(VALUE) "(%r10), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X83 # movw " _(VALUE) "(%r11), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%r12), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X85 # movw " _(VALUE) "(%r13), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X86 # movw " _(VALUE) "(%r14), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X87 # movw " _(VALUE) "(%r15), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X80 # movw " _(VALUE) "(%eax), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X83 # movw " _(VALUE) "(%ebx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X81 # movw " _(VALUE) "(%ecx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X82 # movw " _(VALUE) "(%edx), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X87 # movw " _(VALUE) "(%edi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X86 # movw " _(VALUE) "(%esi), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X85 # movw " _(VALUE) "(%ebp), %r8w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X84, 0X24 # movw " _(VALUE) "(%esp), %r8w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X88 # movw " _(VALUE) "(%rax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8B # movw " _(VALUE) "(%rbx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X89 # movw " _(VALUE) "(%rcx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8A # movw " _(VALUE) "(%rdx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8F # movw " _(VALUE) "(%rdi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8E # movw " _(VALUE) "(%rsi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8D # movw " _(VALUE) "(%rbp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%rsp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X88 # movw " _(VALUE) "(%r8), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X89 # movw " _(VALUE) "(%r9), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8A # movw " _(VALUE) "(%r10), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8B # movw " _(VALUE) "(%r11), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%r12), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8D # movw " _(VALUE) "(%r13), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8E # movw " _(VALUE) "(%r14), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X8F # movw " _(VALUE) "(%r15), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X88 # movw " _(VALUE) "(%eax), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8B # movw " _(VALUE) "(%ebx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X89 # movw " _(VALUE) "(%ecx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8A # movw " _(VALUE) "(%edx), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8F # movw " _(VALUE) "(%edi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8E # movw " _(VALUE) "(%esi), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8D # movw " _(VALUE) "(%ebp), %r9w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X8C, 0X24 # movw " _(VALUE) "(%esp), %r9w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X90 # movw " _(VALUE) "(%rax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X93 # movw " _(VALUE) "(%rbx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X91 # movw " _(VALUE) "(%rcx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X92 # movw " _(VALUE) "(%rdx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X97 # movw " _(VALUE) "(%rdi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X96 # movw " _(VALUE) "(%rsi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X95 # movw " _(VALUE) "(%rbp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%rsp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X90 # movw " _(VALUE) "(%r8), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X91 # movw " _(VALUE) "(%r9), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X92 # movw " _(VALUE) "(%r10), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X93 # movw " _(VALUE) "(%r11), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%r12), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X95 # movw " _(VALUE) "(%r13), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X96 # movw " _(VALUE) "(%r14), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X97 # movw " _(VALUE) "(%r15), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X90 # movw " _(VALUE) "(%eax), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X93 # movw " _(VALUE) "(%ebx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X91 # movw " _(VALUE) "(%ecx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X92 # movw " _(VALUE) "(%edx), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X97 # movw " _(VALUE) "(%edi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X96 # movw " _(VALUE) "(%esi), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X95 # movw " _(VALUE) "(%ebp), %r10w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X94, 0X24 # movw " _(VALUE) "(%esp), %r10w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X98 # movw " _(VALUE) "(%rax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9B # movw " _(VALUE) "(%rbx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X99 # movw " _(VALUE) "(%rcx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9A # movw " _(VALUE) "(%rdx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9F # movw " _(VALUE) "(%rdi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9E # movw " _(VALUE) "(%rsi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9D # movw " _(VALUE) "(%rbp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%rsp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X98 # movw " _(VALUE) "(%r8), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X99 # movw " _(VALUE) "(%r9), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9A # movw " _(VALUE) "(%r10), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9B # movw " _(VALUE) "(%r11), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%r12), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9D # movw " _(VALUE) "(%r13), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9E # movw " _(VALUE) "(%r14), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0X9F # movw " _(VALUE) "(%r15), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X98 # movw " _(VALUE) "(%eax), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9B # movw " _(VALUE) "(%ebx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X99 # movw " _(VALUE) "(%ecx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9A # movw " _(VALUE) "(%edx), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9F # movw " _(VALUE) "(%edi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9E # movw " _(VALUE) "(%esi), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9D # movw " _(VALUE) "(%ebp), %r11w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0X9C, 0X24 # movw " _(VALUE) "(%esp), %r11w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA0 # movw " _(VALUE) "(%rax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA3 # movw " _(VALUE) "(%rbx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA1 # movw " _(VALUE) "(%rcx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA2 # movw " _(VALUE) "(%rdx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA7 # movw " _(VALUE) "(%rdi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA6 # movw " _(VALUE) "(%rsi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA5 # movw " _(VALUE) "(%rbp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%rsp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA0 # movw " _(VALUE) "(%r8), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA1 # movw " _(VALUE) "(%r9), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA2 # movw " _(VALUE) "(%r10), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA3 # movw " _(VALUE) "(%r11), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%r12), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA5 # movw " _(VALUE) "(%r13), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA6 # movw " _(VALUE) "(%r14), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA7 # movw " _(VALUE) "(%r15), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA0 # movw " _(VALUE) "(%eax), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA3 # movw " _(VALUE) "(%ebx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA1 # movw " _(VALUE) "(%ecx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA2 # movw " _(VALUE) "(%edx), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA7 # movw " _(VALUE) "(%edi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA6 # movw " _(VALUE) "(%esi), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA5 # movw " _(VALUE) "(%ebp), %r12w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA4, 0X24 # movw " _(VALUE) "(%esp), %r12w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA8 # movw " _(VALUE) "(%rax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAB # movw " _(VALUE) "(%rbx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XA9 # movw " _(VALUE) "(%rcx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAA # movw " _(VALUE) "(%rdx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAF # movw " _(VALUE) "(%rdi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAE # movw " _(VALUE) "(%rsi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAD # movw " _(VALUE) "(%rbp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%rsp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA8 # movw " _(VALUE) "(%r8), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XA9 # movw " _(VALUE) "(%r9), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAA # movw " _(VALUE) "(%r10), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAB # movw " _(VALUE) "(%r11), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%r12), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAD # movw " _(VALUE) "(%r13), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAE # movw " _(VALUE) "(%r14), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XAF # movw " _(VALUE) "(%r15), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA8 # movw " _(VALUE) "(%eax), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAB # movw " _(VALUE) "(%ebx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XA9 # movw " _(VALUE) "(%ecx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAA # movw " _(VALUE) "(%edx), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAF # movw " _(VALUE) "(%edi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAE # movw " _(VALUE) "(%esi), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAD # movw " _(VALUE) "(%ebp), %r13w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XAC, 0X24 # movw " _(VALUE) "(%esp), %r13w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB0 # movw " _(VALUE) "(%rax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB3 # movw " _(VALUE) "(%rbx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB1 # movw " _(VALUE) "(%rcx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB2 # movw " _(VALUE) "(%rdx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB7 # movw " _(VALUE) "(%rdi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB6 # movw " _(VALUE) "(%rsi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB5 # movw " _(VALUE) "(%rbp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%rsp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB0 # movw " _(VALUE) "(%r8), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB1 # movw " _(VALUE) "(%r9), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB2 # movw " _(VALUE) "(%r10), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB3 # movw " _(VALUE) "(%r11), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%r12), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB5 # movw " _(VALUE) "(%r13), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB6 # movw " _(VALUE) "(%r14), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB7 # movw " _(VALUE) "(%r15), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB0 # movw " _(VALUE) "(%eax), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB3 # movw " _(VALUE) "(%ebx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB1 # movw " _(VALUE) "(%ecx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB2 # movw " _(VALUE) "(%edx), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB7 # movw " _(VALUE) "(%edi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB6 # movw " _(VALUE) "(%esi), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB5 # movw " _(VALUE) "(%ebp), %r14w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB4, 0X24 # movw " _(VALUE) "(%esp), %r14w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15W_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB8 # movw " _(VALUE) "(%rax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBB # movw " _(VALUE) "(%rbx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XB9 # movw " _(VALUE) "(%rcx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBA # movw " _(VALUE) "(%rdx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBF # movw " _(VALUE) "(%rdi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBE # movw " _(VALUE) "(%rsi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBD # movw " _(VALUE) "(%rbp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%rsp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB8 # movw " _(VALUE) "(%r8), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XB9 # movw " _(VALUE) "(%r9), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBA # movw " _(VALUE) "(%r10), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBB # movw " _(VALUE) "(%r11), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%r12), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBD # movw " _(VALUE) "(%r13), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBE # movw " _(VALUE) "(%r14), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X8B, 0XBF # movw " _(VALUE) "(%r15), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB8 # movw " _(VALUE) "(%eax), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBB # movw " _(VALUE) "(%ebx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XB9 # movw " _(VALUE) "(%ecx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBA # movw " _(VALUE) "(%edx), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBF # movw " _(VALUE) "(%edi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBE # movw " _(VALUE) "(%esi), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBD # movw " _(VALUE) "(%ebp), %r15w")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X8B, 0XBC, 0X24 # movw " _(VALUE) "(%esp), %r15w")\
	CMT_ASM(".long " _(VALUE))

#define MOV_AX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X80 # movw %ax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X83 # movw %ax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X81 # movw %ax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X82 # movw %ax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X87 # movw %ax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X86 # movw %ax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X85 # movw %ax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X84, 0X24 # movw %ax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X80 # movw %ax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X81 # movw %ax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X82 # movw %ax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X83 # movw %ax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X84, 0X24 # movw %ax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X85 # movw %ax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X86 # movw %ax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X87 # movw %ax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X80 # movw %ax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X83 # movw %ax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X81 # movw %ax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X82 # movw %ax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X87 # movw %ax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X86 # movw %ax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X85 # movw %ax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_AX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X84, 0X24 # movw %ax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X98 # movw %bx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9B # movw %bx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X99 # movw %bx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9A # movw %bx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9F # movw %bx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9E # movw %bx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9D # movw %bx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X9C, 0X24 # movw %bx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X98 # movw %bx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X99 # movw %bx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9A # movw %bx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9B # movw %bx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9C, 0X24 # movw %bx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9D # movw %bx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9E # movw %bx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X9F # movw %bx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X98 # movw %bx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9B # movw %bx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X99 # movw %bx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9A # movw %bx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9F # movw %bx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9E # movw %bx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9D # movw %bx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X9C, 0X24 # movw %bx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_CX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X88 # movw %cx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8B # movw %cx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X89 # movw %cx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8A # movw %cx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8F # movw %cx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8E # movw %cx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8D # movw %cx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X8C, 0X24 # movw %cx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X88 # movw %cx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X89 # movw %cx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8A # movw %cx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8B # movw %cx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8C, 0X24 # movw %cx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8D # movw %cx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8E # movw %cx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X8F # movw %cx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X88 # movw %cx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8B # movw %cx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X89 # movw %cx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8A # movw %cx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8F # movw %cx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8E # movw %cx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8D # movw %cx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_CX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X8C, 0X24 # movw %cx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X90 # movw %dx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X93 # movw %dx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X91 # movw %dx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X92 # movw %dx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X97 # movw %dx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X96 # movw %dx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X95 # movw %dx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0X94, 0X24 # movw %dx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X90 # movw %dx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X91 # movw %dx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X92 # movw %dx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X93 # movw %dx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X94, 0X24 # movw %dx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X95 # movw %dx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X96 # movw %dx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0X97 # movw %dx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X90 # movw %dx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X93 # movw %dx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X91 # movw %dx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X92 # movw %dx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X97 # movw %dx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X96 # movw %dx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X95 # movw %dx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0X94, 0X24 # movw %dx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_DI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB8 # movw %di, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBB # movw %di, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB9 # movw %di, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBA # movw %di, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBF # movw %di, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBE # movw %di, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBD # movw %di, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XBC, 0X24 # movw %di, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB8 # movw %di, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB9 # movw %di, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBA # movw %di, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBB # movw %di, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBC, 0X24 # movw %di, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBD # movw %di, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBE # movw %di, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XBF # movw %di, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB8 # movw %di, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBB # movw %di, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB9 # movw %di, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBA # movw %di, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBF # movw %di, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBE # movw %di, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBD # movw %di, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_DI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XBC, 0X24 # movw %di, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB0 # movw %si, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB3 # movw %si, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB1 # movw %si, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB2 # movw %si, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB7 # movw %si, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB6 # movw %si, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB5 # movw %si, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XB4, 0X24 # movw %si, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB0 # movw %si, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB1 # movw %si, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB2 # movw %si, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB3 # movw %si, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB4, 0X24 # movw %si, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB5 # movw %si, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB6 # movw %si, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XB7 # movw %si, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB0 # movw %si, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB3 # movw %si, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB1 # movw %si, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB2 # movw %si, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB7 # movw %si, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB6 # movw %si, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB5 # movw %si, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XB4, 0X24 # movw %si, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_BP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA8 # movw %bp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAB # movw %bp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA9 # movw %bp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAA # movw %bp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAF # movw %bp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAE # movw %bp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAD # movw %bp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XAC, 0X24 # movw %bp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA8 # movw %bp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA9 # movw %bp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAA # movw %bp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAB # movw %bp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAC, 0X24 # movw %bp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAD # movw %bp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAE # movw %bp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XAF # movw %bp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA8 # movw %bp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAB # movw %bp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA9 # movw %bp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAA # movw %bp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAF # movw %bp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAE # movw %bp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAD # movw %bp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_BP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XAC, 0X24 # movw %bp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_SP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA0 # movw %sp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA3 # movw %sp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA1 # movw %sp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA2 # movw %sp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA7 # movw %sp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA6 # movw %sp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA5 # movw %sp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X89, 0XA4, 0X24 # movw %sp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA0 # movw %sp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA1 # movw %sp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA2 # movw %sp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA3 # movw %sp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA4, 0X24 # movw %sp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA5 # movw %sp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA6 # movw %sp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X41, 0X89, 0XA7 # movw %sp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA0 # movw %sp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA3 # movw %sp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA1 # movw %sp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA2 # movw %sp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA7 # movw %sp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA6 # movw %sp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA5 # movw %sp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_SP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X89, 0XA4, 0X24 # movw %sp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X80 # movw %r8w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X83 # movw %r8w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X81 # movw %r8w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X82 # movw %r8w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X87 # movw %r8w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X86 # movw %r8w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X85 # movw %r8w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X84, 0X24 # movw %r8w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X80 # movw %r8w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X81 # movw %r8w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X82 # movw %r8w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X83 # movw %r8w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X84, 0X24 # movw %r8w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X85 # movw %r8w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X86 # movw %r8w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X87 # movw %r8w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X80 # movw %r8w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X83 # movw %r8w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X81 # movw %r8w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X82 # movw %r8w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X87 # movw %r8w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X86 # movw %r8w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X85 # movw %r8w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X84, 0X24 # movw %r8w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X88 # movw %r9w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8B # movw %r9w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X89 # movw %r9w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8A # movw %r9w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8F # movw %r9w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8E # movw %r9w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8D # movw %r9w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X8C, 0X24 # movw %r9w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X88 # movw %r9w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X89 # movw %r9w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8A # movw %r9w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8B # movw %r9w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8C, 0X24 # movw %r9w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8D # movw %r9w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8E # movw %r9w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X8F # movw %r9w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X88 # movw %r9w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8B # movw %r9w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X89 # movw %r9w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8A # movw %r9w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8F # movw %r9w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8E # movw %r9w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8D # movw %r9w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X8C, 0X24 # movw %r9w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X90 # movw %r10w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X93 # movw %r10w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X91 # movw %r10w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X92 # movw %r10w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X97 # movw %r10w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X96 # movw %r10w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X95 # movw %r10w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X94, 0X24 # movw %r10w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X90 # movw %r10w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X91 # movw %r10w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X92 # movw %r10w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X93 # movw %r10w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X94, 0X24 # movw %r10w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X95 # movw %r10w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X96 # movw %r10w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X97 # movw %r10w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X90 # movw %r10w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X93 # movw %r10w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X91 # movw %r10w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X92 # movw %r10w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X97 # movw %r10w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X96 # movw %r10w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X95 # movw %r10w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X94, 0X24 # movw %r10w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X98 # movw %r11w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9B # movw %r11w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X99 # movw %r11w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9A # movw %r11w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9F # movw %r11w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9E # movw %r11w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9D # movw %r11w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0X9C, 0X24 # movw %r11w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X98 # movw %r11w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X99 # movw %r11w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9A # movw %r11w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9B # movw %r11w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9C, 0X24 # movw %r11w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9D # movw %r11w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9E # movw %r11w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0X9F # movw %r11w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X98 # movw %r11w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9B # movw %r11w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X99 # movw %r11w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9A # movw %r11w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9F # movw %r11w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9E # movw %r11w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9D # movw %r11w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0X9C, 0X24 # movw %r11w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA0 # movw %r12w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA3 # movw %r12w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA1 # movw %r12w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA2 # movw %r12w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA7 # movw %r12w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA6 # movw %r12w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA5 # movw %r12w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA4, 0X24 # movw %r12w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA0 # movw %r12w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA1 # movw %r12w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA2 # movw %r12w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA3 # movw %r12w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA4, 0X24 # movw %r12w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA5 # movw %r12w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA6 # movw %r12w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA7 # movw %r12w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA0 # movw %r12w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA3 # movw %r12w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA1 # movw %r12w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA2 # movw %r12w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA7 # movw %r12w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA6 # movw %r12w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA5 # movw %r12w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA4, 0X24 # movw %r12w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA8 # movw %r13w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAB # movw %r13w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XA9 # movw %r13w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAA # movw %r13w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAF # movw %r13w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAE # movw %r13w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAD # movw %r13w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XAC, 0X24 # movw %r13w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA8 # movw %r13w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XA9 # movw %r13w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAA # movw %r13w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAB # movw %r13w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAC, 0X24 # movw %r13w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAD # movw %r13w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAE # movw %r13w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XAF # movw %r13w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA8 # movw %r13w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAB # movw %r13w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XA9 # movw %r13w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAA # movw %r13w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAF # movw %r13w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAE # movw %r13w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAD # movw %r13w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XAC, 0X24 # movw %r13w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB0 # movw %r14w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB3 # movw %r14w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB1 # movw %r14w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB2 # movw %r14w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB7 # movw %r14w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB6 # movw %r14w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB5 # movw %r14w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB4, 0X24 # movw %r14w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB0 # movw %r14w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB1 # movw %r14w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB2 # movw %r14w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB3 # movw %r14w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB4, 0X24 # movw %r14w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB5 # movw %r14w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB6 # movw %r14w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB7 # movw %r14w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB0 # movw %r14w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB3 # movw %r14w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB1 # movw %r14w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB2 # movw %r14w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB7 # movw %r14w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB6 # movw %r14w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB5 # movw %r14w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB4, 0X24 # movw %r14w, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15W_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB8 # movw %r15w, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBB # movw %r15w, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XB9 # movw %r15w, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBA # movw %r15w, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBF # movw %r15w, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBE # movw %r15w, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBD # movw %r15w, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X44, 0X89, 0XBC, 0X24 # movw %r15w, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB8 # movw %r15w, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XB9 # movw %r15w, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBA # movw %r15w, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBB # movw %r15w, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBC, 0X24 # movw %r15w, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBD # movw %r15w, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBE # movw %r15w, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X66, 0X45, 0X89, 0XBF # movw %r15w, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB8 # movw %r15w, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBB # movw %r15w, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XB9 # movw %r15w, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBA # movw %r15w, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBF # movw %r15w, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBE # movw %r15w, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBD # movw %r15w, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15W_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X66, 0X67, 0X44, 0X89, 0XBC, 0X24 # movw %r15w, " _(VALUE) "(%esp)")\
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
