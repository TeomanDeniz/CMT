#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define OR_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X05 # orl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X1D # orl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X0D # orl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X15 # orl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X3D # orl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X35 # orl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X2D # orl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X25 # orl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define OR_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X05 # orl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X1D # orl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X0D # orl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X15 # orl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X3D # orl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X35 # orl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X2D # orl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X25 # orl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X00 # orl (%eax), %eax")
#define OR_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X03 # orl (%ebx), %eax")
#define OR_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X01 # orl (%ecx), %eax")
#define OR_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X02 # orl (%edx), %eax")
#define OR_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X07 # orl (%edi), %eax")
#define OR_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X06 # orl (%esi), %eax")
#define OR_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X45, 0X00 # orl (%ebp), %eax")
#define OR_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X04, 0X24 # orl (%esp), %eax")
#define OR_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X07 # orl (%bx), %eax")
#define OR_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X46, 0X00 # orl (%bp), %eax")
#define OR_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X04 # orl (%si), %eax")
#define OR_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X05 # orl (%di), %eax")

#define OR_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X18 # orl (%eax), %ebx")
#define OR_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X1B # orl (%ebx), %ebx")
#define OR_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X19 # orl (%ecx), %ebx")
#define OR_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X1A # orl (%edx), %ebx")
#define OR_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X1F # orl (%edi), %ebx")
#define OR_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X1E # orl (%esi), %ebx")
#define OR_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X5D, 0X00 # orl (%ebp), %ebx")
#define OR_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X1C, 0X24 # orl (%esp), %ebx")
#define OR_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X1F # orl (%bx), %ebx")
#define OR_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X5E, 0X00 # orl (%bp), %ebx")
#define OR_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X1C # orl (%si), %ebx")
#define OR_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X1D # orl (%di), %ebx")

#define OR_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X08 # orl (%eax), %ecx")
#define OR_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X0B # orl (%ebx), %ecx")
#define OR_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X09 # orl (%ecx), %ecx")
#define OR_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X0A # orl (%edx), %ecx")
#define OR_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X0F # orl (%edi), %ecx")
#define OR_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X0E # orl (%esi), %ecx")
#define OR_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X4D, 0X00 # orl (%ebp), %ecx")
#define OR_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X0C, 0X24 # orl (%esp), %ecx")
#define OR_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X0F # orl (%bx), %ecx")
#define OR_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X4E, 0X00 # orl (%bp), %ecx")
#define OR_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X0C # orl (%si), %ecx")
#define OR_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X0D # orl (%di), %ecx")

#define OR_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X10 # orl (%eax), %edx")
#define OR_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X13 # orl (%ebx), %edx")
#define OR_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X11 # orl (%ecx), %edx")
#define OR_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X12 # orl (%edx), %edx")
#define OR_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X17 # orl (%edi), %edx")
#define OR_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X16 # orl (%esi), %edx")
#define OR_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X55, 0X00 # orl (%ebp), %edx")
#define OR_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X14, 0X24 # orl (%esp), %edx")
#define OR_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X17 # orl (%bx), %edx")
#define OR_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X56, 0X00 # orl (%bp), %edx")
#define OR_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X14 # orl (%si), %edx")
#define OR_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X15 # orl (%di), %edx")

#define OR_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X38 # orl (%eax), %edi")
#define OR_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X3B # orl (%ebx), %edi")
#define OR_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X39 # orl (%ecx), %edi")
#define OR_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X3A # orl (%edx), %edi")
#define OR_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X3F # orl (%edi), %edi")
#define OR_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X3E # orl (%esi), %edi")
#define OR_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X7D, 0X00 # orl (%ebp), %edi")
#define OR_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X3C, 0X24 # orl (%esp), %edi")
#define OR_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X3F # orl (%bx), %edi")
#define OR_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X7E, 0X00 # orl (%bp), %edi")
#define OR_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X3C # orl (%si), %edi")
#define OR_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X3D # orl (%di), %edi")

#define OR_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X30 # orl (%eax), %esi")
#define OR_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X33 # orl (%ebx), %esi")
#define OR_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X31 # orl (%ecx), %esi")
#define OR_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X32 # orl (%edx), %esi")
#define OR_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X37 # orl (%edi), %esi")
#define OR_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X36 # orl (%esi), %esi")
#define OR_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X75, 0X00 # orl (%ebp), %esi")
#define OR_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X34, 0X24 # orl (%esp), %esi")
#define OR_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X37 # orl (%bx), %esi")
#define OR_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X76, 0X00 # orl (%bp), %esi")
#define OR_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X34 # orl (%si), %esi")
#define OR_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X35 # orl (%di), %esi")

#define OR_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X28 # orl (%eax), %ebp")
#define OR_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X2B # orl (%ebx), %ebp")
#define OR_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X29 # orl (%ecx), %ebp")
#define OR_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X2A # orl (%edx), %ebp")
#define OR_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X2F # orl (%edi), %ebp")
#define OR_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X2E # orl (%esi), %ebp")
#define OR_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X6D, 0X00 # orl (%ebp), %ebp")
#define OR_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X2C, 0X24 # orl (%esp), %ebp")
#define OR_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X2F # orl (%bx), %ebp")
#define OR_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X6E, 0X00 # orl (%bp), %ebp")
#define OR_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X2C # orl (%si), %ebp")
#define OR_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X2D # orl (%di), %ebp")

#define OR_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X0B, 0X20 # orl (%eax), %esp")
#define OR_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X0B, 0X23 # orl (%ebx), %esp")
#define OR_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X0B, 0X21 # orl (%ecx), %esp")
#define OR_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X0B, 0X22 # orl (%edx), %esp")
#define OR_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X0B, 0X27 # orl (%edi), %esp")
#define OR_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X0B, 0X26 # orl (%esi), %esp")
#define OR_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X0B, 0X65, 0X00 # orl (%ebp), %esp")
#define OR_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X0B, 0X24, 0X24 # orl (%esp), %esp")
#define OR_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X0B, 0X27 # orl (%bx), %esp")
#define OR_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X0B, 0X66, 0X00 # orl (%bp), %esp")
#define OR_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X0B, 0X24 # orl (%si), %esp")
#define OR_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X0B, 0X25 # orl (%di), %esp")

#define OR_EAX_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X00 # orl %eax, (%eax)")
#define OR_EAX_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X03 # orl %eax, (%ebx)")
#define OR_EAX_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X01 # orl %eax, (%ecx)")
#define OR_EAX_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X02 # orl %eax, (%edx)")
#define OR_EAX_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X07 # orl %eax, (%edi)")
#define OR_EAX_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X06 # orl %eax, (%esi)")
#define OR_EAX_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X45, 0X00 # orl %eax, (%ebp)")
#define OR_EAX_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X04, 0X24 # orl %eax, (%esp)")
#define OR_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X07 # orl %eax, (%bx)")
#define OR_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X46, 0X00 # orl %eax, (%bp)")
#define OR_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X04 # orl %eax, (%si)")
#define OR_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X05 # orl %eax, (%di)")

#define OR_EBX_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X18 # orl %ebx, (%eax)")
#define OR_EBX_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X1B # orl %ebx, (%ebx)")
#define OR_EBX_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X19 # orl %ebx, (%ecx)")
#define OR_EBX_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X1A # orl %ebx, (%edx)")
#define OR_EBX_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X1F # orl %ebx, (%edi)")
#define OR_EBX_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X1E # orl %ebx, (%esi)")
#define OR_EBX_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X5D, 0X00 # orl %ebx, (%ebp)")
#define OR_EBX_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X1C, 0X24 # orl %ebx, (%esp)")
#define OR_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X1F # orl %ebx, (%bx)")
#define OR_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X5E, 0X00 # orl %ebx, (%bp)")
#define OR_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X1C # orl %ebx, (%si)")
#define OR_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X1D # orl %ebx, (%di)")

#define OR_ECX_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X08 # orl %ecx, (%eax)")
#define OR_ECX_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X0B # orl %ecx, (%ebx)")
#define OR_ECX_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X09 # orl %ecx, (%ecx)")
#define OR_ECX_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X0A # orl %ecx, (%edx)")
#define OR_ECX_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X0F # orl %ecx, (%edi)")
#define OR_ECX_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X0E # orl %ecx, (%esi)")
#define OR_ECX_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X4D, 0X00 # orl %ecx, (%ebp)")
#define OR_ECX_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X0C, 0X24 # orl %ecx, (%esp)")
#define OR_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X0F # orl %ecx, (%bx)")
#define OR_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X4E, 0X00 # orl %ecx, (%bp)")
#define OR_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X0C # orl %ecx, (%si)")
#define OR_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X0D # orl %ecx, (%di)")

#define OR_EDX_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X10 # orl %edx, (%eax)")
#define OR_EDX_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X13 # orl %edx, (%ebx)")
#define OR_EDX_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X11 # orl %edx, (%ecx)")
#define OR_EDX_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X12 # orl %edx, (%edx)")
#define OR_EDX_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X17 # orl %edx, (%edi)")
#define OR_EDX_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X16 # orl %edx, (%esi)")
#define OR_EDX_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X55, 0X00 # orl %edx, (%ebp)")
#define OR_EDX_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X14, 0X24 # orl %edx, (%esp)")
#define OR_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X17 # orl %edx, (%bx)")
#define OR_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X56, 0X00 # orl %edx, (%bp)")
#define OR_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X14 # orl %edx, (%si)")
#define OR_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X15 # orl %edx, (%di)")

#define OR_EDI_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X38 # orl %edi, (%eax)")
#define OR_EDI_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X3B # orl %edi, (%ebx)")
#define OR_EDI_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X39 # orl %edi, (%ecx)")
#define OR_EDI_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X3A # orl %edi, (%edx)")
#define OR_EDI_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X3F # orl %edi, (%edi)")
#define OR_EDI_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X3E # orl %edi, (%esi)")
#define OR_EDI_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X7D, 0X00 # orl %edi, (%ebp)")
#define OR_EDI_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X3C, 0X24 # orl %edi, (%esp)")
#define OR_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X3F # orl %edi, (%bx)")
#define OR_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X7E, 0X00 # orl %edi, (%bp)")
#define OR_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X3C # orl %edi, (%si)")
#define OR_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X3D # orl %edi, (%di)")

#define OR_ESI_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X30 # orl %esi, (%eax)")
#define OR_ESI_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X33 # orl %esi, (%ebx)")
#define OR_ESI_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X31 # orl %esi, (%ecx)")
#define OR_ESI_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X32 # orl %esi, (%edx)")
#define OR_ESI_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X37 # orl %esi, (%edi)")
#define OR_ESI_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X36 # orl %esi, (%esi)")
#define OR_ESI_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X75, 0X00 # orl %esi, (%ebp)")
#define OR_ESI_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X34, 0X24 # orl %esi, (%esp)")
#define OR_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X37 # orl %esi, (%bx)")
#define OR_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X76, 0X00 # orl %esi, (%bp)")
#define OR_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X34 # orl %esi, (%si)")
#define OR_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X35 # orl %esi, (%di)")

#define OR_EBP_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X28 # orl %ebp, (%eax)")
#define OR_EBP_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X2B # orl %ebp, (%ebx)")
#define OR_EBP_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X29 # orl %ebp, (%ecx)")
#define OR_EBP_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X2A # orl %ebp, (%edx)")
#define OR_EBP_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X2F # orl %ebp, (%edi)")
#define OR_EBP_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X2E # orl %ebp, (%esi)")
#define OR_EBP_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X6D, 0X00 # orl %ebp, (%ebp)")
#define OR_EBP_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X2C, 0X24 # orl %ebp, (%esp)")
#define OR_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X2F # orl %ebp, (%bx)")
#define OR_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X6E, 0X00 # orl %ebp, (%bp)")
#define OR_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X2C # orl %ebp, (%si)")
#define OR_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X2D # orl %ebp, (%di)")

#define OR_ESP_TO_PTR_EAX CMT_ASM(".byte 0X09, 0X20 # orl %esp, (%eax)")
#define OR_ESP_TO_PTR_EBX CMT_ASM(".byte 0X09, 0X23 # orl %esp, (%ebx)")
#define OR_ESP_TO_PTR_ECX CMT_ASM(".byte 0X09, 0X21 # orl %esp, (%ecx)")
#define OR_ESP_TO_PTR_EDX CMT_ASM(".byte 0X09, 0X22 # orl %esp, (%edx)")
#define OR_ESP_TO_PTR_EDI CMT_ASM(".byte 0X09, 0X27 # orl %esp, (%edi)")
#define OR_ESP_TO_PTR_ESI CMT_ASM(".byte 0X09, 0X26 # orl %esp, (%esi)")
#define OR_ESP_TO_PTR_EBP CMT_ASM(".byte 0X09, 0X65, 0X00 # orl %esp, (%ebp)")
#define OR_ESP_TO_PTR_ESP CMT_ASM(".byte 0X09, 0X24, 0X24 # orl %esp, (%esp)")
#define OR_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X09, 0X27 # orl %esp, (%bx)")
#define OR_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X09, 0X66, 0X00 # orl %esp, (%bp)")
#define OR_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X09, 0X24 # orl %esp, (%si)")
#define OR_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X09, 0X25 # orl %esp, (%di)")

#define OR_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X80 # orl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X83 # orl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X81 # orl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X82 # orl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X87 # orl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X86 # orl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X85 # orl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X87 # orl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X86 # orl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X84 # orl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X85 # orl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define OR_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X98 # orl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9B # orl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X99 # orl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9A # orl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9F # orl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9E # orl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9D # orl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9F # orl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9E # orl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9C # orl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9D # orl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define OR_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X88 # orl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8B # orl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X89 # orl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8A # orl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8F # orl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8E # orl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8D # orl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8F # orl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8E # orl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8C # orl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8D # orl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define OR_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X90 # orl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X93 # orl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X91 # orl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X92 # orl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X97 # orl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X96 # orl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X95 # orl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X97 # orl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X96 # orl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X94 # orl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X95 # orl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define OR_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB8 # orl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBB # orl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB9 # orl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBA # orl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBF # orl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBE # orl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBD # orl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBF # orl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBE # orl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBC # orl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBD # orl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define OR_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB0 # orl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB3 # orl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB1 # orl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB2 # orl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB7 # orl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB6 # orl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB5 # orl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB7 # orl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB6 # orl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB4 # orl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB5 # orl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define OR_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA8 # orl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAB # orl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA9 # orl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAA # orl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAF # orl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAE # orl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAD # orl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAF # orl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAE # orl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAC # orl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAD # orl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define OR_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA0 # orl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA3 # orl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA1 # orl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA2 # orl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA7 # orl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA6 # orl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA5 # orl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA7 # orl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA6 # orl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA4 # orl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA5 # orl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define OR_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X80 # orl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X83 # orl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X81 # orl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X82 # orl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X87 # orl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X86 # orl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X85 # orl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X84, 0X24 # orl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X87 # orl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X86 # orl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X84 # orl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X85 # orl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X98 # orl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9B # orl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X99 # orl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9A # orl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9F # orl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9E # orl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9D # orl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9C, 0X24 # orl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9F # orl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9E # orl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9C # orl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9D # orl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X88 # orl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8B # orl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X89 # orl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8A # orl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8F # orl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8E # orl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8D # orl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8C, 0X24 # orl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8F # orl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8E # orl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8C # orl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8D # orl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X90 # orl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X93 # orl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X91 # orl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X92 # orl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X97 # orl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X96 # orl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X95 # orl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X94, 0X24 # orl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X97 # orl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X96 # orl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X94 # orl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X95 # orl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB8 # orl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBB # orl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB9 # orl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBA # orl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBF # orl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBE # orl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBD # orl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBC, 0X24 # orl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBF # orl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBE # orl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBC # orl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBD # orl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB0 # orl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB3 # orl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB1 # orl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB2 # orl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB7 # orl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB6 # orl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB5 # orl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB4, 0X24 # orl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB7 # orl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB6 # orl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB4 # orl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB5 # orl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA8 # orl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAB # orl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA9 # orl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAA # orl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAF # orl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAE # orl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAD # orl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAC, 0X24 # orl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAF # orl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAE # orl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAC # orl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAD # orl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define OR_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA0 # orl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA3 # orl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA1 # orl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA2 # orl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA7 # orl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA6 # orl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA5 # orl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA4, 0X24 # orl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA7 # orl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA6 # orl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA4 # orl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define OR_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA5 # orl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X04, 0X25 # orl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X1C, 0X25 # orl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X0C, 0X25 # orl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X14, 0X25 # orl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X3C, 0X25 # orl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X34, 0X25 # orl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X2C, 0X25 # orl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X24, 0X25 # orl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X04, 0X25 # orl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X0C, 0X25 # orl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X14, 0X25 # orl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X1C, 0X25 # orl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X24, 0X25 # orl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X2C, 0X25 # orl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X34, 0X25 # orl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X3C, 0X25 # orl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define OR_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X04, 0X25 # orl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X1C, 0X25 # orl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X0C, 0X25 # orl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X14, 0X25 # orl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X3C, 0X25 # orl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X34, 0X25 # orl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X2C, 0X25 # orl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X09, 0X24, 0X25 # orl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X04, 0X25 # orl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X0C, 0X25 # orl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X14, 0X25 # orl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X1C, 0X25 # orl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X24, 0X25 # orl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X2C, 0X25 # orl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X34, 0X25 # orl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X3C, 0X25 # orl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define OR_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X00 # orl (%rax), %eax")
#define OR_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X03 # orl (%rbx), %eax")
#define OR_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X01 # orl (%rcx), %eax")
#define OR_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X02 # orl (%rdx), %eax")
#define OR_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X07 # orl (%rdi), %eax")
#define OR_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X06 # orl (%rsi), %eax")
#define OR_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X45, 0X00 # orl (%rbp), %eax")
#define OR_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X04, 0X24 # orl (%rsp), %eax")
#define OR_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X00 # orl (%r8), %eax")
#define OR_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X01 # orl (%r9), %eax")
#define OR_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X02 # orl (%r10), %eax")
#define OR_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X03 # orl (%r11), %eax")
#define OR_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X04, 0X24 # orl (%r12), %eax")
#define OR_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X45, 0X00 # orl (%r13), %eax")
#define OR_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X06 # orl (%r14), %eax")
#define OR_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X07 # orl (%r15), %eax")
#define OR_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X00 # orl (%eax), %eax")
#define OR_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X03 # orl (%ebx), %eax")
#define OR_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X01 # orl (%ecx), %eax")
#define OR_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X02 # orl (%edx), %eax")
#define OR_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X07 # orl (%edi), %eax")
#define OR_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X06 # orl (%esi), %eax")
#define OR_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X45, 0X00 # orl (%ebp), %eax")
#define OR_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X04, 0X24 # orl (%esp), %eax")

#define OR_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X18 # orl (%rax), %ebx")
#define OR_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X1B # orl (%rbx), %ebx")
#define OR_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X19 # orl (%rcx), %ebx")
#define OR_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X1A # orl (%rdx), %ebx")
#define OR_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X1F # orl (%rdi), %ebx")
#define OR_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X1E # orl (%rsi), %ebx")
#define OR_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X5D, 0X00 # orl (%rbp), %ebx")
#define OR_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X1C, 0X24 # orl (%rsp), %ebx")
#define OR_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X18 # orl (%r8), %ebx")
#define OR_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X19 # orl (%r9), %ebx")
#define OR_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X1A # orl (%r10), %ebx")
#define OR_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X1B # orl (%r11), %ebx")
#define OR_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X1C, 0X24 # orl (%r12), %ebx")
#define OR_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X5D, 0X00 # orl (%r13), %ebx")
#define OR_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X1E # orl (%r14), %ebx")
#define OR_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X1F # orl (%r15), %ebx")
#define OR_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X18 # orl (%eax), %ebx")
#define OR_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X1B # orl (%ebx), %ebx")
#define OR_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X19 # orl (%ecx), %ebx")
#define OR_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X1A # orl (%edx), %ebx")
#define OR_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X1F # orl (%edi), %ebx")
#define OR_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X1E # orl (%esi), %ebx")
#define OR_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X5D, 0X00 # orl (%ebp), %ebx")
#define OR_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X1C, 0X24 # orl (%esp), %ebx")

#define OR_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X08 # orl (%rax), %ecx")
#define OR_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X0B # orl (%rbx), %ecx")
#define OR_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X09 # orl (%rcx), %ecx")
#define OR_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X0A # orl (%rdx), %ecx")
#define OR_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X0F # orl (%rdi), %ecx")
#define OR_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X0E # orl (%rsi), %ecx")
#define OR_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X4D, 0X00 # orl (%rbp), %ecx")
#define OR_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X0C, 0X24 # orl (%rsp), %ecx")
#define OR_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X08 # orl (%r8), %ecx")
#define OR_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X09 # orl (%r9), %ecx")
#define OR_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X0A # orl (%r10), %ecx")
#define OR_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X0B # orl (%r11), %ecx")
#define OR_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X0C, 0X24 # orl (%r12), %ecx")
#define OR_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X4D, 0X00 # orl (%r13), %ecx")
#define OR_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X0E # orl (%r14), %ecx")
#define OR_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X0F # orl (%r15), %ecx")
#define OR_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X08 # orl (%eax), %ecx")
#define OR_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X0B # orl (%ebx), %ecx")
#define OR_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X09 # orl (%ecx), %ecx")
#define OR_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X0A # orl (%edx), %ecx")
#define OR_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X0F # orl (%edi), %ecx")
#define OR_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X0E # orl (%esi), %ecx")
#define OR_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X4D, 0X00 # orl (%ebp), %ecx")
#define OR_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X0C, 0X24 # orl (%esp), %ecx")

#define OR_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X10 # orl (%rax), %edx")
#define OR_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X13 # orl (%rbx), %edx")
#define OR_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X11 # orl (%rcx), %edx")
#define OR_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X12 # orl (%rdx), %edx")
#define OR_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X17 # orl (%rdi), %edx")
#define OR_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X16 # orl (%rsi), %edx")
#define OR_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X55, 0X00 # orl (%rbp), %edx")
#define OR_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X14, 0X24 # orl (%rsp), %edx")
#define OR_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X10 # orl (%r8), %edx")
#define OR_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X11 # orl (%r9), %edx")
#define OR_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X12 # orl (%r10), %edx")
#define OR_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X13 # orl (%r11), %edx")
#define OR_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X14, 0X24 # orl (%r12), %edx")
#define OR_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X55, 0X00 # orl (%r13), %edx")
#define OR_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X16 # orl (%r14), %edx")
#define OR_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X17 # orl (%r15), %edx")
#define OR_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X10 # orl (%eax), %edx")
#define OR_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X13 # orl (%ebx), %edx")
#define OR_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X11 # orl (%ecx), %edx")
#define OR_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X12 # orl (%edx), %edx")
#define OR_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X17 # orl (%edi), %edx")
#define OR_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X16 # orl (%esi), %edx")
#define OR_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X55, 0X00 # orl (%ebp), %edx")
#define OR_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X14, 0X24 # orl (%esp), %edx")

#define OR_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X38 # orl (%rax), %edi")
#define OR_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X3B # orl (%rbx), %edi")
#define OR_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X39 # orl (%rcx), %edi")
#define OR_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X3A # orl (%rdx), %edi")
#define OR_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X3F # orl (%rdi), %edi")
#define OR_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X3E # orl (%rsi), %edi")
#define OR_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X7D, 0X00 # orl (%rbp), %edi")
#define OR_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X3C, 0X24 # orl (%rsp), %edi")
#define OR_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X38 # orl (%r8), %edi")
#define OR_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X39 # orl (%r9), %edi")
#define OR_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X3A # orl (%r10), %edi")
#define OR_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X3B # orl (%r11), %edi")
#define OR_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X3C, 0X24 # orl (%r12), %edi")
#define OR_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X7D, 0X00 # orl (%r13), %edi")
#define OR_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X3E # orl (%r14), %edi")
#define OR_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X3F # orl (%r15), %edi")
#define OR_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X38 # orl (%eax), %edi")
#define OR_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X3B # orl (%ebx), %edi")
#define OR_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X39 # orl (%ecx), %edi")
#define OR_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X3A # orl (%edx), %edi")
#define OR_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X3F # orl (%edi), %edi")
#define OR_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X3E # orl (%esi), %edi")
#define OR_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X7D, 0X00 # orl (%ebp), %edi")
#define OR_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X3C, 0X24 # orl (%esp), %edi")

#define OR_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X30 # orl (%rax), %esi")
#define OR_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X33 # orl (%rbx), %esi")
#define OR_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X31 # orl (%rcx), %esi")
#define OR_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X32 # orl (%rdx), %esi")
#define OR_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X37 # orl (%rdi), %esi")
#define OR_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X36 # orl (%rsi), %esi")
#define OR_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X75, 0X00 # orl (%rbp), %esi")
#define OR_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X34, 0X24 # orl (%rsp), %esi")
#define OR_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X30 # orl (%r8), %esi")
#define OR_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X31 # orl (%r9), %esi")
#define OR_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X32 # orl (%r10), %esi")
#define OR_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X33 # orl (%r11), %esi")
#define OR_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X34, 0X24 # orl (%r12), %esi")
#define OR_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X75, 0X00 # orl (%r13), %esi")
#define OR_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X36 # orl (%r14), %esi")
#define OR_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X37 # orl (%r15), %esi")
#define OR_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X30 # orl (%eax), %esi")
#define OR_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X33 # orl (%ebx), %esi")
#define OR_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X31 # orl (%ecx), %esi")
#define OR_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X32 # orl (%edx), %esi")
#define OR_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X37 # orl (%edi), %esi")
#define OR_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X36 # orl (%esi), %esi")
#define OR_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X75, 0X00 # orl (%ebp), %esi")
#define OR_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X34, 0X24 # orl (%esp), %esi")

#define OR_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X28 # orl (%rax), %ebp")
#define OR_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X2B # orl (%rbx), %ebp")
#define OR_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X29 # orl (%rcx), %ebp")
#define OR_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X2A # orl (%rdx), %ebp")
#define OR_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X2F # orl (%rdi), %ebp")
#define OR_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X2E # orl (%rsi), %ebp")
#define OR_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X6D, 0X00 # orl (%rbp), %ebp")
#define OR_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X2C, 0X24 # orl (%rsp), %ebp")
#define OR_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X28 # orl (%r8), %ebp")
#define OR_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X29 # orl (%r9), %ebp")
#define OR_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X2A # orl (%r10), %ebp")
#define OR_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X2B # orl (%r11), %ebp")
#define OR_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X2C, 0X24 # orl (%r12), %ebp")
#define OR_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X6D, 0X00 # orl (%r13), %ebp")
#define OR_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X2E # orl (%r14), %ebp")
#define OR_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X2F # orl (%r15), %ebp")
#define OR_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X28 # orl (%eax), %ebp")
#define OR_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X2B # orl (%ebx), %ebp")
#define OR_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X29 # orl (%ecx), %ebp")
#define OR_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X2A # orl (%edx), %ebp")
#define OR_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X2F # orl (%edi), %ebp")
#define OR_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X2E # orl (%esi), %ebp")
#define OR_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X6D, 0X00 # orl (%ebp), %ebp")
#define OR_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X2C, 0X24 # orl (%esp), %ebp")

#define OR_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X0B, 0X20 # orl (%rax), %esp")
#define OR_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X0B, 0X23 # orl (%rbx), %esp")
#define OR_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X0B, 0X21 # orl (%rcx), %esp")
#define OR_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X0B, 0X22 # orl (%rdx), %esp")
#define OR_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X0B, 0X27 # orl (%rdi), %esp")
#define OR_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X0B, 0X26 # orl (%rsi), %esp")
#define OR_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X0B, 0X65, 0X00 # orl (%rbp), %esp")
#define OR_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X0B, 0X24, 0X24 # orl (%rsp), %esp")
#define OR_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X0B, 0X20 # orl (%r8), %esp")
#define OR_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X0B, 0X21 # orl (%r9), %esp")
#define OR_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X0B, 0X22 # orl (%r10), %esp")
#define OR_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X0B, 0X23 # orl (%r11), %esp")
#define OR_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X0B, 0X24, 0X24 # orl (%r12), %esp")
#define OR_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X0B, 0X65, 0X00 # orl (%r13), %esp")
#define OR_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X0B, 0X26 # orl (%r14), %esp")
#define OR_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X0B, 0X27 # orl (%r15), %esp")
#define OR_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X0B, 0X20 # orl (%eax), %esp")
#define OR_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X0B, 0X23 # orl (%ebx), %esp")
#define OR_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X0B, 0X21 # orl (%ecx), %esp")
#define OR_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X0B, 0X22 # orl (%edx), %esp")
#define OR_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X0B, 0X27 # orl (%edi), %esp")
#define OR_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X0B, 0X26 # orl (%esi), %esp")
#define OR_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X0B, 0X65, 0X00 # orl (%ebp), %esp")
#define OR_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X0B, 0X24, 0X24 # orl (%esp), %esp")

#define OR_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X00 # orl (%rax), %r8d")
#define OR_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X03 # orl (%rbx), %r8d")
#define OR_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X01 # orl (%rcx), %r8d")
#define OR_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X02 # orl (%rdx), %r8d")
#define OR_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X07 # orl (%rdi), %r8d")
#define OR_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X06 # orl (%rsi), %r8d")
#define OR_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X45, 0X00 # orl (%rbp), %r8d")
#define OR_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X04, 0X24 # orl (%rsp), %r8d")
#define OR_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X00 # orl (%r8), %r8d")
#define OR_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X01 # orl (%r9), %r8d")
#define OR_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X02 # orl (%r10), %r8d")
#define OR_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X03 # orl (%r11), %r8d")
#define OR_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X04, 0X24 # orl (%r12), %r8d")
#define OR_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X45, 0X00 # orl (%r13), %r8d")
#define OR_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X06 # orl (%r14), %r8d")
#define OR_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X07 # orl (%r15), %r8d")
#define OR_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X00 # orl (%eax), %r8d")
#define OR_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X03 # orl (%ebx), %r8d")
#define OR_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X01 # orl (%ecx), %r8d")
#define OR_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X02 # orl (%edx), %r8d")
#define OR_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X07 # orl (%edi), %r8d")
#define OR_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X06 # orl (%esi), %r8d")
#define OR_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X45, 0X00 # orl (%ebp), %r8d")
#define OR_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X04, 0X24 # orl (%esp), %r8d")

#define OR_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X08 # orl (%rax), %r9d")
#define OR_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X0B # orl (%rbx), %r9d")
#define OR_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X09 # orl (%rcx), %r9d")
#define OR_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X0A # orl (%rdx), %r9d")
#define OR_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X0F # orl (%rdi), %r9d")
#define OR_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X0E # orl (%rsi), %r9d")
#define OR_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X4D, 0X00 # orl (%rbp), %r9d")
#define OR_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X0C, 0X24 # orl (%rsp), %r9d")
#define OR_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X08 # orl (%r8), %r9d")
#define OR_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X09 # orl (%r9), %r9d")
#define OR_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X0A # orl (%r10), %r9d")
#define OR_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X0B # orl (%r11), %r9d")
#define OR_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X0C, 0X24 # orl (%r12), %r9d")
#define OR_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X4D, 0X00 # orl (%r13), %r9d")
#define OR_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X0E # orl (%r14), %r9d")
#define OR_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X0F # orl (%r15), %r9d")
#define OR_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X08 # orl (%eax), %r9d")
#define OR_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X0B # orl (%ebx), %r9d")
#define OR_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X09 # orl (%ecx), %r9d")
#define OR_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X0A # orl (%edx), %r9d")
#define OR_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X0F # orl (%edi), %r9d")
#define OR_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X0E # orl (%esi), %r9d")
#define OR_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X4D, 0X00 # orl (%ebp), %r9d")
#define OR_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X0C, 0X24 # orl (%esp), %r9d")

#define OR_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X10 # orl (%rax), %r10d")
#define OR_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X13 # orl (%rbx), %r10d")
#define OR_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X11 # orl (%rcx), %r10d")
#define OR_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X12 # orl (%rdx), %r10d")
#define OR_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X17 # orl (%rdi), %r10d")
#define OR_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X16 # orl (%rsi), %r10d")
#define OR_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X55, 0X00 # orl (%rbp), %r10d")
#define OR_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X14, 0X24 # orl (%rsp), %r10d")
#define OR_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X10 # orl (%r8), %r10d")
#define OR_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X11 # orl (%r9), %r10d")
#define OR_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X12 # orl (%r10), %r10d")
#define OR_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X13 # orl (%r11), %r10d")
#define OR_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X14, 0X24 # orl (%r12), %r10d")
#define OR_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X55, 0X00 # orl (%r13), %r10d")
#define OR_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X16 # orl (%r14), %r10d")
#define OR_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X17 # orl (%r15), %r10d")
#define OR_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X10 # orl (%eax), %r10d")
#define OR_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X13 # orl (%ebx), %r10d")
#define OR_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X11 # orl (%ecx), %r10d")
#define OR_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X12 # orl (%edx), %r10d")
#define OR_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X17 # orl (%edi), %r10d")
#define OR_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X16 # orl (%esi), %r10d")
#define OR_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X55, 0X00 # orl (%ebp), %r10d")
#define OR_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X14, 0X24 # orl (%esp), %r10d")

#define OR_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X18 # orl (%rax), %r11d")
#define OR_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X1B # orl (%rbx), %r11d")
#define OR_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X19 # orl (%rcx), %r11d")
#define OR_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X1A # orl (%rdx), %r11d")
#define OR_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X1F # orl (%rdi), %r11d")
#define OR_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X1E # orl (%rsi), %r11d")
#define OR_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X5D, 0X00 # orl (%rbp), %r11d")
#define OR_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X1C, 0X24 # orl (%rsp), %r11d")
#define OR_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X18 # orl (%r8), %r11d")
#define OR_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X19 # orl (%r9), %r11d")
#define OR_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X1A # orl (%r10), %r11d")
#define OR_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X1B # orl (%r11), %r11d")
#define OR_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X1C, 0X24 # orl (%r12), %r11d")
#define OR_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X5D, 0X00 # orl (%r13), %r11d")
#define OR_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X1E # orl (%r14), %r11d")
#define OR_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X1F # orl (%r15), %r11d")
#define OR_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X18 # orl (%eax), %r11d")
#define OR_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X1B # orl (%ebx), %r11d")
#define OR_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X19 # orl (%ecx), %r11d")
#define OR_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X1A # orl (%edx), %r11d")
#define OR_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X1F # orl (%edi), %r11d")
#define OR_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X1E # orl (%esi), %r11d")
#define OR_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X5D, 0X00 # orl (%ebp), %r11d")
#define OR_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X1C, 0X24 # orl (%esp), %r11d")

#define OR_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X20 # orl (%rax), %r12d")
#define OR_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X23 # orl (%rbx), %r12d")
#define OR_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X21 # orl (%rcx), %r12d")
#define OR_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X22 # orl (%rdx), %r12d")
#define OR_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X27 # orl (%rdi), %r12d")
#define OR_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X26 # orl (%rsi), %r12d")
#define OR_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X65, 0X00 # orl (%rbp), %r12d")
#define OR_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X24, 0X24 # orl (%rsp), %r12d")
#define OR_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X20 # orl (%r8), %r12d")
#define OR_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X21 # orl (%r9), %r12d")
#define OR_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X22 # orl (%r10), %r12d")
#define OR_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X23 # orl (%r11), %r12d")
#define OR_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X24, 0X24 # orl (%r12), %r12d")
#define OR_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X65, 0X00 # orl (%r13), %r12d")
#define OR_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X26 # orl (%r14), %r12d")
#define OR_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X27 # orl (%r15), %r12d")
#define OR_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X20 # orl (%eax), %r12d")
#define OR_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X23 # orl (%ebx), %r12d")
#define OR_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X21 # orl (%ecx), %r12d")
#define OR_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X22 # orl (%edx), %r12d")
#define OR_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X27 # orl (%edi), %r12d")
#define OR_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X26 # orl (%esi), %r12d")
#define OR_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X65, 0X00 # orl (%ebp), %r12d")
#define OR_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X24, 0X24 # orl (%esp), %r12d")

#define OR_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X28 # orl (%rax), %r13d")
#define OR_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X2B # orl (%rbx), %r13d")
#define OR_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X29 # orl (%rcx), %r13d")
#define OR_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X2A # orl (%rdx), %r13d")
#define OR_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X2F # orl (%rdi), %r13d")
#define OR_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X2E # orl (%rsi), %r13d")
#define OR_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X6D, 0X00 # orl (%rbp), %r13d")
#define OR_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X2C, 0X24 # orl (%rsp), %r13d")
#define OR_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X28 # orl (%r8), %r13d")
#define OR_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X29 # orl (%r9), %r13d")
#define OR_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X2A # orl (%r10), %r13d")
#define OR_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X2B # orl (%r11), %r13d")
#define OR_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X2C, 0X24 # orl (%r12), %r13d")
#define OR_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X6D, 0X00 # orl (%r13), %r13d")
#define OR_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X2E # orl (%r14), %r13d")
#define OR_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X2F # orl (%r15), %r13d")
#define OR_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X28 # orl (%eax), %r13d")
#define OR_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X2B # orl (%ebx), %r13d")
#define OR_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X29 # orl (%ecx), %r13d")
#define OR_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X2A # orl (%edx), %r13d")
#define OR_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X2F # orl (%edi), %r13d")
#define OR_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X2E # orl (%esi), %r13d")
#define OR_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X6D, 0X00 # orl (%ebp), %r13d")
#define OR_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X2C, 0X24 # orl (%esp), %r13d")

#define OR_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X30 # orl (%rax), %r14d")
#define OR_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X33 # orl (%rbx), %r14d")
#define OR_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X31 # orl (%rcx), %r14d")
#define OR_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X32 # orl (%rdx), %r14d")
#define OR_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X37 # orl (%rdi), %r14d")
#define OR_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X36 # orl (%rsi), %r14d")
#define OR_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X75, 0X00 # orl (%rbp), %r14d")
#define OR_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X34, 0X24 # orl (%rsp), %r14d")
#define OR_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X30 # orl (%r8), %r14d")
#define OR_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X31 # orl (%r9), %r14d")
#define OR_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X32 # orl (%r10), %r14d")
#define OR_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X33 # orl (%r11), %r14d")
#define OR_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X34, 0X24 # orl (%r12), %r14d")
#define OR_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X75, 0X00 # orl (%r13), %r14d")
#define OR_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X36 # orl (%r14), %r14d")
#define OR_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X37 # orl (%r15), %r14d")
#define OR_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X30 # orl (%eax), %r14d")
#define OR_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X33 # orl (%ebx), %r14d")
#define OR_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X31 # orl (%ecx), %r14d")
#define OR_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X32 # orl (%edx), %r14d")
#define OR_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X37 # orl (%edi), %r14d")
#define OR_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X36 # orl (%esi), %r14d")
#define OR_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X75, 0X00 # orl (%ebp), %r14d")
#define OR_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X34, 0X24 # orl (%esp), %r14d")

#define OR_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X0B, 0X38 # orl (%rax), %r15d")
#define OR_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X0B, 0X3B # orl (%rbx), %r15d")
#define OR_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X0B, 0X39 # orl (%rcx), %r15d")
#define OR_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X0B, 0X3A # orl (%rdx), %r15d")
#define OR_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X0B, 0X3F # orl (%rdi), %r15d")
#define OR_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X0B, 0X3E # orl (%rsi), %r15d")
#define OR_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X0B, 0X7D, 0X00 # orl (%rbp), %r15d")
#define OR_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X0B, 0X3C, 0X24 # orl (%rsp), %r15d")
#define OR_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X0B, 0X38 # orl (%r8), %r15d")
#define OR_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X0B, 0X39 # orl (%r9), %r15d")
#define OR_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X0B, 0X3A # orl (%r10), %r15d")
#define OR_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X0B, 0X3B # orl (%r11), %r15d")
#define OR_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X0B, 0X3C, 0X24 # orl (%r12), %r15d")
#define OR_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X0B, 0X7D, 0X00 # orl (%r13), %r15d")
#define OR_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X0B, 0X3E # orl (%r14), %r15d")
#define OR_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X0B, 0X3F # orl (%r15), %r15d")
#define OR_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X38 # orl (%eax), %r15d")
#define OR_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X3B # orl (%ebx), %r15d")
#define OR_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X39 # orl (%ecx), %r15d")
#define OR_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X3A # orl (%edx), %r15d")
#define OR_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X3F # orl (%edi), %r15d")
#define OR_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X3E # orl (%esi), %r15d")
#define OR_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X7D, 0X00 # orl (%ebp), %r15d")
#define OR_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X3C, 0X24 # orl (%esp), %r15d")

#define OR_EAX_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X00 # orl %eax, (%rax)")
#define OR_EAX_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X03 # orl %eax, (%rbx)")
#define OR_EAX_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X01 # orl %eax, (%rcx)")
#define OR_EAX_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X02 # orl %eax, (%rdx)")
#define OR_EAX_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X07 # orl %eax, (%rdi)")
#define OR_EAX_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X06 # orl %eax, (%rsi)")
#define OR_EAX_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X45, 0X00 # orl %eax, (%rbp)")
#define OR_EAX_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X04, 0X24 # orl %eax, (%rsp)")
#define OR_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X00 # orl %eax, (%r8)")
#define OR_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X01 # orl %eax, (%r9)")
#define OR_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X02 # orl %eax, (%r10)")
#define OR_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X03 # orl %eax, (%r11)")
#define OR_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X04, 0X24 # orl %eax, (%r12)")
#define OR_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X45, 0X00 # orl %eax, (%r13)")
#define OR_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X06 # orl %eax, (%r14)")
#define OR_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X07 # orl %eax, (%r15)")
#define OR_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X00 # orl %eax, (%eax)")
#define OR_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X03 # orl %eax, (%ebx)")
#define OR_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X01 # orl %eax, (%ecx)")
#define OR_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X02 # orl %eax, (%edx)")
#define OR_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X07 # orl %eax, (%edi)")
#define OR_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X06 # orl %eax, (%esi)")
#define OR_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X45, 0X00 # orl %eax, (%ebp)")
#define OR_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X04, 0X24 # orl %eax, (%esp)")

#define OR_EBX_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X18 # orl %ebx, (%rax)")
#define OR_EBX_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X1B # orl %ebx, (%rbx)")
#define OR_EBX_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X19 # orl %ebx, (%rcx)")
#define OR_EBX_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X1A # orl %ebx, (%rdx)")
#define OR_EBX_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X1F # orl %ebx, (%rdi)")
#define OR_EBX_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X1E # orl %ebx, (%rsi)")
#define OR_EBX_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X5D, 0X00 # orl %ebx, (%rbp)")
#define OR_EBX_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X1C, 0X24 # orl %ebx, (%rsp)")
#define OR_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X18 # orl %ebx, (%r8)")
#define OR_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X19 # orl %ebx, (%r9)")
#define OR_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X1A # orl %ebx, (%r10)")
#define OR_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X1B # orl %ebx, (%r11)")
#define OR_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X1C, 0X24 # orl %ebx, (%r12)")
#define OR_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X5D, 0X00 # orl %ebx, (%r13)")
#define OR_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X1E # orl %ebx, (%r14)")
#define OR_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X1F # orl %ebx, (%r15)")
#define OR_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X18 # orl %ebx, (%eax)")
#define OR_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X1B # orl %ebx, (%ebx)")
#define OR_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X19 # orl %ebx, (%ecx)")
#define OR_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X1A # orl %ebx, (%edx)")
#define OR_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X1F # orl %ebx, (%edi)")
#define OR_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X1E # orl %ebx, (%esi)")
#define OR_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X5D, 0X00 # orl %ebx, (%ebp)")
#define OR_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X1C, 0X24 # orl %ebx, (%esp)")

#define OR_ECX_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X08 # orl %ecx, (%rax)")
#define OR_ECX_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X0B # orl %ecx, (%rbx)")
#define OR_ECX_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X09 # orl %ecx, (%rcx)")
#define OR_ECX_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X0A # orl %ecx, (%rdx)")
#define OR_ECX_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X0F # orl %ecx, (%rdi)")
#define OR_ECX_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X0E # orl %ecx, (%rsi)")
#define OR_ECX_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X4D, 0X00 # orl %ecx, (%rbp)")
#define OR_ECX_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X0C, 0X24 # orl %ecx, (%rsp)")
#define OR_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X08 # orl %ecx, (%r8)")
#define OR_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X09 # orl %ecx, (%r9)")
#define OR_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X0A # orl %ecx, (%r10)")
#define OR_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X0B # orl %ecx, (%r11)")
#define OR_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X0C, 0X24 # orl %ecx, (%r12)")
#define OR_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X4D, 0X00 # orl %ecx, (%r13)")
#define OR_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X0E # orl %ecx, (%r14)")
#define OR_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X0F # orl %ecx, (%r15)")
#define OR_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X08 # orl %ecx, (%eax)")
#define OR_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X0B # orl %ecx, (%ebx)")
#define OR_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X09 # orl %ecx, (%ecx)")
#define OR_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X0A # orl %ecx, (%edx)")
#define OR_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X0F # orl %ecx, (%edi)")
#define OR_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X0E # orl %ecx, (%esi)")
#define OR_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X4D, 0X00 # orl %ecx, (%ebp)")
#define OR_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X0C, 0X24 # orl %ecx, (%esp)")

#define OR_EDX_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X10 # orl %edx, (%rax)")
#define OR_EDX_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X13 # orl %edx, (%rbx)")
#define OR_EDX_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X11 # orl %edx, (%rcx)")
#define OR_EDX_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X12 # orl %edx, (%rdx)")
#define OR_EDX_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X17 # orl %edx, (%rdi)")
#define OR_EDX_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X16 # orl %edx, (%rsi)")
#define OR_EDX_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X55, 0X00 # orl %edx, (%rbp)")
#define OR_EDX_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X14, 0X24 # orl %edx, (%rsp)")
#define OR_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X10 # orl %edx, (%r8)")
#define OR_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X11 # orl %edx, (%r9)")
#define OR_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X12 # orl %edx, (%r10)")
#define OR_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X13 # orl %edx, (%r11)")
#define OR_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X14, 0X24 # orl %edx, (%r12)")
#define OR_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X55, 0X00 # orl %edx, (%r13)")
#define OR_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X16 # orl %edx, (%r14)")
#define OR_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X17 # orl %edx, (%r15)")
#define OR_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X10 # orl %edx, (%eax)")
#define OR_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X13 # orl %edx, (%ebx)")
#define OR_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X11 # orl %edx, (%ecx)")
#define OR_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X12 # orl %edx, (%edx)")
#define OR_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X17 # orl %edx, (%edi)")
#define OR_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X16 # orl %edx, (%esi)")
#define OR_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X55, 0X00 # orl %edx, (%ebp)")
#define OR_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X14, 0X24 # orl %edx, (%esp)")

#define OR_EDI_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X38 # orl %edi, (%rax)")
#define OR_EDI_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X3B # orl %edi, (%rbx)")
#define OR_EDI_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X39 # orl %edi, (%rcx)")
#define OR_EDI_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X3A # orl %edi, (%rdx)")
#define OR_EDI_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X3F # orl %edi, (%rdi)")
#define OR_EDI_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X3E # orl %edi, (%rsi)")
#define OR_EDI_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X7D, 0X00 # orl %edi, (%rbp)")
#define OR_EDI_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X3C, 0X24 # orl %edi, (%rsp)")
#define OR_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X38 # orl %edi, (%r8)")
#define OR_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X39 # orl %edi, (%r9)")
#define OR_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X3A # orl %edi, (%r10)")
#define OR_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X3B # orl %edi, (%r11)")
#define OR_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X3C, 0X24 # orl %edi, (%r12)")
#define OR_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X7D, 0X00 # orl %edi, (%r13)")
#define OR_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X3E # orl %edi, (%r14)")
#define OR_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X3F # orl %edi, (%r15)")
#define OR_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X38 # orl %edi, (%eax)")
#define OR_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X3B # orl %edi, (%ebx)")
#define OR_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X39 # orl %edi, (%ecx)")
#define OR_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X3A # orl %edi, (%edx)")
#define OR_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X3F # orl %edi, (%edi)")
#define OR_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X3E # orl %edi, (%esi)")
#define OR_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X7D, 0X00 # orl %edi, (%ebp)")
#define OR_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X3C, 0X24 # orl %edi, (%esp)")

#define OR_ESI_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X30 # orl %esi, (%rax)")
#define OR_ESI_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X33 # orl %esi, (%rbx)")
#define OR_ESI_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X31 # orl %esi, (%rcx)")
#define OR_ESI_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X32 # orl %esi, (%rdx)")
#define OR_ESI_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X37 # orl %esi, (%rdi)")
#define OR_ESI_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X36 # orl %esi, (%rsi)")
#define OR_ESI_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X75, 0X00 # orl %esi, (%rbp)")
#define OR_ESI_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X34, 0X24 # orl %esi, (%rsp)")
#define OR_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X30 # orl %esi, (%r8)")
#define OR_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X31 # orl %esi, (%r9)")
#define OR_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X32 # orl %esi, (%r10)")
#define OR_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X33 # orl %esi, (%r11)")
#define OR_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X34, 0X24 # orl %esi, (%r12)")
#define OR_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X75, 0X00 # orl %esi, (%r13)")
#define OR_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X36 # orl %esi, (%r14)")
#define OR_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X37 # orl %esi, (%r15)")
#define OR_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X30 # orl %esi, (%eax)")
#define OR_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X33 # orl %esi, (%ebx)")
#define OR_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X31 # orl %esi, (%ecx)")
#define OR_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X32 # orl %esi, (%edx)")
#define OR_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X37 # orl %esi, (%edi)")
#define OR_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X36 # orl %esi, (%esi)")
#define OR_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X75, 0X00 # orl %esi, (%ebp)")
#define OR_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X34, 0X24 # orl %esi, (%esp)")

#define OR_EBP_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X28 # orl %ebp, (%rax)")
#define OR_EBP_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X2B # orl %ebp, (%rbx)")
#define OR_EBP_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X29 # orl %ebp, (%rcx)")
#define OR_EBP_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X2A # orl %ebp, (%rdx)")
#define OR_EBP_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X2F # orl %ebp, (%rdi)")
#define OR_EBP_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X2E # orl %ebp, (%rsi)")
#define OR_EBP_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X6D, 0X00 # orl %ebp, (%rbp)")
#define OR_EBP_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X2C, 0X24 # orl %ebp, (%rsp)")
#define OR_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X28 # orl %ebp, (%r8)")
#define OR_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X29 # orl %ebp, (%r9)")
#define OR_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X2A # orl %ebp, (%r10)")
#define OR_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X2B # orl %ebp, (%r11)")
#define OR_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X2C, 0X24 # orl %ebp, (%r12)")
#define OR_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X6D, 0X00 # orl %ebp, (%r13)")
#define OR_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X2E # orl %ebp, (%r14)")
#define OR_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X2F # orl %ebp, (%r15)")
#define OR_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X28 # orl %ebp, (%eax)")
#define OR_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X2B # orl %ebp, (%ebx)")
#define OR_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X29 # orl %ebp, (%ecx)")
#define OR_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X2A # orl %ebp, (%edx)")
#define OR_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X2F # orl %ebp, (%edi)")
#define OR_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X2E # orl %ebp, (%esi)")
#define OR_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X6D, 0X00 # orl %ebp, (%ebp)")
#define OR_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X2C, 0X24 # orl %ebp, (%esp)")

#define OR_ESP_TO_PTR_RAX CMT_ASM(".byte 0X09, 0X20 # orl %esp, (%rax)")
#define OR_ESP_TO_PTR_RBX CMT_ASM(".byte 0X09, 0X23 # orl %esp, (%rbx)")
#define OR_ESP_TO_PTR_RCX CMT_ASM(".byte 0X09, 0X21 # orl %esp, (%rcx)")
#define OR_ESP_TO_PTR_RDX CMT_ASM(".byte 0X09, 0X22 # orl %esp, (%rdx)")
#define OR_ESP_TO_PTR_RDI CMT_ASM(".byte 0X09, 0X27 # orl %esp, (%rdi)")
#define OR_ESP_TO_PTR_RSI CMT_ASM(".byte 0X09, 0X26 # orl %esp, (%rsi)")
#define OR_ESP_TO_PTR_RBP CMT_ASM(".byte 0X09, 0X65, 0X00 # orl %esp, (%rbp)")
#define OR_ESP_TO_PTR_RSP CMT_ASM(".byte 0X09, 0X24, 0X24 # orl %esp, (%rsp)")
#define OR_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X09, 0X20 # orl %esp, (%r8)")
#define OR_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X09, 0X21 # orl %esp, (%r9)")
#define OR_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X09, 0X22 # orl %esp, (%r10)")
#define OR_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X09, 0X23 # orl %esp, (%r11)")
#define OR_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X09, 0X24, 0X24 # orl %esp, (%r12)")
#define OR_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X09, 0X65, 0X00 # orl %esp, (%r13)")
#define OR_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X09, 0X26 # orl %esp, (%r14)")
#define OR_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X09, 0X27 # orl %esp, (%r15)")
#define OR_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X09, 0X20 # orl %esp, (%eax)")
#define OR_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X09, 0X23 # orl %esp, (%ebx)")
#define OR_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X09, 0X21 # orl %esp, (%ecx)")
#define OR_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X09, 0X22 # orl %esp, (%edx)")
#define OR_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X09, 0X27 # orl %esp, (%edi)")
#define OR_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X09, 0X26 # orl %esp, (%esi)")
#define OR_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X09, 0X65, 0X00 # orl %esp, (%ebp)")
#define OR_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X09, 0X24, 0X24 # orl %esp, (%esp)")

#define OR_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X00 # orl %r8d, (%rax)")
#define OR_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X03 # orl %r8d, (%rbx)")
#define OR_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X01 # orl %r8d, (%rcx)")
#define OR_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X02 # orl %r8d, (%rdx)")
#define OR_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X07 # orl %r8d, (%rdi)")
#define OR_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X06 # orl %r8d, (%rsi)")
#define OR_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X45, 0X00 # orl %r8d, (%rbp)")
#define OR_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X04, 0X24 # orl %r8d, (%rsp)")
#define OR_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X00 # orl %r8d, (%r8)")
#define OR_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X01 # orl %r8d, (%r9)")
#define OR_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X02 # orl %r8d, (%r10)")
#define OR_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X03 # orl %r8d, (%r11)")
#define OR_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X04, 0X24 # orl %r8d, (%r12)")
#define OR_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X45, 0X00 # orl %r8d, (%r13)")
#define OR_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X06 # orl %r8d, (%r14)")
#define OR_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X07 # orl %r8d, (%r15)")
#define OR_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X00 # orl %r8d, (%eax)")
#define OR_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X03 # orl %r8d, (%ebx)")
#define OR_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X01 # orl %r8d, (%ecx)")
#define OR_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X02 # orl %r8d, (%edx)")
#define OR_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X07 # orl %r8d, (%edi)")
#define OR_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X06 # orl %r8d, (%esi)")
#define OR_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X45, 0X00 # orl %r8d, (%ebp)")
#define OR_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X04, 0X24 # orl %r8d, (%esp)")

#define OR_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X08 # orl %r9d, (%rax)")
#define OR_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X0B # orl %r9d, (%rbx)")
#define OR_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X09 # orl %r9d, (%rcx)")
#define OR_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X0A # orl %r9d, (%rdx)")
#define OR_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X0F # orl %r9d, (%rdi)")
#define OR_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X0E # orl %r9d, (%rsi)")
#define OR_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X4D, 0X00 # orl %r9d, (%rbp)")
#define OR_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X0C, 0X24 # orl %r9d, (%rsp)")
#define OR_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X08 # orl %r9d, (%r8)")
#define OR_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X09 # orl %r9d, (%r9)")
#define OR_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X0A # orl %r9d, (%r10)")
#define OR_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X0B # orl %r9d, (%r11)")
#define OR_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X0C, 0X24 # orl %r9d, (%r12)")
#define OR_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X4D, 0X00 # orl %r9d, (%r13)")
#define OR_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X0E # orl %r9d, (%r14)")
#define OR_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X0F # orl %r9d, (%r15)")
#define OR_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X08 # orl %r9d, (%eax)")
#define OR_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X0B # orl %r9d, (%ebx)")
#define OR_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X09 # orl %r9d, (%ecx)")
#define OR_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X0A # orl %r9d, (%edx)")
#define OR_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X0F # orl %r9d, (%edi)")
#define OR_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X0E # orl %r9d, (%esi)")
#define OR_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X4D, 0X00 # orl %r9d, (%ebp)")
#define OR_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X0C, 0X24 # orl %r9d, (%esp)")

#define OR_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X10 # orl %r10d, (%rax)")
#define OR_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X13 # orl %r10d, (%rbx)")
#define OR_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X11 # orl %r10d, (%rcx)")
#define OR_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X12 # orl %r10d, (%rdx)")
#define OR_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X17 # orl %r10d, (%rdi)")
#define OR_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X16 # orl %r10d, (%rsi)")
#define OR_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X55, 0X00 # orl %r10d, (%rbp)")
#define OR_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X14, 0X24 # orl %r10d, (%rsp)")
#define OR_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X10 # orl %r10d, (%r8)")
#define OR_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X11 # orl %r10d, (%r9)")
#define OR_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X12 # orl %r10d, (%r10)")
#define OR_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X13 # orl %r10d, (%r11)")
#define OR_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X14, 0X24 # orl %r10d, (%r12)")
#define OR_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X55, 0X00 # orl %r10d, (%r13)")
#define OR_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X16 # orl %r10d, (%r14)")
#define OR_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X17 # orl %r10d, (%r15)")
#define OR_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X10 # orl %r10d, (%eax)")
#define OR_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X13 # orl %r10d, (%ebx)")
#define OR_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X11 # orl %r10d, (%ecx)")
#define OR_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X12 # orl %r10d, (%edx)")
#define OR_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X17 # orl %r10d, (%edi)")
#define OR_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X16 # orl %r10d, (%esi)")
#define OR_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X55, 0X00 # orl %r10d, (%ebp)")
#define OR_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X14, 0X24 # orl %r10d, (%esp)")

#define OR_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X18 # orl %r11d, (%rax)")
#define OR_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X1B # orl %r11d, (%rbx)")
#define OR_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X19 # orl %r11d, (%rcx)")
#define OR_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X1A # orl %r11d, (%rdx)")
#define OR_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X1F # orl %r11d, (%rdi)")
#define OR_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X1E # orl %r11d, (%rsi)")
#define OR_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X5D, 0X00 # orl %r11d, (%rbp)")
#define OR_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X1C, 0X24 # orl %r11d, (%rsp)")
#define OR_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X18 # orl %r11d, (%r8)")
#define OR_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X19 # orl %r11d, (%r9)")
#define OR_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X1A # orl %r11d, (%r10)")
#define OR_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X1B # orl %r11d, (%r11)")
#define OR_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X1C, 0X24 # orl %r11d, (%r12)")
#define OR_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X5D, 0X00 # orl %r11d, (%r13)")
#define OR_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X1E # orl %r11d, (%r14)")
#define OR_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X1F # orl %r11d, (%r15)")
#define OR_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X18 # orl %r11d, (%eax)")
#define OR_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X1B # orl %r11d, (%ebx)")
#define OR_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X19 # orl %r11d, (%ecx)")
#define OR_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X1A # orl %r11d, (%edx)")
#define OR_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X1F # orl %r11d, (%edi)")
#define OR_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X1E # orl %r11d, (%esi)")
#define OR_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X5D, 0X00 # orl %r11d, (%ebp)")
#define OR_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X1C, 0X24 # orl %r11d, (%esp)")

#define OR_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X20 # orl %r12d, (%rax)")
#define OR_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X23 # orl %r12d, (%rbx)")
#define OR_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X21 # orl %r12d, (%rcx)")
#define OR_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X22 # orl %r12d, (%rdx)")
#define OR_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X27 # orl %r12d, (%rdi)")
#define OR_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X26 # orl %r12d, (%rsi)")
#define OR_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X65, 0X00 # orl %r12d, (%rbp)")
#define OR_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X24, 0X24 # orl %r12d, (%rsp)")
#define OR_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X20 # orl %r12d, (%r8)")
#define OR_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X21 # orl %r12d, (%r9)")
#define OR_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X22 # orl %r12d, (%r10)")
#define OR_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X23 # orl %r12d, (%r11)")
#define OR_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X24, 0X24 # orl %r12d, (%r12)")
#define OR_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X65, 0X00 # orl %r12d, (%r13)")
#define OR_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X26 # orl %r12d, (%r14)")
#define OR_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X27 # orl %r12d, (%r15)")
#define OR_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X20 # orl %r12d, (%eax)")
#define OR_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X23 # orl %r12d, (%ebx)")
#define OR_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X21 # orl %r12d, (%ecx)")
#define OR_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X22 # orl %r12d, (%edx)")
#define OR_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X27 # orl %r12d, (%edi)")
#define OR_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X26 # orl %r12d, (%esi)")
#define OR_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X65, 0X00 # orl %r12d, (%ebp)")
#define OR_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X24, 0X24 # orl %r12d, (%esp)")

#define OR_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X28 # orl %r13d, (%rax)")
#define OR_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X2B # orl %r13d, (%rbx)")
#define OR_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X29 # orl %r13d, (%rcx)")
#define OR_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X2A # orl %r13d, (%rdx)")
#define OR_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X2F # orl %r13d, (%rdi)")
#define OR_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X2E # orl %r13d, (%rsi)")
#define OR_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X6D, 0X00 # orl %r13d, (%rbp)")
#define OR_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X2C, 0X24 # orl %r13d, (%rsp)")
#define OR_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X28 # orl %r13d, (%r8)")
#define OR_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X29 # orl %r13d, (%r9)")
#define OR_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X2A # orl %r13d, (%r10)")
#define OR_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X2B # orl %r13d, (%r11)")
#define OR_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X2C, 0X24 # orl %r13d, (%r12)")
#define OR_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X6D, 0X00 # orl %r13d, (%r13)")
#define OR_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X2E # orl %r13d, (%r14)")
#define OR_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X2F # orl %r13d, (%r15)")
#define OR_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X28 # orl %r13d, (%eax)")
#define OR_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X2B # orl %r13d, (%ebx)")
#define OR_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X29 # orl %r13d, (%ecx)")
#define OR_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X2A # orl %r13d, (%edx)")
#define OR_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X2F # orl %r13d, (%edi)")
#define OR_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X2E # orl %r13d, (%esi)")
#define OR_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X6D, 0X00 # orl %r13d, (%ebp)")
#define OR_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X2C, 0X24 # orl %r13d, (%esp)")

#define OR_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X30 # orl %r14d, (%rax)")
#define OR_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X33 # orl %r14d, (%rbx)")
#define OR_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X31 # orl %r14d, (%rcx)")
#define OR_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X32 # orl %r14d, (%rdx)")
#define OR_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X37 # orl %r14d, (%rdi)")
#define OR_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X36 # orl %r14d, (%rsi)")
#define OR_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X75, 0X00 # orl %r14d, (%rbp)")
#define OR_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X34, 0X24 # orl %r14d, (%rsp)")
#define OR_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X30 # orl %r14d, (%r8)")
#define OR_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X31 # orl %r14d, (%r9)")
#define OR_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X32 # orl %r14d, (%r10)")
#define OR_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X33 # orl %r14d, (%r11)")
#define OR_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X34, 0X24 # orl %r14d, (%r12)")
#define OR_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X75, 0X00 # orl %r14d, (%r13)")
#define OR_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X36 # orl %r14d, (%r14)")
#define OR_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X37 # orl %r14d, (%r15)")
#define OR_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X30 # orl %r14d, (%eax)")
#define OR_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X33 # orl %r14d, (%ebx)")
#define OR_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X31 # orl %r14d, (%ecx)")
#define OR_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X32 # orl %r14d, (%edx)")
#define OR_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X37 # orl %r14d, (%edi)")
#define OR_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X36 # orl %r14d, (%esi)")
#define OR_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X75, 0X00 # orl %r14d, (%ebp)")
#define OR_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X34, 0X24 # orl %r14d, (%esp)")

#define OR_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X09, 0X38 # orl %r15d, (%rax)")
#define OR_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X09, 0X3B # orl %r15d, (%rbx)")
#define OR_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X09, 0X39 # orl %r15d, (%rcx)")
#define OR_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X09, 0X3A # orl %r15d, (%rdx)")
#define OR_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X09, 0X3F # orl %r15d, (%rdi)")
#define OR_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X09, 0X3E # orl %r15d, (%rsi)")
#define OR_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X09, 0X7D, 0X00 # orl %r15d, (%rbp)")
#define OR_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X09, 0X3C, 0X24 # orl %r15d, (%rsp)")
#define OR_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X09, 0X38 # orl %r15d, (%r8)")
#define OR_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X09, 0X39 # orl %r15d, (%r9)")
#define OR_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X09, 0X3A # orl %r15d, (%r10)")
#define OR_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X09, 0X3B # orl %r15d, (%r11)")
#define OR_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X09, 0X3C, 0X24 # orl %r15d, (%r12)")
#define OR_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X09, 0X7D, 0X00 # orl %r15d, (%r13)")
#define OR_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X09, 0X3E # orl %r15d, (%r14)")
#define OR_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X09, 0X3F # orl %r15d, (%r15)")
#define OR_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X38 # orl %r15d, (%eax)")
#define OR_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X3B # orl %r15d, (%ebx)")
#define OR_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X39 # orl %r15d, (%ecx)")
#define OR_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X09, 0X3A # orl %r15d, (%edx)")
#define OR_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X3F # orl %r15d, (%edi)")
#define OR_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X09, 0X3E # orl %r15d, (%esi)")
#define OR_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X7D, 0X00 # orl %r15d, (%ebp)")
#define OR_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X09, 0X3C, 0X24 # orl %r15d, (%esp)")

#define OR_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X80 # orl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X83 # orl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X81 # orl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X82 # orl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X87 # orl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X86 # orl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X85 # orl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X80 # orl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X81 # orl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X82 # orl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X83 # orl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X85 # orl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X86 # orl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X87 # orl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X80 # orl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X83 # orl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X81 # orl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X82 # orl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X87 # orl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X86 # orl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X85 # orl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define OR_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X98 # orl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9B # orl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X99 # orl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9A # orl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9F # orl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9E # orl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9D # orl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X98 # orl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X99 # orl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9A # orl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9B # orl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9D # orl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9E # orl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X9F # orl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X98 # orl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9B # orl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X99 # orl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9A # orl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9F # orl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9E # orl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9D # orl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define OR_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X88 # orl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8B # orl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X89 # orl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8A # orl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8F # orl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8E # orl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8D # orl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X88 # orl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X89 # orl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8A # orl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8B # orl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8D # orl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8E # orl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X8F # orl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X88 # orl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8B # orl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X89 # orl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8A # orl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8F # orl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8E # orl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8D # orl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define OR_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X90 # orl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X93 # orl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X91 # orl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X92 # orl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X97 # orl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X96 # orl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X95 # orl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X90 # orl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X91 # orl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X92 # orl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X93 # orl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X95 # orl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X96 # orl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0X97 # orl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X90 # orl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X93 # orl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X91 # orl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X92 # orl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X97 # orl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X96 # orl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X95 # orl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define OR_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB8 # orl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBB # orl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB9 # orl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBA # orl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBF # orl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBE # orl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBD # orl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB8 # orl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB9 # orl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBA # orl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBB # orl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBD # orl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBE # orl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XBF # orl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB8 # orl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBB # orl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB9 # orl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBA # orl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBF # orl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBE # orl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBD # orl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define OR_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB0 # orl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB3 # orl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB1 # orl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB2 # orl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB7 # orl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB6 # orl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB5 # orl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB0 # orl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB1 # orl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB2 # orl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB3 # orl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB5 # orl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB6 # orl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XB7 # orl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB0 # orl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB3 # orl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB1 # orl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB2 # orl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB7 # orl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB6 # orl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB5 # orl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define OR_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA8 # orl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAB # orl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA9 # orl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAA # orl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAF # orl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAE # orl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAD # orl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA8 # orl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA9 # orl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAA # orl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAB # orl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAD # orl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAE # orl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XAF # orl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA8 # orl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAB # orl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA9 # orl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAA # orl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAF # orl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAE # orl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAD # orl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define OR_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA0 # orl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA3 # orl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA1 # orl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA2 # orl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA7 # orl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA6 # orl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA5 # orl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA0 # orl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA1 # orl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA2 # orl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA3 # orl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA5 # orl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA6 # orl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X0B, 0XA7 # orl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA0 # orl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA3 # orl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA1 # orl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA2 # orl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA7 # orl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA6 # orl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA5 # orl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X80 # orl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X83 # orl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X81 # orl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X82 # orl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X87 # orl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X86 # orl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X85 # orl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X80 # orl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X81 # orl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X82 # orl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X83 # orl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X85 # orl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X86 # orl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X87 # orl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X80 # orl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X83 # orl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X81 # orl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X82 # orl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X87 # orl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X86 # orl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X85 # orl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X84, 0X24 # orl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X88 # orl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8B # orl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X89 # orl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8A # orl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8F # orl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8E # orl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8D # orl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X88 # orl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X89 # orl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8A # orl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8B # orl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8D # orl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8E # orl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X8F # orl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X88 # orl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8B # orl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X89 # orl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8A # orl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8F # orl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8E # orl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8D # orl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X8C, 0X24 # orl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X90 # orl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X93 # orl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X91 # orl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X92 # orl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X97 # orl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X96 # orl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X95 # orl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X90 # orl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X91 # orl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X92 # orl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X93 # orl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X95 # orl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X96 # orl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X97 # orl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X90 # orl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X93 # orl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X91 # orl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X92 # orl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X97 # orl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X96 # orl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X95 # orl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X94, 0X24 # orl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X98 # orl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9B # orl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X99 # orl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9A # orl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9F # orl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9E # orl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9D # orl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X98 # orl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X99 # orl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9A # orl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9B # orl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9D # orl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9E # orl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0X9F # orl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X98 # orl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9B # orl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X99 # orl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9A # orl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9F # orl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9E # orl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9D # orl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0X9C, 0X24 # orl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA0 # orl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA3 # orl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA1 # orl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA2 # orl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA7 # orl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA6 # orl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA5 # orl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA0 # orl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA1 # orl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA2 # orl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA3 # orl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA5 # orl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA6 # orl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA7 # orl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA0 # orl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA3 # orl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA1 # orl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA2 # orl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA7 # orl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA6 # orl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA5 # orl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA4, 0X24 # orl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA8 # orl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAB # orl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XA9 # orl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAA # orl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAF # orl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAE # orl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAD # orl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA8 # orl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XA9 # orl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAA # orl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAB # orl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAD # orl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAE # orl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XAF # orl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA8 # orl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAB # orl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XA9 # orl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAA # orl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAF # orl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAE # orl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAD # orl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XAC, 0X24 # orl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB0 # orl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB3 # orl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB1 # orl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB2 # orl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB7 # orl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB6 # orl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB5 # orl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB0 # orl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB1 # orl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB2 # orl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB3 # orl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB5 # orl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB6 # orl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB7 # orl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB0 # orl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB3 # orl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB1 # orl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB2 # orl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB7 # orl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB6 # orl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB5 # orl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB4, 0X24 # orl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB8 # orl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBB # orl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XB9 # orl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBA # orl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBF # orl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBE # orl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBD # orl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB8 # orl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XB9 # orl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBA # orl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBB # orl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBD # orl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBE # orl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X0B, 0XBF # orl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB8 # orl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBB # orl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XB9 # orl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBA # orl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBF # orl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBE # orl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBD # orl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X0B, 0XBC, 0X24 # orl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define OR_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X80 # orl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X83 # orl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X81 # orl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X82 # orl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X87 # orl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X86 # orl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X85 # orl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X84, 0X24 # orl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X80 # orl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X81 # orl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X82 # orl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X83 # orl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X84, 0X24 # orl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X85 # orl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X86 # orl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X87 # orl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X80 # orl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X83 # orl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X81 # orl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X82 # orl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X87 # orl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X86 # orl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X85 # orl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X84, 0X24 # orl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X98 # orl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9B # orl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X99 # orl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9A # orl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9F # orl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9E # orl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9D # orl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X9C, 0X24 # orl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X98 # orl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X99 # orl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9A # orl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9B # orl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9C, 0X24 # orl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9D # orl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9E # orl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X9F # orl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X98 # orl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9B # orl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X99 # orl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9A # orl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9F # orl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9E # orl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9D # orl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X9C, 0X24 # orl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X88 # orl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8B # orl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X89 # orl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8A # orl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8F # orl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8E # orl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8D # orl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X8C, 0X24 # orl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X88 # orl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X89 # orl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8A # orl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8B # orl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8C, 0X24 # orl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8D # orl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8E # orl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X8F # orl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X88 # orl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8B # orl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X89 # orl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8A # orl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8F # orl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8E # orl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8D # orl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X8C, 0X24 # orl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X90 # orl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X93 # orl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X91 # orl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0X92 # orl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X97 # orl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0X96 # orl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X95 # orl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0X94, 0X24 # orl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X90 # orl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X91 # orl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X92 # orl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X93 # orl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X94, 0X24 # orl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X95 # orl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X96 # orl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0X97 # orl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X90 # orl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X93 # orl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X91 # orl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X92 # orl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X97 # orl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X96 # orl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X95 # orl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0X94, 0X24 # orl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB8 # orl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBB # orl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB9 # orl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBA # orl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBF # orl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBE # orl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBD # orl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XBC, 0X24 # orl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB8 # orl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB9 # orl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBA # orl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBB # orl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBC, 0X24 # orl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBD # orl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBE # orl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XBF # orl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB8 # orl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBB # orl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB9 # orl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBA # orl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBF # orl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBE # orl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBD # orl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XBC, 0X24 # orl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB0 # orl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB3 # orl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB1 # orl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB2 # orl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB7 # orl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB6 # orl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB5 # orl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XB4, 0X24 # orl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB0 # orl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB1 # orl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB2 # orl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB3 # orl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB4, 0X24 # orl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB5 # orl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB6 # orl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XB7 # orl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB0 # orl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB3 # orl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB1 # orl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB2 # orl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB7 # orl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB6 # orl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB5 # orl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XB4, 0X24 # orl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA8 # orl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAB # orl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA9 # orl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAA # orl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAF # orl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAE # orl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAD # orl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XAC, 0X24 # orl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA8 # orl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA9 # orl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAA # orl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAB # orl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAC, 0X24 # orl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAD # orl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAE # orl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XAF # orl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA8 # orl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAB # orl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA9 # orl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAA # orl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAF # orl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAE # orl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAD # orl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XAC, 0X24 # orl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA0 # orl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA3 # orl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA1 # orl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA2 # orl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA7 # orl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA6 # orl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA5 # orl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X09, 0XA4, 0X24 # orl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA0 # orl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA1 # orl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA2 # orl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA3 # orl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA4, 0X24 # orl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA5 # orl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA6 # orl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X09, 0XA7 # orl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA0 # orl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA3 # orl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA1 # orl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA2 # orl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA7 # orl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA6 # orl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA5 # orl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X09, 0XA4, 0X24 # orl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X80 # orl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X83 # orl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X81 # orl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X82 # orl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X87 # orl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X86 # orl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X85 # orl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X84, 0X24 # orl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X80 # orl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X81 # orl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X82 # orl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X83 # orl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X84, 0X24 # orl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X85 # orl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X86 # orl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X87 # orl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X80 # orl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X83 # orl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X81 # orl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X82 # orl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X87 # orl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X86 # orl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X85 # orl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X84, 0X24 # orl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X88 # orl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8B # orl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X89 # orl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8A # orl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8F # orl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8E # orl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8D # orl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X8C, 0X24 # orl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X88 # orl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X89 # orl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8A # orl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8B # orl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8C, 0X24 # orl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8D # orl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8E # orl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X8F # orl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X88 # orl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8B # orl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X89 # orl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8A # orl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8F # orl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8E # orl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8D # orl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X8C, 0X24 # orl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X90 # orl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X93 # orl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X91 # orl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X92 # orl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X97 # orl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X96 # orl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X95 # orl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X94, 0X24 # orl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X90 # orl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X91 # orl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X92 # orl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X93 # orl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X94, 0X24 # orl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X95 # orl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X96 # orl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X97 # orl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X90 # orl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X93 # orl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X91 # orl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X92 # orl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X97 # orl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X96 # orl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X95 # orl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X94, 0X24 # orl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X98 # orl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9B # orl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X99 # orl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9A # orl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9F # orl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9E # orl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9D # orl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0X9C, 0X24 # orl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X98 # orl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X99 # orl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9A # orl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9B # orl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9C, 0X24 # orl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9D # orl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9E # orl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0X9F # orl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X98 # orl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9B # orl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X99 # orl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9A # orl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9F # orl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9E # orl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9D # orl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0X9C, 0X24 # orl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA0 # orl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA3 # orl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA1 # orl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA2 # orl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA7 # orl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA6 # orl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA5 # orl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA4, 0X24 # orl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA0 # orl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA1 # orl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA2 # orl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA3 # orl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA4, 0X24 # orl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA5 # orl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA6 # orl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA7 # orl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA0 # orl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA3 # orl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA1 # orl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA2 # orl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA7 # orl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA6 # orl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA5 # orl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA4, 0X24 # orl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA8 # orl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAB # orl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XA9 # orl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAA # orl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAF # orl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAE # orl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAD # orl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XAC, 0X24 # orl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA8 # orl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XA9 # orl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAA # orl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAB # orl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAC, 0X24 # orl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAD # orl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAE # orl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XAF # orl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA8 # orl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAB # orl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XA9 # orl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAA # orl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAF # orl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAE # orl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAD # orl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XAC, 0X24 # orl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB0 # orl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB3 # orl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB1 # orl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB2 # orl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB7 # orl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB6 # orl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB5 # orl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB4, 0X24 # orl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB0 # orl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB1 # orl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB2 # orl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB3 # orl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB4, 0X24 # orl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB5 # orl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB6 # orl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB7 # orl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB0 # orl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB3 # orl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB1 # orl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB2 # orl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB7 # orl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB6 # orl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB5 # orl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB4, 0X24 # orl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define OR_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB8 # orl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBB # orl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XB9 # orl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBA # orl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBF # orl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBE # orl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBD # orl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X09, 0XBC, 0X24 # orl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB8 # orl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XB9 # orl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBA # orl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBB # orl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBC, 0X24 # orl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBD # orl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBE # orl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X09, 0XBF # orl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB8 # orl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBB # orl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XB9 # orl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBA # orl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBF # orl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBE # orl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBD # orl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define OR_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X09, 0XBC, 0X24 # orl %r15d, " _(VALUE) "(%esp)")\
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
