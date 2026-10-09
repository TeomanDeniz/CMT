#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define SBB_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X05 # sbbl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X1D # sbbl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X0D # sbbl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X15 # sbbl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X3D # sbbl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X35 # sbbl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X2D # sbbl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X25 # sbbl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X05 # sbbl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X1D # sbbl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X0D # sbbl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X15 # sbbl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X3D # sbbl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X35 # sbbl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X2D # sbbl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X25 # sbbl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X00 # sbbl (%eax), %eax")
#define SBB_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X03 # sbbl (%ebx), %eax")
#define SBB_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X01 # sbbl (%ecx), %eax")
#define SBB_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X02 # sbbl (%edx), %eax")
#define SBB_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X07 # sbbl (%edi), %eax")
#define SBB_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X06 # sbbl (%esi), %eax")
#define SBB_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X45, 0X00 # sbbl (%ebp), %eax")
#define SBB_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X04, 0X24 # sbbl (%esp), %eax")
#define SBB_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X07 # sbbl (%bx), %eax")
#define SBB_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X46, 0X00 # sbbl (%bp), %eax")
#define SBB_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X04 # sbbl (%si), %eax")
#define SBB_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X05 # sbbl (%di), %eax")

#define SBB_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X18 # sbbl (%eax), %ebx")
#define SBB_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X1B # sbbl (%ebx), %ebx")
#define SBB_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X19 # sbbl (%ecx), %ebx")
#define SBB_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X1A # sbbl (%edx), %ebx")
#define SBB_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X1F # sbbl (%edi), %ebx")
#define SBB_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X1E # sbbl (%esi), %ebx")
#define SBB_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X5D, 0X00 # sbbl (%ebp), %ebx")
#define SBB_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X1C, 0X24 # sbbl (%esp), %ebx")
#define SBB_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X1F # sbbl (%bx), %ebx")
#define SBB_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X5E, 0X00 # sbbl (%bp), %ebx")
#define SBB_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X1C # sbbl (%si), %ebx")
#define SBB_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X1D # sbbl (%di), %ebx")

#define SBB_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X08 # sbbl (%eax), %ecx")
#define SBB_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X0B # sbbl (%ebx), %ecx")
#define SBB_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X09 # sbbl (%ecx), %ecx")
#define SBB_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X0A # sbbl (%edx), %ecx")
#define SBB_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X0F # sbbl (%edi), %ecx")
#define SBB_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X0E # sbbl (%esi), %ecx")
#define SBB_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X4D, 0X00 # sbbl (%ebp), %ecx")
#define SBB_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X0C, 0X24 # sbbl (%esp), %ecx")
#define SBB_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X0F # sbbl (%bx), %ecx")
#define SBB_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X4E, 0X00 # sbbl (%bp), %ecx")
#define SBB_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X0C # sbbl (%si), %ecx")
#define SBB_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X0D # sbbl (%di), %ecx")

#define SBB_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X10 # sbbl (%eax), %edx")
#define SBB_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X13 # sbbl (%ebx), %edx")
#define SBB_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X11 # sbbl (%ecx), %edx")
#define SBB_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X12 # sbbl (%edx), %edx")
#define SBB_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X17 # sbbl (%edi), %edx")
#define SBB_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X16 # sbbl (%esi), %edx")
#define SBB_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X55, 0X00 # sbbl (%ebp), %edx")
#define SBB_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X14, 0X24 # sbbl (%esp), %edx")
#define SBB_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X17 # sbbl (%bx), %edx")
#define SBB_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X56, 0X00 # sbbl (%bp), %edx")
#define SBB_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X14 # sbbl (%si), %edx")
#define SBB_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X15 # sbbl (%di), %edx")

#define SBB_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X38 # sbbl (%eax), %edi")
#define SBB_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X3B # sbbl (%ebx), %edi")
#define SBB_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X39 # sbbl (%ecx), %edi")
#define SBB_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X3A # sbbl (%edx), %edi")
#define SBB_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X3F # sbbl (%edi), %edi")
#define SBB_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X3E # sbbl (%esi), %edi")
#define SBB_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X7D, 0X00 # sbbl (%ebp), %edi")
#define SBB_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X3C, 0X24 # sbbl (%esp), %edi")
#define SBB_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X3F # sbbl (%bx), %edi")
#define SBB_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X7E, 0X00 # sbbl (%bp), %edi")
#define SBB_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X3C # sbbl (%si), %edi")
#define SBB_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X3D # sbbl (%di), %edi")

#define SBB_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X30 # sbbl (%eax), %esi")
#define SBB_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X33 # sbbl (%ebx), %esi")
#define SBB_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X31 # sbbl (%ecx), %esi")
#define SBB_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X32 # sbbl (%edx), %esi")
#define SBB_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X37 # sbbl (%edi), %esi")
#define SBB_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X36 # sbbl (%esi), %esi")
#define SBB_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X75, 0X00 # sbbl (%ebp), %esi")
#define SBB_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X34, 0X24 # sbbl (%esp), %esi")
#define SBB_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X37 # sbbl (%bx), %esi")
#define SBB_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X76, 0X00 # sbbl (%bp), %esi")
#define SBB_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X34 # sbbl (%si), %esi")
#define SBB_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X35 # sbbl (%di), %esi")

#define SBB_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X28 # sbbl (%eax), %ebp")
#define SBB_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X2B # sbbl (%ebx), %ebp")
#define SBB_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X29 # sbbl (%ecx), %ebp")
#define SBB_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X2A # sbbl (%edx), %ebp")
#define SBB_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X2F # sbbl (%edi), %ebp")
#define SBB_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X2E # sbbl (%esi), %ebp")
#define SBB_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X6D, 0X00 # sbbl (%ebp), %ebp")
#define SBB_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X2C, 0X24 # sbbl (%esp), %ebp")
#define SBB_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X2F # sbbl (%bx), %ebp")
#define SBB_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X6E, 0X00 # sbbl (%bp), %ebp")
#define SBB_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X2C # sbbl (%si), %ebp")
#define SBB_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X2D # sbbl (%di), %ebp")

#define SBB_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X1B, 0X20 # sbbl (%eax), %esp")
#define SBB_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X1B, 0X23 # sbbl (%ebx), %esp")
#define SBB_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X1B, 0X21 # sbbl (%ecx), %esp")
#define SBB_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X1B, 0X22 # sbbl (%edx), %esp")
#define SBB_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X1B, 0X27 # sbbl (%edi), %esp")
#define SBB_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X1B, 0X26 # sbbl (%esi), %esp")
#define SBB_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X1B, 0X65, 0X00 # sbbl (%ebp), %esp")
#define SBB_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X1B, 0X24, 0X24 # sbbl (%esp), %esp")
#define SBB_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X1B, 0X27 # sbbl (%bx), %esp")
#define SBB_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X1B, 0X66, 0X00 # sbbl (%bp), %esp")
#define SBB_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X1B, 0X24 # sbbl (%si), %esp")
#define SBB_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X1B, 0X25 # sbbl (%di), %esp")

#define SBB_EAX_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X00 # sbbl %eax, (%eax)")
#define SBB_EAX_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X03 # sbbl %eax, (%ebx)")
#define SBB_EAX_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X01 # sbbl %eax, (%ecx)")
#define SBB_EAX_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X02 # sbbl %eax, (%edx)")
#define SBB_EAX_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X07 # sbbl %eax, (%edi)")
#define SBB_EAX_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X06 # sbbl %eax, (%esi)")
#define SBB_EAX_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X45, 0X00 # sbbl %eax, (%ebp)")
#define SBB_EAX_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X04, 0X24 # sbbl %eax, (%esp)")
#define SBB_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X07 # sbbl %eax, (%bx)")
#define SBB_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X46, 0X00 # sbbl %eax, (%bp)")
#define SBB_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X04 # sbbl %eax, (%si)")
#define SBB_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X05 # sbbl %eax, (%di)")

#define SBB_EBX_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X18 # sbbl %ebx, (%eax)")
#define SBB_EBX_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X1B # sbbl %ebx, (%ebx)")
#define SBB_EBX_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X19 # sbbl %ebx, (%ecx)")
#define SBB_EBX_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X1A # sbbl %ebx, (%edx)")
#define SBB_EBX_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X1F # sbbl %ebx, (%edi)")
#define SBB_EBX_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X1E # sbbl %ebx, (%esi)")
#define SBB_EBX_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X5D, 0X00 # sbbl %ebx, (%ebp)")
#define SBB_EBX_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X1C, 0X24 # sbbl %ebx, (%esp)")
#define SBB_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X1F # sbbl %ebx, (%bx)")
#define SBB_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X5E, 0X00 # sbbl %ebx, (%bp)")
#define SBB_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X1C # sbbl %ebx, (%si)")
#define SBB_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X1D # sbbl %ebx, (%di)")

#define SBB_ECX_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X08 # sbbl %ecx, (%eax)")
#define SBB_ECX_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X0B # sbbl %ecx, (%ebx)")
#define SBB_ECX_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X09 # sbbl %ecx, (%ecx)")
#define SBB_ECX_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X0A # sbbl %ecx, (%edx)")
#define SBB_ECX_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X0F # sbbl %ecx, (%edi)")
#define SBB_ECX_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X0E # sbbl %ecx, (%esi)")
#define SBB_ECX_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X4D, 0X00 # sbbl %ecx, (%ebp)")
#define SBB_ECX_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X0C, 0X24 # sbbl %ecx, (%esp)")
#define SBB_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X0F # sbbl %ecx, (%bx)")
#define SBB_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X4E, 0X00 # sbbl %ecx, (%bp)")
#define SBB_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X0C # sbbl %ecx, (%si)")
#define SBB_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X0D # sbbl %ecx, (%di)")

#define SBB_EDX_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X10 # sbbl %edx, (%eax)")
#define SBB_EDX_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X13 # sbbl %edx, (%ebx)")
#define SBB_EDX_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X11 # sbbl %edx, (%ecx)")
#define SBB_EDX_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X12 # sbbl %edx, (%edx)")
#define SBB_EDX_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X17 # sbbl %edx, (%edi)")
#define SBB_EDX_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X16 # sbbl %edx, (%esi)")
#define SBB_EDX_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X55, 0X00 # sbbl %edx, (%ebp)")
#define SBB_EDX_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X14, 0X24 # sbbl %edx, (%esp)")
#define SBB_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X17 # sbbl %edx, (%bx)")
#define SBB_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X56, 0X00 # sbbl %edx, (%bp)")
#define SBB_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X14 # sbbl %edx, (%si)")
#define SBB_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X15 # sbbl %edx, (%di)")

#define SBB_EDI_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X38 # sbbl %edi, (%eax)")
#define SBB_EDI_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X3B # sbbl %edi, (%ebx)")
#define SBB_EDI_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X39 # sbbl %edi, (%ecx)")
#define SBB_EDI_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X3A # sbbl %edi, (%edx)")
#define SBB_EDI_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X3F # sbbl %edi, (%edi)")
#define SBB_EDI_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X3E # sbbl %edi, (%esi)")
#define SBB_EDI_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X7D, 0X00 # sbbl %edi, (%ebp)")
#define SBB_EDI_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X3C, 0X24 # sbbl %edi, (%esp)")
#define SBB_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X3F # sbbl %edi, (%bx)")
#define SBB_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X7E, 0X00 # sbbl %edi, (%bp)")
#define SBB_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X3C # sbbl %edi, (%si)")
#define SBB_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X3D # sbbl %edi, (%di)")

#define SBB_ESI_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X30 # sbbl %esi, (%eax)")
#define SBB_ESI_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X33 # sbbl %esi, (%ebx)")
#define SBB_ESI_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X31 # sbbl %esi, (%ecx)")
#define SBB_ESI_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X32 # sbbl %esi, (%edx)")
#define SBB_ESI_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X37 # sbbl %esi, (%edi)")
#define SBB_ESI_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X36 # sbbl %esi, (%esi)")
#define SBB_ESI_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X75, 0X00 # sbbl %esi, (%ebp)")
#define SBB_ESI_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X34, 0X24 # sbbl %esi, (%esp)")
#define SBB_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X37 # sbbl %esi, (%bx)")
#define SBB_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X76, 0X00 # sbbl %esi, (%bp)")
#define SBB_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X34 # sbbl %esi, (%si)")
#define SBB_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X35 # sbbl %esi, (%di)")

#define SBB_EBP_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X28 # sbbl %ebp, (%eax)")
#define SBB_EBP_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X2B # sbbl %ebp, (%ebx)")
#define SBB_EBP_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X29 # sbbl %ebp, (%ecx)")
#define SBB_EBP_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X2A # sbbl %ebp, (%edx)")
#define SBB_EBP_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X2F # sbbl %ebp, (%edi)")
#define SBB_EBP_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X2E # sbbl %ebp, (%esi)")
#define SBB_EBP_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X6D, 0X00 # sbbl %ebp, (%ebp)")
#define SBB_EBP_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X2C, 0X24 # sbbl %ebp, (%esp)")
#define SBB_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X2F # sbbl %ebp, (%bx)")
#define SBB_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X6E, 0X00 # sbbl %ebp, (%bp)")
#define SBB_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X2C # sbbl %ebp, (%si)")
#define SBB_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X2D # sbbl %ebp, (%di)")

#define SBB_ESP_TO_PTR_EAX CMT_ASM(".byte 0X19, 0X20 # sbbl %esp, (%eax)")
#define SBB_ESP_TO_PTR_EBX CMT_ASM(".byte 0X19, 0X23 # sbbl %esp, (%ebx)")
#define SBB_ESP_TO_PTR_ECX CMT_ASM(".byte 0X19, 0X21 # sbbl %esp, (%ecx)")
#define SBB_ESP_TO_PTR_EDX CMT_ASM(".byte 0X19, 0X22 # sbbl %esp, (%edx)")
#define SBB_ESP_TO_PTR_EDI CMT_ASM(".byte 0X19, 0X27 # sbbl %esp, (%edi)")
#define SBB_ESP_TO_PTR_ESI CMT_ASM(".byte 0X19, 0X26 # sbbl %esp, (%esi)")
#define SBB_ESP_TO_PTR_EBP CMT_ASM(".byte 0X19, 0X65, 0X00 # sbbl %esp, (%ebp)")
#define SBB_ESP_TO_PTR_ESP CMT_ASM(".byte 0X19, 0X24, 0X24 # sbbl %esp, (%esp)")
#define SBB_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X19, 0X27 # sbbl %esp, (%bx)")
#define SBB_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X19, 0X66, 0X00 # sbbl %esp, (%bp)")
#define SBB_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X19, 0X24 # sbbl %esp, (%si)")
#define SBB_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X19, 0X25 # sbbl %esp, (%di)")

#define SBB_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X80 # sbbl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X83 # sbbl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X81 # sbbl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X82 # sbbl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X87 # sbbl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X86 # sbbl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X85 # sbbl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X87 # sbbl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X86 # sbbl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X84 # sbbl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X85 # sbbl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X98 # sbbl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9B # sbbl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X99 # sbbl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9A # sbbl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9F # sbbl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9E # sbbl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9D # sbbl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9F # sbbl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9E # sbbl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9C # sbbl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9D # sbbl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X88 # sbbl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8B # sbbl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X89 # sbbl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8A # sbbl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8F # sbbl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8E # sbbl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8D # sbbl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8F # sbbl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8E # sbbl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8C # sbbl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8D # sbbl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X90 # sbbl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X93 # sbbl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X91 # sbbl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X92 # sbbl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X97 # sbbl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X96 # sbbl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X95 # sbbl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X97 # sbbl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X96 # sbbl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X94 # sbbl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X95 # sbbl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB8 # sbbl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBB # sbbl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB9 # sbbl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBA # sbbl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBF # sbbl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBE # sbbl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBD # sbbl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBF # sbbl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBE # sbbl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBC # sbbl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBD # sbbl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB0 # sbbl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB3 # sbbl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB1 # sbbl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB2 # sbbl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB7 # sbbl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB6 # sbbl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB5 # sbbl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB7 # sbbl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB6 # sbbl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB4 # sbbl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB5 # sbbl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA8 # sbbl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAB # sbbl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA9 # sbbl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAA # sbbl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAF # sbbl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAE # sbbl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAD # sbbl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAF # sbbl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAE # sbbl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAC # sbbl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAD # sbbl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA0 # sbbl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA3 # sbbl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA1 # sbbl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA2 # sbbl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA7 # sbbl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA6 # sbbl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA5 # sbbl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA7 # sbbl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA6 # sbbl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA4 # sbbl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA5 # sbbl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X80 # sbbl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X83 # sbbl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X81 # sbbl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X82 # sbbl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X87 # sbbl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X86 # sbbl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X85 # sbbl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X84, 0X24 # sbbl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X87 # sbbl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X86 # sbbl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X84 # sbbl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X85 # sbbl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X98 # sbbl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9B # sbbl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X99 # sbbl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9A # sbbl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9F # sbbl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9E # sbbl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9D # sbbl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9C, 0X24 # sbbl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9F # sbbl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9E # sbbl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9C # sbbl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9D # sbbl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X88 # sbbl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8B # sbbl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X89 # sbbl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8A # sbbl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8F # sbbl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8E # sbbl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8D # sbbl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8C, 0X24 # sbbl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8F # sbbl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8E # sbbl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8C # sbbl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8D # sbbl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X90 # sbbl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X93 # sbbl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X91 # sbbl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X92 # sbbl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X97 # sbbl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X96 # sbbl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X95 # sbbl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X94, 0X24 # sbbl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X97 # sbbl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X96 # sbbl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X94 # sbbl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X95 # sbbl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB8 # sbbl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBB # sbbl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB9 # sbbl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBA # sbbl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBF # sbbl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBE # sbbl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBD # sbbl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBC, 0X24 # sbbl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBF # sbbl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBE # sbbl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBC # sbbl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBD # sbbl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB0 # sbbl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB3 # sbbl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB1 # sbbl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB2 # sbbl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB7 # sbbl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB6 # sbbl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB5 # sbbl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB4, 0X24 # sbbl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB7 # sbbl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB6 # sbbl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB4 # sbbl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB5 # sbbl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA8 # sbbl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAB # sbbl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA9 # sbbl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAA # sbbl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAF # sbbl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAE # sbbl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAD # sbbl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAC, 0X24 # sbbl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAF # sbbl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAE # sbbl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAC # sbbl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAD # sbbl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define SBB_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA0 # sbbl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA3 # sbbl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA1 # sbbl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA2 # sbbl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA7 # sbbl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA6 # sbbl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA5 # sbbl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA4, 0X24 # sbbl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA7 # sbbl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA6 # sbbl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA4 # sbbl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define SBB_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA5 # sbbl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X04, 0X25 # sbbl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X1C, 0X25 # sbbl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X0C, 0X25 # sbbl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X14, 0X25 # sbbl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X3C, 0X25 # sbbl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X34, 0X25 # sbbl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X2C, 0X25 # sbbl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X24, 0X25 # sbbl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X04, 0X25 # sbbl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X0C, 0X25 # sbbl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X14, 0X25 # sbbl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X1C, 0X25 # sbbl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X24, 0X25 # sbbl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X2C, 0X25 # sbbl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X34, 0X25 # sbbl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X3C, 0X25 # sbbl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X04, 0X25 # sbbl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X1C, 0X25 # sbbl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X0C, 0X25 # sbbl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X14, 0X25 # sbbl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X3C, 0X25 # sbbl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X34, 0X25 # sbbl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X2C, 0X25 # sbbl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X19, 0X24, 0X25 # sbbl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X04, 0X25 # sbbl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X0C, 0X25 # sbbl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X14, 0X25 # sbbl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X1C, 0X25 # sbbl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X24, 0X25 # sbbl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X2C, 0X25 # sbbl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X34, 0X25 # sbbl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X3C, 0X25 # sbbl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X00 # sbbl (%rax), %eax")
#define SBB_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X03 # sbbl (%rbx), %eax")
#define SBB_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X01 # sbbl (%rcx), %eax")
#define SBB_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X02 # sbbl (%rdx), %eax")
#define SBB_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X07 # sbbl (%rdi), %eax")
#define SBB_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X06 # sbbl (%rsi), %eax")
#define SBB_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X45, 0X00 # sbbl (%rbp), %eax")
#define SBB_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X04, 0X24 # sbbl (%rsp), %eax")
#define SBB_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X00 # sbbl (%r8), %eax")
#define SBB_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X01 # sbbl (%r9), %eax")
#define SBB_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X02 # sbbl (%r10), %eax")
#define SBB_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X03 # sbbl (%r11), %eax")
#define SBB_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X04, 0X24 # sbbl (%r12), %eax")
#define SBB_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X45, 0X00 # sbbl (%r13), %eax")
#define SBB_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X06 # sbbl (%r14), %eax")
#define SBB_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X07 # sbbl (%r15), %eax")
#define SBB_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X00 # sbbl (%eax), %eax")
#define SBB_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X03 # sbbl (%ebx), %eax")
#define SBB_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X01 # sbbl (%ecx), %eax")
#define SBB_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X02 # sbbl (%edx), %eax")
#define SBB_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X07 # sbbl (%edi), %eax")
#define SBB_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X06 # sbbl (%esi), %eax")
#define SBB_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X45, 0X00 # sbbl (%ebp), %eax")
#define SBB_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X04, 0X24 # sbbl (%esp), %eax")

#define SBB_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X18 # sbbl (%rax), %ebx")
#define SBB_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X1B # sbbl (%rbx), %ebx")
#define SBB_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X19 # sbbl (%rcx), %ebx")
#define SBB_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X1A # sbbl (%rdx), %ebx")
#define SBB_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X1F # sbbl (%rdi), %ebx")
#define SBB_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X1E # sbbl (%rsi), %ebx")
#define SBB_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X5D, 0X00 # sbbl (%rbp), %ebx")
#define SBB_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X1C, 0X24 # sbbl (%rsp), %ebx")
#define SBB_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X18 # sbbl (%r8), %ebx")
#define SBB_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X19 # sbbl (%r9), %ebx")
#define SBB_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X1A # sbbl (%r10), %ebx")
#define SBB_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X1B # sbbl (%r11), %ebx")
#define SBB_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X1C, 0X24 # sbbl (%r12), %ebx")
#define SBB_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X5D, 0X00 # sbbl (%r13), %ebx")
#define SBB_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X1E # sbbl (%r14), %ebx")
#define SBB_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X1F # sbbl (%r15), %ebx")
#define SBB_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X18 # sbbl (%eax), %ebx")
#define SBB_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X1B # sbbl (%ebx), %ebx")
#define SBB_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X19 # sbbl (%ecx), %ebx")
#define SBB_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X1A # sbbl (%edx), %ebx")
#define SBB_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X1F # sbbl (%edi), %ebx")
#define SBB_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X1E # sbbl (%esi), %ebx")
#define SBB_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X5D, 0X00 # sbbl (%ebp), %ebx")
#define SBB_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X1C, 0X24 # sbbl (%esp), %ebx")

#define SBB_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X08 # sbbl (%rax), %ecx")
#define SBB_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X0B # sbbl (%rbx), %ecx")
#define SBB_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X09 # sbbl (%rcx), %ecx")
#define SBB_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X0A # sbbl (%rdx), %ecx")
#define SBB_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X0F # sbbl (%rdi), %ecx")
#define SBB_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X0E # sbbl (%rsi), %ecx")
#define SBB_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X4D, 0X00 # sbbl (%rbp), %ecx")
#define SBB_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X0C, 0X24 # sbbl (%rsp), %ecx")
#define SBB_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X08 # sbbl (%r8), %ecx")
#define SBB_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X09 # sbbl (%r9), %ecx")
#define SBB_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X0A # sbbl (%r10), %ecx")
#define SBB_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X0B # sbbl (%r11), %ecx")
#define SBB_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X0C, 0X24 # sbbl (%r12), %ecx")
#define SBB_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X4D, 0X00 # sbbl (%r13), %ecx")
#define SBB_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X0E # sbbl (%r14), %ecx")
#define SBB_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X0F # sbbl (%r15), %ecx")
#define SBB_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X08 # sbbl (%eax), %ecx")
#define SBB_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X0B # sbbl (%ebx), %ecx")
#define SBB_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X09 # sbbl (%ecx), %ecx")
#define SBB_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X0A # sbbl (%edx), %ecx")
#define SBB_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X0F # sbbl (%edi), %ecx")
#define SBB_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X0E # sbbl (%esi), %ecx")
#define SBB_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X4D, 0X00 # sbbl (%ebp), %ecx")
#define SBB_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X0C, 0X24 # sbbl (%esp), %ecx")

#define SBB_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X10 # sbbl (%rax), %edx")
#define SBB_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X13 # sbbl (%rbx), %edx")
#define SBB_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X11 # sbbl (%rcx), %edx")
#define SBB_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X12 # sbbl (%rdx), %edx")
#define SBB_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X17 # sbbl (%rdi), %edx")
#define SBB_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X16 # sbbl (%rsi), %edx")
#define SBB_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X55, 0X00 # sbbl (%rbp), %edx")
#define SBB_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X14, 0X24 # sbbl (%rsp), %edx")
#define SBB_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X10 # sbbl (%r8), %edx")
#define SBB_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X11 # sbbl (%r9), %edx")
#define SBB_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X12 # sbbl (%r10), %edx")
#define SBB_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X13 # sbbl (%r11), %edx")
#define SBB_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X14, 0X24 # sbbl (%r12), %edx")
#define SBB_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X55, 0X00 # sbbl (%r13), %edx")
#define SBB_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X16 # sbbl (%r14), %edx")
#define SBB_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X17 # sbbl (%r15), %edx")
#define SBB_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X10 # sbbl (%eax), %edx")
#define SBB_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X13 # sbbl (%ebx), %edx")
#define SBB_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X11 # sbbl (%ecx), %edx")
#define SBB_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X12 # sbbl (%edx), %edx")
#define SBB_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X17 # sbbl (%edi), %edx")
#define SBB_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X16 # sbbl (%esi), %edx")
#define SBB_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X55, 0X00 # sbbl (%ebp), %edx")
#define SBB_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X14, 0X24 # sbbl (%esp), %edx")

#define SBB_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X38 # sbbl (%rax), %edi")
#define SBB_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X3B # sbbl (%rbx), %edi")
#define SBB_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X39 # sbbl (%rcx), %edi")
#define SBB_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X3A # sbbl (%rdx), %edi")
#define SBB_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X3F # sbbl (%rdi), %edi")
#define SBB_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X3E # sbbl (%rsi), %edi")
#define SBB_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X7D, 0X00 # sbbl (%rbp), %edi")
#define SBB_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X3C, 0X24 # sbbl (%rsp), %edi")
#define SBB_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X38 # sbbl (%r8), %edi")
#define SBB_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X39 # sbbl (%r9), %edi")
#define SBB_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X3A # sbbl (%r10), %edi")
#define SBB_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X3B # sbbl (%r11), %edi")
#define SBB_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X3C, 0X24 # sbbl (%r12), %edi")
#define SBB_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X7D, 0X00 # sbbl (%r13), %edi")
#define SBB_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X3E # sbbl (%r14), %edi")
#define SBB_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X3F # sbbl (%r15), %edi")
#define SBB_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X38 # sbbl (%eax), %edi")
#define SBB_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X3B # sbbl (%ebx), %edi")
#define SBB_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X39 # sbbl (%ecx), %edi")
#define SBB_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X3A # sbbl (%edx), %edi")
#define SBB_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X3F # sbbl (%edi), %edi")
#define SBB_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X3E # sbbl (%esi), %edi")
#define SBB_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X7D, 0X00 # sbbl (%ebp), %edi")
#define SBB_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X3C, 0X24 # sbbl (%esp), %edi")

#define SBB_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X30 # sbbl (%rax), %esi")
#define SBB_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X33 # sbbl (%rbx), %esi")
#define SBB_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X31 # sbbl (%rcx), %esi")
#define SBB_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X32 # sbbl (%rdx), %esi")
#define SBB_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X37 # sbbl (%rdi), %esi")
#define SBB_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X36 # sbbl (%rsi), %esi")
#define SBB_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X75, 0X00 # sbbl (%rbp), %esi")
#define SBB_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X34, 0X24 # sbbl (%rsp), %esi")
#define SBB_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X30 # sbbl (%r8), %esi")
#define SBB_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X31 # sbbl (%r9), %esi")
#define SBB_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X32 # sbbl (%r10), %esi")
#define SBB_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X33 # sbbl (%r11), %esi")
#define SBB_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X34, 0X24 # sbbl (%r12), %esi")
#define SBB_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X75, 0X00 # sbbl (%r13), %esi")
#define SBB_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X36 # sbbl (%r14), %esi")
#define SBB_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X37 # sbbl (%r15), %esi")
#define SBB_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X30 # sbbl (%eax), %esi")
#define SBB_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X33 # sbbl (%ebx), %esi")
#define SBB_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X31 # sbbl (%ecx), %esi")
#define SBB_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X32 # sbbl (%edx), %esi")
#define SBB_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X37 # sbbl (%edi), %esi")
#define SBB_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X36 # sbbl (%esi), %esi")
#define SBB_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X75, 0X00 # sbbl (%ebp), %esi")
#define SBB_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X34, 0X24 # sbbl (%esp), %esi")

#define SBB_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X28 # sbbl (%rax), %ebp")
#define SBB_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X2B # sbbl (%rbx), %ebp")
#define SBB_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X29 # sbbl (%rcx), %ebp")
#define SBB_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X2A # sbbl (%rdx), %ebp")
#define SBB_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X2F # sbbl (%rdi), %ebp")
#define SBB_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X2E # sbbl (%rsi), %ebp")
#define SBB_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X6D, 0X00 # sbbl (%rbp), %ebp")
#define SBB_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X2C, 0X24 # sbbl (%rsp), %ebp")
#define SBB_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X28 # sbbl (%r8), %ebp")
#define SBB_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X29 # sbbl (%r9), %ebp")
#define SBB_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X2A # sbbl (%r10), %ebp")
#define SBB_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X2B # sbbl (%r11), %ebp")
#define SBB_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X2C, 0X24 # sbbl (%r12), %ebp")
#define SBB_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X6D, 0X00 # sbbl (%r13), %ebp")
#define SBB_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X2E # sbbl (%r14), %ebp")
#define SBB_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X2F # sbbl (%r15), %ebp")
#define SBB_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X28 # sbbl (%eax), %ebp")
#define SBB_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X2B # sbbl (%ebx), %ebp")
#define SBB_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X29 # sbbl (%ecx), %ebp")
#define SBB_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X2A # sbbl (%edx), %ebp")
#define SBB_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X2F # sbbl (%edi), %ebp")
#define SBB_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X2E # sbbl (%esi), %ebp")
#define SBB_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X6D, 0X00 # sbbl (%ebp), %ebp")
#define SBB_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X2C, 0X24 # sbbl (%esp), %ebp")

#define SBB_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X1B, 0X20 # sbbl (%rax), %esp")
#define SBB_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X1B, 0X23 # sbbl (%rbx), %esp")
#define SBB_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X1B, 0X21 # sbbl (%rcx), %esp")
#define SBB_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X1B, 0X22 # sbbl (%rdx), %esp")
#define SBB_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X1B, 0X27 # sbbl (%rdi), %esp")
#define SBB_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X1B, 0X26 # sbbl (%rsi), %esp")
#define SBB_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X1B, 0X65, 0X00 # sbbl (%rbp), %esp")
#define SBB_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X1B, 0X24, 0X24 # sbbl (%rsp), %esp")
#define SBB_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X1B, 0X20 # sbbl (%r8), %esp")
#define SBB_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X1B, 0X21 # sbbl (%r9), %esp")
#define SBB_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X1B, 0X22 # sbbl (%r10), %esp")
#define SBB_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X1B, 0X23 # sbbl (%r11), %esp")
#define SBB_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X1B, 0X24, 0X24 # sbbl (%r12), %esp")
#define SBB_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X1B, 0X65, 0X00 # sbbl (%r13), %esp")
#define SBB_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X1B, 0X26 # sbbl (%r14), %esp")
#define SBB_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X1B, 0X27 # sbbl (%r15), %esp")
#define SBB_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X1B, 0X20 # sbbl (%eax), %esp")
#define SBB_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X1B, 0X23 # sbbl (%ebx), %esp")
#define SBB_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X1B, 0X21 # sbbl (%ecx), %esp")
#define SBB_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X1B, 0X22 # sbbl (%edx), %esp")
#define SBB_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X1B, 0X27 # sbbl (%edi), %esp")
#define SBB_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X1B, 0X26 # sbbl (%esi), %esp")
#define SBB_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X1B, 0X65, 0X00 # sbbl (%ebp), %esp")
#define SBB_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X1B, 0X24, 0X24 # sbbl (%esp), %esp")

#define SBB_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X00 # sbbl (%rax), %r8d")
#define SBB_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X03 # sbbl (%rbx), %r8d")
#define SBB_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X01 # sbbl (%rcx), %r8d")
#define SBB_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X02 # sbbl (%rdx), %r8d")
#define SBB_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X07 # sbbl (%rdi), %r8d")
#define SBB_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X06 # sbbl (%rsi), %r8d")
#define SBB_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X45, 0X00 # sbbl (%rbp), %r8d")
#define SBB_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X04, 0X24 # sbbl (%rsp), %r8d")
#define SBB_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X00 # sbbl (%r8), %r8d")
#define SBB_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X01 # sbbl (%r9), %r8d")
#define SBB_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X02 # sbbl (%r10), %r8d")
#define SBB_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X03 # sbbl (%r11), %r8d")
#define SBB_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X04, 0X24 # sbbl (%r12), %r8d")
#define SBB_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X45, 0X00 # sbbl (%r13), %r8d")
#define SBB_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X06 # sbbl (%r14), %r8d")
#define SBB_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X07 # sbbl (%r15), %r8d")
#define SBB_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X00 # sbbl (%eax), %r8d")
#define SBB_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X03 # sbbl (%ebx), %r8d")
#define SBB_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X01 # sbbl (%ecx), %r8d")
#define SBB_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X02 # sbbl (%edx), %r8d")
#define SBB_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X07 # sbbl (%edi), %r8d")
#define SBB_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X06 # sbbl (%esi), %r8d")
#define SBB_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X45, 0X00 # sbbl (%ebp), %r8d")
#define SBB_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X04, 0X24 # sbbl (%esp), %r8d")

#define SBB_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X08 # sbbl (%rax), %r9d")
#define SBB_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X0B # sbbl (%rbx), %r9d")
#define SBB_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X09 # sbbl (%rcx), %r9d")
#define SBB_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X0A # sbbl (%rdx), %r9d")
#define SBB_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X0F # sbbl (%rdi), %r9d")
#define SBB_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X0E # sbbl (%rsi), %r9d")
#define SBB_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X4D, 0X00 # sbbl (%rbp), %r9d")
#define SBB_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X0C, 0X24 # sbbl (%rsp), %r9d")
#define SBB_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X08 # sbbl (%r8), %r9d")
#define SBB_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X09 # sbbl (%r9), %r9d")
#define SBB_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X0A # sbbl (%r10), %r9d")
#define SBB_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X0B # sbbl (%r11), %r9d")
#define SBB_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X0C, 0X24 # sbbl (%r12), %r9d")
#define SBB_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X4D, 0X00 # sbbl (%r13), %r9d")
#define SBB_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X0E # sbbl (%r14), %r9d")
#define SBB_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X0F # sbbl (%r15), %r9d")
#define SBB_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X08 # sbbl (%eax), %r9d")
#define SBB_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X0B # sbbl (%ebx), %r9d")
#define SBB_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X09 # sbbl (%ecx), %r9d")
#define SBB_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X0A # sbbl (%edx), %r9d")
#define SBB_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X0F # sbbl (%edi), %r9d")
#define SBB_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X0E # sbbl (%esi), %r9d")
#define SBB_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X4D, 0X00 # sbbl (%ebp), %r9d")
#define SBB_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X0C, 0X24 # sbbl (%esp), %r9d")

#define SBB_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X10 # sbbl (%rax), %r10d")
#define SBB_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X13 # sbbl (%rbx), %r10d")
#define SBB_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X11 # sbbl (%rcx), %r10d")
#define SBB_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X12 # sbbl (%rdx), %r10d")
#define SBB_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X17 # sbbl (%rdi), %r10d")
#define SBB_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X16 # sbbl (%rsi), %r10d")
#define SBB_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X55, 0X00 # sbbl (%rbp), %r10d")
#define SBB_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X14, 0X24 # sbbl (%rsp), %r10d")
#define SBB_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X10 # sbbl (%r8), %r10d")
#define SBB_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X11 # sbbl (%r9), %r10d")
#define SBB_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X12 # sbbl (%r10), %r10d")
#define SBB_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X13 # sbbl (%r11), %r10d")
#define SBB_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X14, 0X24 # sbbl (%r12), %r10d")
#define SBB_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X55, 0X00 # sbbl (%r13), %r10d")
#define SBB_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X16 # sbbl (%r14), %r10d")
#define SBB_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X17 # sbbl (%r15), %r10d")
#define SBB_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X10 # sbbl (%eax), %r10d")
#define SBB_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X13 # sbbl (%ebx), %r10d")
#define SBB_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X11 # sbbl (%ecx), %r10d")
#define SBB_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X12 # sbbl (%edx), %r10d")
#define SBB_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X17 # sbbl (%edi), %r10d")
#define SBB_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X16 # sbbl (%esi), %r10d")
#define SBB_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X55, 0X00 # sbbl (%ebp), %r10d")
#define SBB_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X14, 0X24 # sbbl (%esp), %r10d")

#define SBB_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X18 # sbbl (%rax), %r11d")
#define SBB_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X1B # sbbl (%rbx), %r11d")
#define SBB_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X19 # sbbl (%rcx), %r11d")
#define SBB_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X1A # sbbl (%rdx), %r11d")
#define SBB_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X1F # sbbl (%rdi), %r11d")
#define SBB_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X1E # sbbl (%rsi), %r11d")
#define SBB_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X5D, 0X00 # sbbl (%rbp), %r11d")
#define SBB_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X1C, 0X24 # sbbl (%rsp), %r11d")
#define SBB_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X18 # sbbl (%r8), %r11d")
#define SBB_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X19 # sbbl (%r9), %r11d")
#define SBB_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X1A # sbbl (%r10), %r11d")
#define SBB_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X1B # sbbl (%r11), %r11d")
#define SBB_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X1C, 0X24 # sbbl (%r12), %r11d")
#define SBB_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X5D, 0X00 # sbbl (%r13), %r11d")
#define SBB_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X1E # sbbl (%r14), %r11d")
#define SBB_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X1F # sbbl (%r15), %r11d")
#define SBB_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X18 # sbbl (%eax), %r11d")
#define SBB_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X1B # sbbl (%ebx), %r11d")
#define SBB_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X19 # sbbl (%ecx), %r11d")
#define SBB_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X1A # sbbl (%edx), %r11d")
#define SBB_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X1F # sbbl (%edi), %r11d")
#define SBB_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X1E # sbbl (%esi), %r11d")
#define SBB_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X5D, 0X00 # sbbl (%ebp), %r11d")
#define SBB_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X1C, 0X24 # sbbl (%esp), %r11d")

#define SBB_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X20 # sbbl (%rax), %r12d")
#define SBB_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X23 # sbbl (%rbx), %r12d")
#define SBB_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X21 # sbbl (%rcx), %r12d")
#define SBB_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X22 # sbbl (%rdx), %r12d")
#define SBB_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X27 # sbbl (%rdi), %r12d")
#define SBB_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X26 # sbbl (%rsi), %r12d")
#define SBB_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X65, 0X00 # sbbl (%rbp), %r12d")
#define SBB_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X24, 0X24 # sbbl (%rsp), %r12d")
#define SBB_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X20 # sbbl (%r8), %r12d")
#define SBB_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X21 # sbbl (%r9), %r12d")
#define SBB_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X22 # sbbl (%r10), %r12d")
#define SBB_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X23 # sbbl (%r11), %r12d")
#define SBB_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X24, 0X24 # sbbl (%r12), %r12d")
#define SBB_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X65, 0X00 # sbbl (%r13), %r12d")
#define SBB_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X26 # sbbl (%r14), %r12d")
#define SBB_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X27 # sbbl (%r15), %r12d")
#define SBB_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X20 # sbbl (%eax), %r12d")
#define SBB_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X23 # sbbl (%ebx), %r12d")
#define SBB_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X21 # sbbl (%ecx), %r12d")
#define SBB_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X22 # sbbl (%edx), %r12d")
#define SBB_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X27 # sbbl (%edi), %r12d")
#define SBB_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X26 # sbbl (%esi), %r12d")
#define SBB_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X65, 0X00 # sbbl (%ebp), %r12d")
#define SBB_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X24, 0X24 # sbbl (%esp), %r12d")

#define SBB_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X28 # sbbl (%rax), %r13d")
#define SBB_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X2B # sbbl (%rbx), %r13d")
#define SBB_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X29 # sbbl (%rcx), %r13d")
#define SBB_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X2A # sbbl (%rdx), %r13d")
#define SBB_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X2F # sbbl (%rdi), %r13d")
#define SBB_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X2E # sbbl (%rsi), %r13d")
#define SBB_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X6D, 0X00 # sbbl (%rbp), %r13d")
#define SBB_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X2C, 0X24 # sbbl (%rsp), %r13d")
#define SBB_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X28 # sbbl (%r8), %r13d")
#define SBB_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X29 # sbbl (%r9), %r13d")
#define SBB_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X2A # sbbl (%r10), %r13d")
#define SBB_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X2B # sbbl (%r11), %r13d")
#define SBB_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X2C, 0X24 # sbbl (%r12), %r13d")
#define SBB_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X6D, 0X00 # sbbl (%r13), %r13d")
#define SBB_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X2E # sbbl (%r14), %r13d")
#define SBB_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X2F # sbbl (%r15), %r13d")
#define SBB_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X28 # sbbl (%eax), %r13d")
#define SBB_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X2B # sbbl (%ebx), %r13d")
#define SBB_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X29 # sbbl (%ecx), %r13d")
#define SBB_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X2A # sbbl (%edx), %r13d")
#define SBB_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X2F # sbbl (%edi), %r13d")
#define SBB_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X2E # sbbl (%esi), %r13d")
#define SBB_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X6D, 0X00 # sbbl (%ebp), %r13d")
#define SBB_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X2C, 0X24 # sbbl (%esp), %r13d")

#define SBB_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X30 # sbbl (%rax), %r14d")
#define SBB_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X33 # sbbl (%rbx), %r14d")
#define SBB_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X31 # sbbl (%rcx), %r14d")
#define SBB_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X32 # sbbl (%rdx), %r14d")
#define SBB_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X37 # sbbl (%rdi), %r14d")
#define SBB_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X36 # sbbl (%rsi), %r14d")
#define SBB_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X75, 0X00 # sbbl (%rbp), %r14d")
#define SBB_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X34, 0X24 # sbbl (%rsp), %r14d")
#define SBB_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X30 # sbbl (%r8), %r14d")
#define SBB_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X31 # sbbl (%r9), %r14d")
#define SBB_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X32 # sbbl (%r10), %r14d")
#define SBB_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X33 # sbbl (%r11), %r14d")
#define SBB_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X34, 0X24 # sbbl (%r12), %r14d")
#define SBB_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X75, 0X00 # sbbl (%r13), %r14d")
#define SBB_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X36 # sbbl (%r14), %r14d")
#define SBB_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X37 # sbbl (%r15), %r14d")
#define SBB_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X30 # sbbl (%eax), %r14d")
#define SBB_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X33 # sbbl (%ebx), %r14d")
#define SBB_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X31 # sbbl (%ecx), %r14d")
#define SBB_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X32 # sbbl (%edx), %r14d")
#define SBB_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X37 # sbbl (%edi), %r14d")
#define SBB_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X36 # sbbl (%esi), %r14d")
#define SBB_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X75, 0X00 # sbbl (%ebp), %r14d")
#define SBB_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X34, 0X24 # sbbl (%esp), %r14d")

#define SBB_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X1B, 0X38 # sbbl (%rax), %r15d")
#define SBB_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X1B, 0X3B # sbbl (%rbx), %r15d")
#define SBB_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X1B, 0X39 # sbbl (%rcx), %r15d")
#define SBB_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X1B, 0X3A # sbbl (%rdx), %r15d")
#define SBB_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X1B, 0X3F # sbbl (%rdi), %r15d")
#define SBB_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X1B, 0X3E # sbbl (%rsi), %r15d")
#define SBB_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X1B, 0X7D, 0X00 # sbbl (%rbp), %r15d")
#define SBB_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X1B, 0X3C, 0X24 # sbbl (%rsp), %r15d")
#define SBB_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X1B, 0X38 # sbbl (%r8), %r15d")
#define SBB_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X1B, 0X39 # sbbl (%r9), %r15d")
#define SBB_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X1B, 0X3A # sbbl (%r10), %r15d")
#define SBB_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X1B, 0X3B # sbbl (%r11), %r15d")
#define SBB_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X1B, 0X3C, 0X24 # sbbl (%r12), %r15d")
#define SBB_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X1B, 0X7D, 0X00 # sbbl (%r13), %r15d")
#define SBB_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X1B, 0X3E # sbbl (%r14), %r15d")
#define SBB_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X1B, 0X3F # sbbl (%r15), %r15d")
#define SBB_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X38 # sbbl (%eax), %r15d")
#define SBB_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X3B # sbbl (%ebx), %r15d")
#define SBB_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X39 # sbbl (%ecx), %r15d")
#define SBB_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X3A # sbbl (%edx), %r15d")
#define SBB_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X3F # sbbl (%edi), %r15d")
#define SBB_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X3E # sbbl (%esi), %r15d")
#define SBB_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X7D, 0X00 # sbbl (%ebp), %r15d")
#define SBB_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X3C, 0X24 # sbbl (%esp), %r15d")

#define SBB_EAX_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X00 # sbbl %eax, (%rax)")
#define SBB_EAX_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X03 # sbbl %eax, (%rbx)")
#define SBB_EAX_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X01 # sbbl %eax, (%rcx)")
#define SBB_EAX_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X02 # sbbl %eax, (%rdx)")
#define SBB_EAX_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X07 # sbbl %eax, (%rdi)")
#define SBB_EAX_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X06 # sbbl %eax, (%rsi)")
#define SBB_EAX_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X45, 0X00 # sbbl %eax, (%rbp)")
#define SBB_EAX_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X04, 0X24 # sbbl %eax, (%rsp)")
#define SBB_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X00 # sbbl %eax, (%r8)")
#define SBB_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X01 # sbbl %eax, (%r9)")
#define SBB_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X02 # sbbl %eax, (%r10)")
#define SBB_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X03 # sbbl %eax, (%r11)")
#define SBB_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X04, 0X24 # sbbl %eax, (%r12)")
#define SBB_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X45, 0X00 # sbbl %eax, (%r13)")
#define SBB_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X06 # sbbl %eax, (%r14)")
#define SBB_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X07 # sbbl %eax, (%r15)")
#define SBB_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X00 # sbbl %eax, (%eax)")
#define SBB_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X03 # sbbl %eax, (%ebx)")
#define SBB_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X01 # sbbl %eax, (%ecx)")
#define SBB_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X02 # sbbl %eax, (%edx)")
#define SBB_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X07 # sbbl %eax, (%edi)")
#define SBB_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X06 # sbbl %eax, (%esi)")
#define SBB_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X45, 0X00 # sbbl %eax, (%ebp)")
#define SBB_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X04, 0X24 # sbbl %eax, (%esp)")

#define SBB_EBX_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X18 # sbbl %ebx, (%rax)")
#define SBB_EBX_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X1B # sbbl %ebx, (%rbx)")
#define SBB_EBX_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X19 # sbbl %ebx, (%rcx)")
#define SBB_EBX_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X1A # sbbl %ebx, (%rdx)")
#define SBB_EBX_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X1F # sbbl %ebx, (%rdi)")
#define SBB_EBX_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X1E # sbbl %ebx, (%rsi)")
#define SBB_EBX_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X5D, 0X00 # sbbl %ebx, (%rbp)")
#define SBB_EBX_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X1C, 0X24 # sbbl %ebx, (%rsp)")
#define SBB_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X18 # sbbl %ebx, (%r8)")
#define SBB_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X19 # sbbl %ebx, (%r9)")
#define SBB_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X1A # sbbl %ebx, (%r10)")
#define SBB_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X1B # sbbl %ebx, (%r11)")
#define SBB_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X1C, 0X24 # sbbl %ebx, (%r12)")
#define SBB_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X5D, 0X00 # sbbl %ebx, (%r13)")
#define SBB_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X1E # sbbl %ebx, (%r14)")
#define SBB_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X1F # sbbl %ebx, (%r15)")
#define SBB_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X18 # sbbl %ebx, (%eax)")
#define SBB_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X1B # sbbl %ebx, (%ebx)")
#define SBB_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X19 # sbbl %ebx, (%ecx)")
#define SBB_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X1A # sbbl %ebx, (%edx)")
#define SBB_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X1F # sbbl %ebx, (%edi)")
#define SBB_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X1E # sbbl %ebx, (%esi)")
#define SBB_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X5D, 0X00 # sbbl %ebx, (%ebp)")
#define SBB_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X1C, 0X24 # sbbl %ebx, (%esp)")

#define SBB_ECX_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X08 # sbbl %ecx, (%rax)")
#define SBB_ECX_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X0B # sbbl %ecx, (%rbx)")
#define SBB_ECX_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X09 # sbbl %ecx, (%rcx)")
#define SBB_ECX_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X0A # sbbl %ecx, (%rdx)")
#define SBB_ECX_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X0F # sbbl %ecx, (%rdi)")
#define SBB_ECX_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X0E # sbbl %ecx, (%rsi)")
#define SBB_ECX_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X4D, 0X00 # sbbl %ecx, (%rbp)")
#define SBB_ECX_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X0C, 0X24 # sbbl %ecx, (%rsp)")
#define SBB_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X08 # sbbl %ecx, (%r8)")
#define SBB_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X09 # sbbl %ecx, (%r9)")
#define SBB_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X0A # sbbl %ecx, (%r10)")
#define SBB_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X0B # sbbl %ecx, (%r11)")
#define SBB_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X0C, 0X24 # sbbl %ecx, (%r12)")
#define SBB_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X4D, 0X00 # sbbl %ecx, (%r13)")
#define SBB_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X0E # sbbl %ecx, (%r14)")
#define SBB_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X0F # sbbl %ecx, (%r15)")
#define SBB_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X08 # sbbl %ecx, (%eax)")
#define SBB_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X0B # sbbl %ecx, (%ebx)")
#define SBB_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X09 # sbbl %ecx, (%ecx)")
#define SBB_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X0A # sbbl %ecx, (%edx)")
#define SBB_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X0F # sbbl %ecx, (%edi)")
#define SBB_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X0E # sbbl %ecx, (%esi)")
#define SBB_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X4D, 0X00 # sbbl %ecx, (%ebp)")
#define SBB_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X0C, 0X24 # sbbl %ecx, (%esp)")

#define SBB_EDX_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X10 # sbbl %edx, (%rax)")
#define SBB_EDX_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X13 # sbbl %edx, (%rbx)")
#define SBB_EDX_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X11 # sbbl %edx, (%rcx)")
#define SBB_EDX_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X12 # sbbl %edx, (%rdx)")
#define SBB_EDX_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X17 # sbbl %edx, (%rdi)")
#define SBB_EDX_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X16 # sbbl %edx, (%rsi)")
#define SBB_EDX_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X55, 0X00 # sbbl %edx, (%rbp)")
#define SBB_EDX_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X14, 0X24 # sbbl %edx, (%rsp)")
#define SBB_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X10 # sbbl %edx, (%r8)")
#define SBB_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X11 # sbbl %edx, (%r9)")
#define SBB_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X12 # sbbl %edx, (%r10)")
#define SBB_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X13 # sbbl %edx, (%r11)")
#define SBB_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X14, 0X24 # sbbl %edx, (%r12)")
#define SBB_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X55, 0X00 # sbbl %edx, (%r13)")
#define SBB_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X16 # sbbl %edx, (%r14)")
#define SBB_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X17 # sbbl %edx, (%r15)")
#define SBB_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X10 # sbbl %edx, (%eax)")
#define SBB_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X13 # sbbl %edx, (%ebx)")
#define SBB_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X11 # sbbl %edx, (%ecx)")
#define SBB_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X12 # sbbl %edx, (%edx)")
#define SBB_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X17 # sbbl %edx, (%edi)")
#define SBB_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X16 # sbbl %edx, (%esi)")
#define SBB_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X55, 0X00 # sbbl %edx, (%ebp)")
#define SBB_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X14, 0X24 # sbbl %edx, (%esp)")

#define SBB_EDI_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X38 # sbbl %edi, (%rax)")
#define SBB_EDI_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X3B # sbbl %edi, (%rbx)")
#define SBB_EDI_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X39 # sbbl %edi, (%rcx)")
#define SBB_EDI_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X3A # sbbl %edi, (%rdx)")
#define SBB_EDI_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X3F # sbbl %edi, (%rdi)")
#define SBB_EDI_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X3E # sbbl %edi, (%rsi)")
#define SBB_EDI_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X7D, 0X00 # sbbl %edi, (%rbp)")
#define SBB_EDI_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X3C, 0X24 # sbbl %edi, (%rsp)")
#define SBB_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X38 # sbbl %edi, (%r8)")
#define SBB_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X39 # sbbl %edi, (%r9)")
#define SBB_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X3A # sbbl %edi, (%r10)")
#define SBB_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X3B # sbbl %edi, (%r11)")
#define SBB_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X3C, 0X24 # sbbl %edi, (%r12)")
#define SBB_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X7D, 0X00 # sbbl %edi, (%r13)")
#define SBB_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X3E # sbbl %edi, (%r14)")
#define SBB_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X3F # sbbl %edi, (%r15)")
#define SBB_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X38 # sbbl %edi, (%eax)")
#define SBB_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X3B # sbbl %edi, (%ebx)")
#define SBB_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X39 # sbbl %edi, (%ecx)")
#define SBB_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X3A # sbbl %edi, (%edx)")
#define SBB_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X3F # sbbl %edi, (%edi)")
#define SBB_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X3E # sbbl %edi, (%esi)")
#define SBB_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X7D, 0X00 # sbbl %edi, (%ebp)")
#define SBB_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X3C, 0X24 # sbbl %edi, (%esp)")

#define SBB_ESI_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X30 # sbbl %esi, (%rax)")
#define SBB_ESI_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X33 # sbbl %esi, (%rbx)")
#define SBB_ESI_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X31 # sbbl %esi, (%rcx)")
#define SBB_ESI_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X32 # sbbl %esi, (%rdx)")
#define SBB_ESI_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X37 # sbbl %esi, (%rdi)")
#define SBB_ESI_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X36 # sbbl %esi, (%rsi)")
#define SBB_ESI_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X75, 0X00 # sbbl %esi, (%rbp)")
#define SBB_ESI_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X34, 0X24 # sbbl %esi, (%rsp)")
#define SBB_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X30 # sbbl %esi, (%r8)")
#define SBB_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X31 # sbbl %esi, (%r9)")
#define SBB_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X32 # sbbl %esi, (%r10)")
#define SBB_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X33 # sbbl %esi, (%r11)")
#define SBB_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X34, 0X24 # sbbl %esi, (%r12)")
#define SBB_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X75, 0X00 # sbbl %esi, (%r13)")
#define SBB_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X36 # sbbl %esi, (%r14)")
#define SBB_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X37 # sbbl %esi, (%r15)")
#define SBB_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X30 # sbbl %esi, (%eax)")
#define SBB_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X33 # sbbl %esi, (%ebx)")
#define SBB_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X31 # sbbl %esi, (%ecx)")
#define SBB_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X32 # sbbl %esi, (%edx)")
#define SBB_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X37 # sbbl %esi, (%edi)")
#define SBB_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X36 # sbbl %esi, (%esi)")
#define SBB_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X75, 0X00 # sbbl %esi, (%ebp)")
#define SBB_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X34, 0X24 # sbbl %esi, (%esp)")

#define SBB_EBP_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X28 # sbbl %ebp, (%rax)")
#define SBB_EBP_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X2B # sbbl %ebp, (%rbx)")
#define SBB_EBP_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X29 # sbbl %ebp, (%rcx)")
#define SBB_EBP_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X2A # sbbl %ebp, (%rdx)")
#define SBB_EBP_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X2F # sbbl %ebp, (%rdi)")
#define SBB_EBP_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X2E # sbbl %ebp, (%rsi)")
#define SBB_EBP_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X6D, 0X00 # sbbl %ebp, (%rbp)")
#define SBB_EBP_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X2C, 0X24 # sbbl %ebp, (%rsp)")
#define SBB_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X28 # sbbl %ebp, (%r8)")
#define SBB_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X29 # sbbl %ebp, (%r9)")
#define SBB_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X2A # sbbl %ebp, (%r10)")
#define SBB_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X2B # sbbl %ebp, (%r11)")
#define SBB_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X2C, 0X24 # sbbl %ebp, (%r12)")
#define SBB_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X6D, 0X00 # sbbl %ebp, (%r13)")
#define SBB_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X2E # sbbl %ebp, (%r14)")
#define SBB_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X2F # sbbl %ebp, (%r15)")
#define SBB_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X28 # sbbl %ebp, (%eax)")
#define SBB_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X2B # sbbl %ebp, (%ebx)")
#define SBB_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X29 # sbbl %ebp, (%ecx)")
#define SBB_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X2A # sbbl %ebp, (%edx)")
#define SBB_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X2F # sbbl %ebp, (%edi)")
#define SBB_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X2E # sbbl %ebp, (%esi)")
#define SBB_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X6D, 0X00 # sbbl %ebp, (%ebp)")
#define SBB_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X2C, 0X24 # sbbl %ebp, (%esp)")

#define SBB_ESP_TO_PTR_RAX CMT_ASM(".byte 0X19, 0X20 # sbbl %esp, (%rax)")
#define SBB_ESP_TO_PTR_RBX CMT_ASM(".byte 0X19, 0X23 # sbbl %esp, (%rbx)")
#define SBB_ESP_TO_PTR_RCX CMT_ASM(".byte 0X19, 0X21 # sbbl %esp, (%rcx)")
#define SBB_ESP_TO_PTR_RDX CMT_ASM(".byte 0X19, 0X22 # sbbl %esp, (%rdx)")
#define SBB_ESP_TO_PTR_RDI CMT_ASM(".byte 0X19, 0X27 # sbbl %esp, (%rdi)")
#define SBB_ESP_TO_PTR_RSI CMT_ASM(".byte 0X19, 0X26 # sbbl %esp, (%rsi)")
#define SBB_ESP_TO_PTR_RBP CMT_ASM(".byte 0X19, 0X65, 0X00 # sbbl %esp, (%rbp)")
#define SBB_ESP_TO_PTR_RSP CMT_ASM(".byte 0X19, 0X24, 0X24 # sbbl %esp, (%rsp)")
#define SBB_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X19, 0X20 # sbbl %esp, (%r8)")
#define SBB_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X19, 0X21 # sbbl %esp, (%r9)")
#define SBB_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X19, 0X22 # sbbl %esp, (%r10)")
#define SBB_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X19, 0X23 # sbbl %esp, (%r11)")
#define SBB_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X19, 0X24, 0X24 # sbbl %esp, (%r12)")
#define SBB_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X19, 0X65, 0X00 # sbbl %esp, (%r13)")
#define SBB_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X19, 0X26 # sbbl %esp, (%r14)")
#define SBB_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X19, 0X27 # sbbl %esp, (%r15)")
#define SBB_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X19, 0X20 # sbbl %esp, (%eax)")
#define SBB_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X19, 0X23 # sbbl %esp, (%ebx)")
#define SBB_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X19, 0X21 # sbbl %esp, (%ecx)")
#define SBB_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X19, 0X22 # sbbl %esp, (%edx)")
#define SBB_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X19, 0X27 # sbbl %esp, (%edi)")
#define SBB_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X19, 0X26 # sbbl %esp, (%esi)")
#define SBB_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X19, 0X65, 0X00 # sbbl %esp, (%ebp)")
#define SBB_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X19, 0X24, 0X24 # sbbl %esp, (%esp)")

#define SBB_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X00 # sbbl %r8d, (%rax)")
#define SBB_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X03 # sbbl %r8d, (%rbx)")
#define SBB_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X01 # sbbl %r8d, (%rcx)")
#define SBB_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X02 # sbbl %r8d, (%rdx)")
#define SBB_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X07 # sbbl %r8d, (%rdi)")
#define SBB_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X06 # sbbl %r8d, (%rsi)")
#define SBB_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X45, 0X00 # sbbl %r8d, (%rbp)")
#define SBB_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X04, 0X24 # sbbl %r8d, (%rsp)")
#define SBB_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X00 # sbbl %r8d, (%r8)")
#define SBB_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X01 # sbbl %r8d, (%r9)")
#define SBB_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X02 # sbbl %r8d, (%r10)")
#define SBB_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X03 # sbbl %r8d, (%r11)")
#define SBB_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X04, 0X24 # sbbl %r8d, (%r12)")
#define SBB_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X45, 0X00 # sbbl %r8d, (%r13)")
#define SBB_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X06 # sbbl %r8d, (%r14)")
#define SBB_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X07 # sbbl %r8d, (%r15)")
#define SBB_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X00 # sbbl %r8d, (%eax)")
#define SBB_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X03 # sbbl %r8d, (%ebx)")
#define SBB_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X01 # sbbl %r8d, (%ecx)")
#define SBB_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X02 # sbbl %r8d, (%edx)")
#define SBB_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X07 # sbbl %r8d, (%edi)")
#define SBB_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X06 # sbbl %r8d, (%esi)")
#define SBB_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X45, 0X00 # sbbl %r8d, (%ebp)")
#define SBB_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X04, 0X24 # sbbl %r8d, (%esp)")

#define SBB_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X08 # sbbl %r9d, (%rax)")
#define SBB_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X0B # sbbl %r9d, (%rbx)")
#define SBB_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X09 # sbbl %r9d, (%rcx)")
#define SBB_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X0A # sbbl %r9d, (%rdx)")
#define SBB_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X0F # sbbl %r9d, (%rdi)")
#define SBB_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X0E # sbbl %r9d, (%rsi)")
#define SBB_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X4D, 0X00 # sbbl %r9d, (%rbp)")
#define SBB_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X0C, 0X24 # sbbl %r9d, (%rsp)")
#define SBB_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X08 # sbbl %r9d, (%r8)")
#define SBB_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X09 # sbbl %r9d, (%r9)")
#define SBB_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X0A # sbbl %r9d, (%r10)")
#define SBB_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X0B # sbbl %r9d, (%r11)")
#define SBB_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X0C, 0X24 # sbbl %r9d, (%r12)")
#define SBB_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X4D, 0X00 # sbbl %r9d, (%r13)")
#define SBB_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X0E # sbbl %r9d, (%r14)")
#define SBB_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X0F # sbbl %r9d, (%r15)")
#define SBB_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X08 # sbbl %r9d, (%eax)")
#define SBB_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X0B # sbbl %r9d, (%ebx)")
#define SBB_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X09 # sbbl %r9d, (%ecx)")
#define SBB_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X0A # sbbl %r9d, (%edx)")
#define SBB_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X0F # sbbl %r9d, (%edi)")
#define SBB_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X0E # sbbl %r9d, (%esi)")
#define SBB_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X4D, 0X00 # sbbl %r9d, (%ebp)")
#define SBB_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X0C, 0X24 # sbbl %r9d, (%esp)")

#define SBB_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X10 # sbbl %r10d, (%rax)")
#define SBB_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X13 # sbbl %r10d, (%rbx)")
#define SBB_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X11 # sbbl %r10d, (%rcx)")
#define SBB_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X12 # sbbl %r10d, (%rdx)")
#define SBB_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X17 # sbbl %r10d, (%rdi)")
#define SBB_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X16 # sbbl %r10d, (%rsi)")
#define SBB_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X55, 0X00 # sbbl %r10d, (%rbp)")
#define SBB_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X14, 0X24 # sbbl %r10d, (%rsp)")
#define SBB_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X10 # sbbl %r10d, (%r8)")
#define SBB_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X11 # sbbl %r10d, (%r9)")
#define SBB_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X12 # sbbl %r10d, (%r10)")
#define SBB_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X13 # sbbl %r10d, (%r11)")
#define SBB_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X14, 0X24 # sbbl %r10d, (%r12)")
#define SBB_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X55, 0X00 # sbbl %r10d, (%r13)")
#define SBB_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X16 # sbbl %r10d, (%r14)")
#define SBB_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X17 # sbbl %r10d, (%r15)")
#define SBB_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X10 # sbbl %r10d, (%eax)")
#define SBB_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X13 # sbbl %r10d, (%ebx)")
#define SBB_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X11 # sbbl %r10d, (%ecx)")
#define SBB_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X12 # sbbl %r10d, (%edx)")
#define SBB_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X17 # sbbl %r10d, (%edi)")
#define SBB_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X16 # sbbl %r10d, (%esi)")
#define SBB_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X55, 0X00 # sbbl %r10d, (%ebp)")
#define SBB_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X14, 0X24 # sbbl %r10d, (%esp)")

#define SBB_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X18 # sbbl %r11d, (%rax)")
#define SBB_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X1B # sbbl %r11d, (%rbx)")
#define SBB_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X19 # sbbl %r11d, (%rcx)")
#define SBB_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X1A # sbbl %r11d, (%rdx)")
#define SBB_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X1F # sbbl %r11d, (%rdi)")
#define SBB_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X1E # sbbl %r11d, (%rsi)")
#define SBB_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X5D, 0X00 # sbbl %r11d, (%rbp)")
#define SBB_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X1C, 0X24 # sbbl %r11d, (%rsp)")
#define SBB_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X18 # sbbl %r11d, (%r8)")
#define SBB_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X19 # sbbl %r11d, (%r9)")
#define SBB_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X1A # sbbl %r11d, (%r10)")
#define SBB_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X1B # sbbl %r11d, (%r11)")
#define SBB_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X1C, 0X24 # sbbl %r11d, (%r12)")
#define SBB_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X5D, 0X00 # sbbl %r11d, (%r13)")
#define SBB_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X1E # sbbl %r11d, (%r14)")
#define SBB_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X1F # sbbl %r11d, (%r15)")
#define SBB_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X18 # sbbl %r11d, (%eax)")
#define SBB_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X1B # sbbl %r11d, (%ebx)")
#define SBB_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X19 # sbbl %r11d, (%ecx)")
#define SBB_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X1A # sbbl %r11d, (%edx)")
#define SBB_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X1F # sbbl %r11d, (%edi)")
#define SBB_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X1E # sbbl %r11d, (%esi)")
#define SBB_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X5D, 0X00 # sbbl %r11d, (%ebp)")
#define SBB_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X1C, 0X24 # sbbl %r11d, (%esp)")

#define SBB_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X20 # sbbl %r12d, (%rax)")
#define SBB_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X23 # sbbl %r12d, (%rbx)")
#define SBB_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X21 # sbbl %r12d, (%rcx)")
#define SBB_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X22 # sbbl %r12d, (%rdx)")
#define SBB_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X27 # sbbl %r12d, (%rdi)")
#define SBB_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X26 # sbbl %r12d, (%rsi)")
#define SBB_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X65, 0X00 # sbbl %r12d, (%rbp)")
#define SBB_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X24, 0X24 # sbbl %r12d, (%rsp)")
#define SBB_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X20 # sbbl %r12d, (%r8)")
#define SBB_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X21 # sbbl %r12d, (%r9)")
#define SBB_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X22 # sbbl %r12d, (%r10)")
#define SBB_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X23 # sbbl %r12d, (%r11)")
#define SBB_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X24, 0X24 # sbbl %r12d, (%r12)")
#define SBB_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X65, 0X00 # sbbl %r12d, (%r13)")
#define SBB_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X26 # sbbl %r12d, (%r14)")
#define SBB_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X27 # sbbl %r12d, (%r15)")
#define SBB_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X20 # sbbl %r12d, (%eax)")
#define SBB_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X23 # sbbl %r12d, (%ebx)")
#define SBB_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X21 # sbbl %r12d, (%ecx)")
#define SBB_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X22 # sbbl %r12d, (%edx)")
#define SBB_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X27 # sbbl %r12d, (%edi)")
#define SBB_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X26 # sbbl %r12d, (%esi)")
#define SBB_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X65, 0X00 # sbbl %r12d, (%ebp)")
#define SBB_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X24, 0X24 # sbbl %r12d, (%esp)")

#define SBB_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X28 # sbbl %r13d, (%rax)")
#define SBB_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X2B # sbbl %r13d, (%rbx)")
#define SBB_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X29 # sbbl %r13d, (%rcx)")
#define SBB_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X2A # sbbl %r13d, (%rdx)")
#define SBB_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X2F # sbbl %r13d, (%rdi)")
#define SBB_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X2E # sbbl %r13d, (%rsi)")
#define SBB_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X6D, 0X00 # sbbl %r13d, (%rbp)")
#define SBB_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X2C, 0X24 # sbbl %r13d, (%rsp)")
#define SBB_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X28 # sbbl %r13d, (%r8)")
#define SBB_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X29 # sbbl %r13d, (%r9)")
#define SBB_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X2A # sbbl %r13d, (%r10)")
#define SBB_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X2B # sbbl %r13d, (%r11)")
#define SBB_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X2C, 0X24 # sbbl %r13d, (%r12)")
#define SBB_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X6D, 0X00 # sbbl %r13d, (%r13)")
#define SBB_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X2E # sbbl %r13d, (%r14)")
#define SBB_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X2F # sbbl %r13d, (%r15)")
#define SBB_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X28 # sbbl %r13d, (%eax)")
#define SBB_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X2B # sbbl %r13d, (%ebx)")
#define SBB_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X29 # sbbl %r13d, (%ecx)")
#define SBB_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X2A # sbbl %r13d, (%edx)")
#define SBB_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X2F # sbbl %r13d, (%edi)")
#define SBB_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X2E # sbbl %r13d, (%esi)")
#define SBB_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X6D, 0X00 # sbbl %r13d, (%ebp)")
#define SBB_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X2C, 0X24 # sbbl %r13d, (%esp)")

#define SBB_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X30 # sbbl %r14d, (%rax)")
#define SBB_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X33 # sbbl %r14d, (%rbx)")
#define SBB_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X31 # sbbl %r14d, (%rcx)")
#define SBB_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X32 # sbbl %r14d, (%rdx)")
#define SBB_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X37 # sbbl %r14d, (%rdi)")
#define SBB_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X36 # sbbl %r14d, (%rsi)")
#define SBB_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X75, 0X00 # sbbl %r14d, (%rbp)")
#define SBB_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X34, 0X24 # sbbl %r14d, (%rsp)")
#define SBB_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X30 # sbbl %r14d, (%r8)")
#define SBB_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X31 # sbbl %r14d, (%r9)")
#define SBB_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X32 # sbbl %r14d, (%r10)")
#define SBB_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X33 # sbbl %r14d, (%r11)")
#define SBB_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X34, 0X24 # sbbl %r14d, (%r12)")
#define SBB_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X75, 0X00 # sbbl %r14d, (%r13)")
#define SBB_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X36 # sbbl %r14d, (%r14)")
#define SBB_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X37 # sbbl %r14d, (%r15)")
#define SBB_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X30 # sbbl %r14d, (%eax)")
#define SBB_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X33 # sbbl %r14d, (%ebx)")
#define SBB_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X31 # sbbl %r14d, (%ecx)")
#define SBB_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X32 # sbbl %r14d, (%edx)")
#define SBB_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X37 # sbbl %r14d, (%edi)")
#define SBB_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X36 # sbbl %r14d, (%esi)")
#define SBB_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X75, 0X00 # sbbl %r14d, (%ebp)")
#define SBB_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X34, 0X24 # sbbl %r14d, (%esp)")

#define SBB_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X19, 0X38 # sbbl %r15d, (%rax)")
#define SBB_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X19, 0X3B # sbbl %r15d, (%rbx)")
#define SBB_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X19, 0X39 # sbbl %r15d, (%rcx)")
#define SBB_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X19, 0X3A # sbbl %r15d, (%rdx)")
#define SBB_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X19, 0X3F # sbbl %r15d, (%rdi)")
#define SBB_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X19, 0X3E # sbbl %r15d, (%rsi)")
#define SBB_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X19, 0X7D, 0X00 # sbbl %r15d, (%rbp)")
#define SBB_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X19, 0X3C, 0X24 # sbbl %r15d, (%rsp)")
#define SBB_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X19, 0X38 # sbbl %r15d, (%r8)")
#define SBB_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X19, 0X39 # sbbl %r15d, (%r9)")
#define SBB_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X19, 0X3A # sbbl %r15d, (%r10)")
#define SBB_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X19, 0X3B # sbbl %r15d, (%r11)")
#define SBB_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X19, 0X3C, 0X24 # sbbl %r15d, (%r12)")
#define SBB_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X19, 0X7D, 0X00 # sbbl %r15d, (%r13)")
#define SBB_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X19, 0X3E # sbbl %r15d, (%r14)")
#define SBB_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X19, 0X3F # sbbl %r15d, (%r15)")
#define SBB_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X38 # sbbl %r15d, (%eax)")
#define SBB_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X3B # sbbl %r15d, (%ebx)")
#define SBB_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X39 # sbbl %r15d, (%ecx)")
#define SBB_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X19, 0X3A # sbbl %r15d, (%edx)")
#define SBB_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X3F # sbbl %r15d, (%edi)")
#define SBB_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X19, 0X3E # sbbl %r15d, (%esi)")
#define SBB_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X7D, 0X00 # sbbl %r15d, (%ebp)")
#define SBB_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X19, 0X3C, 0X24 # sbbl %r15d, (%esp)")

#define SBB_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X80 # sbbl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X83 # sbbl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X81 # sbbl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X82 # sbbl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X87 # sbbl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X86 # sbbl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X85 # sbbl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X80 # sbbl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X81 # sbbl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X82 # sbbl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X83 # sbbl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X85 # sbbl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X86 # sbbl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X87 # sbbl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X80 # sbbl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X83 # sbbl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X81 # sbbl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X82 # sbbl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X87 # sbbl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X86 # sbbl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X85 # sbbl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X98 # sbbl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9B # sbbl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X99 # sbbl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9A # sbbl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9F # sbbl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9E # sbbl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9D # sbbl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X98 # sbbl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X99 # sbbl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9A # sbbl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9B # sbbl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9D # sbbl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9E # sbbl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X9F # sbbl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X98 # sbbl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9B # sbbl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X99 # sbbl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9A # sbbl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9F # sbbl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9E # sbbl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9D # sbbl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X88 # sbbl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8B # sbbl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X89 # sbbl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8A # sbbl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8F # sbbl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8E # sbbl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8D # sbbl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X88 # sbbl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X89 # sbbl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8A # sbbl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8B # sbbl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8D # sbbl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8E # sbbl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X8F # sbbl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X88 # sbbl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8B # sbbl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X89 # sbbl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8A # sbbl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8F # sbbl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8E # sbbl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8D # sbbl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X90 # sbbl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X93 # sbbl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X91 # sbbl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X92 # sbbl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X97 # sbbl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X96 # sbbl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X95 # sbbl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X90 # sbbl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X91 # sbbl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X92 # sbbl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X93 # sbbl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X95 # sbbl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X96 # sbbl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0X97 # sbbl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X90 # sbbl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X93 # sbbl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X91 # sbbl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X92 # sbbl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X97 # sbbl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X96 # sbbl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X95 # sbbl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB8 # sbbl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBB # sbbl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB9 # sbbl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBA # sbbl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBF # sbbl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBE # sbbl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBD # sbbl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB8 # sbbl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB9 # sbbl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBA # sbbl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBB # sbbl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBD # sbbl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBE # sbbl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XBF # sbbl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB8 # sbbl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBB # sbbl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB9 # sbbl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBA # sbbl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBF # sbbl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBE # sbbl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBD # sbbl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB0 # sbbl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB3 # sbbl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB1 # sbbl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB2 # sbbl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB7 # sbbl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB6 # sbbl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB5 # sbbl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB0 # sbbl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB1 # sbbl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB2 # sbbl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB3 # sbbl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB5 # sbbl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB6 # sbbl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XB7 # sbbl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB0 # sbbl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB3 # sbbl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB1 # sbbl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB2 # sbbl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB7 # sbbl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB6 # sbbl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB5 # sbbl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA8 # sbbl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAB # sbbl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA9 # sbbl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAA # sbbl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAF # sbbl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAE # sbbl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAD # sbbl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA8 # sbbl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA9 # sbbl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAA # sbbl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAB # sbbl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAD # sbbl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAE # sbbl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XAF # sbbl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA8 # sbbl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAB # sbbl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA9 # sbbl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAA # sbbl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAF # sbbl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAE # sbbl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAD # sbbl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA0 # sbbl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA3 # sbbl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA1 # sbbl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA2 # sbbl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA7 # sbbl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA6 # sbbl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA5 # sbbl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA0 # sbbl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA1 # sbbl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA2 # sbbl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA3 # sbbl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA5 # sbbl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA6 # sbbl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X1B, 0XA7 # sbbl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA0 # sbbl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA3 # sbbl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA1 # sbbl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA2 # sbbl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA7 # sbbl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA6 # sbbl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA5 # sbbl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X80 # sbbl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X83 # sbbl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X81 # sbbl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X82 # sbbl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X87 # sbbl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X86 # sbbl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X85 # sbbl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X80 # sbbl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X81 # sbbl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X82 # sbbl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X83 # sbbl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X85 # sbbl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X86 # sbbl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X87 # sbbl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X80 # sbbl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X83 # sbbl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X81 # sbbl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X82 # sbbl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X87 # sbbl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X86 # sbbl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X85 # sbbl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X84, 0X24 # sbbl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X88 # sbbl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8B # sbbl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X89 # sbbl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8A # sbbl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8F # sbbl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8E # sbbl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8D # sbbl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X88 # sbbl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X89 # sbbl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8A # sbbl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8B # sbbl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8D # sbbl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8E # sbbl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X8F # sbbl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X88 # sbbl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8B # sbbl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X89 # sbbl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8A # sbbl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8F # sbbl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8E # sbbl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8D # sbbl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X8C, 0X24 # sbbl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X90 # sbbl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X93 # sbbl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X91 # sbbl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X92 # sbbl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X97 # sbbl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X96 # sbbl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X95 # sbbl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X90 # sbbl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X91 # sbbl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X92 # sbbl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X93 # sbbl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X95 # sbbl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X96 # sbbl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X97 # sbbl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X90 # sbbl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X93 # sbbl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X91 # sbbl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X92 # sbbl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X97 # sbbl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X96 # sbbl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X95 # sbbl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X94, 0X24 # sbbl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X98 # sbbl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9B # sbbl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X99 # sbbl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9A # sbbl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9F # sbbl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9E # sbbl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9D # sbbl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X98 # sbbl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X99 # sbbl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9A # sbbl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9B # sbbl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9D # sbbl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9E # sbbl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0X9F # sbbl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X98 # sbbl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9B # sbbl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X99 # sbbl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9A # sbbl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9F # sbbl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9E # sbbl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9D # sbbl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0X9C, 0X24 # sbbl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA0 # sbbl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA3 # sbbl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA1 # sbbl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA2 # sbbl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA7 # sbbl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA6 # sbbl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA5 # sbbl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA0 # sbbl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA1 # sbbl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA2 # sbbl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA3 # sbbl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA5 # sbbl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA6 # sbbl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA7 # sbbl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA0 # sbbl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA3 # sbbl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA1 # sbbl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA2 # sbbl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA7 # sbbl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA6 # sbbl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA5 # sbbl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA4, 0X24 # sbbl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA8 # sbbl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAB # sbbl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XA9 # sbbl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAA # sbbl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAF # sbbl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAE # sbbl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAD # sbbl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA8 # sbbl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XA9 # sbbl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAA # sbbl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAB # sbbl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAD # sbbl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAE # sbbl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XAF # sbbl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA8 # sbbl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAB # sbbl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XA9 # sbbl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAA # sbbl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAF # sbbl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAE # sbbl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAD # sbbl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XAC, 0X24 # sbbl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB0 # sbbl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB3 # sbbl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB1 # sbbl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB2 # sbbl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB7 # sbbl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB6 # sbbl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB5 # sbbl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB0 # sbbl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB1 # sbbl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB2 # sbbl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB3 # sbbl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB5 # sbbl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB6 # sbbl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB7 # sbbl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB0 # sbbl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB3 # sbbl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB1 # sbbl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB2 # sbbl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB7 # sbbl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB6 # sbbl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB5 # sbbl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB4, 0X24 # sbbl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB8 # sbbl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBB # sbbl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XB9 # sbbl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBA # sbbl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBF # sbbl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBE # sbbl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBD # sbbl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB8 # sbbl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XB9 # sbbl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBA # sbbl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBB # sbbl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBD # sbbl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBE # sbbl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X1B, 0XBF # sbbl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB8 # sbbl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBB # sbbl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XB9 # sbbl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBA # sbbl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBF # sbbl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBE # sbbl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBD # sbbl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X1B, 0XBC, 0X24 # sbbl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X80 # sbbl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X83 # sbbl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X81 # sbbl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X82 # sbbl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X87 # sbbl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X86 # sbbl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X85 # sbbl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X84, 0X24 # sbbl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X80 # sbbl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X81 # sbbl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X82 # sbbl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X83 # sbbl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X84, 0X24 # sbbl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X85 # sbbl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X86 # sbbl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X87 # sbbl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X80 # sbbl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X83 # sbbl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X81 # sbbl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X82 # sbbl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X87 # sbbl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X86 # sbbl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X85 # sbbl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X84, 0X24 # sbbl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X98 # sbbl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9B # sbbl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X99 # sbbl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9A # sbbl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9F # sbbl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9E # sbbl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9D # sbbl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X9C, 0X24 # sbbl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X98 # sbbl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X99 # sbbl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9A # sbbl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9B # sbbl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9C, 0X24 # sbbl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9D # sbbl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9E # sbbl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X9F # sbbl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X98 # sbbl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9B # sbbl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X99 # sbbl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9A # sbbl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9F # sbbl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9E # sbbl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9D # sbbl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X9C, 0X24 # sbbl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X88 # sbbl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8B # sbbl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X89 # sbbl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8A # sbbl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8F # sbbl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8E # sbbl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8D # sbbl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X8C, 0X24 # sbbl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X88 # sbbl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X89 # sbbl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8A # sbbl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8B # sbbl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8C, 0X24 # sbbl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8D # sbbl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8E # sbbl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X8F # sbbl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X88 # sbbl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8B # sbbl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X89 # sbbl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8A # sbbl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8F # sbbl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8E # sbbl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8D # sbbl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X8C, 0X24 # sbbl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X90 # sbbl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X93 # sbbl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X91 # sbbl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0X92 # sbbl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X97 # sbbl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0X96 # sbbl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X95 # sbbl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0X94, 0X24 # sbbl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X90 # sbbl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X91 # sbbl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X92 # sbbl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X93 # sbbl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X94, 0X24 # sbbl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X95 # sbbl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X96 # sbbl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0X97 # sbbl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X90 # sbbl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X93 # sbbl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X91 # sbbl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X92 # sbbl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X97 # sbbl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X96 # sbbl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X95 # sbbl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0X94, 0X24 # sbbl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB8 # sbbl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBB # sbbl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB9 # sbbl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBA # sbbl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBF # sbbl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBE # sbbl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBD # sbbl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XBC, 0X24 # sbbl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB8 # sbbl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB9 # sbbl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBA # sbbl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBB # sbbl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBC, 0X24 # sbbl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBD # sbbl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBE # sbbl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XBF # sbbl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB8 # sbbl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBB # sbbl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB9 # sbbl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBA # sbbl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBF # sbbl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBE # sbbl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBD # sbbl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XBC, 0X24 # sbbl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB0 # sbbl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB3 # sbbl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB1 # sbbl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB2 # sbbl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB7 # sbbl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB6 # sbbl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB5 # sbbl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XB4, 0X24 # sbbl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB0 # sbbl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB1 # sbbl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB2 # sbbl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB3 # sbbl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB4, 0X24 # sbbl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB5 # sbbl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB6 # sbbl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XB7 # sbbl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB0 # sbbl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB3 # sbbl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB1 # sbbl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB2 # sbbl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB7 # sbbl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB6 # sbbl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB5 # sbbl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XB4, 0X24 # sbbl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA8 # sbbl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAB # sbbl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA9 # sbbl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAA # sbbl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAF # sbbl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAE # sbbl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAD # sbbl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XAC, 0X24 # sbbl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA8 # sbbl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA9 # sbbl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAA # sbbl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAB # sbbl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAC, 0X24 # sbbl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAD # sbbl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAE # sbbl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XAF # sbbl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA8 # sbbl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAB # sbbl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA9 # sbbl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAA # sbbl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAF # sbbl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAE # sbbl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAD # sbbl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XAC, 0X24 # sbbl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA0 # sbbl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA3 # sbbl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA1 # sbbl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA2 # sbbl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA7 # sbbl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA6 # sbbl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA5 # sbbl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X19, 0XA4, 0X24 # sbbl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA0 # sbbl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA1 # sbbl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA2 # sbbl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA3 # sbbl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA4, 0X24 # sbbl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA5 # sbbl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA6 # sbbl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X19, 0XA7 # sbbl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA0 # sbbl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA3 # sbbl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA1 # sbbl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA2 # sbbl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA7 # sbbl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA6 # sbbl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA5 # sbbl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X19, 0XA4, 0X24 # sbbl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X80 # sbbl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X83 # sbbl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X81 # sbbl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X82 # sbbl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X87 # sbbl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X86 # sbbl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X85 # sbbl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X84, 0X24 # sbbl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X80 # sbbl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X81 # sbbl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X82 # sbbl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X83 # sbbl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X84, 0X24 # sbbl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X85 # sbbl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X86 # sbbl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X87 # sbbl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X80 # sbbl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X83 # sbbl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X81 # sbbl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X82 # sbbl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X87 # sbbl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X86 # sbbl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X85 # sbbl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X84, 0X24 # sbbl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X88 # sbbl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8B # sbbl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X89 # sbbl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8A # sbbl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8F # sbbl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8E # sbbl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8D # sbbl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X8C, 0X24 # sbbl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X88 # sbbl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X89 # sbbl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8A # sbbl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8B # sbbl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8C, 0X24 # sbbl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8D # sbbl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8E # sbbl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X8F # sbbl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X88 # sbbl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8B # sbbl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X89 # sbbl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8A # sbbl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8F # sbbl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8E # sbbl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8D # sbbl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X8C, 0X24 # sbbl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X90 # sbbl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X93 # sbbl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X91 # sbbl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X92 # sbbl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X97 # sbbl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X96 # sbbl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X95 # sbbl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X94, 0X24 # sbbl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X90 # sbbl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X91 # sbbl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X92 # sbbl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X93 # sbbl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X94, 0X24 # sbbl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X95 # sbbl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X96 # sbbl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X97 # sbbl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X90 # sbbl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X93 # sbbl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X91 # sbbl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X92 # sbbl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X97 # sbbl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X96 # sbbl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X95 # sbbl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X94, 0X24 # sbbl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X98 # sbbl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9B # sbbl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X99 # sbbl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9A # sbbl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9F # sbbl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9E # sbbl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9D # sbbl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0X9C, 0X24 # sbbl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X98 # sbbl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X99 # sbbl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9A # sbbl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9B # sbbl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9C, 0X24 # sbbl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9D # sbbl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9E # sbbl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0X9F # sbbl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X98 # sbbl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9B # sbbl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X99 # sbbl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9A # sbbl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9F # sbbl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9E # sbbl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9D # sbbl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0X9C, 0X24 # sbbl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA0 # sbbl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA3 # sbbl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA1 # sbbl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA2 # sbbl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA7 # sbbl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA6 # sbbl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA5 # sbbl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA4, 0X24 # sbbl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA0 # sbbl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA1 # sbbl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA2 # sbbl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA3 # sbbl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA4, 0X24 # sbbl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA5 # sbbl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA6 # sbbl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA7 # sbbl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA0 # sbbl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA3 # sbbl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA1 # sbbl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA2 # sbbl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA7 # sbbl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA6 # sbbl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA5 # sbbl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA4, 0X24 # sbbl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA8 # sbbl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAB # sbbl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XA9 # sbbl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAA # sbbl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAF # sbbl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAE # sbbl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAD # sbbl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XAC, 0X24 # sbbl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA8 # sbbl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XA9 # sbbl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAA # sbbl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAB # sbbl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAC, 0X24 # sbbl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAD # sbbl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAE # sbbl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XAF # sbbl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA8 # sbbl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAB # sbbl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XA9 # sbbl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAA # sbbl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAF # sbbl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAE # sbbl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAD # sbbl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XAC, 0X24 # sbbl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB0 # sbbl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB3 # sbbl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB1 # sbbl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB2 # sbbl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB7 # sbbl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB6 # sbbl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB5 # sbbl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB4, 0X24 # sbbl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB0 # sbbl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB1 # sbbl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB2 # sbbl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB3 # sbbl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB4, 0X24 # sbbl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB5 # sbbl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB6 # sbbl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB7 # sbbl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB0 # sbbl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB3 # sbbl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB1 # sbbl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB2 # sbbl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB7 # sbbl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB6 # sbbl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB5 # sbbl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB4, 0X24 # sbbl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define SBB_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB8 # sbbl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBB # sbbl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XB9 # sbbl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBA # sbbl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBF # sbbl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBE # sbbl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBD # sbbl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X19, 0XBC, 0X24 # sbbl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB8 # sbbl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XB9 # sbbl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBA # sbbl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBB # sbbl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBC, 0X24 # sbbl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBD # sbbl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBE # sbbl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X19, 0XBF # sbbl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB8 # sbbl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBB # sbbl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XB9 # sbbl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBA # sbbl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBF # sbbl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBE # sbbl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBD # sbbl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define SBB_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X19, 0XBC, 0X24 # sbbl %r15d, " _(VALUE) "(%esp)")\
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
