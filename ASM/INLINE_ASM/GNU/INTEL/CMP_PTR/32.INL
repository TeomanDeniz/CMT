#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define CMP_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X05 # cmpl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X1D # cmpl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X0D # cmpl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X15 # cmpl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X3D # cmpl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X35 # cmpl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X2D # cmpl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X25 # cmpl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X05 # cmpl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X1D # cmpl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X0D # cmpl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X15 # cmpl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X3D # cmpl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X35 # cmpl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X2D # cmpl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X25 # cmpl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X00 # cmpl (%eax), %eax")
#define CMP_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X03 # cmpl (%ebx), %eax")
#define CMP_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X01 # cmpl (%ecx), %eax")
#define CMP_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X02 # cmpl (%edx), %eax")
#define CMP_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X07 # cmpl (%edi), %eax")
#define CMP_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X06 # cmpl (%esi), %eax")
#define CMP_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X45, 0X00 # cmpl (%ebp), %eax")
#define CMP_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X04, 0X24 # cmpl (%esp), %eax")
#define CMP_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X07 # cmpl (%bx), %eax")
#define CMP_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X46, 0X00 # cmpl (%bp), %eax")
#define CMP_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X04 # cmpl (%si), %eax")
#define CMP_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X05 # cmpl (%di), %eax")

#define CMP_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X18 # cmpl (%eax), %ebx")
#define CMP_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X1B # cmpl (%ebx), %ebx")
#define CMP_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X19 # cmpl (%ecx), %ebx")
#define CMP_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X1A # cmpl (%edx), %ebx")
#define CMP_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X1F # cmpl (%edi), %ebx")
#define CMP_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X1E # cmpl (%esi), %ebx")
#define CMP_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X5D, 0X00 # cmpl (%ebp), %ebx")
#define CMP_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X1C, 0X24 # cmpl (%esp), %ebx")
#define CMP_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X1F # cmpl (%bx), %ebx")
#define CMP_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X5E, 0X00 # cmpl (%bp), %ebx")
#define CMP_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X1C # cmpl (%si), %ebx")
#define CMP_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X1D # cmpl (%di), %ebx")

#define CMP_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X08 # cmpl (%eax), %ecx")
#define CMP_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X0B # cmpl (%ebx), %ecx")
#define CMP_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X09 # cmpl (%ecx), %ecx")
#define CMP_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X0A # cmpl (%edx), %ecx")
#define CMP_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X0F # cmpl (%edi), %ecx")
#define CMP_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X0E # cmpl (%esi), %ecx")
#define CMP_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X4D, 0X00 # cmpl (%ebp), %ecx")
#define CMP_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X0C, 0X24 # cmpl (%esp), %ecx")
#define CMP_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X0F # cmpl (%bx), %ecx")
#define CMP_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X4E, 0X00 # cmpl (%bp), %ecx")
#define CMP_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X0C # cmpl (%si), %ecx")
#define CMP_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X0D # cmpl (%di), %ecx")

#define CMP_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X10 # cmpl (%eax), %edx")
#define CMP_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X13 # cmpl (%ebx), %edx")
#define CMP_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X11 # cmpl (%ecx), %edx")
#define CMP_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X12 # cmpl (%edx), %edx")
#define CMP_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X17 # cmpl (%edi), %edx")
#define CMP_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X16 # cmpl (%esi), %edx")
#define CMP_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X55, 0X00 # cmpl (%ebp), %edx")
#define CMP_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X14, 0X24 # cmpl (%esp), %edx")
#define CMP_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X17 # cmpl (%bx), %edx")
#define CMP_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X56, 0X00 # cmpl (%bp), %edx")
#define CMP_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X14 # cmpl (%si), %edx")
#define CMP_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X15 # cmpl (%di), %edx")

#define CMP_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X38 # cmpl (%eax), %edi")
#define CMP_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X3B # cmpl (%ebx), %edi")
#define CMP_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X39 # cmpl (%ecx), %edi")
#define CMP_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X3A # cmpl (%edx), %edi")
#define CMP_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X3F # cmpl (%edi), %edi")
#define CMP_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X3E # cmpl (%esi), %edi")
#define CMP_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X7D, 0X00 # cmpl (%ebp), %edi")
#define CMP_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X3C, 0X24 # cmpl (%esp), %edi")
#define CMP_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X3F # cmpl (%bx), %edi")
#define CMP_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X7E, 0X00 # cmpl (%bp), %edi")
#define CMP_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X3C # cmpl (%si), %edi")
#define CMP_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X3D # cmpl (%di), %edi")

#define CMP_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X30 # cmpl (%eax), %esi")
#define CMP_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X33 # cmpl (%ebx), %esi")
#define CMP_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X31 # cmpl (%ecx), %esi")
#define CMP_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X32 # cmpl (%edx), %esi")
#define CMP_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X37 # cmpl (%edi), %esi")
#define CMP_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X36 # cmpl (%esi), %esi")
#define CMP_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X75, 0X00 # cmpl (%ebp), %esi")
#define CMP_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X34, 0X24 # cmpl (%esp), %esi")
#define CMP_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X37 # cmpl (%bx), %esi")
#define CMP_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X76, 0X00 # cmpl (%bp), %esi")
#define CMP_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X34 # cmpl (%si), %esi")
#define CMP_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X35 # cmpl (%di), %esi")

#define CMP_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X28 # cmpl (%eax), %ebp")
#define CMP_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X2B # cmpl (%ebx), %ebp")
#define CMP_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X29 # cmpl (%ecx), %ebp")
#define CMP_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X2A # cmpl (%edx), %ebp")
#define CMP_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X2F # cmpl (%edi), %ebp")
#define CMP_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X2E # cmpl (%esi), %ebp")
#define CMP_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X6D, 0X00 # cmpl (%ebp), %ebp")
#define CMP_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X2C, 0X24 # cmpl (%esp), %ebp")
#define CMP_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X2F # cmpl (%bx), %ebp")
#define CMP_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X6E, 0X00 # cmpl (%bp), %ebp")
#define CMP_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X2C # cmpl (%si), %ebp")
#define CMP_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X2D # cmpl (%di), %ebp")

#define CMP_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X3B, 0X20 # cmpl (%eax), %esp")
#define CMP_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X3B, 0X23 # cmpl (%ebx), %esp")
#define CMP_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X3B, 0X21 # cmpl (%ecx), %esp")
#define CMP_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X3B, 0X22 # cmpl (%edx), %esp")
#define CMP_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X3B, 0X27 # cmpl (%edi), %esp")
#define CMP_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X3B, 0X26 # cmpl (%esi), %esp")
#define CMP_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X3B, 0X65, 0X00 # cmpl (%ebp), %esp")
#define CMP_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X3B, 0X24, 0X24 # cmpl (%esp), %esp")
#define CMP_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X3B, 0X27 # cmpl (%bx), %esp")
#define CMP_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X3B, 0X66, 0X00 # cmpl (%bp), %esp")
#define CMP_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X3B, 0X24 # cmpl (%si), %esp")
#define CMP_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X3B, 0X25 # cmpl (%di), %esp")

#define CMP_EAX_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X00 # cmpl %eax, (%eax)")
#define CMP_EAX_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X03 # cmpl %eax, (%ebx)")
#define CMP_EAX_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X01 # cmpl %eax, (%ecx)")
#define CMP_EAX_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X02 # cmpl %eax, (%edx)")
#define CMP_EAX_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X07 # cmpl %eax, (%edi)")
#define CMP_EAX_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X06 # cmpl %eax, (%esi)")
#define CMP_EAX_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X45, 0X00 # cmpl %eax, (%ebp)")
#define CMP_EAX_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X04, 0X24 # cmpl %eax, (%esp)")
#define CMP_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X07 # cmpl %eax, (%bx)")
#define CMP_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X46, 0X00 # cmpl %eax, (%bp)")
#define CMP_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X04 # cmpl %eax, (%si)")
#define CMP_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X05 # cmpl %eax, (%di)")

#define CMP_EBX_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X18 # cmpl %ebx, (%eax)")
#define CMP_EBX_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X1B # cmpl %ebx, (%ebx)")
#define CMP_EBX_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X19 # cmpl %ebx, (%ecx)")
#define CMP_EBX_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X1A # cmpl %ebx, (%edx)")
#define CMP_EBX_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X1F # cmpl %ebx, (%edi)")
#define CMP_EBX_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X1E # cmpl %ebx, (%esi)")
#define CMP_EBX_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X5D, 0X00 # cmpl %ebx, (%ebp)")
#define CMP_EBX_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X1C, 0X24 # cmpl %ebx, (%esp)")
#define CMP_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X1F # cmpl %ebx, (%bx)")
#define CMP_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X5E, 0X00 # cmpl %ebx, (%bp)")
#define CMP_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X1C # cmpl %ebx, (%si)")
#define CMP_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X1D # cmpl %ebx, (%di)")

#define CMP_ECX_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X08 # cmpl %ecx, (%eax)")
#define CMP_ECX_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X0B # cmpl %ecx, (%ebx)")
#define CMP_ECX_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X09 # cmpl %ecx, (%ecx)")
#define CMP_ECX_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X0A # cmpl %ecx, (%edx)")
#define CMP_ECX_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X0F # cmpl %ecx, (%edi)")
#define CMP_ECX_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X0E # cmpl %ecx, (%esi)")
#define CMP_ECX_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X4D, 0X00 # cmpl %ecx, (%ebp)")
#define CMP_ECX_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X0C, 0X24 # cmpl %ecx, (%esp)")
#define CMP_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X0F # cmpl %ecx, (%bx)")
#define CMP_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X4E, 0X00 # cmpl %ecx, (%bp)")
#define CMP_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X0C # cmpl %ecx, (%si)")
#define CMP_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X0D # cmpl %ecx, (%di)")

#define CMP_EDX_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X10 # cmpl %edx, (%eax)")
#define CMP_EDX_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X13 # cmpl %edx, (%ebx)")
#define CMP_EDX_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X11 # cmpl %edx, (%ecx)")
#define CMP_EDX_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X12 # cmpl %edx, (%edx)")
#define CMP_EDX_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X17 # cmpl %edx, (%edi)")
#define CMP_EDX_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X16 # cmpl %edx, (%esi)")
#define CMP_EDX_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X55, 0X00 # cmpl %edx, (%ebp)")
#define CMP_EDX_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X14, 0X24 # cmpl %edx, (%esp)")
#define CMP_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X17 # cmpl %edx, (%bx)")
#define CMP_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X56, 0X00 # cmpl %edx, (%bp)")
#define CMP_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X14 # cmpl %edx, (%si)")
#define CMP_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X15 # cmpl %edx, (%di)")

#define CMP_EDI_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X38 # cmpl %edi, (%eax)")
#define CMP_EDI_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X3B # cmpl %edi, (%ebx)")
#define CMP_EDI_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X39 # cmpl %edi, (%ecx)")
#define CMP_EDI_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X3A # cmpl %edi, (%edx)")
#define CMP_EDI_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X3F # cmpl %edi, (%edi)")
#define CMP_EDI_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X3E # cmpl %edi, (%esi)")
#define CMP_EDI_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X7D, 0X00 # cmpl %edi, (%ebp)")
#define CMP_EDI_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X3C, 0X24 # cmpl %edi, (%esp)")
#define CMP_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X3F # cmpl %edi, (%bx)")
#define CMP_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X7E, 0X00 # cmpl %edi, (%bp)")
#define CMP_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X3C # cmpl %edi, (%si)")
#define CMP_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X3D # cmpl %edi, (%di)")

#define CMP_ESI_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X30 # cmpl %esi, (%eax)")
#define CMP_ESI_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X33 # cmpl %esi, (%ebx)")
#define CMP_ESI_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X31 # cmpl %esi, (%ecx)")
#define CMP_ESI_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X32 # cmpl %esi, (%edx)")
#define CMP_ESI_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X37 # cmpl %esi, (%edi)")
#define CMP_ESI_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X36 # cmpl %esi, (%esi)")
#define CMP_ESI_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X75, 0X00 # cmpl %esi, (%ebp)")
#define CMP_ESI_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X34, 0X24 # cmpl %esi, (%esp)")
#define CMP_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X37 # cmpl %esi, (%bx)")
#define CMP_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X76, 0X00 # cmpl %esi, (%bp)")
#define CMP_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X34 # cmpl %esi, (%si)")
#define CMP_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X35 # cmpl %esi, (%di)")

#define CMP_EBP_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X28 # cmpl %ebp, (%eax)")
#define CMP_EBP_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X2B # cmpl %ebp, (%ebx)")
#define CMP_EBP_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X29 # cmpl %ebp, (%ecx)")
#define CMP_EBP_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X2A # cmpl %ebp, (%edx)")
#define CMP_EBP_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X2F # cmpl %ebp, (%edi)")
#define CMP_EBP_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X2E # cmpl %ebp, (%esi)")
#define CMP_EBP_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X6D, 0X00 # cmpl %ebp, (%ebp)")
#define CMP_EBP_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X2C, 0X24 # cmpl %ebp, (%esp)")
#define CMP_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X2F # cmpl %ebp, (%bx)")
#define CMP_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X6E, 0X00 # cmpl %ebp, (%bp)")
#define CMP_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X2C # cmpl %ebp, (%si)")
#define CMP_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X2D # cmpl %ebp, (%di)")

#define CMP_ESP_TO_PTR_EAX CMT_ASM(".byte 0X39, 0X20 # cmpl %esp, (%eax)")
#define CMP_ESP_TO_PTR_EBX CMT_ASM(".byte 0X39, 0X23 # cmpl %esp, (%ebx)")
#define CMP_ESP_TO_PTR_ECX CMT_ASM(".byte 0X39, 0X21 # cmpl %esp, (%ecx)")
#define CMP_ESP_TO_PTR_EDX CMT_ASM(".byte 0X39, 0X22 # cmpl %esp, (%edx)")
#define CMP_ESP_TO_PTR_EDI CMT_ASM(".byte 0X39, 0X27 # cmpl %esp, (%edi)")
#define CMP_ESP_TO_PTR_ESI CMT_ASM(".byte 0X39, 0X26 # cmpl %esp, (%esi)")
#define CMP_ESP_TO_PTR_EBP CMT_ASM(".byte 0X39, 0X65, 0X00 # cmpl %esp, (%ebp)")
#define CMP_ESP_TO_PTR_ESP CMT_ASM(".byte 0X39, 0X24, 0X24 # cmpl %esp, (%esp)")
#define CMP_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X39, 0X27 # cmpl %esp, (%bx)")
#define CMP_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X39, 0X66, 0X00 # cmpl %esp, (%bp)")
#define CMP_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X39, 0X24 # cmpl %esp, (%si)")
#define CMP_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X39, 0X25 # cmpl %esp, (%di)")

#define CMP_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X80 # cmpl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X83 # cmpl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X81 # cmpl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X82 # cmpl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X87 # cmpl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X86 # cmpl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X85 # cmpl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X87 # cmpl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X86 # cmpl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X84 # cmpl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X85 # cmpl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X98 # cmpl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9B # cmpl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X99 # cmpl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9A # cmpl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9F # cmpl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9E # cmpl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9D # cmpl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9F # cmpl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9E # cmpl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9C # cmpl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9D # cmpl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X88 # cmpl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8B # cmpl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X89 # cmpl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8A # cmpl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8F # cmpl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8E # cmpl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8D # cmpl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8F # cmpl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8E # cmpl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8C # cmpl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8D # cmpl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X90 # cmpl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X93 # cmpl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X91 # cmpl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X92 # cmpl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X97 # cmpl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X96 # cmpl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X95 # cmpl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X97 # cmpl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X96 # cmpl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X94 # cmpl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X95 # cmpl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB8 # cmpl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBB # cmpl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB9 # cmpl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBA # cmpl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBF # cmpl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBE # cmpl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBD # cmpl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBF # cmpl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBE # cmpl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBC # cmpl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBD # cmpl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB0 # cmpl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB3 # cmpl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB1 # cmpl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB2 # cmpl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB7 # cmpl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB6 # cmpl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB5 # cmpl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB7 # cmpl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB6 # cmpl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB4 # cmpl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB5 # cmpl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA8 # cmpl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAB # cmpl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA9 # cmpl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAA # cmpl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAF # cmpl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAE # cmpl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAD # cmpl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAF # cmpl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAE # cmpl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAC # cmpl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAD # cmpl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA0 # cmpl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA3 # cmpl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA1 # cmpl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA2 # cmpl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA7 # cmpl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA6 # cmpl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA5 # cmpl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA7 # cmpl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA6 # cmpl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA4 # cmpl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA5 # cmpl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X80 # cmpl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X83 # cmpl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X81 # cmpl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X82 # cmpl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X87 # cmpl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X86 # cmpl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X85 # cmpl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X84, 0X24 # cmpl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X87 # cmpl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X86 # cmpl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X84 # cmpl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X85 # cmpl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X98 # cmpl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9B # cmpl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X99 # cmpl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9A # cmpl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9F # cmpl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9E # cmpl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9D # cmpl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9C, 0X24 # cmpl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9F # cmpl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9E # cmpl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9C # cmpl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9D # cmpl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X88 # cmpl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8B # cmpl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X89 # cmpl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8A # cmpl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8F # cmpl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8E # cmpl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8D # cmpl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8C, 0X24 # cmpl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8F # cmpl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8E # cmpl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8C # cmpl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8D # cmpl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X90 # cmpl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X93 # cmpl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X91 # cmpl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X92 # cmpl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X97 # cmpl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X96 # cmpl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X95 # cmpl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X94, 0X24 # cmpl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X97 # cmpl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X96 # cmpl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X94 # cmpl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X95 # cmpl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB8 # cmpl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBB # cmpl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB9 # cmpl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBA # cmpl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBF # cmpl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBE # cmpl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBD # cmpl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBC, 0X24 # cmpl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBF # cmpl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBE # cmpl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBC # cmpl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBD # cmpl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB0 # cmpl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB3 # cmpl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB1 # cmpl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB2 # cmpl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB7 # cmpl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB6 # cmpl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB5 # cmpl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB4, 0X24 # cmpl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB7 # cmpl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB6 # cmpl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB4 # cmpl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB5 # cmpl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA8 # cmpl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAB # cmpl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA9 # cmpl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAA # cmpl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAF # cmpl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAE # cmpl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAD # cmpl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAC, 0X24 # cmpl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAF # cmpl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAE # cmpl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAC # cmpl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAD # cmpl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define CMP_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA0 # cmpl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA3 # cmpl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA1 # cmpl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA2 # cmpl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA7 # cmpl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA6 # cmpl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA5 # cmpl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA4, 0X24 # cmpl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA7 # cmpl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA6 # cmpl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA4 # cmpl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define CMP_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA5 # cmpl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X04, 0X25 # cmpl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X1C, 0X25 # cmpl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X0C, 0X25 # cmpl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X14, 0X25 # cmpl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X3C, 0X25 # cmpl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X34, 0X25 # cmpl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X2C, 0X25 # cmpl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X24, 0X25 # cmpl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X04, 0X25 # cmpl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X0C, 0X25 # cmpl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X14, 0X25 # cmpl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X1C, 0X25 # cmpl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X24, 0X25 # cmpl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X2C, 0X25 # cmpl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X34, 0X25 # cmpl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X3C, 0X25 # cmpl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X04, 0X25 # cmpl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X1C, 0X25 # cmpl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X0C, 0X25 # cmpl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X14, 0X25 # cmpl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X3C, 0X25 # cmpl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X34, 0X25 # cmpl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X2C, 0X25 # cmpl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X39, 0X24, 0X25 # cmpl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X04, 0X25 # cmpl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X0C, 0X25 # cmpl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X14, 0X25 # cmpl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X1C, 0X25 # cmpl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X24, 0X25 # cmpl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X2C, 0X25 # cmpl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X34, 0X25 # cmpl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X3C, 0X25 # cmpl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X00 # cmpl (%rax), %eax")
#define CMP_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X03 # cmpl (%rbx), %eax")
#define CMP_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X01 # cmpl (%rcx), %eax")
#define CMP_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X02 # cmpl (%rdx), %eax")
#define CMP_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X07 # cmpl (%rdi), %eax")
#define CMP_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X06 # cmpl (%rsi), %eax")
#define CMP_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X45, 0X00 # cmpl (%rbp), %eax")
#define CMP_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X04, 0X24 # cmpl (%rsp), %eax")
#define CMP_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X00 # cmpl (%r8), %eax")
#define CMP_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X01 # cmpl (%r9), %eax")
#define CMP_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X02 # cmpl (%r10), %eax")
#define CMP_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X03 # cmpl (%r11), %eax")
#define CMP_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X04, 0X24 # cmpl (%r12), %eax")
#define CMP_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X45, 0X00 # cmpl (%r13), %eax")
#define CMP_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X06 # cmpl (%r14), %eax")
#define CMP_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X07 # cmpl (%r15), %eax")
#define CMP_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X00 # cmpl (%eax), %eax")
#define CMP_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X03 # cmpl (%ebx), %eax")
#define CMP_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X01 # cmpl (%ecx), %eax")
#define CMP_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X02 # cmpl (%edx), %eax")
#define CMP_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X07 # cmpl (%edi), %eax")
#define CMP_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X06 # cmpl (%esi), %eax")
#define CMP_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X45, 0X00 # cmpl (%ebp), %eax")
#define CMP_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X04, 0X24 # cmpl (%esp), %eax")

#define CMP_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X18 # cmpl (%rax), %ebx")
#define CMP_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X1B # cmpl (%rbx), %ebx")
#define CMP_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X19 # cmpl (%rcx), %ebx")
#define CMP_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X1A # cmpl (%rdx), %ebx")
#define CMP_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X1F # cmpl (%rdi), %ebx")
#define CMP_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X1E # cmpl (%rsi), %ebx")
#define CMP_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X5D, 0X00 # cmpl (%rbp), %ebx")
#define CMP_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X1C, 0X24 # cmpl (%rsp), %ebx")
#define CMP_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X18 # cmpl (%r8), %ebx")
#define CMP_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X19 # cmpl (%r9), %ebx")
#define CMP_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X1A # cmpl (%r10), %ebx")
#define CMP_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X1B # cmpl (%r11), %ebx")
#define CMP_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X1C, 0X24 # cmpl (%r12), %ebx")
#define CMP_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X5D, 0X00 # cmpl (%r13), %ebx")
#define CMP_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X1E # cmpl (%r14), %ebx")
#define CMP_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X1F # cmpl (%r15), %ebx")
#define CMP_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X18 # cmpl (%eax), %ebx")
#define CMP_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X1B # cmpl (%ebx), %ebx")
#define CMP_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X19 # cmpl (%ecx), %ebx")
#define CMP_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X1A # cmpl (%edx), %ebx")
#define CMP_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X1F # cmpl (%edi), %ebx")
#define CMP_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X1E # cmpl (%esi), %ebx")
#define CMP_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X5D, 0X00 # cmpl (%ebp), %ebx")
#define CMP_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X1C, 0X24 # cmpl (%esp), %ebx")

#define CMP_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X08 # cmpl (%rax), %ecx")
#define CMP_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X0B # cmpl (%rbx), %ecx")
#define CMP_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X09 # cmpl (%rcx), %ecx")
#define CMP_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X0A # cmpl (%rdx), %ecx")
#define CMP_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X0F # cmpl (%rdi), %ecx")
#define CMP_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X0E # cmpl (%rsi), %ecx")
#define CMP_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X4D, 0X00 # cmpl (%rbp), %ecx")
#define CMP_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X0C, 0X24 # cmpl (%rsp), %ecx")
#define CMP_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X08 # cmpl (%r8), %ecx")
#define CMP_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X09 # cmpl (%r9), %ecx")
#define CMP_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X0A # cmpl (%r10), %ecx")
#define CMP_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X0B # cmpl (%r11), %ecx")
#define CMP_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X0C, 0X24 # cmpl (%r12), %ecx")
#define CMP_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X4D, 0X00 # cmpl (%r13), %ecx")
#define CMP_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X0E # cmpl (%r14), %ecx")
#define CMP_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X0F # cmpl (%r15), %ecx")
#define CMP_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X08 # cmpl (%eax), %ecx")
#define CMP_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X0B # cmpl (%ebx), %ecx")
#define CMP_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X09 # cmpl (%ecx), %ecx")
#define CMP_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X0A # cmpl (%edx), %ecx")
#define CMP_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X0F # cmpl (%edi), %ecx")
#define CMP_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X0E # cmpl (%esi), %ecx")
#define CMP_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X4D, 0X00 # cmpl (%ebp), %ecx")
#define CMP_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X0C, 0X24 # cmpl (%esp), %ecx")

#define CMP_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X10 # cmpl (%rax), %edx")
#define CMP_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X13 # cmpl (%rbx), %edx")
#define CMP_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X11 # cmpl (%rcx), %edx")
#define CMP_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X12 # cmpl (%rdx), %edx")
#define CMP_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X17 # cmpl (%rdi), %edx")
#define CMP_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X16 # cmpl (%rsi), %edx")
#define CMP_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X55, 0X00 # cmpl (%rbp), %edx")
#define CMP_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X14, 0X24 # cmpl (%rsp), %edx")
#define CMP_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X10 # cmpl (%r8), %edx")
#define CMP_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X11 # cmpl (%r9), %edx")
#define CMP_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X12 # cmpl (%r10), %edx")
#define CMP_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X13 # cmpl (%r11), %edx")
#define CMP_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X14, 0X24 # cmpl (%r12), %edx")
#define CMP_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X55, 0X00 # cmpl (%r13), %edx")
#define CMP_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X16 # cmpl (%r14), %edx")
#define CMP_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X17 # cmpl (%r15), %edx")
#define CMP_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X10 # cmpl (%eax), %edx")
#define CMP_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X13 # cmpl (%ebx), %edx")
#define CMP_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X11 # cmpl (%ecx), %edx")
#define CMP_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X12 # cmpl (%edx), %edx")
#define CMP_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X17 # cmpl (%edi), %edx")
#define CMP_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X16 # cmpl (%esi), %edx")
#define CMP_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X55, 0X00 # cmpl (%ebp), %edx")
#define CMP_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X14, 0X24 # cmpl (%esp), %edx")

#define CMP_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X38 # cmpl (%rax), %edi")
#define CMP_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X3B # cmpl (%rbx), %edi")
#define CMP_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X39 # cmpl (%rcx), %edi")
#define CMP_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X3A # cmpl (%rdx), %edi")
#define CMP_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X3F # cmpl (%rdi), %edi")
#define CMP_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X3E # cmpl (%rsi), %edi")
#define CMP_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X7D, 0X00 # cmpl (%rbp), %edi")
#define CMP_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X3C, 0X24 # cmpl (%rsp), %edi")
#define CMP_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X38 # cmpl (%r8), %edi")
#define CMP_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X39 # cmpl (%r9), %edi")
#define CMP_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X3A # cmpl (%r10), %edi")
#define CMP_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X3B # cmpl (%r11), %edi")
#define CMP_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X3C, 0X24 # cmpl (%r12), %edi")
#define CMP_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X7D, 0X00 # cmpl (%r13), %edi")
#define CMP_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X3E # cmpl (%r14), %edi")
#define CMP_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X3F # cmpl (%r15), %edi")
#define CMP_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X38 # cmpl (%eax), %edi")
#define CMP_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X3B # cmpl (%ebx), %edi")
#define CMP_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X39 # cmpl (%ecx), %edi")
#define CMP_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X3A # cmpl (%edx), %edi")
#define CMP_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X3F # cmpl (%edi), %edi")
#define CMP_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X3E # cmpl (%esi), %edi")
#define CMP_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X7D, 0X00 # cmpl (%ebp), %edi")
#define CMP_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X3C, 0X24 # cmpl (%esp), %edi")

#define CMP_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X30 # cmpl (%rax), %esi")
#define CMP_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X33 # cmpl (%rbx), %esi")
#define CMP_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X31 # cmpl (%rcx), %esi")
#define CMP_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X32 # cmpl (%rdx), %esi")
#define CMP_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X37 # cmpl (%rdi), %esi")
#define CMP_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X36 # cmpl (%rsi), %esi")
#define CMP_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X75, 0X00 # cmpl (%rbp), %esi")
#define CMP_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X34, 0X24 # cmpl (%rsp), %esi")
#define CMP_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X30 # cmpl (%r8), %esi")
#define CMP_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X31 # cmpl (%r9), %esi")
#define CMP_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X32 # cmpl (%r10), %esi")
#define CMP_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X33 # cmpl (%r11), %esi")
#define CMP_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X34, 0X24 # cmpl (%r12), %esi")
#define CMP_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X75, 0X00 # cmpl (%r13), %esi")
#define CMP_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X36 # cmpl (%r14), %esi")
#define CMP_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X37 # cmpl (%r15), %esi")
#define CMP_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X30 # cmpl (%eax), %esi")
#define CMP_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X33 # cmpl (%ebx), %esi")
#define CMP_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X31 # cmpl (%ecx), %esi")
#define CMP_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X32 # cmpl (%edx), %esi")
#define CMP_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X37 # cmpl (%edi), %esi")
#define CMP_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X36 # cmpl (%esi), %esi")
#define CMP_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X75, 0X00 # cmpl (%ebp), %esi")
#define CMP_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X34, 0X24 # cmpl (%esp), %esi")

#define CMP_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X28 # cmpl (%rax), %ebp")
#define CMP_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X2B # cmpl (%rbx), %ebp")
#define CMP_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X29 # cmpl (%rcx), %ebp")
#define CMP_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X2A # cmpl (%rdx), %ebp")
#define CMP_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X2F # cmpl (%rdi), %ebp")
#define CMP_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X2E # cmpl (%rsi), %ebp")
#define CMP_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X6D, 0X00 # cmpl (%rbp), %ebp")
#define CMP_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X2C, 0X24 # cmpl (%rsp), %ebp")
#define CMP_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X28 # cmpl (%r8), %ebp")
#define CMP_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X29 # cmpl (%r9), %ebp")
#define CMP_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X2A # cmpl (%r10), %ebp")
#define CMP_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X2B # cmpl (%r11), %ebp")
#define CMP_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X2C, 0X24 # cmpl (%r12), %ebp")
#define CMP_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X6D, 0X00 # cmpl (%r13), %ebp")
#define CMP_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X2E # cmpl (%r14), %ebp")
#define CMP_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X2F # cmpl (%r15), %ebp")
#define CMP_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X28 # cmpl (%eax), %ebp")
#define CMP_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X2B # cmpl (%ebx), %ebp")
#define CMP_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X29 # cmpl (%ecx), %ebp")
#define CMP_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X2A # cmpl (%edx), %ebp")
#define CMP_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X2F # cmpl (%edi), %ebp")
#define CMP_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X2E # cmpl (%esi), %ebp")
#define CMP_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X6D, 0X00 # cmpl (%ebp), %ebp")
#define CMP_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X2C, 0X24 # cmpl (%esp), %ebp")

#define CMP_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X3B, 0X20 # cmpl (%rax), %esp")
#define CMP_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X3B, 0X23 # cmpl (%rbx), %esp")
#define CMP_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X3B, 0X21 # cmpl (%rcx), %esp")
#define CMP_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X3B, 0X22 # cmpl (%rdx), %esp")
#define CMP_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X3B, 0X27 # cmpl (%rdi), %esp")
#define CMP_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X3B, 0X26 # cmpl (%rsi), %esp")
#define CMP_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X3B, 0X65, 0X00 # cmpl (%rbp), %esp")
#define CMP_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X3B, 0X24, 0X24 # cmpl (%rsp), %esp")
#define CMP_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X3B, 0X20 # cmpl (%r8), %esp")
#define CMP_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X3B, 0X21 # cmpl (%r9), %esp")
#define CMP_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X3B, 0X22 # cmpl (%r10), %esp")
#define CMP_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X3B, 0X23 # cmpl (%r11), %esp")
#define CMP_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X3B, 0X24, 0X24 # cmpl (%r12), %esp")
#define CMP_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X3B, 0X65, 0X00 # cmpl (%r13), %esp")
#define CMP_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X3B, 0X26 # cmpl (%r14), %esp")
#define CMP_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X3B, 0X27 # cmpl (%r15), %esp")
#define CMP_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X3B, 0X20 # cmpl (%eax), %esp")
#define CMP_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X3B, 0X23 # cmpl (%ebx), %esp")
#define CMP_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X3B, 0X21 # cmpl (%ecx), %esp")
#define CMP_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X3B, 0X22 # cmpl (%edx), %esp")
#define CMP_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X3B, 0X27 # cmpl (%edi), %esp")
#define CMP_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X3B, 0X26 # cmpl (%esi), %esp")
#define CMP_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X3B, 0X65, 0X00 # cmpl (%ebp), %esp")
#define CMP_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X3B, 0X24, 0X24 # cmpl (%esp), %esp")

#define CMP_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X00 # cmpl (%rax), %r8d")
#define CMP_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X03 # cmpl (%rbx), %r8d")
#define CMP_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X01 # cmpl (%rcx), %r8d")
#define CMP_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X02 # cmpl (%rdx), %r8d")
#define CMP_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X07 # cmpl (%rdi), %r8d")
#define CMP_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X06 # cmpl (%rsi), %r8d")
#define CMP_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X45, 0X00 # cmpl (%rbp), %r8d")
#define CMP_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X04, 0X24 # cmpl (%rsp), %r8d")
#define CMP_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X00 # cmpl (%r8), %r8d")
#define CMP_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X01 # cmpl (%r9), %r8d")
#define CMP_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X02 # cmpl (%r10), %r8d")
#define CMP_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X03 # cmpl (%r11), %r8d")
#define CMP_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X04, 0X24 # cmpl (%r12), %r8d")
#define CMP_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X45, 0X00 # cmpl (%r13), %r8d")
#define CMP_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X06 # cmpl (%r14), %r8d")
#define CMP_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X07 # cmpl (%r15), %r8d")
#define CMP_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X00 # cmpl (%eax), %r8d")
#define CMP_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X03 # cmpl (%ebx), %r8d")
#define CMP_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X01 # cmpl (%ecx), %r8d")
#define CMP_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X02 # cmpl (%edx), %r8d")
#define CMP_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X07 # cmpl (%edi), %r8d")
#define CMP_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X06 # cmpl (%esi), %r8d")
#define CMP_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X45, 0X00 # cmpl (%ebp), %r8d")
#define CMP_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X04, 0X24 # cmpl (%esp), %r8d")

#define CMP_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X08 # cmpl (%rax), %r9d")
#define CMP_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X0B # cmpl (%rbx), %r9d")
#define CMP_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X09 # cmpl (%rcx), %r9d")
#define CMP_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X0A # cmpl (%rdx), %r9d")
#define CMP_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X0F # cmpl (%rdi), %r9d")
#define CMP_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X0E # cmpl (%rsi), %r9d")
#define CMP_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X4D, 0X00 # cmpl (%rbp), %r9d")
#define CMP_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X0C, 0X24 # cmpl (%rsp), %r9d")
#define CMP_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X08 # cmpl (%r8), %r9d")
#define CMP_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X09 # cmpl (%r9), %r9d")
#define CMP_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X0A # cmpl (%r10), %r9d")
#define CMP_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X0B # cmpl (%r11), %r9d")
#define CMP_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X0C, 0X24 # cmpl (%r12), %r9d")
#define CMP_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X4D, 0X00 # cmpl (%r13), %r9d")
#define CMP_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X0E # cmpl (%r14), %r9d")
#define CMP_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X0F # cmpl (%r15), %r9d")
#define CMP_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X08 # cmpl (%eax), %r9d")
#define CMP_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X0B # cmpl (%ebx), %r9d")
#define CMP_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X09 # cmpl (%ecx), %r9d")
#define CMP_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X0A # cmpl (%edx), %r9d")
#define CMP_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X0F # cmpl (%edi), %r9d")
#define CMP_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X0E # cmpl (%esi), %r9d")
#define CMP_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X4D, 0X00 # cmpl (%ebp), %r9d")
#define CMP_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X0C, 0X24 # cmpl (%esp), %r9d")

#define CMP_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X10 # cmpl (%rax), %r10d")
#define CMP_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X13 # cmpl (%rbx), %r10d")
#define CMP_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X11 # cmpl (%rcx), %r10d")
#define CMP_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X12 # cmpl (%rdx), %r10d")
#define CMP_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X17 # cmpl (%rdi), %r10d")
#define CMP_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X16 # cmpl (%rsi), %r10d")
#define CMP_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X55, 0X00 # cmpl (%rbp), %r10d")
#define CMP_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X14, 0X24 # cmpl (%rsp), %r10d")
#define CMP_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X10 # cmpl (%r8), %r10d")
#define CMP_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X11 # cmpl (%r9), %r10d")
#define CMP_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X12 # cmpl (%r10), %r10d")
#define CMP_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X13 # cmpl (%r11), %r10d")
#define CMP_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X14, 0X24 # cmpl (%r12), %r10d")
#define CMP_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X55, 0X00 # cmpl (%r13), %r10d")
#define CMP_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X16 # cmpl (%r14), %r10d")
#define CMP_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X17 # cmpl (%r15), %r10d")
#define CMP_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X10 # cmpl (%eax), %r10d")
#define CMP_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X13 # cmpl (%ebx), %r10d")
#define CMP_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X11 # cmpl (%ecx), %r10d")
#define CMP_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X12 # cmpl (%edx), %r10d")
#define CMP_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X17 # cmpl (%edi), %r10d")
#define CMP_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X16 # cmpl (%esi), %r10d")
#define CMP_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X55, 0X00 # cmpl (%ebp), %r10d")
#define CMP_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X14, 0X24 # cmpl (%esp), %r10d")

#define CMP_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X18 # cmpl (%rax), %r11d")
#define CMP_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X1B # cmpl (%rbx), %r11d")
#define CMP_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X19 # cmpl (%rcx), %r11d")
#define CMP_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X1A # cmpl (%rdx), %r11d")
#define CMP_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X1F # cmpl (%rdi), %r11d")
#define CMP_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X1E # cmpl (%rsi), %r11d")
#define CMP_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X5D, 0X00 # cmpl (%rbp), %r11d")
#define CMP_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X1C, 0X24 # cmpl (%rsp), %r11d")
#define CMP_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X18 # cmpl (%r8), %r11d")
#define CMP_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X19 # cmpl (%r9), %r11d")
#define CMP_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X1A # cmpl (%r10), %r11d")
#define CMP_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X1B # cmpl (%r11), %r11d")
#define CMP_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X1C, 0X24 # cmpl (%r12), %r11d")
#define CMP_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X5D, 0X00 # cmpl (%r13), %r11d")
#define CMP_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X1E # cmpl (%r14), %r11d")
#define CMP_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X1F # cmpl (%r15), %r11d")
#define CMP_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X18 # cmpl (%eax), %r11d")
#define CMP_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X1B # cmpl (%ebx), %r11d")
#define CMP_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X19 # cmpl (%ecx), %r11d")
#define CMP_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X1A # cmpl (%edx), %r11d")
#define CMP_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X1F # cmpl (%edi), %r11d")
#define CMP_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X1E # cmpl (%esi), %r11d")
#define CMP_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X5D, 0X00 # cmpl (%ebp), %r11d")
#define CMP_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X1C, 0X24 # cmpl (%esp), %r11d")

#define CMP_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X20 # cmpl (%rax), %r12d")
#define CMP_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X23 # cmpl (%rbx), %r12d")
#define CMP_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X21 # cmpl (%rcx), %r12d")
#define CMP_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X22 # cmpl (%rdx), %r12d")
#define CMP_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X27 # cmpl (%rdi), %r12d")
#define CMP_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X26 # cmpl (%rsi), %r12d")
#define CMP_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X65, 0X00 # cmpl (%rbp), %r12d")
#define CMP_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X24, 0X24 # cmpl (%rsp), %r12d")
#define CMP_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X20 # cmpl (%r8), %r12d")
#define CMP_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X21 # cmpl (%r9), %r12d")
#define CMP_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X22 # cmpl (%r10), %r12d")
#define CMP_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X23 # cmpl (%r11), %r12d")
#define CMP_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X24, 0X24 # cmpl (%r12), %r12d")
#define CMP_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X65, 0X00 # cmpl (%r13), %r12d")
#define CMP_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X26 # cmpl (%r14), %r12d")
#define CMP_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X27 # cmpl (%r15), %r12d")
#define CMP_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X20 # cmpl (%eax), %r12d")
#define CMP_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X23 # cmpl (%ebx), %r12d")
#define CMP_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X21 # cmpl (%ecx), %r12d")
#define CMP_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X22 # cmpl (%edx), %r12d")
#define CMP_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X27 # cmpl (%edi), %r12d")
#define CMP_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X26 # cmpl (%esi), %r12d")
#define CMP_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X65, 0X00 # cmpl (%ebp), %r12d")
#define CMP_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X24, 0X24 # cmpl (%esp), %r12d")

#define CMP_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X28 # cmpl (%rax), %r13d")
#define CMP_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X2B # cmpl (%rbx), %r13d")
#define CMP_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X29 # cmpl (%rcx), %r13d")
#define CMP_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X2A # cmpl (%rdx), %r13d")
#define CMP_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X2F # cmpl (%rdi), %r13d")
#define CMP_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X2E # cmpl (%rsi), %r13d")
#define CMP_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X6D, 0X00 # cmpl (%rbp), %r13d")
#define CMP_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X2C, 0X24 # cmpl (%rsp), %r13d")
#define CMP_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X28 # cmpl (%r8), %r13d")
#define CMP_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X29 # cmpl (%r9), %r13d")
#define CMP_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X2A # cmpl (%r10), %r13d")
#define CMP_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X2B # cmpl (%r11), %r13d")
#define CMP_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X2C, 0X24 # cmpl (%r12), %r13d")
#define CMP_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X6D, 0X00 # cmpl (%r13), %r13d")
#define CMP_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X2E # cmpl (%r14), %r13d")
#define CMP_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X2F # cmpl (%r15), %r13d")
#define CMP_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X28 # cmpl (%eax), %r13d")
#define CMP_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X2B # cmpl (%ebx), %r13d")
#define CMP_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X29 # cmpl (%ecx), %r13d")
#define CMP_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X2A # cmpl (%edx), %r13d")
#define CMP_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X2F # cmpl (%edi), %r13d")
#define CMP_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X2E # cmpl (%esi), %r13d")
#define CMP_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X6D, 0X00 # cmpl (%ebp), %r13d")
#define CMP_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X2C, 0X24 # cmpl (%esp), %r13d")

#define CMP_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X30 # cmpl (%rax), %r14d")
#define CMP_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X33 # cmpl (%rbx), %r14d")
#define CMP_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X31 # cmpl (%rcx), %r14d")
#define CMP_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X32 # cmpl (%rdx), %r14d")
#define CMP_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X37 # cmpl (%rdi), %r14d")
#define CMP_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X36 # cmpl (%rsi), %r14d")
#define CMP_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X75, 0X00 # cmpl (%rbp), %r14d")
#define CMP_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X34, 0X24 # cmpl (%rsp), %r14d")
#define CMP_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X30 # cmpl (%r8), %r14d")
#define CMP_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X31 # cmpl (%r9), %r14d")
#define CMP_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X32 # cmpl (%r10), %r14d")
#define CMP_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X33 # cmpl (%r11), %r14d")
#define CMP_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X34, 0X24 # cmpl (%r12), %r14d")
#define CMP_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X75, 0X00 # cmpl (%r13), %r14d")
#define CMP_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X36 # cmpl (%r14), %r14d")
#define CMP_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X37 # cmpl (%r15), %r14d")
#define CMP_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X30 # cmpl (%eax), %r14d")
#define CMP_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X33 # cmpl (%ebx), %r14d")
#define CMP_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X31 # cmpl (%ecx), %r14d")
#define CMP_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X32 # cmpl (%edx), %r14d")
#define CMP_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X37 # cmpl (%edi), %r14d")
#define CMP_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X36 # cmpl (%esi), %r14d")
#define CMP_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X75, 0X00 # cmpl (%ebp), %r14d")
#define CMP_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X34, 0X24 # cmpl (%esp), %r14d")

#define CMP_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X3B, 0X38 # cmpl (%rax), %r15d")
#define CMP_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X3B, 0X3B # cmpl (%rbx), %r15d")
#define CMP_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X3B, 0X39 # cmpl (%rcx), %r15d")
#define CMP_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X3B, 0X3A # cmpl (%rdx), %r15d")
#define CMP_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X3B, 0X3F # cmpl (%rdi), %r15d")
#define CMP_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X3B, 0X3E # cmpl (%rsi), %r15d")
#define CMP_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X3B, 0X7D, 0X00 # cmpl (%rbp), %r15d")
#define CMP_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X3B, 0X3C, 0X24 # cmpl (%rsp), %r15d")
#define CMP_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X3B, 0X38 # cmpl (%r8), %r15d")
#define CMP_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X3B, 0X39 # cmpl (%r9), %r15d")
#define CMP_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X3B, 0X3A # cmpl (%r10), %r15d")
#define CMP_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X3B, 0X3B # cmpl (%r11), %r15d")
#define CMP_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X3B, 0X3C, 0X24 # cmpl (%r12), %r15d")
#define CMP_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X3B, 0X7D, 0X00 # cmpl (%r13), %r15d")
#define CMP_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X3B, 0X3E # cmpl (%r14), %r15d")
#define CMP_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X3B, 0X3F # cmpl (%r15), %r15d")
#define CMP_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X38 # cmpl (%eax), %r15d")
#define CMP_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X3B # cmpl (%ebx), %r15d")
#define CMP_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X39 # cmpl (%ecx), %r15d")
#define CMP_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X3A # cmpl (%edx), %r15d")
#define CMP_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X3F # cmpl (%edi), %r15d")
#define CMP_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X3E # cmpl (%esi), %r15d")
#define CMP_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X7D, 0X00 # cmpl (%ebp), %r15d")
#define CMP_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X3C, 0X24 # cmpl (%esp), %r15d")

#define CMP_EAX_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X00 # cmpl %eax, (%rax)")
#define CMP_EAX_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X03 # cmpl %eax, (%rbx)")
#define CMP_EAX_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X01 # cmpl %eax, (%rcx)")
#define CMP_EAX_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X02 # cmpl %eax, (%rdx)")
#define CMP_EAX_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X07 # cmpl %eax, (%rdi)")
#define CMP_EAX_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X06 # cmpl %eax, (%rsi)")
#define CMP_EAX_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X45, 0X00 # cmpl %eax, (%rbp)")
#define CMP_EAX_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X04, 0X24 # cmpl %eax, (%rsp)")
#define CMP_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X00 # cmpl %eax, (%r8)")
#define CMP_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X01 # cmpl %eax, (%r9)")
#define CMP_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X02 # cmpl %eax, (%r10)")
#define CMP_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X03 # cmpl %eax, (%r11)")
#define CMP_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X04, 0X24 # cmpl %eax, (%r12)")
#define CMP_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X45, 0X00 # cmpl %eax, (%r13)")
#define CMP_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X06 # cmpl %eax, (%r14)")
#define CMP_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X07 # cmpl %eax, (%r15)")
#define CMP_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X00 # cmpl %eax, (%eax)")
#define CMP_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X03 # cmpl %eax, (%ebx)")
#define CMP_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X01 # cmpl %eax, (%ecx)")
#define CMP_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X02 # cmpl %eax, (%edx)")
#define CMP_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X07 # cmpl %eax, (%edi)")
#define CMP_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X06 # cmpl %eax, (%esi)")
#define CMP_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X45, 0X00 # cmpl %eax, (%ebp)")
#define CMP_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X04, 0X24 # cmpl %eax, (%esp)")

#define CMP_EBX_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X18 # cmpl %ebx, (%rax)")
#define CMP_EBX_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X1B # cmpl %ebx, (%rbx)")
#define CMP_EBX_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X19 # cmpl %ebx, (%rcx)")
#define CMP_EBX_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X1A # cmpl %ebx, (%rdx)")
#define CMP_EBX_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X1F # cmpl %ebx, (%rdi)")
#define CMP_EBX_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X1E # cmpl %ebx, (%rsi)")
#define CMP_EBX_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X5D, 0X00 # cmpl %ebx, (%rbp)")
#define CMP_EBX_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X1C, 0X24 # cmpl %ebx, (%rsp)")
#define CMP_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X18 # cmpl %ebx, (%r8)")
#define CMP_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X19 # cmpl %ebx, (%r9)")
#define CMP_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X1A # cmpl %ebx, (%r10)")
#define CMP_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X1B # cmpl %ebx, (%r11)")
#define CMP_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X1C, 0X24 # cmpl %ebx, (%r12)")
#define CMP_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X5D, 0X00 # cmpl %ebx, (%r13)")
#define CMP_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X1E # cmpl %ebx, (%r14)")
#define CMP_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X1F # cmpl %ebx, (%r15)")
#define CMP_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X18 # cmpl %ebx, (%eax)")
#define CMP_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X1B # cmpl %ebx, (%ebx)")
#define CMP_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X19 # cmpl %ebx, (%ecx)")
#define CMP_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X1A # cmpl %ebx, (%edx)")
#define CMP_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X1F # cmpl %ebx, (%edi)")
#define CMP_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X1E # cmpl %ebx, (%esi)")
#define CMP_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X5D, 0X00 # cmpl %ebx, (%ebp)")
#define CMP_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X1C, 0X24 # cmpl %ebx, (%esp)")

#define CMP_ECX_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X08 # cmpl %ecx, (%rax)")
#define CMP_ECX_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X0B # cmpl %ecx, (%rbx)")
#define CMP_ECX_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X09 # cmpl %ecx, (%rcx)")
#define CMP_ECX_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X0A # cmpl %ecx, (%rdx)")
#define CMP_ECX_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X0F # cmpl %ecx, (%rdi)")
#define CMP_ECX_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X0E # cmpl %ecx, (%rsi)")
#define CMP_ECX_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X4D, 0X00 # cmpl %ecx, (%rbp)")
#define CMP_ECX_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X0C, 0X24 # cmpl %ecx, (%rsp)")
#define CMP_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X08 # cmpl %ecx, (%r8)")
#define CMP_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X09 # cmpl %ecx, (%r9)")
#define CMP_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X0A # cmpl %ecx, (%r10)")
#define CMP_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X0B # cmpl %ecx, (%r11)")
#define CMP_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X0C, 0X24 # cmpl %ecx, (%r12)")
#define CMP_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X4D, 0X00 # cmpl %ecx, (%r13)")
#define CMP_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X0E # cmpl %ecx, (%r14)")
#define CMP_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X0F # cmpl %ecx, (%r15)")
#define CMP_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X08 # cmpl %ecx, (%eax)")
#define CMP_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X0B # cmpl %ecx, (%ebx)")
#define CMP_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X09 # cmpl %ecx, (%ecx)")
#define CMP_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X0A # cmpl %ecx, (%edx)")
#define CMP_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X0F # cmpl %ecx, (%edi)")
#define CMP_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X0E # cmpl %ecx, (%esi)")
#define CMP_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X4D, 0X00 # cmpl %ecx, (%ebp)")
#define CMP_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X0C, 0X24 # cmpl %ecx, (%esp)")

#define CMP_EDX_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X10 # cmpl %edx, (%rax)")
#define CMP_EDX_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X13 # cmpl %edx, (%rbx)")
#define CMP_EDX_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X11 # cmpl %edx, (%rcx)")
#define CMP_EDX_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X12 # cmpl %edx, (%rdx)")
#define CMP_EDX_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X17 # cmpl %edx, (%rdi)")
#define CMP_EDX_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X16 # cmpl %edx, (%rsi)")
#define CMP_EDX_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X55, 0X00 # cmpl %edx, (%rbp)")
#define CMP_EDX_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X14, 0X24 # cmpl %edx, (%rsp)")
#define CMP_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X10 # cmpl %edx, (%r8)")
#define CMP_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X11 # cmpl %edx, (%r9)")
#define CMP_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X12 # cmpl %edx, (%r10)")
#define CMP_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X13 # cmpl %edx, (%r11)")
#define CMP_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X14, 0X24 # cmpl %edx, (%r12)")
#define CMP_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X55, 0X00 # cmpl %edx, (%r13)")
#define CMP_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X16 # cmpl %edx, (%r14)")
#define CMP_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X17 # cmpl %edx, (%r15)")
#define CMP_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X10 # cmpl %edx, (%eax)")
#define CMP_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X13 # cmpl %edx, (%ebx)")
#define CMP_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X11 # cmpl %edx, (%ecx)")
#define CMP_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X12 # cmpl %edx, (%edx)")
#define CMP_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X17 # cmpl %edx, (%edi)")
#define CMP_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X16 # cmpl %edx, (%esi)")
#define CMP_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X55, 0X00 # cmpl %edx, (%ebp)")
#define CMP_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X14, 0X24 # cmpl %edx, (%esp)")

#define CMP_EDI_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X38 # cmpl %edi, (%rax)")
#define CMP_EDI_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X3B # cmpl %edi, (%rbx)")
#define CMP_EDI_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X39 # cmpl %edi, (%rcx)")
#define CMP_EDI_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X3A # cmpl %edi, (%rdx)")
#define CMP_EDI_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X3F # cmpl %edi, (%rdi)")
#define CMP_EDI_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X3E # cmpl %edi, (%rsi)")
#define CMP_EDI_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X7D, 0X00 # cmpl %edi, (%rbp)")
#define CMP_EDI_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X3C, 0X24 # cmpl %edi, (%rsp)")
#define CMP_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X38 # cmpl %edi, (%r8)")
#define CMP_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X39 # cmpl %edi, (%r9)")
#define CMP_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X3A # cmpl %edi, (%r10)")
#define CMP_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X3B # cmpl %edi, (%r11)")
#define CMP_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X3C, 0X24 # cmpl %edi, (%r12)")
#define CMP_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X7D, 0X00 # cmpl %edi, (%r13)")
#define CMP_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X3E # cmpl %edi, (%r14)")
#define CMP_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X3F # cmpl %edi, (%r15)")
#define CMP_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X38 # cmpl %edi, (%eax)")
#define CMP_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X3B # cmpl %edi, (%ebx)")
#define CMP_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X39 # cmpl %edi, (%ecx)")
#define CMP_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X3A # cmpl %edi, (%edx)")
#define CMP_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X3F # cmpl %edi, (%edi)")
#define CMP_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X3E # cmpl %edi, (%esi)")
#define CMP_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X7D, 0X00 # cmpl %edi, (%ebp)")
#define CMP_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X3C, 0X24 # cmpl %edi, (%esp)")

#define CMP_ESI_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X30 # cmpl %esi, (%rax)")
#define CMP_ESI_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X33 # cmpl %esi, (%rbx)")
#define CMP_ESI_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X31 # cmpl %esi, (%rcx)")
#define CMP_ESI_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X32 # cmpl %esi, (%rdx)")
#define CMP_ESI_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X37 # cmpl %esi, (%rdi)")
#define CMP_ESI_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X36 # cmpl %esi, (%rsi)")
#define CMP_ESI_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X75, 0X00 # cmpl %esi, (%rbp)")
#define CMP_ESI_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X34, 0X24 # cmpl %esi, (%rsp)")
#define CMP_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X30 # cmpl %esi, (%r8)")
#define CMP_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X31 # cmpl %esi, (%r9)")
#define CMP_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X32 # cmpl %esi, (%r10)")
#define CMP_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X33 # cmpl %esi, (%r11)")
#define CMP_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X34, 0X24 # cmpl %esi, (%r12)")
#define CMP_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X75, 0X00 # cmpl %esi, (%r13)")
#define CMP_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X36 # cmpl %esi, (%r14)")
#define CMP_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X37 # cmpl %esi, (%r15)")
#define CMP_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X30 # cmpl %esi, (%eax)")
#define CMP_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X33 # cmpl %esi, (%ebx)")
#define CMP_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X31 # cmpl %esi, (%ecx)")
#define CMP_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X32 # cmpl %esi, (%edx)")
#define CMP_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X37 # cmpl %esi, (%edi)")
#define CMP_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X36 # cmpl %esi, (%esi)")
#define CMP_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X75, 0X00 # cmpl %esi, (%ebp)")
#define CMP_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X34, 0X24 # cmpl %esi, (%esp)")

#define CMP_EBP_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X28 # cmpl %ebp, (%rax)")
#define CMP_EBP_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X2B # cmpl %ebp, (%rbx)")
#define CMP_EBP_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X29 # cmpl %ebp, (%rcx)")
#define CMP_EBP_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X2A # cmpl %ebp, (%rdx)")
#define CMP_EBP_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X2F # cmpl %ebp, (%rdi)")
#define CMP_EBP_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X2E # cmpl %ebp, (%rsi)")
#define CMP_EBP_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X6D, 0X00 # cmpl %ebp, (%rbp)")
#define CMP_EBP_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X2C, 0X24 # cmpl %ebp, (%rsp)")
#define CMP_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X28 # cmpl %ebp, (%r8)")
#define CMP_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X29 # cmpl %ebp, (%r9)")
#define CMP_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X2A # cmpl %ebp, (%r10)")
#define CMP_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X2B # cmpl %ebp, (%r11)")
#define CMP_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X2C, 0X24 # cmpl %ebp, (%r12)")
#define CMP_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X6D, 0X00 # cmpl %ebp, (%r13)")
#define CMP_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X2E # cmpl %ebp, (%r14)")
#define CMP_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X2F # cmpl %ebp, (%r15)")
#define CMP_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X28 # cmpl %ebp, (%eax)")
#define CMP_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X2B # cmpl %ebp, (%ebx)")
#define CMP_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X29 # cmpl %ebp, (%ecx)")
#define CMP_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X2A # cmpl %ebp, (%edx)")
#define CMP_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X2F # cmpl %ebp, (%edi)")
#define CMP_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X2E # cmpl %ebp, (%esi)")
#define CMP_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X6D, 0X00 # cmpl %ebp, (%ebp)")
#define CMP_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X2C, 0X24 # cmpl %ebp, (%esp)")

#define CMP_ESP_TO_PTR_RAX CMT_ASM(".byte 0X39, 0X20 # cmpl %esp, (%rax)")
#define CMP_ESP_TO_PTR_RBX CMT_ASM(".byte 0X39, 0X23 # cmpl %esp, (%rbx)")
#define CMP_ESP_TO_PTR_RCX CMT_ASM(".byte 0X39, 0X21 # cmpl %esp, (%rcx)")
#define CMP_ESP_TO_PTR_RDX CMT_ASM(".byte 0X39, 0X22 # cmpl %esp, (%rdx)")
#define CMP_ESP_TO_PTR_RDI CMT_ASM(".byte 0X39, 0X27 # cmpl %esp, (%rdi)")
#define CMP_ESP_TO_PTR_RSI CMT_ASM(".byte 0X39, 0X26 # cmpl %esp, (%rsi)")
#define CMP_ESP_TO_PTR_RBP CMT_ASM(".byte 0X39, 0X65, 0X00 # cmpl %esp, (%rbp)")
#define CMP_ESP_TO_PTR_RSP CMT_ASM(".byte 0X39, 0X24, 0X24 # cmpl %esp, (%rsp)")
#define CMP_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X39, 0X20 # cmpl %esp, (%r8)")
#define CMP_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X39, 0X21 # cmpl %esp, (%r9)")
#define CMP_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X39, 0X22 # cmpl %esp, (%r10)")
#define CMP_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X39, 0X23 # cmpl %esp, (%r11)")
#define CMP_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X39, 0X24, 0X24 # cmpl %esp, (%r12)")
#define CMP_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X39, 0X65, 0X00 # cmpl %esp, (%r13)")
#define CMP_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X39, 0X26 # cmpl %esp, (%r14)")
#define CMP_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X39, 0X27 # cmpl %esp, (%r15)")
#define CMP_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X39, 0X20 # cmpl %esp, (%eax)")
#define CMP_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X39, 0X23 # cmpl %esp, (%ebx)")
#define CMP_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X39, 0X21 # cmpl %esp, (%ecx)")
#define CMP_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X39, 0X22 # cmpl %esp, (%edx)")
#define CMP_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X39, 0X27 # cmpl %esp, (%edi)")
#define CMP_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X39, 0X26 # cmpl %esp, (%esi)")
#define CMP_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X39, 0X65, 0X00 # cmpl %esp, (%ebp)")
#define CMP_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X39, 0X24, 0X24 # cmpl %esp, (%esp)")

#define CMP_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X00 # cmpl %r8d, (%rax)")
#define CMP_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X03 # cmpl %r8d, (%rbx)")
#define CMP_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X01 # cmpl %r8d, (%rcx)")
#define CMP_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X02 # cmpl %r8d, (%rdx)")
#define CMP_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X07 # cmpl %r8d, (%rdi)")
#define CMP_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X06 # cmpl %r8d, (%rsi)")
#define CMP_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X45, 0X00 # cmpl %r8d, (%rbp)")
#define CMP_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X04, 0X24 # cmpl %r8d, (%rsp)")
#define CMP_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X00 # cmpl %r8d, (%r8)")
#define CMP_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X01 # cmpl %r8d, (%r9)")
#define CMP_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X02 # cmpl %r8d, (%r10)")
#define CMP_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X03 # cmpl %r8d, (%r11)")
#define CMP_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X04, 0X24 # cmpl %r8d, (%r12)")
#define CMP_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X45, 0X00 # cmpl %r8d, (%r13)")
#define CMP_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X06 # cmpl %r8d, (%r14)")
#define CMP_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X07 # cmpl %r8d, (%r15)")
#define CMP_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X00 # cmpl %r8d, (%eax)")
#define CMP_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X03 # cmpl %r8d, (%ebx)")
#define CMP_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X01 # cmpl %r8d, (%ecx)")
#define CMP_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X02 # cmpl %r8d, (%edx)")
#define CMP_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X07 # cmpl %r8d, (%edi)")
#define CMP_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X06 # cmpl %r8d, (%esi)")
#define CMP_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X45, 0X00 # cmpl %r8d, (%ebp)")
#define CMP_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X04, 0X24 # cmpl %r8d, (%esp)")

#define CMP_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X08 # cmpl %r9d, (%rax)")
#define CMP_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X0B # cmpl %r9d, (%rbx)")
#define CMP_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X09 # cmpl %r9d, (%rcx)")
#define CMP_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X0A # cmpl %r9d, (%rdx)")
#define CMP_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X0F # cmpl %r9d, (%rdi)")
#define CMP_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X0E # cmpl %r9d, (%rsi)")
#define CMP_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X4D, 0X00 # cmpl %r9d, (%rbp)")
#define CMP_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X0C, 0X24 # cmpl %r9d, (%rsp)")
#define CMP_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X08 # cmpl %r9d, (%r8)")
#define CMP_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X09 # cmpl %r9d, (%r9)")
#define CMP_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X0A # cmpl %r9d, (%r10)")
#define CMP_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X0B # cmpl %r9d, (%r11)")
#define CMP_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X0C, 0X24 # cmpl %r9d, (%r12)")
#define CMP_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X4D, 0X00 # cmpl %r9d, (%r13)")
#define CMP_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X0E # cmpl %r9d, (%r14)")
#define CMP_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X0F # cmpl %r9d, (%r15)")
#define CMP_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X08 # cmpl %r9d, (%eax)")
#define CMP_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X0B # cmpl %r9d, (%ebx)")
#define CMP_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X09 # cmpl %r9d, (%ecx)")
#define CMP_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X0A # cmpl %r9d, (%edx)")
#define CMP_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X0F # cmpl %r9d, (%edi)")
#define CMP_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X0E # cmpl %r9d, (%esi)")
#define CMP_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X4D, 0X00 # cmpl %r9d, (%ebp)")
#define CMP_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X0C, 0X24 # cmpl %r9d, (%esp)")

#define CMP_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X10 # cmpl %r10d, (%rax)")
#define CMP_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X13 # cmpl %r10d, (%rbx)")
#define CMP_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X11 # cmpl %r10d, (%rcx)")
#define CMP_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X12 # cmpl %r10d, (%rdx)")
#define CMP_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X17 # cmpl %r10d, (%rdi)")
#define CMP_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X16 # cmpl %r10d, (%rsi)")
#define CMP_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X55, 0X00 # cmpl %r10d, (%rbp)")
#define CMP_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X14, 0X24 # cmpl %r10d, (%rsp)")
#define CMP_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X10 # cmpl %r10d, (%r8)")
#define CMP_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X11 # cmpl %r10d, (%r9)")
#define CMP_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X12 # cmpl %r10d, (%r10)")
#define CMP_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X13 # cmpl %r10d, (%r11)")
#define CMP_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X14, 0X24 # cmpl %r10d, (%r12)")
#define CMP_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X55, 0X00 # cmpl %r10d, (%r13)")
#define CMP_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X16 # cmpl %r10d, (%r14)")
#define CMP_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X17 # cmpl %r10d, (%r15)")
#define CMP_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X10 # cmpl %r10d, (%eax)")
#define CMP_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X13 # cmpl %r10d, (%ebx)")
#define CMP_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X11 # cmpl %r10d, (%ecx)")
#define CMP_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X12 # cmpl %r10d, (%edx)")
#define CMP_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X17 # cmpl %r10d, (%edi)")
#define CMP_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X16 # cmpl %r10d, (%esi)")
#define CMP_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X55, 0X00 # cmpl %r10d, (%ebp)")
#define CMP_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X14, 0X24 # cmpl %r10d, (%esp)")

#define CMP_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X18 # cmpl %r11d, (%rax)")
#define CMP_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X1B # cmpl %r11d, (%rbx)")
#define CMP_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X19 # cmpl %r11d, (%rcx)")
#define CMP_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X1A # cmpl %r11d, (%rdx)")
#define CMP_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X1F # cmpl %r11d, (%rdi)")
#define CMP_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X1E # cmpl %r11d, (%rsi)")
#define CMP_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X5D, 0X00 # cmpl %r11d, (%rbp)")
#define CMP_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X1C, 0X24 # cmpl %r11d, (%rsp)")
#define CMP_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X18 # cmpl %r11d, (%r8)")
#define CMP_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X19 # cmpl %r11d, (%r9)")
#define CMP_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X1A # cmpl %r11d, (%r10)")
#define CMP_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X1B # cmpl %r11d, (%r11)")
#define CMP_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X1C, 0X24 # cmpl %r11d, (%r12)")
#define CMP_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X5D, 0X00 # cmpl %r11d, (%r13)")
#define CMP_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X1E # cmpl %r11d, (%r14)")
#define CMP_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X1F # cmpl %r11d, (%r15)")
#define CMP_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X18 # cmpl %r11d, (%eax)")
#define CMP_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X1B # cmpl %r11d, (%ebx)")
#define CMP_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X19 # cmpl %r11d, (%ecx)")
#define CMP_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X1A # cmpl %r11d, (%edx)")
#define CMP_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X1F # cmpl %r11d, (%edi)")
#define CMP_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X1E # cmpl %r11d, (%esi)")
#define CMP_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X5D, 0X00 # cmpl %r11d, (%ebp)")
#define CMP_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X1C, 0X24 # cmpl %r11d, (%esp)")

#define CMP_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X20 # cmpl %r12d, (%rax)")
#define CMP_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X23 # cmpl %r12d, (%rbx)")
#define CMP_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X21 # cmpl %r12d, (%rcx)")
#define CMP_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X22 # cmpl %r12d, (%rdx)")
#define CMP_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X27 # cmpl %r12d, (%rdi)")
#define CMP_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X26 # cmpl %r12d, (%rsi)")
#define CMP_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X65, 0X00 # cmpl %r12d, (%rbp)")
#define CMP_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X24, 0X24 # cmpl %r12d, (%rsp)")
#define CMP_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X20 # cmpl %r12d, (%r8)")
#define CMP_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X21 # cmpl %r12d, (%r9)")
#define CMP_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X22 # cmpl %r12d, (%r10)")
#define CMP_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X23 # cmpl %r12d, (%r11)")
#define CMP_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X24, 0X24 # cmpl %r12d, (%r12)")
#define CMP_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X65, 0X00 # cmpl %r12d, (%r13)")
#define CMP_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X26 # cmpl %r12d, (%r14)")
#define CMP_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X27 # cmpl %r12d, (%r15)")
#define CMP_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X20 # cmpl %r12d, (%eax)")
#define CMP_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X23 # cmpl %r12d, (%ebx)")
#define CMP_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X21 # cmpl %r12d, (%ecx)")
#define CMP_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X22 # cmpl %r12d, (%edx)")
#define CMP_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X27 # cmpl %r12d, (%edi)")
#define CMP_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X26 # cmpl %r12d, (%esi)")
#define CMP_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X65, 0X00 # cmpl %r12d, (%ebp)")
#define CMP_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X24, 0X24 # cmpl %r12d, (%esp)")

#define CMP_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X28 # cmpl %r13d, (%rax)")
#define CMP_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X2B # cmpl %r13d, (%rbx)")
#define CMP_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X29 # cmpl %r13d, (%rcx)")
#define CMP_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X2A # cmpl %r13d, (%rdx)")
#define CMP_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X2F # cmpl %r13d, (%rdi)")
#define CMP_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X2E # cmpl %r13d, (%rsi)")
#define CMP_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X6D, 0X00 # cmpl %r13d, (%rbp)")
#define CMP_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X2C, 0X24 # cmpl %r13d, (%rsp)")
#define CMP_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X28 # cmpl %r13d, (%r8)")
#define CMP_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X29 # cmpl %r13d, (%r9)")
#define CMP_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X2A # cmpl %r13d, (%r10)")
#define CMP_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X2B # cmpl %r13d, (%r11)")
#define CMP_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X2C, 0X24 # cmpl %r13d, (%r12)")
#define CMP_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X6D, 0X00 # cmpl %r13d, (%r13)")
#define CMP_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X2E # cmpl %r13d, (%r14)")
#define CMP_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X2F # cmpl %r13d, (%r15)")
#define CMP_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X28 # cmpl %r13d, (%eax)")
#define CMP_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X2B # cmpl %r13d, (%ebx)")
#define CMP_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X29 # cmpl %r13d, (%ecx)")
#define CMP_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X2A # cmpl %r13d, (%edx)")
#define CMP_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X2F # cmpl %r13d, (%edi)")
#define CMP_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X2E # cmpl %r13d, (%esi)")
#define CMP_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X6D, 0X00 # cmpl %r13d, (%ebp)")
#define CMP_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X2C, 0X24 # cmpl %r13d, (%esp)")

#define CMP_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X30 # cmpl %r14d, (%rax)")
#define CMP_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X33 # cmpl %r14d, (%rbx)")
#define CMP_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X31 # cmpl %r14d, (%rcx)")
#define CMP_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X32 # cmpl %r14d, (%rdx)")
#define CMP_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X37 # cmpl %r14d, (%rdi)")
#define CMP_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X36 # cmpl %r14d, (%rsi)")
#define CMP_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X75, 0X00 # cmpl %r14d, (%rbp)")
#define CMP_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X34, 0X24 # cmpl %r14d, (%rsp)")
#define CMP_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X30 # cmpl %r14d, (%r8)")
#define CMP_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X31 # cmpl %r14d, (%r9)")
#define CMP_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X32 # cmpl %r14d, (%r10)")
#define CMP_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X33 # cmpl %r14d, (%r11)")
#define CMP_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X34, 0X24 # cmpl %r14d, (%r12)")
#define CMP_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X75, 0X00 # cmpl %r14d, (%r13)")
#define CMP_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X36 # cmpl %r14d, (%r14)")
#define CMP_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X37 # cmpl %r14d, (%r15)")
#define CMP_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X30 # cmpl %r14d, (%eax)")
#define CMP_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X33 # cmpl %r14d, (%ebx)")
#define CMP_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X31 # cmpl %r14d, (%ecx)")
#define CMP_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X32 # cmpl %r14d, (%edx)")
#define CMP_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X37 # cmpl %r14d, (%edi)")
#define CMP_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X36 # cmpl %r14d, (%esi)")
#define CMP_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X75, 0X00 # cmpl %r14d, (%ebp)")
#define CMP_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X34, 0X24 # cmpl %r14d, (%esp)")

#define CMP_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X39, 0X38 # cmpl %r15d, (%rax)")
#define CMP_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X39, 0X3B # cmpl %r15d, (%rbx)")
#define CMP_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X39, 0X39 # cmpl %r15d, (%rcx)")
#define CMP_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X39, 0X3A # cmpl %r15d, (%rdx)")
#define CMP_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X39, 0X3F # cmpl %r15d, (%rdi)")
#define CMP_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X39, 0X3E # cmpl %r15d, (%rsi)")
#define CMP_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X39, 0X7D, 0X00 # cmpl %r15d, (%rbp)")
#define CMP_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X39, 0X3C, 0X24 # cmpl %r15d, (%rsp)")
#define CMP_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X39, 0X38 # cmpl %r15d, (%r8)")
#define CMP_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X39, 0X39 # cmpl %r15d, (%r9)")
#define CMP_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X39, 0X3A # cmpl %r15d, (%r10)")
#define CMP_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X39, 0X3B # cmpl %r15d, (%r11)")
#define CMP_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X39, 0X3C, 0X24 # cmpl %r15d, (%r12)")
#define CMP_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X39, 0X7D, 0X00 # cmpl %r15d, (%r13)")
#define CMP_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X39, 0X3E # cmpl %r15d, (%r14)")
#define CMP_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X39, 0X3F # cmpl %r15d, (%r15)")
#define CMP_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X38 # cmpl %r15d, (%eax)")
#define CMP_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X3B # cmpl %r15d, (%ebx)")
#define CMP_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X39 # cmpl %r15d, (%ecx)")
#define CMP_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X39, 0X3A # cmpl %r15d, (%edx)")
#define CMP_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X3F # cmpl %r15d, (%edi)")
#define CMP_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X39, 0X3E # cmpl %r15d, (%esi)")
#define CMP_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X7D, 0X00 # cmpl %r15d, (%ebp)")
#define CMP_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X39, 0X3C, 0X24 # cmpl %r15d, (%esp)")

#define CMP_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X80 # cmpl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X83 # cmpl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X81 # cmpl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X82 # cmpl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X87 # cmpl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X86 # cmpl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X85 # cmpl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X80 # cmpl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X81 # cmpl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X82 # cmpl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X83 # cmpl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X85 # cmpl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X86 # cmpl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X87 # cmpl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X80 # cmpl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X83 # cmpl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X81 # cmpl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X82 # cmpl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X87 # cmpl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X86 # cmpl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X85 # cmpl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X98 # cmpl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9B # cmpl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X99 # cmpl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9A # cmpl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9F # cmpl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9E # cmpl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9D # cmpl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X98 # cmpl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X99 # cmpl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9A # cmpl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9B # cmpl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9D # cmpl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9E # cmpl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X9F # cmpl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X98 # cmpl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9B # cmpl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X99 # cmpl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9A # cmpl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9F # cmpl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9E # cmpl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9D # cmpl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X88 # cmpl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8B # cmpl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X89 # cmpl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8A # cmpl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8F # cmpl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8E # cmpl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8D # cmpl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X88 # cmpl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X89 # cmpl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8A # cmpl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8B # cmpl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8D # cmpl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8E # cmpl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X8F # cmpl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X88 # cmpl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8B # cmpl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X89 # cmpl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8A # cmpl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8F # cmpl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8E # cmpl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8D # cmpl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X90 # cmpl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X93 # cmpl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X91 # cmpl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X92 # cmpl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X97 # cmpl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X96 # cmpl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X95 # cmpl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X90 # cmpl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X91 # cmpl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X92 # cmpl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X93 # cmpl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X95 # cmpl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X96 # cmpl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0X97 # cmpl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X90 # cmpl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X93 # cmpl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X91 # cmpl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X92 # cmpl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X97 # cmpl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X96 # cmpl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X95 # cmpl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB8 # cmpl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBB # cmpl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB9 # cmpl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBA # cmpl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBF # cmpl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBE # cmpl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBD # cmpl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB8 # cmpl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB9 # cmpl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBA # cmpl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBB # cmpl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBD # cmpl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBE # cmpl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XBF # cmpl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB8 # cmpl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBB # cmpl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB9 # cmpl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBA # cmpl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBF # cmpl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBE # cmpl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBD # cmpl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB0 # cmpl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB3 # cmpl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB1 # cmpl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB2 # cmpl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB7 # cmpl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB6 # cmpl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB5 # cmpl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB0 # cmpl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB1 # cmpl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB2 # cmpl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB3 # cmpl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB5 # cmpl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB6 # cmpl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XB7 # cmpl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB0 # cmpl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB3 # cmpl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB1 # cmpl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB2 # cmpl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB7 # cmpl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB6 # cmpl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB5 # cmpl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA8 # cmpl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAB # cmpl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA9 # cmpl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAA # cmpl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAF # cmpl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAE # cmpl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAD # cmpl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA8 # cmpl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA9 # cmpl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAA # cmpl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAB # cmpl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAD # cmpl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAE # cmpl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XAF # cmpl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA8 # cmpl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAB # cmpl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA9 # cmpl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAA # cmpl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAF # cmpl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAE # cmpl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAD # cmpl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA0 # cmpl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA3 # cmpl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA1 # cmpl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA2 # cmpl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA7 # cmpl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA6 # cmpl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA5 # cmpl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA0 # cmpl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA1 # cmpl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA2 # cmpl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA3 # cmpl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA5 # cmpl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA6 # cmpl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X3B, 0XA7 # cmpl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA0 # cmpl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA3 # cmpl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA1 # cmpl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA2 # cmpl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA7 # cmpl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA6 # cmpl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA5 # cmpl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X80 # cmpl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X83 # cmpl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X81 # cmpl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X82 # cmpl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X87 # cmpl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X86 # cmpl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X85 # cmpl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X80 # cmpl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X81 # cmpl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X82 # cmpl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X83 # cmpl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X85 # cmpl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X86 # cmpl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X87 # cmpl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X80 # cmpl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X83 # cmpl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X81 # cmpl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X82 # cmpl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X87 # cmpl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X86 # cmpl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X85 # cmpl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X84, 0X24 # cmpl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X88 # cmpl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8B # cmpl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X89 # cmpl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8A # cmpl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8F # cmpl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8E # cmpl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8D # cmpl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X88 # cmpl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X89 # cmpl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8A # cmpl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8B # cmpl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8D # cmpl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8E # cmpl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X8F # cmpl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X88 # cmpl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8B # cmpl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X89 # cmpl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8A # cmpl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8F # cmpl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8E # cmpl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8D # cmpl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X8C, 0X24 # cmpl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X90 # cmpl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X93 # cmpl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X91 # cmpl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X92 # cmpl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X97 # cmpl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X96 # cmpl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X95 # cmpl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X90 # cmpl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X91 # cmpl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X92 # cmpl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X93 # cmpl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X95 # cmpl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X96 # cmpl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X97 # cmpl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X90 # cmpl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X93 # cmpl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X91 # cmpl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X92 # cmpl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X97 # cmpl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X96 # cmpl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X95 # cmpl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X94, 0X24 # cmpl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X98 # cmpl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9B # cmpl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X99 # cmpl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9A # cmpl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9F # cmpl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9E # cmpl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9D # cmpl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X98 # cmpl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X99 # cmpl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9A # cmpl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9B # cmpl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9D # cmpl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9E # cmpl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0X9F # cmpl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X98 # cmpl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9B # cmpl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X99 # cmpl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9A # cmpl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9F # cmpl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9E # cmpl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9D # cmpl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0X9C, 0X24 # cmpl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA0 # cmpl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA3 # cmpl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA1 # cmpl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA2 # cmpl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA7 # cmpl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA6 # cmpl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA5 # cmpl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA0 # cmpl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA1 # cmpl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA2 # cmpl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA3 # cmpl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA5 # cmpl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA6 # cmpl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA7 # cmpl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA0 # cmpl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA3 # cmpl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA1 # cmpl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA2 # cmpl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA7 # cmpl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA6 # cmpl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA5 # cmpl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA4, 0X24 # cmpl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA8 # cmpl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAB # cmpl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XA9 # cmpl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAA # cmpl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAF # cmpl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAE # cmpl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAD # cmpl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA8 # cmpl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XA9 # cmpl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAA # cmpl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAB # cmpl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAD # cmpl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAE # cmpl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XAF # cmpl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA8 # cmpl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAB # cmpl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XA9 # cmpl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAA # cmpl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAF # cmpl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAE # cmpl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAD # cmpl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XAC, 0X24 # cmpl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB0 # cmpl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB3 # cmpl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB1 # cmpl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB2 # cmpl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB7 # cmpl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB6 # cmpl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB5 # cmpl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB0 # cmpl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB1 # cmpl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB2 # cmpl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB3 # cmpl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB5 # cmpl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB6 # cmpl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB7 # cmpl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB0 # cmpl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB3 # cmpl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB1 # cmpl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB2 # cmpl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB7 # cmpl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB6 # cmpl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB5 # cmpl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB4, 0X24 # cmpl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB8 # cmpl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBB # cmpl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XB9 # cmpl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBA # cmpl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBF # cmpl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBE # cmpl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBD # cmpl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB8 # cmpl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XB9 # cmpl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBA # cmpl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBB # cmpl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBD # cmpl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBE # cmpl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X3B, 0XBF # cmpl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB8 # cmpl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBB # cmpl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XB9 # cmpl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBA # cmpl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBF # cmpl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBE # cmpl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBD # cmpl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X3B, 0XBC, 0X24 # cmpl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X80 # cmpl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X83 # cmpl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X81 # cmpl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X82 # cmpl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X87 # cmpl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X86 # cmpl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X85 # cmpl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X84, 0X24 # cmpl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X80 # cmpl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X81 # cmpl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X82 # cmpl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X83 # cmpl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X84, 0X24 # cmpl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X85 # cmpl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X86 # cmpl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X87 # cmpl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X80 # cmpl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X83 # cmpl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X81 # cmpl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X82 # cmpl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X87 # cmpl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X86 # cmpl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X85 # cmpl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X84, 0X24 # cmpl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X98 # cmpl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9B # cmpl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X99 # cmpl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9A # cmpl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9F # cmpl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9E # cmpl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9D # cmpl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X9C, 0X24 # cmpl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X98 # cmpl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X99 # cmpl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9A # cmpl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9B # cmpl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9C, 0X24 # cmpl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9D # cmpl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9E # cmpl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X9F # cmpl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X98 # cmpl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9B # cmpl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X99 # cmpl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9A # cmpl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9F # cmpl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9E # cmpl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9D # cmpl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X9C, 0X24 # cmpl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X88 # cmpl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8B # cmpl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X89 # cmpl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8A # cmpl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8F # cmpl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8E # cmpl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8D # cmpl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X8C, 0X24 # cmpl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X88 # cmpl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X89 # cmpl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8A # cmpl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8B # cmpl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8C, 0X24 # cmpl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8D # cmpl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8E # cmpl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X8F # cmpl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X88 # cmpl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8B # cmpl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X89 # cmpl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8A # cmpl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8F # cmpl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8E # cmpl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8D # cmpl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X8C, 0X24 # cmpl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X90 # cmpl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X93 # cmpl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X91 # cmpl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0X92 # cmpl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X97 # cmpl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0X96 # cmpl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X95 # cmpl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0X94, 0X24 # cmpl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X90 # cmpl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X91 # cmpl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X92 # cmpl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X93 # cmpl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X94, 0X24 # cmpl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X95 # cmpl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X96 # cmpl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0X97 # cmpl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X90 # cmpl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X93 # cmpl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X91 # cmpl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X92 # cmpl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X97 # cmpl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X96 # cmpl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X95 # cmpl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0X94, 0X24 # cmpl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB8 # cmpl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBB # cmpl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB9 # cmpl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBA # cmpl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBF # cmpl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBE # cmpl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBD # cmpl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XBC, 0X24 # cmpl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB8 # cmpl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB9 # cmpl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBA # cmpl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBB # cmpl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBC, 0X24 # cmpl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBD # cmpl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBE # cmpl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XBF # cmpl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB8 # cmpl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBB # cmpl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB9 # cmpl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBA # cmpl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBF # cmpl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBE # cmpl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBD # cmpl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XBC, 0X24 # cmpl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB0 # cmpl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB3 # cmpl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB1 # cmpl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB2 # cmpl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB7 # cmpl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB6 # cmpl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB5 # cmpl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XB4, 0X24 # cmpl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB0 # cmpl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB1 # cmpl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB2 # cmpl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB3 # cmpl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB4, 0X24 # cmpl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB5 # cmpl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB6 # cmpl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XB7 # cmpl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB0 # cmpl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB3 # cmpl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB1 # cmpl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB2 # cmpl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB7 # cmpl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB6 # cmpl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB5 # cmpl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XB4, 0X24 # cmpl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA8 # cmpl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAB # cmpl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA9 # cmpl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAA # cmpl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAF # cmpl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAE # cmpl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAD # cmpl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XAC, 0X24 # cmpl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA8 # cmpl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA9 # cmpl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAA # cmpl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAB # cmpl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAC, 0X24 # cmpl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAD # cmpl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAE # cmpl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XAF # cmpl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA8 # cmpl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAB # cmpl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA9 # cmpl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAA # cmpl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAF # cmpl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAE # cmpl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAD # cmpl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XAC, 0X24 # cmpl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA0 # cmpl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA3 # cmpl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA1 # cmpl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA2 # cmpl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA7 # cmpl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA6 # cmpl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA5 # cmpl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X39, 0XA4, 0X24 # cmpl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA0 # cmpl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA1 # cmpl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA2 # cmpl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA3 # cmpl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA4, 0X24 # cmpl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA5 # cmpl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA6 # cmpl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X39, 0XA7 # cmpl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA0 # cmpl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA3 # cmpl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA1 # cmpl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA2 # cmpl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA7 # cmpl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA6 # cmpl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA5 # cmpl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X39, 0XA4, 0X24 # cmpl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X80 # cmpl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X83 # cmpl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X81 # cmpl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X82 # cmpl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X87 # cmpl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X86 # cmpl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X85 # cmpl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X84, 0X24 # cmpl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X80 # cmpl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X81 # cmpl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X82 # cmpl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X83 # cmpl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X84, 0X24 # cmpl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X85 # cmpl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X86 # cmpl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X87 # cmpl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X80 # cmpl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X83 # cmpl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X81 # cmpl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X82 # cmpl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X87 # cmpl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X86 # cmpl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X85 # cmpl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X84, 0X24 # cmpl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X88 # cmpl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8B # cmpl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X89 # cmpl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8A # cmpl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8F # cmpl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8E # cmpl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8D # cmpl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X8C, 0X24 # cmpl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X88 # cmpl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X89 # cmpl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8A # cmpl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8B # cmpl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8C, 0X24 # cmpl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8D # cmpl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8E # cmpl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X8F # cmpl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X88 # cmpl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8B # cmpl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X89 # cmpl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8A # cmpl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8F # cmpl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8E # cmpl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8D # cmpl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X8C, 0X24 # cmpl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X90 # cmpl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X93 # cmpl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X91 # cmpl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X92 # cmpl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X97 # cmpl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X96 # cmpl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X95 # cmpl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X94, 0X24 # cmpl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X90 # cmpl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X91 # cmpl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X92 # cmpl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X93 # cmpl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X94, 0X24 # cmpl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X95 # cmpl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X96 # cmpl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X97 # cmpl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X90 # cmpl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X93 # cmpl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X91 # cmpl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X92 # cmpl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X97 # cmpl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X96 # cmpl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X95 # cmpl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X94, 0X24 # cmpl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X98 # cmpl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9B # cmpl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X99 # cmpl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9A # cmpl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9F # cmpl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9E # cmpl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9D # cmpl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0X9C, 0X24 # cmpl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X98 # cmpl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X99 # cmpl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9A # cmpl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9B # cmpl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9C, 0X24 # cmpl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9D # cmpl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9E # cmpl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0X9F # cmpl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X98 # cmpl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9B # cmpl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X99 # cmpl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9A # cmpl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9F # cmpl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9E # cmpl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9D # cmpl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0X9C, 0X24 # cmpl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA0 # cmpl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA3 # cmpl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA1 # cmpl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA2 # cmpl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA7 # cmpl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA6 # cmpl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA5 # cmpl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA4, 0X24 # cmpl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA0 # cmpl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA1 # cmpl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA2 # cmpl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA3 # cmpl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA4, 0X24 # cmpl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA5 # cmpl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA6 # cmpl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA7 # cmpl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA0 # cmpl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA3 # cmpl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA1 # cmpl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA2 # cmpl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA7 # cmpl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA6 # cmpl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA5 # cmpl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA4, 0X24 # cmpl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA8 # cmpl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAB # cmpl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XA9 # cmpl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAA # cmpl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAF # cmpl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAE # cmpl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAD # cmpl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XAC, 0X24 # cmpl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA8 # cmpl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XA9 # cmpl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAA # cmpl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAB # cmpl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAC, 0X24 # cmpl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAD # cmpl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAE # cmpl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XAF # cmpl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA8 # cmpl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAB # cmpl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XA9 # cmpl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAA # cmpl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAF # cmpl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAE # cmpl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAD # cmpl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XAC, 0X24 # cmpl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB0 # cmpl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB3 # cmpl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB1 # cmpl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB2 # cmpl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB7 # cmpl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB6 # cmpl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB5 # cmpl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB4, 0X24 # cmpl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB0 # cmpl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB1 # cmpl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB2 # cmpl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB3 # cmpl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB4, 0X24 # cmpl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB5 # cmpl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB6 # cmpl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB7 # cmpl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB0 # cmpl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB3 # cmpl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB1 # cmpl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB2 # cmpl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB7 # cmpl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB6 # cmpl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB5 # cmpl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB4, 0X24 # cmpl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define CMP_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB8 # cmpl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBB # cmpl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XB9 # cmpl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBA # cmpl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBF # cmpl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBE # cmpl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBD # cmpl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X39, 0XBC, 0X24 # cmpl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB8 # cmpl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XB9 # cmpl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBA # cmpl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBB # cmpl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBC, 0X24 # cmpl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBD # cmpl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBE # cmpl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X39, 0XBF # cmpl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB8 # cmpl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBB # cmpl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XB9 # cmpl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBA # cmpl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBF # cmpl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBE # cmpl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBD # cmpl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define CMP_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X39, 0XBC, 0X24 # cmpl %r15d, " _(VALUE) "(%esp)")\
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
