#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define ADD_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X05 # addl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X1D # addl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X0D # addl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X15 # addl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X3D # addl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X35 # addl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X2D # addl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X25 # addl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X05 # addl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X1D # addl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X0D # addl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X15 # addl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X3D # addl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X35 # addl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X2D # addl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X25 # addl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X00 # addl (%eax), %eax")
#define ADD_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X03 # addl (%ebx), %eax")
#define ADD_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X01 # addl (%ecx), %eax")
#define ADD_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X02 # addl (%edx), %eax")
#define ADD_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X07 # addl (%edi), %eax")
#define ADD_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X06 # addl (%esi), %eax")
#define ADD_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X45, 0X00 # addl (%ebp), %eax")
#define ADD_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X04, 0X24 # addl (%esp), %eax")
#define ADD_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X07 # addl (%bx), %eax")
#define ADD_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X46, 0X00 # addl (%bp), %eax")
#define ADD_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X04 # addl (%si), %eax")
#define ADD_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X05 # addl (%di), %eax")

#define ADD_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X18 # addl (%eax), %ebx")
#define ADD_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X1B # addl (%ebx), %ebx")
#define ADD_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X19 # addl (%ecx), %ebx")
#define ADD_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X1A # addl (%edx), %ebx")
#define ADD_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X1F # addl (%edi), %ebx")
#define ADD_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X1E # addl (%esi), %ebx")
#define ADD_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X5D, 0X00 # addl (%ebp), %ebx")
#define ADD_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X1C, 0X24 # addl (%esp), %ebx")
#define ADD_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X1F # addl (%bx), %ebx")
#define ADD_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X5E, 0X00 # addl (%bp), %ebx")
#define ADD_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X1C # addl (%si), %ebx")
#define ADD_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X1D # addl (%di), %ebx")

#define ADD_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X08 # addl (%eax), %ecx")
#define ADD_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X0B # addl (%ebx), %ecx")
#define ADD_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X09 # addl (%ecx), %ecx")
#define ADD_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X0A # addl (%edx), %ecx")
#define ADD_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X0F # addl (%edi), %ecx")
#define ADD_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X0E # addl (%esi), %ecx")
#define ADD_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X4D, 0X00 # addl (%ebp), %ecx")
#define ADD_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X0C, 0X24 # addl (%esp), %ecx")
#define ADD_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X0F # addl (%bx), %ecx")
#define ADD_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X4E, 0X00 # addl (%bp), %ecx")
#define ADD_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X0C # addl (%si), %ecx")
#define ADD_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X0D # addl (%di), %ecx")

#define ADD_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X10 # addl (%eax), %edx")
#define ADD_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X13 # addl (%ebx), %edx")
#define ADD_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X11 # addl (%ecx), %edx")
#define ADD_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X12 # addl (%edx), %edx")
#define ADD_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X17 # addl (%edi), %edx")
#define ADD_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X16 # addl (%esi), %edx")
#define ADD_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X55, 0X00 # addl (%ebp), %edx")
#define ADD_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X14, 0X24 # addl (%esp), %edx")
#define ADD_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X17 # addl (%bx), %edx")
#define ADD_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X56, 0X00 # addl (%bp), %edx")
#define ADD_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X14 # addl (%si), %edx")
#define ADD_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X15 # addl (%di), %edx")

#define ADD_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X38 # addl (%eax), %edi")
#define ADD_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X3B # addl (%ebx), %edi")
#define ADD_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X39 # addl (%ecx), %edi")
#define ADD_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X3A # addl (%edx), %edi")
#define ADD_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X3F # addl (%edi), %edi")
#define ADD_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X3E # addl (%esi), %edi")
#define ADD_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X7D, 0X00 # addl (%ebp), %edi")
#define ADD_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X3C, 0X24 # addl (%esp), %edi")
#define ADD_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X3F # addl (%bx), %edi")
#define ADD_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X7E, 0X00 # addl (%bp), %edi")
#define ADD_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X3C # addl (%si), %edi")
#define ADD_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X3D # addl (%di), %edi")

#define ADD_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X30 # addl (%eax), %esi")
#define ADD_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X33 # addl (%ebx), %esi")
#define ADD_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X31 # addl (%ecx), %esi")
#define ADD_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X32 # addl (%edx), %esi")
#define ADD_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X37 # addl (%edi), %esi")
#define ADD_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X36 # addl (%esi), %esi")
#define ADD_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X75, 0X00 # addl (%ebp), %esi")
#define ADD_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X34, 0X24 # addl (%esp), %esi")
#define ADD_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X37 # addl (%bx), %esi")
#define ADD_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X76, 0X00 # addl (%bp), %esi")
#define ADD_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X34 # addl (%si), %esi")
#define ADD_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X35 # addl (%di), %esi")

#define ADD_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X28 # addl (%eax), %ebp")
#define ADD_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X2B # addl (%ebx), %ebp")
#define ADD_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X29 # addl (%ecx), %ebp")
#define ADD_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X2A # addl (%edx), %ebp")
#define ADD_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X2F # addl (%edi), %ebp")
#define ADD_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X2E # addl (%esi), %ebp")
#define ADD_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X6D, 0X00 # addl (%ebp), %ebp")
#define ADD_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X2C, 0X24 # addl (%esp), %ebp")
#define ADD_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X2F # addl (%bx), %ebp")
#define ADD_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X6E, 0X00 # addl (%bp), %ebp")
#define ADD_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X2C # addl (%si), %ebp")
#define ADD_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X2D # addl (%di), %ebp")

#define ADD_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X03, 0X20 # addl (%eax), %esp")
#define ADD_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X03, 0X23 # addl (%ebx), %esp")
#define ADD_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X03, 0X21 # addl (%ecx), %esp")
#define ADD_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X03, 0X22 # addl (%edx), %esp")
#define ADD_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X03, 0X27 # addl (%edi), %esp")
#define ADD_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X03, 0X26 # addl (%esi), %esp")
#define ADD_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X03, 0X65, 0X00 # addl (%ebp), %esp")
#define ADD_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X03, 0X24, 0X24 # addl (%esp), %esp")
#define ADD_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X03, 0X27 # addl (%bx), %esp")
#define ADD_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X03, 0X66, 0X00 # addl (%bp), %esp")
#define ADD_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X03, 0X24 # addl (%si), %esp")
#define ADD_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X03, 0X25 # addl (%di), %esp")

#define ADD_EAX_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X00 # addl %eax, (%eax)")
#define ADD_EAX_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X03 # addl %eax, (%ebx)")
#define ADD_EAX_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X01 # addl %eax, (%ecx)")
#define ADD_EAX_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X02 # addl %eax, (%edx)")
#define ADD_EAX_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X07 # addl %eax, (%edi)")
#define ADD_EAX_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X06 # addl %eax, (%esi)")
#define ADD_EAX_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X45, 0X00 # addl %eax, (%ebp)")
#define ADD_EAX_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X04, 0X24 # addl %eax, (%esp)")
#define ADD_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X07 # addl %eax, (%bx)")
#define ADD_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X46, 0X00 # addl %eax, (%bp)")
#define ADD_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X04 # addl %eax, (%si)")
#define ADD_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X05 # addl %eax, (%di)")

#define ADD_EBX_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X18 # addl %ebx, (%eax)")
#define ADD_EBX_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X1B # addl %ebx, (%ebx)")
#define ADD_EBX_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X19 # addl %ebx, (%ecx)")
#define ADD_EBX_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X1A # addl %ebx, (%edx)")
#define ADD_EBX_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X1F # addl %ebx, (%edi)")
#define ADD_EBX_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X1E # addl %ebx, (%esi)")
#define ADD_EBX_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X5D, 0X00 # addl %ebx, (%ebp)")
#define ADD_EBX_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X1C, 0X24 # addl %ebx, (%esp)")
#define ADD_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X1F # addl %ebx, (%bx)")
#define ADD_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X5E, 0X00 # addl %ebx, (%bp)")
#define ADD_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X1C # addl %ebx, (%si)")
#define ADD_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X1D # addl %ebx, (%di)")

#define ADD_ECX_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X08 # addl %ecx, (%eax)")
#define ADD_ECX_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X0B # addl %ecx, (%ebx)")
#define ADD_ECX_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X09 # addl %ecx, (%ecx)")
#define ADD_ECX_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X0A # addl %ecx, (%edx)")
#define ADD_ECX_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X0F # addl %ecx, (%edi)")
#define ADD_ECX_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X0E # addl %ecx, (%esi)")
#define ADD_ECX_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X4D, 0X00 # addl %ecx, (%ebp)")
#define ADD_ECX_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X0C, 0X24 # addl %ecx, (%esp)")
#define ADD_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X0F # addl %ecx, (%bx)")
#define ADD_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X4E, 0X00 # addl %ecx, (%bp)")
#define ADD_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X0C # addl %ecx, (%si)")
#define ADD_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X0D # addl %ecx, (%di)")

#define ADD_EDX_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X10 # addl %edx, (%eax)")
#define ADD_EDX_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X13 # addl %edx, (%ebx)")
#define ADD_EDX_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X11 # addl %edx, (%ecx)")
#define ADD_EDX_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X12 # addl %edx, (%edx)")
#define ADD_EDX_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X17 # addl %edx, (%edi)")
#define ADD_EDX_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X16 # addl %edx, (%esi)")
#define ADD_EDX_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X55, 0X00 # addl %edx, (%ebp)")
#define ADD_EDX_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X14, 0X24 # addl %edx, (%esp)")
#define ADD_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X17 # addl %edx, (%bx)")
#define ADD_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X56, 0X00 # addl %edx, (%bp)")
#define ADD_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X14 # addl %edx, (%si)")
#define ADD_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X15 # addl %edx, (%di)")

#define ADD_EDI_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X38 # addl %edi, (%eax)")
#define ADD_EDI_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X3B # addl %edi, (%ebx)")
#define ADD_EDI_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X39 # addl %edi, (%ecx)")
#define ADD_EDI_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X3A # addl %edi, (%edx)")
#define ADD_EDI_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X3F # addl %edi, (%edi)")
#define ADD_EDI_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X3E # addl %edi, (%esi)")
#define ADD_EDI_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X7D, 0X00 # addl %edi, (%ebp)")
#define ADD_EDI_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X3C, 0X24 # addl %edi, (%esp)")
#define ADD_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X3F # addl %edi, (%bx)")
#define ADD_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X7E, 0X00 # addl %edi, (%bp)")
#define ADD_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X3C # addl %edi, (%si)")
#define ADD_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X3D # addl %edi, (%di)")

#define ADD_ESI_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X30 # addl %esi, (%eax)")
#define ADD_ESI_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X33 # addl %esi, (%ebx)")
#define ADD_ESI_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X31 # addl %esi, (%ecx)")
#define ADD_ESI_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X32 # addl %esi, (%edx)")
#define ADD_ESI_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X37 # addl %esi, (%edi)")
#define ADD_ESI_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X36 # addl %esi, (%esi)")
#define ADD_ESI_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X75, 0X00 # addl %esi, (%ebp)")
#define ADD_ESI_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X34, 0X24 # addl %esi, (%esp)")
#define ADD_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X37 # addl %esi, (%bx)")
#define ADD_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X76, 0X00 # addl %esi, (%bp)")
#define ADD_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X34 # addl %esi, (%si)")
#define ADD_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X35 # addl %esi, (%di)")

#define ADD_EBP_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X28 # addl %ebp, (%eax)")
#define ADD_EBP_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X2B # addl %ebp, (%ebx)")
#define ADD_EBP_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X29 # addl %ebp, (%ecx)")
#define ADD_EBP_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X2A # addl %ebp, (%edx)")
#define ADD_EBP_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X2F # addl %ebp, (%edi)")
#define ADD_EBP_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X2E # addl %ebp, (%esi)")
#define ADD_EBP_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X6D, 0X00 # addl %ebp, (%ebp)")
#define ADD_EBP_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X2C, 0X24 # addl %ebp, (%esp)")
#define ADD_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X2F # addl %ebp, (%bx)")
#define ADD_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X6E, 0X00 # addl %ebp, (%bp)")
#define ADD_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X2C # addl %ebp, (%si)")
#define ADD_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X2D # addl %ebp, (%di)")

#define ADD_ESP_TO_PTR_EAX CMT_ASM(".byte 0X01, 0X20 # addl %esp, (%eax)")
#define ADD_ESP_TO_PTR_EBX CMT_ASM(".byte 0X01, 0X23 # addl %esp, (%ebx)")
#define ADD_ESP_TO_PTR_ECX CMT_ASM(".byte 0X01, 0X21 # addl %esp, (%ecx)")
#define ADD_ESP_TO_PTR_EDX CMT_ASM(".byte 0X01, 0X22 # addl %esp, (%edx)")
#define ADD_ESP_TO_PTR_EDI CMT_ASM(".byte 0X01, 0X27 # addl %esp, (%edi)")
#define ADD_ESP_TO_PTR_ESI CMT_ASM(".byte 0X01, 0X26 # addl %esp, (%esi)")
#define ADD_ESP_TO_PTR_EBP CMT_ASM(".byte 0X01, 0X65, 0X00 # addl %esp, (%ebp)")
#define ADD_ESP_TO_PTR_ESP CMT_ASM(".byte 0X01, 0X24, 0X24 # addl %esp, (%esp)")
#define ADD_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X01, 0X27 # addl %esp, (%bx)")
#define ADD_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X01, 0X66, 0X00 # addl %esp, (%bp)")
#define ADD_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X01, 0X24 # addl %esp, (%si)")
#define ADD_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X01, 0X25 # addl %esp, (%di)")

#define ADD_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X80 # addl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X83 # addl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X81 # addl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X82 # addl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X87 # addl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X86 # addl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X85 # addl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X84, 0X24 # addl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X87 # addl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X86 # addl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X84 # addl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X85 # addl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X98 # addl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9B # addl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X99 # addl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9A # addl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9F # addl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9E # addl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9D # addl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9F # addl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9E # addl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9C # addl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9D # addl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X88 # addl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8B # addl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X89 # addl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8A # addl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8F # addl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8E # addl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8D # addl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8F # addl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8E # addl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8C # addl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8D # addl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X90 # addl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X93 # addl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X91 # addl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X92 # addl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X97 # addl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X96 # addl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X95 # addl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X94, 0X24 # addl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X97 # addl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X96 # addl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X94 # addl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X95 # addl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB8 # addl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBB # addl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB9 # addl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBA # addl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBF # addl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBE # addl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBD # addl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBF # addl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBE # addl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBC # addl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBD # addl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB0 # addl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB3 # addl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB1 # addl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB2 # addl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB7 # addl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB6 # addl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB5 # addl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB7 # addl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB6 # addl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB4 # addl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB5 # addl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA8 # addl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAB # addl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA9 # addl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAA # addl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAF # addl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAE # addl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAD # addl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAF # addl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAE # addl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAC # addl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAD # addl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA0 # addl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA3 # addl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA1 # addl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA2 # addl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA7 # addl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA6 # addl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA5 # addl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA7 # addl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA6 # addl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA4 # addl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA5 # addl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X80 # addl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X83 # addl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X81 # addl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X82 # addl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X87 # addl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X86 # addl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X85 # addl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X84, 0X24 # addl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X87 # addl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X86 # addl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X84 # addl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X85 # addl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X98 # addl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9B # addl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X99 # addl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9A # addl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9F # addl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9E # addl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9D # addl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9C, 0X24 # addl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9F # addl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9E # addl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9C # addl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9D # addl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X88 # addl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8B # addl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X89 # addl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8A # addl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8F # addl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8E # addl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8D # addl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8C, 0X24 # addl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8F # addl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8E # addl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8C # addl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8D # addl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X90 # addl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X93 # addl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X91 # addl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X92 # addl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X97 # addl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X96 # addl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X95 # addl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X94, 0X24 # addl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X97 # addl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X96 # addl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X94 # addl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X95 # addl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB8 # addl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBB # addl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB9 # addl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBA # addl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBF # addl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBE # addl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBD # addl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBC, 0X24 # addl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBF # addl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBE # addl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBC # addl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBD # addl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB0 # addl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB3 # addl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB1 # addl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB2 # addl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB7 # addl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB6 # addl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB5 # addl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB4, 0X24 # addl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB7 # addl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB6 # addl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB4 # addl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB5 # addl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA8 # addl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAB # addl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA9 # addl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAA # addl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAF # addl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAE # addl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAD # addl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAC, 0X24 # addl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAF # addl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAE # addl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAC # addl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAD # addl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADD_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA0 # addl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA3 # addl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA1 # addl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA2 # addl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA7 # addl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA6 # addl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA5 # addl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA4, 0X24 # addl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA7 # addl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA6 # addl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA4 # addl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADD_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA5 # addl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X04, 0X25 # addl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X1C, 0X25 # addl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X0C, 0X25 # addl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X14, 0X25 # addl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X3C, 0X25 # addl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X34, 0X25 # addl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X2C, 0X25 # addl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X03, 0X24, 0X25 # addl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X04, 0X25 # addl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X0C, 0X25 # addl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X14, 0X25 # addl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X1C, 0X25 # addl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X24, 0X25 # addl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X2C, 0X25 # addl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X34, 0X25 # addl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X3C, 0X25 # addl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X04, 0X25 # addl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X1C, 0X25 # addl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X0C, 0X25 # addl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X14, 0X25 # addl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X3C, 0X25 # addl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X34, 0X25 # addl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X2C, 0X25 # addl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X01, 0X24, 0X25 # addl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X04, 0X25 # addl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X0C, 0X25 # addl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X14, 0X25 # addl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X1C, 0X25 # addl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X24, 0X25 # addl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X2C, 0X25 # addl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X34, 0X25 # addl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X3C, 0X25 # addl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X00 # addl (%rax), %eax")
#define ADD_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X03 # addl (%rbx), %eax")
#define ADD_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X01 # addl (%rcx), %eax")
#define ADD_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X02 # addl (%rdx), %eax")
#define ADD_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X07 # addl (%rdi), %eax")
#define ADD_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X06 # addl (%rsi), %eax")
#define ADD_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X45, 0X00 # addl (%rbp), %eax")
#define ADD_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X04, 0X24 # addl (%rsp), %eax")
#define ADD_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X00 # addl (%r8), %eax")
#define ADD_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X01 # addl (%r9), %eax")
#define ADD_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X02 # addl (%r10), %eax")
#define ADD_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X03 # addl (%r11), %eax")
#define ADD_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X04, 0X24 # addl (%r12), %eax")
#define ADD_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X45, 0X00 # addl (%r13), %eax")
#define ADD_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X06 # addl (%r14), %eax")
#define ADD_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X07 # addl (%r15), %eax")
#define ADD_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X00 # addl (%eax), %eax")
#define ADD_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X03 # addl (%ebx), %eax")
#define ADD_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X01 # addl (%ecx), %eax")
#define ADD_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X02 # addl (%edx), %eax")
#define ADD_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X07 # addl (%edi), %eax")
#define ADD_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X06 # addl (%esi), %eax")
#define ADD_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X45, 0X00 # addl (%ebp), %eax")
#define ADD_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X04, 0X24 # addl (%esp), %eax")

#define ADD_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X18 # addl (%rax), %ebx")
#define ADD_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X1B # addl (%rbx), %ebx")
#define ADD_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X19 # addl (%rcx), %ebx")
#define ADD_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X1A # addl (%rdx), %ebx")
#define ADD_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X1F # addl (%rdi), %ebx")
#define ADD_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X1E # addl (%rsi), %ebx")
#define ADD_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X5D, 0X00 # addl (%rbp), %ebx")
#define ADD_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X1C, 0X24 # addl (%rsp), %ebx")
#define ADD_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X18 # addl (%r8), %ebx")
#define ADD_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X19 # addl (%r9), %ebx")
#define ADD_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X1A # addl (%r10), %ebx")
#define ADD_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X1B # addl (%r11), %ebx")
#define ADD_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X1C, 0X24 # addl (%r12), %ebx")
#define ADD_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X5D, 0X00 # addl (%r13), %ebx")
#define ADD_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X1E # addl (%r14), %ebx")
#define ADD_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X1F # addl (%r15), %ebx")
#define ADD_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X18 # addl (%eax), %ebx")
#define ADD_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X1B # addl (%ebx), %ebx")
#define ADD_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X19 # addl (%ecx), %ebx")
#define ADD_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X1A # addl (%edx), %ebx")
#define ADD_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X1F # addl (%edi), %ebx")
#define ADD_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X1E # addl (%esi), %ebx")
#define ADD_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X5D, 0X00 # addl (%ebp), %ebx")
#define ADD_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X1C, 0X24 # addl (%esp), %ebx")

#define ADD_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X08 # addl (%rax), %ecx")
#define ADD_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X0B # addl (%rbx), %ecx")
#define ADD_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X09 # addl (%rcx), %ecx")
#define ADD_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X0A # addl (%rdx), %ecx")
#define ADD_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X0F # addl (%rdi), %ecx")
#define ADD_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X0E # addl (%rsi), %ecx")
#define ADD_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X4D, 0X00 # addl (%rbp), %ecx")
#define ADD_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X0C, 0X24 # addl (%rsp), %ecx")
#define ADD_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X08 # addl (%r8), %ecx")
#define ADD_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X09 # addl (%r9), %ecx")
#define ADD_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X0A # addl (%r10), %ecx")
#define ADD_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X0B # addl (%r11), %ecx")
#define ADD_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X0C, 0X24 # addl (%r12), %ecx")
#define ADD_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X4D, 0X00 # addl (%r13), %ecx")
#define ADD_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X0E # addl (%r14), %ecx")
#define ADD_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X0F # addl (%r15), %ecx")
#define ADD_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X08 # addl (%eax), %ecx")
#define ADD_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X0B # addl (%ebx), %ecx")
#define ADD_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X09 # addl (%ecx), %ecx")
#define ADD_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X0A # addl (%edx), %ecx")
#define ADD_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X0F # addl (%edi), %ecx")
#define ADD_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X0E # addl (%esi), %ecx")
#define ADD_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X4D, 0X00 # addl (%ebp), %ecx")
#define ADD_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X0C, 0X24 # addl (%esp), %ecx")

#define ADD_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X10 # addl (%rax), %edx")
#define ADD_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X13 # addl (%rbx), %edx")
#define ADD_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X11 # addl (%rcx), %edx")
#define ADD_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X12 # addl (%rdx), %edx")
#define ADD_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X17 # addl (%rdi), %edx")
#define ADD_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X16 # addl (%rsi), %edx")
#define ADD_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X55, 0X00 # addl (%rbp), %edx")
#define ADD_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X14, 0X24 # addl (%rsp), %edx")
#define ADD_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X10 # addl (%r8), %edx")
#define ADD_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X11 # addl (%r9), %edx")
#define ADD_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X12 # addl (%r10), %edx")
#define ADD_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X13 # addl (%r11), %edx")
#define ADD_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X14, 0X24 # addl (%r12), %edx")
#define ADD_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X55, 0X00 # addl (%r13), %edx")
#define ADD_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X16 # addl (%r14), %edx")
#define ADD_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X17 # addl (%r15), %edx")
#define ADD_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X10 # addl (%eax), %edx")
#define ADD_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X13 # addl (%ebx), %edx")
#define ADD_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X11 # addl (%ecx), %edx")
#define ADD_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X12 # addl (%edx), %edx")
#define ADD_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X17 # addl (%edi), %edx")
#define ADD_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X16 # addl (%esi), %edx")
#define ADD_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X55, 0X00 # addl (%ebp), %edx")
#define ADD_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X14, 0X24 # addl (%esp), %edx")

#define ADD_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X38 # addl (%rax), %edi")
#define ADD_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X3B # addl (%rbx), %edi")
#define ADD_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X39 # addl (%rcx), %edi")
#define ADD_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X3A # addl (%rdx), %edi")
#define ADD_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X3F # addl (%rdi), %edi")
#define ADD_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X3E # addl (%rsi), %edi")
#define ADD_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X7D, 0X00 # addl (%rbp), %edi")
#define ADD_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X3C, 0X24 # addl (%rsp), %edi")
#define ADD_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X38 # addl (%r8), %edi")
#define ADD_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X39 # addl (%r9), %edi")
#define ADD_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X3A # addl (%r10), %edi")
#define ADD_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X3B # addl (%r11), %edi")
#define ADD_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X3C, 0X24 # addl (%r12), %edi")
#define ADD_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X7D, 0X00 # addl (%r13), %edi")
#define ADD_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X3E # addl (%r14), %edi")
#define ADD_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X3F # addl (%r15), %edi")
#define ADD_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X38 # addl (%eax), %edi")
#define ADD_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X3B # addl (%ebx), %edi")
#define ADD_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X39 # addl (%ecx), %edi")
#define ADD_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X3A # addl (%edx), %edi")
#define ADD_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X3F # addl (%edi), %edi")
#define ADD_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X3E # addl (%esi), %edi")
#define ADD_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X7D, 0X00 # addl (%ebp), %edi")
#define ADD_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X3C, 0X24 # addl (%esp), %edi")

#define ADD_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X30 # addl (%rax), %esi")
#define ADD_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X33 # addl (%rbx), %esi")
#define ADD_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X31 # addl (%rcx), %esi")
#define ADD_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X32 # addl (%rdx), %esi")
#define ADD_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X37 # addl (%rdi), %esi")
#define ADD_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X36 # addl (%rsi), %esi")
#define ADD_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X75, 0X00 # addl (%rbp), %esi")
#define ADD_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X34, 0X24 # addl (%rsp), %esi")
#define ADD_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X30 # addl (%r8), %esi")
#define ADD_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X31 # addl (%r9), %esi")
#define ADD_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X32 # addl (%r10), %esi")
#define ADD_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X33 # addl (%r11), %esi")
#define ADD_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X34, 0X24 # addl (%r12), %esi")
#define ADD_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X75, 0X00 # addl (%r13), %esi")
#define ADD_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X36 # addl (%r14), %esi")
#define ADD_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X37 # addl (%r15), %esi")
#define ADD_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X30 # addl (%eax), %esi")
#define ADD_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X33 # addl (%ebx), %esi")
#define ADD_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X31 # addl (%ecx), %esi")
#define ADD_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X32 # addl (%edx), %esi")
#define ADD_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X37 # addl (%edi), %esi")
#define ADD_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X36 # addl (%esi), %esi")
#define ADD_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X75, 0X00 # addl (%ebp), %esi")
#define ADD_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X34, 0X24 # addl (%esp), %esi")

#define ADD_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X28 # addl (%rax), %ebp")
#define ADD_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X2B # addl (%rbx), %ebp")
#define ADD_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X29 # addl (%rcx), %ebp")
#define ADD_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X2A # addl (%rdx), %ebp")
#define ADD_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X2F # addl (%rdi), %ebp")
#define ADD_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X2E # addl (%rsi), %ebp")
#define ADD_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X6D, 0X00 # addl (%rbp), %ebp")
#define ADD_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X2C, 0X24 # addl (%rsp), %ebp")
#define ADD_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X28 # addl (%r8), %ebp")
#define ADD_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X29 # addl (%r9), %ebp")
#define ADD_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X2A # addl (%r10), %ebp")
#define ADD_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X2B # addl (%r11), %ebp")
#define ADD_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X2C, 0X24 # addl (%r12), %ebp")
#define ADD_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X6D, 0X00 # addl (%r13), %ebp")
#define ADD_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X2E # addl (%r14), %ebp")
#define ADD_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X2F # addl (%r15), %ebp")
#define ADD_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X28 # addl (%eax), %ebp")
#define ADD_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X2B # addl (%ebx), %ebp")
#define ADD_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X29 # addl (%ecx), %ebp")
#define ADD_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X2A # addl (%edx), %ebp")
#define ADD_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X2F # addl (%edi), %ebp")
#define ADD_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X2E # addl (%esi), %ebp")
#define ADD_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X6D, 0X00 # addl (%ebp), %ebp")
#define ADD_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X2C, 0X24 # addl (%esp), %ebp")

#define ADD_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X03, 0X20 # addl (%rax), %esp")
#define ADD_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X03, 0X23 # addl (%rbx), %esp")
#define ADD_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X03, 0X21 # addl (%rcx), %esp")
#define ADD_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X03, 0X22 # addl (%rdx), %esp")
#define ADD_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X03, 0X27 # addl (%rdi), %esp")
#define ADD_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X03, 0X26 # addl (%rsi), %esp")
#define ADD_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X03, 0X65, 0X00 # addl (%rbp), %esp")
#define ADD_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X03, 0X24, 0X24 # addl (%rsp), %esp")
#define ADD_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X03, 0X20 # addl (%r8), %esp")
#define ADD_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X03, 0X21 # addl (%r9), %esp")
#define ADD_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X03, 0X22 # addl (%r10), %esp")
#define ADD_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X03, 0X23 # addl (%r11), %esp")
#define ADD_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X03, 0X24, 0X24 # addl (%r12), %esp")
#define ADD_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X03, 0X65, 0X00 # addl (%r13), %esp")
#define ADD_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X03, 0X26 # addl (%r14), %esp")
#define ADD_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X03, 0X27 # addl (%r15), %esp")
#define ADD_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X03, 0X20 # addl (%eax), %esp")
#define ADD_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X03, 0X23 # addl (%ebx), %esp")
#define ADD_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X03, 0X21 # addl (%ecx), %esp")
#define ADD_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X03, 0X22 # addl (%edx), %esp")
#define ADD_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X03, 0X27 # addl (%edi), %esp")
#define ADD_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X03, 0X26 # addl (%esi), %esp")
#define ADD_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X03, 0X65, 0X00 # addl (%ebp), %esp")
#define ADD_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X03, 0X24, 0X24 # addl (%esp), %esp")

#define ADD_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X00 # addl (%rax), %r8d")
#define ADD_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X03 # addl (%rbx), %r8d")
#define ADD_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X01 # addl (%rcx), %r8d")
#define ADD_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X02 # addl (%rdx), %r8d")
#define ADD_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X07 # addl (%rdi), %r8d")
#define ADD_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X06 # addl (%rsi), %r8d")
#define ADD_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X45, 0X00 # addl (%rbp), %r8d")
#define ADD_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X04, 0X24 # addl (%rsp), %r8d")
#define ADD_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X00 # addl (%r8), %r8d")
#define ADD_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X01 # addl (%r9), %r8d")
#define ADD_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X02 # addl (%r10), %r8d")
#define ADD_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X03 # addl (%r11), %r8d")
#define ADD_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X04, 0X24 # addl (%r12), %r8d")
#define ADD_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X45, 0X00 # addl (%r13), %r8d")
#define ADD_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X06 # addl (%r14), %r8d")
#define ADD_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X07 # addl (%r15), %r8d")
#define ADD_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X00 # addl (%eax), %r8d")
#define ADD_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X03 # addl (%ebx), %r8d")
#define ADD_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X01 # addl (%ecx), %r8d")
#define ADD_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X02 # addl (%edx), %r8d")
#define ADD_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X07 # addl (%edi), %r8d")
#define ADD_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X06 # addl (%esi), %r8d")
#define ADD_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X45, 0X00 # addl (%ebp), %r8d")
#define ADD_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X04, 0X24 # addl (%esp), %r8d")

#define ADD_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X08 # addl (%rax), %r9d")
#define ADD_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X0B # addl (%rbx), %r9d")
#define ADD_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X09 # addl (%rcx), %r9d")
#define ADD_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X0A # addl (%rdx), %r9d")
#define ADD_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X0F # addl (%rdi), %r9d")
#define ADD_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X0E # addl (%rsi), %r9d")
#define ADD_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X4D, 0X00 # addl (%rbp), %r9d")
#define ADD_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X0C, 0X24 # addl (%rsp), %r9d")
#define ADD_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X08 # addl (%r8), %r9d")
#define ADD_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X09 # addl (%r9), %r9d")
#define ADD_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X0A # addl (%r10), %r9d")
#define ADD_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X0B # addl (%r11), %r9d")
#define ADD_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X0C, 0X24 # addl (%r12), %r9d")
#define ADD_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X4D, 0X00 # addl (%r13), %r9d")
#define ADD_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X0E # addl (%r14), %r9d")
#define ADD_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X0F # addl (%r15), %r9d")
#define ADD_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X08 # addl (%eax), %r9d")
#define ADD_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X0B # addl (%ebx), %r9d")
#define ADD_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X09 # addl (%ecx), %r9d")
#define ADD_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X0A # addl (%edx), %r9d")
#define ADD_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X0F # addl (%edi), %r9d")
#define ADD_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X0E # addl (%esi), %r9d")
#define ADD_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X4D, 0X00 # addl (%ebp), %r9d")
#define ADD_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X0C, 0X24 # addl (%esp), %r9d")

#define ADD_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X10 # addl (%rax), %r10d")
#define ADD_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X13 # addl (%rbx), %r10d")
#define ADD_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X11 # addl (%rcx), %r10d")
#define ADD_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X12 # addl (%rdx), %r10d")
#define ADD_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X17 # addl (%rdi), %r10d")
#define ADD_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X16 # addl (%rsi), %r10d")
#define ADD_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X55, 0X00 # addl (%rbp), %r10d")
#define ADD_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X14, 0X24 # addl (%rsp), %r10d")
#define ADD_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X10 # addl (%r8), %r10d")
#define ADD_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X11 # addl (%r9), %r10d")
#define ADD_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X12 # addl (%r10), %r10d")
#define ADD_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X13 # addl (%r11), %r10d")
#define ADD_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X14, 0X24 # addl (%r12), %r10d")
#define ADD_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X55, 0X00 # addl (%r13), %r10d")
#define ADD_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X16 # addl (%r14), %r10d")
#define ADD_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X17 # addl (%r15), %r10d")
#define ADD_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X10 # addl (%eax), %r10d")
#define ADD_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X13 # addl (%ebx), %r10d")
#define ADD_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X11 # addl (%ecx), %r10d")
#define ADD_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X12 # addl (%edx), %r10d")
#define ADD_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X17 # addl (%edi), %r10d")
#define ADD_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X16 # addl (%esi), %r10d")
#define ADD_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X55, 0X00 # addl (%ebp), %r10d")
#define ADD_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X14, 0X24 # addl (%esp), %r10d")

#define ADD_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X18 # addl (%rax), %r11d")
#define ADD_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X1B # addl (%rbx), %r11d")
#define ADD_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X19 # addl (%rcx), %r11d")
#define ADD_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X1A # addl (%rdx), %r11d")
#define ADD_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X1F # addl (%rdi), %r11d")
#define ADD_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X1E # addl (%rsi), %r11d")
#define ADD_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X5D, 0X00 # addl (%rbp), %r11d")
#define ADD_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X1C, 0X24 # addl (%rsp), %r11d")
#define ADD_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X18 # addl (%r8), %r11d")
#define ADD_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X19 # addl (%r9), %r11d")
#define ADD_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X1A # addl (%r10), %r11d")
#define ADD_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X1B # addl (%r11), %r11d")
#define ADD_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X1C, 0X24 # addl (%r12), %r11d")
#define ADD_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X5D, 0X00 # addl (%r13), %r11d")
#define ADD_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X1E # addl (%r14), %r11d")
#define ADD_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X1F # addl (%r15), %r11d")
#define ADD_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X18 # addl (%eax), %r11d")
#define ADD_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X1B # addl (%ebx), %r11d")
#define ADD_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X19 # addl (%ecx), %r11d")
#define ADD_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X1A # addl (%edx), %r11d")
#define ADD_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X1F # addl (%edi), %r11d")
#define ADD_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X1E # addl (%esi), %r11d")
#define ADD_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X5D, 0X00 # addl (%ebp), %r11d")
#define ADD_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X1C, 0X24 # addl (%esp), %r11d")

#define ADD_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X20 # addl (%rax), %r12d")
#define ADD_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X23 # addl (%rbx), %r12d")
#define ADD_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X21 # addl (%rcx), %r12d")
#define ADD_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X22 # addl (%rdx), %r12d")
#define ADD_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X27 # addl (%rdi), %r12d")
#define ADD_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X26 # addl (%rsi), %r12d")
#define ADD_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X65, 0X00 # addl (%rbp), %r12d")
#define ADD_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X24, 0X24 # addl (%rsp), %r12d")
#define ADD_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X20 # addl (%r8), %r12d")
#define ADD_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X21 # addl (%r9), %r12d")
#define ADD_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X22 # addl (%r10), %r12d")
#define ADD_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X23 # addl (%r11), %r12d")
#define ADD_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X24, 0X24 # addl (%r12), %r12d")
#define ADD_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X65, 0X00 # addl (%r13), %r12d")
#define ADD_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X26 # addl (%r14), %r12d")
#define ADD_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X27 # addl (%r15), %r12d")
#define ADD_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X20 # addl (%eax), %r12d")
#define ADD_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X23 # addl (%ebx), %r12d")
#define ADD_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X21 # addl (%ecx), %r12d")
#define ADD_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X22 # addl (%edx), %r12d")
#define ADD_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X27 # addl (%edi), %r12d")
#define ADD_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X26 # addl (%esi), %r12d")
#define ADD_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X65, 0X00 # addl (%ebp), %r12d")
#define ADD_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X24, 0X24 # addl (%esp), %r12d")

#define ADD_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X28 # addl (%rax), %r13d")
#define ADD_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X2B # addl (%rbx), %r13d")
#define ADD_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X29 # addl (%rcx), %r13d")
#define ADD_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X2A # addl (%rdx), %r13d")
#define ADD_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X2F # addl (%rdi), %r13d")
#define ADD_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X2E # addl (%rsi), %r13d")
#define ADD_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X6D, 0X00 # addl (%rbp), %r13d")
#define ADD_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X2C, 0X24 # addl (%rsp), %r13d")
#define ADD_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X28 # addl (%r8), %r13d")
#define ADD_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X29 # addl (%r9), %r13d")
#define ADD_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X2A # addl (%r10), %r13d")
#define ADD_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X2B # addl (%r11), %r13d")
#define ADD_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X2C, 0X24 # addl (%r12), %r13d")
#define ADD_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X6D, 0X00 # addl (%r13), %r13d")
#define ADD_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X2E # addl (%r14), %r13d")
#define ADD_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X2F # addl (%r15), %r13d")
#define ADD_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X28 # addl (%eax), %r13d")
#define ADD_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X2B # addl (%ebx), %r13d")
#define ADD_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X29 # addl (%ecx), %r13d")
#define ADD_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X2A # addl (%edx), %r13d")
#define ADD_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X2F # addl (%edi), %r13d")
#define ADD_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X2E # addl (%esi), %r13d")
#define ADD_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X6D, 0X00 # addl (%ebp), %r13d")
#define ADD_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X2C, 0X24 # addl (%esp), %r13d")

#define ADD_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X30 # addl (%rax), %r14d")
#define ADD_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X33 # addl (%rbx), %r14d")
#define ADD_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X31 # addl (%rcx), %r14d")
#define ADD_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X32 # addl (%rdx), %r14d")
#define ADD_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X37 # addl (%rdi), %r14d")
#define ADD_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X36 # addl (%rsi), %r14d")
#define ADD_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X75, 0X00 # addl (%rbp), %r14d")
#define ADD_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X34, 0X24 # addl (%rsp), %r14d")
#define ADD_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X30 # addl (%r8), %r14d")
#define ADD_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X31 # addl (%r9), %r14d")
#define ADD_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X32 # addl (%r10), %r14d")
#define ADD_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X33 # addl (%r11), %r14d")
#define ADD_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X34, 0X24 # addl (%r12), %r14d")
#define ADD_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X75, 0X00 # addl (%r13), %r14d")
#define ADD_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X36 # addl (%r14), %r14d")
#define ADD_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X37 # addl (%r15), %r14d")
#define ADD_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X30 # addl (%eax), %r14d")
#define ADD_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X33 # addl (%ebx), %r14d")
#define ADD_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X31 # addl (%ecx), %r14d")
#define ADD_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X32 # addl (%edx), %r14d")
#define ADD_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X37 # addl (%edi), %r14d")
#define ADD_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X36 # addl (%esi), %r14d")
#define ADD_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X75, 0X00 # addl (%ebp), %r14d")
#define ADD_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X34, 0X24 # addl (%esp), %r14d")

#define ADD_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X03, 0X38 # addl (%rax), %r15d")
#define ADD_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X03, 0X3B # addl (%rbx), %r15d")
#define ADD_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X03, 0X39 # addl (%rcx), %r15d")
#define ADD_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X03, 0X3A # addl (%rdx), %r15d")
#define ADD_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X03, 0X3F # addl (%rdi), %r15d")
#define ADD_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X03, 0X3E # addl (%rsi), %r15d")
#define ADD_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X03, 0X7D, 0X00 # addl (%rbp), %r15d")
#define ADD_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X03, 0X3C, 0X24 # addl (%rsp), %r15d")
#define ADD_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X03, 0X38 # addl (%r8), %r15d")
#define ADD_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X03, 0X39 # addl (%r9), %r15d")
#define ADD_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X03, 0X3A # addl (%r10), %r15d")
#define ADD_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X03, 0X3B # addl (%r11), %r15d")
#define ADD_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X03, 0X3C, 0X24 # addl (%r12), %r15d")
#define ADD_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X03, 0X7D, 0X00 # addl (%r13), %r15d")
#define ADD_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X03, 0X3E # addl (%r14), %r15d")
#define ADD_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X03, 0X3F # addl (%r15), %r15d")
#define ADD_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X38 # addl (%eax), %r15d")
#define ADD_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X3B # addl (%ebx), %r15d")
#define ADD_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X39 # addl (%ecx), %r15d")
#define ADD_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X03, 0X3A # addl (%edx), %r15d")
#define ADD_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X3F # addl (%edi), %r15d")
#define ADD_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X03, 0X3E # addl (%esi), %r15d")
#define ADD_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X7D, 0X00 # addl (%ebp), %r15d")
#define ADD_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X03, 0X3C, 0X24 # addl (%esp), %r15d")

#define ADD_EAX_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X00 # addl %eax, (%rax)")
#define ADD_EAX_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X03 # addl %eax, (%rbx)")
#define ADD_EAX_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X01 # addl %eax, (%rcx)")
#define ADD_EAX_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X02 # addl %eax, (%rdx)")
#define ADD_EAX_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X07 # addl %eax, (%rdi)")
#define ADD_EAX_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X06 # addl %eax, (%rsi)")
#define ADD_EAX_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X45, 0X00 # addl %eax, (%rbp)")
#define ADD_EAX_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X04, 0X24 # addl %eax, (%rsp)")
#define ADD_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X00 # addl %eax, (%r8)")
#define ADD_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X01 # addl %eax, (%r9)")
#define ADD_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X02 # addl %eax, (%r10)")
#define ADD_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X03 # addl %eax, (%r11)")
#define ADD_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X04, 0X24 # addl %eax, (%r12)")
#define ADD_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X45, 0X00 # addl %eax, (%r13)")
#define ADD_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X06 # addl %eax, (%r14)")
#define ADD_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X07 # addl %eax, (%r15)")
#define ADD_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X00 # addl %eax, (%eax)")
#define ADD_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X03 # addl %eax, (%ebx)")
#define ADD_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X01 # addl %eax, (%ecx)")
#define ADD_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X02 # addl %eax, (%edx)")
#define ADD_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X07 # addl %eax, (%edi)")
#define ADD_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X06 # addl %eax, (%esi)")
#define ADD_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X45, 0X00 # addl %eax, (%ebp)")
#define ADD_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X04, 0X24 # addl %eax, (%esp)")

#define ADD_EBX_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X18 # addl %ebx, (%rax)")
#define ADD_EBX_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X1B # addl %ebx, (%rbx)")
#define ADD_EBX_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X19 # addl %ebx, (%rcx)")
#define ADD_EBX_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X1A # addl %ebx, (%rdx)")
#define ADD_EBX_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X1F # addl %ebx, (%rdi)")
#define ADD_EBX_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X1E # addl %ebx, (%rsi)")
#define ADD_EBX_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X5D, 0X00 # addl %ebx, (%rbp)")
#define ADD_EBX_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X1C, 0X24 # addl %ebx, (%rsp)")
#define ADD_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X18 # addl %ebx, (%r8)")
#define ADD_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X19 # addl %ebx, (%r9)")
#define ADD_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X1A # addl %ebx, (%r10)")
#define ADD_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X1B # addl %ebx, (%r11)")
#define ADD_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X1C, 0X24 # addl %ebx, (%r12)")
#define ADD_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X5D, 0X00 # addl %ebx, (%r13)")
#define ADD_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X1E # addl %ebx, (%r14)")
#define ADD_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X1F # addl %ebx, (%r15)")
#define ADD_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X18 # addl %ebx, (%eax)")
#define ADD_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X1B # addl %ebx, (%ebx)")
#define ADD_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X19 # addl %ebx, (%ecx)")
#define ADD_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X1A # addl %ebx, (%edx)")
#define ADD_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X1F # addl %ebx, (%edi)")
#define ADD_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X1E # addl %ebx, (%esi)")
#define ADD_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X5D, 0X00 # addl %ebx, (%ebp)")
#define ADD_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X1C, 0X24 # addl %ebx, (%esp)")

#define ADD_ECX_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X08 # addl %ecx, (%rax)")
#define ADD_ECX_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X0B # addl %ecx, (%rbx)")
#define ADD_ECX_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X09 # addl %ecx, (%rcx)")
#define ADD_ECX_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X0A # addl %ecx, (%rdx)")
#define ADD_ECX_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X0F # addl %ecx, (%rdi)")
#define ADD_ECX_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X0E # addl %ecx, (%rsi)")
#define ADD_ECX_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X4D, 0X00 # addl %ecx, (%rbp)")
#define ADD_ECX_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X0C, 0X24 # addl %ecx, (%rsp)")
#define ADD_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X08 # addl %ecx, (%r8)")
#define ADD_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X09 # addl %ecx, (%r9)")
#define ADD_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X0A # addl %ecx, (%r10)")
#define ADD_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X0B # addl %ecx, (%r11)")
#define ADD_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X0C, 0X24 # addl %ecx, (%r12)")
#define ADD_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X4D, 0X00 # addl %ecx, (%r13)")
#define ADD_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X0E # addl %ecx, (%r14)")
#define ADD_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X0F # addl %ecx, (%r15)")
#define ADD_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X08 # addl %ecx, (%eax)")
#define ADD_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X0B # addl %ecx, (%ebx)")
#define ADD_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X09 # addl %ecx, (%ecx)")
#define ADD_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X0A # addl %ecx, (%edx)")
#define ADD_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X0F # addl %ecx, (%edi)")
#define ADD_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X0E # addl %ecx, (%esi)")
#define ADD_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X4D, 0X00 # addl %ecx, (%ebp)")
#define ADD_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X0C, 0X24 # addl %ecx, (%esp)")

#define ADD_EDX_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X10 # addl %edx, (%rax)")
#define ADD_EDX_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X13 # addl %edx, (%rbx)")
#define ADD_EDX_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X11 # addl %edx, (%rcx)")
#define ADD_EDX_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X12 # addl %edx, (%rdx)")
#define ADD_EDX_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X17 # addl %edx, (%rdi)")
#define ADD_EDX_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X16 # addl %edx, (%rsi)")
#define ADD_EDX_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X55, 0X00 # addl %edx, (%rbp)")
#define ADD_EDX_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X14, 0X24 # addl %edx, (%rsp)")
#define ADD_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X10 # addl %edx, (%r8)")
#define ADD_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X11 # addl %edx, (%r9)")
#define ADD_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X12 # addl %edx, (%r10)")
#define ADD_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X13 # addl %edx, (%r11)")
#define ADD_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X14, 0X24 # addl %edx, (%r12)")
#define ADD_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X55, 0X00 # addl %edx, (%r13)")
#define ADD_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X16 # addl %edx, (%r14)")
#define ADD_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X17 # addl %edx, (%r15)")
#define ADD_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X10 # addl %edx, (%eax)")
#define ADD_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X13 # addl %edx, (%ebx)")
#define ADD_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X11 # addl %edx, (%ecx)")
#define ADD_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X12 # addl %edx, (%edx)")
#define ADD_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X17 # addl %edx, (%edi)")
#define ADD_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X16 # addl %edx, (%esi)")
#define ADD_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X55, 0X00 # addl %edx, (%ebp)")
#define ADD_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X14, 0X24 # addl %edx, (%esp)")

#define ADD_EDI_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X38 # addl %edi, (%rax)")
#define ADD_EDI_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X3B # addl %edi, (%rbx)")
#define ADD_EDI_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X39 # addl %edi, (%rcx)")
#define ADD_EDI_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X3A # addl %edi, (%rdx)")
#define ADD_EDI_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X3F # addl %edi, (%rdi)")
#define ADD_EDI_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X3E # addl %edi, (%rsi)")
#define ADD_EDI_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X7D, 0X00 # addl %edi, (%rbp)")
#define ADD_EDI_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X3C, 0X24 # addl %edi, (%rsp)")
#define ADD_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X38 # addl %edi, (%r8)")
#define ADD_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X39 # addl %edi, (%r9)")
#define ADD_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X3A # addl %edi, (%r10)")
#define ADD_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X3B # addl %edi, (%r11)")
#define ADD_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X3C, 0X24 # addl %edi, (%r12)")
#define ADD_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X7D, 0X00 # addl %edi, (%r13)")
#define ADD_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X3E # addl %edi, (%r14)")
#define ADD_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X3F # addl %edi, (%r15)")
#define ADD_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X38 # addl %edi, (%eax)")
#define ADD_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X3B # addl %edi, (%ebx)")
#define ADD_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X39 # addl %edi, (%ecx)")
#define ADD_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X3A # addl %edi, (%edx)")
#define ADD_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X3F # addl %edi, (%edi)")
#define ADD_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X3E # addl %edi, (%esi)")
#define ADD_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X7D, 0X00 # addl %edi, (%ebp)")
#define ADD_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X3C, 0X24 # addl %edi, (%esp)")

#define ADD_ESI_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X30 # addl %esi, (%rax)")
#define ADD_ESI_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X33 # addl %esi, (%rbx)")
#define ADD_ESI_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X31 # addl %esi, (%rcx)")
#define ADD_ESI_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X32 # addl %esi, (%rdx)")
#define ADD_ESI_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X37 # addl %esi, (%rdi)")
#define ADD_ESI_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X36 # addl %esi, (%rsi)")
#define ADD_ESI_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X75, 0X00 # addl %esi, (%rbp)")
#define ADD_ESI_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X34, 0X24 # addl %esi, (%rsp)")
#define ADD_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X30 # addl %esi, (%r8)")
#define ADD_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X31 # addl %esi, (%r9)")
#define ADD_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X32 # addl %esi, (%r10)")
#define ADD_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X33 # addl %esi, (%r11)")
#define ADD_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X34, 0X24 # addl %esi, (%r12)")
#define ADD_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X75, 0X00 # addl %esi, (%r13)")
#define ADD_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X36 # addl %esi, (%r14)")
#define ADD_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X37 # addl %esi, (%r15)")
#define ADD_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X30 # addl %esi, (%eax)")
#define ADD_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X33 # addl %esi, (%ebx)")
#define ADD_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X31 # addl %esi, (%ecx)")
#define ADD_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X32 # addl %esi, (%edx)")
#define ADD_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X37 # addl %esi, (%edi)")
#define ADD_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X36 # addl %esi, (%esi)")
#define ADD_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X75, 0X00 # addl %esi, (%ebp)")
#define ADD_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X34, 0X24 # addl %esi, (%esp)")

#define ADD_EBP_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X28 # addl %ebp, (%rax)")
#define ADD_EBP_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X2B # addl %ebp, (%rbx)")
#define ADD_EBP_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X29 # addl %ebp, (%rcx)")
#define ADD_EBP_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X2A # addl %ebp, (%rdx)")
#define ADD_EBP_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X2F # addl %ebp, (%rdi)")
#define ADD_EBP_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X2E # addl %ebp, (%rsi)")
#define ADD_EBP_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X6D, 0X00 # addl %ebp, (%rbp)")
#define ADD_EBP_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X2C, 0X24 # addl %ebp, (%rsp)")
#define ADD_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X28 # addl %ebp, (%r8)")
#define ADD_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X29 # addl %ebp, (%r9)")
#define ADD_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X2A # addl %ebp, (%r10)")
#define ADD_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X2B # addl %ebp, (%r11)")
#define ADD_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X2C, 0X24 # addl %ebp, (%r12)")
#define ADD_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X6D, 0X00 # addl %ebp, (%r13)")
#define ADD_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X2E # addl %ebp, (%r14)")
#define ADD_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X2F # addl %ebp, (%r15)")
#define ADD_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X28 # addl %ebp, (%eax)")
#define ADD_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X2B # addl %ebp, (%ebx)")
#define ADD_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X29 # addl %ebp, (%ecx)")
#define ADD_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X2A # addl %ebp, (%edx)")
#define ADD_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X2F # addl %ebp, (%edi)")
#define ADD_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X2E # addl %ebp, (%esi)")
#define ADD_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X6D, 0X00 # addl %ebp, (%ebp)")
#define ADD_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X2C, 0X24 # addl %ebp, (%esp)")

#define ADD_ESP_TO_PTR_RAX CMT_ASM(".byte 0X01, 0X20 # addl %esp, (%rax)")
#define ADD_ESP_TO_PTR_RBX CMT_ASM(".byte 0X01, 0X23 # addl %esp, (%rbx)")
#define ADD_ESP_TO_PTR_RCX CMT_ASM(".byte 0X01, 0X21 # addl %esp, (%rcx)")
#define ADD_ESP_TO_PTR_RDX CMT_ASM(".byte 0X01, 0X22 # addl %esp, (%rdx)")
#define ADD_ESP_TO_PTR_RDI CMT_ASM(".byte 0X01, 0X27 # addl %esp, (%rdi)")
#define ADD_ESP_TO_PTR_RSI CMT_ASM(".byte 0X01, 0X26 # addl %esp, (%rsi)")
#define ADD_ESP_TO_PTR_RBP CMT_ASM(".byte 0X01, 0X65, 0X00 # addl %esp, (%rbp)")
#define ADD_ESP_TO_PTR_RSP CMT_ASM(".byte 0X01, 0X24, 0X24 # addl %esp, (%rsp)")
#define ADD_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X01, 0X20 # addl %esp, (%r8)")
#define ADD_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X01, 0X21 # addl %esp, (%r9)")
#define ADD_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X01, 0X22 # addl %esp, (%r10)")
#define ADD_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X01, 0X23 # addl %esp, (%r11)")
#define ADD_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X01, 0X24, 0X24 # addl %esp, (%r12)")
#define ADD_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X01, 0X65, 0X00 # addl %esp, (%r13)")
#define ADD_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X01, 0X26 # addl %esp, (%r14)")
#define ADD_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X01, 0X27 # addl %esp, (%r15)")
#define ADD_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X01, 0X20 # addl %esp, (%eax)")
#define ADD_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X01, 0X23 # addl %esp, (%ebx)")
#define ADD_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X01, 0X21 # addl %esp, (%ecx)")
#define ADD_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X01, 0X22 # addl %esp, (%edx)")
#define ADD_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X01, 0X27 # addl %esp, (%edi)")
#define ADD_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X01, 0X26 # addl %esp, (%esi)")
#define ADD_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X01, 0X65, 0X00 # addl %esp, (%ebp)")
#define ADD_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X01, 0X24, 0X24 # addl %esp, (%esp)")

#define ADD_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X00 # addl %r8d, (%rax)")
#define ADD_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X03 # addl %r8d, (%rbx)")
#define ADD_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X01 # addl %r8d, (%rcx)")
#define ADD_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X02 # addl %r8d, (%rdx)")
#define ADD_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X07 # addl %r8d, (%rdi)")
#define ADD_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X06 # addl %r8d, (%rsi)")
#define ADD_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X45, 0X00 # addl %r8d, (%rbp)")
#define ADD_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X04, 0X24 # addl %r8d, (%rsp)")
#define ADD_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X00 # addl %r8d, (%r8)")
#define ADD_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X01 # addl %r8d, (%r9)")
#define ADD_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X02 # addl %r8d, (%r10)")
#define ADD_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X03 # addl %r8d, (%r11)")
#define ADD_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X04, 0X24 # addl %r8d, (%r12)")
#define ADD_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X45, 0X00 # addl %r8d, (%r13)")
#define ADD_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X06 # addl %r8d, (%r14)")
#define ADD_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X07 # addl %r8d, (%r15)")
#define ADD_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X00 # addl %r8d, (%eax)")
#define ADD_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X03 # addl %r8d, (%ebx)")
#define ADD_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X01 # addl %r8d, (%ecx)")
#define ADD_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X02 # addl %r8d, (%edx)")
#define ADD_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X07 # addl %r8d, (%edi)")
#define ADD_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X06 # addl %r8d, (%esi)")
#define ADD_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X45, 0X00 # addl %r8d, (%ebp)")
#define ADD_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X04, 0X24 # addl %r8d, (%esp)")

#define ADD_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X08 # addl %r9d, (%rax)")
#define ADD_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X0B # addl %r9d, (%rbx)")
#define ADD_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X09 # addl %r9d, (%rcx)")
#define ADD_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X0A # addl %r9d, (%rdx)")
#define ADD_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X0F # addl %r9d, (%rdi)")
#define ADD_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X0E # addl %r9d, (%rsi)")
#define ADD_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X4D, 0X00 # addl %r9d, (%rbp)")
#define ADD_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X0C, 0X24 # addl %r9d, (%rsp)")
#define ADD_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X08 # addl %r9d, (%r8)")
#define ADD_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X09 # addl %r9d, (%r9)")
#define ADD_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X0A # addl %r9d, (%r10)")
#define ADD_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X0B # addl %r9d, (%r11)")
#define ADD_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X0C, 0X24 # addl %r9d, (%r12)")
#define ADD_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X4D, 0X00 # addl %r9d, (%r13)")
#define ADD_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X0E # addl %r9d, (%r14)")
#define ADD_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X0F # addl %r9d, (%r15)")
#define ADD_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X08 # addl %r9d, (%eax)")
#define ADD_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X0B # addl %r9d, (%ebx)")
#define ADD_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X09 # addl %r9d, (%ecx)")
#define ADD_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X0A # addl %r9d, (%edx)")
#define ADD_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X0F # addl %r9d, (%edi)")
#define ADD_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X0E # addl %r9d, (%esi)")
#define ADD_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X4D, 0X00 # addl %r9d, (%ebp)")
#define ADD_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X0C, 0X24 # addl %r9d, (%esp)")

#define ADD_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X10 # addl %r10d, (%rax)")
#define ADD_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X13 # addl %r10d, (%rbx)")
#define ADD_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X11 # addl %r10d, (%rcx)")
#define ADD_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X12 # addl %r10d, (%rdx)")
#define ADD_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X17 # addl %r10d, (%rdi)")
#define ADD_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X16 # addl %r10d, (%rsi)")
#define ADD_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X55, 0X00 # addl %r10d, (%rbp)")
#define ADD_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X14, 0X24 # addl %r10d, (%rsp)")
#define ADD_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X10 # addl %r10d, (%r8)")
#define ADD_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X11 # addl %r10d, (%r9)")
#define ADD_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X12 # addl %r10d, (%r10)")
#define ADD_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X13 # addl %r10d, (%r11)")
#define ADD_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X14, 0X24 # addl %r10d, (%r12)")
#define ADD_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X55, 0X00 # addl %r10d, (%r13)")
#define ADD_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X16 # addl %r10d, (%r14)")
#define ADD_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X17 # addl %r10d, (%r15)")
#define ADD_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X10 # addl %r10d, (%eax)")
#define ADD_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X13 # addl %r10d, (%ebx)")
#define ADD_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X11 # addl %r10d, (%ecx)")
#define ADD_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X12 # addl %r10d, (%edx)")
#define ADD_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X17 # addl %r10d, (%edi)")
#define ADD_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X16 # addl %r10d, (%esi)")
#define ADD_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X55, 0X00 # addl %r10d, (%ebp)")
#define ADD_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X14, 0X24 # addl %r10d, (%esp)")

#define ADD_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X18 # addl %r11d, (%rax)")
#define ADD_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X1B # addl %r11d, (%rbx)")
#define ADD_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X19 # addl %r11d, (%rcx)")
#define ADD_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X1A # addl %r11d, (%rdx)")
#define ADD_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X1F # addl %r11d, (%rdi)")
#define ADD_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X1E # addl %r11d, (%rsi)")
#define ADD_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X5D, 0X00 # addl %r11d, (%rbp)")
#define ADD_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X1C, 0X24 # addl %r11d, (%rsp)")
#define ADD_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X18 # addl %r11d, (%r8)")
#define ADD_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X19 # addl %r11d, (%r9)")
#define ADD_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X1A # addl %r11d, (%r10)")
#define ADD_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X1B # addl %r11d, (%r11)")
#define ADD_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X1C, 0X24 # addl %r11d, (%r12)")
#define ADD_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X5D, 0X00 # addl %r11d, (%r13)")
#define ADD_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X1E # addl %r11d, (%r14)")
#define ADD_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X1F # addl %r11d, (%r15)")
#define ADD_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X18 # addl %r11d, (%eax)")
#define ADD_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X1B # addl %r11d, (%ebx)")
#define ADD_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X19 # addl %r11d, (%ecx)")
#define ADD_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X1A # addl %r11d, (%edx)")
#define ADD_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X1F # addl %r11d, (%edi)")
#define ADD_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X1E # addl %r11d, (%esi)")
#define ADD_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X5D, 0X00 # addl %r11d, (%ebp)")
#define ADD_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X1C, 0X24 # addl %r11d, (%esp)")

#define ADD_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X20 # addl %r12d, (%rax)")
#define ADD_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X23 # addl %r12d, (%rbx)")
#define ADD_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X21 # addl %r12d, (%rcx)")
#define ADD_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X22 # addl %r12d, (%rdx)")
#define ADD_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X27 # addl %r12d, (%rdi)")
#define ADD_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X26 # addl %r12d, (%rsi)")
#define ADD_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X65, 0X00 # addl %r12d, (%rbp)")
#define ADD_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X24, 0X24 # addl %r12d, (%rsp)")
#define ADD_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X20 # addl %r12d, (%r8)")
#define ADD_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X21 # addl %r12d, (%r9)")
#define ADD_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X22 # addl %r12d, (%r10)")
#define ADD_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X23 # addl %r12d, (%r11)")
#define ADD_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X24, 0X24 # addl %r12d, (%r12)")
#define ADD_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X65, 0X00 # addl %r12d, (%r13)")
#define ADD_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X26 # addl %r12d, (%r14)")
#define ADD_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X27 # addl %r12d, (%r15)")
#define ADD_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X20 # addl %r12d, (%eax)")
#define ADD_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X23 # addl %r12d, (%ebx)")
#define ADD_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X21 # addl %r12d, (%ecx)")
#define ADD_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X22 # addl %r12d, (%edx)")
#define ADD_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X27 # addl %r12d, (%edi)")
#define ADD_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X26 # addl %r12d, (%esi)")
#define ADD_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X65, 0X00 # addl %r12d, (%ebp)")
#define ADD_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X24, 0X24 # addl %r12d, (%esp)")

#define ADD_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X28 # addl %r13d, (%rax)")
#define ADD_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X2B # addl %r13d, (%rbx)")
#define ADD_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X29 # addl %r13d, (%rcx)")
#define ADD_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X2A # addl %r13d, (%rdx)")
#define ADD_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X2F # addl %r13d, (%rdi)")
#define ADD_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X2E # addl %r13d, (%rsi)")
#define ADD_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X6D, 0X00 # addl %r13d, (%rbp)")
#define ADD_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X2C, 0X24 # addl %r13d, (%rsp)")
#define ADD_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X28 # addl %r13d, (%r8)")
#define ADD_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X29 # addl %r13d, (%r9)")
#define ADD_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X2A # addl %r13d, (%r10)")
#define ADD_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X2B # addl %r13d, (%r11)")
#define ADD_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X2C, 0X24 # addl %r13d, (%r12)")
#define ADD_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X6D, 0X00 # addl %r13d, (%r13)")
#define ADD_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X2E # addl %r13d, (%r14)")
#define ADD_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X2F # addl %r13d, (%r15)")
#define ADD_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X28 # addl %r13d, (%eax)")
#define ADD_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X2B # addl %r13d, (%ebx)")
#define ADD_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X29 # addl %r13d, (%ecx)")
#define ADD_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X2A # addl %r13d, (%edx)")
#define ADD_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X2F # addl %r13d, (%edi)")
#define ADD_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X2E # addl %r13d, (%esi)")
#define ADD_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X6D, 0X00 # addl %r13d, (%ebp)")
#define ADD_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X2C, 0X24 # addl %r13d, (%esp)")

#define ADD_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X30 # addl %r14d, (%rax)")
#define ADD_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X33 # addl %r14d, (%rbx)")
#define ADD_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X31 # addl %r14d, (%rcx)")
#define ADD_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X32 # addl %r14d, (%rdx)")
#define ADD_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X37 # addl %r14d, (%rdi)")
#define ADD_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X36 # addl %r14d, (%rsi)")
#define ADD_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X75, 0X00 # addl %r14d, (%rbp)")
#define ADD_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X34, 0X24 # addl %r14d, (%rsp)")
#define ADD_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X30 # addl %r14d, (%r8)")
#define ADD_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X31 # addl %r14d, (%r9)")
#define ADD_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X32 # addl %r14d, (%r10)")
#define ADD_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X33 # addl %r14d, (%r11)")
#define ADD_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X34, 0X24 # addl %r14d, (%r12)")
#define ADD_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X75, 0X00 # addl %r14d, (%r13)")
#define ADD_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X36 # addl %r14d, (%r14)")
#define ADD_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X37 # addl %r14d, (%r15)")
#define ADD_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X30 # addl %r14d, (%eax)")
#define ADD_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X33 # addl %r14d, (%ebx)")
#define ADD_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X31 # addl %r14d, (%ecx)")
#define ADD_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X32 # addl %r14d, (%edx)")
#define ADD_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X37 # addl %r14d, (%edi)")
#define ADD_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X36 # addl %r14d, (%esi)")
#define ADD_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X75, 0X00 # addl %r14d, (%ebp)")
#define ADD_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X34, 0X24 # addl %r14d, (%esp)")

#define ADD_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X01, 0X38 # addl %r15d, (%rax)")
#define ADD_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X01, 0X3B # addl %r15d, (%rbx)")
#define ADD_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X01, 0X39 # addl %r15d, (%rcx)")
#define ADD_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X01, 0X3A # addl %r15d, (%rdx)")
#define ADD_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X01, 0X3F # addl %r15d, (%rdi)")
#define ADD_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X01, 0X3E # addl %r15d, (%rsi)")
#define ADD_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X01, 0X7D, 0X00 # addl %r15d, (%rbp)")
#define ADD_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X01, 0X3C, 0X24 # addl %r15d, (%rsp)")
#define ADD_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X01, 0X38 # addl %r15d, (%r8)")
#define ADD_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X01, 0X39 # addl %r15d, (%r9)")
#define ADD_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X01, 0X3A # addl %r15d, (%r10)")
#define ADD_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X01, 0X3B # addl %r15d, (%r11)")
#define ADD_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X01, 0X3C, 0X24 # addl %r15d, (%r12)")
#define ADD_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X01, 0X7D, 0X00 # addl %r15d, (%r13)")
#define ADD_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X01, 0X3E # addl %r15d, (%r14)")
#define ADD_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X01, 0X3F # addl %r15d, (%r15)")
#define ADD_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X38 # addl %r15d, (%eax)")
#define ADD_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X3B # addl %r15d, (%ebx)")
#define ADD_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X39 # addl %r15d, (%ecx)")
#define ADD_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X01, 0X3A # addl %r15d, (%edx)")
#define ADD_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X3F # addl %r15d, (%edi)")
#define ADD_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X01, 0X3E # addl %r15d, (%esi)")
#define ADD_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X7D, 0X00 # addl %r15d, (%ebp)")
#define ADD_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X01, 0X3C, 0X24 # addl %r15d, (%esp)")

#define ADD_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X80 # addl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X83 # addl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X81 # addl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X82 # addl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X87 # addl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X86 # addl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X85 # addl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X84, 0X24 # addl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X80 # addl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X81 # addl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X82 # addl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X83 # addl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X84, 0X24 # addl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X85 # addl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X86 # addl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X87 # addl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X80 # addl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X83 # addl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X81 # addl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X82 # addl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X87 # addl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X86 # addl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X85 # addl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X84, 0X24 # addl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X98 # addl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9B # addl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X99 # addl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9A # addl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9F # addl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9E # addl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9D # addl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X98 # addl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X99 # addl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9A # addl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9B # addl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9D # addl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9E # addl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X9F # addl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X98 # addl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9B # addl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X99 # addl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9A # addl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9F # addl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9E # addl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9D # addl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X88 # addl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8B # addl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X89 # addl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8A # addl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8F # addl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8E # addl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8D # addl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X88 # addl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X89 # addl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8A # addl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8B # addl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8D # addl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8E # addl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X8F # addl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X88 # addl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8B # addl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X89 # addl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8A # addl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8F # addl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8E # addl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8D # addl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X90 # addl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X93 # addl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X91 # addl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0X92 # addl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X97 # addl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0X96 # addl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X95 # addl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0X94, 0X24 # addl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X90 # addl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X91 # addl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X92 # addl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X93 # addl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X94, 0X24 # addl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X95 # addl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X96 # addl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0X97 # addl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X90 # addl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X93 # addl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X91 # addl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X92 # addl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X97 # addl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X96 # addl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X95 # addl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0X94, 0X24 # addl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB8 # addl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBB # addl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB9 # addl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBA # addl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBF # addl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBE # addl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBD # addl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB8 # addl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB9 # addl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBA # addl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBB # addl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBD # addl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBE # addl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XBF # addl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB8 # addl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBB # addl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB9 # addl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBA # addl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBF # addl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBE # addl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBD # addl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB0 # addl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB3 # addl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB1 # addl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB2 # addl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB7 # addl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB6 # addl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB5 # addl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB0 # addl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB1 # addl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB2 # addl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB3 # addl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB5 # addl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB6 # addl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XB7 # addl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB0 # addl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB3 # addl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB1 # addl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB2 # addl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB7 # addl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB6 # addl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB5 # addl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA8 # addl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAB # addl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA9 # addl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAA # addl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAF # addl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAE # addl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAD # addl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA8 # addl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA9 # addl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAA # addl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAB # addl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAD # addl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAE # addl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XAF # addl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA8 # addl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAB # addl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA9 # addl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAA # addl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAF # addl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAE # addl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAD # addl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA0 # addl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA3 # addl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA1 # addl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA2 # addl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA7 # addl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA6 # addl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA5 # addl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA0 # addl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA1 # addl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA2 # addl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA3 # addl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA5 # addl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA6 # addl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X03, 0XA7 # addl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA0 # addl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA3 # addl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA1 # addl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA2 # addl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA7 # addl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA6 # addl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA5 # addl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X80 # addl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X83 # addl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X81 # addl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X82 # addl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X87 # addl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X86 # addl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X85 # addl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X84, 0X24 # addl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X80 # addl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X81 # addl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X82 # addl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X83 # addl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X84, 0X24 # addl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X85 # addl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X86 # addl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X87 # addl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X80 # addl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X83 # addl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X81 # addl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X82 # addl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X87 # addl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X86 # addl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X85 # addl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X84, 0X24 # addl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X88 # addl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8B # addl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X89 # addl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8A # addl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8F # addl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8E # addl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8D # addl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X88 # addl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X89 # addl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8A # addl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8B # addl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8D # addl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8E # addl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X8F # addl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X88 # addl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8B # addl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X89 # addl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8A # addl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8F # addl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8E # addl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8D # addl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X8C, 0X24 # addl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X90 # addl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X93 # addl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X91 # addl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X92 # addl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X97 # addl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X96 # addl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X95 # addl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X94, 0X24 # addl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X90 # addl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X91 # addl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X92 # addl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X93 # addl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X94, 0X24 # addl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X95 # addl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X96 # addl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X97 # addl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X90 # addl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X93 # addl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X91 # addl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X92 # addl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X97 # addl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X96 # addl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X95 # addl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X94, 0X24 # addl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X98 # addl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9B # addl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X99 # addl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9A # addl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9F # addl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9E # addl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9D # addl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X98 # addl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X99 # addl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9A # addl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9B # addl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9D # addl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9E # addl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0X9F # addl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X98 # addl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9B # addl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X99 # addl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9A # addl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9F # addl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9E # addl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9D # addl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0X9C, 0X24 # addl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA0 # addl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA3 # addl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA1 # addl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA2 # addl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA7 # addl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA6 # addl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA5 # addl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA0 # addl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA1 # addl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA2 # addl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA3 # addl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA5 # addl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA6 # addl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA7 # addl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA0 # addl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA3 # addl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA1 # addl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA2 # addl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA7 # addl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA6 # addl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA5 # addl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA4, 0X24 # addl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA8 # addl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAB # addl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XA9 # addl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAA # addl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAF # addl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAE # addl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAD # addl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA8 # addl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XA9 # addl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAA # addl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAB # addl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAD # addl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAE # addl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XAF # addl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA8 # addl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAB # addl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XA9 # addl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAA # addl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAF # addl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAE # addl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAD # addl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XAC, 0X24 # addl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB0 # addl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB3 # addl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB1 # addl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB2 # addl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB7 # addl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB6 # addl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB5 # addl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB0 # addl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB1 # addl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB2 # addl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB3 # addl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB5 # addl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB6 # addl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB7 # addl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB0 # addl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB3 # addl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB1 # addl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB2 # addl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB7 # addl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB6 # addl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB5 # addl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB4, 0X24 # addl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB8 # addl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBB # addl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XB9 # addl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBA # addl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBF # addl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBE # addl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBD # addl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB8 # addl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XB9 # addl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBA # addl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBB # addl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBD # addl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBE # addl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X03, 0XBF # addl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB8 # addl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBB # addl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XB9 # addl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBA # addl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBF # addl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBE # addl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBD # addl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X03, 0XBC, 0X24 # addl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X80 # addl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X83 # addl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X81 # addl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X82 # addl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X87 # addl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X86 # addl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X85 # addl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X84, 0X24 # addl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X80 # addl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X81 # addl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X82 # addl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X83 # addl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X84, 0X24 # addl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X85 # addl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X86 # addl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X87 # addl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X80 # addl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X83 # addl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X81 # addl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X82 # addl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X87 # addl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X86 # addl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X85 # addl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X84, 0X24 # addl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X98 # addl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9B # addl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X99 # addl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9A # addl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9F # addl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9E # addl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9D # addl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X9C, 0X24 # addl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X98 # addl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X99 # addl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9A # addl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9B # addl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9C, 0X24 # addl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9D # addl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9E # addl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X9F # addl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X98 # addl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9B # addl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X99 # addl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9A # addl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9F # addl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9E # addl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9D # addl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X9C, 0X24 # addl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X88 # addl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8B # addl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X89 # addl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8A # addl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8F # addl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8E # addl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8D # addl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X8C, 0X24 # addl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X88 # addl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X89 # addl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8A # addl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8B # addl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8C, 0X24 # addl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8D # addl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8E # addl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X8F # addl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X88 # addl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8B # addl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X89 # addl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8A # addl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8F # addl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8E # addl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8D # addl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X8C, 0X24 # addl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X90 # addl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X93 # addl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X91 # addl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0X92 # addl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X97 # addl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0X96 # addl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X95 # addl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0X94, 0X24 # addl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X90 # addl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X91 # addl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X92 # addl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X93 # addl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X94, 0X24 # addl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X95 # addl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X96 # addl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0X97 # addl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X90 # addl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X93 # addl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X91 # addl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X92 # addl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X97 # addl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X96 # addl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X95 # addl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0X94, 0X24 # addl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB8 # addl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBB # addl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB9 # addl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBA # addl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBF # addl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBE # addl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBD # addl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XBC, 0X24 # addl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB8 # addl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB9 # addl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBA # addl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBB # addl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBC, 0X24 # addl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBD # addl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBE # addl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XBF # addl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB8 # addl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBB # addl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB9 # addl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBA # addl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBF # addl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBE # addl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBD # addl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XBC, 0X24 # addl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB0 # addl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB3 # addl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB1 # addl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB2 # addl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB7 # addl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB6 # addl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB5 # addl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XB4, 0X24 # addl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB0 # addl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB1 # addl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB2 # addl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB3 # addl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB4, 0X24 # addl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB5 # addl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB6 # addl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XB7 # addl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB0 # addl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB3 # addl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB1 # addl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB2 # addl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB7 # addl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB6 # addl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB5 # addl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XB4, 0X24 # addl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA8 # addl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAB # addl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA9 # addl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAA # addl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAF # addl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAE # addl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAD # addl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XAC, 0X24 # addl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA8 # addl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA9 # addl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAA # addl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAB # addl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAC, 0X24 # addl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAD # addl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAE # addl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XAF # addl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA8 # addl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAB # addl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA9 # addl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAA # addl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAF # addl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAE # addl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAD # addl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XAC, 0X24 # addl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA0 # addl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA3 # addl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA1 # addl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA2 # addl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA7 # addl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA6 # addl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA5 # addl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X01, 0XA4, 0X24 # addl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA0 # addl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA1 # addl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA2 # addl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA3 # addl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA4, 0X24 # addl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA5 # addl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA6 # addl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X01, 0XA7 # addl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA0 # addl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA3 # addl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA1 # addl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA2 # addl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA7 # addl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA6 # addl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA5 # addl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X01, 0XA4, 0X24 # addl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X80 # addl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X83 # addl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X81 # addl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X82 # addl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X87 # addl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X86 # addl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X85 # addl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X84, 0X24 # addl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X80 # addl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X81 # addl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X82 # addl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X83 # addl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X84, 0X24 # addl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X85 # addl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X86 # addl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X87 # addl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X80 # addl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X83 # addl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X81 # addl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X82 # addl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X87 # addl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X86 # addl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X85 # addl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X84, 0X24 # addl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X88 # addl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8B # addl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X89 # addl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8A # addl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8F # addl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8E # addl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8D # addl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X8C, 0X24 # addl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X88 # addl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X89 # addl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8A # addl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8B # addl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8C, 0X24 # addl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8D # addl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8E # addl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X8F # addl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X88 # addl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8B # addl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X89 # addl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8A # addl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8F # addl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8E # addl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8D # addl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X8C, 0X24 # addl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X90 # addl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X93 # addl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X91 # addl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X92 # addl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X97 # addl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X96 # addl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X95 # addl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X94, 0X24 # addl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X90 # addl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X91 # addl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X92 # addl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X93 # addl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X94, 0X24 # addl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X95 # addl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X96 # addl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X97 # addl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X90 # addl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X93 # addl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X91 # addl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X92 # addl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X97 # addl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X96 # addl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X95 # addl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X94, 0X24 # addl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X98 # addl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9B # addl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X99 # addl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9A # addl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9F # addl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9E # addl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9D # addl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0X9C, 0X24 # addl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X98 # addl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X99 # addl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9A # addl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9B # addl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9C, 0X24 # addl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9D # addl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9E # addl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0X9F # addl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X98 # addl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9B # addl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X99 # addl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9A # addl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9F # addl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9E # addl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9D # addl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0X9C, 0X24 # addl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA0 # addl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA3 # addl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA1 # addl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA2 # addl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA7 # addl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA6 # addl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA5 # addl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA4, 0X24 # addl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA0 # addl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA1 # addl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA2 # addl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA3 # addl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA4, 0X24 # addl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA5 # addl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA6 # addl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA7 # addl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA0 # addl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA3 # addl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA1 # addl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA2 # addl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA7 # addl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA6 # addl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA5 # addl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA4, 0X24 # addl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA8 # addl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAB # addl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XA9 # addl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAA # addl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAF # addl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAE # addl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAD # addl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XAC, 0X24 # addl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA8 # addl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XA9 # addl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAA # addl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAB # addl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAC, 0X24 # addl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAD # addl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAE # addl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XAF # addl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA8 # addl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAB # addl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XA9 # addl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAA # addl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAF # addl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAE # addl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAD # addl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XAC, 0X24 # addl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB0 # addl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB3 # addl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB1 # addl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB2 # addl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB7 # addl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB6 # addl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB5 # addl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB4, 0X24 # addl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB0 # addl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB1 # addl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB2 # addl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB3 # addl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB4, 0X24 # addl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB5 # addl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB6 # addl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB7 # addl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB0 # addl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB3 # addl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB1 # addl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB2 # addl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB7 # addl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB6 # addl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB5 # addl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB4, 0X24 # addl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADD_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB8 # addl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBB # addl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XB9 # addl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBA # addl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBF # addl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBE # addl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBD # addl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X01, 0XBC, 0X24 # addl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB8 # addl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XB9 # addl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBA # addl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBB # addl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBC, 0X24 # addl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBD # addl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBE # addl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X01, 0XBF # addl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB8 # addl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBB # addl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XB9 # addl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBA # addl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBF # addl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBE # addl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBD # addl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADD_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X01, 0XBC, 0X24 # addl %r15d, " _(VALUE) "(%esp)")\
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
