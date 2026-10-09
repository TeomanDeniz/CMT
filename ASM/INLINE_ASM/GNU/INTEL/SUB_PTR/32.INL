#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define SUB_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X05 # subl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X1D # subl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X0D # subl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X15 # subl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X3D # subl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X35 # subl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X2D # subl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X25 # subl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X05 # subl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X1D # subl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X0D # subl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X15 # subl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X3D # subl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X35 # subl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X2D # subl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X25 # subl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X00 # subl (%eax), %eax")
#define SUB_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X03 # subl (%ebx), %eax")
#define SUB_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X01 # subl (%ecx), %eax")
#define SUB_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X02 # subl (%edx), %eax")
#define SUB_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X07 # subl (%edi), %eax")
#define SUB_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X06 # subl (%esi), %eax")
#define SUB_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X45, 0X00 # subl (%ebp), %eax")
#define SUB_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X04, 0X24 # subl (%esp), %eax")
#define SUB_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X07 # subl (%bx), %eax")
#define SUB_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X46, 0X00 # subl (%bp), %eax")
#define SUB_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X04 # subl (%si), %eax")
#define SUB_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X05 # subl (%di), %eax")

#define SUB_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X18 # subl (%eax), %ebx")
#define SUB_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X1B # subl (%ebx), %ebx")
#define SUB_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X19 # subl (%ecx), %ebx")
#define SUB_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X1A # subl (%edx), %ebx")
#define SUB_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X1F # subl (%edi), %ebx")
#define SUB_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X1E # subl (%esi), %ebx")
#define SUB_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X5D, 0X00 # subl (%ebp), %ebx")
#define SUB_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X1C, 0X24 # subl (%esp), %ebx")
#define SUB_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X1F # subl (%bx), %ebx")
#define SUB_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X5E, 0X00 # subl (%bp), %ebx")
#define SUB_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X1C # subl (%si), %ebx")
#define SUB_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X1D # subl (%di), %ebx")

#define SUB_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X08 # subl (%eax), %ecx")
#define SUB_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X0B # subl (%ebx), %ecx")
#define SUB_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X09 # subl (%ecx), %ecx")
#define SUB_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X0A # subl (%edx), %ecx")
#define SUB_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X0F # subl (%edi), %ecx")
#define SUB_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X0E # subl (%esi), %ecx")
#define SUB_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X4D, 0X00 # subl (%ebp), %ecx")
#define SUB_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X0C, 0X24 # subl (%esp), %ecx")
#define SUB_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X0F # subl (%bx), %ecx")
#define SUB_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X4E, 0X00 # subl (%bp), %ecx")
#define SUB_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X0C # subl (%si), %ecx")
#define SUB_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X0D # subl (%di), %ecx")

#define SUB_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X10 # subl (%eax), %edx")
#define SUB_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X13 # subl (%ebx), %edx")
#define SUB_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X11 # subl (%ecx), %edx")
#define SUB_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X12 # subl (%edx), %edx")
#define SUB_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X17 # subl (%edi), %edx")
#define SUB_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X16 # subl (%esi), %edx")
#define SUB_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X55, 0X00 # subl (%ebp), %edx")
#define SUB_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X14, 0X24 # subl (%esp), %edx")
#define SUB_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X17 # subl (%bx), %edx")
#define SUB_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X56, 0X00 # subl (%bp), %edx")
#define SUB_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X14 # subl (%si), %edx")
#define SUB_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X15 # subl (%di), %edx")

#define SUB_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X38 # subl (%eax), %edi")
#define SUB_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X3B # subl (%ebx), %edi")
#define SUB_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X39 # subl (%ecx), %edi")
#define SUB_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X3A # subl (%edx), %edi")
#define SUB_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X3F # subl (%edi), %edi")
#define SUB_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X3E # subl (%esi), %edi")
#define SUB_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X7D, 0X00 # subl (%ebp), %edi")
#define SUB_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X3C, 0X24 # subl (%esp), %edi")
#define SUB_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X3F # subl (%bx), %edi")
#define SUB_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X7E, 0X00 # subl (%bp), %edi")
#define SUB_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X3C # subl (%si), %edi")
#define SUB_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X3D # subl (%di), %edi")

#define SUB_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X30 # subl (%eax), %esi")
#define SUB_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X33 # subl (%ebx), %esi")
#define SUB_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X31 # subl (%ecx), %esi")
#define SUB_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X32 # subl (%edx), %esi")
#define SUB_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X37 # subl (%edi), %esi")
#define SUB_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X36 # subl (%esi), %esi")
#define SUB_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X75, 0X00 # subl (%ebp), %esi")
#define SUB_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X34, 0X24 # subl (%esp), %esi")
#define SUB_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X37 # subl (%bx), %esi")
#define SUB_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X76, 0X00 # subl (%bp), %esi")
#define SUB_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X34 # subl (%si), %esi")
#define SUB_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X35 # subl (%di), %esi")

#define SUB_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X28 # subl (%eax), %ebp")
#define SUB_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X2B # subl (%ebx), %ebp")
#define SUB_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X29 # subl (%ecx), %ebp")
#define SUB_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X2A # subl (%edx), %ebp")
#define SUB_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X2F # subl (%edi), %ebp")
#define SUB_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X2E # subl (%esi), %ebp")
#define SUB_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X6D, 0X00 # subl (%ebp), %ebp")
#define SUB_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X2C, 0X24 # subl (%esp), %ebp")
#define SUB_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X2F # subl (%bx), %ebp")
#define SUB_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X6E, 0X00 # subl (%bp), %ebp")
#define SUB_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X2C # subl (%si), %ebp")
#define SUB_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X2D # subl (%di), %ebp")

#define SUB_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X2B, 0X20 # subl (%eax), %esp")
#define SUB_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X2B, 0X23 # subl (%ebx), %esp")
#define SUB_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X2B, 0X21 # subl (%ecx), %esp")
#define SUB_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X2B, 0X22 # subl (%edx), %esp")
#define SUB_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X2B, 0X27 # subl (%edi), %esp")
#define SUB_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X2B, 0X26 # subl (%esi), %esp")
#define SUB_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X2B, 0X65, 0X00 # subl (%ebp), %esp")
#define SUB_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X2B, 0X24, 0X24 # subl (%esp), %esp")
#define SUB_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X2B, 0X27 # subl (%bx), %esp")
#define SUB_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X2B, 0X66, 0X00 # subl (%bp), %esp")
#define SUB_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X2B, 0X24 # subl (%si), %esp")
#define SUB_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X2B, 0X25 # subl (%di), %esp")

#define SUB_EAX_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X00 # subl %eax, (%eax)")
#define SUB_EAX_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X03 # subl %eax, (%ebx)")
#define SUB_EAX_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X01 # subl %eax, (%ecx)")
#define SUB_EAX_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X02 # subl %eax, (%edx)")
#define SUB_EAX_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X07 # subl %eax, (%edi)")
#define SUB_EAX_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X06 # subl %eax, (%esi)")
#define SUB_EAX_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X45, 0X00 # subl %eax, (%ebp)")
#define SUB_EAX_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X04, 0X24 # subl %eax, (%esp)")
#define SUB_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X07 # subl %eax, (%bx)")
#define SUB_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X46, 0X00 # subl %eax, (%bp)")
#define SUB_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X04 # subl %eax, (%si)")
#define SUB_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X05 # subl %eax, (%di)")

#define SUB_EBX_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X18 # subl %ebx, (%eax)")
#define SUB_EBX_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X1B # subl %ebx, (%ebx)")
#define SUB_EBX_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X19 # subl %ebx, (%ecx)")
#define SUB_EBX_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X1A # subl %ebx, (%edx)")
#define SUB_EBX_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X1F # subl %ebx, (%edi)")
#define SUB_EBX_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X1E # subl %ebx, (%esi)")
#define SUB_EBX_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X5D, 0X00 # subl %ebx, (%ebp)")
#define SUB_EBX_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X1C, 0X24 # subl %ebx, (%esp)")
#define SUB_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X1F # subl %ebx, (%bx)")
#define SUB_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X5E, 0X00 # subl %ebx, (%bp)")
#define SUB_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X1C # subl %ebx, (%si)")
#define SUB_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X1D # subl %ebx, (%di)")

#define SUB_ECX_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X08 # subl %ecx, (%eax)")
#define SUB_ECX_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X0B # subl %ecx, (%ebx)")
#define SUB_ECX_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X09 # subl %ecx, (%ecx)")
#define SUB_ECX_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X0A # subl %ecx, (%edx)")
#define SUB_ECX_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X0F # subl %ecx, (%edi)")
#define SUB_ECX_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X0E # subl %ecx, (%esi)")
#define SUB_ECX_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X4D, 0X00 # subl %ecx, (%ebp)")
#define SUB_ECX_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X0C, 0X24 # subl %ecx, (%esp)")
#define SUB_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X0F # subl %ecx, (%bx)")
#define SUB_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X4E, 0X00 # subl %ecx, (%bp)")
#define SUB_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X0C # subl %ecx, (%si)")
#define SUB_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X0D # subl %ecx, (%di)")

#define SUB_EDX_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X10 # subl %edx, (%eax)")
#define SUB_EDX_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X13 # subl %edx, (%ebx)")
#define SUB_EDX_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X11 # subl %edx, (%ecx)")
#define SUB_EDX_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X12 # subl %edx, (%edx)")
#define SUB_EDX_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X17 # subl %edx, (%edi)")
#define SUB_EDX_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X16 # subl %edx, (%esi)")
#define SUB_EDX_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X55, 0X00 # subl %edx, (%ebp)")
#define SUB_EDX_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X14, 0X24 # subl %edx, (%esp)")
#define SUB_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X17 # subl %edx, (%bx)")
#define SUB_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X56, 0X00 # subl %edx, (%bp)")
#define SUB_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X14 # subl %edx, (%si)")
#define SUB_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X15 # subl %edx, (%di)")

#define SUB_EDI_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X38 # subl %edi, (%eax)")
#define SUB_EDI_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X3B # subl %edi, (%ebx)")
#define SUB_EDI_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X39 # subl %edi, (%ecx)")
#define SUB_EDI_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X3A # subl %edi, (%edx)")
#define SUB_EDI_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X3F # subl %edi, (%edi)")
#define SUB_EDI_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X3E # subl %edi, (%esi)")
#define SUB_EDI_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X7D, 0X00 # subl %edi, (%ebp)")
#define SUB_EDI_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X3C, 0X24 # subl %edi, (%esp)")
#define SUB_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X3F # subl %edi, (%bx)")
#define SUB_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X7E, 0X00 # subl %edi, (%bp)")
#define SUB_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X3C # subl %edi, (%si)")
#define SUB_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X3D # subl %edi, (%di)")

#define SUB_ESI_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X30 # subl %esi, (%eax)")
#define SUB_ESI_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X33 # subl %esi, (%ebx)")
#define SUB_ESI_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X31 # subl %esi, (%ecx)")
#define SUB_ESI_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X32 # subl %esi, (%edx)")
#define SUB_ESI_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X37 # subl %esi, (%edi)")
#define SUB_ESI_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X36 # subl %esi, (%esi)")
#define SUB_ESI_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X75, 0X00 # subl %esi, (%ebp)")
#define SUB_ESI_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X34, 0X24 # subl %esi, (%esp)")
#define SUB_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X37 # subl %esi, (%bx)")
#define SUB_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X76, 0X00 # subl %esi, (%bp)")
#define SUB_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X34 # subl %esi, (%si)")
#define SUB_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X35 # subl %esi, (%di)")

#define SUB_EBP_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X28 # subl %ebp, (%eax)")
#define SUB_EBP_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X2B # subl %ebp, (%ebx)")
#define SUB_EBP_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X29 # subl %ebp, (%ecx)")
#define SUB_EBP_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X2A # subl %ebp, (%edx)")
#define SUB_EBP_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X2F # subl %ebp, (%edi)")
#define SUB_EBP_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X2E # subl %ebp, (%esi)")
#define SUB_EBP_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X6D, 0X00 # subl %ebp, (%ebp)")
#define SUB_EBP_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X2C, 0X24 # subl %ebp, (%esp)")
#define SUB_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X2F # subl %ebp, (%bx)")
#define SUB_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X6E, 0X00 # subl %ebp, (%bp)")
#define SUB_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X2C # subl %ebp, (%si)")
#define SUB_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X2D # subl %ebp, (%di)")

#define SUB_ESP_TO_PTR_EAX CMT_ASM(".byte 0X29, 0X20 # subl %esp, (%eax)")
#define SUB_ESP_TO_PTR_EBX CMT_ASM(".byte 0X29, 0X23 # subl %esp, (%ebx)")
#define SUB_ESP_TO_PTR_ECX CMT_ASM(".byte 0X29, 0X21 # subl %esp, (%ecx)")
#define SUB_ESP_TO_PTR_EDX CMT_ASM(".byte 0X29, 0X22 # subl %esp, (%edx)")
#define SUB_ESP_TO_PTR_EDI CMT_ASM(".byte 0X29, 0X27 # subl %esp, (%edi)")
#define SUB_ESP_TO_PTR_ESI CMT_ASM(".byte 0X29, 0X26 # subl %esp, (%esi)")
#define SUB_ESP_TO_PTR_EBP CMT_ASM(".byte 0X29, 0X65, 0X00 # subl %esp, (%ebp)")
#define SUB_ESP_TO_PTR_ESP CMT_ASM(".byte 0X29, 0X24, 0X24 # subl %esp, (%esp)")
#define SUB_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X29, 0X27 # subl %esp, (%bx)")
#define SUB_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X29, 0X66, 0X00 # subl %esp, (%bp)")
#define SUB_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X29, 0X24 # subl %esp, (%si)")
#define SUB_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X29, 0X25 # subl %esp, (%di)")

#define SUB_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X80 # subl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X83 # subl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X81 # subl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X82 # subl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X87 # subl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X86 # subl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X85 # subl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X87 # subl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X86 # subl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X84 # subl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X85 # subl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X98 # subl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9B # subl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X99 # subl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9A # subl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9F # subl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9E # subl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9D # subl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9F # subl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9E # subl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9C # subl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9D # subl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X88 # subl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8B # subl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X89 # subl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8A # subl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8F # subl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8E # subl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8D # subl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8F # subl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8E # subl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8C # subl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8D # subl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X90 # subl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X93 # subl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X91 # subl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X92 # subl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X97 # subl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X96 # subl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X95 # subl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X97 # subl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X96 # subl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X94 # subl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X95 # subl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB8 # subl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBB # subl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB9 # subl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBA # subl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBF # subl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBE # subl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBD # subl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBF # subl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBE # subl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBC # subl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBD # subl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB0 # subl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB3 # subl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB1 # subl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB2 # subl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB7 # subl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB6 # subl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB5 # subl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB7 # subl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB6 # subl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB4 # subl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB5 # subl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA8 # subl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAB # subl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA9 # subl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAA # subl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAF # subl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAE # subl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAD # subl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAF # subl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAE # subl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAC # subl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAD # subl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA0 # subl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA3 # subl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA1 # subl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA2 # subl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA7 # subl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA6 # subl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA5 # subl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA7 # subl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA6 # subl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA4 # subl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA5 # subl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X80 # subl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X83 # subl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X81 # subl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X82 # subl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X87 # subl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X86 # subl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X85 # subl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X84, 0X24 # subl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X87 # subl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X86 # subl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X84 # subl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X85 # subl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X98 # subl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9B # subl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X99 # subl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9A # subl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9F # subl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9E # subl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9D # subl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9C, 0X24 # subl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9F # subl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9E # subl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9C # subl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9D # subl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X88 # subl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8B # subl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X89 # subl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8A # subl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8F # subl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8E # subl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8D # subl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8C, 0X24 # subl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8F # subl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8E # subl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8C # subl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8D # subl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X90 # subl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X93 # subl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X91 # subl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X92 # subl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X97 # subl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X96 # subl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X95 # subl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X94, 0X24 # subl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X97 # subl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X96 # subl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X94 # subl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X95 # subl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB8 # subl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBB # subl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB9 # subl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBA # subl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBF # subl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBE # subl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBD # subl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBC, 0X24 # subl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBF # subl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBE # subl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBC # subl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBD # subl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB0 # subl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB3 # subl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB1 # subl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB2 # subl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB7 # subl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB6 # subl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB5 # subl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB4, 0X24 # subl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB7 # subl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB6 # subl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB4 # subl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB5 # subl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA8 # subl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAB # subl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA9 # subl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAA # subl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAF # subl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAE # subl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAD # subl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAC, 0X24 # subl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAF # subl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAE # subl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAC # subl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAD # subl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SUB_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA0 # subl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA3 # subl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA1 # subl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA2 # subl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA7 # subl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA6 # subl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA5 # subl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA4, 0X24 # subl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA7 # subl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA6 # subl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA4 # subl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SUB_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA5 # subl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X04, 0X25 # subl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X1C, 0X25 # subl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X0C, 0X25 # subl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X14, 0X25 # subl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X3C, 0X25 # subl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X34, 0X25 # subl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X2C, 0X25 # subl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X24, 0X25 # subl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X04, 0X25 # subl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X0C, 0X25 # subl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X14, 0X25 # subl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X1C, 0X25 # subl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X24, 0X25 # subl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X2C, 0X25 # subl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X34, 0X25 # subl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X3C, 0X25 # subl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X04, 0X25 # subl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X1C, 0X25 # subl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X0C, 0X25 # subl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X14, 0X25 # subl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X3C, 0X25 # subl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X34, 0X25 # subl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X2C, 0X25 # subl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X29, 0X24, 0X25 # subl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X04, 0X25 # subl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X0C, 0X25 # subl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X14, 0X25 # subl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X1C, 0X25 # subl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X24, 0X25 # subl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X2C, 0X25 # subl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X34, 0X25 # subl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X3C, 0X25 # subl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X00 # subl (%rax), %eax")
#define SUB_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X03 # subl (%rbx), %eax")
#define SUB_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X01 # subl (%rcx), %eax")
#define SUB_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X02 # subl (%rdx), %eax")
#define SUB_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X07 # subl (%rdi), %eax")
#define SUB_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X06 # subl (%rsi), %eax")
#define SUB_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X45, 0X00 # subl (%rbp), %eax")
#define SUB_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X04, 0X24 # subl (%rsp), %eax")
#define SUB_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X00 # subl (%r8), %eax")
#define SUB_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X01 # subl (%r9), %eax")
#define SUB_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X02 # subl (%r10), %eax")
#define SUB_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X03 # subl (%r11), %eax")
#define SUB_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X04, 0X24 # subl (%r12), %eax")
#define SUB_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X45, 0X00 # subl (%r13), %eax")
#define SUB_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X06 # subl (%r14), %eax")
#define SUB_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X07 # subl (%r15), %eax")
#define SUB_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X00 # subl (%eax), %eax")
#define SUB_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X03 # subl (%ebx), %eax")
#define SUB_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X01 # subl (%ecx), %eax")
#define SUB_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X02 # subl (%edx), %eax")
#define SUB_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X07 # subl (%edi), %eax")
#define SUB_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X06 # subl (%esi), %eax")
#define SUB_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X45, 0X00 # subl (%ebp), %eax")
#define SUB_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X04, 0X24 # subl (%esp), %eax")

#define SUB_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X18 # subl (%rax), %ebx")
#define SUB_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X1B # subl (%rbx), %ebx")
#define SUB_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X19 # subl (%rcx), %ebx")
#define SUB_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X1A # subl (%rdx), %ebx")
#define SUB_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X1F # subl (%rdi), %ebx")
#define SUB_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X1E # subl (%rsi), %ebx")
#define SUB_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X5D, 0X00 # subl (%rbp), %ebx")
#define SUB_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X1C, 0X24 # subl (%rsp), %ebx")
#define SUB_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X18 # subl (%r8), %ebx")
#define SUB_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X19 # subl (%r9), %ebx")
#define SUB_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X1A # subl (%r10), %ebx")
#define SUB_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X1B # subl (%r11), %ebx")
#define SUB_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X1C, 0X24 # subl (%r12), %ebx")
#define SUB_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X5D, 0X00 # subl (%r13), %ebx")
#define SUB_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X1E # subl (%r14), %ebx")
#define SUB_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X1F # subl (%r15), %ebx")
#define SUB_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X18 # subl (%eax), %ebx")
#define SUB_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X1B # subl (%ebx), %ebx")
#define SUB_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X19 # subl (%ecx), %ebx")
#define SUB_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X1A # subl (%edx), %ebx")
#define SUB_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X1F # subl (%edi), %ebx")
#define SUB_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X1E # subl (%esi), %ebx")
#define SUB_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X5D, 0X00 # subl (%ebp), %ebx")
#define SUB_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X1C, 0X24 # subl (%esp), %ebx")

#define SUB_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X08 # subl (%rax), %ecx")
#define SUB_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X0B # subl (%rbx), %ecx")
#define SUB_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X09 # subl (%rcx), %ecx")
#define SUB_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X0A # subl (%rdx), %ecx")
#define SUB_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X0F # subl (%rdi), %ecx")
#define SUB_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X0E # subl (%rsi), %ecx")
#define SUB_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X4D, 0X00 # subl (%rbp), %ecx")
#define SUB_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X0C, 0X24 # subl (%rsp), %ecx")
#define SUB_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X08 # subl (%r8), %ecx")
#define SUB_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X09 # subl (%r9), %ecx")
#define SUB_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X0A # subl (%r10), %ecx")
#define SUB_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X0B # subl (%r11), %ecx")
#define SUB_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X0C, 0X24 # subl (%r12), %ecx")
#define SUB_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X4D, 0X00 # subl (%r13), %ecx")
#define SUB_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X0E # subl (%r14), %ecx")
#define SUB_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X0F # subl (%r15), %ecx")
#define SUB_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X08 # subl (%eax), %ecx")
#define SUB_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X0B # subl (%ebx), %ecx")
#define SUB_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X09 # subl (%ecx), %ecx")
#define SUB_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X0A # subl (%edx), %ecx")
#define SUB_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X0F # subl (%edi), %ecx")
#define SUB_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X0E # subl (%esi), %ecx")
#define SUB_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X4D, 0X00 # subl (%ebp), %ecx")
#define SUB_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X0C, 0X24 # subl (%esp), %ecx")

#define SUB_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X10 # subl (%rax), %edx")
#define SUB_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X13 # subl (%rbx), %edx")
#define SUB_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X11 # subl (%rcx), %edx")
#define SUB_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X12 # subl (%rdx), %edx")
#define SUB_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X17 # subl (%rdi), %edx")
#define SUB_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X16 # subl (%rsi), %edx")
#define SUB_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X55, 0X00 # subl (%rbp), %edx")
#define SUB_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X14, 0X24 # subl (%rsp), %edx")
#define SUB_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X10 # subl (%r8), %edx")
#define SUB_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X11 # subl (%r9), %edx")
#define SUB_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X12 # subl (%r10), %edx")
#define SUB_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X13 # subl (%r11), %edx")
#define SUB_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X14, 0X24 # subl (%r12), %edx")
#define SUB_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X55, 0X00 # subl (%r13), %edx")
#define SUB_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X16 # subl (%r14), %edx")
#define SUB_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X17 # subl (%r15), %edx")
#define SUB_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X10 # subl (%eax), %edx")
#define SUB_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X13 # subl (%ebx), %edx")
#define SUB_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X11 # subl (%ecx), %edx")
#define SUB_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X12 # subl (%edx), %edx")
#define SUB_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X17 # subl (%edi), %edx")
#define SUB_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X16 # subl (%esi), %edx")
#define SUB_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X55, 0X00 # subl (%ebp), %edx")
#define SUB_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X14, 0X24 # subl (%esp), %edx")

#define SUB_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X38 # subl (%rax), %edi")
#define SUB_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X3B # subl (%rbx), %edi")
#define SUB_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X39 # subl (%rcx), %edi")
#define SUB_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X3A # subl (%rdx), %edi")
#define SUB_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X3F # subl (%rdi), %edi")
#define SUB_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X3E # subl (%rsi), %edi")
#define SUB_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X7D, 0X00 # subl (%rbp), %edi")
#define SUB_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X3C, 0X24 # subl (%rsp), %edi")
#define SUB_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X38 # subl (%r8), %edi")
#define SUB_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X39 # subl (%r9), %edi")
#define SUB_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X3A # subl (%r10), %edi")
#define SUB_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X3B # subl (%r11), %edi")
#define SUB_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X3C, 0X24 # subl (%r12), %edi")
#define SUB_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X7D, 0X00 # subl (%r13), %edi")
#define SUB_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X3E # subl (%r14), %edi")
#define SUB_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X3F # subl (%r15), %edi")
#define SUB_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X38 # subl (%eax), %edi")
#define SUB_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X3B # subl (%ebx), %edi")
#define SUB_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X39 # subl (%ecx), %edi")
#define SUB_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X3A # subl (%edx), %edi")
#define SUB_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X3F # subl (%edi), %edi")
#define SUB_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X3E # subl (%esi), %edi")
#define SUB_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X7D, 0X00 # subl (%ebp), %edi")
#define SUB_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X3C, 0X24 # subl (%esp), %edi")

#define SUB_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X30 # subl (%rax), %esi")
#define SUB_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X33 # subl (%rbx), %esi")
#define SUB_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X31 # subl (%rcx), %esi")
#define SUB_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X32 # subl (%rdx), %esi")
#define SUB_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X37 # subl (%rdi), %esi")
#define SUB_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X36 # subl (%rsi), %esi")
#define SUB_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X75, 0X00 # subl (%rbp), %esi")
#define SUB_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X34, 0X24 # subl (%rsp), %esi")
#define SUB_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X30 # subl (%r8), %esi")
#define SUB_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X31 # subl (%r9), %esi")
#define SUB_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X32 # subl (%r10), %esi")
#define SUB_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X33 # subl (%r11), %esi")
#define SUB_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X34, 0X24 # subl (%r12), %esi")
#define SUB_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X75, 0X00 # subl (%r13), %esi")
#define SUB_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X36 # subl (%r14), %esi")
#define SUB_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X37 # subl (%r15), %esi")
#define SUB_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X30 # subl (%eax), %esi")
#define SUB_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X33 # subl (%ebx), %esi")
#define SUB_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X31 # subl (%ecx), %esi")
#define SUB_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X32 # subl (%edx), %esi")
#define SUB_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X37 # subl (%edi), %esi")
#define SUB_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X36 # subl (%esi), %esi")
#define SUB_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X75, 0X00 # subl (%ebp), %esi")
#define SUB_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X34, 0X24 # subl (%esp), %esi")

#define SUB_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X28 # subl (%rax), %ebp")
#define SUB_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X2B # subl (%rbx), %ebp")
#define SUB_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X29 # subl (%rcx), %ebp")
#define SUB_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X2A # subl (%rdx), %ebp")
#define SUB_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X2F # subl (%rdi), %ebp")
#define SUB_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X2E # subl (%rsi), %ebp")
#define SUB_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X6D, 0X00 # subl (%rbp), %ebp")
#define SUB_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X2C, 0X24 # subl (%rsp), %ebp")
#define SUB_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X28 # subl (%r8), %ebp")
#define SUB_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X29 # subl (%r9), %ebp")
#define SUB_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X2A # subl (%r10), %ebp")
#define SUB_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X2B # subl (%r11), %ebp")
#define SUB_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X2C, 0X24 # subl (%r12), %ebp")
#define SUB_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X6D, 0X00 # subl (%r13), %ebp")
#define SUB_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X2E # subl (%r14), %ebp")
#define SUB_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X2F # subl (%r15), %ebp")
#define SUB_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X28 # subl (%eax), %ebp")
#define SUB_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X2B # subl (%ebx), %ebp")
#define SUB_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X29 # subl (%ecx), %ebp")
#define SUB_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X2A # subl (%edx), %ebp")
#define SUB_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X2F # subl (%edi), %ebp")
#define SUB_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X2E # subl (%esi), %ebp")
#define SUB_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X6D, 0X00 # subl (%ebp), %ebp")
#define SUB_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X2C, 0X24 # subl (%esp), %ebp")

#define SUB_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X2B, 0X20 # subl (%rax), %esp")
#define SUB_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X2B, 0X23 # subl (%rbx), %esp")
#define SUB_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X2B, 0X21 # subl (%rcx), %esp")
#define SUB_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X2B, 0X22 # subl (%rdx), %esp")
#define SUB_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X2B, 0X27 # subl (%rdi), %esp")
#define SUB_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X2B, 0X26 # subl (%rsi), %esp")
#define SUB_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X2B, 0X65, 0X00 # subl (%rbp), %esp")
#define SUB_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X2B, 0X24, 0X24 # subl (%rsp), %esp")
#define SUB_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X2B, 0X20 # subl (%r8), %esp")
#define SUB_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X2B, 0X21 # subl (%r9), %esp")
#define SUB_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X2B, 0X22 # subl (%r10), %esp")
#define SUB_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X2B, 0X23 # subl (%r11), %esp")
#define SUB_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X2B, 0X24, 0X24 # subl (%r12), %esp")
#define SUB_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X2B, 0X65, 0X00 # subl (%r13), %esp")
#define SUB_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X2B, 0X26 # subl (%r14), %esp")
#define SUB_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X2B, 0X27 # subl (%r15), %esp")
#define SUB_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X2B, 0X20 # subl (%eax), %esp")
#define SUB_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X2B, 0X23 # subl (%ebx), %esp")
#define SUB_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X2B, 0X21 # subl (%ecx), %esp")
#define SUB_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X2B, 0X22 # subl (%edx), %esp")
#define SUB_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X2B, 0X27 # subl (%edi), %esp")
#define SUB_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X2B, 0X26 # subl (%esi), %esp")
#define SUB_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X2B, 0X65, 0X00 # subl (%ebp), %esp")
#define SUB_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X2B, 0X24, 0X24 # subl (%esp), %esp")

#define SUB_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X00 # subl (%rax), %r8d")
#define SUB_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X03 # subl (%rbx), %r8d")
#define SUB_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X01 # subl (%rcx), %r8d")
#define SUB_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X02 # subl (%rdx), %r8d")
#define SUB_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X07 # subl (%rdi), %r8d")
#define SUB_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X06 # subl (%rsi), %r8d")
#define SUB_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X45, 0X00 # subl (%rbp), %r8d")
#define SUB_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X04, 0X24 # subl (%rsp), %r8d")
#define SUB_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X00 # subl (%r8), %r8d")
#define SUB_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X01 # subl (%r9), %r8d")
#define SUB_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X02 # subl (%r10), %r8d")
#define SUB_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X03 # subl (%r11), %r8d")
#define SUB_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X04, 0X24 # subl (%r12), %r8d")
#define SUB_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X45, 0X00 # subl (%r13), %r8d")
#define SUB_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X06 # subl (%r14), %r8d")
#define SUB_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X07 # subl (%r15), %r8d")
#define SUB_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X00 # subl (%eax), %r8d")
#define SUB_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X03 # subl (%ebx), %r8d")
#define SUB_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X01 # subl (%ecx), %r8d")
#define SUB_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X02 # subl (%edx), %r8d")
#define SUB_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X07 # subl (%edi), %r8d")
#define SUB_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X06 # subl (%esi), %r8d")
#define SUB_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X45, 0X00 # subl (%ebp), %r8d")
#define SUB_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X04, 0X24 # subl (%esp), %r8d")

#define SUB_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X08 # subl (%rax), %r9d")
#define SUB_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X0B # subl (%rbx), %r9d")
#define SUB_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X09 # subl (%rcx), %r9d")
#define SUB_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X0A # subl (%rdx), %r9d")
#define SUB_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X0F # subl (%rdi), %r9d")
#define SUB_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X0E # subl (%rsi), %r9d")
#define SUB_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X4D, 0X00 # subl (%rbp), %r9d")
#define SUB_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X0C, 0X24 # subl (%rsp), %r9d")
#define SUB_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X08 # subl (%r8), %r9d")
#define SUB_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X09 # subl (%r9), %r9d")
#define SUB_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X0A # subl (%r10), %r9d")
#define SUB_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X0B # subl (%r11), %r9d")
#define SUB_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X0C, 0X24 # subl (%r12), %r9d")
#define SUB_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X4D, 0X00 # subl (%r13), %r9d")
#define SUB_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X0E # subl (%r14), %r9d")
#define SUB_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X0F # subl (%r15), %r9d")
#define SUB_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X08 # subl (%eax), %r9d")
#define SUB_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X0B # subl (%ebx), %r9d")
#define SUB_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X09 # subl (%ecx), %r9d")
#define SUB_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X0A # subl (%edx), %r9d")
#define SUB_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X0F # subl (%edi), %r9d")
#define SUB_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X0E # subl (%esi), %r9d")
#define SUB_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X4D, 0X00 # subl (%ebp), %r9d")
#define SUB_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X0C, 0X24 # subl (%esp), %r9d")

#define SUB_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X10 # subl (%rax), %r10d")
#define SUB_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X13 # subl (%rbx), %r10d")
#define SUB_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X11 # subl (%rcx), %r10d")
#define SUB_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X12 # subl (%rdx), %r10d")
#define SUB_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X17 # subl (%rdi), %r10d")
#define SUB_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X16 # subl (%rsi), %r10d")
#define SUB_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X55, 0X00 # subl (%rbp), %r10d")
#define SUB_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X14, 0X24 # subl (%rsp), %r10d")
#define SUB_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X10 # subl (%r8), %r10d")
#define SUB_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X11 # subl (%r9), %r10d")
#define SUB_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X12 # subl (%r10), %r10d")
#define SUB_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X13 # subl (%r11), %r10d")
#define SUB_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X14, 0X24 # subl (%r12), %r10d")
#define SUB_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X55, 0X00 # subl (%r13), %r10d")
#define SUB_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X16 # subl (%r14), %r10d")
#define SUB_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X17 # subl (%r15), %r10d")
#define SUB_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X10 # subl (%eax), %r10d")
#define SUB_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X13 # subl (%ebx), %r10d")
#define SUB_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X11 # subl (%ecx), %r10d")
#define SUB_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X12 # subl (%edx), %r10d")
#define SUB_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X17 # subl (%edi), %r10d")
#define SUB_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X16 # subl (%esi), %r10d")
#define SUB_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X55, 0X00 # subl (%ebp), %r10d")
#define SUB_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X14, 0X24 # subl (%esp), %r10d")

#define SUB_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X18 # subl (%rax), %r11d")
#define SUB_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X1B # subl (%rbx), %r11d")
#define SUB_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X19 # subl (%rcx), %r11d")
#define SUB_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X1A # subl (%rdx), %r11d")
#define SUB_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X1F # subl (%rdi), %r11d")
#define SUB_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X1E # subl (%rsi), %r11d")
#define SUB_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X5D, 0X00 # subl (%rbp), %r11d")
#define SUB_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X1C, 0X24 # subl (%rsp), %r11d")
#define SUB_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X18 # subl (%r8), %r11d")
#define SUB_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X19 # subl (%r9), %r11d")
#define SUB_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X1A # subl (%r10), %r11d")
#define SUB_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X1B # subl (%r11), %r11d")
#define SUB_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X1C, 0X24 # subl (%r12), %r11d")
#define SUB_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X5D, 0X00 # subl (%r13), %r11d")
#define SUB_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X1E # subl (%r14), %r11d")
#define SUB_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X1F # subl (%r15), %r11d")
#define SUB_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X18 # subl (%eax), %r11d")
#define SUB_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X1B # subl (%ebx), %r11d")
#define SUB_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X19 # subl (%ecx), %r11d")
#define SUB_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X1A # subl (%edx), %r11d")
#define SUB_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X1F # subl (%edi), %r11d")
#define SUB_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X1E # subl (%esi), %r11d")
#define SUB_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X5D, 0X00 # subl (%ebp), %r11d")
#define SUB_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X1C, 0X24 # subl (%esp), %r11d")

#define SUB_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X20 # subl (%rax), %r12d")
#define SUB_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X23 # subl (%rbx), %r12d")
#define SUB_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X21 # subl (%rcx), %r12d")
#define SUB_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X22 # subl (%rdx), %r12d")
#define SUB_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X27 # subl (%rdi), %r12d")
#define SUB_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X26 # subl (%rsi), %r12d")
#define SUB_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X65, 0X00 # subl (%rbp), %r12d")
#define SUB_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X24, 0X24 # subl (%rsp), %r12d")
#define SUB_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X20 # subl (%r8), %r12d")
#define SUB_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X21 # subl (%r9), %r12d")
#define SUB_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X22 # subl (%r10), %r12d")
#define SUB_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X23 # subl (%r11), %r12d")
#define SUB_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X24, 0X24 # subl (%r12), %r12d")
#define SUB_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X65, 0X00 # subl (%r13), %r12d")
#define SUB_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X26 # subl (%r14), %r12d")
#define SUB_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X27 # subl (%r15), %r12d")
#define SUB_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X20 # subl (%eax), %r12d")
#define SUB_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X23 # subl (%ebx), %r12d")
#define SUB_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X21 # subl (%ecx), %r12d")
#define SUB_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X22 # subl (%edx), %r12d")
#define SUB_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X27 # subl (%edi), %r12d")
#define SUB_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X26 # subl (%esi), %r12d")
#define SUB_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X65, 0X00 # subl (%ebp), %r12d")
#define SUB_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X24, 0X24 # subl (%esp), %r12d")

#define SUB_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X28 # subl (%rax), %r13d")
#define SUB_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X2B # subl (%rbx), %r13d")
#define SUB_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X29 # subl (%rcx), %r13d")
#define SUB_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X2A # subl (%rdx), %r13d")
#define SUB_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X2F # subl (%rdi), %r13d")
#define SUB_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X2E # subl (%rsi), %r13d")
#define SUB_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X6D, 0X00 # subl (%rbp), %r13d")
#define SUB_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X2C, 0X24 # subl (%rsp), %r13d")
#define SUB_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X28 # subl (%r8), %r13d")
#define SUB_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X29 # subl (%r9), %r13d")
#define SUB_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X2A # subl (%r10), %r13d")
#define SUB_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X2B # subl (%r11), %r13d")
#define SUB_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X2C, 0X24 # subl (%r12), %r13d")
#define SUB_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X6D, 0X00 # subl (%r13), %r13d")
#define SUB_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X2E # subl (%r14), %r13d")
#define SUB_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X2F # subl (%r15), %r13d")
#define SUB_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X28 # subl (%eax), %r13d")
#define SUB_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X2B # subl (%ebx), %r13d")
#define SUB_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X29 # subl (%ecx), %r13d")
#define SUB_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X2A # subl (%edx), %r13d")
#define SUB_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X2F # subl (%edi), %r13d")
#define SUB_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X2E # subl (%esi), %r13d")
#define SUB_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X6D, 0X00 # subl (%ebp), %r13d")
#define SUB_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X2C, 0X24 # subl (%esp), %r13d")

#define SUB_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X30 # subl (%rax), %r14d")
#define SUB_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X33 # subl (%rbx), %r14d")
#define SUB_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X31 # subl (%rcx), %r14d")
#define SUB_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X32 # subl (%rdx), %r14d")
#define SUB_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X37 # subl (%rdi), %r14d")
#define SUB_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X36 # subl (%rsi), %r14d")
#define SUB_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X75, 0X00 # subl (%rbp), %r14d")
#define SUB_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X34, 0X24 # subl (%rsp), %r14d")
#define SUB_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X30 # subl (%r8), %r14d")
#define SUB_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X31 # subl (%r9), %r14d")
#define SUB_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X32 # subl (%r10), %r14d")
#define SUB_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X33 # subl (%r11), %r14d")
#define SUB_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X34, 0X24 # subl (%r12), %r14d")
#define SUB_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X75, 0X00 # subl (%r13), %r14d")
#define SUB_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X36 # subl (%r14), %r14d")
#define SUB_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X37 # subl (%r15), %r14d")
#define SUB_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X30 # subl (%eax), %r14d")
#define SUB_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X33 # subl (%ebx), %r14d")
#define SUB_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X31 # subl (%ecx), %r14d")
#define SUB_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X32 # subl (%edx), %r14d")
#define SUB_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X37 # subl (%edi), %r14d")
#define SUB_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X36 # subl (%esi), %r14d")
#define SUB_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X75, 0X00 # subl (%ebp), %r14d")
#define SUB_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X34, 0X24 # subl (%esp), %r14d")

#define SUB_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X2B, 0X38 # subl (%rax), %r15d")
#define SUB_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X2B, 0X3B # subl (%rbx), %r15d")
#define SUB_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X2B, 0X39 # subl (%rcx), %r15d")
#define SUB_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X2B, 0X3A # subl (%rdx), %r15d")
#define SUB_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X2B, 0X3F # subl (%rdi), %r15d")
#define SUB_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X2B, 0X3E # subl (%rsi), %r15d")
#define SUB_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X2B, 0X7D, 0X00 # subl (%rbp), %r15d")
#define SUB_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X2B, 0X3C, 0X24 # subl (%rsp), %r15d")
#define SUB_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X2B, 0X38 # subl (%r8), %r15d")
#define SUB_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X2B, 0X39 # subl (%r9), %r15d")
#define SUB_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X2B, 0X3A # subl (%r10), %r15d")
#define SUB_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X2B, 0X3B # subl (%r11), %r15d")
#define SUB_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X2B, 0X3C, 0X24 # subl (%r12), %r15d")
#define SUB_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X2B, 0X7D, 0X00 # subl (%r13), %r15d")
#define SUB_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X2B, 0X3E # subl (%r14), %r15d")
#define SUB_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X2B, 0X3F # subl (%r15), %r15d")
#define SUB_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X38 # subl (%eax), %r15d")
#define SUB_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X3B # subl (%ebx), %r15d")
#define SUB_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X39 # subl (%ecx), %r15d")
#define SUB_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X3A # subl (%edx), %r15d")
#define SUB_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X3F # subl (%edi), %r15d")
#define SUB_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X3E # subl (%esi), %r15d")
#define SUB_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X7D, 0X00 # subl (%ebp), %r15d")
#define SUB_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X3C, 0X24 # subl (%esp), %r15d")

#define SUB_EAX_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X00 # subl %eax, (%rax)")
#define SUB_EAX_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X03 # subl %eax, (%rbx)")
#define SUB_EAX_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X01 # subl %eax, (%rcx)")
#define SUB_EAX_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X02 # subl %eax, (%rdx)")
#define SUB_EAX_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X07 # subl %eax, (%rdi)")
#define SUB_EAX_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X06 # subl %eax, (%rsi)")
#define SUB_EAX_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X45, 0X00 # subl %eax, (%rbp)")
#define SUB_EAX_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X04, 0X24 # subl %eax, (%rsp)")
#define SUB_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X00 # subl %eax, (%r8)")
#define SUB_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X01 # subl %eax, (%r9)")
#define SUB_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X02 # subl %eax, (%r10)")
#define SUB_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X03 # subl %eax, (%r11)")
#define SUB_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X04, 0X24 # subl %eax, (%r12)")
#define SUB_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X45, 0X00 # subl %eax, (%r13)")
#define SUB_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X06 # subl %eax, (%r14)")
#define SUB_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X07 # subl %eax, (%r15)")
#define SUB_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X00 # subl %eax, (%eax)")
#define SUB_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X03 # subl %eax, (%ebx)")
#define SUB_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X01 # subl %eax, (%ecx)")
#define SUB_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X02 # subl %eax, (%edx)")
#define SUB_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X07 # subl %eax, (%edi)")
#define SUB_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X06 # subl %eax, (%esi)")
#define SUB_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X45, 0X00 # subl %eax, (%ebp)")
#define SUB_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X04, 0X24 # subl %eax, (%esp)")

#define SUB_EBX_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X18 # subl %ebx, (%rax)")
#define SUB_EBX_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X1B # subl %ebx, (%rbx)")
#define SUB_EBX_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X19 # subl %ebx, (%rcx)")
#define SUB_EBX_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X1A # subl %ebx, (%rdx)")
#define SUB_EBX_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X1F # subl %ebx, (%rdi)")
#define SUB_EBX_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X1E # subl %ebx, (%rsi)")
#define SUB_EBX_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X5D, 0X00 # subl %ebx, (%rbp)")
#define SUB_EBX_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X1C, 0X24 # subl %ebx, (%rsp)")
#define SUB_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X18 # subl %ebx, (%r8)")
#define SUB_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X19 # subl %ebx, (%r9)")
#define SUB_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X1A # subl %ebx, (%r10)")
#define SUB_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X1B # subl %ebx, (%r11)")
#define SUB_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X1C, 0X24 # subl %ebx, (%r12)")
#define SUB_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X5D, 0X00 # subl %ebx, (%r13)")
#define SUB_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X1E # subl %ebx, (%r14)")
#define SUB_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X1F # subl %ebx, (%r15)")
#define SUB_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X18 # subl %ebx, (%eax)")
#define SUB_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X1B # subl %ebx, (%ebx)")
#define SUB_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X19 # subl %ebx, (%ecx)")
#define SUB_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X1A # subl %ebx, (%edx)")
#define SUB_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X1F # subl %ebx, (%edi)")
#define SUB_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X1E # subl %ebx, (%esi)")
#define SUB_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X5D, 0X00 # subl %ebx, (%ebp)")
#define SUB_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X1C, 0X24 # subl %ebx, (%esp)")

#define SUB_ECX_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X08 # subl %ecx, (%rax)")
#define SUB_ECX_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X0B # subl %ecx, (%rbx)")
#define SUB_ECX_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X09 # subl %ecx, (%rcx)")
#define SUB_ECX_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X0A # subl %ecx, (%rdx)")
#define SUB_ECX_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X0F # subl %ecx, (%rdi)")
#define SUB_ECX_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X0E # subl %ecx, (%rsi)")
#define SUB_ECX_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X4D, 0X00 # subl %ecx, (%rbp)")
#define SUB_ECX_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X0C, 0X24 # subl %ecx, (%rsp)")
#define SUB_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X08 # subl %ecx, (%r8)")
#define SUB_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X09 # subl %ecx, (%r9)")
#define SUB_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X0A # subl %ecx, (%r10)")
#define SUB_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X0B # subl %ecx, (%r11)")
#define SUB_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X0C, 0X24 # subl %ecx, (%r12)")
#define SUB_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X4D, 0X00 # subl %ecx, (%r13)")
#define SUB_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X0E # subl %ecx, (%r14)")
#define SUB_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X0F # subl %ecx, (%r15)")
#define SUB_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X08 # subl %ecx, (%eax)")
#define SUB_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X0B # subl %ecx, (%ebx)")
#define SUB_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X09 # subl %ecx, (%ecx)")
#define SUB_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X0A # subl %ecx, (%edx)")
#define SUB_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X0F # subl %ecx, (%edi)")
#define SUB_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X0E # subl %ecx, (%esi)")
#define SUB_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X4D, 0X00 # subl %ecx, (%ebp)")
#define SUB_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X0C, 0X24 # subl %ecx, (%esp)")

#define SUB_EDX_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X10 # subl %edx, (%rax)")
#define SUB_EDX_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X13 # subl %edx, (%rbx)")
#define SUB_EDX_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X11 # subl %edx, (%rcx)")
#define SUB_EDX_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X12 # subl %edx, (%rdx)")
#define SUB_EDX_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X17 # subl %edx, (%rdi)")
#define SUB_EDX_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X16 # subl %edx, (%rsi)")
#define SUB_EDX_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X55, 0X00 # subl %edx, (%rbp)")
#define SUB_EDX_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X14, 0X24 # subl %edx, (%rsp)")
#define SUB_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X10 # subl %edx, (%r8)")
#define SUB_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X11 # subl %edx, (%r9)")
#define SUB_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X12 # subl %edx, (%r10)")
#define SUB_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X13 # subl %edx, (%r11)")
#define SUB_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X14, 0X24 # subl %edx, (%r12)")
#define SUB_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X55, 0X00 # subl %edx, (%r13)")
#define SUB_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X16 # subl %edx, (%r14)")
#define SUB_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X17 # subl %edx, (%r15)")
#define SUB_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X10 # subl %edx, (%eax)")
#define SUB_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X13 # subl %edx, (%ebx)")
#define SUB_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X11 # subl %edx, (%ecx)")
#define SUB_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X12 # subl %edx, (%edx)")
#define SUB_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X17 # subl %edx, (%edi)")
#define SUB_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X16 # subl %edx, (%esi)")
#define SUB_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X55, 0X00 # subl %edx, (%ebp)")
#define SUB_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X14, 0X24 # subl %edx, (%esp)")

#define SUB_EDI_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X38 # subl %edi, (%rax)")
#define SUB_EDI_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X3B # subl %edi, (%rbx)")
#define SUB_EDI_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X39 # subl %edi, (%rcx)")
#define SUB_EDI_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X3A # subl %edi, (%rdx)")
#define SUB_EDI_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X3F # subl %edi, (%rdi)")
#define SUB_EDI_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X3E # subl %edi, (%rsi)")
#define SUB_EDI_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X7D, 0X00 # subl %edi, (%rbp)")
#define SUB_EDI_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X3C, 0X24 # subl %edi, (%rsp)")
#define SUB_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X38 # subl %edi, (%r8)")
#define SUB_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X39 # subl %edi, (%r9)")
#define SUB_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X3A # subl %edi, (%r10)")
#define SUB_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X3B # subl %edi, (%r11)")
#define SUB_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X3C, 0X24 # subl %edi, (%r12)")
#define SUB_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X7D, 0X00 # subl %edi, (%r13)")
#define SUB_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X3E # subl %edi, (%r14)")
#define SUB_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X3F # subl %edi, (%r15)")
#define SUB_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X38 # subl %edi, (%eax)")
#define SUB_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X3B # subl %edi, (%ebx)")
#define SUB_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X39 # subl %edi, (%ecx)")
#define SUB_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X3A # subl %edi, (%edx)")
#define SUB_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X3F # subl %edi, (%edi)")
#define SUB_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X3E # subl %edi, (%esi)")
#define SUB_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X7D, 0X00 # subl %edi, (%ebp)")
#define SUB_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X3C, 0X24 # subl %edi, (%esp)")

#define SUB_ESI_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X30 # subl %esi, (%rax)")
#define SUB_ESI_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X33 # subl %esi, (%rbx)")
#define SUB_ESI_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X31 # subl %esi, (%rcx)")
#define SUB_ESI_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X32 # subl %esi, (%rdx)")
#define SUB_ESI_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X37 # subl %esi, (%rdi)")
#define SUB_ESI_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X36 # subl %esi, (%rsi)")
#define SUB_ESI_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X75, 0X00 # subl %esi, (%rbp)")
#define SUB_ESI_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X34, 0X24 # subl %esi, (%rsp)")
#define SUB_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X30 # subl %esi, (%r8)")
#define SUB_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X31 # subl %esi, (%r9)")
#define SUB_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X32 # subl %esi, (%r10)")
#define SUB_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X33 # subl %esi, (%r11)")
#define SUB_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X34, 0X24 # subl %esi, (%r12)")
#define SUB_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X75, 0X00 # subl %esi, (%r13)")
#define SUB_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X36 # subl %esi, (%r14)")
#define SUB_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X37 # subl %esi, (%r15)")
#define SUB_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X30 # subl %esi, (%eax)")
#define SUB_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X33 # subl %esi, (%ebx)")
#define SUB_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X31 # subl %esi, (%ecx)")
#define SUB_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X32 # subl %esi, (%edx)")
#define SUB_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X37 # subl %esi, (%edi)")
#define SUB_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X36 # subl %esi, (%esi)")
#define SUB_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X75, 0X00 # subl %esi, (%ebp)")
#define SUB_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X34, 0X24 # subl %esi, (%esp)")

#define SUB_EBP_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X28 # subl %ebp, (%rax)")
#define SUB_EBP_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X2B # subl %ebp, (%rbx)")
#define SUB_EBP_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X29 # subl %ebp, (%rcx)")
#define SUB_EBP_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X2A # subl %ebp, (%rdx)")
#define SUB_EBP_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X2F # subl %ebp, (%rdi)")
#define SUB_EBP_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X2E # subl %ebp, (%rsi)")
#define SUB_EBP_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X6D, 0X00 # subl %ebp, (%rbp)")
#define SUB_EBP_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X2C, 0X24 # subl %ebp, (%rsp)")
#define SUB_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X28 # subl %ebp, (%r8)")
#define SUB_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X29 # subl %ebp, (%r9)")
#define SUB_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X2A # subl %ebp, (%r10)")
#define SUB_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X2B # subl %ebp, (%r11)")
#define SUB_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X2C, 0X24 # subl %ebp, (%r12)")
#define SUB_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X6D, 0X00 # subl %ebp, (%r13)")
#define SUB_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X2E # subl %ebp, (%r14)")
#define SUB_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X2F # subl %ebp, (%r15)")
#define SUB_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X28 # subl %ebp, (%eax)")
#define SUB_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X2B # subl %ebp, (%ebx)")
#define SUB_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X29 # subl %ebp, (%ecx)")
#define SUB_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X2A # subl %ebp, (%edx)")
#define SUB_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X2F # subl %ebp, (%edi)")
#define SUB_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X2E # subl %ebp, (%esi)")
#define SUB_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X6D, 0X00 # subl %ebp, (%ebp)")
#define SUB_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X2C, 0X24 # subl %ebp, (%esp)")

#define SUB_ESP_TO_PTR_RAX CMT_ASM(".byte 0X29, 0X20 # subl %esp, (%rax)")
#define SUB_ESP_TO_PTR_RBX CMT_ASM(".byte 0X29, 0X23 # subl %esp, (%rbx)")
#define SUB_ESP_TO_PTR_RCX CMT_ASM(".byte 0X29, 0X21 # subl %esp, (%rcx)")
#define SUB_ESP_TO_PTR_RDX CMT_ASM(".byte 0X29, 0X22 # subl %esp, (%rdx)")
#define SUB_ESP_TO_PTR_RDI CMT_ASM(".byte 0X29, 0X27 # subl %esp, (%rdi)")
#define SUB_ESP_TO_PTR_RSI CMT_ASM(".byte 0X29, 0X26 # subl %esp, (%rsi)")
#define SUB_ESP_TO_PTR_RBP CMT_ASM(".byte 0X29, 0X65, 0X00 # subl %esp, (%rbp)")
#define SUB_ESP_TO_PTR_RSP CMT_ASM(".byte 0X29, 0X24, 0X24 # subl %esp, (%rsp)")
#define SUB_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X29, 0X20 # subl %esp, (%r8)")
#define SUB_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X29, 0X21 # subl %esp, (%r9)")
#define SUB_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X29, 0X22 # subl %esp, (%r10)")
#define SUB_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X29, 0X23 # subl %esp, (%r11)")
#define SUB_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X29, 0X24, 0X24 # subl %esp, (%r12)")
#define SUB_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X29, 0X65, 0X00 # subl %esp, (%r13)")
#define SUB_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X29, 0X26 # subl %esp, (%r14)")
#define SUB_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X29, 0X27 # subl %esp, (%r15)")
#define SUB_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X29, 0X20 # subl %esp, (%eax)")
#define SUB_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X29, 0X23 # subl %esp, (%ebx)")
#define SUB_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X29, 0X21 # subl %esp, (%ecx)")
#define SUB_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X29, 0X22 # subl %esp, (%edx)")
#define SUB_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X29, 0X27 # subl %esp, (%edi)")
#define SUB_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X29, 0X26 # subl %esp, (%esi)")
#define SUB_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X29, 0X65, 0X00 # subl %esp, (%ebp)")
#define SUB_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X29, 0X24, 0X24 # subl %esp, (%esp)")

#define SUB_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X00 # subl %r8d, (%rax)")
#define SUB_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X03 # subl %r8d, (%rbx)")
#define SUB_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X01 # subl %r8d, (%rcx)")
#define SUB_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X02 # subl %r8d, (%rdx)")
#define SUB_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X07 # subl %r8d, (%rdi)")
#define SUB_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X06 # subl %r8d, (%rsi)")
#define SUB_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X45, 0X00 # subl %r8d, (%rbp)")
#define SUB_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X04, 0X24 # subl %r8d, (%rsp)")
#define SUB_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X00 # subl %r8d, (%r8)")
#define SUB_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X01 # subl %r8d, (%r9)")
#define SUB_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X02 # subl %r8d, (%r10)")
#define SUB_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X03 # subl %r8d, (%r11)")
#define SUB_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X04, 0X24 # subl %r8d, (%r12)")
#define SUB_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X45, 0X00 # subl %r8d, (%r13)")
#define SUB_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X06 # subl %r8d, (%r14)")
#define SUB_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X07 # subl %r8d, (%r15)")
#define SUB_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X00 # subl %r8d, (%eax)")
#define SUB_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X03 # subl %r8d, (%ebx)")
#define SUB_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X01 # subl %r8d, (%ecx)")
#define SUB_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X02 # subl %r8d, (%edx)")
#define SUB_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X07 # subl %r8d, (%edi)")
#define SUB_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X06 # subl %r8d, (%esi)")
#define SUB_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X45, 0X00 # subl %r8d, (%ebp)")
#define SUB_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X04, 0X24 # subl %r8d, (%esp)")

#define SUB_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X08 # subl %r9d, (%rax)")
#define SUB_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X0B # subl %r9d, (%rbx)")
#define SUB_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X09 # subl %r9d, (%rcx)")
#define SUB_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X0A # subl %r9d, (%rdx)")
#define SUB_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X0F # subl %r9d, (%rdi)")
#define SUB_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X0E # subl %r9d, (%rsi)")
#define SUB_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X4D, 0X00 # subl %r9d, (%rbp)")
#define SUB_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X0C, 0X24 # subl %r9d, (%rsp)")
#define SUB_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X08 # subl %r9d, (%r8)")
#define SUB_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X09 # subl %r9d, (%r9)")
#define SUB_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X0A # subl %r9d, (%r10)")
#define SUB_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X0B # subl %r9d, (%r11)")
#define SUB_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X0C, 0X24 # subl %r9d, (%r12)")
#define SUB_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X4D, 0X00 # subl %r9d, (%r13)")
#define SUB_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X0E # subl %r9d, (%r14)")
#define SUB_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X0F # subl %r9d, (%r15)")
#define SUB_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X08 # subl %r9d, (%eax)")
#define SUB_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X0B # subl %r9d, (%ebx)")
#define SUB_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X09 # subl %r9d, (%ecx)")
#define SUB_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X0A # subl %r9d, (%edx)")
#define SUB_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X0F # subl %r9d, (%edi)")
#define SUB_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X0E # subl %r9d, (%esi)")
#define SUB_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X4D, 0X00 # subl %r9d, (%ebp)")
#define SUB_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X0C, 0X24 # subl %r9d, (%esp)")

#define SUB_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X10 # subl %r10d, (%rax)")
#define SUB_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X13 # subl %r10d, (%rbx)")
#define SUB_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X11 # subl %r10d, (%rcx)")
#define SUB_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X12 # subl %r10d, (%rdx)")
#define SUB_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X17 # subl %r10d, (%rdi)")
#define SUB_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X16 # subl %r10d, (%rsi)")
#define SUB_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X55, 0X00 # subl %r10d, (%rbp)")
#define SUB_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X14, 0X24 # subl %r10d, (%rsp)")
#define SUB_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X10 # subl %r10d, (%r8)")
#define SUB_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X11 # subl %r10d, (%r9)")
#define SUB_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X12 # subl %r10d, (%r10)")
#define SUB_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X13 # subl %r10d, (%r11)")
#define SUB_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X14, 0X24 # subl %r10d, (%r12)")
#define SUB_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X55, 0X00 # subl %r10d, (%r13)")
#define SUB_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X16 # subl %r10d, (%r14)")
#define SUB_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X17 # subl %r10d, (%r15)")
#define SUB_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X10 # subl %r10d, (%eax)")
#define SUB_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X13 # subl %r10d, (%ebx)")
#define SUB_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X11 # subl %r10d, (%ecx)")
#define SUB_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X12 # subl %r10d, (%edx)")
#define SUB_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X17 # subl %r10d, (%edi)")
#define SUB_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X16 # subl %r10d, (%esi)")
#define SUB_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X55, 0X00 # subl %r10d, (%ebp)")
#define SUB_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X14, 0X24 # subl %r10d, (%esp)")

#define SUB_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X18 # subl %r11d, (%rax)")
#define SUB_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X1B # subl %r11d, (%rbx)")
#define SUB_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X19 # subl %r11d, (%rcx)")
#define SUB_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X1A # subl %r11d, (%rdx)")
#define SUB_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X1F # subl %r11d, (%rdi)")
#define SUB_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X1E # subl %r11d, (%rsi)")
#define SUB_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X5D, 0X00 # subl %r11d, (%rbp)")
#define SUB_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X1C, 0X24 # subl %r11d, (%rsp)")
#define SUB_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X18 # subl %r11d, (%r8)")
#define SUB_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X19 # subl %r11d, (%r9)")
#define SUB_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X1A # subl %r11d, (%r10)")
#define SUB_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X1B # subl %r11d, (%r11)")
#define SUB_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X1C, 0X24 # subl %r11d, (%r12)")
#define SUB_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X5D, 0X00 # subl %r11d, (%r13)")
#define SUB_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X1E # subl %r11d, (%r14)")
#define SUB_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X1F # subl %r11d, (%r15)")
#define SUB_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X18 # subl %r11d, (%eax)")
#define SUB_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X1B # subl %r11d, (%ebx)")
#define SUB_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X19 # subl %r11d, (%ecx)")
#define SUB_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X1A # subl %r11d, (%edx)")
#define SUB_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X1F # subl %r11d, (%edi)")
#define SUB_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X1E # subl %r11d, (%esi)")
#define SUB_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X5D, 0X00 # subl %r11d, (%ebp)")
#define SUB_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X1C, 0X24 # subl %r11d, (%esp)")

#define SUB_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X20 # subl %r12d, (%rax)")
#define SUB_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X23 # subl %r12d, (%rbx)")
#define SUB_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X21 # subl %r12d, (%rcx)")
#define SUB_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X22 # subl %r12d, (%rdx)")
#define SUB_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X27 # subl %r12d, (%rdi)")
#define SUB_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X26 # subl %r12d, (%rsi)")
#define SUB_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X65, 0X00 # subl %r12d, (%rbp)")
#define SUB_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X24, 0X24 # subl %r12d, (%rsp)")
#define SUB_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X20 # subl %r12d, (%r8)")
#define SUB_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X21 # subl %r12d, (%r9)")
#define SUB_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X22 # subl %r12d, (%r10)")
#define SUB_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X23 # subl %r12d, (%r11)")
#define SUB_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X24, 0X24 # subl %r12d, (%r12)")
#define SUB_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X65, 0X00 # subl %r12d, (%r13)")
#define SUB_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X26 # subl %r12d, (%r14)")
#define SUB_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X27 # subl %r12d, (%r15)")
#define SUB_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X20 # subl %r12d, (%eax)")
#define SUB_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X23 # subl %r12d, (%ebx)")
#define SUB_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X21 # subl %r12d, (%ecx)")
#define SUB_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X22 # subl %r12d, (%edx)")
#define SUB_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X27 # subl %r12d, (%edi)")
#define SUB_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X26 # subl %r12d, (%esi)")
#define SUB_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X65, 0X00 # subl %r12d, (%ebp)")
#define SUB_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X24, 0X24 # subl %r12d, (%esp)")

#define SUB_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X28 # subl %r13d, (%rax)")
#define SUB_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X2B # subl %r13d, (%rbx)")
#define SUB_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X29 # subl %r13d, (%rcx)")
#define SUB_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X2A # subl %r13d, (%rdx)")
#define SUB_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X2F # subl %r13d, (%rdi)")
#define SUB_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X2E # subl %r13d, (%rsi)")
#define SUB_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X6D, 0X00 # subl %r13d, (%rbp)")
#define SUB_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X2C, 0X24 # subl %r13d, (%rsp)")
#define SUB_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X28 # subl %r13d, (%r8)")
#define SUB_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X29 # subl %r13d, (%r9)")
#define SUB_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X2A # subl %r13d, (%r10)")
#define SUB_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X2B # subl %r13d, (%r11)")
#define SUB_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X2C, 0X24 # subl %r13d, (%r12)")
#define SUB_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X6D, 0X00 # subl %r13d, (%r13)")
#define SUB_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X2E # subl %r13d, (%r14)")
#define SUB_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X2F # subl %r13d, (%r15)")
#define SUB_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X28 # subl %r13d, (%eax)")
#define SUB_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X2B # subl %r13d, (%ebx)")
#define SUB_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X29 # subl %r13d, (%ecx)")
#define SUB_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X2A # subl %r13d, (%edx)")
#define SUB_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X2F # subl %r13d, (%edi)")
#define SUB_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X2E # subl %r13d, (%esi)")
#define SUB_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X6D, 0X00 # subl %r13d, (%ebp)")
#define SUB_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X2C, 0X24 # subl %r13d, (%esp)")

#define SUB_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X30 # subl %r14d, (%rax)")
#define SUB_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X33 # subl %r14d, (%rbx)")
#define SUB_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X31 # subl %r14d, (%rcx)")
#define SUB_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X32 # subl %r14d, (%rdx)")
#define SUB_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X37 # subl %r14d, (%rdi)")
#define SUB_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X36 # subl %r14d, (%rsi)")
#define SUB_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X75, 0X00 # subl %r14d, (%rbp)")
#define SUB_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X34, 0X24 # subl %r14d, (%rsp)")
#define SUB_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X30 # subl %r14d, (%r8)")
#define SUB_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X31 # subl %r14d, (%r9)")
#define SUB_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X32 # subl %r14d, (%r10)")
#define SUB_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X33 # subl %r14d, (%r11)")
#define SUB_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X34, 0X24 # subl %r14d, (%r12)")
#define SUB_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X75, 0X00 # subl %r14d, (%r13)")
#define SUB_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X36 # subl %r14d, (%r14)")
#define SUB_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X37 # subl %r14d, (%r15)")
#define SUB_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X30 # subl %r14d, (%eax)")
#define SUB_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X33 # subl %r14d, (%ebx)")
#define SUB_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X31 # subl %r14d, (%ecx)")
#define SUB_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X32 # subl %r14d, (%edx)")
#define SUB_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X37 # subl %r14d, (%edi)")
#define SUB_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X36 # subl %r14d, (%esi)")
#define SUB_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X75, 0X00 # subl %r14d, (%ebp)")
#define SUB_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X34, 0X24 # subl %r14d, (%esp)")

#define SUB_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X29, 0X38 # subl %r15d, (%rax)")
#define SUB_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X29, 0X3B # subl %r15d, (%rbx)")
#define SUB_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X29, 0X39 # subl %r15d, (%rcx)")
#define SUB_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X29, 0X3A # subl %r15d, (%rdx)")
#define SUB_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X29, 0X3F # subl %r15d, (%rdi)")
#define SUB_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X29, 0X3E # subl %r15d, (%rsi)")
#define SUB_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X29, 0X7D, 0X00 # subl %r15d, (%rbp)")
#define SUB_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X29, 0X3C, 0X24 # subl %r15d, (%rsp)")
#define SUB_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X29, 0X38 # subl %r15d, (%r8)")
#define SUB_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X29, 0X39 # subl %r15d, (%r9)")
#define SUB_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X29, 0X3A # subl %r15d, (%r10)")
#define SUB_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X29, 0X3B # subl %r15d, (%r11)")
#define SUB_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X29, 0X3C, 0X24 # subl %r15d, (%r12)")
#define SUB_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X29, 0X7D, 0X00 # subl %r15d, (%r13)")
#define SUB_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X29, 0X3E # subl %r15d, (%r14)")
#define SUB_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X29, 0X3F # subl %r15d, (%r15)")
#define SUB_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X38 # subl %r15d, (%eax)")
#define SUB_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X3B # subl %r15d, (%ebx)")
#define SUB_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X39 # subl %r15d, (%ecx)")
#define SUB_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X29, 0X3A # subl %r15d, (%edx)")
#define SUB_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X3F # subl %r15d, (%edi)")
#define SUB_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X29, 0X3E # subl %r15d, (%esi)")
#define SUB_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X7D, 0X00 # subl %r15d, (%ebp)")
#define SUB_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X29, 0X3C, 0X24 # subl %r15d, (%esp)")

#define SUB_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X80 # subl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X83 # subl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X81 # subl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X82 # subl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X87 # subl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X86 # subl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X85 # subl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X80 # subl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X81 # subl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X82 # subl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X83 # subl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X85 # subl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X86 # subl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X87 # subl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X80 # subl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X83 # subl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X81 # subl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X82 # subl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X87 # subl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X86 # subl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X85 # subl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X98 # subl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9B # subl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X99 # subl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9A # subl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9F # subl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9E # subl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9D # subl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X98 # subl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X99 # subl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9A # subl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9B # subl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9D # subl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9E # subl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X9F # subl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X98 # subl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9B # subl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X99 # subl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9A # subl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9F # subl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9E # subl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9D # subl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X88 # subl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8B # subl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X89 # subl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8A # subl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8F # subl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8E # subl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8D # subl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X88 # subl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X89 # subl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8A # subl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8B # subl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8D # subl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8E # subl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X8F # subl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X88 # subl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8B # subl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X89 # subl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8A # subl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8F # subl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8E # subl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8D # subl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X90 # subl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X93 # subl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X91 # subl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X92 # subl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X97 # subl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X96 # subl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X95 # subl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X90 # subl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X91 # subl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X92 # subl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X93 # subl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X95 # subl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X96 # subl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0X97 # subl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X90 # subl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X93 # subl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X91 # subl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X92 # subl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X97 # subl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X96 # subl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X95 # subl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB8 # subl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBB # subl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB9 # subl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBA # subl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBF # subl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBE # subl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBD # subl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB8 # subl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB9 # subl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBA # subl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBB # subl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBD # subl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBE # subl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XBF # subl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB8 # subl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBB # subl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB9 # subl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBA # subl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBF # subl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBE # subl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBD # subl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB0 # subl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB3 # subl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB1 # subl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB2 # subl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB7 # subl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB6 # subl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB5 # subl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB0 # subl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB1 # subl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB2 # subl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB3 # subl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB5 # subl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB6 # subl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XB7 # subl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB0 # subl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB3 # subl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB1 # subl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB2 # subl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB7 # subl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB6 # subl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB5 # subl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA8 # subl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAB # subl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA9 # subl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAA # subl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAF # subl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAE # subl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAD # subl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA8 # subl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA9 # subl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAA # subl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAB # subl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAD # subl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAE # subl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XAF # subl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA8 # subl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAB # subl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA9 # subl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAA # subl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAF # subl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAE # subl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAD # subl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA0 # subl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA3 # subl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA1 # subl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA2 # subl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA7 # subl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA6 # subl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA5 # subl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA0 # subl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA1 # subl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA2 # subl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA3 # subl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA5 # subl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA6 # subl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X2B, 0XA7 # subl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA0 # subl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA3 # subl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA1 # subl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA2 # subl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA7 # subl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA6 # subl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA5 # subl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X80 # subl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X83 # subl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X81 # subl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X82 # subl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X87 # subl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X86 # subl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X85 # subl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X80 # subl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X81 # subl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X82 # subl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X83 # subl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X85 # subl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X86 # subl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X87 # subl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X80 # subl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X83 # subl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X81 # subl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X82 # subl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X87 # subl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X86 # subl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X85 # subl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X84, 0X24 # subl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X88 # subl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8B # subl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X89 # subl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8A # subl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8F # subl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8E # subl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8D # subl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X88 # subl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X89 # subl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8A # subl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8B # subl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8D # subl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8E # subl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X8F # subl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X88 # subl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8B # subl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X89 # subl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8A # subl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8F # subl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8E # subl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8D # subl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X8C, 0X24 # subl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X90 # subl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X93 # subl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X91 # subl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X92 # subl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X97 # subl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X96 # subl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X95 # subl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X90 # subl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X91 # subl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X92 # subl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X93 # subl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X95 # subl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X96 # subl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X97 # subl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X90 # subl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X93 # subl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X91 # subl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X92 # subl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X97 # subl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X96 # subl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X95 # subl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X94, 0X24 # subl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X98 # subl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9B # subl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X99 # subl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9A # subl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9F # subl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9E # subl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9D # subl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X98 # subl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X99 # subl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9A # subl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9B # subl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9D # subl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9E # subl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0X9F # subl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X98 # subl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9B # subl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X99 # subl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9A # subl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9F # subl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9E # subl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9D # subl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0X9C, 0X24 # subl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA0 # subl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA3 # subl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA1 # subl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA2 # subl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA7 # subl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA6 # subl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA5 # subl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA0 # subl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA1 # subl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA2 # subl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA3 # subl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA5 # subl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA6 # subl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA7 # subl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA0 # subl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA3 # subl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA1 # subl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA2 # subl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA7 # subl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA6 # subl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA5 # subl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA4, 0X24 # subl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA8 # subl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAB # subl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XA9 # subl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAA # subl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAF # subl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAE # subl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAD # subl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA8 # subl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XA9 # subl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAA # subl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAB # subl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAD # subl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAE # subl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XAF # subl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA8 # subl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAB # subl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XA9 # subl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAA # subl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAF # subl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAE # subl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAD # subl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XAC, 0X24 # subl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB0 # subl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB3 # subl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB1 # subl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB2 # subl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB7 # subl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB6 # subl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB5 # subl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB0 # subl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB1 # subl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB2 # subl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB3 # subl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB5 # subl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB6 # subl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB7 # subl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB0 # subl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB3 # subl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB1 # subl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB2 # subl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB7 # subl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB6 # subl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB5 # subl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB4, 0X24 # subl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB8 # subl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBB # subl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XB9 # subl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBA # subl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBF # subl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBE # subl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBD # subl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB8 # subl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XB9 # subl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBA # subl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBB # subl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBD # subl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBE # subl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X2B, 0XBF # subl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB8 # subl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBB # subl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XB9 # subl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBA # subl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBF # subl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBE # subl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBD # subl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X2B, 0XBC, 0X24 # subl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X80 # subl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X83 # subl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X81 # subl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X82 # subl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X87 # subl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X86 # subl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X85 # subl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X84, 0X24 # subl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X80 # subl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X81 # subl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X82 # subl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X83 # subl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X84, 0X24 # subl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X85 # subl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X86 # subl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X87 # subl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X80 # subl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X83 # subl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X81 # subl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X82 # subl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X87 # subl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X86 # subl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X85 # subl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X84, 0X24 # subl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X98 # subl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9B # subl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X99 # subl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9A # subl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9F # subl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9E # subl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9D # subl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X9C, 0X24 # subl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X98 # subl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X99 # subl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9A # subl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9B # subl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9C, 0X24 # subl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9D # subl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9E # subl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X9F # subl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X98 # subl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9B # subl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X99 # subl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9A # subl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9F # subl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9E # subl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9D # subl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X9C, 0X24 # subl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X88 # subl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8B # subl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X89 # subl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8A # subl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8F # subl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8E # subl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8D # subl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X8C, 0X24 # subl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X88 # subl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X89 # subl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8A # subl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8B # subl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8C, 0X24 # subl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8D # subl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8E # subl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X8F # subl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X88 # subl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8B # subl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X89 # subl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8A # subl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8F # subl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8E # subl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8D # subl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X8C, 0X24 # subl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X90 # subl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X93 # subl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X91 # subl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0X92 # subl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X97 # subl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0X96 # subl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X95 # subl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0X94, 0X24 # subl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X90 # subl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X91 # subl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X92 # subl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X93 # subl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X94, 0X24 # subl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X95 # subl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X96 # subl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0X97 # subl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X90 # subl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X93 # subl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X91 # subl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X92 # subl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X97 # subl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X96 # subl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X95 # subl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0X94, 0X24 # subl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB8 # subl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBB # subl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB9 # subl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBA # subl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBF # subl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBE # subl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBD # subl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XBC, 0X24 # subl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB8 # subl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB9 # subl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBA # subl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBB # subl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBC, 0X24 # subl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBD # subl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBE # subl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XBF # subl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB8 # subl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBB # subl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB9 # subl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBA # subl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBF # subl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBE # subl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBD # subl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XBC, 0X24 # subl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB0 # subl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB3 # subl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB1 # subl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB2 # subl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB7 # subl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB6 # subl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB5 # subl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XB4, 0X24 # subl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB0 # subl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB1 # subl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB2 # subl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB3 # subl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB4, 0X24 # subl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB5 # subl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB6 # subl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XB7 # subl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB0 # subl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB3 # subl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB1 # subl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB2 # subl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB7 # subl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB6 # subl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB5 # subl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XB4, 0X24 # subl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA8 # subl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAB # subl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA9 # subl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAA # subl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAF # subl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAE # subl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAD # subl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XAC, 0X24 # subl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA8 # subl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA9 # subl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAA # subl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAB # subl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAC, 0X24 # subl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAD # subl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAE # subl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XAF # subl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA8 # subl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAB # subl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA9 # subl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAA # subl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAF # subl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAE # subl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAD # subl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XAC, 0X24 # subl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA0 # subl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA3 # subl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA1 # subl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA2 # subl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA7 # subl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA6 # subl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA5 # subl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X29, 0XA4, 0X24 # subl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA0 # subl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA1 # subl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA2 # subl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA3 # subl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA4, 0X24 # subl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA5 # subl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA6 # subl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X29, 0XA7 # subl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA0 # subl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA3 # subl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA1 # subl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA2 # subl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA7 # subl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA6 # subl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA5 # subl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X29, 0XA4, 0X24 # subl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X80 # subl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X83 # subl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X81 # subl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X82 # subl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X87 # subl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X86 # subl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X85 # subl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X84, 0X24 # subl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X80 # subl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X81 # subl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X82 # subl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X83 # subl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X84, 0X24 # subl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X85 # subl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X86 # subl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X87 # subl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X80 # subl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X83 # subl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X81 # subl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X82 # subl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X87 # subl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X86 # subl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X85 # subl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X84, 0X24 # subl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X88 # subl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8B # subl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X89 # subl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8A # subl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8F # subl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8E # subl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8D # subl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X8C, 0X24 # subl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X88 # subl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X89 # subl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8A # subl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8B # subl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8C, 0X24 # subl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8D # subl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8E # subl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X8F # subl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X88 # subl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8B # subl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X89 # subl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8A # subl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8F # subl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8E # subl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8D # subl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X8C, 0X24 # subl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X90 # subl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X93 # subl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X91 # subl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X92 # subl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X97 # subl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X96 # subl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X95 # subl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X94, 0X24 # subl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X90 # subl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X91 # subl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X92 # subl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X93 # subl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X94, 0X24 # subl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X95 # subl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X96 # subl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X97 # subl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X90 # subl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X93 # subl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X91 # subl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X92 # subl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X97 # subl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X96 # subl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X95 # subl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X94, 0X24 # subl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X98 # subl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9B # subl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X99 # subl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9A # subl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9F # subl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9E # subl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9D # subl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0X9C, 0X24 # subl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X98 # subl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X99 # subl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9A # subl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9B # subl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9C, 0X24 # subl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9D # subl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9E # subl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0X9F # subl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X98 # subl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9B # subl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X99 # subl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9A # subl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9F # subl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9E # subl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9D # subl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0X9C, 0X24 # subl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA0 # subl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA3 # subl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA1 # subl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA2 # subl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA7 # subl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA6 # subl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA5 # subl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA4, 0X24 # subl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA0 # subl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA1 # subl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA2 # subl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA3 # subl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA4, 0X24 # subl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA5 # subl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA6 # subl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA7 # subl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA0 # subl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA3 # subl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA1 # subl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA2 # subl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA7 # subl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA6 # subl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA5 # subl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA4, 0X24 # subl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA8 # subl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAB # subl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XA9 # subl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAA # subl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAF # subl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAE # subl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAD # subl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XAC, 0X24 # subl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA8 # subl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XA9 # subl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAA # subl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAB # subl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAC, 0X24 # subl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAD # subl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAE # subl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XAF # subl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA8 # subl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAB # subl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XA9 # subl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAA # subl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAF # subl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAE # subl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAD # subl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XAC, 0X24 # subl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB0 # subl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB3 # subl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB1 # subl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB2 # subl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB7 # subl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB6 # subl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB5 # subl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB4, 0X24 # subl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB0 # subl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB1 # subl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB2 # subl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB3 # subl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB4, 0X24 # subl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB5 # subl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB6 # subl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB7 # subl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB0 # subl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB3 # subl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB1 # subl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB2 # subl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB7 # subl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB6 # subl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB5 # subl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB4, 0X24 # subl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SUB_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB8 # subl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBB # subl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XB9 # subl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBA # subl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBF # subl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBE # subl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBD # subl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X29, 0XBC, 0X24 # subl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB8 # subl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XB9 # subl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBA # subl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBB # subl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBC, 0X24 # subl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBD # subl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBE # subl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X29, 0XBF # subl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB8 # subl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBB # subl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XB9 # subl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBA # subl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBF # subl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBE # subl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBD # subl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SUB_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X29, 0XBC, 0X24 # subl %r15d, " _(VALUE) "(%esp)")\
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
