#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

#ifdef __SYSTEM_32_BIT__
#define MOV_PTR32_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC7, 0X05 # movl $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".long " _(VALUE))
#else /* !__SYSTEM_32_BIT__ */
#define MOV_PTR32_(POINTER, VALUE) \
	CMT_ASM(".byte 0XC7, 0X04, 0X25 # movl $" _(VALUE) ", " _(POINTER))\
	CMT_ASM(".long " _(POINTER))\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define MOV_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X05 # movl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X1D # movl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X0D # movl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X15 # movl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X3D # movl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X35 # movl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X2D # movl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X25 # movl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X05 # movl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X1D # movl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X0D # movl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X15 # movl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X3D # movl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X35 # movl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X2D # movl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X25 # movl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X00 # movl (%eax), %eax")
#define MOV_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X03 # movl (%ebx), %eax")
#define MOV_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X01 # movl (%ecx), %eax")
#define MOV_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X02 # movl (%edx), %eax")
#define MOV_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X07 # movl (%edi), %eax")
#define MOV_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X06 # movl (%esi), %eax")
#define MOV_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X45, 0X00 # movl (%ebp), %eax")
#define MOV_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X04, 0X24 # movl (%esp), %eax")
#define MOV_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X07 # movl (%bx), %eax")
#define MOV_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X46, 0X00 # movl (%bp), %eax")
#define MOV_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X04 # movl (%si), %eax")
#define MOV_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X05 # movl (%di), %eax")

#define MOV_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X18 # movl (%eax), %ebx")
#define MOV_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X1B # movl (%ebx), %ebx")
#define MOV_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X19 # movl (%ecx), %ebx")
#define MOV_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X1A # movl (%edx), %ebx")
#define MOV_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X1F # movl (%edi), %ebx")
#define MOV_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X1E # movl (%esi), %ebx")
#define MOV_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X5D, 0X00 # movl (%ebp), %ebx")
#define MOV_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X1C, 0X24 # movl (%esp), %ebx")
#define MOV_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X1F # movl (%bx), %ebx")
#define MOV_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X5E, 0X00 # movl (%bp), %ebx")
#define MOV_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X1C # movl (%si), %ebx")
#define MOV_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X1D # movl (%di), %ebx")

#define MOV_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X08 # movl (%eax), %ecx")
#define MOV_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X0B # movl (%ebx), %ecx")
#define MOV_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X09 # movl (%ecx), %ecx")
#define MOV_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X0A # movl (%edx), %ecx")
#define MOV_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X0F # movl (%edi), %ecx")
#define MOV_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X0E # movl (%esi), %ecx")
#define MOV_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X4D, 0X00 # movl (%ebp), %ecx")
#define MOV_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X0C, 0X24 # movl (%esp), %ecx")
#define MOV_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X0F # movl (%bx), %ecx")
#define MOV_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X4E, 0X00 # movl (%bp), %ecx")
#define MOV_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X0C # movl (%si), %ecx")
#define MOV_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X0D # movl (%di), %ecx")

#define MOV_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X10 # movl (%eax), %edx")
#define MOV_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X13 # movl (%ebx), %edx")
#define MOV_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X11 # movl (%ecx), %edx")
#define MOV_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X12 # movl (%edx), %edx")
#define MOV_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X17 # movl (%edi), %edx")
#define MOV_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X16 # movl (%esi), %edx")
#define MOV_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X55, 0X00 # movl (%ebp), %edx")
#define MOV_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X14, 0X24 # movl (%esp), %edx")
#define MOV_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X17 # movl (%bx), %edx")
#define MOV_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X56, 0X00 # movl (%bp), %edx")
#define MOV_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X14 # movl (%si), %edx")
#define MOV_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X15 # movl (%di), %edx")

#define MOV_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X38 # movl (%eax), %edi")
#define MOV_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X3B # movl (%ebx), %edi")
#define MOV_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X39 # movl (%ecx), %edi")
#define MOV_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X3A # movl (%edx), %edi")
#define MOV_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X3F # movl (%edi), %edi")
#define MOV_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X3E # movl (%esi), %edi")
#define MOV_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X7D, 0X00 # movl (%ebp), %edi")
#define MOV_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X3C, 0X24 # movl (%esp), %edi")
#define MOV_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X3F # movl (%bx), %edi")
#define MOV_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X7E, 0X00 # movl (%bp), %edi")
#define MOV_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X3C # movl (%si), %edi")
#define MOV_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X3D # movl (%di), %edi")

#define MOV_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X30 # movl (%eax), %esi")
#define MOV_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X33 # movl (%ebx), %esi")
#define MOV_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X31 # movl (%ecx), %esi")
#define MOV_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X32 # movl (%edx), %esi")
#define MOV_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X37 # movl (%edi), %esi")
#define MOV_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X36 # movl (%esi), %esi")
#define MOV_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X75, 0X00 # movl (%ebp), %esi")
#define MOV_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X34, 0X24 # movl (%esp), %esi")
#define MOV_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X37 # movl (%bx), %esi")
#define MOV_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X76, 0X00 # movl (%bp), %esi")
#define MOV_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X34 # movl (%si), %esi")
#define MOV_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X35 # movl (%di), %esi")

#define MOV_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X28 # movl (%eax), %ebp")
#define MOV_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X2B # movl (%ebx), %ebp")
#define MOV_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X29 # movl (%ecx), %ebp")
#define MOV_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X2A # movl (%edx), %ebp")
#define MOV_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X2F # movl (%edi), %ebp")
#define MOV_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X2E # movl (%esi), %ebp")
#define MOV_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X6D, 0X00 # movl (%ebp), %ebp")
#define MOV_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X2C, 0X24 # movl (%esp), %ebp")
#define MOV_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X2F # movl (%bx), %ebp")
#define MOV_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X6E, 0X00 # movl (%bp), %ebp")
#define MOV_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X2C # movl (%si), %ebp")
#define MOV_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X2D # movl (%di), %ebp")

#define MOV_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X8B, 0X20 # movl (%eax), %esp")
#define MOV_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X8B, 0X23 # movl (%ebx), %esp")
#define MOV_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X8B, 0X21 # movl (%ecx), %esp")
#define MOV_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X8B, 0X22 # movl (%edx), %esp")
#define MOV_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X8B, 0X27 # movl (%edi), %esp")
#define MOV_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X8B, 0X26 # movl (%esi), %esp")
#define MOV_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X8B, 0X65, 0X00 # movl (%ebp), %esp")
#define MOV_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X8B, 0X24, 0X24 # movl (%esp), %esp")
#define MOV_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X8B, 0X27 # movl (%bx), %esp")
#define MOV_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X8B, 0X66, 0X00 # movl (%bp), %esp")
#define MOV_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X8B, 0X24 # movl (%si), %esp")
#define MOV_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X8B, 0X25 # movl (%di), %esp")

#define MOV_EAX_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X00 # movl %eax, (%eax)")
#define MOV_EAX_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X03 # movl %eax, (%ebx)")
#define MOV_EAX_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X01 # movl %eax, (%ecx)")
#define MOV_EAX_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X02 # movl %eax, (%edx)")
#define MOV_EAX_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X07 # movl %eax, (%edi)")
#define MOV_EAX_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X06 # movl %eax, (%esi)")
#define MOV_EAX_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X45, 0X00 # movl %eax, (%ebp)")
#define MOV_EAX_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X04, 0X24 # movl %eax, (%esp)")
#define MOV_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X07 # movl %eax, (%bx)")
#define MOV_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X46, 0X00 # movl %eax, (%bp)")
#define MOV_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X04 # movl %eax, (%si)")
#define MOV_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X05 # movl %eax, (%di)")

#define MOV_EBX_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X18 # movl %ebx, (%eax)")
#define MOV_EBX_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X1B # movl %ebx, (%ebx)")
#define MOV_EBX_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X19 # movl %ebx, (%ecx)")
#define MOV_EBX_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X1A # movl %ebx, (%edx)")
#define MOV_EBX_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X1F # movl %ebx, (%edi)")
#define MOV_EBX_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X1E # movl %ebx, (%esi)")
#define MOV_EBX_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X5D, 0X00 # movl %ebx, (%ebp)")
#define MOV_EBX_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X1C, 0X24 # movl %ebx, (%esp)")
#define MOV_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X1F # movl %ebx, (%bx)")
#define MOV_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X5E, 0X00 # movl %ebx, (%bp)")
#define MOV_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X1C # movl %ebx, (%si)")
#define MOV_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X1D # movl %ebx, (%di)")

#define MOV_ECX_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X08 # movl %ecx, (%eax)")
#define MOV_ECX_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X0B # movl %ecx, (%ebx)")
#define MOV_ECX_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X09 # movl %ecx, (%ecx)")
#define MOV_ECX_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X0A # movl %ecx, (%edx)")
#define MOV_ECX_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X0F # movl %ecx, (%edi)")
#define MOV_ECX_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X0E # movl %ecx, (%esi)")
#define MOV_ECX_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X4D, 0X00 # movl %ecx, (%ebp)")
#define MOV_ECX_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X0C, 0X24 # movl %ecx, (%esp)")
#define MOV_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X0F # movl %ecx, (%bx)")
#define MOV_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X4E, 0X00 # movl %ecx, (%bp)")
#define MOV_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X0C # movl %ecx, (%si)")
#define MOV_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X0D # movl %ecx, (%di)")

#define MOV_EDX_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X10 # movl %edx, (%eax)")
#define MOV_EDX_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X13 # movl %edx, (%ebx)")
#define MOV_EDX_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X11 # movl %edx, (%ecx)")
#define MOV_EDX_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X12 # movl %edx, (%edx)")
#define MOV_EDX_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X17 # movl %edx, (%edi)")
#define MOV_EDX_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X16 # movl %edx, (%esi)")
#define MOV_EDX_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X55, 0X00 # movl %edx, (%ebp)")
#define MOV_EDX_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X14, 0X24 # movl %edx, (%esp)")
#define MOV_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X17 # movl %edx, (%bx)")
#define MOV_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X56, 0X00 # movl %edx, (%bp)")
#define MOV_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X14 # movl %edx, (%si)")
#define MOV_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X15 # movl %edx, (%di)")

#define MOV_EDI_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X38 # movl %edi, (%eax)")
#define MOV_EDI_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X3B # movl %edi, (%ebx)")
#define MOV_EDI_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X39 # movl %edi, (%ecx)")
#define MOV_EDI_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X3A # movl %edi, (%edx)")
#define MOV_EDI_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X3F # movl %edi, (%edi)")
#define MOV_EDI_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X3E # movl %edi, (%esi)")
#define MOV_EDI_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X7D, 0X00 # movl %edi, (%ebp)")
#define MOV_EDI_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X3C, 0X24 # movl %edi, (%esp)")
#define MOV_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X3F # movl %edi, (%bx)")
#define MOV_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X7E, 0X00 # movl %edi, (%bp)")
#define MOV_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X3C # movl %edi, (%si)")
#define MOV_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X3D # movl %edi, (%di)")

#define MOV_ESI_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X30 # movl %esi, (%eax)")
#define MOV_ESI_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X33 # movl %esi, (%ebx)")
#define MOV_ESI_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X31 # movl %esi, (%ecx)")
#define MOV_ESI_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X32 # movl %esi, (%edx)")
#define MOV_ESI_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X37 # movl %esi, (%edi)")
#define MOV_ESI_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X36 # movl %esi, (%esi)")
#define MOV_ESI_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X75, 0X00 # movl %esi, (%ebp)")
#define MOV_ESI_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X34, 0X24 # movl %esi, (%esp)")
#define MOV_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X37 # movl %esi, (%bx)")
#define MOV_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X76, 0X00 # movl %esi, (%bp)")
#define MOV_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X34 # movl %esi, (%si)")
#define MOV_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X35 # movl %esi, (%di)")

#define MOV_EBP_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X28 # movl %ebp, (%eax)")
#define MOV_EBP_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X2B # movl %ebp, (%ebx)")
#define MOV_EBP_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X29 # movl %ebp, (%ecx)")
#define MOV_EBP_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X2A # movl %ebp, (%edx)")
#define MOV_EBP_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X2F # movl %ebp, (%edi)")
#define MOV_EBP_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X2E # movl %ebp, (%esi)")
#define MOV_EBP_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X6D, 0X00 # movl %ebp, (%ebp)")
#define MOV_EBP_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X2C, 0X24 # movl %ebp, (%esp)")
#define MOV_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X2F # movl %ebp, (%bx)")
#define MOV_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X6E, 0X00 # movl %ebp, (%bp)")
#define MOV_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X2C # movl %ebp, (%si)")
#define MOV_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X2D # movl %ebp, (%di)")

#define MOV_ESP_TO_PTR_EAX CMT_ASM(".byte 0X89, 0X20 # movl %esp, (%eax)")
#define MOV_ESP_TO_PTR_EBX CMT_ASM(".byte 0X89, 0X23 # movl %esp, (%ebx)")
#define MOV_ESP_TO_PTR_ECX CMT_ASM(".byte 0X89, 0X21 # movl %esp, (%ecx)")
#define MOV_ESP_TO_PTR_EDX CMT_ASM(".byte 0X89, 0X22 # movl %esp, (%edx)")
#define MOV_ESP_TO_PTR_EDI CMT_ASM(".byte 0X89, 0X27 # movl %esp, (%edi)")
#define MOV_ESP_TO_PTR_ESI CMT_ASM(".byte 0X89, 0X26 # movl %esp, (%esi)")
#define MOV_ESP_TO_PTR_EBP CMT_ASM(".byte 0X89, 0X65, 0X00 # movl %esp, (%ebp)")
#define MOV_ESP_TO_PTR_ESP CMT_ASM(".byte 0X89, 0X24, 0X24 # movl %esp, (%esp)")
#define MOV_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X89, 0X27 # movl %esp, (%bx)")
#define MOV_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X89, 0X66, 0X00 # movl %esp, (%bp)")
#define MOV_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X89, 0X24 # movl %esp, (%si)")
#define MOV_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X89, 0X25 # movl %esp, (%di)")

#define MOV_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X80 # movl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X83 # movl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X81 # movl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X82 # movl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X87 # movl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X86 # movl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X85 # movl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X87 # movl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X86 # movl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X84 # movl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X85 # movl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X98 # movl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9B # movl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X99 # movl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9A # movl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9F # movl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9E # movl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9D # movl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9F # movl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9E # movl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9C # movl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9D # movl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X88 # movl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8B # movl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X89 # movl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8A # movl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8F # movl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8E # movl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8D # movl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8F # movl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8E # movl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8C # movl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8D # movl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X90 # movl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X93 # movl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X91 # movl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X92 # movl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X97 # movl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X96 # movl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X95 # movl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X97 # movl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X96 # movl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X94 # movl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X95 # movl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB8 # movl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBB # movl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB9 # movl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBA # movl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBF # movl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBE # movl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBD # movl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBF # movl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBE # movl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBC # movl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBD # movl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB0 # movl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB3 # movl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB1 # movl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB2 # movl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB7 # movl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB6 # movl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB5 # movl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB7 # movl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB6 # movl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB4 # movl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB5 # movl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA8 # movl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAB # movl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA9 # movl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAA # movl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAF # movl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAE # movl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAD # movl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAF # movl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAE # movl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAC # movl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAD # movl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA0 # movl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA3 # movl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA1 # movl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA2 # movl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA7 # movl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA6 # movl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA5 # movl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA7 # movl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA6 # movl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA4 # movl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA5 # movl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X80 # movl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X83 # movl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X81 # movl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X82 # movl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X87 # movl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X86 # movl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X85 # movl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X84, 0X24 # movl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X87 # movl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X86 # movl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X84 # movl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X85 # movl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X98 # movl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9B # movl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X99 # movl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9A # movl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9F # movl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9E # movl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9D # movl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9C, 0X24 # movl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9F # movl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9E # movl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9C # movl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9D # movl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X88 # movl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8B # movl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X89 # movl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8A # movl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8F # movl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8E # movl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8D # movl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8C, 0X24 # movl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8F # movl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8E # movl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8C # movl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8D # movl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X90 # movl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X93 # movl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X91 # movl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X92 # movl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X97 # movl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X96 # movl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X95 # movl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X94, 0X24 # movl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X97 # movl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X96 # movl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X94 # movl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X95 # movl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB8 # movl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBB # movl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB9 # movl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBA # movl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBF # movl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBE # movl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBD # movl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBC, 0X24 # movl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBF # movl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBE # movl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBC # movl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBD # movl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB0 # movl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB3 # movl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB1 # movl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB2 # movl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB7 # movl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB6 # movl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB5 # movl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB4, 0X24 # movl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB7 # movl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB6 # movl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB4 # movl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB5 # movl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA8 # movl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAB # movl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA9 # movl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAA # movl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAF # movl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAE # movl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAD # movl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAC, 0X24 # movl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAF # movl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAE # movl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAC # movl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAD # movl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define MOV_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA0 # movl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA3 # movl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA1 # movl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA2 # movl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA7 # movl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA6 # movl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA5 # movl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA4, 0X24 # movl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA7 # movl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA6 # movl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA4 # movl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define MOV_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA5 # movl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X04, 0X25 # movl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X1C, 0X25 # movl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X0C, 0X25 # movl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X14, 0X25 # movl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X3C, 0X25 # movl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X34, 0X25 # movl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X2C, 0X25 # movl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X24, 0X25 # movl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X04, 0X25 # movl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X0C, 0X25 # movl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X14, 0X25 # movl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X1C, 0X25 # movl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X24, 0X25 # movl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X2C, 0X25 # movl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X34, 0X25 # movl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X3C, 0X25 # movl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X04, 0X25 # movl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X1C, 0X25 # movl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X0C, 0X25 # movl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X14, 0X25 # movl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X3C, 0X25 # movl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X34, 0X25 # movl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X2C, 0X25 # movl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X89, 0X24, 0X25 # movl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X04, 0X25 # movl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X0C, 0X25 # movl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X14, 0X25 # movl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X1C, 0X25 # movl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X24, 0X25 # movl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X2C, 0X25 # movl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X34, 0X25 # movl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X3C, 0X25 # movl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X00 # movl (%rax), %eax")
#define MOV_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X03 # movl (%rbx), %eax")
#define MOV_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X01 # movl (%rcx), %eax")
#define MOV_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X02 # movl (%rdx), %eax")
#define MOV_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X07 # movl (%rdi), %eax")
#define MOV_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X06 # movl (%rsi), %eax")
#define MOV_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X45, 0X00 # movl (%rbp), %eax")
#define MOV_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X04, 0X24 # movl (%rsp), %eax")
#define MOV_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X00 # movl (%r8), %eax")
#define MOV_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X01 # movl (%r9), %eax")
#define MOV_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X02 # movl (%r10), %eax")
#define MOV_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X03 # movl (%r11), %eax")
#define MOV_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X04, 0X24 # movl (%r12), %eax")
#define MOV_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X45, 0X00 # movl (%r13), %eax")
#define MOV_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X06 # movl (%r14), %eax")
#define MOV_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X07 # movl (%r15), %eax")
#define MOV_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X00 # movl (%eax), %eax")
#define MOV_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X03 # movl (%ebx), %eax")
#define MOV_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X01 # movl (%ecx), %eax")
#define MOV_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X02 # movl (%edx), %eax")
#define MOV_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X07 # movl (%edi), %eax")
#define MOV_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X06 # movl (%esi), %eax")
#define MOV_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X45, 0X00 # movl (%ebp), %eax")
#define MOV_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X04, 0X24 # movl (%esp), %eax")

#define MOV_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X18 # movl (%rax), %ebx")
#define MOV_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X1B # movl (%rbx), %ebx")
#define MOV_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X19 # movl (%rcx), %ebx")
#define MOV_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X1A # movl (%rdx), %ebx")
#define MOV_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X1F # movl (%rdi), %ebx")
#define MOV_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X1E # movl (%rsi), %ebx")
#define MOV_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X5D, 0X00 # movl (%rbp), %ebx")
#define MOV_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X1C, 0X24 # movl (%rsp), %ebx")
#define MOV_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X18 # movl (%r8), %ebx")
#define MOV_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X19 # movl (%r9), %ebx")
#define MOV_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X1A # movl (%r10), %ebx")
#define MOV_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X1B # movl (%r11), %ebx")
#define MOV_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X1C, 0X24 # movl (%r12), %ebx")
#define MOV_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X5D, 0X00 # movl (%r13), %ebx")
#define MOV_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X1E # movl (%r14), %ebx")
#define MOV_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X1F # movl (%r15), %ebx")
#define MOV_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X18 # movl (%eax), %ebx")
#define MOV_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X1B # movl (%ebx), %ebx")
#define MOV_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X19 # movl (%ecx), %ebx")
#define MOV_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X1A # movl (%edx), %ebx")
#define MOV_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X1F # movl (%edi), %ebx")
#define MOV_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X1E # movl (%esi), %ebx")
#define MOV_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X5D, 0X00 # movl (%ebp), %ebx")
#define MOV_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X1C, 0X24 # movl (%esp), %ebx")

#define MOV_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X08 # movl (%rax), %ecx")
#define MOV_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X0B # movl (%rbx), %ecx")
#define MOV_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X09 # movl (%rcx), %ecx")
#define MOV_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X0A # movl (%rdx), %ecx")
#define MOV_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X0F # movl (%rdi), %ecx")
#define MOV_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X0E # movl (%rsi), %ecx")
#define MOV_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X4D, 0X00 # movl (%rbp), %ecx")
#define MOV_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X0C, 0X24 # movl (%rsp), %ecx")
#define MOV_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X08 # movl (%r8), %ecx")
#define MOV_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X09 # movl (%r9), %ecx")
#define MOV_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X0A # movl (%r10), %ecx")
#define MOV_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X0B # movl (%r11), %ecx")
#define MOV_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X0C, 0X24 # movl (%r12), %ecx")
#define MOV_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X4D, 0X00 # movl (%r13), %ecx")
#define MOV_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X0E # movl (%r14), %ecx")
#define MOV_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X0F # movl (%r15), %ecx")
#define MOV_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X08 # movl (%eax), %ecx")
#define MOV_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X0B # movl (%ebx), %ecx")
#define MOV_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X09 # movl (%ecx), %ecx")
#define MOV_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X0A # movl (%edx), %ecx")
#define MOV_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X0F # movl (%edi), %ecx")
#define MOV_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X0E # movl (%esi), %ecx")
#define MOV_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X4D, 0X00 # movl (%ebp), %ecx")
#define MOV_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X0C, 0X24 # movl (%esp), %ecx")

#define MOV_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X10 # movl (%rax), %edx")
#define MOV_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X13 # movl (%rbx), %edx")
#define MOV_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X11 # movl (%rcx), %edx")
#define MOV_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X12 # movl (%rdx), %edx")
#define MOV_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X17 # movl (%rdi), %edx")
#define MOV_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X16 # movl (%rsi), %edx")
#define MOV_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X55, 0X00 # movl (%rbp), %edx")
#define MOV_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X14, 0X24 # movl (%rsp), %edx")
#define MOV_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X10 # movl (%r8), %edx")
#define MOV_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X11 # movl (%r9), %edx")
#define MOV_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X12 # movl (%r10), %edx")
#define MOV_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X13 # movl (%r11), %edx")
#define MOV_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X14, 0X24 # movl (%r12), %edx")
#define MOV_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X55, 0X00 # movl (%r13), %edx")
#define MOV_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X16 # movl (%r14), %edx")
#define MOV_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X17 # movl (%r15), %edx")
#define MOV_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X10 # movl (%eax), %edx")
#define MOV_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X13 # movl (%ebx), %edx")
#define MOV_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X11 # movl (%ecx), %edx")
#define MOV_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X12 # movl (%edx), %edx")
#define MOV_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X17 # movl (%edi), %edx")
#define MOV_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X16 # movl (%esi), %edx")
#define MOV_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X55, 0X00 # movl (%ebp), %edx")
#define MOV_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X14, 0X24 # movl (%esp), %edx")

#define MOV_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X38 # movl (%rax), %edi")
#define MOV_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X3B # movl (%rbx), %edi")
#define MOV_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X39 # movl (%rcx), %edi")
#define MOV_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X3A # movl (%rdx), %edi")
#define MOV_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X3F # movl (%rdi), %edi")
#define MOV_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X3E # movl (%rsi), %edi")
#define MOV_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X7D, 0X00 # movl (%rbp), %edi")
#define MOV_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X3C, 0X24 # movl (%rsp), %edi")
#define MOV_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X38 # movl (%r8), %edi")
#define MOV_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X39 # movl (%r9), %edi")
#define MOV_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X3A # movl (%r10), %edi")
#define MOV_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X3B # movl (%r11), %edi")
#define MOV_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X3C, 0X24 # movl (%r12), %edi")
#define MOV_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X7D, 0X00 # movl (%r13), %edi")
#define MOV_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X3E # movl (%r14), %edi")
#define MOV_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X3F # movl (%r15), %edi")
#define MOV_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X38 # movl (%eax), %edi")
#define MOV_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X3B # movl (%ebx), %edi")
#define MOV_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X39 # movl (%ecx), %edi")
#define MOV_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X3A # movl (%edx), %edi")
#define MOV_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X3F # movl (%edi), %edi")
#define MOV_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X3E # movl (%esi), %edi")
#define MOV_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X7D, 0X00 # movl (%ebp), %edi")
#define MOV_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X3C, 0X24 # movl (%esp), %edi")

#define MOV_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X30 # movl (%rax), %esi")
#define MOV_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X33 # movl (%rbx), %esi")
#define MOV_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X31 # movl (%rcx), %esi")
#define MOV_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X32 # movl (%rdx), %esi")
#define MOV_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X37 # movl (%rdi), %esi")
#define MOV_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X36 # movl (%rsi), %esi")
#define MOV_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X75, 0X00 # movl (%rbp), %esi")
#define MOV_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X34, 0X24 # movl (%rsp), %esi")
#define MOV_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X30 # movl (%r8), %esi")
#define MOV_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X31 # movl (%r9), %esi")
#define MOV_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X32 # movl (%r10), %esi")
#define MOV_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X33 # movl (%r11), %esi")
#define MOV_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X34, 0X24 # movl (%r12), %esi")
#define MOV_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X75, 0X00 # movl (%r13), %esi")
#define MOV_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X36 # movl (%r14), %esi")
#define MOV_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X37 # movl (%r15), %esi")
#define MOV_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X30 # movl (%eax), %esi")
#define MOV_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X33 # movl (%ebx), %esi")
#define MOV_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X31 # movl (%ecx), %esi")
#define MOV_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X32 # movl (%edx), %esi")
#define MOV_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X37 # movl (%edi), %esi")
#define MOV_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X36 # movl (%esi), %esi")
#define MOV_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X75, 0X00 # movl (%ebp), %esi")
#define MOV_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X34, 0X24 # movl (%esp), %esi")

#define MOV_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X28 # movl (%rax), %ebp")
#define MOV_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X2B # movl (%rbx), %ebp")
#define MOV_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X29 # movl (%rcx), %ebp")
#define MOV_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X2A # movl (%rdx), %ebp")
#define MOV_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X2F # movl (%rdi), %ebp")
#define MOV_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X2E # movl (%rsi), %ebp")
#define MOV_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X6D, 0X00 # movl (%rbp), %ebp")
#define MOV_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X2C, 0X24 # movl (%rsp), %ebp")
#define MOV_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X28 # movl (%r8), %ebp")
#define MOV_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X29 # movl (%r9), %ebp")
#define MOV_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X2A # movl (%r10), %ebp")
#define MOV_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X2B # movl (%r11), %ebp")
#define MOV_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X2C, 0X24 # movl (%r12), %ebp")
#define MOV_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X6D, 0X00 # movl (%r13), %ebp")
#define MOV_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X2E # movl (%r14), %ebp")
#define MOV_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X2F # movl (%r15), %ebp")
#define MOV_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X28 # movl (%eax), %ebp")
#define MOV_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X2B # movl (%ebx), %ebp")
#define MOV_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X29 # movl (%ecx), %ebp")
#define MOV_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X2A # movl (%edx), %ebp")
#define MOV_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X2F # movl (%edi), %ebp")
#define MOV_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X2E # movl (%esi), %ebp")
#define MOV_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X6D, 0X00 # movl (%ebp), %ebp")
#define MOV_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X2C, 0X24 # movl (%esp), %ebp")

#define MOV_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X8B, 0X20 # movl (%rax), %esp")
#define MOV_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X8B, 0X23 # movl (%rbx), %esp")
#define MOV_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X8B, 0X21 # movl (%rcx), %esp")
#define MOV_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X8B, 0X22 # movl (%rdx), %esp")
#define MOV_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X8B, 0X27 # movl (%rdi), %esp")
#define MOV_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X8B, 0X26 # movl (%rsi), %esp")
#define MOV_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X8B, 0X65, 0X00 # movl (%rbp), %esp")
#define MOV_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X8B, 0X24, 0X24 # movl (%rsp), %esp")
#define MOV_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X8B, 0X20 # movl (%r8), %esp")
#define MOV_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X8B, 0X21 # movl (%r9), %esp")
#define MOV_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X8B, 0X22 # movl (%r10), %esp")
#define MOV_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X8B, 0X23 # movl (%r11), %esp")
#define MOV_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X8B, 0X24, 0X24 # movl (%r12), %esp")
#define MOV_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X8B, 0X65, 0X00 # movl (%r13), %esp")
#define MOV_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X8B, 0X26 # movl (%r14), %esp")
#define MOV_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X8B, 0X27 # movl (%r15), %esp")
#define MOV_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X8B, 0X20 # movl (%eax), %esp")
#define MOV_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X8B, 0X23 # movl (%ebx), %esp")
#define MOV_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X8B, 0X21 # movl (%ecx), %esp")
#define MOV_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X8B, 0X22 # movl (%edx), %esp")
#define MOV_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X8B, 0X27 # movl (%edi), %esp")
#define MOV_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X8B, 0X26 # movl (%esi), %esp")
#define MOV_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X8B, 0X65, 0X00 # movl (%ebp), %esp")
#define MOV_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X8B, 0X24, 0X24 # movl (%esp), %esp")

#define MOV_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X00 # movl (%rax), %r8d")
#define MOV_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X03 # movl (%rbx), %r8d")
#define MOV_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X01 # movl (%rcx), %r8d")
#define MOV_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X02 # movl (%rdx), %r8d")
#define MOV_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X07 # movl (%rdi), %r8d")
#define MOV_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X06 # movl (%rsi), %r8d")
#define MOV_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X45, 0X00 # movl (%rbp), %r8d")
#define MOV_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X04, 0X24 # movl (%rsp), %r8d")
#define MOV_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X00 # movl (%r8), %r8d")
#define MOV_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X01 # movl (%r9), %r8d")
#define MOV_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X02 # movl (%r10), %r8d")
#define MOV_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X03 # movl (%r11), %r8d")
#define MOV_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X04, 0X24 # movl (%r12), %r8d")
#define MOV_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X45, 0X00 # movl (%r13), %r8d")
#define MOV_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X06 # movl (%r14), %r8d")
#define MOV_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X07 # movl (%r15), %r8d")
#define MOV_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X00 # movl (%eax), %r8d")
#define MOV_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X03 # movl (%ebx), %r8d")
#define MOV_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X01 # movl (%ecx), %r8d")
#define MOV_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X02 # movl (%edx), %r8d")
#define MOV_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X07 # movl (%edi), %r8d")
#define MOV_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X06 # movl (%esi), %r8d")
#define MOV_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X45, 0X00 # movl (%ebp), %r8d")
#define MOV_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X04, 0X24 # movl (%esp), %r8d")

#define MOV_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X08 # movl (%rax), %r9d")
#define MOV_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X0B # movl (%rbx), %r9d")
#define MOV_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X09 # movl (%rcx), %r9d")
#define MOV_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X0A # movl (%rdx), %r9d")
#define MOV_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X0F # movl (%rdi), %r9d")
#define MOV_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X0E # movl (%rsi), %r9d")
#define MOV_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X4D, 0X00 # movl (%rbp), %r9d")
#define MOV_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X0C, 0X24 # movl (%rsp), %r9d")
#define MOV_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X08 # movl (%r8), %r9d")
#define MOV_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X09 # movl (%r9), %r9d")
#define MOV_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X0A # movl (%r10), %r9d")
#define MOV_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X0B # movl (%r11), %r9d")
#define MOV_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X0C, 0X24 # movl (%r12), %r9d")
#define MOV_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X4D, 0X00 # movl (%r13), %r9d")
#define MOV_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X0E # movl (%r14), %r9d")
#define MOV_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X0F # movl (%r15), %r9d")
#define MOV_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X08 # movl (%eax), %r9d")
#define MOV_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X0B # movl (%ebx), %r9d")
#define MOV_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X09 # movl (%ecx), %r9d")
#define MOV_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X0A # movl (%edx), %r9d")
#define MOV_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X0F # movl (%edi), %r9d")
#define MOV_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X0E # movl (%esi), %r9d")
#define MOV_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X4D, 0X00 # movl (%ebp), %r9d")
#define MOV_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X0C, 0X24 # movl (%esp), %r9d")

#define MOV_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X10 # movl (%rax), %r10d")
#define MOV_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X13 # movl (%rbx), %r10d")
#define MOV_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X11 # movl (%rcx), %r10d")
#define MOV_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X12 # movl (%rdx), %r10d")
#define MOV_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X17 # movl (%rdi), %r10d")
#define MOV_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X16 # movl (%rsi), %r10d")
#define MOV_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X55, 0X00 # movl (%rbp), %r10d")
#define MOV_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X14, 0X24 # movl (%rsp), %r10d")
#define MOV_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X10 # movl (%r8), %r10d")
#define MOV_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X11 # movl (%r9), %r10d")
#define MOV_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X12 # movl (%r10), %r10d")
#define MOV_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X13 # movl (%r11), %r10d")
#define MOV_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X14, 0X24 # movl (%r12), %r10d")
#define MOV_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X55, 0X00 # movl (%r13), %r10d")
#define MOV_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X16 # movl (%r14), %r10d")
#define MOV_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X17 # movl (%r15), %r10d")
#define MOV_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X10 # movl (%eax), %r10d")
#define MOV_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X13 # movl (%ebx), %r10d")
#define MOV_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X11 # movl (%ecx), %r10d")
#define MOV_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X12 # movl (%edx), %r10d")
#define MOV_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X17 # movl (%edi), %r10d")
#define MOV_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X16 # movl (%esi), %r10d")
#define MOV_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X55, 0X00 # movl (%ebp), %r10d")
#define MOV_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X14, 0X24 # movl (%esp), %r10d")

#define MOV_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X18 # movl (%rax), %r11d")
#define MOV_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X1B # movl (%rbx), %r11d")
#define MOV_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X19 # movl (%rcx), %r11d")
#define MOV_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X1A # movl (%rdx), %r11d")
#define MOV_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X1F # movl (%rdi), %r11d")
#define MOV_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X1E # movl (%rsi), %r11d")
#define MOV_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X5D, 0X00 # movl (%rbp), %r11d")
#define MOV_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X1C, 0X24 # movl (%rsp), %r11d")
#define MOV_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X18 # movl (%r8), %r11d")
#define MOV_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X19 # movl (%r9), %r11d")
#define MOV_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X1A # movl (%r10), %r11d")
#define MOV_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X1B # movl (%r11), %r11d")
#define MOV_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X1C, 0X24 # movl (%r12), %r11d")
#define MOV_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X5D, 0X00 # movl (%r13), %r11d")
#define MOV_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X1E # movl (%r14), %r11d")
#define MOV_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X1F # movl (%r15), %r11d")
#define MOV_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X18 # movl (%eax), %r11d")
#define MOV_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X1B # movl (%ebx), %r11d")
#define MOV_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X19 # movl (%ecx), %r11d")
#define MOV_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X1A # movl (%edx), %r11d")
#define MOV_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X1F # movl (%edi), %r11d")
#define MOV_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X1E # movl (%esi), %r11d")
#define MOV_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X5D, 0X00 # movl (%ebp), %r11d")
#define MOV_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X1C, 0X24 # movl (%esp), %r11d")

#define MOV_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X20 # movl (%rax), %r12d")
#define MOV_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X23 # movl (%rbx), %r12d")
#define MOV_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X21 # movl (%rcx), %r12d")
#define MOV_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X22 # movl (%rdx), %r12d")
#define MOV_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X27 # movl (%rdi), %r12d")
#define MOV_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X26 # movl (%rsi), %r12d")
#define MOV_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X65, 0X00 # movl (%rbp), %r12d")
#define MOV_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X24, 0X24 # movl (%rsp), %r12d")
#define MOV_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X20 # movl (%r8), %r12d")
#define MOV_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X21 # movl (%r9), %r12d")
#define MOV_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X22 # movl (%r10), %r12d")
#define MOV_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X23 # movl (%r11), %r12d")
#define MOV_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X24, 0X24 # movl (%r12), %r12d")
#define MOV_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X65, 0X00 # movl (%r13), %r12d")
#define MOV_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X26 # movl (%r14), %r12d")
#define MOV_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X27 # movl (%r15), %r12d")
#define MOV_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X20 # movl (%eax), %r12d")
#define MOV_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X23 # movl (%ebx), %r12d")
#define MOV_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X21 # movl (%ecx), %r12d")
#define MOV_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X22 # movl (%edx), %r12d")
#define MOV_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X27 # movl (%edi), %r12d")
#define MOV_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X26 # movl (%esi), %r12d")
#define MOV_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X65, 0X00 # movl (%ebp), %r12d")
#define MOV_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X24, 0X24 # movl (%esp), %r12d")

#define MOV_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X28 # movl (%rax), %r13d")
#define MOV_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X2B # movl (%rbx), %r13d")
#define MOV_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X29 # movl (%rcx), %r13d")
#define MOV_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X2A # movl (%rdx), %r13d")
#define MOV_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X2F # movl (%rdi), %r13d")
#define MOV_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X2E # movl (%rsi), %r13d")
#define MOV_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X6D, 0X00 # movl (%rbp), %r13d")
#define MOV_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X2C, 0X24 # movl (%rsp), %r13d")
#define MOV_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X28 # movl (%r8), %r13d")
#define MOV_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X29 # movl (%r9), %r13d")
#define MOV_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X2A # movl (%r10), %r13d")
#define MOV_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X2B # movl (%r11), %r13d")
#define MOV_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X2C, 0X24 # movl (%r12), %r13d")
#define MOV_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X6D, 0X00 # movl (%r13), %r13d")
#define MOV_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X2E # movl (%r14), %r13d")
#define MOV_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X2F # movl (%r15), %r13d")
#define MOV_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X28 # movl (%eax), %r13d")
#define MOV_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X2B # movl (%ebx), %r13d")
#define MOV_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X29 # movl (%ecx), %r13d")
#define MOV_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X2A # movl (%edx), %r13d")
#define MOV_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X2F # movl (%edi), %r13d")
#define MOV_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X2E # movl (%esi), %r13d")
#define MOV_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X6D, 0X00 # movl (%ebp), %r13d")
#define MOV_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X2C, 0X24 # movl (%esp), %r13d")

#define MOV_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X30 # movl (%rax), %r14d")
#define MOV_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X33 # movl (%rbx), %r14d")
#define MOV_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X31 # movl (%rcx), %r14d")
#define MOV_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X32 # movl (%rdx), %r14d")
#define MOV_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X37 # movl (%rdi), %r14d")
#define MOV_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X36 # movl (%rsi), %r14d")
#define MOV_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X75, 0X00 # movl (%rbp), %r14d")
#define MOV_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X34, 0X24 # movl (%rsp), %r14d")
#define MOV_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X30 # movl (%r8), %r14d")
#define MOV_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X31 # movl (%r9), %r14d")
#define MOV_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X32 # movl (%r10), %r14d")
#define MOV_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X33 # movl (%r11), %r14d")
#define MOV_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X34, 0X24 # movl (%r12), %r14d")
#define MOV_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X75, 0X00 # movl (%r13), %r14d")
#define MOV_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X36 # movl (%r14), %r14d")
#define MOV_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X37 # movl (%r15), %r14d")
#define MOV_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X30 # movl (%eax), %r14d")
#define MOV_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X33 # movl (%ebx), %r14d")
#define MOV_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X31 # movl (%ecx), %r14d")
#define MOV_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X32 # movl (%edx), %r14d")
#define MOV_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X37 # movl (%edi), %r14d")
#define MOV_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X36 # movl (%esi), %r14d")
#define MOV_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X75, 0X00 # movl (%ebp), %r14d")
#define MOV_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X34, 0X24 # movl (%esp), %r14d")

#define MOV_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X8B, 0X38 # movl (%rax), %r15d")
#define MOV_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X8B, 0X3B # movl (%rbx), %r15d")
#define MOV_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X8B, 0X39 # movl (%rcx), %r15d")
#define MOV_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X8B, 0X3A # movl (%rdx), %r15d")
#define MOV_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X8B, 0X3F # movl (%rdi), %r15d")
#define MOV_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X8B, 0X3E # movl (%rsi), %r15d")
#define MOV_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X8B, 0X7D, 0X00 # movl (%rbp), %r15d")
#define MOV_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X8B, 0X3C, 0X24 # movl (%rsp), %r15d")
#define MOV_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X8B, 0X38 # movl (%r8), %r15d")
#define MOV_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X8B, 0X39 # movl (%r9), %r15d")
#define MOV_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X8B, 0X3A # movl (%r10), %r15d")
#define MOV_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X8B, 0X3B # movl (%r11), %r15d")
#define MOV_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X8B, 0X3C, 0X24 # movl (%r12), %r15d")
#define MOV_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X8B, 0X7D, 0X00 # movl (%r13), %r15d")
#define MOV_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X8B, 0X3E # movl (%r14), %r15d")
#define MOV_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X8B, 0X3F # movl (%r15), %r15d")
#define MOV_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X38 # movl (%eax), %r15d")
#define MOV_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X3B # movl (%ebx), %r15d")
#define MOV_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X39 # movl (%ecx), %r15d")
#define MOV_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X3A # movl (%edx), %r15d")
#define MOV_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X3F # movl (%edi), %r15d")
#define MOV_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X3E # movl (%esi), %r15d")
#define MOV_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X7D, 0X00 # movl (%ebp), %r15d")
#define MOV_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X3C, 0X24 # movl (%esp), %r15d")

#define MOV_EAX_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X00 # movl %eax, (%rax)")
#define MOV_EAX_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X03 # movl %eax, (%rbx)")
#define MOV_EAX_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X01 # movl %eax, (%rcx)")
#define MOV_EAX_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X02 # movl %eax, (%rdx)")
#define MOV_EAX_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X07 # movl %eax, (%rdi)")
#define MOV_EAX_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X06 # movl %eax, (%rsi)")
#define MOV_EAX_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X45, 0X00 # movl %eax, (%rbp)")
#define MOV_EAX_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X04, 0X24 # movl %eax, (%rsp)")
#define MOV_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X00 # movl %eax, (%r8)")
#define MOV_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X01 # movl %eax, (%r9)")
#define MOV_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X02 # movl %eax, (%r10)")
#define MOV_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X03 # movl %eax, (%r11)")
#define MOV_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X04, 0X24 # movl %eax, (%r12)")
#define MOV_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X45, 0X00 # movl %eax, (%r13)")
#define MOV_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X06 # movl %eax, (%r14)")
#define MOV_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X07 # movl %eax, (%r15)")
#define MOV_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X00 # movl %eax, (%eax)")
#define MOV_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X03 # movl %eax, (%ebx)")
#define MOV_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X01 # movl %eax, (%ecx)")
#define MOV_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X02 # movl %eax, (%edx)")
#define MOV_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X07 # movl %eax, (%edi)")
#define MOV_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X06 # movl %eax, (%esi)")
#define MOV_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X45, 0X00 # movl %eax, (%ebp)")
#define MOV_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X04, 0X24 # movl %eax, (%esp)")

#define MOV_EBX_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X18 # movl %ebx, (%rax)")
#define MOV_EBX_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X1B # movl %ebx, (%rbx)")
#define MOV_EBX_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X19 # movl %ebx, (%rcx)")
#define MOV_EBX_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X1A # movl %ebx, (%rdx)")
#define MOV_EBX_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X1F # movl %ebx, (%rdi)")
#define MOV_EBX_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X1E # movl %ebx, (%rsi)")
#define MOV_EBX_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X5D, 0X00 # movl %ebx, (%rbp)")
#define MOV_EBX_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X1C, 0X24 # movl %ebx, (%rsp)")
#define MOV_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X18 # movl %ebx, (%r8)")
#define MOV_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X19 # movl %ebx, (%r9)")
#define MOV_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X1A # movl %ebx, (%r10)")
#define MOV_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X1B # movl %ebx, (%r11)")
#define MOV_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X1C, 0X24 # movl %ebx, (%r12)")
#define MOV_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X5D, 0X00 # movl %ebx, (%r13)")
#define MOV_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X1E # movl %ebx, (%r14)")
#define MOV_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X1F # movl %ebx, (%r15)")
#define MOV_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X18 # movl %ebx, (%eax)")
#define MOV_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X1B # movl %ebx, (%ebx)")
#define MOV_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X19 # movl %ebx, (%ecx)")
#define MOV_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X1A # movl %ebx, (%edx)")
#define MOV_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X1F # movl %ebx, (%edi)")
#define MOV_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X1E # movl %ebx, (%esi)")
#define MOV_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X5D, 0X00 # movl %ebx, (%ebp)")
#define MOV_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X1C, 0X24 # movl %ebx, (%esp)")

#define MOV_ECX_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X08 # movl %ecx, (%rax)")
#define MOV_ECX_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X0B # movl %ecx, (%rbx)")
#define MOV_ECX_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X09 # movl %ecx, (%rcx)")
#define MOV_ECX_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X0A # movl %ecx, (%rdx)")
#define MOV_ECX_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X0F # movl %ecx, (%rdi)")
#define MOV_ECX_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X0E # movl %ecx, (%rsi)")
#define MOV_ECX_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X4D, 0X00 # movl %ecx, (%rbp)")
#define MOV_ECX_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X0C, 0X24 # movl %ecx, (%rsp)")
#define MOV_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X08 # movl %ecx, (%r8)")
#define MOV_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X09 # movl %ecx, (%r9)")
#define MOV_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X0A # movl %ecx, (%r10)")
#define MOV_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X0B # movl %ecx, (%r11)")
#define MOV_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X0C, 0X24 # movl %ecx, (%r12)")
#define MOV_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X4D, 0X00 # movl %ecx, (%r13)")
#define MOV_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X0E # movl %ecx, (%r14)")
#define MOV_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X0F # movl %ecx, (%r15)")
#define MOV_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X08 # movl %ecx, (%eax)")
#define MOV_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X0B # movl %ecx, (%ebx)")
#define MOV_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X09 # movl %ecx, (%ecx)")
#define MOV_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X0A # movl %ecx, (%edx)")
#define MOV_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X0F # movl %ecx, (%edi)")
#define MOV_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X0E # movl %ecx, (%esi)")
#define MOV_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X4D, 0X00 # movl %ecx, (%ebp)")
#define MOV_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X0C, 0X24 # movl %ecx, (%esp)")

#define MOV_EDX_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X10 # movl %edx, (%rax)")
#define MOV_EDX_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X13 # movl %edx, (%rbx)")
#define MOV_EDX_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X11 # movl %edx, (%rcx)")
#define MOV_EDX_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X12 # movl %edx, (%rdx)")
#define MOV_EDX_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X17 # movl %edx, (%rdi)")
#define MOV_EDX_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X16 # movl %edx, (%rsi)")
#define MOV_EDX_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X55, 0X00 # movl %edx, (%rbp)")
#define MOV_EDX_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X14, 0X24 # movl %edx, (%rsp)")
#define MOV_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X10 # movl %edx, (%r8)")
#define MOV_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X11 # movl %edx, (%r9)")
#define MOV_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X12 # movl %edx, (%r10)")
#define MOV_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X13 # movl %edx, (%r11)")
#define MOV_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X14, 0X24 # movl %edx, (%r12)")
#define MOV_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X55, 0X00 # movl %edx, (%r13)")
#define MOV_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X16 # movl %edx, (%r14)")
#define MOV_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X17 # movl %edx, (%r15)")
#define MOV_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X10 # movl %edx, (%eax)")
#define MOV_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X13 # movl %edx, (%ebx)")
#define MOV_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X11 # movl %edx, (%ecx)")
#define MOV_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X12 # movl %edx, (%edx)")
#define MOV_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X17 # movl %edx, (%edi)")
#define MOV_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X16 # movl %edx, (%esi)")
#define MOV_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X55, 0X00 # movl %edx, (%ebp)")
#define MOV_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X14, 0X24 # movl %edx, (%esp)")

#define MOV_EDI_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X38 # movl %edi, (%rax)")
#define MOV_EDI_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X3B # movl %edi, (%rbx)")
#define MOV_EDI_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X39 # movl %edi, (%rcx)")
#define MOV_EDI_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X3A # movl %edi, (%rdx)")
#define MOV_EDI_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X3F # movl %edi, (%rdi)")
#define MOV_EDI_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X3E # movl %edi, (%rsi)")
#define MOV_EDI_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X7D, 0X00 # movl %edi, (%rbp)")
#define MOV_EDI_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X3C, 0X24 # movl %edi, (%rsp)")
#define MOV_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X38 # movl %edi, (%r8)")
#define MOV_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X39 # movl %edi, (%r9)")
#define MOV_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X3A # movl %edi, (%r10)")
#define MOV_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X3B # movl %edi, (%r11)")
#define MOV_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X3C, 0X24 # movl %edi, (%r12)")
#define MOV_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X7D, 0X00 # movl %edi, (%r13)")
#define MOV_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X3E # movl %edi, (%r14)")
#define MOV_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X3F # movl %edi, (%r15)")
#define MOV_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X38 # movl %edi, (%eax)")
#define MOV_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X3B # movl %edi, (%ebx)")
#define MOV_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X39 # movl %edi, (%ecx)")
#define MOV_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X3A # movl %edi, (%edx)")
#define MOV_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X3F # movl %edi, (%edi)")
#define MOV_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X3E # movl %edi, (%esi)")
#define MOV_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X7D, 0X00 # movl %edi, (%ebp)")
#define MOV_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X3C, 0X24 # movl %edi, (%esp)")

#define MOV_ESI_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X30 # movl %esi, (%rax)")
#define MOV_ESI_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X33 # movl %esi, (%rbx)")
#define MOV_ESI_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X31 # movl %esi, (%rcx)")
#define MOV_ESI_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X32 # movl %esi, (%rdx)")
#define MOV_ESI_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X37 # movl %esi, (%rdi)")
#define MOV_ESI_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X36 # movl %esi, (%rsi)")
#define MOV_ESI_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X75, 0X00 # movl %esi, (%rbp)")
#define MOV_ESI_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X34, 0X24 # movl %esi, (%rsp)")
#define MOV_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X30 # movl %esi, (%r8)")
#define MOV_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X31 # movl %esi, (%r9)")
#define MOV_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X32 # movl %esi, (%r10)")
#define MOV_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X33 # movl %esi, (%r11)")
#define MOV_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X34, 0X24 # movl %esi, (%r12)")
#define MOV_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X75, 0X00 # movl %esi, (%r13)")
#define MOV_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X36 # movl %esi, (%r14)")
#define MOV_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X37 # movl %esi, (%r15)")
#define MOV_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X30 # movl %esi, (%eax)")
#define MOV_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X33 # movl %esi, (%ebx)")
#define MOV_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X31 # movl %esi, (%ecx)")
#define MOV_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X32 # movl %esi, (%edx)")
#define MOV_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X37 # movl %esi, (%edi)")
#define MOV_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X36 # movl %esi, (%esi)")
#define MOV_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X75, 0X00 # movl %esi, (%ebp)")
#define MOV_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X34, 0X24 # movl %esi, (%esp)")

#define MOV_EBP_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X28 # movl %ebp, (%rax)")
#define MOV_EBP_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X2B # movl %ebp, (%rbx)")
#define MOV_EBP_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X29 # movl %ebp, (%rcx)")
#define MOV_EBP_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X2A # movl %ebp, (%rdx)")
#define MOV_EBP_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X2F # movl %ebp, (%rdi)")
#define MOV_EBP_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X2E # movl %ebp, (%rsi)")
#define MOV_EBP_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X6D, 0X00 # movl %ebp, (%rbp)")
#define MOV_EBP_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X2C, 0X24 # movl %ebp, (%rsp)")
#define MOV_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X28 # movl %ebp, (%r8)")
#define MOV_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X29 # movl %ebp, (%r9)")
#define MOV_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X2A # movl %ebp, (%r10)")
#define MOV_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X2B # movl %ebp, (%r11)")
#define MOV_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X2C, 0X24 # movl %ebp, (%r12)")
#define MOV_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X6D, 0X00 # movl %ebp, (%r13)")
#define MOV_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X2E # movl %ebp, (%r14)")
#define MOV_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X2F # movl %ebp, (%r15)")
#define MOV_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X28 # movl %ebp, (%eax)")
#define MOV_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X2B # movl %ebp, (%ebx)")
#define MOV_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X29 # movl %ebp, (%ecx)")
#define MOV_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X2A # movl %ebp, (%edx)")
#define MOV_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X2F # movl %ebp, (%edi)")
#define MOV_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X2E # movl %ebp, (%esi)")
#define MOV_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X6D, 0X00 # movl %ebp, (%ebp)")
#define MOV_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X2C, 0X24 # movl %ebp, (%esp)")

#define MOV_ESP_TO_PTR_RAX CMT_ASM(".byte 0X89, 0X20 # movl %esp, (%rax)")
#define MOV_ESP_TO_PTR_RBX CMT_ASM(".byte 0X89, 0X23 # movl %esp, (%rbx)")
#define MOV_ESP_TO_PTR_RCX CMT_ASM(".byte 0X89, 0X21 # movl %esp, (%rcx)")
#define MOV_ESP_TO_PTR_RDX CMT_ASM(".byte 0X89, 0X22 # movl %esp, (%rdx)")
#define MOV_ESP_TO_PTR_RDI CMT_ASM(".byte 0X89, 0X27 # movl %esp, (%rdi)")
#define MOV_ESP_TO_PTR_RSI CMT_ASM(".byte 0X89, 0X26 # movl %esp, (%rsi)")
#define MOV_ESP_TO_PTR_RBP CMT_ASM(".byte 0X89, 0X65, 0X00 # movl %esp, (%rbp)")
#define MOV_ESP_TO_PTR_RSP CMT_ASM(".byte 0X89, 0X24, 0X24 # movl %esp, (%rsp)")
#define MOV_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X89, 0X20 # movl %esp, (%r8)")
#define MOV_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X89, 0X21 # movl %esp, (%r9)")
#define MOV_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X89, 0X22 # movl %esp, (%r10)")
#define MOV_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X89, 0X23 # movl %esp, (%r11)")
#define MOV_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X89, 0X24, 0X24 # movl %esp, (%r12)")
#define MOV_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X89, 0X65, 0X00 # movl %esp, (%r13)")
#define MOV_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X89, 0X26 # movl %esp, (%r14)")
#define MOV_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X89, 0X27 # movl %esp, (%r15)")
#define MOV_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X89, 0X20 # movl %esp, (%eax)")
#define MOV_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X89, 0X23 # movl %esp, (%ebx)")
#define MOV_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X89, 0X21 # movl %esp, (%ecx)")
#define MOV_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X89, 0X22 # movl %esp, (%edx)")
#define MOV_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X89, 0X27 # movl %esp, (%edi)")
#define MOV_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X89, 0X26 # movl %esp, (%esi)")
#define MOV_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X89, 0X65, 0X00 # movl %esp, (%ebp)")
#define MOV_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X89, 0X24, 0X24 # movl %esp, (%esp)")

#define MOV_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X00 # movl %r8d, (%rax)")
#define MOV_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X03 # movl %r8d, (%rbx)")
#define MOV_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X01 # movl %r8d, (%rcx)")
#define MOV_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X02 # movl %r8d, (%rdx)")
#define MOV_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X07 # movl %r8d, (%rdi)")
#define MOV_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X06 # movl %r8d, (%rsi)")
#define MOV_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X45, 0X00 # movl %r8d, (%rbp)")
#define MOV_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X04, 0X24 # movl %r8d, (%rsp)")
#define MOV_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X00 # movl %r8d, (%r8)")
#define MOV_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X01 # movl %r8d, (%r9)")
#define MOV_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X02 # movl %r8d, (%r10)")
#define MOV_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X03 # movl %r8d, (%r11)")
#define MOV_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X04, 0X24 # movl %r8d, (%r12)")
#define MOV_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X45, 0X00 # movl %r8d, (%r13)")
#define MOV_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X06 # movl %r8d, (%r14)")
#define MOV_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X07 # movl %r8d, (%r15)")
#define MOV_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X00 # movl %r8d, (%eax)")
#define MOV_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X03 # movl %r8d, (%ebx)")
#define MOV_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X01 # movl %r8d, (%ecx)")
#define MOV_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X02 # movl %r8d, (%edx)")
#define MOV_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X07 # movl %r8d, (%edi)")
#define MOV_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X06 # movl %r8d, (%esi)")
#define MOV_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X45, 0X00 # movl %r8d, (%ebp)")
#define MOV_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X04, 0X24 # movl %r8d, (%esp)")

#define MOV_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X08 # movl %r9d, (%rax)")
#define MOV_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X0B # movl %r9d, (%rbx)")
#define MOV_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X09 # movl %r9d, (%rcx)")
#define MOV_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X0A # movl %r9d, (%rdx)")
#define MOV_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X0F # movl %r9d, (%rdi)")
#define MOV_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X0E # movl %r9d, (%rsi)")
#define MOV_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X4D, 0X00 # movl %r9d, (%rbp)")
#define MOV_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X0C, 0X24 # movl %r9d, (%rsp)")
#define MOV_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X08 # movl %r9d, (%r8)")
#define MOV_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X09 # movl %r9d, (%r9)")
#define MOV_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X0A # movl %r9d, (%r10)")
#define MOV_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X0B # movl %r9d, (%r11)")
#define MOV_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X0C, 0X24 # movl %r9d, (%r12)")
#define MOV_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X4D, 0X00 # movl %r9d, (%r13)")
#define MOV_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X0E # movl %r9d, (%r14)")
#define MOV_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X0F # movl %r9d, (%r15)")
#define MOV_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X08 # movl %r9d, (%eax)")
#define MOV_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X0B # movl %r9d, (%ebx)")
#define MOV_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X09 # movl %r9d, (%ecx)")
#define MOV_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X0A # movl %r9d, (%edx)")
#define MOV_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X0F # movl %r9d, (%edi)")
#define MOV_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X0E # movl %r9d, (%esi)")
#define MOV_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X4D, 0X00 # movl %r9d, (%ebp)")
#define MOV_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X0C, 0X24 # movl %r9d, (%esp)")

#define MOV_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X10 # movl %r10d, (%rax)")
#define MOV_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X13 # movl %r10d, (%rbx)")
#define MOV_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X11 # movl %r10d, (%rcx)")
#define MOV_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X12 # movl %r10d, (%rdx)")
#define MOV_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X17 # movl %r10d, (%rdi)")
#define MOV_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X16 # movl %r10d, (%rsi)")
#define MOV_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X55, 0X00 # movl %r10d, (%rbp)")
#define MOV_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X14, 0X24 # movl %r10d, (%rsp)")
#define MOV_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X10 # movl %r10d, (%r8)")
#define MOV_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X11 # movl %r10d, (%r9)")
#define MOV_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X12 # movl %r10d, (%r10)")
#define MOV_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X13 # movl %r10d, (%r11)")
#define MOV_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X14, 0X24 # movl %r10d, (%r12)")
#define MOV_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X55, 0X00 # movl %r10d, (%r13)")
#define MOV_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X16 # movl %r10d, (%r14)")
#define MOV_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X17 # movl %r10d, (%r15)")
#define MOV_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X10 # movl %r10d, (%eax)")
#define MOV_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X13 # movl %r10d, (%ebx)")
#define MOV_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X11 # movl %r10d, (%ecx)")
#define MOV_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X12 # movl %r10d, (%edx)")
#define MOV_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X17 # movl %r10d, (%edi)")
#define MOV_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X16 # movl %r10d, (%esi)")
#define MOV_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X55, 0X00 # movl %r10d, (%ebp)")
#define MOV_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X14, 0X24 # movl %r10d, (%esp)")

#define MOV_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X18 # movl %r11d, (%rax)")
#define MOV_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X1B # movl %r11d, (%rbx)")
#define MOV_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X19 # movl %r11d, (%rcx)")
#define MOV_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X1A # movl %r11d, (%rdx)")
#define MOV_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X1F # movl %r11d, (%rdi)")
#define MOV_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X1E # movl %r11d, (%rsi)")
#define MOV_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X5D, 0X00 # movl %r11d, (%rbp)")
#define MOV_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X1C, 0X24 # movl %r11d, (%rsp)")
#define MOV_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X18 # movl %r11d, (%r8)")
#define MOV_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X19 # movl %r11d, (%r9)")
#define MOV_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X1A # movl %r11d, (%r10)")
#define MOV_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X1B # movl %r11d, (%r11)")
#define MOV_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X1C, 0X24 # movl %r11d, (%r12)")
#define MOV_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X5D, 0X00 # movl %r11d, (%r13)")
#define MOV_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X1E # movl %r11d, (%r14)")
#define MOV_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X1F # movl %r11d, (%r15)")
#define MOV_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X18 # movl %r11d, (%eax)")
#define MOV_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X1B # movl %r11d, (%ebx)")
#define MOV_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X19 # movl %r11d, (%ecx)")
#define MOV_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X1A # movl %r11d, (%edx)")
#define MOV_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X1F # movl %r11d, (%edi)")
#define MOV_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X1E # movl %r11d, (%esi)")
#define MOV_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X5D, 0X00 # movl %r11d, (%ebp)")
#define MOV_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X1C, 0X24 # movl %r11d, (%esp)")

#define MOV_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X20 # movl %r12d, (%rax)")
#define MOV_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X23 # movl %r12d, (%rbx)")
#define MOV_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X21 # movl %r12d, (%rcx)")
#define MOV_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X22 # movl %r12d, (%rdx)")
#define MOV_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X27 # movl %r12d, (%rdi)")
#define MOV_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X26 # movl %r12d, (%rsi)")
#define MOV_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X65, 0X00 # movl %r12d, (%rbp)")
#define MOV_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X24, 0X24 # movl %r12d, (%rsp)")
#define MOV_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X20 # movl %r12d, (%r8)")
#define MOV_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X21 # movl %r12d, (%r9)")
#define MOV_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X22 # movl %r12d, (%r10)")
#define MOV_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X23 # movl %r12d, (%r11)")
#define MOV_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X24, 0X24 # movl %r12d, (%r12)")
#define MOV_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X65, 0X00 # movl %r12d, (%r13)")
#define MOV_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X26 # movl %r12d, (%r14)")
#define MOV_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X27 # movl %r12d, (%r15)")
#define MOV_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X20 # movl %r12d, (%eax)")
#define MOV_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X23 # movl %r12d, (%ebx)")
#define MOV_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X21 # movl %r12d, (%ecx)")
#define MOV_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X22 # movl %r12d, (%edx)")
#define MOV_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X27 # movl %r12d, (%edi)")
#define MOV_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X26 # movl %r12d, (%esi)")
#define MOV_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X65, 0X00 # movl %r12d, (%ebp)")
#define MOV_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X24, 0X24 # movl %r12d, (%esp)")

#define MOV_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X28 # movl %r13d, (%rax)")
#define MOV_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X2B # movl %r13d, (%rbx)")
#define MOV_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X29 # movl %r13d, (%rcx)")
#define MOV_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X2A # movl %r13d, (%rdx)")
#define MOV_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X2F # movl %r13d, (%rdi)")
#define MOV_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X2E # movl %r13d, (%rsi)")
#define MOV_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X6D, 0X00 # movl %r13d, (%rbp)")
#define MOV_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X2C, 0X24 # movl %r13d, (%rsp)")
#define MOV_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X28 # movl %r13d, (%r8)")
#define MOV_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X29 # movl %r13d, (%r9)")
#define MOV_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X2A # movl %r13d, (%r10)")
#define MOV_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X2B # movl %r13d, (%r11)")
#define MOV_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X2C, 0X24 # movl %r13d, (%r12)")
#define MOV_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X6D, 0X00 # movl %r13d, (%r13)")
#define MOV_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X2E # movl %r13d, (%r14)")
#define MOV_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X2F # movl %r13d, (%r15)")
#define MOV_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X28 # movl %r13d, (%eax)")
#define MOV_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X2B # movl %r13d, (%ebx)")
#define MOV_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X29 # movl %r13d, (%ecx)")
#define MOV_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X2A # movl %r13d, (%edx)")
#define MOV_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X2F # movl %r13d, (%edi)")
#define MOV_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X2E # movl %r13d, (%esi)")
#define MOV_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X6D, 0X00 # movl %r13d, (%ebp)")
#define MOV_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X2C, 0X24 # movl %r13d, (%esp)")

#define MOV_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X30 # movl %r14d, (%rax)")
#define MOV_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X33 # movl %r14d, (%rbx)")
#define MOV_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X31 # movl %r14d, (%rcx)")
#define MOV_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X32 # movl %r14d, (%rdx)")
#define MOV_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X37 # movl %r14d, (%rdi)")
#define MOV_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X36 # movl %r14d, (%rsi)")
#define MOV_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X75, 0X00 # movl %r14d, (%rbp)")
#define MOV_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X34, 0X24 # movl %r14d, (%rsp)")
#define MOV_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X30 # movl %r14d, (%r8)")
#define MOV_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X31 # movl %r14d, (%r9)")
#define MOV_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X32 # movl %r14d, (%r10)")
#define MOV_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X33 # movl %r14d, (%r11)")
#define MOV_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X34, 0X24 # movl %r14d, (%r12)")
#define MOV_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X75, 0X00 # movl %r14d, (%r13)")
#define MOV_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X36 # movl %r14d, (%r14)")
#define MOV_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X37 # movl %r14d, (%r15)")
#define MOV_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X30 # movl %r14d, (%eax)")
#define MOV_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X33 # movl %r14d, (%ebx)")
#define MOV_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X31 # movl %r14d, (%ecx)")
#define MOV_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X32 # movl %r14d, (%edx)")
#define MOV_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X37 # movl %r14d, (%edi)")
#define MOV_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X36 # movl %r14d, (%esi)")
#define MOV_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X75, 0X00 # movl %r14d, (%ebp)")
#define MOV_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X34, 0X24 # movl %r14d, (%esp)")

#define MOV_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X89, 0X38 # movl %r15d, (%rax)")
#define MOV_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X89, 0X3B # movl %r15d, (%rbx)")
#define MOV_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X89, 0X39 # movl %r15d, (%rcx)")
#define MOV_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X89, 0X3A # movl %r15d, (%rdx)")
#define MOV_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X89, 0X3F # movl %r15d, (%rdi)")
#define MOV_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X89, 0X3E # movl %r15d, (%rsi)")
#define MOV_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X89, 0X7D, 0X00 # movl %r15d, (%rbp)")
#define MOV_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X89, 0X3C, 0X24 # movl %r15d, (%rsp)")
#define MOV_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X89, 0X38 # movl %r15d, (%r8)")
#define MOV_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X89, 0X39 # movl %r15d, (%r9)")
#define MOV_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X89, 0X3A # movl %r15d, (%r10)")
#define MOV_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X89, 0X3B # movl %r15d, (%r11)")
#define MOV_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X89, 0X3C, 0X24 # movl %r15d, (%r12)")
#define MOV_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X89, 0X7D, 0X00 # movl %r15d, (%r13)")
#define MOV_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X89, 0X3E # movl %r15d, (%r14)")
#define MOV_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X89, 0X3F # movl %r15d, (%r15)")
#define MOV_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X38 # movl %r15d, (%eax)")
#define MOV_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X3B # movl %r15d, (%ebx)")
#define MOV_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X39 # movl %r15d, (%ecx)")
#define MOV_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X89, 0X3A # movl %r15d, (%edx)")
#define MOV_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X3F # movl %r15d, (%edi)")
#define MOV_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X89, 0X3E # movl %r15d, (%esi)")
#define MOV_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X7D, 0X00 # movl %r15d, (%ebp)")
#define MOV_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X89, 0X3C, 0X24 # movl %r15d, (%esp)")

#define MOV_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X80 # movl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X83 # movl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X81 # movl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X82 # movl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X87 # movl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X86 # movl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X85 # movl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X80 # movl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X81 # movl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X82 # movl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X83 # movl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X85 # movl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X86 # movl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X87 # movl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X80 # movl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X83 # movl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X81 # movl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X82 # movl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X87 # movl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X86 # movl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X85 # movl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X98 # movl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9B # movl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X99 # movl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9A # movl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9F # movl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9E # movl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9D # movl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X98 # movl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X99 # movl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9A # movl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9B # movl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9D # movl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9E # movl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X9F # movl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X98 # movl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9B # movl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X99 # movl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9A # movl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9F # movl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9E # movl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9D # movl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X88 # movl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8B # movl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X89 # movl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8A # movl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8F # movl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8E # movl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8D # movl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X88 # movl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X89 # movl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8A # movl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8B # movl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8D # movl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8E # movl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X8F # movl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X88 # movl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8B # movl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X89 # movl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8A # movl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8F # movl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8E # movl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8D # movl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X90 # movl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X93 # movl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X91 # movl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X92 # movl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X97 # movl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X96 # movl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X95 # movl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X90 # movl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X91 # movl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X92 # movl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X93 # movl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X95 # movl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X96 # movl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0X97 # movl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X90 # movl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X93 # movl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X91 # movl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X92 # movl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X97 # movl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X96 # movl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X95 # movl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB8 # movl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBB # movl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB9 # movl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBA # movl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBF # movl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBE # movl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBD # movl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB8 # movl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB9 # movl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBA # movl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBB # movl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBD # movl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBE # movl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XBF # movl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB8 # movl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBB # movl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB9 # movl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBA # movl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBF # movl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBE # movl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBD # movl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB0 # movl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB3 # movl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB1 # movl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB2 # movl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB7 # movl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB6 # movl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB5 # movl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB0 # movl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB1 # movl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB2 # movl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB3 # movl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB5 # movl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB6 # movl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XB7 # movl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB0 # movl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB3 # movl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB1 # movl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB2 # movl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB7 # movl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB6 # movl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB5 # movl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA8 # movl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAB # movl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA9 # movl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAA # movl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAF # movl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAE # movl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAD # movl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA8 # movl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA9 # movl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAA # movl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAB # movl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAD # movl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAE # movl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XAF # movl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA8 # movl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAB # movl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA9 # movl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAA # movl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAF # movl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAE # movl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAD # movl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA0 # movl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA3 # movl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA1 # movl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA2 # movl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA7 # movl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA6 # movl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA5 # movl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA0 # movl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA1 # movl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA2 # movl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA3 # movl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA5 # movl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA6 # movl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X8B, 0XA7 # movl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA0 # movl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA3 # movl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA1 # movl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA2 # movl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA7 # movl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA6 # movl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA5 # movl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X80 # movl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X83 # movl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X81 # movl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X82 # movl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X87 # movl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X86 # movl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X85 # movl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X80 # movl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X81 # movl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X82 # movl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X83 # movl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X85 # movl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X86 # movl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X87 # movl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X80 # movl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X83 # movl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X81 # movl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X82 # movl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X87 # movl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X86 # movl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X85 # movl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X84, 0X24 # movl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X88 # movl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8B # movl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X89 # movl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8A # movl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8F # movl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8E # movl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8D # movl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X88 # movl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X89 # movl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8A # movl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8B # movl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8D # movl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8E # movl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X8F # movl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X88 # movl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8B # movl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X89 # movl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8A # movl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8F # movl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8E # movl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8D # movl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X8C, 0X24 # movl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X90 # movl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X93 # movl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X91 # movl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X92 # movl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X97 # movl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X96 # movl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X95 # movl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X90 # movl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X91 # movl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X92 # movl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X93 # movl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X95 # movl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X96 # movl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X97 # movl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X90 # movl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X93 # movl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X91 # movl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X92 # movl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X97 # movl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X96 # movl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X95 # movl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X94, 0X24 # movl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X98 # movl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9B # movl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X99 # movl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9A # movl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9F # movl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9E # movl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9D # movl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X98 # movl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X99 # movl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9A # movl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9B # movl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9D # movl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9E # movl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0X9F # movl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X98 # movl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9B # movl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X99 # movl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9A # movl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9F # movl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9E # movl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9D # movl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0X9C, 0X24 # movl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA0 # movl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA3 # movl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA1 # movl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA2 # movl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA7 # movl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA6 # movl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA5 # movl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA0 # movl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA1 # movl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA2 # movl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA3 # movl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA5 # movl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA6 # movl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA7 # movl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA0 # movl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA3 # movl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA1 # movl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA2 # movl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA7 # movl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA6 # movl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA5 # movl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA4, 0X24 # movl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA8 # movl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAB # movl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XA9 # movl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAA # movl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAF # movl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAE # movl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAD # movl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA8 # movl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XA9 # movl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAA # movl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAB # movl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAD # movl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAE # movl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XAF # movl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA8 # movl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAB # movl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XA9 # movl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAA # movl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAF # movl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAE # movl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAD # movl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XAC, 0X24 # movl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB0 # movl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB3 # movl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB1 # movl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB2 # movl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB7 # movl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB6 # movl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB5 # movl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB0 # movl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB1 # movl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB2 # movl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB3 # movl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB5 # movl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB6 # movl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB7 # movl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB0 # movl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB3 # movl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB1 # movl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB2 # movl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB7 # movl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB6 # movl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB5 # movl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB4, 0X24 # movl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB8 # movl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBB # movl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XB9 # movl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBA # movl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBF # movl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBE # movl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBD # movl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB8 # movl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XB9 # movl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBA # movl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBB # movl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBD # movl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBE # movl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X8B, 0XBF # movl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB8 # movl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBB # movl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XB9 # movl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBA # movl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBF # movl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBE # movl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBD # movl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X8B, 0XBC, 0X24 # movl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X80 # movl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X83 # movl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X81 # movl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X82 # movl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X87 # movl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X86 # movl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X85 # movl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X84, 0X24 # movl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X80 # movl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X81 # movl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X82 # movl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X83 # movl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X84, 0X24 # movl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X85 # movl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X86 # movl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X87 # movl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X80 # movl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X83 # movl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X81 # movl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X82 # movl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X87 # movl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X86 # movl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X85 # movl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X84, 0X24 # movl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X98 # movl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9B # movl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X99 # movl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9A # movl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9F # movl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9E # movl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9D # movl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X9C, 0X24 # movl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X98 # movl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X99 # movl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9A # movl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9B # movl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9C, 0X24 # movl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9D # movl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9E # movl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X9F # movl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X98 # movl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9B # movl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X99 # movl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9A # movl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9F # movl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9E # movl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9D # movl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X9C, 0X24 # movl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X88 # movl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8B # movl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X89 # movl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8A # movl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8F # movl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8E # movl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8D # movl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X8C, 0X24 # movl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X88 # movl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X89 # movl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8A # movl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8B # movl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8C, 0X24 # movl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8D # movl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8E # movl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X8F # movl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X88 # movl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8B # movl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X89 # movl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8A # movl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8F # movl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8E # movl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8D # movl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X8C, 0X24 # movl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X90 # movl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X93 # movl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X91 # movl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0X92 # movl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X97 # movl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0X96 # movl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X95 # movl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0X94, 0X24 # movl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X90 # movl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X91 # movl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X92 # movl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X93 # movl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X94, 0X24 # movl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X95 # movl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X96 # movl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0X97 # movl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X90 # movl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X93 # movl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X91 # movl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X92 # movl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X97 # movl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X96 # movl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X95 # movl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0X94, 0X24 # movl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB8 # movl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBB # movl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB9 # movl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBA # movl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBF # movl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBE # movl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBD # movl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XBC, 0X24 # movl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB8 # movl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB9 # movl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBA # movl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBB # movl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBC, 0X24 # movl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBD # movl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBE # movl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XBF # movl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB8 # movl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBB # movl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB9 # movl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBA # movl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBF # movl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBE # movl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBD # movl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XBC, 0X24 # movl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB0 # movl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB3 # movl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB1 # movl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB2 # movl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB7 # movl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB6 # movl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB5 # movl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XB4, 0X24 # movl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB0 # movl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB1 # movl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB2 # movl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB3 # movl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB4, 0X24 # movl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB5 # movl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB6 # movl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XB7 # movl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB0 # movl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB3 # movl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB1 # movl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB2 # movl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB7 # movl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB6 # movl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB5 # movl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XB4, 0X24 # movl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA8 # movl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAB # movl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA9 # movl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAA # movl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAF # movl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAE # movl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAD # movl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XAC, 0X24 # movl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA8 # movl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA9 # movl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAA # movl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAB # movl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAC, 0X24 # movl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAD # movl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAE # movl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XAF # movl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA8 # movl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAB # movl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA9 # movl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAA # movl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAF # movl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAE # movl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAD # movl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XAC, 0X24 # movl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA0 # movl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA3 # movl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA1 # movl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA2 # movl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA7 # movl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA6 # movl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA5 # movl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X89, 0XA4, 0X24 # movl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA0 # movl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA1 # movl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA2 # movl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA3 # movl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA4, 0X24 # movl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA5 # movl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA6 # movl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X89, 0XA7 # movl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA0 # movl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA3 # movl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA1 # movl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA2 # movl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA7 # movl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA6 # movl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA5 # movl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X89, 0XA4, 0X24 # movl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X80 # movl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X83 # movl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X81 # movl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X82 # movl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X87 # movl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X86 # movl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X85 # movl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X84, 0X24 # movl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X80 # movl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X81 # movl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X82 # movl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X83 # movl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X84, 0X24 # movl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X85 # movl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X86 # movl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X87 # movl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X80 # movl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X83 # movl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X81 # movl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X82 # movl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X87 # movl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X86 # movl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X85 # movl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X84, 0X24 # movl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X88 # movl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8B # movl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X89 # movl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8A # movl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8F # movl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8E # movl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8D # movl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X8C, 0X24 # movl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X88 # movl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X89 # movl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8A # movl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8B # movl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8C, 0X24 # movl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8D # movl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8E # movl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X8F # movl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X88 # movl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8B # movl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X89 # movl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8A # movl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8F # movl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8E # movl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8D # movl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X8C, 0X24 # movl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X90 # movl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X93 # movl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X91 # movl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X92 # movl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X97 # movl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X96 # movl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X95 # movl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X94, 0X24 # movl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X90 # movl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X91 # movl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X92 # movl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X93 # movl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X94, 0X24 # movl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X95 # movl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X96 # movl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X97 # movl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X90 # movl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X93 # movl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X91 # movl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X92 # movl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X97 # movl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X96 # movl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X95 # movl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X94, 0X24 # movl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X98 # movl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9B # movl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X99 # movl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9A # movl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9F # movl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9E # movl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9D # movl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0X9C, 0X24 # movl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X98 # movl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X99 # movl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9A # movl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9B # movl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9C, 0X24 # movl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9D # movl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9E # movl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0X9F # movl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X98 # movl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9B # movl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X99 # movl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9A # movl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9F # movl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9E # movl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9D # movl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0X9C, 0X24 # movl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA0 # movl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA3 # movl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA1 # movl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA2 # movl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA7 # movl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA6 # movl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA5 # movl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA4, 0X24 # movl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA0 # movl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA1 # movl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA2 # movl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA3 # movl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA4, 0X24 # movl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA5 # movl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA6 # movl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA7 # movl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA0 # movl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA3 # movl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA1 # movl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA2 # movl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA7 # movl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA6 # movl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA5 # movl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA4, 0X24 # movl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA8 # movl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAB # movl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XA9 # movl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAA # movl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAF # movl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAE # movl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAD # movl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XAC, 0X24 # movl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA8 # movl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XA9 # movl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAA # movl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAB # movl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAC, 0X24 # movl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAD # movl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAE # movl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XAF # movl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA8 # movl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAB # movl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XA9 # movl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAA # movl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAF # movl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAE # movl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAD # movl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XAC, 0X24 # movl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB0 # movl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB3 # movl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB1 # movl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB2 # movl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB7 # movl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB6 # movl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB5 # movl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB4, 0X24 # movl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB0 # movl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB1 # movl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB2 # movl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB3 # movl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB4, 0X24 # movl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB5 # movl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB6 # movl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB7 # movl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB0 # movl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB3 # movl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB1 # movl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB2 # movl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB7 # movl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB6 # movl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB5 # movl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB4, 0X24 # movl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define MOV_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB8 # movl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBB # movl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XB9 # movl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBA # movl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBF # movl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBE # movl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBD # movl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X89, 0XBC, 0X24 # movl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB8 # movl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XB9 # movl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBA # movl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBB # movl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBC, 0X24 # movl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBD # movl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBE # movl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X89, 0XBF # movl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB8 # movl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBB # movl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XB9 # movl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBA # movl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBF # movl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBE # movl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBD # movl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define MOV_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X89, 0XBC, 0X24 # movl %r15d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 32-BIT MEMORY [^] ************************** */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
