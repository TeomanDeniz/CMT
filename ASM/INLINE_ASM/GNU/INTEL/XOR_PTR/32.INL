#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define XOR_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X05 # xorl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X1D # xorl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X0D # xorl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X15 # xorl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X3D # xorl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X35 # xorl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X2D # xorl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X25 # xorl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X05 # xorl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X1D # xorl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X0D # xorl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X15 # xorl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X3D # xorl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X35 # xorl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X2D # xorl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X25 # xorl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X00 # xorl (%eax), %eax")
#define XOR_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X03 # xorl (%ebx), %eax")
#define XOR_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X01 # xorl (%ecx), %eax")
#define XOR_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X02 # xorl (%edx), %eax")
#define XOR_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X07 # xorl (%edi), %eax")
#define XOR_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X06 # xorl (%esi), %eax")
#define XOR_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X45, 0X00 # xorl (%ebp), %eax")
#define XOR_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X04, 0X24 # xorl (%esp), %eax")
#define XOR_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X07 # xorl (%bx), %eax")
#define XOR_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X46, 0X00 # xorl (%bp), %eax")
#define XOR_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X04 # xorl (%si), %eax")
#define XOR_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X05 # xorl (%di), %eax")

#define XOR_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X18 # xorl (%eax), %ebx")
#define XOR_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X1B # xorl (%ebx), %ebx")
#define XOR_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X19 # xorl (%ecx), %ebx")
#define XOR_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X1A # xorl (%edx), %ebx")
#define XOR_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X1F # xorl (%edi), %ebx")
#define XOR_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X1E # xorl (%esi), %ebx")
#define XOR_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X5D, 0X00 # xorl (%ebp), %ebx")
#define XOR_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X1C, 0X24 # xorl (%esp), %ebx")
#define XOR_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X1F # xorl (%bx), %ebx")
#define XOR_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X5E, 0X00 # xorl (%bp), %ebx")
#define XOR_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X1C # xorl (%si), %ebx")
#define XOR_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X1D # xorl (%di), %ebx")

#define XOR_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X08 # xorl (%eax), %ecx")
#define XOR_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X0B # xorl (%ebx), %ecx")
#define XOR_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X09 # xorl (%ecx), %ecx")
#define XOR_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X0A # xorl (%edx), %ecx")
#define XOR_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X0F # xorl (%edi), %ecx")
#define XOR_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X0E # xorl (%esi), %ecx")
#define XOR_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X4D, 0X00 # xorl (%ebp), %ecx")
#define XOR_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X0C, 0X24 # xorl (%esp), %ecx")
#define XOR_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X0F # xorl (%bx), %ecx")
#define XOR_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X4E, 0X00 # xorl (%bp), %ecx")
#define XOR_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X0C # xorl (%si), %ecx")
#define XOR_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X0D # xorl (%di), %ecx")

#define XOR_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X10 # xorl (%eax), %edx")
#define XOR_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X13 # xorl (%ebx), %edx")
#define XOR_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X11 # xorl (%ecx), %edx")
#define XOR_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X12 # xorl (%edx), %edx")
#define XOR_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X17 # xorl (%edi), %edx")
#define XOR_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X16 # xorl (%esi), %edx")
#define XOR_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X55, 0X00 # xorl (%ebp), %edx")
#define XOR_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X14, 0X24 # xorl (%esp), %edx")
#define XOR_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X17 # xorl (%bx), %edx")
#define XOR_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X56, 0X00 # xorl (%bp), %edx")
#define XOR_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X14 # xorl (%si), %edx")
#define XOR_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X15 # xorl (%di), %edx")

#define XOR_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X38 # xorl (%eax), %edi")
#define XOR_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X3B # xorl (%ebx), %edi")
#define XOR_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X39 # xorl (%ecx), %edi")
#define XOR_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X3A # xorl (%edx), %edi")
#define XOR_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X3F # xorl (%edi), %edi")
#define XOR_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X3E # xorl (%esi), %edi")
#define XOR_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X7D, 0X00 # xorl (%ebp), %edi")
#define XOR_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X3C, 0X24 # xorl (%esp), %edi")
#define XOR_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X3F # xorl (%bx), %edi")
#define XOR_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X7E, 0X00 # xorl (%bp), %edi")
#define XOR_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X3C # xorl (%si), %edi")
#define XOR_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X3D # xorl (%di), %edi")

#define XOR_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X30 # xorl (%eax), %esi")
#define XOR_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X33 # xorl (%ebx), %esi")
#define XOR_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X31 # xorl (%ecx), %esi")
#define XOR_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X32 # xorl (%edx), %esi")
#define XOR_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X37 # xorl (%edi), %esi")
#define XOR_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X36 # xorl (%esi), %esi")
#define XOR_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X75, 0X00 # xorl (%ebp), %esi")
#define XOR_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X34, 0X24 # xorl (%esp), %esi")
#define XOR_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X37 # xorl (%bx), %esi")
#define XOR_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X76, 0X00 # xorl (%bp), %esi")
#define XOR_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X34 # xorl (%si), %esi")
#define XOR_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X35 # xorl (%di), %esi")

#define XOR_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X28 # xorl (%eax), %ebp")
#define XOR_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X2B # xorl (%ebx), %ebp")
#define XOR_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X29 # xorl (%ecx), %ebp")
#define XOR_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X2A # xorl (%edx), %ebp")
#define XOR_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X2F # xorl (%edi), %ebp")
#define XOR_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X2E # xorl (%esi), %ebp")
#define XOR_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X6D, 0X00 # xorl (%ebp), %ebp")
#define XOR_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X2C, 0X24 # xorl (%esp), %ebp")
#define XOR_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X2F # xorl (%bx), %ebp")
#define XOR_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X6E, 0X00 # xorl (%bp), %ebp")
#define XOR_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X2C # xorl (%si), %ebp")
#define XOR_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X2D # xorl (%di), %ebp")

#define XOR_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X33, 0X20 # xorl (%eax), %esp")
#define XOR_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X33, 0X23 # xorl (%ebx), %esp")
#define XOR_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X33, 0X21 # xorl (%ecx), %esp")
#define XOR_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X33, 0X22 # xorl (%edx), %esp")
#define XOR_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X33, 0X27 # xorl (%edi), %esp")
#define XOR_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X33, 0X26 # xorl (%esi), %esp")
#define XOR_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X33, 0X65, 0X00 # xorl (%ebp), %esp")
#define XOR_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X33, 0X24, 0X24 # xorl (%esp), %esp")
#define XOR_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X33, 0X27 # xorl (%bx), %esp")
#define XOR_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X33, 0X66, 0X00 # xorl (%bp), %esp")
#define XOR_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X33, 0X24 # xorl (%si), %esp")
#define XOR_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X33, 0X25 # xorl (%di), %esp")

#define XOR_EAX_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X00 # xorl %eax, (%eax)")
#define XOR_EAX_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X03 # xorl %eax, (%ebx)")
#define XOR_EAX_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X01 # xorl %eax, (%ecx)")
#define XOR_EAX_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X02 # xorl %eax, (%edx)")
#define XOR_EAX_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X07 # xorl %eax, (%edi)")
#define XOR_EAX_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X06 # xorl %eax, (%esi)")
#define XOR_EAX_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X45, 0X00 # xorl %eax, (%ebp)")
#define XOR_EAX_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X04, 0X24 # xorl %eax, (%esp)")
#define XOR_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X07 # xorl %eax, (%bx)")
#define XOR_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X46, 0X00 # xorl %eax, (%bp)")
#define XOR_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X04 # xorl %eax, (%si)")
#define XOR_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X05 # xorl %eax, (%di)")

#define XOR_EBX_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X18 # xorl %ebx, (%eax)")
#define XOR_EBX_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X1B # xorl %ebx, (%ebx)")
#define XOR_EBX_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X19 # xorl %ebx, (%ecx)")
#define XOR_EBX_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X1A # xorl %ebx, (%edx)")
#define XOR_EBX_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X1F # xorl %ebx, (%edi)")
#define XOR_EBX_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X1E # xorl %ebx, (%esi)")
#define XOR_EBX_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X5D, 0X00 # xorl %ebx, (%ebp)")
#define XOR_EBX_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X1C, 0X24 # xorl %ebx, (%esp)")
#define XOR_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X1F # xorl %ebx, (%bx)")
#define XOR_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X5E, 0X00 # xorl %ebx, (%bp)")
#define XOR_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X1C # xorl %ebx, (%si)")
#define XOR_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X1D # xorl %ebx, (%di)")

#define XOR_ECX_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X08 # xorl %ecx, (%eax)")
#define XOR_ECX_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X0B # xorl %ecx, (%ebx)")
#define XOR_ECX_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X09 # xorl %ecx, (%ecx)")
#define XOR_ECX_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X0A # xorl %ecx, (%edx)")
#define XOR_ECX_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X0F # xorl %ecx, (%edi)")
#define XOR_ECX_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X0E # xorl %ecx, (%esi)")
#define XOR_ECX_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X4D, 0X00 # xorl %ecx, (%ebp)")
#define XOR_ECX_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X0C, 0X24 # xorl %ecx, (%esp)")
#define XOR_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X0F # xorl %ecx, (%bx)")
#define XOR_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X4E, 0X00 # xorl %ecx, (%bp)")
#define XOR_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X0C # xorl %ecx, (%si)")
#define XOR_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X0D # xorl %ecx, (%di)")

#define XOR_EDX_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X10 # xorl %edx, (%eax)")
#define XOR_EDX_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X13 # xorl %edx, (%ebx)")
#define XOR_EDX_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X11 # xorl %edx, (%ecx)")
#define XOR_EDX_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X12 # xorl %edx, (%edx)")
#define XOR_EDX_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X17 # xorl %edx, (%edi)")
#define XOR_EDX_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X16 # xorl %edx, (%esi)")
#define XOR_EDX_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X55, 0X00 # xorl %edx, (%ebp)")
#define XOR_EDX_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X14, 0X24 # xorl %edx, (%esp)")
#define XOR_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X17 # xorl %edx, (%bx)")
#define XOR_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X56, 0X00 # xorl %edx, (%bp)")
#define XOR_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X14 # xorl %edx, (%si)")
#define XOR_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X15 # xorl %edx, (%di)")

#define XOR_EDI_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X38 # xorl %edi, (%eax)")
#define XOR_EDI_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X3B # xorl %edi, (%ebx)")
#define XOR_EDI_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X39 # xorl %edi, (%ecx)")
#define XOR_EDI_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X3A # xorl %edi, (%edx)")
#define XOR_EDI_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X3F # xorl %edi, (%edi)")
#define XOR_EDI_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X3E # xorl %edi, (%esi)")
#define XOR_EDI_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X7D, 0X00 # xorl %edi, (%ebp)")
#define XOR_EDI_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X3C, 0X24 # xorl %edi, (%esp)")
#define XOR_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X3F # xorl %edi, (%bx)")
#define XOR_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X7E, 0X00 # xorl %edi, (%bp)")
#define XOR_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X3C # xorl %edi, (%si)")
#define XOR_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X3D # xorl %edi, (%di)")

#define XOR_ESI_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X30 # xorl %esi, (%eax)")
#define XOR_ESI_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X33 # xorl %esi, (%ebx)")
#define XOR_ESI_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X31 # xorl %esi, (%ecx)")
#define XOR_ESI_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X32 # xorl %esi, (%edx)")
#define XOR_ESI_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X37 # xorl %esi, (%edi)")
#define XOR_ESI_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X36 # xorl %esi, (%esi)")
#define XOR_ESI_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X75, 0X00 # xorl %esi, (%ebp)")
#define XOR_ESI_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X34, 0X24 # xorl %esi, (%esp)")
#define XOR_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X37 # xorl %esi, (%bx)")
#define XOR_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X76, 0X00 # xorl %esi, (%bp)")
#define XOR_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X34 # xorl %esi, (%si)")
#define XOR_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X35 # xorl %esi, (%di)")

#define XOR_EBP_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X28 # xorl %ebp, (%eax)")
#define XOR_EBP_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X2B # xorl %ebp, (%ebx)")
#define XOR_EBP_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X29 # xorl %ebp, (%ecx)")
#define XOR_EBP_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X2A # xorl %ebp, (%edx)")
#define XOR_EBP_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X2F # xorl %ebp, (%edi)")
#define XOR_EBP_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X2E # xorl %ebp, (%esi)")
#define XOR_EBP_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X6D, 0X00 # xorl %ebp, (%ebp)")
#define XOR_EBP_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X2C, 0X24 # xorl %ebp, (%esp)")
#define XOR_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X2F # xorl %ebp, (%bx)")
#define XOR_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X6E, 0X00 # xorl %ebp, (%bp)")
#define XOR_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X2C # xorl %ebp, (%si)")
#define XOR_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X2D # xorl %ebp, (%di)")

#define XOR_ESP_TO_PTR_EAX CMT_ASM(".byte 0X31, 0X20 # xorl %esp, (%eax)")
#define XOR_ESP_TO_PTR_EBX CMT_ASM(".byte 0X31, 0X23 # xorl %esp, (%ebx)")
#define XOR_ESP_TO_PTR_ECX CMT_ASM(".byte 0X31, 0X21 # xorl %esp, (%ecx)")
#define XOR_ESP_TO_PTR_EDX CMT_ASM(".byte 0X31, 0X22 # xorl %esp, (%edx)")
#define XOR_ESP_TO_PTR_EDI CMT_ASM(".byte 0X31, 0X27 # xorl %esp, (%edi)")
#define XOR_ESP_TO_PTR_ESI CMT_ASM(".byte 0X31, 0X26 # xorl %esp, (%esi)")
#define XOR_ESP_TO_PTR_EBP CMT_ASM(".byte 0X31, 0X65, 0X00 # xorl %esp, (%ebp)")
#define XOR_ESP_TO_PTR_ESP CMT_ASM(".byte 0X31, 0X24, 0X24 # xorl %esp, (%esp)")
#define XOR_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X31, 0X27 # xorl %esp, (%bx)")
#define XOR_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X31, 0X66, 0X00 # xorl %esp, (%bp)")
#define XOR_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X31, 0X24 # xorl %esp, (%si)")
#define XOR_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X31, 0X25 # xorl %esp, (%di)")

#define XOR_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X80 # xorl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X83 # xorl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X81 # xorl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X82 # xorl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X87 # xorl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X86 # xorl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X85 # xorl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X87 # xorl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X86 # xorl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X84 # xorl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X85 # xorl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X98 # xorl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9B # xorl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X99 # xorl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9A # xorl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9F # xorl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9E # xorl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9D # xorl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9F # xorl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9E # xorl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9C # xorl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9D # xorl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X88 # xorl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8B # xorl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X89 # xorl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8A # xorl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8F # xorl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8E # xorl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8D # xorl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8F # xorl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8E # xorl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8C # xorl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8D # xorl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X90 # xorl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X93 # xorl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X91 # xorl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X92 # xorl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X97 # xorl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X96 # xorl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X95 # xorl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X97 # xorl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X96 # xorl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X94 # xorl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X95 # xorl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB8 # xorl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBB # xorl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB9 # xorl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBA # xorl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBF # xorl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBE # xorl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBD # xorl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBF # xorl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBE # xorl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBC # xorl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBD # xorl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB0 # xorl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB3 # xorl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB1 # xorl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB2 # xorl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB7 # xorl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB6 # xorl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB5 # xorl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB7 # xorl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB6 # xorl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB4 # xorl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB5 # xorl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA8 # xorl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAB # xorl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA9 # xorl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAA # xorl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAF # xorl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAE # xorl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAD # xorl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAF # xorl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAE # xorl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAC # xorl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAD # xorl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA0 # xorl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA3 # xorl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA1 # xorl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA2 # xorl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA7 # xorl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA6 # xorl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA5 # xorl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA7 # xorl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA6 # xorl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA4 # xorl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA5 # xorl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X80 # xorl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X83 # xorl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X81 # xorl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X82 # xorl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X87 # xorl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X86 # xorl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X85 # xorl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X84, 0X24 # xorl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X87 # xorl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X86 # xorl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X84 # xorl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X85 # xorl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X98 # xorl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9B # xorl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X99 # xorl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9A # xorl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9F # xorl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9E # xorl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9D # xorl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9C, 0X24 # xorl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9F # xorl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9E # xorl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9C # xorl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9D # xorl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X88 # xorl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8B # xorl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X89 # xorl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8A # xorl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8F # xorl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8E # xorl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8D # xorl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8C, 0X24 # xorl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8F # xorl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8E # xorl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8C # xorl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8D # xorl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X90 # xorl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X93 # xorl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X91 # xorl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X92 # xorl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X97 # xorl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X96 # xorl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X95 # xorl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X94, 0X24 # xorl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X97 # xorl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X96 # xorl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X94 # xorl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X95 # xorl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB8 # xorl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBB # xorl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB9 # xorl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBA # xorl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBF # xorl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBE # xorl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBD # xorl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBC, 0X24 # xorl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBF # xorl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBE # xorl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBC # xorl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBD # xorl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB0 # xorl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB3 # xorl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB1 # xorl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB2 # xorl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB7 # xorl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB6 # xorl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB5 # xorl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB4, 0X24 # xorl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB7 # xorl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB6 # xorl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB4 # xorl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB5 # xorl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA8 # xorl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAB # xorl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA9 # xorl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAA # xorl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAF # xorl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAE # xorl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAD # xorl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAC, 0X24 # xorl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAF # xorl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAE # xorl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAC # xorl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAD # xorl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XOR_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA0 # xorl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA3 # xorl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA1 # xorl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA2 # xorl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA7 # xorl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA6 # xorl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA5 # xorl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA4, 0X24 # xorl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA7 # xorl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA6 # xorl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA4 # xorl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XOR_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA5 # xorl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X04, 0X25 # xorl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X1C, 0X25 # xorl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X0C, 0X25 # xorl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X14, 0X25 # xorl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X3C, 0X25 # xorl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X34, 0X25 # xorl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X2C, 0X25 # xorl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X33, 0X24, 0X25 # xorl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X04, 0X25 # xorl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X0C, 0X25 # xorl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X14, 0X25 # xorl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X1C, 0X25 # xorl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X24, 0X25 # xorl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X2C, 0X25 # xorl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X34, 0X25 # xorl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X3C, 0X25 # xorl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X04, 0X25 # xorl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X1C, 0X25 # xorl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X0C, 0X25 # xorl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X14, 0X25 # xorl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X3C, 0X25 # xorl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X34, 0X25 # xorl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X2C, 0X25 # xorl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X31, 0X24, 0X25 # xorl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X04, 0X25 # xorl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X0C, 0X25 # xorl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X14, 0X25 # xorl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X1C, 0X25 # xorl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X24, 0X25 # xorl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X2C, 0X25 # xorl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X34, 0X25 # xorl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X3C, 0X25 # xorl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X00 # xorl (%rax), %eax")
#define XOR_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X03 # xorl (%rbx), %eax")
#define XOR_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X01 # xorl (%rcx), %eax")
#define XOR_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X02 # xorl (%rdx), %eax")
#define XOR_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X07 # xorl (%rdi), %eax")
#define XOR_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X06 # xorl (%rsi), %eax")
#define XOR_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X45, 0X00 # xorl (%rbp), %eax")
#define XOR_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X04, 0X24 # xorl (%rsp), %eax")
#define XOR_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X00 # xorl (%r8), %eax")
#define XOR_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X01 # xorl (%r9), %eax")
#define XOR_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X02 # xorl (%r10), %eax")
#define XOR_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X03 # xorl (%r11), %eax")
#define XOR_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X04, 0X24 # xorl (%r12), %eax")
#define XOR_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X45, 0X00 # xorl (%r13), %eax")
#define XOR_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X06 # xorl (%r14), %eax")
#define XOR_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X07 # xorl (%r15), %eax")
#define XOR_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X00 # xorl (%eax), %eax")
#define XOR_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X03 # xorl (%ebx), %eax")
#define XOR_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X01 # xorl (%ecx), %eax")
#define XOR_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X02 # xorl (%edx), %eax")
#define XOR_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X07 # xorl (%edi), %eax")
#define XOR_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X06 # xorl (%esi), %eax")
#define XOR_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X45, 0X00 # xorl (%ebp), %eax")
#define XOR_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X04, 0X24 # xorl (%esp), %eax")

#define XOR_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X18 # xorl (%rax), %ebx")
#define XOR_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X1B # xorl (%rbx), %ebx")
#define XOR_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X19 # xorl (%rcx), %ebx")
#define XOR_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X1A # xorl (%rdx), %ebx")
#define XOR_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X1F # xorl (%rdi), %ebx")
#define XOR_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X1E # xorl (%rsi), %ebx")
#define XOR_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X5D, 0X00 # xorl (%rbp), %ebx")
#define XOR_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X1C, 0X24 # xorl (%rsp), %ebx")
#define XOR_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X18 # xorl (%r8), %ebx")
#define XOR_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X19 # xorl (%r9), %ebx")
#define XOR_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X1A # xorl (%r10), %ebx")
#define XOR_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X1B # xorl (%r11), %ebx")
#define XOR_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X1C, 0X24 # xorl (%r12), %ebx")
#define XOR_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X5D, 0X00 # xorl (%r13), %ebx")
#define XOR_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X1E # xorl (%r14), %ebx")
#define XOR_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X1F # xorl (%r15), %ebx")
#define XOR_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X18 # xorl (%eax), %ebx")
#define XOR_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X1B # xorl (%ebx), %ebx")
#define XOR_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X19 # xorl (%ecx), %ebx")
#define XOR_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X1A # xorl (%edx), %ebx")
#define XOR_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X1F # xorl (%edi), %ebx")
#define XOR_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X1E # xorl (%esi), %ebx")
#define XOR_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X5D, 0X00 # xorl (%ebp), %ebx")
#define XOR_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X1C, 0X24 # xorl (%esp), %ebx")

#define XOR_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X08 # xorl (%rax), %ecx")
#define XOR_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X0B # xorl (%rbx), %ecx")
#define XOR_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X09 # xorl (%rcx), %ecx")
#define XOR_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X0A # xorl (%rdx), %ecx")
#define XOR_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X0F # xorl (%rdi), %ecx")
#define XOR_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X0E # xorl (%rsi), %ecx")
#define XOR_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X4D, 0X00 # xorl (%rbp), %ecx")
#define XOR_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X0C, 0X24 # xorl (%rsp), %ecx")
#define XOR_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X08 # xorl (%r8), %ecx")
#define XOR_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X09 # xorl (%r9), %ecx")
#define XOR_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X0A # xorl (%r10), %ecx")
#define XOR_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X0B # xorl (%r11), %ecx")
#define XOR_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X0C, 0X24 # xorl (%r12), %ecx")
#define XOR_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X4D, 0X00 # xorl (%r13), %ecx")
#define XOR_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X0E # xorl (%r14), %ecx")
#define XOR_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X0F # xorl (%r15), %ecx")
#define XOR_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X08 # xorl (%eax), %ecx")
#define XOR_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X0B # xorl (%ebx), %ecx")
#define XOR_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X09 # xorl (%ecx), %ecx")
#define XOR_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X0A # xorl (%edx), %ecx")
#define XOR_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X0F # xorl (%edi), %ecx")
#define XOR_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X0E # xorl (%esi), %ecx")
#define XOR_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X4D, 0X00 # xorl (%ebp), %ecx")
#define XOR_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X0C, 0X24 # xorl (%esp), %ecx")

#define XOR_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X10 # xorl (%rax), %edx")
#define XOR_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X13 # xorl (%rbx), %edx")
#define XOR_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X11 # xorl (%rcx), %edx")
#define XOR_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X12 # xorl (%rdx), %edx")
#define XOR_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X17 # xorl (%rdi), %edx")
#define XOR_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X16 # xorl (%rsi), %edx")
#define XOR_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X55, 0X00 # xorl (%rbp), %edx")
#define XOR_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X14, 0X24 # xorl (%rsp), %edx")
#define XOR_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X10 # xorl (%r8), %edx")
#define XOR_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X11 # xorl (%r9), %edx")
#define XOR_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X12 # xorl (%r10), %edx")
#define XOR_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X13 # xorl (%r11), %edx")
#define XOR_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X14, 0X24 # xorl (%r12), %edx")
#define XOR_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X55, 0X00 # xorl (%r13), %edx")
#define XOR_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X16 # xorl (%r14), %edx")
#define XOR_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X17 # xorl (%r15), %edx")
#define XOR_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X10 # xorl (%eax), %edx")
#define XOR_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X13 # xorl (%ebx), %edx")
#define XOR_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X11 # xorl (%ecx), %edx")
#define XOR_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X12 # xorl (%edx), %edx")
#define XOR_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X17 # xorl (%edi), %edx")
#define XOR_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X16 # xorl (%esi), %edx")
#define XOR_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X55, 0X00 # xorl (%ebp), %edx")
#define XOR_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X14, 0X24 # xorl (%esp), %edx")

#define XOR_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X38 # xorl (%rax), %edi")
#define XOR_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X3B # xorl (%rbx), %edi")
#define XOR_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X39 # xorl (%rcx), %edi")
#define XOR_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X3A # xorl (%rdx), %edi")
#define XOR_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X3F # xorl (%rdi), %edi")
#define XOR_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X3E # xorl (%rsi), %edi")
#define XOR_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X7D, 0X00 # xorl (%rbp), %edi")
#define XOR_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X3C, 0X24 # xorl (%rsp), %edi")
#define XOR_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X38 # xorl (%r8), %edi")
#define XOR_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X39 # xorl (%r9), %edi")
#define XOR_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X3A # xorl (%r10), %edi")
#define XOR_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X3B # xorl (%r11), %edi")
#define XOR_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X3C, 0X24 # xorl (%r12), %edi")
#define XOR_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X7D, 0X00 # xorl (%r13), %edi")
#define XOR_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X3E # xorl (%r14), %edi")
#define XOR_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X3F # xorl (%r15), %edi")
#define XOR_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X38 # xorl (%eax), %edi")
#define XOR_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X3B # xorl (%ebx), %edi")
#define XOR_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X39 # xorl (%ecx), %edi")
#define XOR_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X3A # xorl (%edx), %edi")
#define XOR_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X3F # xorl (%edi), %edi")
#define XOR_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X3E # xorl (%esi), %edi")
#define XOR_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X7D, 0X00 # xorl (%ebp), %edi")
#define XOR_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X3C, 0X24 # xorl (%esp), %edi")

#define XOR_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X30 # xorl (%rax), %esi")
#define XOR_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X33 # xorl (%rbx), %esi")
#define XOR_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X31 # xorl (%rcx), %esi")
#define XOR_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X32 # xorl (%rdx), %esi")
#define XOR_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X37 # xorl (%rdi), %esi")
#define XOR_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X36 # xorl (%rsi), %esi")
#define XOR_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X75, 0X00 # xorl (%rbp), %esi")
#define XOR_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X34, 0X24 # xorl (%rsp), %esi")
#define XOR_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X30 # xorl (%r8), %esi")
#define XOR_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X31 # xorl (%r9), %esi")
#define XOR_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X32 # xorl (%r10), %esi")
#define XOR_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X33 # xorl (%r11), %esi")
#define XOR_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X34, 0X24 # xorl (%r12), %esi")
#define XOR_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X75, 0X00 # xorl (%r13), %esi")
#define XOR_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X36 # xorl (%r14), %esi")
#define XOR_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X37 # xorl (%r15), %esi")
#define XOR_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X30 # xorl (%eax), %esi")
#define XOR_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X33 # xorl (%ebx), %esi")
#define XOR_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X31 # xorl (%ecx), %esi")
#define XOR_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X32 # xorl (%edx), %esi")
#define XOR_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X37 # xorl (%edi), %esi")
#define XOR_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X36 # xorl (%esi), %esi")
#define XOR_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X75, 0X00 # xorl (%ebp), %esi")
#define XOR_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X34, 0X24 # xorl (%esp), %esi")

#define XOR_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X28 # xorl (%rax), %ebp")
#define XOR_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X2B # xorl (%rbx), %ebp")
#define XOR_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X29 # xorl (%rcx), %ebp")
#define XOR_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X2A # xorl (%rdx), %ebp")
#define XOR_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X2F # xorl (%rdi), %ebp")
#define XOR_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X2E # xorl (%rsi), %ebp")
#define XOR_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X6D, 0X00 # xorl (%rbp), %ebp")
#define XOR_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X2C, 0X24 # xorl (%rsp), %ebp")
#define XOR_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X28 # xorl (%r8), %ebp")
#define XOR_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X29 # xorl (%r9), %ebp")
#define XOR_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X2A # xorl (%r10), %ebp")
#define XOR_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X2B # xorl (%r11), %ebp")
#define XOR_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X2C, 0X24 # xorl (%r12), %ebp")
#define XOR_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X6D, 0X00 # xorl (%r13), %ebp")
#define XOR_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X2E # xorl (%r14), %ebp")
#define XOR_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X2F # xorl (%r15), %ebp")
#define XOR_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X28 # xorl (%eax), %ebp")
#define XOR_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X2B # xorl (%ebx), %ebp")
#define XOR_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X29 # xorl (%ecx), %ebp")
#define XOR_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X2A # xorl (%edx), %ebp")
#define XOR_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X2F # xorl (%edi), %ebp")
#define XOR_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X2E # xorl (%esi), %ebp")
#define XOR_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X6D, 0X00 # xorl (%ebp), %ebp")
#define XOR_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X2C, 0X24 # xorl (%esp), %ebp")

#define XOR_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X33, 0X20 # xorl (%rax), %esp")
#define XOR_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X33, 0X23 # xorl (%rbx), %esp")
#define XOR_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X33, 0X21 # xorl (%rcx), %esp")
#define XOR_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X33, 0X22 # xorl (%rdx), %esp")
#define XOR_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X33, 0X27 # xorl (%rdi), %esp")
#define XOR_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X33, 0X26 # xorl (%rsi), %esp")
#define XOR_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X33, 0X65, 0X00 # xorl (%rbp), %esp")
#define XOR_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X33, 0X24, 0X24 # xorl (%rsp), %esp")
#define XOR_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X33, 0X20 # xorl (%r8), %esp")
#define XOR_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X33, 0X21 # xorl (%r9), %esp")
#define XOR_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X33, 0X22 # xorl (%r10), %esp")
#define XOR_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X33, 0X23 # xorl (%r11), %esp")
#define XOR_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X33, 0X24, 0X24 # xorl (%r12), %esp")
#define XOR_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X33, 0X65, 0X00 # xorl (%r13), %esp")
#define XOR_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X33, 0X26 # xorl (%r14), %esp")
#define XOR_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X33, 0X27 # xorl (%r15), %esp")
#define XOR_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X33, 0X20 # xorl (%eax), %esp")
#define XOR_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X33, 0X23 # xorl (%ebx), %esp")
#define XOR_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X33, 0X21 # xorl (%ecx), %esp")
#define XOR_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X33, 0X22 # xorl (%edx), %esp")
#define XOR_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X33, 0X27 # xorl (%edi), %esp")
#define XOR_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X33, 0X26 # xorl (%esi), %esp")
#define XOR_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X33, 0X65, 0X00 # xorl (%ebp), %esp")
#define XOR_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X33, 0X24, 0X24 # xorl (%esp), %esp")

#define XOR_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X00 # xorl (%rax), %r8d")
#define XOR_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X03 # xorl (%rbx), %r8d")
#define XOR_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X01 # xorl (%rcx), %r8d")
#define XOR_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X02 # xorl (%rdx), %r8d")
#define XOR_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X07 # xorl (%rdi), %r8d")
#define XOR_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X06 # xorl (%rsi), %r8d")
#define XOR_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X45, 0X00 # xorl (%rbp), %r8d")
#define XOR_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X04, 0X24 # xorl (%rsp), %r8d")
#define XOR_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X00 # xorl (%r8), %r8d")
#define XOR_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X01 # xorl (%r9), %r8d")
#define XOR_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X02 # xorl (%r10), %r8d")
#define XOR_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X03 # xorl (%r11), %r8d")
#define XOR_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X04, 0X24 # xorl (%r12), %r8d")
#define XOR_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X45, 0X00 # xorl (%r13), %r8d")
#define XOR_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X06 # xorl (%r14), %r8d")
#define XOR_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X07 # xorl (%r15), %r8d")
#define XOR_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X00 # xorl (%eax), %r8d")
#define XOR_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X03 # xorl (%ebx), %r8d")
#define XOR_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X01 # xorl (%ecx), %r8d")
#define XOR_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X02 # xorl (%edx), %r8d")
#define XOR_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X07 # xorl (%edi), %r8d")
#define XOR_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X06 # xorl (%esi), %r8d")
#define XOR_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X45, 0X00 # xorl (%ebp), %r8d")
#define XOR_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X04, 0X24 # xorl (%esp), %r8d")

#define XOR_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X08 # xorl (%rax), %r9d")
#define XOR_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X0B # xorl (%rbx), %r9d")
#define XOR_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X09 # xorl (%rcx), %r9d")
#define XOR_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X0A # xorl (%rdx), %r9d")
#define XOR_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X0F # xorl (%rdi), %r9d")
#define XOR_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X0E # xorl (%rsi), %r9d")
#define XOR_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X4D, 0X00 # xorl (%rbp), %r9d")
#define XOR_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X0C, 0X24 # xorl (%rsp), %r9d")
#define XOR_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X08 # xorl (%r8), %r9d")
#define XOR_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X09 # xorl (%r9), %r9d")
#define XOR_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X0A # xorl (%r10), %r9d")
#define XOR_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X0B # xorl (%r11), %r9d")
#define XOR_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X0C, 0X24 # xorl (%r12), %r9d")
#define XOR_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X4D, 0X00 # xorl (%r13), %r9d")
#define XOR_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X0E # xorl (%r14), %r9d")
#define XOR_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X0F # xorl (%r15), %r9d")
#define XOR_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X08 # xorl (%eax), %r9d")
#define XOR_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X0B # xorl (%ebx), %r9d")
#define XOR_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X09 # xorl (%ecx), %r9d")
#define XOR_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X0A # xorl (%edx), %r9d")
#define XOR_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X0F # xorl (%edi), %r9d")
#define XOR_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X0E # xorl (%esi), %r9d")
#define XOR_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X4D, 0X00 # xorl (%ebp), %r9d")
#define XOR_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X0C, 0X24 # xorl (%esp), %r9d")

#define XOR_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X10 # xorl (%rax), %r10d")
#define XOR_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X13 # xorl (%rbx), %r10d")
#define XOR_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X11 # xorl (%rcx), %r10d")
#define XOR_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X12 # xorl (%rdx), %r10d")
#define XOR_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X17 # xorl (%rdi), %r10d")
#define XOR_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X16 # xorl (%rsi), %r10d")
#define XOR_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X55, 0X00 # xorl (%rbp), %r10d")
#define XOR_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X14, 0X24 # xorl (%rsp), %r10d")
#define XOR_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X10 # xorl (%r8), %r10d")
#define XOR_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X11 # xorl (%r9), %r10d")
#define XOR_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X12 # xorl (%r10), %r10d")
#define XOR_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X13 # xorl (%r11), %r10d")
#define XOR_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X14, 0X24 # xorl (%r12), %r10d")
#define XOR_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X55, 0X00 # xorl (%r13), %r10d")
#define XOR_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X16 # xorl (%r14), %r10d")
#define XOR_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X17 # xorl (%r15), %r10d")
#define XOR_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X10 # xorl (%eax), %r10d")
#define XOR_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X13 # xorl (%ebx), %r10d")
#define XOR_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X11 # xorl (%ecx), %r10d")
#define XOR_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X12 # xorl (%edx), %r10d")
#define XOR_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X17 # xorl (%edi), %r10d")
#define XOR_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X16 # xorl (%esi), %r10d")
#define XOR_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X55, 0X00 # xorl (%ebp), %r10d")
#define XOR_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X14, 0X24 # xorl (%esp), %r10d")

#define XOR_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X18 # xorl (%rax), %r11d")
#define XOR_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X1B # xorl (%rbx), %r11d")
#define XOR_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X19 # xorl (%rcx), %r11d")
#define XOR_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X1A # xorl (%rdx), %r11d")
#define XOR_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X1F # xorl (%rdi), %r11d")
#define XOR_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X1E # xorl (%rsi), %r11d")
#define XOR_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X5D, 0X00 # xorl (%rbp), %r11d")
#define XOR_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X1C, 0X24 # xorl (%rsp), %r11d")
#define XOR_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X18 # xorl (%r8), %r11d")
#define XOR_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X19 # xorl (%r9), %r11d")
#define XOR_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X1A # xorl (%r10), %r11d")
#define XOR_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X1B # xorl (%r11), %r11d")
#define XOR_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X1C, 0X24 # xorl (%r12), %r11d")
#define XOR_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X5D, 0X00 # xorl (%r13), %r11d")
#define XOR_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X1E # xorl (%r14), %r11d")
#define XOR_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X1F # xorl (%r15), %r11d")
#define XOR_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X18 # xorl (%eax), %r11d")
#define XOR_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X1B # xorl (%ebx), %r11d")
#define XOR_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X19 # xorl (%ecx), %r11d")
#define XOR_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X1A # xorl (%edx), %r11d")
#define XOR_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X1F # xorl (%edi), %r11d")
#define XOR_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X1E # xorl (%esi), %r11d")
#define XOR_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X5D, 0X00 # xorl (%ebp), %r11d")
#define XOR_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X1C, 0X24 # xorl (%esp), %r11d")

#define XOR_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X20 # xorl (%rax), %r12d")
#define XOR_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X23 # xorl (%rbx), %r12d")
#define XOR_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X21 # xorl (%rcx), %r12d")
#define XOR_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X22 # xorl (%rdx), %r12d")
#define XOR_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X27 # xorl (%rdi), %r12d")
#define XOR_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X26 # xorl (%rsi), %r12d")
#define XOR_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X65, 0X00 # xorl (%rbp), %r12d")
#define XOR_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X24, 0X24 # xorl (%rsp), %r12d")
#define XOR_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X20 # xorl (%r8), %r12d")
#define XOR_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X21 # xorl (%r9), %r12d")
#define XOR_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X22 # xorl (%r10), %r12d")
#define XOR_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X23 # xorl (%r11), %r12d")
#define XOR_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X24, 0X24 # xorl (%r12), %r12d")
#define XOR_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X65, 0X00 # xorl (%r13), %r12d")
#define XOR_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X26 # xorl (%r14), %r12d")
#define XOR_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X27 # xorl (%r15), %r12d")
#define XOR_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X20 # xorl (%eax), %r12d")
#define XOR_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X23 # xorl (%ebx), %r12d")
#define XOR_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X21 # xorl (%ecx), %r12d")
#define XOR_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X22 # xorl (%edx), %r12d")
#define XOR_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X27 # xorl (%edi), %r12d")
#define XOR_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X26 # xorl (%esi), %r12d")
#define XOR_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X65, 0X00 # xorl (%ebp), %r12d")
#define XOR_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X24, 0X24 # xorl (%esp), %r12d")

#define XOR_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X28 # xorl (%rax), %r13d")
#define XOR_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X2B # xorl (%rbx), %r13d")
#define XOR_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X29 # xorl (%rcx), %r13d")
#define XOR_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X2A # xorl (%rdx), %r13d")
#define XOR_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X2F # xorl (%rdi), %r13d")
#define XOR_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X2E # xorl (%rsi), %r13d")
#define XOR_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X6D, 0X00 # xorl (%rbp), %r13d")
#define XOR_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X2C, 0X24 # xorl (%rsp), %r13d")
#define XOR_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X28 # xorl (%r8), %r13d")
#define XOR_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X29 # xorl (%r9), %r13d")
#define XOR_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X2A # xorl (%r10), %r13d")
#define XOR_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X2B # xorl (%r11), %r13d")
#define XOR_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X2C, 0X24 # xorl (%r12), %r13d")
#define XOR_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X6D, 0X00 # xorl (%r13), %r13d")
#define XOR_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X2E # xorl (%r14), %r13d")
#define XOR_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X2F # xorl (%r15), %r13d")
#define XOR_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X28 # xorl (%eax), %r13d")
#define XOR_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X2B # xorl (%ebx), %r13d")
#define XOR_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X29 # xorl (%ecx), %r13d")
#define XOR_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X2A # xorl (%edx), %r13d")
#define XOR_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X2F # xorl (%edi), %r13d")
#define XOR_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X2E # xorl (%esi), %r13d")
#define XOR_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X6D, 0X00 # xorl (%ebp), %r13d")
#define XOR_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X2C, 0X24 # xorl (%esp), %r13d")

#define XOR_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X30 # xorl (%rax), %r14d")
#define XOR_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X33 # xorl (%rbx), %r14d")
#define XOR_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X31 # xorl (%rcx), %r14d")
#define XOR_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X32 # xorl (%rdx), %r14d")
#define XOR_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X37 # xorl (%rdi), %r14d")
#define XOR_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X36 # xorl (%rsi), %r14d")
#define XOR_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X75, 0X00 # xorl (%rbp), %r14d")
#define XOR_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X34, 0X24 # xorl (%rsp), %r14d")
#define XOR_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X30 # xorl (%r8), %r14d")
#define XOR_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X31 # xorl (%r9), %r14d")
#define XOR_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X32 # xorl (%r10), %r14d")
#define XOR_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X33 # xorl (%r11), %r14d")
#define XOR_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X34, 0X24 # xorl (%r12), %r14d")
#define XOR_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X75, 0X00 # xorl (%r13), %r14d")
#define XOR_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X36 # xorl (%r14), %r14d")
#define XOR_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X37 # xorl (%r15), %r14d")
#define XOR_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X30 # xorl (%eax), %r14d")
#define XOR_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X33 # xorl (%ebx), %r14d")
#define XOR_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X31 # xorl (%ecx), %r14d")
#define XOR_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X32 # xorl (%edx), %r14d")
#define XOR_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X37 # xorl (%edi), %r14d")
#define XOR_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X36 # xorl (%esi), %r14d")
#define XOR_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X75, 0X00 # xorl (%ebp), %r14d")
#define XOR_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X34, 0X24 # xorl (%esp), %r14d")

#define XOR_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X33, 0X38 # xorl (%rax), %r15d")
#define XOR_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X33, 0X3B # xorl (%rbx), %r15d")
#define XOR_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X33, 0X39 # xorl (%rcx), %r15d")
#define XOR_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X33, 0X3A # xorl (%rdx), %r15d")
#define XOR_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X33, 0X3F # xorl (%rdi), %r15d")
#define XOR_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X33, 0X3E # xorl (%rsi), %r15d")
#define XOR_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X33, 0X7D, 0X00 # xorl (%rbp), %r15d")
#define XOR_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X33, 0X3C, 0X24 # xorl (%rsp), %r15d")
#define XOR_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X33, 0X38 # xorl (%r8), %r15d")
#define XOR_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X33, 0X39 # xorl (%r9), %r15d")
#define XOR_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X33, 0X3A # xorl (%r10), %r15d")
#define XOR_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X33, 0X3B # xorl (%r11), %r15d")
#define XOR_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X33, 0X3C, 0X24 # xorl (%r12), %r15d")
#define XOR_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X33, 0X7D, 0X00 # xorl (%r13), %r15d")
#define XOR_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X33, 0X3E # xorl (%r14), %r15d")
#define XOR_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X33, 0X3F # xorl (%r15), %r15d")
#define XOR_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X38 # xorl (%eax), %r15d")
#define XOR_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X3B # xorl (%ebx), %r15d")
#define XOR_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X39 # xorl (%ecx), %r15d")
#define XOR_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X33, 0X3A # xorl (%edx), %r15d")
#define XOR_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X3F # xorl (%edi), %r15d")
#define XOR_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X33, 0X3E # xorl (%esi), %r15d")
#define XOR_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X7D, 0X00 # xorl (%ebp), %r15d")
#define XOR_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X33, 0X3C, 0X24 # xorl (%esp), %r15d")

#define XOR_EAX_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X00 # xorl %eax, (%rax)")
#define XOR_EAX_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X03 # xorl %eax, (%rbx)")
#define XOR_EAX_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X01 # xorl %eax, (%rcx)")
#define XOR_EAX_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X02 # xorl %eax, (%rdx)")
#define XOR_EAX_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X07 # xorl %eax, (%rdi)")
#define XOR_EAX_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X06 # xorl %eax, (%rsi)")
#define XOR_EAX_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X45, 0X00 # xorl %eax, (%rbp)")
#define XOR_EAX_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X04, 0X24 # xorl %eax, (%rsp)")
#define XOR_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X00 # xorl %eax, (%r8)")
#define XOR_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X01 # xorl %eax, (%r9)")
#define XOR_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X02 # xorl %eax, (%r10)")
#define XOR_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X03 # xorl %eax, (%r11)")
#define XOR_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X04, 0X24 # xorl %eax, (%r12)")
#define XOR_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X45, 0X00 # xorl %eax, (%r13)")
#define XOR_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X06 # xorl %eax, (%r14)")
#define XOR_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X07 # xorl %eax, (%r15)")
#define XOR_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X00 # xorl %eax, (%eax)")
#define XOR_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X03 # xorl %eax, (%ebx)")
#define XOR_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X01 # xorl %eax, (%ecx)")
#define XOR_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X02 # xorl %eax, (%edx)")
#define XOR_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X07 # xorl %eax, (%edi)")
#define XOR_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X06 # xorl %eax, (%esi)")
#define XOR_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X45, 0X00 # xorl %eax, (%ebp)")
#define XOR_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X04, 0X24 # xorl %eax, (%esp)")

#define XOR_EBX_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X18 # xorl %ebx, (%rax)")
#define XOR_EBX_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X1B # xorl %ebx, (%rbx)")
#define XOR_EBX_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X19 # xorl %ebx, (%rcx)")
#define XOR_EBX_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X1A # xorl %ebx, (%rdx)")
#define XOR_EBX_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X1F # xorl %ebx, (%rdi)")
#define XOR_EBX_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X1E # xorl %ebx, (%rsi)")
#define XOR_EBX_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X5D, 0X00 # xorl %ebx, (%rbp)")
#define XOR_EBX_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X1C, 0X24 # xorl %ebx, (%rsp)")
#define XOR_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X18 # xorl %ebx, (%r8)")
#define XOR_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X19 # xorl %ebx, (%r9)")
#define XOR_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X1A # xorl %ebx, (%r10)")
#define XOR_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X1B # xorl %ebx, (%r11)")
#define XOR_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X1C, 0X24 # xorl %ebx, (%r12)")
#define XOR_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X5D, 0X00 # xorl %ebx, (%r13)")
#define XOR_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X1E # xorl %ebx, (%r14)")
#define XOR_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X1F # xorl %ebx, (%r15)")
#define XOR_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X18 # xorl %ebx, (%eax)")
#define XOR_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X1B # xorl %ebx, (%ebx)")
#define XOR_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X19 # xorl %ebx, (%ecx)")
#define XOR_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X1A # xorl %ebx, (%edx)")
#define XOR_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X1F # xorl %ebx, (%edi)")
#define XOR_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X1E # xorl %ebx, (%esi)")
#define XOR_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X5D, 0X00 # xorl %ebx, (%ebp)")
#define XOR_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X1C, 0X24 # xorl %ebx, (%esp)")

#define XOR_ECX_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X08 # xorl %ecx, (%rax)")
#define XOR_ECX_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X0B # xorl %ecx, (%rbx)")
#define XOR_ECX_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X09 # xorl %ecx, (%rcx)")
#define XOR_ECX_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X0A # xorl %ecx, (%rdx)")
#define XOR_ECX_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X0F # xorl %ecx, (%rdi)")
#define XOR_ECX_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X0E # xorl %ecx, (%rsi)")
#define XOR_ECX_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X4D, 0X00 # xorl %ecx, (%rbp)")
#define XOR_ECX_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X0C, 0X24 # xorl %ecx, (%rsp)")
#define XOR_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X08 # xorl %ecx, (%r8)")
#define XOR_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X09 # xorl %ecx, (%r9)")
#define XOR_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X0A # xorl %ecx, (%r10)")
#define XOR_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X0B # xorl %ecx, (%r11)")
#define XOR_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X0C, 0X24 # xorl %ecx, (%r12)")
#define XOR_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X4D, 0X00 # xorl %ecx, (%r13)")
#define XOR_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X0E # xorl %ecx, (%r14)")
#define XOR_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X0F # xorl %ecx, (%r15)")
#define XOR_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X08 # xorl %ecx, (%eax)")
#define XOR_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X0B # xorl %ecx, (%ebx)")
#define XOR_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X09 # xorl %ecx, (%ecx)")
#define XOR_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X0A # xorl %ecx, (%edx)")
#define XOR_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X0F # xorl %ecx, (%edi)")
#define XOR_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X0E # xorl %ecx, (%esi)")
#define XOR_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X4D, 0X00 # xorl %ecx, (%ebp)")
#define XOR_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X0C, 0X24 # xorl %ecx, (%esp)")

#define XOR_EDX_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X10 # xorl %edx, (%rax)")
#define XOR_EDX_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X13 # xorl %edx, (%rbx)")
#define XOR_EDX_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X11 # xorl %edx, (%rcx)")
#define XOR_EDX_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X12 # xorl %edx, (%rdx)")
#define XOR_EDX_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X17 # xorl %edx, (%rdi)")
#define XOR_EDX_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X16 # xorl %edx, (%rsi)")
#define XOR_EDX_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X55, 0X00 # xorl %edx, (%rbp)")
#define XOR_EDX_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X14, 0X24 # xorl %edx, (%rsp)")
#define XOR_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X10 # xorl %edx, (%r8)")
#define XOR_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X11 # xorl %edx, (%r9)")
#define XOR_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X12 # xorl %edx, (%r10)")
#define XOR_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X13 # xorl %edx, (%r11)")
#define XOR_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X14, 0X24 # xorl %edx, (%r12)")
#define XOR_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X55, 0X00 # xorl %edx, (%r13)")
#define XOR_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X16 # xorl %edx, (%r14)")
#define XOR_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X17 # xorl %edx, (%r15)")
#define XOR_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X10 # xorl %edx, (%eax)")
#define XOR_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X13 # xorl %edx, (%ebx)")
#define XOR_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X11 # xorl %edx, (%ecx)")
#define XOR_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X12 # xorl %edx, (%edx)")
#define XOR_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X17 # xorl %edx, (%edi)")
#define XOR_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X16 # xorl %edx, (%esi)")
#define XOR_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X55, 0X00 # xorl %edx, (%ebp)")
#define XOR_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X14, 0X24 # xorl %edx, (%esp)")

#define XOR_EDI_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X38 # xorl %edi, (%rax)")
#define XOR_EDI_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X3B # xorl %edi, (%rbx)")
#define XOR_EDI_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X39 # xorl %edi, (%rcx)")
#define XOR_EDI_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X3A # xorl %edi, (%rdx)")
#define XOR_EDI_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X3F # xorl %edi, (%rdi)")
#define XOR_EDI_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X3E # xorl %edi, (%rsi)")
#define XOR_EDI_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X7D, 0X00 # xorl %edi, (%rbp)")
#define XOR_EDI_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X3C, 0X24 # xorl %edi, (%rsp)")
#define XOR_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X38 # xorl %edi, (%r8)")
#define XOR_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X39 # xorl %edi, (%r9)")
#define XOR_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X3A # xorl %edi, (%r10)")
#define XOR_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X3B # xorl %edi, (%r11)")
#define XOR_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X3C, 0X24 # xorl %edi, (%r12)")
#define XOR_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X7D, 0X00 # xorl %edi, (%r13)")
#define XOR_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X3E # xorl %edi, (%r14)")
#define XOR_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X3F # xorl %edi, (%r15)")
#define XOR_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X38 # xorl %edi, (%eax)")
#define XOR_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X3B # xorl %edi, (%ebx)")
#define XOR_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X39 # xorl %edi, (%ecx)")
#define XOR_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X3A # xorl %edi, (%edx)")
#define XOR_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X3F # xorl %edi, (%edi)")
#define XOR_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X3E # xorl %edi, (%esi)")
#define XOR_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X7D, 0X00 # xorl %edi, (%ebp)")
#define XOR_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X3C, 0X24 # xorl %edi, (%esp)")

#define XOR_ESI_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X30 # xorl %esi, (%rax)")
#define XOR_ESI_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X33 # xorl %esi, (%rbx)")
#define XOR_ESI_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X31 # xorl %esi, (%rcx)")
#define XOR_ESI_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X32 # xorl %esi, (%rdx)")
#define XOR_ESI_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X37 # xorl %esi, (%rdi)")
#define XOR_ESI_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X36 # xorl %esi, (%rsi)")
#define XOR_ESI_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X75, 0X00 # xorl %esi, (%rbp)")
#define XOR_ESI_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X34, 0X24 # xorl %esi, (%rsp)")
#define XOR_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X30 # xorl %esi, (%r8)")
#define XOR_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X31 # xorl %esi, (%r9)")
#define XOR_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X32 # xorl %esi, (%r10)")
#define XOR_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X33 # xorl %esi, (%r11)")
#define XOR_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X34, 0X24 # xorl %esi, (%r12)")
#define XOR_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X75, 0X00 # xorl %esi, (%r13)")
#define XOR_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X36 # xorl %esi, (%r14)")
#define XOR_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X37 # xorl %esi, (%r15)")
#define XOR_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X30 # xorl %esi, (%eax)")
#define XOR_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X33 # xorl %esi, (%ebx)")
#define XOR_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X31 # xorl %esi, (%ecx)")
#define XOR_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X32 # xorl %esi, (%edx)")
#define XOR_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X37 # xorl %esi, (%edi)")
#define XOR_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X36 # xorl %esi, (%esi)")
#define XOR_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X75, 0X00 # xorl %esi, (%ebp)")
#define XOR_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X34, 0X24 # xorl %esi, (%esp)")

#define XOR_EBP_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X28 # xorl %ebp, (%rax)")
#define XOR_EBP_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X2B # xorl %ebp, (%rbx)")
#define XOR_EBP_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X29 # xorl %ebp, (%rcx)")
#define XOR_EBP_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X2A # xorl %ebp, (%rdx)")
#define XOR_EBP_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X2F # xorl %ebp, (%rdi)")
#define XOR_EBP_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X2E # xorl %ebp, (%rsi)")
#define XOR_EBP_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X6D, 0X00 # xorl %ebp, (%rbp)")
#define XOR_EBP_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X2C, 0X24 # xorl %ebp, (%rsp)")
#define XOR_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X28 # xorl %ebp, (%r8)")
#define XOR_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X29 # xorl %ebp, (%r9)")
#define XOR_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X2A # xorl %ebp, (%r10)")
#define XOR_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X2B # xorl %ebp, (%r11)")
#define XOR_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X2C, 0X24 # xorl %ebp, (%r12)")
#define XOR_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X6D, 0X00 # xorl %ebp, (%r13)")
#define XOR_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X2E # xorl %ebp, (%r14)")
#define XOR_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X2F # xorl %ebp, (%r15)")
#define XOR_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X28 # xorl %ebp, (%eax)")
#define XOR_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X2B # xorl %ebp, (%ebx)")
#define XOR_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X29 # xorl %ebp, (%ecx)")
#define XOR_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X2A # xorl %ebp, (%edx)")
#define XOR_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X2F # xorl %ebp, (%edi)")
#define XOR_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X2E # xorl %ebp, (%esi)")
#define XOR_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X6D, 0X00 # xorl %ebp, (%ebp)")
#define XOR_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X2C, 0X24 # xorl %ebp, (%esp)")

#define XOR_ESP_TO_PTR_RAX CMT_ASM(".byte 0X31, 0X20 # xorl %esp, (%rax)")
#define XOR_ESP_TO_PTR_RBX CMT_ASM(".byte 0X31, 0X23 # xorl %esp, (%rbx)")
#define XOR_ESP_TO_PTR_RCX CMT_ASM(".byte 0X31, 0X21 # xorl %esp, (%rcx)")
#define XOR_ESP_TO_PTR_RDX CMT_ASM(".byte 0X31, 0X22 # xorl %esp, (%rdx)")
#define XOR_ESP_TO_PTR_RDI CMT_ASM(".byte 0X31, 0X27 # xorl %esp, (%rdi)")
#define XOR_ESP_TO_PTR_RSI CMT_ASM(".byte 0X31, 0X26 # xorl %esp, (%rsi)")
#define XOR_ESP_TO_PTR_RBP CMT_ASM(".byte 0X31, 0X65, 0X00 # xorl %esp, (%rbp)")
#define XOR_ESP_TO_PTR_RSP CMT_ASM(".byte 0X31, 0X24, 0X24 # xorl %esp, (%rsp)")
#define XOR_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X31, 0X20 # xorl %esp, (%r8)")
#define XOR_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X31, 0X21 # xorl %esp, (%r9)")
#define XOR_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X31, 0X22 # xorl %esp, (%r10)")
#define XOR_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X31, 0X23 # xorl %esp, (%r11)")
#define XOR_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X31, 0X24, 0X24 # xorl %esp, (%r12)")
#define XOR_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X31, 0X65, 0X00 # xorl %esp, (%r13)")
#define XOR_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X31, 0X26 # xorl %esp, (%r14)")
#define XOR_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X31, 0X27 # xorl %esp, (%r15)")
#define XOR_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X31, 0X20 # xorl %esp, (%eax)")
#define XOR_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X31, 0X23 # xorl %esp, (%ebx)")
#define XOR_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X31, 0X21 # xorl %esp, (%ecx)")
#define XOR_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X31, 0X22 # xorl %esp, (%edx)")
#define XOR_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X31, 0X27 # xorl %esp, (%edi)")
#define XOR_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X31, 0X26 # xorl %esp, (%esi)")
#define XOR_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X31, 0X65, 0X00 # xorl %esp, (%ebp)")
#define XOR_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X31, 0X24, 0X24 # xorl %esp, (%esp)")

#define XOR_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X00 # xorl %r8d, (%rax)")
#define XOR_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X03 # xorl %r8d, (%rbx)")
#define XOR_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X01 # xorl %r8d, (%rcx)")
#define XOR_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X02 # xorl %r8d, (%rdx)")
#define XOR_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X07 # xorl %r8d, (%rdi)")
#define XOR_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X06 # xorl %r8d, (%rsi)")
#define XOR_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X45, 0X00 # xorl %r8d, (%rbp)")
#define XOR_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X04, 0X24 # xorl %r8d, (%rsp)")
#define XOR_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X00 # xorl %r8d, (%r8)")
#define XOR_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X01 # xorl %r8d, (%r9)")
#define XOR_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X02 # xorl %r8d, (%r10)")
#define XOR_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X03 # xorl %r8d, (%r11)")
#define XOR_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X04, 0X24 # xorl %r8d, (%r12)")
#define XOR_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X45, 0X00 # xorl %r8d, (%r13)")
#define XOR_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X06 # xorl %r8d, (%r14)")
#define XOR_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X07 # xorl %r8d, (%r15)")
#define XOR_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X00 # xorl %r8d, (%eax)")
#define XOR_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X03 # xorl %r8d, (%ebx)")
#define XOR_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X01 # xorl %r8d, (%ecx)")
#define XOR_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X02 # xorl %r8d, (%edx)")
#define XOR_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X07 # xorl %r8d, (%edi)")
#define XOR_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X06 # xorl %r8d, (%esi)")
#define XOR_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X45, 0X00 # xorl %r8d, (%ebp)")
#define XOR_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X04, 0X24 # xorl %r8d, (%esp)")

#define XOR_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X08 # xorl %r9d, (%rax)")
#define XOR_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X0B # xorl %r9d, (%rbx)")
#define XOR_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X09 # xorl %r9d, (%rcx)")
#define XOR_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X0A # xorl %r9d, (%rdx)")
#define XOR_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X0F # xorl %r9d, (%rdi)")
#define XOR_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X0E # xorl %r9d, (%rsi)")
#define XOR_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X4D, 0X00 # xorl %r9d, (%rbp)")
#define XOR_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X0C, 0X24 # xorl %r9d, (%rsp)")
#define XOR_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X08 # xorl %r9d, (%r8)")
#define XOR_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X09 # xorl %r9d, (%r9)")
#define XOR_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X0A # xorl %r9d, (%r10)")
#define XOR_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X0B # xorl %r9d, (%r11)")
#define XOR_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X0C, 0X24 # xorl %r9d, (%r12)")
#define XOR_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X4D, 0X00 # xorl %r9d, (%r13)")
#define XOR_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X0E # xorl %r9d, (%r14)")
#define XOR_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X0F # xorl %r9d, (%r15)")
#define XOR_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X08 # xorl %r9d, (%eax)")
#define XOR_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X0B # xorl %r9d, (%ebx)")
#define XOR_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X09 # xorl %r9d, (%ecx)")
#define XOR_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X0A # xorl %r9d, (%edx)")
#define XOR_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X0F # xorl %r9d, (%edi)")
#define XOR_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X0E # xorl %r9d, (%esi)")
#define XOR_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X4D, 0X00 # xorl %r9d, (%ebp)")
#define XOR_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X0C, 0X24 # xorl %r9d, (%esp)")

#define XOR_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X10 # xorl %r10d, (%rax)")
#define XOR_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X13 # xorl %r10d, (%rbx)")
#define XOR_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X11 # xorl %r10d, (%rcx)")
#define XOR_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X12 # xorl %r10d, (%rdx)")
#define XOR_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X17 # xorl %r10d, (%rdi)")
#define XOR_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X16 # xorl %r10d, (%rsi)")
#define XOR_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X55, 0X00 # xorl %r10d, (%rbp)")
#define XOR_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X14, 0X24 # xorl %r10d, (%rsp)")
#define XOR_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X10 # xorl %r10d, (%r8)")
#define XOR_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X11 # xorl %r10d, (%r9)")
#define XOR_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X12 # xorl %r10d, (%r10)")
#define XOR_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X13 # xorl %r10d, (%r11)")
#define XOR_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X14, 0X24 # xorl %r10d, (%r12)")
#define XOR_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X55, 0X00 # xorl %r10d, (%r13)")
#define XOR_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X16 # xorl %r10d, (%r14)")
#define XOR_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X17 # xorl %r10d, (%r15)")
#define XOR_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X10 # xorl %r10d, (%eax)")
#define XOR_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X13 # xorl %r10d, (%ebx)")
#define XOR_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X11 # xorl %r10d, (%ecx)")
#define XOR_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X12 # xorl %r10d, (%edx)")
#define XOR_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X17 # xorl %r10d, (%edi)")
#define XOR_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X16 # xorl %r10d, (%esi)")
#define XOR_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X55, 0X00 # xorl %r10d, (%ebp)")
#define XOR_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X14, 0X24 # xorl %r10d, (%esp)")

#define XOR_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X18 # xorl %r11d, (%rax)")
#define XOR_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X1B # xorl %r11d, (%rbx)")
#define XOR_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X19 # xorl %r11d, (%rcx)")
#define XOR_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X1A # xorl %r11d, (%rdx)")
#define XOR_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X1F # xorl %r11d, (%rdi)")
#define XOR_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X1E # xorl %r11d, (%rsi)")
#define XOR_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X5D, 0X00 # xorl %r11d, (%rbp)")
#define XOR_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X1C, 0X24 # xorl %r11d, (%rsp)")
#define XOR_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X18 # xorl %r11d, (%r8)")
#define XOR_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X19 # xorl %r11d, (%r9)")
#define XOR_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X1A # xorl %r11d, (%r10)")
#define XOR_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X1B # xorl %r11d, (%r11)")
#define XOR_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X1C, 0X24 # xorl %r11d, (%r12)")
#define XOR_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X5D, 0X00 # xorl %r11d, (%r13)")
#define XOR_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X1E # xorl %r11d, (%r14)")
#define XOR_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X1F # xorl %r11d, (%r15)")
#define XOR_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X18 # xorl %r11d, (%eax)")
#define XOR_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X1B # xorl %r11d, (%ebx)")
#define XOR_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X19 # xorl %r11d, (%ecx)")
#define XOR_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X1A # xorl %r11d, (%edx)")
#define XOR_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X1F # xorl %r11d, (%edi)")
#define XOR_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X1E # xorl %r11d, (%esi)")
#define XOR_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X5D, 0X00 # xorl %r11d, (%ebp)")
#define XOR_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X1C, 0X24 # xorl %r11d, (%esp)")

#define XOR_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X20 # xorl %r12d, (%rax)")
#define XOR_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X23 # xorl %r12d, (%rbx)")
#define XOR_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X21 # xorl %r12d, (%rcx)")
#define XOR_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X22 # xorl %r12d, (%rdx)")
#define XOR_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X27 # xorl %r12d, (%rdi)")
#define XOR_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X26 # xorl %r12d, (%rsi)")
#define XOR_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X65, 0X00 # xorl %r12d, (%rbp)")
#define XOR_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X24, 0X24 # xorl %r12d, (%rsp)")
#define XOR_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X20 # xorl %r12d, (%r8)")
#define XOR_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X21 # xorl %r12d, (%r9)")
#define XOR_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X22 # xorl %r12d, (%r10)")
#define XOR_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X23 # xorl %r12d, (%r11)")
#define XOR_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X24, 0X24 # xorl %r12d, (%r12)")
#define XOR_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X65, 0X00 # xorl %r12d, (%r13)")
#define XOR_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X26 # xorl %r12d, (%r14)")
#define XOR_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X27 # xorl %r12d, (%r15)")
#define XOR_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X20 # xorl %r12d, (%eax)")
#define XOR_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X23 # xorl %r12d, (%ebx)")
#define XOR_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X21 # xorl %r12d, (%ecx)")
#define XOR_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X22 # xorl %r12d, (%edx)")
#define XOR_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X27 # xorl %r12d, (%edi)")
#define XOR_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X26 # xorl %r12d, (%esi)")
#define XOR_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X65, 0X00 # xorl %r12d, (%ebp)")
#define XOR_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X24, 0X24 # xorl %r12d, (%esp)")

#define XOR_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X28 # xorl %r13d, (%rax)")
#define XOR_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X2B # xorl %r13d, (%rbx)")
#define XOR_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X29 # xorl %r13d, (%rcx)")
#define XOR_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X2A # xorl %r13d, (%rdx)")
#define XOR_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X2F # xorl %r13d, (%rdi)")
#define XOR_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X2E # xorl %r13d, (%rsi)")
#define XOR_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X6D, 0X00 # xorl %r13d, (%rbp)")
#define XOR_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X2C, 0X24 # xorl %r13d, (%rsp)")
#define XOR_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X28 # xorl %r13d, (%r8)")
#define XOR_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X29 # xorl %r13d, (%r9)")
#define XOR_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X2A # xorl %r13d, (%r10)")
#define XOR_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X2B # xorl %r13d, (%r11)")
#define XOR_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X2C, 0X24 # xorl %r13d, (%r12)")
#define XOR_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X6D, 0X00 # xorl %r13d, (%r13)")
#define XOR_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X2E # xorl %r13d, (%r14)")
#define XOR_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X2F # xorl %r13d, (%r15)")
#define XOR_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X28 # xorl %r13d, (%eax)")
#define XOR_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X2B # xorl %r13d, (%ebx)")
#define XOR_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X29 # xorl %r13d, (%ecx)")
#define XOR_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X2A # xorl %r13d, (%edx)")
#define XOR_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X2F # xorl %r13d, (%edi)")
#define XOR_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X2E # xorl %r13d, (%esi)")
#define XOR_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X6D, 0X00 # xorl %r13d, (%ebp)")
#define XOR_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X2C, 0X24 # xorl %r13d, (%esp)")

#define XOR_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X30 # xorl %r14d, (%rax)")
#define XOR_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X33 # xorl %r14d, (%rbx)")
#define XOR_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X31 # xorl %r14d, (%rcx)")
#define XOR_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X32 # xorl %r14d, (%rdx)")
#define XOR_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X37 # xorl %r14d, (%rdi)")
#define XOR_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X36 # xorl %r14d, (%rsi)")
#define XOR_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X75, 0X00 # xorl %r14d, (%rbp)")
#define XOR_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X34, 0X24 # xorl %r14d, (%rsp)")
#define XOR_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X30 # xorl %r14d, (%r8)")
#define XOR_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X31 # xorl %r14d, (%r9)")
#define XOR_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X32 # xorl %r14d, (%r10)")
#define XOR_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X33 # xorl %r14d, (%r11)")
#define XOR_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X34, 0X24 # xorl %r14d, (%r12)")
#define XOR_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X75, 0X00 # xorl %r14d, (%r13)")
#define XOR_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X36 # xorl %r14d, (%r14)")
#define XOR_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X37 # xorl %r14d, (%r15)")
#define XOR_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X30 # xorl %r14d, (%eax)")
#define XOR_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X33 # xorl %r14d, (%ebx)")
#define XOR_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X31 # xorl %r14d, (%ecx)")
#define XOR_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X32 # xorl %r14d, (%edx)")
#define XOR_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X37 # xorl %r14d, (%edi)")
#define XOR_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X36 # xorl %r14d, (%esi)")
#define XOR_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X75, 0X00 # xorl %r14d, (%ebp)")
#define XOR_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X34, 0X24 # xorl %r14d, (%esp)")

#define XOR_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X31, 0X38 # xorl %r15d, (%rax)")
#define XOR_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X31, 0X3B # xorl %r15d, (%rbx)")
#define XOR_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X31, 0X39 # xorl %r15d, (%rcx)")
#define XOR_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X31, 0X3A # xorl %r15d, (%rdx)")
#define XOR_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X31, 0X3F # xorl %r15d, (%rdi)")
#define XOR_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X31, 0X3E # xorl %r15d, (%rsi)")
#define XOR_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X31, 0X7D, 0X00 # xorl %r15d, (%rbp)")
#define XOR_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X31, 0X3C, 0X24 # xorl %r15d, (%rsp)")
#define XOR_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X31, 0X38 # xorl %r15d, (%r8)")
#define XOR_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X31, 0X39 # xorl %r15d, (%r9)")
#define XOR_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X31, 0X3A # xorl %r15d, (%r10)")
#define XOR_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X31, 0X3B # xorl %r15d, (%r11)")
#define XOR_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X31, 0X3C, 0X24 # xorl %r15d, (%r12)")
#define XOR_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X31, 0X7D, 0X00 # xorl %r15d, (%r13)")
#define XOR_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X31, 0X3E # xorl %r15d, (%r14)")
#define XOR_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X31, 0X3F # xorl %r15d, (%r15)")
#define XOR_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X38 # xorl %r15d, (%eax)")
#define XOR_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X3B # xorl %r15d, (%ebx)")
#define XOR_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X39 # xorl %r15d, (%ecx)")
#define XOR_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X31, 0X3A # xorl %r15d, (%edx)")
#define XOR_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X3F # xorl %r15d, (%edi)")
#define XOR_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X31, 0X3E # xorl %r15d, (%esi)")
#define XOR_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X7D, 0X00 # xorl %r15d, (%ebp)")
#define XOR_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X31, 0X3C, 0X24 # xorl %r15d, (%esp)")

#define XOR_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X80 # xorl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X83 # xorl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X81 # xorl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X82 # xorl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X87 # xorl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X86 # xorl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X85 # xorl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X80 # xorl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X81 # xorl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X82 # xorl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X83 # xorl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X85 # xorl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X86 # xorl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X87 # xorl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X80 # xorl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X83 # xorl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X81 # xorl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X82 # xorl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X87 # xorl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X86 # xorl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X85 # xorl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X98 # xorl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9B # xorl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X99 # xorl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9A # xorl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9F # xorl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9E # xorl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9D # xorl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X98 # xorl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X99 # xorl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9A # xorl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9B # xorl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9D # xorl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9E # xorl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X9F # xorl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X98 # xorl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9B # xorl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X99 # xorl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9A # xorl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9F # xorl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9E # xorl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9D # xorl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X88 # xorl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8B # xorl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X89 # xorl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8A # xorl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8F # xorl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8E # xorl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8D # xorl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X88 # xorl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X89 # xorl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8A # xorl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8B # xorl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8D # xorl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8E # xorl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X8F # xorl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X88 # xorl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8B # xorl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X89 # xorl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8A # xorl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8F # xorl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8E # xorl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8D # xorl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X90 # xorl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X93 # xorl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X91 # xorl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0X92 # xorl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X97 # xorl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0X96 # xorl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X95 # xorl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X90 # xorl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X91 # xorl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X92 # xorl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X93 # xorl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X95 # xorl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X96 # xorl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0X97 # xorl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X90 # xorl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X93 # xorl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X91 # xorl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X92 # xorl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X97 # xorl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X96 # xorl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X95 # xorl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB8 # xorl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBB # xorl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB9 # xorl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBA # xorl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBF # xorl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBE # xorl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBD # xorl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB8 # xorl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB9 # xorl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBA # xorl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBB # xorl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBD # xorl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBE # xorl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XBF # xorl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB8 # xorl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBB # xorl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB9 # xorl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBA # xorl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBF # xorl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBE # xorl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBD # xorl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB0 # xorl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB3 # xorl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB1 # xorl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB2 # xorl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB7 # xorl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB6 # xorl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB5 # xorl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB0 # xorl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB1 # xorl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB2 # xorl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB3 # xorl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB5 # xorl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB6 # xorl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XB7 # xorl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB0 # xorl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB3 # xorl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB1 # xorl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB2 # xorl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB7 # xorl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB6 # xorl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB5 # xorl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA8 # xorl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAB # xorl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA9 # xorl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAA # xorl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAF # xorl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAE # xorl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAD # xorl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA8 # xorl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA9 # xorl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAA # xorl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAB # xorl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAD # xorl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAE # xorl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XAF # xorl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA8 # xorl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAB # xorl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA9 # xorl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAA # xorl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAF # xorl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAE # xorl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAD # xorl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA0 # xorl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA3 # xorl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA1 # xorl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA2 # xorl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA7 # xorl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA6 # xorl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA5 # xorl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA0 # xorl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA1 # xorl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA2 # xorl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA3 # xorl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA5 # xorl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA6 # xorl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X33, 0XA7 # xorl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA0 # xorl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA3 # xorl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA1 # xorl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA2 # xorl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA7 # xorl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA6 # xorl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA5 # xorl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X80 # xorl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X83 # xorl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X81 # xorl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X82 # xorl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X87 # xorl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X86 # xorl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X85 # xorl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X80 # xorl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X81 # xorl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X82 # xorl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X83 # xorl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X85 # xorl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X86 # xorl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X87 # xorl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X80 # xorl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X83 # xorl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X81 # xorl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X82 # xorl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X87 # xorl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X86 # xorl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X85 # xorl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X84, 0X24 # xorl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X88 # xorl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8B # xorl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X89 # xorl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8A # xorl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8F # xorl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8E # xorl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8D # xorl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X88 # xorl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X89 # xorl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8A # xorl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8B # xorl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8D # xorl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8E # xorl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X8F # xorl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X88 # xorl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8B # xorl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X89 # xorl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8A # xorl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8F # xorl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8E # xorl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8D # xorl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X8C, 0X24 # xorl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X90 # xorl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X93 # xorl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X91 # xorl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X92 # xorl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X97 # xorl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X96 # xorl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X95 # xorl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X90 # xorl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X91 # xorl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X92 # xorl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X93 # xorl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X95 # xorl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X96 # xorl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X97 # xorl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X90 # xorl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X93 # xorl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X91 # xorl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X92 # xorl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X97 # xorl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X96 # xorl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X95 # xorl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X94, 0X24 # xorl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X98 # xorl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9B # xorl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X99 # xorl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9A # xorl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9F # xorl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9E # xorl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9D # xorl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X98 # xorl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X99 # xorl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9A # xorl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9B # xorl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9D # xorl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9E # xorl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0X9F # xorl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X98 # xorl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9B # xorl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X99 # xorl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9A # xorl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9F # xorl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9E # xorl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9D # xorl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0X9C, 0X24 # xorl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA0 # xorl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA3 # xorl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA1 # xorl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA2 # xorl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA7 # xorl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA6 # xorl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA5 # xorl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA0 # xorl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA1 # xorl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA2 # xorl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA3 # xorl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA5 # xorl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA6 # xorl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA7 # xorl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA0 # xorl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA3 # xorl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA1 # xorl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA2 # xorl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA7 # xorl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA6 # xorl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA5 # xorl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA4, 0X24 # xorl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA8 # xorl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAB # xorl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XA9 # xorl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAA # xorl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAF # xorl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAE # xorl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAD # xorl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA8 # xorl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XA9 # xorl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAA # xorl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAB # xorl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAD # xorl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAE # xorl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XAF # xorl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA8 # xorl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAB # xorl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XA9 # xorl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAA # xorl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAF # xorl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAE # xorl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAD # xorl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XAC, 0X24 # xorl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB0 # xorl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB3 # xorl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB1 # xorl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB2 # xorl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB7 # xorl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB6 # xorl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB5 # xorl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB0 # xorl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB1 # xorl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB2 # xorl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB3 # xorl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB5 # xorl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB6 # xorl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB7 # xorl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB0 # xorl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB3 # xorl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB1 # xorl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB2 # xorl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB7 # xorl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB6 # xorl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB5 # xorl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB4, 0X24 # xorl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB8 # xorl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBB # xorl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XB9 # xorl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBA # xorl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBF # xorl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBE # xorl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBD # xorl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB8 # xorl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XB9 # xorl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBA # xorl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBB # xorl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBD # xorl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBE # xorl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X33, 0XBF # xorl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB8 # xorl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBB # xorl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XB9 # xorl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBA # xorl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBF # xorl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBE # xorl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBD # xorl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X33, 0XBC, 0X24 # xorl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X80 # xorl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X83 # xorl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X81 # xorl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X82 # xorl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X87 # xorl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X86 # xorl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X85 # xorl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X84, 0X24 # xorl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X80 # xorl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X81 # xorl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X82 # xorl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X83 # xorl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X84, 0X24 # xorl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X85 # xorl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X86 # xorl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X87 # xorl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X80 # xorl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X83 # xorl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X81 # xorl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X82 # xorl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X87 # xorl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X86 # xorl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X85 # xorl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X84, 0X24 # xorl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X98 # xorl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9B # xorl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X99 # xorl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9A # xorl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9F # xorl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9E # xorl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9D # xorl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X9C, 0X24 # xorl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X98 # xorl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X99 # xorl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9A # xorl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9B # xorl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9C, 0X24 # xorl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9D # xorl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9E # xorl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X9F # xorl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X98 # xorl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9B # xorl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X99 # xorl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9A # xorl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9F # xorl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9E # xorl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9D # xorl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X9C, 0X24 # xorl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X88 # xorl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8B # xorl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X89 # xorl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8A # xorl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8F # xorl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8E # xorl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8D # xorl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X8C, 0X24 # xorl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X88 # xorl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X89 # xorl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8A # xorl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8B # xorl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8C, 0X24 # xorl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8D # xorl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8E # xorl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X8F # xorl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X88 # xorl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8B # xorl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X89 # xorl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8A # xorl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8F # xorl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8E # xorl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8D # xorl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X8C, 0X24 # xorl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X90 # xorl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X93 # xorl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X91 # xorl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0X92 # xorl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X97 # xorl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0X96 # xorl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X95 # xorl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0X94, 0X24 # xorl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X90 # xorl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X91 # xorl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X92 # xorl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X93 # xorl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X94, 0X24 # xorl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X95 # xorl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X96 # xorl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0X97 # xorl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X90 # xorl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X93 # xorl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X91 # xorl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X92 # xorl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X97 # xorl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X96 # xorl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X95 # xorl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0X94, 0X24 # xorl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB8 # xorl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBB # xorl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB9 # xorl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBA # xorl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBF # xorl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBE # xorl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBD # xorl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XBC, 0X24 # xorl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB8 # xorl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB9 # xorl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBA # xorl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBB # xorl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBC, 0X24 # xorl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBD # xorl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBE # xorl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XBF # xorl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB8 # xorl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBB # xorl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB9 # xorl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBA # xorl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBF # xorl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBE # xorl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBD # xorl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XBC, 0X24 # xorl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB0 # xorl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB3 # xorl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB1 # xorl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB2 # xorl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB7 # xorl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB6 # xorl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB5 # xorl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XB4, 0X24 # xorl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB0 # xorl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB1 # xorl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB2 # xorl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB3 # xorl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB4, 0X24 # xorl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB5 # xorl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB6 # xorl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XB7 # xorl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB0 # xorl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB3 # xorl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB1 # xorl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB2 # xorl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB7 # xorl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB6 # xorl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB5 # xorl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XB4, 0X24 # xorl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA8 # xorl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAB # xorl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA9 # xorl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAA # xorl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAF # xorl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAE # xorl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAD # xorl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XAC, 0X24 # xorl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA8 # xorl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA9 # xorl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAA # xorl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAB # xorl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAC, 0X24 # xorl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAD # xorl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAE # xorl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XAF # xorl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA8 # xorl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAB # xorl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA9 # xorl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAA # xorl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAF # xorl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAE # xorl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAD # xorl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XAC, 0X24 # xorl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA0 # xorl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA3 # xorl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA1 # xorl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA2 # xorl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA7 # xorl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA6 # xorl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA5 # xorl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X31, 0XA4, 0X24 # xorl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA0 # xorl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA1 # xorl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA2 # xorl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA3 # xorl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA4, 0X24 # xorl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA5 # xorl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA6 # xorl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X31, 0XA7 # xorl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA0 # xorl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA3 # xorl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA1 # xorl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA2 # xorl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA7 # xorl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA6 # xorl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA5 # xorl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X31, 0XA4, 0X24 # xorl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X80 # xorl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X83 # xorl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X81 # xorl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X82 # xorl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X87 # xorl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X86 # xorl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X85 # xorl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X84, 0X24 # xorl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X80 # xorl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X81 # xorl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X82 # xorl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X83 # xorl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X84, 0X24 # xorl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X85 # xorl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X86 # xorl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X87 # xorl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X80 # xorl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X83 # xorl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X81 # xorl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X82 # xorl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X87 # xorl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X86 # xorl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X85 # xorl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X84, 0X24 # xorl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X88 # xorl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8B # xorl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X89 # xorl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8A # xorl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8F # xorl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8E # xorl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8D # xorl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X8C, 0X24 # xorl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X88 # xorl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X89 # xorl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8A # xorl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8B # xorl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8C, 0X24 # xorl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8D # xorl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8E # xorl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X8F # xorl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X88 # xorl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8B # xorl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X89 # xorl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8A # xorl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8F # xorl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8E # xorl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8D # xorl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X8C, 0X24 # xorl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X90 # xorl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X93 # xorl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X91 # xorl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X92 # xorl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X97 # xorl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X96 # xorl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X95 # xorl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X94, 0X24 # xorl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X90 # xorl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X91 # xorl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X92 # xorl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X93 # xorl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X94, 0X24 # xorl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X95 # xorl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X96 # xorl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X97 # xorl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X90 # xorl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X93 # xorl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X91 # xorl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X92 # xorl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X97 # xorl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X96 # xorl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X95 # xorl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X94, 0X24 # xorl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X98 # xorl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9B # xorl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X99 # xorl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9A # xorl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9F # xorl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9E # xorl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9D # xorl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0X9C, 0X24 # xorl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X98 # xorl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X99 # xorl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9A # xorl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9B # xorl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9C, 0X24 # xorl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9D # xorl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9E # xorl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0X9F # xorl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X98 # xorl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9B # xorl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X99 # xorl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9A # xorl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9F # xorl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9E # xorl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9D # xorl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0X9C, 0X24 # xorl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA0 # xorl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA3 # xorl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA1 # xorl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA2 # xorl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA7 # xorl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA6 # xorl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA5 # xorl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA4, 0X24 # xorl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA0 # xorl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA1 # xorl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA2 # xorl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA3 # xorl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA4, 0X24 # xorl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA5 # xorl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA6 # xorl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA7 # xorl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA0 # xorl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA3 # xorl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA1 # xorl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA2 # xorl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA7 # xorl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA6 # xorl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA5 # xorl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA4, 0X24 # xorl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA8 # xorl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAB # xorl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XA9 # xorl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAA # xorl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAF # xorl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAE # xorl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAD # xorl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XAC, 0X24 # xorl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA8 # xorl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XA9 # xorl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAA # xorl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAB # xorl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAC, 0X24 # xorl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAD # xorl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAE # xorl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XAF # xorl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA8 # xorl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAB # xorl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XA9 # xorl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAA # xorl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAF # xorl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAE # xorl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAD # xorl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XAC, 0X24 # xorl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB0 # xorl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB3 # xorl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB1 # xorl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB2 # xorl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB7 # xorl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB6 # xorl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB5 # xorl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB4, 0X24 # xorl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB0 # xorl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB1 # xorl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB2 # xorl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB3 # xorl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB4, 0X24 # xorl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB5 # xorl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB6 # xorl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB7 # xorl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB0 # xorl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB3 # xorl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB1 # xorl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB2 # xorl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB7 # xorl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB6 # xorl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB5 # xorl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB4, 0X24 # xorl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XOR_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB8 # xorl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBB # xorl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XB9 # xorl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBA # xorl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBF # xorl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBE # xorl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBD # xorl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X31, 0XBC, 0X24 # xorl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB8 # xorl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XB9 # xorl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBA # xorl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBB # xorl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBC, 0X24 # xorl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBD # xorl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBE # xorl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X31, 0XBF # xorl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB8 # xorl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBB # xorl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XB9 # xorl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBA # xorl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBF # xorl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBE # xorl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBD # xorl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XOR_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X31, 0XBC, 0X24 # xorl %r15d, " _(VALUE) "(%esp)")\
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
