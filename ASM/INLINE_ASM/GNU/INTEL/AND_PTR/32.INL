#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define AND_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X05 # andl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X1D # andl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X0D # andl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X15 # andl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X3D # andl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X35 # andl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X2D # andl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X25 # andl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define AND_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X05 # andl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X1D # andl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X0D # andl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X15 # andl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X3D # andl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X35 # andl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X2D # andl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X25 # andl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X00 # andl (%eax), %eax")
#define AND_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X03 # andl (%ebx), %eax")
#define AND_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X01 # andl (%ecx), %eax")
#define AND_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X02 # andl (%edx), %eax")
#define AND_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X07 # andl (%edi), %eax")
#define AND_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X06 # andl (%esi), %eax")
#define AND_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X45, 0X00 # andl (%ebp), %eax")
#define AND_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X04, 0X24 # andl (%esp), %eax")
#define AND_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X07 # andl (%bx), %eax")
#define AND_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X46, 0X00 # andl (%bp), %eax")
#define AND_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X04 # andl (%si), %eax")
#define AND_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X05 # andl (%di), %eax")

#define AND_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X18 # andl (%eax), %ebx")
#define AND_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X1B # andl (%ebx), %ebx")
#define AND_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X19 # andl (%ecx), %ebx")
#define AND_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X1A # andl (%edx), %ebx")
#define AND_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X1F # andl (%edi), %ebx")
#define AND_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X1E # andl (%esi), %ebx")
#define AND_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X5D, 0X00 # andl (%ebp), %ebx")
#define AND_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X1C, 0X24 # andl (%esp), %ebx")
#define AND_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X1F # andl (%bx), %ebx")
#define AND_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X5E, 0X00 # andl (%bp), %ebx")
#define AND_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X1C # andl (%si), %ebx")
#define AND_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X1D # andl (%di), %ebx")

#define AND_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X08 # andl (%eax), %ecx")
#define AND_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X0B # andl (%ebx), %ecx")
#define AND_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X09 # andl (%ecx), %ecx")
#define AND_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X0A # andl (%edx), %ecx")
#define AND_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X0F # andl (%edi), %ecx")
#define AND_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X0E # andl (%esi), %ecx")
#define AND_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X4D, 0X00 # andl (%ebp), %ecx")
#define AND_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X0C, 0X24 # andl (%esp), %ecx")
#define AND_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X0F # andl (%bx), %ecx")
#define AND_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X4E, 0X00 # andl (%bp), %ecx")
#define AND_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X0C # andl (%si), %ecx")
#define AND_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X0D # andl (%di), %ecx")

#define AND_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X10 # andl (%eax), %edx")
#define AND_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X13 # andl (%ebx), %edx")
#define AND_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X11 # andl (%ecx), %edx")
#define AND_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X12 # andl (%edx), %edx")
#define AND_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X17 # andl (%edi), %edx")
#define AND_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X16 # andl (%esi), %edx")
#define AND_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X55, 0X00 # andl (%ebp), %edx")
#define AND_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X14, 0X24 # andl (%esp), %edx")
#define AND_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X17 # andl (%bx), %edx")
#define AND_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X56, 0X00 # andl (%bp), %edx")
#define AND_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X14 # andl (%si), %edx")
#define AND_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X15 # andl (%di), %edx")

#define AND_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X38 # andl (%eax), %edi")
#define AND_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X3B # andl (%ebx), %edi")
#define AND_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X39 # andl (%ecx), %edi")
#define AND_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X3A # andl (%edx), %edi")
#define AND_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X3F # andl (%edi), %edi")
#define AND_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X3E # andl (%esi), %edi")
#define AND_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X7D, 0X00 # andl (%ebp), %edi")
#define AND_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X3C, 0X24 # andl (%esp), %edi")
#define AND_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X3F # andl (%bx), %edi")
#define AND_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X7E, 0X00 # andl (%bp), %edi")
#define AND_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X3C # andl (%si), %edi")
#define AND_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X3D # andl (%di), %edi")

#define AND_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X30 # andl (%eax), %esi")
#define AND_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X33 # andl (%ebx), %esi")
#define AND_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X31 # andl (%ecx), %esi")
#define AND_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X32 # andl (%edx), %esi")
#define AND_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X37 # andl (%edi), %esi")
#define AND_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X36 # andl (%esi), %esi")
#define AND_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X75, 0X00 # andl (%ebp), %esi")
#define AND_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X34, 0X24 # andl (%esp), %esi")
#define AND_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X37 # andl (%bx), %esi")
#define AND_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X76, 0X00 # andl (%bp), %esi")
#define AND_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X34 # andl (%si), %esi")
#define AND_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X35 # andl (%di), %esi")

#define AND_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X28 # andl (%eax), %ebp")
#define AND_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X2B # andl (%ebx), %ebp")
#define AND_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X29 # andl (%ecx), %ebp")
#define AND_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X2A # andl (%edx), %ebp")
#define AND_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X2F # andl (%edi), %ebp")
#define AND_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X2E # andl (%esi), %ebp")
#define AND_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X6D, 0X00 # andl (%ebp), %ebp")
#define AND_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X2C, 0X24 # andl (%esp), %ebp")
#define AND_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X2F # andl (%bx), %ebp")
#define AND_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X6E, 0X00 # andl (%bp), %ebp")
#define AND_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X2C # andl (%si), %ebp")
#define AND_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X2D # andl (%di), %ebp")

#define AND_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X23, 0X20 # andl (%eax), %esp")
#define AND_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X23, 0X23 # andl (%ebx), %esp")
#define AND_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X23, 0X21 # andl (%ecx), %esp")
#define AND_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X23, 0X22 # andl (%edx), %esp")
#define AND_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X23, 0X27 # andl (%edi), %esp")
#define AND_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X23, 0X26 # andl (%esi), %esp")
#define AND_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X23, 0X65, 0X00 # andl (%ebp), %esp")
#define AND_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X23, 0X24, 0X24 # andl (%esp), %esp")
#define AND_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X23, 0X27 # andl (%bx), %esp")
#define AND_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X23, 0X66, 0X00 # andl (%bp), %esp")
#define AND_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X23, 0X24 # andl (%si), %esp")
#define AND_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X23, 0X25 # andl (%di), %esp")

#define AND_EAX_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X00 # andl %eax, (%eax)")
#define AND_EAX_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X03 # andl %eax, (%ebx)")
#define AND_EAX_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X01 # andl %eax, (%ecx)")
#define AND_EAX_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X02 # andl %eax, (%edx)")
#define AND_EAX_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X07 # andl %eax, (%edi)")
#define AND_EAX_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X06 # andl %eax, (%esi)")
#define AND_EAX_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X45, 0X00 # andl %eax, (%ebp)")
#define AND_EAX_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X04, 0X24 # andl %eax, (%esp)")
#define AND_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X07 # andl %eax, (%bx)")
#define AND_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X46, 0X00 # andl %eax, (%bp)")
#define AND_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X04 # andl %eax, (%si)")
#define AND_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X05 # andl %eax, (%di)")

#define AND_EBX_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X18 # andl %ebx, (%eax)")
#define AND_EBX_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X1B # andl %ebx, (%ebx)")
#define AND_EBX_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X19 # andl %ebx, (%ecx)")
#define AND_EBX_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X1A # andl %ebx, (%edx)")
#define AND_EBX_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X1F # andl %ebx, (%edi)")
#define AND_EBX_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X1E # andl %ebx, (%esi)")
#define AND_EBX_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X5D, 0X00 # andl %ebx, (%ebp)")
#define AND_EBX_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X1C, 0X24 # andl %ebx, (%esp)")
#define AND_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X1F # andl %ebx, (%bx)")
#define AND_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X5E, 0X00 # andl %ebx, (%bp)")
#define AND_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X1C # andl %ebx, (%si)")
#define AND_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X1D # andl %ebx, (%di)")

#define AND_ECX_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X08 # andl %ecx, (%eax)")
#define AND_ECX_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X0B # andl %ecx, (%ebx)")
#define AND_ECX_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X09 # andl %ecx, (%ecx)")
#define AND_ECX_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X0A # andl %ecx, (%edx)")
#define AND_ECX_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X0F # andl %ecx, (%edi)")
#define AND_ECX_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X0E # andl %ecx, (%esi)")
#define AND_ECX_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X4D, 0X00 # andl %ecx, (%ebp)")
#define AND_ECX_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X0C, 0X24 # andl %ecx, (%esp)")
#define AND_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X0F # andl %ecx, (%bx)")
#define AND_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X4E, 0X00 # andl %ecx, (%bp)")
#define AND_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X0C # andl %ecx, (%si)")
#define AND_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X0D # andl %ecx, (%di)")

#define AND_EDX_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X10 # andl %edx, (%eax)")
#define AND_EDX_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X13 # andl %edx, (%ebx)")
#define AND_EDX_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X11 # andl %edx, (%ecx)")
#define AND_EDX_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X12 # andl %edx, (%edx)")
#define AND_EDX_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X17 # andl %edx, (%edi)")
#define AND_EDX_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X16 # andl %edx, (%esi)")
#define AND_EDX_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X55, 0X00 # andl %edx, (%ebp)")
#define AND_EDX_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X14, 0X24 # andl %edx, (%esp)")
#define AND_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X17 # andl %edx, (%bx)")
#define AND_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X56, 0X00 # andl %edx, (%bp)")
#define AND_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X14 # andl %edx, (%si)")
#define AND_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X15 # andl %edx, (%di)")

#define AND_EDI_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X38 # andl %edi, (%eax)")
#define AND_EDI_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X3B # andl %edi, (%ebx)")
#define AND_EDI_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X39 # andl %edi, (%ecx)")
#define AND_EDI_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X3A # andl %edi, (%edx)")
#define AND_EDI_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X3F # andl %edi, (%edi)")
#define AND_EDI_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X3E # andl %edi, (%esi)")
#define AND_EDI_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X7D, 0X00 # andl %edi, (%ebp)")
#define AND_EDI_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X3C, 0X24 # andl %edi, (%esp)")
#define AND_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X3F # andl %edi, (%bx)")
#define AND_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X7E, 0X00 # andl %edi, (%bp)")
#define AND_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X3C # andl %edi, (%si)")
#define AND_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X3D # andl %edi, (%di)")

#define AND_ESI_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X30 # andl %esi, (%eax)")
#define AND_ESI_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X33 # andl %esi, (%ebx)")
#define AND_ESI_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X31 # andl %esi, (%ecx)")
#define AND_ESI_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X32 # andl %esi, (%edx)")
#define AND_ESI_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X37 # andl %esi, (%edi)")
#define AND_ESI_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X36 # andl %esi, (%esi)")
#define AND_ESI_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X75, 0X00 # andl %esi, (%ebp)")
#define AND_ESI_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X34, 0X24 # andl %esi, (%esp)")
#define AND_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X37 # andl %esi, (%bx)")
#define AND_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X76, 0X00 # andl %esi, (%bp)")
#define AND_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X34 # andl %esi, (%si)")
#define AND_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X35 # andl %esi, (%di)")

#define AND_EBP_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X28 # andl %ebp, (%eax)")
#define AND_EBP_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X2B # andl %ebp, (%ebx)")
#define AND_EBP_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X29 # andl %ebp, (%ecx)")
#define AND_EBP_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X2A # andl %ebp, (%edx)")
#define AND_EBP_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X2F # andl %ebp, (%edi)")
#define AND_EBP_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X2E # andl %ebp, (%esi)")
#define AND_EBP_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X6D, 0X00 # andl %ebp, (%ebp)")
#define AND_EBP_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X2C, 0X24 # andl %ebp, (%esp)")
#define AND_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X2F # andl %ebp, (%bx)")
#define AND_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X6E, 0X00 # andl %ebp, (%bp)")
#define AND_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X2C # andl %ebp, (%si)")
#define AND_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X2D # andl %ebp, (%di)")

#define AND_ESP_TO_PTR_EAX CMT_ASM(".byte 0X21, 0X20 # andl %esp, (%eax)")
#define AND_ESP_TO_PTR_EBX CMT_ASM(".byte 0X21, 0X23 # andl %esp, (%ebx)")
#define AND_ESP_TO_PTR_ECX CMT_ASM(".byte 0X21, 0X21 # andl %esp, (%ecx)")
#define AND_ESP_TO_PTR_EDX CMT_ASM(".byte 0X21, 0X22 # andl %esp, (%edx)")
#define AND_ESP_TO_PTR_EDI CMT_ASM(".byte 0X21, 0X27 # andl %esp, (%edi)")
#define AND_ESP_TO_PTR_ESI CMT_ASM(".byte 0X21, 0X26 # andl %esp, (%esi)")
#define AND_ESP_TO_PTR_EBP CMT_ASM(".byte 0X21, 0X65, 0X00 # andl %esp, (%ebp)")
#define AND_ESP_TO_PTR_ESP CMT_ASM(".byte 0X21, 0X24, 0X24 # andl %esp, (%esp)")
#define AND_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X21, 0X27 # andl %esp, (%bx)")
#define AND_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X21, 0X66, 0X00 # andl %esp, (%bp)")
#define AND_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X21, 0X24 # andl %esp, (%si)")
#define AND_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X21, 0X25 # andl %esp, (%di)")

#define AND_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X80 # andl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X83 # andl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X81 # andl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X82 # andl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X87 # andl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X86 # andl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X85 # andl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X84, 0X24 # andl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X87 # andl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X86 # andl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X84 # andl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X85 # andl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define AND_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X98 # andl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9B # andl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X99 # andl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9A # andl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9F # andl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9E # andl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9D # andl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9F # andl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9E # andl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9C # andl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9D # andl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define AND_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X88 # andl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8B # andl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X89 # andl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8A # andl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8F # andl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8E # andl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8D # andl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8F # andl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8E # andl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8C # andl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8D # andl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define AND_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X90 # andl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X93 # andl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X91 # andl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X92 # andl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X97 # andl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X96 # andl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X95 # andl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X94, 0X24 # andl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X97 # andl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X96 # andl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X94 # andl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X95 # andl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define AND_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB8 # andl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBB # andl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB9 # andl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBA # andl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBF # andl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBE # andl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBD # andl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBF # andl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBE # andl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBC # andl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBD # andl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define AND_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB0 # andl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB3 # andl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB1 # andl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB2 # andl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB7 # andl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB6 # andl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB5 # andl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB7 # andl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB6 # andl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB4 # andl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB5 # andl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define AND_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA8 # andl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAB # andl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA9 # andl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAA # andl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAF # andl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAE # andl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAD # andl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAF # andl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAE # andl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAC # andl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAD # andl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define AND_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA0 # andl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA3 # andl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA1 # andl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA2 # andl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA7 # andl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA6 # andl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA5 # andl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA7 # andl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA6 # andl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA4 # andl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA5 # andl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define AND_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X80 # andl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X83 # andl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X81 # andl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X82 # andl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X87 # andl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X86 # andl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X85 # andl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X84, 0X24 # andl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X87 # andl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X86 # andl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X84 # andl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X85 # andl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X98 # andl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9B # andl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X99 # andl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9A # andl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9F # andl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9E # andl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9D # andl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9C, 0X24 # andl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9F # andl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9E # andl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9C # andl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9D # andl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X88 # andl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8B # andl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X89 # andl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8A # andl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8F # andl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8E # andl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8D # andl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8C, 0X24 # andl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8F # andl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8E # andl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8C # andl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8D # andl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X90 # andl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X93 # andl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X91 # andl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X92 # andl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X97 # andl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X96 # andl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X95 # andl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X94, 0X24 # andl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X97 # andl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X96 # andl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X94 # andl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X95 # andl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB8 # andl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBB # andl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB9 # andl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBA # andl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBF # andl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBE # andl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBD # andl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBC, 0X24 # andl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBF # andl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBE # andl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBC # andl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBD # andl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB0 # andl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB3 # andl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB1 # andl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB2 # andl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB7 # andl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB6 # andl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB5 # andl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB4, 0X24 # andl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB7 # andl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB6 # andl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB4 # andl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB5 # andl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA8 # andl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAB # andl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA9 # andl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAA # andl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAF # andl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAE # andl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAD # andl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAC, 0X24 # andl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAF # andl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAE # andl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAC # andl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAD # andl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define AND_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA0 # andl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA3 # andl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA1 # andl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA2 # andl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA7 # andl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA6 # andl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA5 # andl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA4, 0X24 # andl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA7 # andl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA6 # andl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA4 # andl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define AND_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA5 # andl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X04, 0X25 # andl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X1C, 0X25 # andl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X0C, 0X25 # andl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X14, 0X25 # andl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X3C, 0X25 # andl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X34, 0X25 # andl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X2C, 0X25 # andl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X23, 0X24, 0X25 # andl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X04, 0X25 # andl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X0C, 0X25 # andl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X14, 0X25 # andl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X1C, 0X25 # andl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X24, 0X25 # andl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X2C, 0X25 # andl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X34, 0X25 # andl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X3C, 0X25 # andl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define AND_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X04, 0X25 # andl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X1C, 0X25 # andl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X0C, 0X25 # andl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X14, 0X25 # andl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X3C, 0X25 # andl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X34, 0X25 # andl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X2C, 0X25 # andl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X21, 0X24, 0X25 # andl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X04, 0X25 # andl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X0C, 0X25 # andl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X14, 0X25 # andl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X1C, 0X25 # andl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X24, 0X25 # andl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X2C, 0X25 # andl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X34, 0X25 # andl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X3C, 0X25 # andl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define AND_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X00 # andl (%rax), %eax")
#define AND_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X03 # andl (%rbx), %eax")
#define AND_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X01 # andl (%rcx), %eax")
#define AND_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X02 # andl (%rdx), %eax")
#define AND_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X07 # andl (%rdi), %eax")
#define AND_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X06 # andl (%rsi), %eax")
#define AND_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X45, 0X00 # andl (%rbp), %eax")
#define AND_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X04, 0X24 # andl (%rsp), %eax")
#define AND_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X00 # andl (%r8), %eax")
#define AND_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X01 # andl (%r9), %eax")
#define AND_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X02 # andl (%r10), %eax")
#define AND_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X03 # andl (%r11), %eax")
#define AND_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X04, 0X24 # andl (%r12), %eax")
#define AND_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X45, 0X00 # andl (%r13), %eax")
#define AND_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X06 # andl (%r14), %eax")
#define AND_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X07 # andl (%r15), %eax")
#define AND_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X00 # andl (%eax), %eax")
#define AND_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X03 # andl (%ebx), %eax")
#define AND_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X01 # andl (%ecx), %eax")
#define AND_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X02 # andl (%edx), %eax")
#define AND_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X07 # andl (%edi), %eax")
#define AND_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X06 # andl (%esi), %eax")
#define AND_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X45, 0X00 # andl (%ebp), %eax")
#define AND_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X04, 0X24 # andl (%esp), %eax")

#define AND_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X18 # andl (%rax), %ebx")
#define AND_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X1B # andl (%rbx), %ebx")
#define AND_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X19 # andl (%rcx), %ebx")
#define AND_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X1A # andl (%rdx), %ebx")
#define AND_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X1F # andl (%rdi), %ebx")
#define AND_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X1E # andl (%rsi), %ebx")
#define AND_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X5D, 0X00 # andl (%rbp), %ebx")
#define AND_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X1C, 0X24 # andl (%rsp), %ebx")
#define AND_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X18 # andl (%r8), %ebx")
#define AND_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X19 # andl (%r9), %ebx")
#define AND_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X1A # andl (%r10), %ebx")
#define AND_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X1B # andl (%r11), %ebx")
#define AND_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X1C, 0X24 # andl (%r12), %ebx")
#define AND_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X5D, 0X00 # andl (%r13), %ebx")
#define AND_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X1E # andl (%r14), %ebx")
#define AND_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X1F # andl (%r15), %ebx")
#define AND_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X18 # andl (%eax), %ebx")
#define AND_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X1B # andl (%ebx), %ebx")
#define AND_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X19 # andl (%ecx), %ebx")
#define AND_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X1A # andl (%edx), %ebx")
#define AND_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X1F # andl (%edi), %ebx")
#define AND_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X1E # andl (%esi), %ebx")
#define AND_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X5D, 0X00 # andl (%ebp), %ebx")
#define AND_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X1C, 0X24 # andl (%esp), %ebx")

#define AND_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X08 # andl (%rax), %ecx")
#define AND_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X0B # andl (%rbx), %ecx")
#define AND_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X09 # andl (%rcx), %ecx")
#define AND_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X0A # andl (%rdx), %ecx")
#define AND_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X0F # andl (%rdi), %ecx")
#define AND_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X0E # andl (%rsi), %ecx")
#define AND_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X4D, 0X00 # andl (%rbp), %ecx")
#define AND_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X0C, 0X24 # andl (%rsp), %ecx")
#define AND_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X08 # andl (%r8), %ecx")
#define AND_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X09 # andl (%r9), %ecx")
#define AND_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X0A # andl (%r10), %ecx")
#define AND_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X0B # andl (%r11), %ecx")
#define AND_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X0C, 0X24 # andl (%r12), %ecx")
#define AND_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X4D, 0X00 # andl (%r13), %ecx")
#define AND_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X0E # andl (%r14), %ecx")
#define AND_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X0F # andl (%r15), %ecx")
#define AND_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X08 # andl (%eax), %ecx")
#define AND_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X0B # andl (%ebx), %ecx")
#define AND_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X09 # andl (%ecx), %ecx")
#define AND_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X0A # andl (%edx), %ecx")
#define AND_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X0F # andl (%edi), %ecx")
#define AND_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X0E # andl (%esi), %ecx")
#define AND_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X4D, 0X00 # andl (%ebp), %ecx")
#define AND_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X0C, 0X24 # andl (%esp), %ecx")

#define AND_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X10 # andl (%rax), %edx")
#define AND_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X13 # andl (%rbx), %edx")
#define AND_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X11 # andl (%rcx), %edx")
#define AND_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X12 # andl (%rdx), %edx")
#define AND_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X17 # andl (%rdi), %edx")
#define AND_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X16 # andl (%rsi), %edx")
#define AND_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X55, 0X00 # andl (%rbp), %edx")
#define AND_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X14, 0X24 # andl (%rsp), %edx")
#define AND_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X10 # andl (%r8), %edx")
#define AND_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X11 # andl (%r9), %edx")
#define AND_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X12 # andl (%r10), %edx")
#define AND_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X13 # andl (%r11), %edx")
#define AND_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X14, 0X24 # andl (%r12), %edx")
#define AND_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X55, 0X00 # andl (%r13), %edx")
#define AND_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X16 # andl (%r14), %edx")
#define AND_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X17 # andl (%r15), %edx")
#define AND_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X10 # andl (%eax), %edx")
#define AND_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X13 # andl (%ebx), %edx")
#define AND_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X11 # andl (%ecx), %edx")
#define AND_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X12 # andl (%edx), %edx")
#define AND_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X17 # andl (%edi), %edx")
#define AND_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X16 # andl (%esi), %edx")
#define AND_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X55, 0X00 # andl (%ebp), %edx")
#define AND_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X14, 0X24 # andl (%esp), %edx")

#define AND_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X38 # andl (%rax), %edi")
#define AND_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X3B # andl (%rbx), %edi")
#define AND_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X39 # andl (%rcx), %edi")
#define AND_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X3A # andl (%rdx), %edi")
#define AND_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X3F # andl (%rdi), %edi")
#define AND_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X3E # andl (%rsi), %edi")
#define AND_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X7D, 0X00 # andl (%rbp), %edi")
#define AND_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X3C, 0X24 # andl (%rsp), %edi")
#define AND_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X38 # andl (%r8), %edi")
#define AND_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X39 # andl (%r9), %edi")
#define AND_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X3A # andl (%r10), %edi")
#define AND_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X3B # andl (%r11), %edi")
#define AND_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X3C, 0X24 # andl (%r12), %edi")
#define AND_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X7D, 0X00 # andl (%r13), %edi")
#define AND_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X3E # andl (%r14), %edi")
#define AND_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X3F # andl (%r15), %edi")
#define AND_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X38 # andl (%eax), %edi")
#define AND_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X3B # andl (%ebx), %edi")
#define AND_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X39 # andl (%ecx), %edi")
#define AND_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X3A # andl (%edx), %edi")
#define AND_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X3F # andl (%edi), %edi")
#define AND_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X3E # andl (%esi), %edi")
#define AND_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X7D, 0X00 # andl (%ebp), %edi")
#define AND_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X3C, 0X24 # andl (%esp), %edi")

#define AND_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X30 # andl (%rax), %esi")
#define AND_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X33 # andl (%rbx), %esi")
#define AND_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X31 # andl (%rcx), %esi")
#define AND_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X32 # andl (%rdx), %esi")
#define AND_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X37 # andl (%rdi), %esi")
#define AND_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X36 # andl (%rsi), %esi")
#define AND_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X75, 0X00 # andl (%rbp), %esi")
#define AND_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X34, 0X24 # andl (%rsp), %esi")
#define AND_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X30 # andl (%r8), %esi")
#define AND_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X31 # andl (%r9), %esi")
#define AND_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X32 # andl (%r10), %esi")
#define AND_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X33 # andl (%r11), %esi")
#define AND_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X34, 0X24 # andl (%r12), %esi")
#define AND_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X75, 0X00 # andl (%r13), %esi")
#define AND_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X36 # andl (%r14), %esi")
#define AND_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X37 # andl (%r15), %esi")
#define AND_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X30 # andl (%eax), %esi")
#define AND_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X33 # andl (%ebx), %esi")
#define AND_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X31 # andl (%ecx), %esi")
#define AND_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X32 # andl (%edx), %esi")
#define AND_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X37 # andl (%edi), %esi")
#define AND_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X36 # andl (%esi), %esi")
#define AND_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X75, 0X00 # andl (%ebp), %esi")
#define AND_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X34, 0X24 # andl (%esp), %esi")

#define AND_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X28 # andl (%rax), %ebp")
#define AND_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X2B # andl (%rbx), %ebp")
#define AND_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X29 # andl (%rcx), %ebp")
#define AND_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X2A # andl (%rdx), %ebp")
#define AND_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X2F # andl (%rdi), %ebp")
#define AND_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X2E # andl (%rsi), %ebp")
#define AND_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X6D, 0X00 # andl (%rbp), %ebp")
#define AND_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X2C, 0X24 # andl (%rsp), %ebp")
#define AND_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X28 # andl (%r8), %ebp")
#define AND_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X29 # andl (%r9), %ebp")
#define AND_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X2A # andl (%r10), %ebp")
#define AND_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X2B # andl (%r11), %ebp")
#define AND_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X2C, 0X24 # andl (%r12), %ebp")
#define AND_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X6D, 0X00 # andl (%r13), %ebp")
#define AND_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X2E # andl (%r14), %ebp")
#define AND_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X2F # andl (%r15), %ebp")
#define AND_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X28 # andl (%eax), %ebp")
#define AND_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X2B # andl (%ebx), %ebp")
#define AND_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X29 # andl (%ecx), %ebp")
#define AND_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X2A # andl (%edx), %ebp")
#define AND_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X2F # andl (%edi), %ebp")
#define AND_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X2E # andl (%esi), %ebp")
#define AND_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X6D, 0X00 # andl (%ebp), %ebp")
#define AND_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X2C, 0X24 # andl (%esp), %ebp")

#define AND_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X23, 0X20 # andl (%rax), %esp")
#define AND_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X23, 0X23 # andl (%rbx), %esp")
#define AND_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X23, 0X21 # andl (%rcx), %esp")
#define AND_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X23, 0X22 # andl (%rdx), %esp")
#define AND_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X23, 0X27 # andl (%rdi), %esp")
#define AND_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X23, 0X26 # andl (%rsi), %esp")
#define AND_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X23, 0X65, 0X00 # andl (%rbp), %esp")
#define AND_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X23, 0X24, 0X24 # andl (%rsp), %esp")
#define AND_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X23, 0X20 # andl (%r8), %esp")
#define AND_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X23, 0X21 # andl (%r9), %esp")
#define AND_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X23, 0X22 # andl (%r10), %esp")
#define AND_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X23, 0X23 # andl (%r11), %esp")
#define AND_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X23, 0X24, 0X24 # andl (%r12), %esp")
#define AND_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X23, 0X65, 0X00 # andl (%r13), %esp")
#define AND_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X23, 0X26 # andl (%r14), %esp")
#define AND_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X23, 0X27 # andl (%r15), %esp")
#define AND_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X23, 0X20 # andl (%eax), %esp")
#define AND_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X23, 0X23 # andl (%ebx), %esp")
#define AND_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X23, 0X21 # andl (%ecx), %esp")
#define AND_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X23, 0X22 # andl (%edx), %esp")
#define AND_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X23, 0X27 # andl (%edi), %esp")
#define AND_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X23, 0X26 # andl (%esi), %esp")
#define AND_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X23, 0X65, 0X00 # andl (%ebp), %esp")
#define AND_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X23, 0X24, 0X24 # andl (%esp), %esp")

#define AND_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X00 # andl (%rax), %r8d")
#define AND_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X03 # andl (%rbx), %r8d")
#define AND_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X01 # andl (%rcx), %r8d")
#define AND_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X02 # andl (%rdx), %r8d")
#define AND_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X07 # andl (%rdi), %r8d")
#define AND_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X06 # andl (%rsi), %r8d")
#define AND_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X45, 0X00 # andl (%rbp), %r8d")
#define AND_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X04, 0X24 # andl (%rsp), %r8d")
#define AND_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X00 # andl (%r8), %r8d")
#define AND_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X01 # andl (%r9), %r8d")
#define AND_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X02 # andl (%r10), %r8d")
#define AND_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X03 # andl (%r11), %r8d")
#define AND_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X04, 0X24 # andl (%r12), %r8d")
#define AND_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X45, 0X00 # andl (%r13), %r8d")
#define AND_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X06 # andl (%r14), %r8d")
#define AND_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X07 # andl (%r15), %r8d")
#define AND_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X00 # andl (%eax), %r8d")
#define AND_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X03 # andl (%ebx), %r8d")
#define AND_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X01 # andl (%ecx), %r8d")
#define AND_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X02 # andl (%edx), %r8d")
#define AND_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X07 # andl (%edi), %r8d")
#define AND_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X06 # andl (%esi), %r8d")
#define AND_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X45, 0X00 # andl (%ebp), %r8d")
#define AND_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X04, 0X24 # andl (%esp), %r8d")

#define AND_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X08 # andl (%rax), %r9d")
#define AND_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X0B # andl (%rbx), %r9d")
#define AND_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X09 # andl (%rcx), %r9d")
#define AND_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X0A # andl (%rdx), %r9d")
#define AND_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X0F # andl (%rdi), %r9d")
#define AND_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X0E # andl (%rsi), %r9d")
#define AND_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X4D, 0X00 # andl (%rbp), %r9d")
#define AND_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X0C, 0X24 # andl (%rsp), %r9d")
#define AND_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X08 # andl (%r8), %r9d")
#define AND_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X09 # andl (%r9), %r9d")
#define AND_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X0A # andl (%r10), %r9d")
#define AND_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X0B # andl (%r11), %r9d")
#define AND_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X0C, 0X24 # andl (%r12), %r9d")
#define AND_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X4D, 0X00 # andl (%r13), %r9d")
#define AND_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X0E # andl (%r14), %r9d")
#define AND_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X0F # andl (%r15), %r9d")
#define AND_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X08 # andl (%eax), %r9d")
#define AND_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X0B # andl (%ebx), %r9d")
#define AND_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X09 # andl (%ecx), %r9d")
#define AND_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X0A # andl (%edx), %r9d")
#define AND_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X0F # andl (%edi), %r9d")
#define AND_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X0E # andl (%esi), %r9d")
#define AND_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X4D, 0X00 # andl (%ebp), %r9d")
#define AND_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X0C, 0X24 # andl (%esp), %r9d")

#define AND_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X10 # andl (%rax), %r10d")
#define AND_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X13 # andl (%rbx), %r10d")
#define AND_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X11 # andl (%rcx), %r10d")
#define AND_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X12 # andl (%rdx), %r10d")
#define AND_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X17 # andl (%rdi), %r10d")
#define AND_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X16 # andl (%rsi), %r10d")
#define AND_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X55, 0X00 # andl (%rbp), %r10d")
#define AND_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X14, 0X24 # andl (%rsp), %r10d")
#define AND_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X10 # andl (%r8), %r10d")
#define AND_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X11 # andl (%r9), %r10d")
#define AND_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X12 # andl (%r10), %r10d")
#define AND_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X13 # andl (%r11), %r10d")
#define AND_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X14, 0X24 # andl (%r12), %r10d")
#define AND_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X55, 0X00 # andl (%r13), %r10d")
#define AND_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X16 # andl (%r14), %r10d")
#define AND_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X17 # andl (%r15), %r10d")
#define AND_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X10 # andl (%eax), %r10d")
#define AND_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X13 # andl (%ebx), %r10d")
#define AND_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X11 # andl (%ecx), %r10d")
#define AND_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X12 # andl (%edx), %r10d")
#define AND_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X17 # andl (%edi), %r10d")
#define AND_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X16 # andl (%esi), %r10d")
#define AND_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X55, 0X00 # andl (%ebp), %r10d")
#define AND_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X14, 0X24 # andl (%esp), %r10d")

#define AND_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X18 # andl (%rax), %r11d")
#define AND_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X1B # andl (%rbx), %r11d")
#define AND_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X19 # andl (%rcx), %r11d")
#define AND_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X1A # andl (%rdx), %r11d")
#define AND_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X1F # andl (%rdi), %r11d")
#define AND_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X1E # andl (%rsi), %r11d")
#define AND_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X5D, 0X00 # andl (%rbp), %r11d")
#define AND_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X1C, 0X24 # andl (%rsp), %r11d")
#define AND_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X18 # andl (%r8), %r11d")
#define AND_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X19 # andl (%r9), %r11d")
#define AND_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X1A # andl (%r10), %r11d")
#define AND_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X1B # andl (%r11), %r11d")
#define AND_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X1C, 0X24 # andl (%r12), %r11d")
#define AND_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X5D, 0X00 # andl (%r13), %r11d")
#define AND_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X1E # andl (%r14), %r11d")
#define AND_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X1F # andl (%r15), %r11d")
#define AND_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X18 # andl (%eax), %r11d")
#define AND_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X1B # andl (%ebx), %r11d")
#define AND_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X19 # andl (%ecx), %r11d")
#define AND_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X1A # andl (%edx), %r11d")
#define AND_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X1F # andl (%edi), %r11d")
#define AND_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X1E # andl (%esi), %r11d")
#define AND_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X5D, 0X00 # andl (%ebp), %r11d")
#define AND_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X1C, 0X24 # andl (%esp), %r11d")

#define AND_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X20 # andl (%rax), %r12d")
#define AND_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X23 # andl (%rbx), %r12d")
#define AND_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X21 # andl (%rcx), %r12d")
#define AND_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X22 # andl (%rdx), %r12d")
#define AND_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X27 # andl (%rdi), %r12d")
#define AND_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X26 # andl (%rsi), %r12d")
#define AND_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X65, 0X00 # andl (%rbp), %r12d")
#define AND_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X24, 0X24 # andl (%rsp), %r12d")
#define AND_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X20 # andl (%r8), %r12d")
#define AND_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X21 # andl (%r9), %r12d")
#define AND_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X22 # andl (%r10), %r12d")
#define AND_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X23 # andl (%r11), %r12d")
#define AND_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X24, 0X24 # andl (%r12), %r12d")
#define AND_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X65, 0X00 # andl (%r13), %r12d")
#define AND_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X26 # andl (%r14), %r12d")
#define AND_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X27 # andl (%r15), %r12d")
#define AND_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X20 # andl (%eax), %r12d")
#define AND_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X23 # andl (%ebx), %r12d")
#define AND_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X21 # andl (%ecx), %r12d")
#define AND_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X22 # andl (%edx), %r12d")
#define AND_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X27 # andl (%edi), %r12d")
#define AND_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X26 # andl (%esi), %r12d")
#define AND_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X65, 0X00 # andl (%ebp), %r12d")
#define AND_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X24, 0X24 # andl (%esp), %r12d")

#define AND_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X28 # andl (%rax), %r13d")
#define AND_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X2B # andl (%rbx), %r13d")
#define AND_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X29 # andl (%rcx), %r13d")
#define AND_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X2A # andl (%rdx), %r13d")
#define AND_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X2F # andl (%rdi), %r13d")
#define AND_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X2E # andl (%rsi), %r13d")
#define AND_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X6D, 0X00 # andl (%rbp), %r13d")
#define AND_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X2C, 0X24 # andl (%rsp), %r13d")
#define AND_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X28 # andl (%r8), %r13d")
#define AND_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X29 # andl (%r9), %r13d")
#define AND_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X2A # andl (%r10), %r13d")
#define AND_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X2B # andl (%r11), %r13d")
#define AND_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X2C, 0X24 # andl (%r12), %r13d")
#define AND_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X6D, 0X00 # andl (%r13), %r13d")
#define AND_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X2E # andl (%r14), %r13d")
#define AND_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X2F # andl (%r15), %r13d")
#define AND_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X28 # andl (%eax), %r13d")
#define AND_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X2B # andl (%ebx), %r13d")
#define AND_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X29 # andl (%ecx), %r13d")
#define AND_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X2A # andl (%edx), %r13d")
#define AND_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X2F # andl (%edi), %r13d")
#define AND_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X2E # andl (%esi), %r13d")
#define AND_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X6D, 0X00 # andl (%ebp), %r13d")
#define AND_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X2C, 0X24 # andl (%esp), %r13d")

#define AND_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X30 # andl (%rax), %r14d")
#define AND_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X33 # andl (%rbx), %r14d")
#define AND_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X31 # andl (%rcx), %r14d")
#define AND_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X32 # andl (%rdx), %r14d")
#define AND_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X37 # andl (%rdi), %r14d")
#define AND_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X36 # andl (%rsi), %r14d")
#define AND_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X75, 0X00 # andl (%rbp), %r14d")
#define AND_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X34, 0X24 # andl (%rsp), %r14d")
#define AND_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X30 # andl (%r8), %r14d")
#define AND_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X31 # andl (%r9), %r14d")
#define AND_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X32 # andl (%r10), %r14d")
#define AND_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X33 # andl (%r11), %r14d")
#define AND_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X34, 0X24 # andl (%r12), %r14d")
#define AND_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X75, 0X00 # andl (%r13), %r14d")
#define AND_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X36 # andl (%r14), %r14d")
#define AND_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X37 # andl (%r15), %r14d")
#define AND_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X30 # andl (%eax), %r14d")
#define AND_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X33 # andl (%ebx), %r14d")
#define AND_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X31 # andl (%ecx), %r14d")
#define AND_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X32 # andl (%edx), %r14d")
#define AND_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X37 # andl (%edi), %r14d")
#define AND_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X36 # andl (%esi), %r14d")
#define AND_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X75, 0X00 # andl (%ebp), %r14d")
#define AND_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X34, 0X24 # andl (%esp), %r14d")

#define AND_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X23, 0X38 # andl (%rax), %r15d")
#define AND_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X23, 0X3B # andl (%rbx), %r15d")
#define AND_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X23, 0X39 # andl (%rcx), %r15d")
#define AND_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X23, 0X3A # andl (%rdx), %r15d")
#define AND_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X23, 0X3F # andl (%rdi), %r15d")
#define AND_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X23, 0X3E # andl (%rsi), %r15d")
#define AND_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X23, 0X7D, 0X00 # andl (%rbp), %r15d")
#define AND_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X23, 0X3C, 0X24 # andl (%rsp), %r15d")
#define AND_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X23, 0X38 # andl (%r8), %r15d")
#define AND_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X23, 0X39 # andl (%r9), %r15d")
#define AND_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X23, 0X3A # andl (%r10), %r15d")
#define AND_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X23, 0X3B # andl (%r11), %r15d")
#define AND_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X23, 0X3C, 0X24 # andl (%r12), %r15d")
#define AND_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X23, 0X7D, 0X00 # andl (%r13), %r15d")
#define AND_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X23, 0X3E # andl (%r14), %r15d")
#define AND_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X23, 0X3F # andl (%r15), %r15d")
#define AND_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X38 # andl (%eax), %r15d")
#define AND_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X3B # andl (%ebx), %r15d")
#define AND_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X39 # andl (%ecx), %r15d")
#define AND_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X23, 0X3A # andl (%edx), %r15d")
#define AND_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X3F # andl (%edi), %r15d")
#define AND_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X23, 0X3E # andl (%esi), %r15d")
#define AND_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X7D, 0X00 # andl (%ebp), %r15d")
#define AND_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X23, 0X3C, 0X24 # andl (%esp), %r15d")

#define AND_EAX_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X00 # andl %eax, (%rax)")
#define AND_EAX_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X03 # andl %eax, (%rbx)")
#define AND_EAX_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X01 # andl %eax, (%rcx)")
#define AND_EAX_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X02 # andl %eax, (%rdx)")
#define AND_EAX_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X07 # andl %eax, (%rdi)")
#define AND_EAX_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X06 # andl %eax, (%rsi)")
#define AND_EAX_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X45, 0X00 # andl %eax, (%rbp)")
#define AND_EAX_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X04, 0X24 # andl %eax, (%rsp)")
#define AND_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X00 # andl %eax, (%r8)")
#define AND_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X01 # andl %eax, (%r9)")
#define AND_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X02 # andl %eax, (%r10)")
#define AND_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X03 # andl %eax, (%r11)")
#define AND_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X04, 0X24 # andl %eax, (%r12)")
#define AND_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X45, 0X00 # andl %eax, (%r13)")
#define AND_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X06 # andl %eax, (%r14)")
#define AND_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X07 # andl %eax, (%r15)")
#define AND_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X00 # andl %eax, (%eax)")
#define AND_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X03 # andl %eax, (%ebx)")
#define AND_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X01 # andl %eax, (%ecx)")
#define AND_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X02 # andl %eax, (%edx)")
#define AND_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X07 # andl %eax, (%edi)")
#define AND_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X06 # andl %eax, (%esi)")
#define AND_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X45, 0X00 # andl %eax, (%ebp)")
#define AND_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X04, 0X24 # andl %eax, (%esp)")

#define AND_EBX_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X18 # andl %ebx, (%rax)")
#define AND_EBX_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X1B # andl %ebx, (%rbx)")
#define AND_EBX_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X19 # andl %ebx, (%rcx)")
#define AND_EBX_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X1A # andl %ebx, (%rdx)")
#define AND_EBX_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X1F # andl %ebx, (%rdi)")
#define AND_EBX_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X1E # andl %ebx, (%rsi)")
#define AND_EBX_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X5D, 0X00 # andl %ebx, (%rbp)")
#define AND_EBX_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X1C, 0X24 # andl %ebx, (%rsp)")
#define AND_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X18 # andl %ebx, (%r8)")
#define AND_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X19 # andl %ebx, (%r9)")
#define AND_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X1A # andl %ebx, (%r10)")
#define AND_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X1B # andl %ebx, (%r11)")
#define AND_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X1C, 0X24 # andl %ebx, (%r12)")
#define AND_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X5D, 0X00 # andl %ebx, (%r13)")
#define AND_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X1E # andl %ebx, (%r14)")
#define AND_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X1F # andl %ebx, (%r15)")
#define AND_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X18 # andl %ebx, (%eax)")
#define AND_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X1B # andl %ebx, (%ebx)")
#define AND_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X19 # andl %ebx, (%ecx)")
#define AND_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X1A # andl %ebx, (%edx)")
#define AND_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X1F # andl %ebx, (%edi)")
#define AND_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X1E # andl %ebx, (%esi)")
#define AND_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X5D, 0X00 # andl %ebx, (%ebp)")
#define AND_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X1C, 0X24 # andl %ebx, (%esp)")

#define AND_ECX_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X08 # andl %ecx, (%rax)")
#define AND_ECX_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X0B # andl %ecx, (%rbx)")
#define AND_ECX_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X09 # andl %ecx, (%rcx)")
#define AND_ECX_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X0A # andl %ecx, (%rdx)")
#define AND_ECX_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X0F # andl %ecx, (%rdi)")
#define AND_ECX_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X0E # andl %ecx, (%rsi)")
#define AND_ECX_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X4D, 0X00 # andl %ecx, (%rbp)")
#define AND_ECX_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X0C, 0X24 # andl %ecx, (%rsp)")
#define AND_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X08 # andl %ecx, (%r8)")
#define AND_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X09 # andl %ecx, (%r9)")
#define AND_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X0A # andl %ecx, (%r10)")
#define AND_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X0B # andl %ecx, (%r11)")
#define AND_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X0C, 0X24 # andl %ecx, (%r12)")
#define AND_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X4D, 0X00 # andl %ecx, (%r13)")
#define AND_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X0E # andl %ecx, (%r14)")
#define AND_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X0F # andl %ecx, (%r15)")
#define AND_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X08 # andl %ecx, (%eax)")
#define AND_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X0B # andl %ecx, (%ebx)")
#define AND_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X09 # andl %ecx, (%ecx)")
#define AND_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X0A # andl %ecx, (%edx)")
#define AND_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X0F # andl %ecx, (%edi)")
#define AND_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X0E # andl %ecx, (%esi)")
#define AND_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X4D, 0X00 # andl %ecx, (%ebp)")
#define AND_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X0C, 0X24 # andl %ecx, (%esp)")

#define AND_EDX_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X10 # andl %edx, (%rax)")
#define AND_EDX_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X13 # andl %edx, (%rbx)")
#define AND_EDX_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X11 # andl %edx, (%rcx)")
#define AND_EDX_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X12 # andl %edx, (%rdx)")
#define AND_EDX_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X17 # andl %edx, (%rdi)")
#define AND_EDX_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X16 # andl %edx, (%rsi)")
#define AND_EDX_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X55, 0X00 # andl %edx, (%rbp)")
#define AND_EDX_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X14, 0X24 # andl %edx, (%rsp)")
#define AND_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X10 # andl %edx, (%r8)")
#define AND_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X11 # andl %edx, (%r9)")
#define AND_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X12 # andl %edx, (%r10)")
#define AND_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X13 # andl %edx, (%r11)")
#define AND_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X14, 0X24 # andl %edx, (%r12)")
#define AND_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X55, 0X00 # andl %edx, (%r13)")
#define AND_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X16 # andl %edx, (%r14)")
#define AND_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X17 # andl %edx, (%r15)")
#define AND_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X10 # andl %edx, (%eax)")
#define AND_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X13 # andl %edx, (%ebx)")
#define AND_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X11 # andl %edx, (%ecx)")
#define AND_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X12 # andl %edx, (%edx)")
#define AND_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X17 # andl %edx, (%edi)")
#define AND_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X16 # andl %edx, (%esi)")
#define AND_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X55, 0X00 # andl %edx, (%ebp)")
#define AND_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X14, 0X24 # andl %edx, (%esp)")

#define AND_EDI_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X38 # andl %edi, (%rax)")
#define AND_EDI_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X3B # andl %edi, (%rbx)")
#define AND_EDI_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X39 # andl %edi, (%rcx)")
#define AND_EDI_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X3A # andl %edi, (%rdx)")
#define AND_EDI_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X3F # andl %edi, (%rdi)")
#define AND_EDI_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X3E # andl %edi, (%rsi)")
#define AND_EDI_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X7D, 0X00 # andl %edi, (%rbp)")
#define AND_EDI_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X3C, 0X24 # andl %edi, (%rsp)")
#define AND_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X38 # andl %edi, (%r8)")
#define AND_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X39 # andl %edi, (%r9)")
#define AND_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X3A # andl %edi, (%r10)")
#define AND_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X3B # andl %edi, (%r11)")
#define AND_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X3C, 0X24 # andl %edi, (%r12)")
#define AND_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X7D, 0X00 # andl %edi, (%r13)")
#define AND_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X3E # andl %edi, (%r14)")
#define AND_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X3F # andl %edi, (%r15)")
#define AND_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X38 # andl %edi, (%eax)")
#define AND_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X3B # andl %edi, (%ebx)")
#define AND_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X39 # andl %edi, (%ecx)")
#define AND_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X3A # andl %edi, (%edx)")
#define AND_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X3F # andl %edi, (%edi)")
#define AND_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X3E # andl %edi, (%esi)")
#define AND_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X7D, 0X00 # andl %edi, (%ebp)")
#define AND_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X3C, 0X24 # andl %edi, (%esp)")

#define AND_ESI_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X30 # andl %esi, (%rax)")
#define AND_ESI_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X33 # andl %esi, (%rbx)")
#define AND_ESI_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X31 # andl %esi, (%rcx)")
#define AND_ESI_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X32 # andl %esi, (%rdx)")
#define AND_ESI_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X37 # andl %esi, (%rdi)")
#define AND_ESI_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X36 # andl %esi, (%rsi)")
#define AND_ESI_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X75, 0X00 # andl %esi, (%rbp)")
#define AND_ESI_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X34, 0X24 # andl %esi, (%rsp)")
#define AND_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X30 # andl %esi, (%r8)")
#define AND_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X31 # andl %esi, (%r9)")
#define AND_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X32 # andl %esi, (%r10)")
#define AND_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X33 # andl %esi, (%r11)")
#define AND_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X34, 0X24 # andl %esi, (%r12)")
#define AND_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X75, 0X00 # andl %esi, (%r13)")
#define AND_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X36 # andl %esi, (%r14)")
#define AND_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X37 # andl %esi, (%r15)")
#define AND_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X30 # andl %esi, (%eax)")
#define AND_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X33 # andl %esi, (%ebx)")
#define AND_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X31 # andl %esi, (%ecx)")
#define AND_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X32 # andl %esi, (%edx)")
#define AND_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X37 # andl %esi, (%edi)")
#define AND_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X36 # andl %esi, (%esi)")
#define AND_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X75, 0X00 # andl %esi, (%ebp)")
#define AND_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X34, 0X24 # andl %esi, (%esp)")

#define AND_EBP_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X28 # andl %ebp, (%rax)")
#define AND_EBP_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X2B # andl %ebp, (%rbx)")
#define AND_EBP_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X29 # andl %ebp, (%rcx)")
#define AND_EBP_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X2A # andl %ebp, (%rdx)")
#define AND_EBP_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X2F # andl %ebp, (%rdi)")
#define AND_EBP_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X2E # andl %ebp, (%rsi)")
#define AND_EBP_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X6D, 0X00 # andl %ebp, (%rbp)")
#define AND_EBP_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X2C, 0X24 # andl %ebp, (%rsp)")
#define AND_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X28 # andl %ebp, (%r8)")
#define AND_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X29 # andl %ebp, (%r9)")
#define AND_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X2A # andl %ebp, (%r10)")
#define AND_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X2B # andl %ebp, (%r11)")
#define AND_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X2C, 0X24 # andl %ebp, (%r12)")
#define AND_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X6D, 0X00 # andl %ebp, (%r13)")
#define AND_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X2E # andl %ebp, (%r14)")
#define AND_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X2F # andl %ebp, (%r15)")
#define AND_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X28 # andl %ebp, (%eax)")
#define AND_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X2B # andl %ebp, (%ebx)")
#define AND_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X29 # andl %ebp, (%ecx)")
#define AND_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X2A # andl %ebp, (%edx)")
#define AND_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X2F # andl %ebp, (%edi)")
#define AND_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X2E # andl %ebp, (%esi)")
#define AND_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X6D, 0X00 # andl %ebp, (%ebp)")
#define AND_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X2C, 0X24 # andl %ebp, (%esp)")

#define AND_ESP_TO_PTR_RAX CMT_ASM(".byte 0X21, 0X20 # andl %esp, (%rax)")
#define AND_ESP_TO_PTR_RBX CMT_ASM(".byte 0X21, 0X23 # andl %esp, (%rbx)")
#define AND_ESP_TO_PTR_RCX CMT_ASM(".byte 0X21, 0X21 # andl %esp, (%rcx)")
#define AND_ESP_TO_PTR_RDX CMT_ASM(".byte 0X21, 0X22 # andl %esp, (%rdx)")
#define AND_ESP_TO_PTR_RDI CMT_ASM(".byte 0X21, 0X27 # andl %esp, (%rdi)")
#define AND_ESP_TO_PTR_RSI CMT_ASM(".byte 0X21, 0X26 # andl %esp, (%rsi)")
#define AND_ESP_TO_PTR_RBP CMT_ASM(".byte 0X21, 0X65, 0X00 # andl %esp, (%rbp)")
#define AND_ESP_TO_PTR_RSP CMT_ASM(".byte 0X21, 0X24, 0X24 # andl %esp, (%rsp)")
#define AND_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X21, 0X20 # andl %esp, (%r8)")
#define AND_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X21, 0X21 # andl %esp, (%r9)")
#define AND_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X21, 0X22 # andl %esp, (%r10)")
#define AND_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X21, 0X23 # andl %esp, (%r11)")
#define AND_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X21, 0X24, 0X24 # andl %esp, (%r12)")
#define AND_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X21, 0X65, 0X00 # andl %esp, (%r13)")
#define AND_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X21, 0X26 # andl %esp, (%r14)")
#define AND_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X21, 0X27 # andl %esp, (%r15)")
#define AND_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X21, 0X20 # andl %esp, (%eax)")
#define AND_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X21, 0X23 # andl %esp, (%ebx)")
#define AND_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X21, 0X21 # andl %esp, (%ecx)")
#define AND_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X21, 0X22 # andl %esp, (%edx)")
#define AND_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X21, 0X27 # andl %esp, (%edi)")
#define AND_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X21, 0X26 # andl %esp, (%esi)")
#define AND_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X21, 0X65, 0X00 # andl %esp, (%ebp)")
#define AND_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X21, 0X24, 0X24 # andl %esp, (%esp)")

#define AND_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X00 # andl %r8d, (%rax)")
#define AND_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X03 # andl %r8d, (%rbx)")
#define AND_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X01 # andl %r8d, (%rcx)")
#define AND_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X02 # andl %r8d, (%rdx)")
#define AND_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X07 # andl %r8d, (%rdi)")
#define AND_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X06 # andl %r8d, (%rsi)")
#define AND_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X45, 0X00 # andl %r8d, (%rbp)")
#define AND_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X04, 0X24 # andl %r8d, (%rsp)")
#define AND_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X00 # andl %r8d, (%r8)")
#define AND_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X01 # andl %r8d, (%r9)")
#define AND_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X02 # andl %r8d, (%r10)")
#define AND_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X03 # andl %r8d, (%r11)")
#define AND_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X04, 0X24 # andl %r8d, (%r12)")
#define AND_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X45, 0X00 # andl %r8d, (%r13)")
#define AND_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X06 # andl %r8d, (%r14)")
#define AND_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X07 # andl %r8d, (%r15)")
#define AND_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X00 # andl %r8d, (%eax)")
#define AND_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X03 # andl %r8d, (%ebx)")
#define AND_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X01 # andl %r8d, (%ecx)")
#define AND_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X02 # andl %r8d, (%edx)")
#define AND_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X07 # andl %r8d, (%edi)")
#define AND_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X06 # andl %r8d, (%esi)")
#define AND_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X45, 0X00 # andl %r8d, (%ebp)")
#define AND_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X04, 0X24 # andl %r8d, (%esp)")

#define AND_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X08 # andl %r9d, (%rax)")
#define AND_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X0B # andl %r9d, (%rbx)")
#define AND_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X09 # andl %r9d, (%rcx)")
#define AND_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X0A # andl %r9d, (%rdx)")
#define AND_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X0F # andl %r9d, (%rdi)")
#define AND_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X0E # andl %r9d, (%rsi)")
#define AND_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X4D, 0X00 # andl %r9d, (%rbp)")
#define AND_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X0C, 0X24 # andl %r9d, (%rsp)")
#define AND_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X08 # andl %r9d, (%r8)")
#define AND_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X09 # andl %r9d, (%r9)")
#define AND_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X0A # andl %r9d, (%r10)")
#define AND_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X0B # andl %r9d, (%r11)")
#define AND_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X0C, 0X24 # andl %r9d, (%r12)")
#define AND_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X4D, 0X00 # andl %r9d, (%r13)")
#define AND_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X0E # andl %r9d, (%r14)")
#define AND_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X0F # andl %r9d, (%r15)")
#define AND_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X08 # andl %r9d, (%eax)")
#define AND_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X0B # andl %r9d, (%ebx)")
#define AND_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X09 # andl %r9d, (%ecx)")
#define AND_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X0A # andl %r9d, (%edx)")
#define AND_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X0F # andl %r9d, (%edi)")
#define AND_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X0E # andl %r9d, (%esi)")
#define AND_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X4D, 0X00 # andl %r9d, (%ebp)")
#define AND_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X0C, 0X24 # andl %r9d, (%esp)")

#define AND_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X10 # andl %r10d, (%rax)")
#define AND_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X13 # andl %r10d, (%rbx)")
#define AND_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X11 # andl %r10d, (%rcx)")
#define AND_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X12 # andl %r10d, (%rdx)")
#define AND_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X17 # andl %r10d, (%rdi)")
#define AND_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X16 # andl %r10d, (%rsi)")
#define AND_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X55, 0X00 # andl %r10d, (%rbp)")
#define AND_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X14, 0X24 # andl %r10d, (%rsp)")
#define AND_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X10 # andl %r10d, (%r8)")
#define AND_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X11 # andl %r10d, (%r9)")
#define AND_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X12 # andl %r10d, (%r10)")
#define AND_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X13 # andl %r10d, (%r11)")
#define AND_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X14, 0X24 # andl %r10d, (%r12)")
#define AND_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X55, 0X00 # andl %r10d, (%r13)")
#define AND_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X16 # andl %r10d, (%r14)")
#define AND_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X17 # andl %r10d, (%r15)")
#define AND_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X10 # andl %r10d, (%eax)")
#define AND_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X13 # andl %r10d, (%ebx)")
#define AND_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X11 # andl %r10d, (%ecx)")
#define AND_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X12 # andl %r10d, (%edx)")
#define AND_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X17 # andl %r10d, (%edi)")
#define AND_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X16 # andl %r10d, (%esi)")
#define AND_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X55, 0X00 # andl %r10d, (%ebp)")
#define AND_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X14, 0X24 # andl %r10d, (%esp)")

#define AND_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X18 # andl %r11d, (%rax)")
#define AND_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X1B # andl %r11d, (%rbx)")
#define AND_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X19 # andl %r11d, (%rcx)")
#define AND_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X1A # andl %r11d, (%rdx)")
#define AND_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X1F # andl %r11d, (%rdi)")
#define AND_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X1E # andl %r11d, (%rsi)")
#define AND_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X5D, 0X00 # andl %r11d, (%rbp)")
#define AND_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X1C, 0X24 # andl %r11d, (%rsp)")
#define AND_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X18 # andl %r11d, (%r8)")
#define AND_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X19 # andl %r11d, (%r9)")
#define AND_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X1A # andl %r11d, (%r10)")
#define AND_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X1B # andl %r11d, (%r11)")
#define AND_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X1C, 0X24 # andl %r11d, (%r12)")
#define AND_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X5D, 0X00 # andl %r11d, (%r13)")
#define AND_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X1E # andl %r11d, (%r14)")
#define AND_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X1F # andl %r11d, (%r15)")
#define AND_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X18 # andl %r11d, (%eax)")
#define AND_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X1B # andl %r11d, (%ebx)")
#define AND_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X19 # andl %r11d, (%ecx)")
#define AND_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X1A # andl %r11d, (%edx)")
#define AND_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X1F # andl %r11d, (%edi)")
#define AND_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X1E # andl %r11d, (%esi)")
#define AND_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X5D, 0X00 # andl %r11d, (%ebp)")
#define AND_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X1C, 0X24 # andl %r11d, (%esp)")

#define AND_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X20 # andl %r12d, (%rax)")
#define AND_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X23 # andl %r12d, (%rbx)")
#define AND_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X21 # andl %r12d, (%rcx)")
#define AND_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X22 # andl %r12d, (%rdx)")
#define AND_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X27 # andl %r12d, (%rdi)")
#define AND_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X26 # andl %r12d, (%rsi)")
#define AND_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X65, 0X00 # andl %r12d, (%rbp)")
#define AND_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X24, 0X24 # andl %r12d, (%rsp)")
#define AND_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X20 # andl %r12d, (%r8)")
#define AND_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X21 # andl %r12d, (%r9)")
#define AND_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X22 # andl %r12d, (%r10)")
#define AND_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X23 # andl %r12d, (%r11)")
#define AND_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X24, 0X24 # andl %r12d, (%r12)")
#define AND_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X65, 0X00 # andl %r12d, (%r13)")
#define AND_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X26 # andl %r12d, (%r14)")
#define AND_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X27 # andl %r12d, (%r15)")
#define AND_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X20 # andl %r12d, (%eax)")
#define AND_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X23 # andl %r12d, (%ebx)")
#define AND_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X21 # andl %r12d, (%ecx)")
#define AND_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X22 # andl %r12d, (%edx)")
#define AND_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X27 # andl %r12d, (%edi)")
#define AND_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X26 # andl %r12d, (%esi)")
#define AND_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X65, 0X00 # andl %r12d, (%ebp)")
#define AND_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X24, 0X24 # andl %r12d, (%esp)")

#define AND_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X28 # andl %r13d, (%rax)")
#define AND_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X2B # andl %r13d, (%rbx)")
#define AND_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X29 # andl %r13d, (%rcx)")
#define AND_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X2A # andl %r13d, (%rdx)")
#define AND_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X2F # andl %r13d, (%rdi)")
#define AND_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X2E # andl %r13d, (%rsi)")
#define AND_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X6D, 0X00 # andl %r13d, (%rbp)")
#define AND_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X2C, 0X24 # andl %r13d, (%rsp)")
#define AND_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X28 # andl %r13d, (%r8)")
#define AND_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X29 # andl %r13d, (%r9)")
#define AND_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X2A # andl %r13d, (%r10)")
#define AND_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X2B # andl %r13d, (%r11)")
#define AND_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X2C, 0X24 # andl %r13d, (%r12)")
#define AND_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X6D, 0X00 # andl %r13d, (%r13)")
#define AND_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X2E # andl %r13d, (%r14)")
#define AND_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X2F # andl %r13d, (%r15)")
#define AND_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X28 # andl %r13d, (%eax)")
#define AND_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X2B # andl %r13d, (%ebx)")
#define AND_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X29 # andl %r13d, (%ecx)")
#define AND_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X2A # andl %r13d, (%edx)")
#define AND_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X2F # andl %r13d, (%edi)")
#define AND_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X2E # andl %r13d, (%esi)")
#define AND_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X6D, 0X00 # andl %r13d, (%ebp)")
#define AND_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X2C, 0X24 # andl %r13d, (%esp)")

#define AND_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X30 # andl %r14d, (%rax)")
#define AND_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X33 # andl %r14d, (%rbx)")
#define AND_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X31 # andl %r14d, (%rcx)")
#define AND_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X32 # andl %r14d, (%rdx)")
#define AND_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X37 # andl %r14d, (%rdi)")
#define AND_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X36 # andl %r14d, (%rsi)")
#define AND_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X75, 0X00 # andl %r14d, (%rbp)")
#define AND_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X34, 0X24 # andl %r14d, (%rsp)")
#define AND_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X30 # andl %r14d, (%r8)")
#define AND_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X31 # andl %r14d, (%r9)")
#define AND_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X32 # andl %r14d, (%r10)")
#define AND_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X33 # andl %r14d, (%r11)")
#define AND_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X34, 0X24 # andl %r14d, (%r12)")
#define AND_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X75, 0X00 # andl %r14d, (%r13)")
#define AND_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X36 # andl %r14d, (%r14)")
#define AND_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X37 # andl %r14d, (%r15)")
#define AND_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X30 # andl %r14d, (%eax)")
#define AND_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X33 # andl %r14d, (%ebx)")
#define AND_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X31 # andl %r14d, (%ecx)")
#define AND_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X32 # andl %r14d, (%edx)")
#define AND_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X37 # andl %r14d, (%edi)")
#define AND_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X36 # andl %r14d, (%esi)")
#define AND_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X75, 0X00 # andl %r14d, (%ebp)")
#define AND_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X34, 0X24 # andl %r14d, (%esp)")

#define AND_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X21, 0X38 # andl %r15d, (%rax)")
#define AND_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X21, 0X3B # andl %r15d, (%rbx)")
#define AND_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X21, 0X39 # andl %r15d, (%rcx)")
#define AND_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X21, 0X3A # andl %r15d, (%rdx)")
#define AND_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X21, 0X3F # andl %r15d, (%rdi)")
#define AND_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X21, 0X3E # andl %r15d, (%rsi)")
#define AND_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X21, 0X7D, 0X00 # andl %r15d, (%rbp)")
#define AND_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X21, 0X3C, 0X24 # andl %r15d, (%rsp)")
#define AND_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X21, 0X38 # andl %r15d, (%r8)")
#define AND_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X21, 0X39 # andl %r15d, (%r9)")
#define AND_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X21, 0X3A # andl %r15d, (%r10)")
#define AND_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X21, 0X3B # andl %r15d, (%r11)")
#define AND_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X21, 0X3C, 0X24 # andl %r15d, (%r12)")
#define AND_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X21, 0X7D, 0X00 # andl %r15d, (%r13)")
#define AND_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X21, 0X3E # andl %r15d, (%r14)")
#define AND_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X21, 0X3F # andl %r15d, (%r15)")
#define AND_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X38 # andl %r15d, (%eax)")
#define AND_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X3B # andl %r15d, (%ebx)")
#define AND_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X39 # andl %r15d, (%ecx)")
#define AND_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X21, 0X3A # andl %r15d, (%edx)")
#define AND_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X3F # andl %r15d, (%edi)")
#define AND_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X21, 0X3E # andl %r15d, (%esi)")
#define AND_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X7D, 0X00 # andl %r15d, (%ebp)")
#define AND_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X21, 0X3C, 0X24 # andl %r15d, (%esp)")

#define AND_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X80 # andl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X83 # andl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X81 # andl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X82 # andl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X87 # andl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X86 # andl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X85 # andl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X84, 0X24 # andl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X80 # andl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X81 # andl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X82 # andl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X83 # andl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X84, 0X24 # andl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X85 # andl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X86 # andl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X87 # andl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X80 # andl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X83 # andl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X81 # andl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X82 # andl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X87 # andl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X86 # andl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X85 # andl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X84, 0X24 # andl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define AND_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X98 # andl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9B # andl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X99 # andl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9A # andl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9F # andl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9E # andl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9D # andl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X98 # andl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X99 # andl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9A # andl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9B # andl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9D # andl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9E # andl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X9F # andl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X98 # andl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9B # andl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X99 # andl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9A # andl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9F # andl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9E # andl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9D # andl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define AND_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X88 # andl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8B # andl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X89 # andl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8A # andl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8F # andl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8E # andl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8D # andl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X88 # andl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X89 # andl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8A # andl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8B # andl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8D # andl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8E # andl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X8F # andl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X88 # andl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8B # andl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X89 # andl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8A # andl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8F # andl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8E # andl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8D # andl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define AND_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X90 # andl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X93 # andl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X91 # andl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0X92 # andl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X97 # andl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0X96 # andl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X95 # andl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0X94, 0X24 # andl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X90 # andl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X91 # andl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X92 # andl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X93 # andl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X94, 0X24 # andl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X95 # andl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X96 # andl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0X97 # andl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X90 # andl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X93 # andl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X91 # andl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X92 # andl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X97 # andl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X96 # andl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X95 # andl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0X94, 0X24 # andl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define AND_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB8 # andl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBB # andl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB9 # andl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBA # andl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBF # andl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBE # andl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBD # andl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB8 # andl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB9 # andl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBA # andl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBB # andl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBD # andl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBE # andl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XBF # andl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB8 # andl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBB # andl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB9 # andl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBA # andl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBF # andl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBE # andl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBD # andl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define AND_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB0 # andl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB3 # andl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB1 # andl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB2 # andl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB7 # andl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB6 # andl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB5 # andl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB0 # andl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB1 # andl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB2 # andl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB3 # andl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB5 # andl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB6 # andl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XB7 # andl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB0 # andl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB3 # andl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB1 # andl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB2 # andl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB7 # andl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB6 # andl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB5 # andl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define AND_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA8 # andl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAB # andl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA9 # andl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAA # andl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAF # andl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAE # andl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAD # andl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA8 # andl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA9 # andl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAA # andl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAB # andl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAD # andl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAE # andl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XAF # andl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA8 # andl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAB # andl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA9 # andl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAA # andl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAF # andl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAE # andl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAD # andl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define AND_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA0 # andl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA3 # andl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA1 # andl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA2 # andl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA7 # andl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA6 # andl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA5 # andl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA0 # andl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA1 # andl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA2 # andl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA3 # andl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA5 # andl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA6 # andl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X23, 0XA7 # andl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA0 # andl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA3 # andl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA1 # andl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA2 # andl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA7 # andl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA6 # andl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA5 # andl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X80 # andl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X83 # andl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X81 # andl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X82 # andl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X87 # andl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X86 # andl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X85 # andl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X84, 0X24 # andl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X80 # andl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X81 # andl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X82 # andl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X83 # andl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X84, 0X24 # andl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X85 # andl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X86 # andl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X87 # andl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X80 # andl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X83 # andl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X81 # andl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X82 # andl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X87 # andl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X86 # andl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X85 # andl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X84, 0X24 # andl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X88 # andl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8B # andl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X89 # andl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8A # andl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8F # andl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8E # andl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8D # andl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X88 # andl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X89 # andl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8A # andl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8B # andl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8D # andl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8E # andl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X8F # andl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X88 # andl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8B # andl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X89 # andl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8A # andl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8F # andl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8E # andl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8D # andl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X8C, 0X24 # andl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X90 # andl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X93 # andl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X91 # andl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X92 # andl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X97 # andl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X96 # andl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X95 # andl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X94, 0X24 # andl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X90 # andl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X91 # andl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X92 # andl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X93 # andl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X94, 0X24 # andl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X95 # andl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X96 # andl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X97 # andl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X90 # andl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X93 # andl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X91 # andl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X92 # andl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X97 # andl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X96 # andl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X95 # andl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X94, 0X24 # andl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X98 # andl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9B # andl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X99 # andl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9A # andl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9F # andl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9E # andl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9D # andl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X98 # andl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X99 # andl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9A # andl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9B # andl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9D # andl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9E # andl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0X9F # andl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X98 # andl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9B # andl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X99 # andl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9A # andl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9F # andl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9E # andl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9D # andl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0X9C, 0X24 # andl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA0 # andl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA3 # andl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA1 # andl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA2 # andl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA7 # andl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA6 # andl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA5 # andl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA0 # andl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA1 # andl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA2 # andl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA3 # andl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA5 # andl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA6 # andl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA7 # andl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA0 # andl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA3 # andl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA1 # andl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA2 # andl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA7 # andl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA6 # andl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA5 # andl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA4, 0X24 # andl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA8 # andl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAB # andl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XA9 # andl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAA # andl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAF # andl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAE # andl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAD # andl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA8 # andl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XA9 # andl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAA # andl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAB # andl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAD # andl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAE # andl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XAF # andl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA8 # andl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAB # andl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XA9 # andl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAA # andl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAF # andl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAE # andl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAD # andl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XAC, 0X24 # andl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB0 # andl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB3 # andl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB1 # andl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB2 # andl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB7 # andl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB6 # andl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB5 # andl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB0 # andl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB1 # andl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB2 # andl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB3 # andl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB5 # andl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB6 # andl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB7 # andl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB0 # andl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB3 # andl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB1 # andl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB2 # andl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB7 # andl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB6 # andl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB5 # andl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB4, 0X24 # andl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB8 # andl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBB # andl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XB9 # andl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBA # andl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBF # andl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBE # andl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBD # andl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB8 # andl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XB9 # andl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBA # andl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBB # andl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBD # andl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBE # andl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X23, 0XBF # andl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB8 # andl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBB # andl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XB9 # andl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBA # andl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBF # andl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBE # andl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBD # andl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X23, 0XBC, 0X24 # andl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define AND_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X80 # andl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X83 # andl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X81 # andl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X82 # andl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X87 # andl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X86 # andl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X85 # andl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X84, 0X24 # andl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X80 # andl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X81 # andl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X82 # andl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X83 # andl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X84, 0X24 # andl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X85 # andl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X86 # andl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X87 # andl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X80 # andl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X83 # andl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X81 # andl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X82 # andl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X87 # andl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X86 # andl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X85 # andl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X84, 0X24 # andl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X98 # andl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9B # andl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X99 # andl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9A # andl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9F # andl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9E # andl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9D # andl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X9C, 0X24 # andl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X98 # andl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X99 # andl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9A # andl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9B # andl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9C, 0X24 # andl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9D # andl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9E # andl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X9F # andl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X98 # andl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9B # andl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X99 # andl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9A # andl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9F # andl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9E # andl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9D # andl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X9C, 0X24 # andl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X88 # andl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8B # andl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X89 # andl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8A # andl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8F # andl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8E # andl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8D # andl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X8C, 0X24 # andl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X88 # andl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X89 # andl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8A # andl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8B # andl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8C, 0X24 # andl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8D # andl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8E # andl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X8F # andl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X88 # andl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8B # andl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X89 # andl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8A # andl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8F # andl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8E # andl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8D # andl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X8C, 0X24 # andl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X90 # andl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X93 # andl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X91 # andl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0X92 # andl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X97 # andl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0X96 # andl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X95 # andl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0X94, 0X24 # andl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X90 # andl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X91 # andl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X92 # andl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X93 # andl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X94, 0X24 # andl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X95 # andl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X96 # andl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0X97 # andl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X90 # andl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X93 # andl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X91 # andl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X92 # andl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X97 # andl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X96 # andl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X95 # andl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0X94, 0X24 # andl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB8 # andl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBB # andl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB9 # andl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBA # andl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBF # andl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBE # andl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBD # andl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XBC, 0X24 # andl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB8 # andl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB9 # andl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBA # andl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBB # andl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBC, 0X24 # andl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBD # andl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBE # andl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XBF # andl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB8 # andl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBB # andl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB9 # andl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBA # andl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBF # andl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBE # andl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBD # andl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XBC, 0X24 # andl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB0 # andl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB3 # andl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB1 # andl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB2 # andl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB7 # andl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB6 # andl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB5 # andl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XB4, 0X24 # andl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB0 # andl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB1 # andl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB2 # andl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB3 # andl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB4, 0X24 # andl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB5 # andl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB6 # andl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XB7 # andl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB0 # andl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB3 # andl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB1 # andl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB2 # andl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB7 # andl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB6 # andl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB5 # andl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XB4, 0X24 # andl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA8 # andl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAB # andl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA9 # andl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAA # andl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAF # andl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAE # andl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAD # andl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XAC, 0X24 # andl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA8 # andl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA9 # andl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAA # andl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAB # andl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAC, 0X24 # andl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAD # andl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAE # andl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XAF # andl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA8 # andl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAB # andl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA9 # andl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAA # andl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAF # andl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAE # andl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAD # andl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XAC, 0X24 # andl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA0 # andl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA3 # andl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA1 # andl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA2 # andl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA7 # andl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA6 # andl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA5 # andl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X21, 0XA4, 0X24 # andl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA0 # andl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA1 # andl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA2 # andl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA3 # andl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA4, 0X24 # andl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA5 # andl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA6 # andl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X21, 0XA7 # andl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA0 # andl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA3 # andl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA1 # andl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA2 # andl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA7 # andl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA6 # andl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA5 # andl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X21, 0XA4, 0X24 # andl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X80 # andl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X83 # andl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X81 # andl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X82 # andl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X87 # andl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X86 # andl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X85 # andl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X84, 0X24 # andl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X80 # andl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X81 # andl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X82 # andl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X83 # andl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X84, 0X24 # andl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X85 # andl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X86 # andl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X87 # andl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X80 # andl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X83 # andl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X81 # andl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X82 # andl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X87 # andl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X86 # andl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X85 # andl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X84, 0X24 # andl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X88 # andl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8B # andl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X89 # andl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8A # andl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8F # andl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8E # andl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8D # andl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X8C, 0X24 # andl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X88 # andl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X89 # andl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8A # andl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8B # andl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8C, 0X24 # andl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8D # andl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8E # andl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X8F # andl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X88 # andl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8B # andl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X89 # andl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8A # andl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8F # andl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8E # andl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8D # andl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X8C, 0X24 # andl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X90 # andl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X93 # andl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X91 # andl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X92 # andl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X97 # andl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X96 # andl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X95 # andl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X94, 0X24 # andl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X90 # andl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X91 # andl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X92 # andl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X93 # andl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X94, 0X24 # andl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X95 # andl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X96 # andl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X97 # andl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X90 # andl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X93 # andl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X91 # andl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X92 # andl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X97 # andl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X96 # andl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X95 # andl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X94, 0X24 # andl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X98 # andl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9B # andl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X99 # andl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9A # andl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9F # andl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9E # andl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9D # andl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0X9C, 0X24 # andl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X98 # andl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X99 # andl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9A # andl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9B # andl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9C, 0X24 # andl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9D # andl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9E # andl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0X9F # andl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X98 # andl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9B # andl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X99 # andl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9A # andl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9F # andl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9E # andl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9D # andl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0X9C, 0X24 # andl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA0 # andl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA3 # andl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA1 # andl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA2 # andl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA7 # andl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA6 # andl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA5 # andl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA4, 0X24 # andl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA0 # andl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA1 # andl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA2 # andl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA3 # andl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA4, 0X24 # andl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA5 # andl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA6 # andl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA7 # andl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA0 # andl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA3 # andl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA1 # andl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA2 # andl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA7 # andl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA6 # andl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA5 # andl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA4, 0X24 # andl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA8 # andl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAB # andl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XA9 # andl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAA # andl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAF # andl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAE # andl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAD # andl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XAC, 0X24 # andl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA8 # andl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XA9 # andl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAA # andl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAB # andl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAC, 0X24 # andl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAD # andl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAE # andl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XAF # andl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA8 # andl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAB # andl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XA9 # andl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAA # andl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAF # andl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAE # andl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAD # andl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XAC, 0X24 # andl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB0 # andl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB3 # andl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB1 # andl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB2 # andl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB7 # andl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB6 # andl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB5 # andl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB4, 0X24 # andl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB0 # andl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB1 # andl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB2 # andl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB3 # andl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB4, 0X24 # andl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB5 # andl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB6 # andl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB7 # andl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB0 # andl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB3 # andl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB1 # andl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB2 # andl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB7 # andl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB6 # andl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB5 # andl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB4, 0X24 # andl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define AND_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB8 # andl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBB # andl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XB9 # andl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBA # andl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBF # andl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBE # andl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBD # andl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X21, 0XBC, 0X24 # andl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB8 # andl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XB9 # andl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBA # andl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBB # andl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBC, 0X24 # andl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBD # andl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBE # andl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X21, 0XBF # andl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB8 # andl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBB # andl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XB9 # andl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBA # andl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBF # andl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBE # andl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBD # andl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define AND_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X21, 0XBC, 0X24 # andl %r15d, " _(VALUE) "(%esp)")\
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
