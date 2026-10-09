#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define XCHG_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X05 # xchgl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1D # xchgl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0D # xchgl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X15 # xchgl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3D # xchgl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X35 # xchgl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2D # xchgl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X25 # xchgl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X05 # xchgl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1D # xchgl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0D # xchgl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X15 # xchgl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3D # xchgl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X35 # xchgl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2D # xchgl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X25 # xchgl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X00 # xchgl (%eax), %eax")
#define XCHG_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X03 # xchgl (%ebx), %eax")
#define XCHG_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X01 # xchgl (%ecx), %eax")
#define XCHG_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X02 # xchgl (%edx), %eax")
#define XCHG_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X07 # xchgl (%edi), %eax")
#define XCHG_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X06 # xchgl (%esi), %eax")
#define XCHG_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X45, 0X00 # xchgl (%ebp), %eax")
#define XCHG_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X04, 0X24 # xchgl (%esp), %eax")
#define XCHG_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X07 # xchgl (%bx), %eax")
#define XCHG_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X46, 0X00 # xchgl (%bp), %eax")
#define XCHG_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X04 # xchgl (%si), %eax")
#define XCHG_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X05 # xchgl (%di), %eax")

#define XCHG_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X18 # xchgl (%eax), %ebx")
#define XCHG_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X1B # xchgl (%ebx), %ebx")
#define XCHG_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X19 # xchgl (%ecx), %ebx")
#define XCHG_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X1A # xchgl (%edx), %ebx")
#define XCHG_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X1F # xchgl (%edi), %ebx")
#define XCHG_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X1E # xchgl (%esi), %ebx")
#define XCHG_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X5D, 0X00 # xchgl (%ebp), %ebx")
#define XCHG_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X1C, 0X24 # xchgl (%esp), %ebx")
#define XCHG_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X1F # xchgl (%bx), %ebx")
#define XCHG_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X5E, 0X00 # xchgl (%bp), %ebx")
#define XCHG_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X1C # xchgl (%si), %ebx")
#define XCHG_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X1D # xchgl (%di), %ebx")

#define XCHG_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X08 # xchgl (%eax), %ecx")
#define XCHG_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X0B # xchgl (%ebx), %ecx")
#define XCHG_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X09 # xchgl (%ecx), %ecx")
#define XCHG_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X0A # xchgl (%edx), %ecx")
#define XCHG_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X0F # xchgl (%edi), %ecx")
#define XCHG_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X0E # xchgl (%esi), %ecx")
#define XCHG_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X4D, 0X00 # xchgl (%ebp), %ecx")
#define XCHG_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X0C, 0X24 # xchgl (%esp), %ecx")
#define XCHG_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X0F # xchgl (%bx), %ecx")
#define XCHG_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X4E, 0X00 # xchgl (%bp), %ecx")
#define XCHG_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X0C # xchgl (%si), %ecx")
#define XCHG_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X0D # xchgl (%di), %ecx")

#define XCHG_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X10 # xchgl (%eax), %edx")
#define XCHG_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X13 # xchgl (%ebx), %edx")
#define XCHG_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X11 # xchgl (%ecx), %edx")
#define XCHG_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X12 # xchgl (%edx), %edx")
#define XCHG_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X17 # xchgl (%edi), %edx")
#define XCHG_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X16 # xchgl (%esi), %edx")
#define XCHG_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X55, 0X00 # xchgl (%ebp), %edx")
#define XCHG_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X14, 0X24 # xchgl (%esp), %edx")
#define XCHG_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X17 # xchgl (%bx), %edx")
#define XCHG_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X56, 0X00 # xchgl (%bp), %edx")
#define XCHG_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X14 # xchgl (%si), %edx")
#define XCHG_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X15 # xchgl (%di), %edx")

#define XCHG_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X38 # xchgl (%eax), %edi")
#define XCHG_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X3B # xchgl (%ebx), %edi")
#define XCHG_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X39 # xchgl (%ecx), %edi")
#define XCHG_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X3A # xchgl (%edx), %edi")
#define XCHG_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X3F # xchgl (%edi), %edi")
#define XCHG_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X3E # xchgl (%esi), %edi")
#define XCHG_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X7D, 0X00 # xchgl (%ebp), %edi")
#define XCHG_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X3C, 0X24 # xchgl (%esp), %edi")
#define XCHG_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X3F # xchgl (%bx), %edi")
#define XCHG_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X7E, 0X00 # xchgl (%bp), %edi")
#define XCHG_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X3C # xchgl (%si), %edi")
#define XCHG_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X3D # xchgl (%di), %edi")

#define XCHG_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X30 # xchgl (%eax), %esi")
#define XCHG_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X33 # xchgl (%ebx), %esi")
#define XCHG_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X31 # xchgl (%ecx), %esi")
#define XCHG_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X32 # xchgl (%edx), %esi")
#define XCHG_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X37 # xchgl (%edi), %esi")
#define XCHG_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X36 # xchgl (%esi), %esi")
#define XCHG_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X75, 0X00 # xchgl (%ebp), %esi")
#define XCHG_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X34, 0X24 # xchgl (%esp), %esi")
#define XCHG_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X37 # xchgl (%bx), %esi")
#define XCHG_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X76, 0X00 # xchgl (%bp), %esi")
#define XCHG_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X34 # xchgl (%si), %esi")
#define XCHG_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X35 # xchgl (%di), %esi")

#define XCHG_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X28 # xchgl (%eax), %ebp")
#define XCHG_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X2B # xchgl (%ebx), %ebp")
#define XCHG_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X29 # xchgl (%ecx), %ebp")
#define XCHG_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X2A # xchgl (%edx), %ebp")
#define XCHG_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X2F # xchgl (%edi), %ebp")
#define XCHG_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X2E # xchgl (%esi), %ebp")
#define XCHG_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X6D, 0X00 # xchgl (%ebp), %ebp")
#define XCHG_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X2C, 0X24 # xchgl (%esp), %ebp")
#define XCHG_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X2F # xchgl (%bx), %ebp")
#define XCHG_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X6E, 0X00 # xchgl (%bp), %ebp")
#define XCHG_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X2C # xchgl (%si), %ebp")
#define XCHG_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X2D # xchgl (%di), %ebp")

#define XCHG_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X87, 0X20 # xchgl (%eax), %esp")
#define XCHG_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X87, 0X23 # xchgl (%ebx), %esp")
#define XCHG_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X87, 0X21 # xchgl (%ecx), %esp")
#define XCHG_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X87, 0X22 # xchgl (%edx), %esp")
#define XCHG_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X87, 0X27 # xchgl (%edi), %esp")
#define XCHG_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X87, 0X26 # xchgl (%esi), %esp")
#define XCHG_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X87, 0X65, 0X00 # xchgl (%ebp), %esp")
#define XCHG_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X87, 0X24, 0X24 # xchgl (%esp), %esp")
#define XCHG_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X27 # xchgl (%bx), %esp")
#define XCHG_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X66, 0X00 # xchgl (%bp), %esp")
#define XCHG_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X24 # xchgl (%si), %esp")
#define XCHG_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X25 # xchgl (%di), %esp")

#define XCHG_EAX_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X00 # xchgl %eax, (%eax)")
#define XCHG_EAX_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X03 # xchgl %eax, (%ebx)")
#define XCHG_EAX_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X01 # xchgl %eax, (%ecx)")
#define XCHG_EAX_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X02 # xchgl %eax, (%edx)")
#define XCHG_EAX_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X07 # xchgl %eax, (%edi)")
#define XCHG_EAX_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X06 # xchgl %eax, (%esi)")
#define XCHG_EAX_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X45, 0X00 # xchgl %eax, (%ebp)")
#define XCHG_EAX_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X04, 0X24 # xchgl %eax, (%esp)")
#define XCHG_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X07 # xchgl %eax, (%bx)")
#define XCHG_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X46, 0X00 # xchgl %eax, (%bp)")
#define XCHG_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X04 # xchgl %eax, (%si)")
#define XCHG_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X05 # xchgl %eax, (%di)")

#define XCHG_EBX_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X18 # xchgl %ebx, (%eax)")
#define XCHG_EBX_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X1B # xchgl %ebx, (%ebx)")
#define XCHG_EBX_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X19 # xchgl %ebx, (%ecx)")
#define XCHG_EBX_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X1A # xchgl %ebx, (%edx)")
#define XCHG_EBX_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X1F # xchgl %ebx, (%edi)")
#define XCHG_EBX_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X1E # xchgl %ebx, (%esi)")
#define XCHG_EBX_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X5D, 0X00 # xchgl %ebx, (%ebp)")
#define XCHG_EBX_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X1C, 0X24 # xchgl %ebx, (%esp)")
#define XCHG_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X1F # xchgl %ebx, (%bx)")
#define XCHG_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X5E, 0X00 # xchgl %ebx, (%bp)")
#define XCHG_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X1C # xchgl %ebx, (%si)")
#define XCHG_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X1D # xchgl %ebx, (%di)")

#define XCHG_ECX_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X08 # xchgl %ecx, (%eax)")
#define XCHG_ECX_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X0B # xchgl %ecx, (%ebx)")
#define XCHG_ECX_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X09 # xchgl %ecx, (%ecx)")
#define XCHG_ECX_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X0A # xchgl %ecx, (%edx)")
#define XCHG_ECX_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X0F # xchgl %ecx, (%edi)")
#define XCHG_ECX_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X0E # xchgl %ecx, (%esi)")
#define XCHG_ECX_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X4D, 0X00 # xchgl %ecx, (%ebp)")
#define XCHG_ECX_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X0C, 0X24 # xchgl %ecx, (%esp)")
#define XCHG_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X0F # xchgl %ecx, (%bx)")
#define XCHG_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X4E, 0X00 # xchgl %ecx, (%bp)")
#define XCHG_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X0C # xchgl %ecx, (%si)")
#define XCHG_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X0D # xchgl %ecx, (%di)")

#define XCHG_EDX_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X10 # xchgl %edx, (%eax)")
#define XCHG_EDX_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X13 # xchgl %edx, (%ebx)")
#define XCHG_EDX_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X11 # xchgl %edx, (%ecx)")
#define XCHG_EDX_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X12 # xchgl %edx, (%edx)")
#define XCHG_EDX_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X17 # xchgl %edx, (%edi)")
#define XCHG_EDX_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X16 # xchgl %edx, (%esi)")
#define XCHG_EDX_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X55, 0X00 # xchgl %edx, (%ebp)")
#define XCHG_EDX_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X14, 0X24 # xchgl %edx, (%esp)")
#define XCHG_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X17 # xchgl %edx, (%bx)")
#define XCHG_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X56, 0X00 # xchgl %edx, (%bp)")
#define XCHG_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X14 # xchgl %edx, (%si)")
#define XCHG_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X15 # xchgl %edx, (%di)")

#define XCHG_EDI_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X38 # xchgl %edi, (%eax)")
#define XCHG_EDI_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X3B # xchgl %edi, (%ebx)")
#define XCHG_EDI_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X39 # xchgl %edi, (%ecx)")
#define XCHG_EDI_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X3A # xchgl %edi, (%edx)")
#define XCHG_EDI_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X3F # xchgl %edi, (%edi)")
#define XCHG_EDI_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X3E # xchgl %edi, (%esi)")
#define XCHG_EDI_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X7D, 0X00 # xchgl %edi, (%ebp)")
#define XCHG_EDI_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X3C, 0X24 # xchgl %edi, (%esp)")
#define XCHG_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X3F # xchgl %edi, (%bx)")
#define XCHG_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X7E, 0X00 # xchgl %edi, (%bp)")
#define XCHG_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X3C # xchgl %edi, (%si)")
#define XCHG_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X3D # xchgl %edi, (%di)")

#define XCHG_ESI_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X30 # xchgl %esi, (%eax)")
#define XCHG_ESI_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X33 # xchgl %esi, (%ebx)")
#define XCHG_ESI_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X31 # xchgl %esi, (%ecx)")
#define XCHG_ESI_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X32 # xchgl %esi, (%edx)")
#define XCHG_ESI_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X37 # xchgl %esi, (%edi)")
#define XCHG_ESI_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X36 # xchgl %esi, (%esi)")
#define XCHG_ESI_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X75, 0X00 # xchgl %esi, (%ebp)")
#define XCHG_ESI_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X34, 0X24 # xchgl %esi, (%esp)")
#define XCHG_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X37 # xchgl %esi, (%bx)")
#define XCHG_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X76, 0X00 # xchgl %esi, (%bp)")
#define XCHG_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X34 # xchgl %esi, (%si)")
#define XCHG_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X35 # xchgl %esi, (%di)")

#define XCHG_EBP_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X28 # xchgl %ebp, (%eax)")
#define XCHG_EBP_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X2B # xchgl %ebp, (%ebx)")
#define XCHG_EBP_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X29 # xchgl %ebp, (%ecx)")
#define XCHG_EBP_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X2A # xchgl %ebp, (%edx)")
#define XCHG_EBP_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X2F # xchgl %ebp, (%edi)")
#define XCHG_EBP_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X2E # xchgl %ebp, (%esi)")
#define XCHG_EBP_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X6D, 0X00 # xchgl %ebp, (%ebp)")
#define XCHG_EBP_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X2C, 0X24 # xchgl %ebp, (%esp)")
#define XCHG_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X2F # xchgl %ebp, (%bx)")
#define XCHG_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X6E, 0X00 # xchgl %ebp, (%bp)")
#define XCHG_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X2C # xchgl %ebp, (%si)")
#define XCHG_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X2D # xchgl %ebp, (%di)")

#define XCHG_ESP_TO_PTR_EAX CMT_ASM(".byte 0X87, 0X20 # xchgl %esp, (%eax)")
#define XCHG_ESP_TO_PTR_EBX CMT_ASM(".byte 0X87, 0X23 # xchgl %esp, (%ebx)")
#define XCHG_ESP_TO_PTR_ECX CMT_ASM(".byte 0X87, 0X21 # xchgl %esp, (%ecx)")
#define XCHG_ESP_TO_PTR_EDX CMT_ASM(".byte 0X87, 0X22 # xchgl %esp, (%edx)")
#define XCHG_ESP_TO_PTR_EDI CMT_ASM(".byte 0X87, 0X27 # xchgl %esp, (%edi)")
#define XCHG_ESP_TO_PTR_ESI CMT_ASM(".byte 0X87, 0X26 # xchgl %esp, (%esi)")
#define XCHG_ESP_TO_PTR_EBP CMT_ASM(".byte 0X87, 0X65, 0X00 # xchgl %esp, (%ebp)")
#define XCHG_ESP_TO_PTR_ESP CMT_ASM(".byte 0X87, 0X24, 0X24 # xchgl %esp, (%esp)")
#define XCHG_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X87, 0X27 # xchgl %esp, (%bx)")
#define XCHG_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X87, 0X66, 0X00 # xchgl %esp, (%bp)")
#define XCHG_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X87, 0X24 # xchgl %esp, (%si)")
#define XCHG_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X87, 0X25 # xchgl %esp, (%di)")

#define XCHG_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X80 # xchgl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X83 # xchgl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X81 # xchgl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X82 # xchgl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X87 # xchgl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X86 # xchgl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X84 # xchgl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X85 # xchgl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X98 # xchgl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9B # xchgl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X99 # xchgl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9A # xchgl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9F # xchgl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9E # xchgl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9C # xchgl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9D # xchgl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X88 # xchgl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8B # xchgl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X89 # xchgl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8A # xchgl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8F # xchgl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8E # xchgl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8C # xchgl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8D # xchgl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X90 # xchgl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X93 # xchgl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X91 # xchgl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X92 # xchgl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X97 # xchgl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X96 # xchgl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X94 # xchgl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X95 # xchgl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB8 # xchgl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBB # xchgl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB9 # xchgl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBA # xchgl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBF # xchgl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBE # xchgl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBC # xchgl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBD # xchgl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB0 # xchgl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB3 # xchgl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB1 # xchgl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB2 # xchgl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB7 # xchgl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB6 # xchgl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB4 # xchgl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB5 # xchgl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA8 # xchgl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAB # xchgl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA9 # xchgl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAA # xchgl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAF # xchgl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAE # xchgl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAC # xchgl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAD # xchgl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA0 # xchgl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA3 # xchgl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA1 # xchgl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA2 # xchgl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA7 # xchgl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA6 # xchgl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA4 # xchgl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA5 # xchgl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X80 # xchgl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X83 # xchgl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X81 # xchgl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X82 # xchgl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84, 0X24 # xchgl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X87 # xchgl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X86 # xchgl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X84 # xchgl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X85 # xchgl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X98 # xchgl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9B # xchgl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X99 # xchgl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9A # xchgl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C, 0X24 # xchgl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9F # xchgl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9E # xchgl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9C # xchgl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9D # xchgl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X88 # xchgl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8B # xchgl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X89 # xchgl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8A # xchgl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C, 0X24 # xchgl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8F # xchgl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8E # xchgl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8C # xchgl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8D # xchgl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X90 # xchgl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X93 # xchgl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X91 # xchgl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X92 # xchgl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94, 0X24 # xchgl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X97 # xchgl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X96 # xchgl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X94 # xchgl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X95 # xchgl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB8 # xchgl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBB # xchgl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB9 # xchgl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBA # xchgl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC, 0X24 # xchgl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBF # xchgl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBE # xchgl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBC # xchgl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBD # xchgl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB0 # xchgl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB3 # xchgl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB1 # xchgl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB2 # xchgl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4, 0X24 # xchgl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB7 # xchgl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB6 # xchgl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB4 # xchgl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB5 # xchgl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA8 # xchgl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAB # xchgl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA9 # xchgl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAA # xchgl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC, 0X24 # xchgl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAF # xchgl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAE # xchgl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAC # xchgl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAD # xchgl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define XCHG_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA0 # xchgl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA3 # xchgl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA1 # xchgl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA2 # xchgl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4, 0X24 # xchgl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA7 # xchgl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA6 # xchgl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA4 # xchgl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define XCHG_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA5 # xchgl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X04, 0X25 # xchgl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1C, 0X25 # xchgl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0C, 0X25 # xchgl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X14, 0X25 # xchgl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3C, 0X25 # xchgl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X34, 0X25 # xchgl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2C, 0X25 # xchgl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X24, 0X25 # xchgl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X04, 0X25 # xchgl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X0C, 0X25 # xchgl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X14, 0X25 # xchgl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X1C, 0X25 # xchgl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X24, 0X25 # xchgl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X2C, 0X25 # xchgl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X34, 0X25 # xchgl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X3C, 0X25 # xchgl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X04, 0X25 # xchgl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X1C, 0X25 # xchgl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X0C, 0X25 # xchgl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X14, 0X25 # xchgl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X3C, 0X25 # xchgl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X34, 0X25 # xchgl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X2C, 0X25 # xchgl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X87, 0X24, 0X25 # xchgl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X04, 0X25 # xchgl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X0C, 0X25 # xchgl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X14, 0X25 # xchgl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X1C, 0X25 # xchgl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X24, 0X25 # xchgl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X2C, 0X25 # xchgl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X34, 0X25 # xchgl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X3C, 0X25 # xchgl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X00 # xchgl (%rax), %eax")
#define XCHG_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X03 # xchgl (%rbx), %eax")
#define XCHG_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X01 # xchgl (%rcx), %eax")
#define XCHG_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X02 # xchgl (%rdx), %eax")
#define XCHG_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X07 # xchgl (%rdi), %eax")
#define XCHG_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X06 # xchgl (%rsi), %eax")
#define XCHG_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X45, 0X00 # xchgl (%rbp), %eax")
#define XCHG_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X04, 0X24 # xchgl (%rsp), %eax")
#define XCHG_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X00 # xchgl (%r8), %eax")
#define XCHG_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X01 # xchgl (%r9), %eax")
#define XCHG_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X02 # xchgl (%r10), %eax")
#define XCHG_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X03 # xchgl (%r11), %eax")
#define XCHG_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X04, 0X24 # xchgl (%r12), %eax")
#define XCHG_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X45, 0X00 # xchgl (%r13), %eax")
#define XCHG_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X06 # xchgl (%r14), %eax")
#define XCHG_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X07 # xchgl (%r15), %eax")
#define XCHG_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X00 # xchgl (%eax), %eax")
#define XCHG_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X03 # xchgl (%ebx), %eax")
#define XCHG_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X01 # xchgl (%ecx), %eax")
#define XCHG_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X02 # xchgl (%edx), %eax")
#define XCHG_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X07 # xchgl (%edi), %eax")
#define XCHG_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X06 # xchgl (%esi), %eax")
#define XCHG_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X45, 0X00 # xchgl (%ebp), %eax")
#define XCHG_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X04, 0X24 # xchgl (%esp), %eax")

#define XCHG_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X18 # xchgl (%rax), %ebx")
#define XCHG_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X1B # xchgl (%rbx), %ebx")
#define XCHG_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X19 # xchgl (%rcx), %ebx")
#define XCHG_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X1A # xchgl (%rdx), %ebx")
#define XCHG_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X1F # xchgl (%rdi), %ebx")
#define XCHG_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X1E # xchgl (%rsi), %ebx")
#define XCHG_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X5D, 0X00 # xchgl (%rbp), %ebx")
#define XCHG_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X1C, 0X24 # xchgl (%rsp), %ebx")
#define XCHG_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X18 # xchgl (%r8), %ebx")
#define XCHG_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X19 # xchgl (%r9), %ebx")
#define XCHG_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X1A # xchgl (%r10), %ebx")
#define XCHG_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X1B # xchgl (%r11), %ebx")
#define XCHG_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X1C, 0X24 # xchgl (%r12), %ebx")
#define XCHG_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X5D, 0X00 # xchgl (%r13), %ebx")
#define XCHG_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X1E # xchgl (%r14), %ebx")
#define XCHG_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X1F # xchgl (%r15), %ebx")
#define XCHG_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X18 # xchgl (%eax), %ebx")
#define XCHG_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X1B # xchgl (%ebx), %ebx")
#define XCHG_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X19 # xchgl (%ecx), %ebx")
#define XCHG_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X1A # xchgl (%edx), %ebx")
#define XCHG_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X1F # xchgl (%edi), %ebx")
#define XCHG_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X1E # xchgl (%esi), %ebx")
#define XCHG_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X5D, 0X00 # xchgl (%ebp), %ebx")
#define XCHG_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X1C, 0X24 # xchgl (%esp), %ebx")

#define XCHG_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X08 # xchgl (%rax), %ecx")
#define XCHG_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X0B # xchgl (%rbx), %ecx")
#define XCHG_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X09 # xchgl (%rcx), %ecx")
#define XCHG_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X0A # xchgl (%rdx), %ecx")
#define XCHG_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X0F # xchgl (%rdi), %ecx")
#define XCHG_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X0E # xchgl (%rsi), %ecx")
#define XCHG_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X4D, 0X00 # xchgl (%rbp), %ecx")
#define XCHG_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X0C, 0X24 # xchgl (%rsp), %ecx")
#define XCHG_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X08 # xchgl (%r8), %ecx")
#define XCHG_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X09 # xchgl (%r9), %ecx")
#define XCHG_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X0A # xchgl (%r10), %ecx")
#define XCHG_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X0B # xchgl (%r11), %ecx")
#define XCHG_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X0C, 0X24 # xchgl (%r12), %ecx")
#define XCHG_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X4D, 0X00 # xchgl (%r13), %ecx")
#define XCHG_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X0E # xchgl (%r14), %ecx")
#define XCHG_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X0F # xchgl (%r15), %ecx")
#define XCHG_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X08 # xchgl (%eax), %ecx")
#define XCHG_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X0B # xchgl (%ebx), %ecx")
#define XCHG_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X09 # xchgl (%ecx), %ecx")
#define XCHG_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X0A # xchgl (%edx), %ecx")
#define XCHG_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X0F # xchgl (%edi), %ecx")
#define XCHG_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X0E # xchgl (%esi), %ecx")
#define XCHG_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X4D, 0X00 # xchgl (%ebp), %ecx")
#define XCHG_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X0C, 0X24 # xchgl (%esp), %ecx")

#define XCHG_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X10 # xchgl (%rax), %edx")
#define XCHG_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X13 # xchgl (%rbx), %edx")
#define XCHG_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X11 # xchgl (%rcx), %edx")
#define XCHG_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X12 # xchgl (%rdx), %edx")
#define XCHG_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X17 # xchgl (%rdi), %edx")
#define XCHG_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X16 # xchgl (%rsi), %edx")
#define XCHG_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X55, 0X00 # xchgl (%rbp), %edx")
#define XCHG_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X14, 0X24 # xchgl (%rsp), %edx")
#define XCHG_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X10 # xchgl (%r8), %edx")
#define XCHG_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X11 # xchgl (%r9), %edx")
#define XCHG_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X12 # xchgl (%r10), %edx")
#define XCHG_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X13 # xchgl (%r11), %edx")
#define XCHG_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X14, 0X24 # xchgl (%r12), %edx")
#define XCHG_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X55, 0X00 # xchgl (%r13), %edx")
#define XCHG_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X16 # xchgl (%r14), %edx")
#define XCHG_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X17 # xchgl (%r15), %edx")
#define XCHG_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X10 # xchgl (%eax), %edx")
#define XCHG_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X13 # xchgl (%ebx), %edx")
#define XCHG_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X11 # xchgl (%ecx), %edx")
#define XCHG_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X12 # xchgl (%edx), %edx")
#define XCHG_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X17 # xchgl (%edi), %edx")
#define XCHG_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X16 # xchgl (%esi), %edx")
#define XCHG_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X55, 0X00 # xchgl (%ebp), %edx")
#define XCHG_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X14, 0X24 # xchgl (%esp), %edx")

#define XCHG_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X38 # xchgl (%rax), %edi")
#define XCHG_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X3B # xchgl (%rbx), %edi")
#define XCHG_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X39 # xchgl (%rcx), %edi")
#define XCHG_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X3A # xchgl (%rdx), %edi")
#define XCHG_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X3F # xchgl (%rdi), %edi")
#define XCHG_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X3E # xchgl (%rsi), %edi")
#define XCHG_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X7D, 0X00 # xchgl (%rbp), %edi")
#define XCHG_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X3C, 0X24 # xchgl (%rsp), %edi")
#define XCHG_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X38 # xchgl (%r8), %edi")
#define XCHG_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X39 # xchgl (%r9), %edi")
#define XCHG_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X3A # xchgl (%r10), %edi")
#define XCHG_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X3B # xchgl (%r11), %edi")
#define XCHG_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X3C, 0X24 # xchgl (%r12), %edi")
#define XCHG_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X7D, 0X00 # xchgl (%r13), %edi")
#define XCHG_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X3E # xchgl (%r14), %edi")
#define XCHG_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X3F # xchgl (%r15), %edi")
#define XCHG_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X38 # xchgl (%eax), %edi")
#define XCHG_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X3B # xchgl (%ebx), %edi")
#define XCHG_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X39 # xchgl (%ecx), %edi")
#define XCHG_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X3A # xchgl (%edx), %edi")
#define XCHG_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X3F # xchgl (%edi), %edi")
#define XCHG_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X3E # xchgl (%esi), %edi")
#define XCHG_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X7D, 0X00 # xchgl (%ebp), %edi")
#define XCHG_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X3C, 0X24 # xchgl (%esp), %edi")

#define XCHG_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X30 # xchgl (%rax), %esi")
#define XCHG_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X33 # xchgl (%rbx), %esi")
#define XCHG_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X31 # xchgl (%rcx), %esi")
#define XCHG_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X32 # xchgl (%rdx), %esi")
#define XCHG_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X37 # xchgl (%rdi), %esi")
#define XCHG_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X36 # xchgl (%rsi), %esi")
#define XCHG_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X75, 0X00 # xchgl (%rbp), %esi")
#define XCHG_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X34, 0X24 # xchgl (%rsp), %esi")
#define XCHG_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X30 # xchgl (%r8), %esi")
#define XCHG_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X31 # xchgl (%r9), %esi")
#define XCHG_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X32 # xchgl (%r10), %esi")
#define XCHG_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X33 # xchgl (%r11), %esi")
#define XCHG_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X34, 0X24 # xchgl (%r12), %esi")
#define XCHG_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X75, 0X00 # xchgl (%r13), %esi")
#define XCHG_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X36 # xchgl (%r14), %esi")
#define XCHG_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X37 # xchgl (%r15), %esi")
#define XCHG_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X30 # xchgl (%eax), %esi")
#define XCHG_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X33 # xchgl (%ebx), %esi")
#define XCHG_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X31 # xchgl (%ecx), %esi")
#define XCHG_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X32 # xchgl (%edx), %esi")
#define XCHG_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X37 # xchgl (%edi), %esi")
#define XCHG_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X36 # xchgl (%esi), %esi")
#define XCHG_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X75, 0X00 # xchgl (%ebp), %esi")
#define XCHG_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X34, 0X24 # xchgl (%esp), %esi")

#define XCHG_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X28 # xchgl (%rax), %ebp")
#define XCHG_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X2B # xchgl (%rbx), %ebp")
#define XCHG_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X29 # xchgl (%rcx), %ebp")
#define XCHG_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X2A # xchgl (%rdx), %ebp")
#define XCHG_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X2F # xchgl (%rdi), %ebp")
#define XCHG_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X2E # xchgl (%rsi), %ebp")
#define XCHG_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X6D, 0X00 # xchgl (%rbp), %ebp")
#define XCHG_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X2C, 0X24 # xchgl (%rsp), %ebp")
#define XCHG_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X28 # xchgl (%r8), %ebp")
#define XCHG_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X29 # xchgl (%r9), %ebp")
#define XCHG_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X2A # xchgl (%r10), %ebp")
#define XCHG_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X2B # xchgl (%r11), %ebp")
#define XCHG_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X2C, 0X24 # xchgl (%r12), %ebp")
#define XCHG_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X6D, 0X00 # xchgl (%r13), %ebp")
#define XCHG_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X2E # xchgl (%r14), %ebp")
#define XCHG_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X2F # xchgl (%r15), %ebp")
#define XCHG_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X28 # xchgl (%eax), %ebp")
#define XCHG_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X2B # xchgl (%ebx), %ebp")
#define XCHG_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X29 # xchgl (%ecx), %ebp")
#define XCHG_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X2A # xchgl (%edx), %ebp")
#define XCHG_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X2F # xchgl (%edi), %ebp")
#define XCHG_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X2E # xchgl (%esi), %ebp")
#define XCHG_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X6D, 0X00 # xchgl (%ebp), %ebp")
#define XCHG_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X2C, 0X24 # xchgl (%esp), %ebp")

#define XCHG_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X87, 0X20 # xchgl (%rax), %esp")
#define XCHG_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X87, 0X23 # xchgl (%rbx), %esp")
#define XCHG_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X87, 0X21 # xchgl (%rcx), %esp")
#define XCHG_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X87, 0X22 # xchgl (%rdx), %esp")
#define XCHG_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X87, 0X27 # xchgl (%rdi), %esp")
#define XCHG_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X87, 0X26 # xchgl (%rsi), %esp")
#define XCHG_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X87, 0X65, 0X00 # xchgl (%rbp), %esp")
#define XCHG_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X87, 0X24, 0X24 # xchgl (%rsp), %esp")
#define XCHG_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X20 # xchgl (%r8), %esp")
#define XCHG_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X21 # xchgl (%r9), %esp")
#define XCHG_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X22 # xchgl (%r10), %esp")
#define XCHG_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X23 # xchgl (%r11), %esp")
#define XCHG_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X24, 0X24 # xchgl (%r12), %esp")
#define XCHG_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X65, 0X00 # xchgl (%r13), %esp")
#define XCHG_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X26 # xchgl (%r14), %esp")
#define XCHG_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X27 # xchgl (%r15), %esp")
#define XCHG_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X20 # xchgl (%eax), %esp")
#define XCHG_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X23 # xchgl (%ebx), %esp")
#define XCHG_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X21 # xchgl (%ecx), %esp")
#define XCHG_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X22 # xchgl (%edx), %esp")
#define XCHG_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X27 # xchgl (%edi), %esp")
#define XCHG_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X26 # xchgl (%esi), %esp")
#define XCHG_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X65, 0X00 # xchgl (%ebp), %esp")
#define XCHG_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X24, 0X24 # xchgl (%esp), %esp")

#define XCHG_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X00 # xchgl (%rax), %r8d")
#define XCHG_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X03 # xchgl (%rbx), %r8d")
#define XCHG_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X01 # xchgl (%rcx), %r8d")
#define XCHG_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X02 # xchgl (%rdx), %r8d")
#define XCHG_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X07 # xchgl (%rdi), %r8d")
#define XCHG_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X06 # xchgl (%rsi), %r8d")
#define XCHG_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X45, 0X00 # xchgl (%rbp), %r8d")
#define XCHG_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X04, 0X24 # xchgl (%rsp), %r8d")
#define XCHG_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X00 # xchgl (%r8), %r8d")
#define XCHG_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X01 # xchgl (%r9), %r8d")
#define XCHG_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X02 # xchgl (%r10), %r8d")
#define XCHG_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X03 # xchgl (%r11), %r8d")
#define XCHG_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X04, 0X24 # xchgl (%r12), %r8d")
#define XCHG_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X45, 0X00 # xchgl (%r13), %r8d")
#define XCHG_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X06 # xchgl (%r14), %r8d")
#define XCHG_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X07 # xchgl (%r15), %r8d")
#define XCHG_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X00 # xchgl (%eax), %r8d")
#define XCHG_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X03 # xchgl (%ebx), %r8d")
#define XCHG_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X01 # xchgl (%ecx), %r8d")
#define XCHG_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X02 # xchgl (%edx), %r8d")
#define XCHG_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X07 # xchgl (%edi), %r8d")
#define XCHG_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X06 # xchgl (%esi), %r8d")
#define XCHG_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X45, 0X00 # xchgl (%ebp), %r8d")
#define XCHG_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X04, 0X24 # xchgl (%esp), %r8d")

#define XCHG_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X08 # xchgl (%rax), %r9d")
#define XCHG_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X0B # xchgl (%rbx), %r9d")
#define XCHG_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X09 # xchgl (%rcx), %r9d")
#define XCHG_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X0A # xchgl (%rdx), %r9d")
#define XCHG_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X0F # xchgl (%rdi), %r9d")
#define XCHG_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X0E # xchgl (%rsi), %r9d")
#define XCHG_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X4D, 0X00 # xchgl (%rbp), %r9d")
#define XCHG_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X0C, 0X24 # xchgl (%rsp), %r9d")
#define XCHG_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X08 # xchgl (%r8), %r9d")
#define XCHG_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X09 # xchgl (%r9), %r9d")
#define XCHG_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X0A # xchgl (%r10), %r9d")
#define XCHG_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X0B # xchgl (%r11), %r9d")
#define XCHG_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X0C, 0X24 # xchgl (%r12), %r9d")
#define XCHG_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X4D, 0X00 # xchgl (%r13), %r9d")
#define XCHG_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X0E # xchgl (%r14), %r9d")
#define XCHG_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X0F # xchgl (%r15), %r9d")
#define XCHG_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X08 # xchgl (%eax), %r9d")
#define XCHG_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0B # xchgl (%ebx), %r9d")
#define XCHG_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X09 # xchgl (%ecx), %r9d")
#define XCHG_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0A # xchgl (%edx), %r9d")
#define XCHG_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0F # xchgl (%edi), %r9d")
#define XCHG_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0E # xchgl (%esi), %r9d")
#define XCHG_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X4D, 0X00 # xchgl (%ebp), %r9d")
#define XCHG_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0C, 0X24 # xchgl (%esp), %r9d")

#define XCHG_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X10 # xchgl (%rax), %r10d")
#define XCHG_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X13 # xchgl (%rbx), %r10d")
#define XCHG_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X11 # xchgl (%rcx), %r10d")
#define XCHG_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X12 # xchgl (%rdx), %r10d")
#define XCHG_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X17 # xchgl (%rdi), %r10d")
#define XCHG_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X16 # xchgl (%rsi), %r10d")
#define XCHG_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X55, 0X00 # xchgl (%rbp), %r10d")
#define XCHG_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X14, 0X24 # xchgl (%rsp), %r10d")
#define XCHG_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X10 # xchgl (%r8), %r10d")
#define XCHG_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X11 # xchgl (%r9), %r10d")
#define XCHG_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X12 # xchgl (%r10), %r10d")
#define XCHG_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X13 # xchgl (%r11), %r10d")
#define XCHG_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X14, 0X24 # xchgl (%r12), %r10d")
#define XCHG_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X55, 0X00 # xchgl (%r13), %r10d")
#define XCHG_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X16 # xchgl (%r14), %r10d")
#define XCHG_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X17 # xchgl (%r15), %r10d")
#define XCHG_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X10 # xchgl (%eax), %r10d")
#define XCHG_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X13 # xchgl (%ebx), %r10d")
#define XCHG_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X11 # xchgl (%ecx), %r10d")
#define XCHG_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X12 # xchgl (%edx), %r10d")
#define XCHG_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X17 # xchgl (%edi), %r10d")
#define XCHG_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X16 # xchgl (%esi), %r10d")
#define XCHG_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X55, 0X00 # xchgl (%ebp), %r10d")
#define XCHG_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X14, 0X24 # xchgl (%esp), %r10d")

#define XCHG_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X18 # xchgl (%rax), %r11d")
#define XCHG_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X1B # xchgl (%rbx), %r11d")
#define XCHG_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X19 # xchgl (%rcx), %r11d")
#define XCHG_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X1A # xchgl (%rdx), %r11d")
#define XCHG_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X1F # xchgl (%rdi), %r11d")
#define XCHG_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X1E # xchgl (%rsi), %r11d")
#define XCHG_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X5D, 0X00 # xchgl (%rbp), %r11d")
#define XCHG_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X1C, 0X24 # xchgl (%rsp), %r11d")
#define XCHG_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X18 # xchgl (%r8), %r11d")
#define XCHG_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X19 # xchgl (%r9), %r11d")
#define XCHG_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X1A # xchgl (%r10), %r11d")
#define XCHG_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X1B # xchgl (%r11), %r11d")
#define XCHG_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X1C, 0X24 # xchgl (%r12), %r11d")
#define XCHG_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X5D, 0X00 # xchgl (%r13), %r11d")
#define XCHG_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X1E # xchgl (%r14), %r11d")
#define XCHG_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X1F # xchgl (%r15), %r11d")
#define XCHG_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X18 # xchgl (%eax), %r11d")
#define XCHG_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1B # xchgl (%ebx), %r11d")
#define XCHG_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X19 # xchgl (%ecx), %r11d")
#define XCHG_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1A # xchgl (%edx), %r11d")
#define XCHG_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1F # xchgl (%edi), %r11d")
#define XCHG_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1E # xchgl (%esi), %r11d")
#define XCHG_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X5D, 0X00 # xchgl (%ebp), %r11d")
#define XCHG_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1C, 0X24 # xchgl (%esp), %r11d")

#define XCHG_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X20 # xchgl (%rax), %r12d")
#define XCHG_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X23 # xchgl (%rbx), %r12d")
#define XCHG_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X21 # xchgl (%rcx), %r12d")
#define XCHG_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X22 # xchgl (%rdx), %r12d")
#define XCHG_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X27 # xchgl (%rdi), %r12d")
#define XCHG_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X26 # xchgl (%rsi), %r12d")
#define XCHG_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X65, 0X00 # xchgl (%rbp), %r12d")
#define XCHG_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X24, 0X24 # xchgl (%rsp), %r12d")
#define XCHG_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X20 # xchgl (%r8), %r12d")
#define XCHG_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X21 # xchgl (%r9), %r12d")
#define XCHG_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X22 # xchgl (%r10), %r12d")
#define XCHG_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X23 # xchgl (%r11), %r12d")
#define XCHG_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X24, 0X24 # xchgl (%r12), %r12d")
#define XCHG_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X65, 0X00 # xchgl (%r13), %r12d")
#define XCHG_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X26 # xchgl (%r14), %r12d")
#define XCHG_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X27 # xchgl (%r15), %r12d")
#define XCHG_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X20 # xchgl (%eax), %r12d")
#define XCHG_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X23 # xchgl (%ebx), %r12d")
#define XCHG_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X21 # xchgl (%ecx), %r12d")
#define XCHG_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X22 # xchgl (%edx), %r12d")
#define XCHG_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X27 # xchgl (%edi), %r12d")
#define XCHG_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X26 # xchgl (%esi), %r12d")
#define XCHG_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X65, 0X00 # xchgl (%ebp), %r12d")
#define XCHG_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X24, 0X24 # xchgl (%esp), %r12d")

#define XCHG_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X28 # xchgl (%rax), %r13d")
#define XCHG_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X2B # xchgl (%rbx), %r13d")
#define XCHG_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X29 # xchgl (%rcx), %r13d")
#define XCHG_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X2A # xchgl (%rdx), %r13d")
#define XCHG_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X2F # xchgl (%rdi), %r13d")
#define XCHG_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X2E # xchgl (%rsi), %r13d")
#define XCHG_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X6D, 0X00 # xchgl (%rbp), %r13d")
#define XCHG_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X2C, 0X24 # xchgl (%rsp), %r13d")
#define XCHG_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X28 # xchgl (%r8), %r13d")
#define XCHG_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X29 # xchgl (%r9), %r13d")
#define XCHG_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X2A # xchgl (%r10), %r13d")
#define XCHG_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X2B # xchgl (%r11), %r13d")
#define XCHG_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X2C, 0X24 # xchgl (%r12), %r13d")
#define XCHG_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X6D, 0X00 # xchgl (%r13), %r13d")
#define XCHG_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X2E # xchgl (%r14), %r13d")
#define XCHG_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X2F # xchgl (%r15), %r13d")
#define XCHG_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X28 # xchgl (%eax), %r13d")
#define XCHG_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2B # xchgl (%ebx), %r13d")
#define XCHG_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X29 # xchgl (%ecx), %r13d")
#define XCHG_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2A # xchgl (%edx), %r13d")
#define XCHG_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2F # xchgl (%edi), %r13d")
#define XCHG_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2E # xchgl (%esi), %r13d")
#define XCHG_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X6D, 0X00 # xchgl (%ebp), %r13d")
#define XCHG_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2C, 0X24 # xchgl (%esp), %r13d")

#define XCHG_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X30 # xchgl (%rax), %r14d")
#define XCHG_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X33 # xchgl (%rbx), %r14d")
#define XCHG_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X31 # xchgl (%rcx), %r14d")
#define XCHG_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X32 # xchgl (%rdx), %r14d")
#define XCHG_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X37 # xchgl (%rdi), %r14d")
#define XCHG_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X36 # xchgl (%rsi), %r14d")
#define XCHG_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X75, 0X00 # xchgl (%rbp), %r14d")
#define XCHG_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X34, 0X24 # xchgl (%rsp), %r14d")
#define XCHG_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X30 # xchgl (%r8), %r14d")
#define XCHG_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X31 # xchgl (%r9), %r14d")
#define XCHG_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X32 # xchgl (%r10), %r14d")
#define XCHG_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X33 # xchgl (%r11), %r14d")
#define XCHG_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X34, 0X24 # xchgl (%r12), %r14d")
#define XCHG_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X75, 0X00 # xchgl (%r13), %r14d")
#define XCHG_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X36 # xchgl (%r14), %r14d")
#define XCHG_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X37 # xchgl (%r15), %r14d")
#define XCHG_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X30 # xchgl (%eax), %r14d")
#define XCHG_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X33 # xchgl (%ebx), %r14d")
#define XCHG_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X31 # xchgl (%ecx), %r14d")
#define XCHG_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X32 # xchgl (%edx), %r14d")
#define XCHG_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X37 # xchgl (%edi), %r14d")
#define XCHG_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X36 # xchgl (%esi), %r14d")
#define XCHG_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X75, 0X00 # xchgl (%ebp), %r14d")
#define XCHG_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X34, 0X24 # xchgl (%esp), %r14d")

#define XCHG_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X38 # xchgl (%rax), %r15d")
#define XCHG_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X3B # xchgl (%rbx), %r15d")
#define XCHG_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X39 # xchgl (%rcx), %r15d")
#define XCHG_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X3A # xchgl (%rdx), %r15d")
#define XCHG_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X3F # xchgl (%rdi), %r15d")
#define XCHG_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X3E # xchgl (%rsi), %r15d")
#define XCHG_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X7D, 0X00 # xchgl (%rbp), %r15d")
#define XCHG_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X3C, 0X24 # xchgl (%rsp), %r15d")
#define XCHG_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X38 # xchgl (%r8), %r15d")
#define XCHG_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X39 # xchgl (%r9), %r15d")
#define XCHG_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X3A # xchgl (%r10), %r15d")
#define XCHG_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X3B # xchgl (%r11), %r15d")
#define XCHG_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X3C, 0X24 # xchgl (%r12), %r15d")
#define XCHG_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X7D, 0X00 # xchgl (%r13), %r15d")
#define XCHG_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X3E # xchgl (%r14), %r15d")
#define XCHG_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X3F # xchgl (%r15), %r15d")
#define XCHG_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X38 # xchgl (%eax), %r15d")
#define XCHG_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3B # xchgl (%ebx), %r15d")
#define XCHG_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X39 # xchgl (%ecx), %r15d")
#define XCHG_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3A # xchgl (%edx), %r15d")
#define XCHG_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3F # xchgl (%edi), %r15d")
#define XCHG_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3E # xchgl (%esi), %r15d")
#define XCHG_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X7D, 0X00 # xchgl (%ebp), %r15d")
#define XCHG_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3C, 0X24 # xchgl (%esp), %r15d")

#define XCHG_EAX_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X00 # xchgl %eax, (%rax)")
#define XCHG_EAX_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X03 # xchgl %eax, (%rbx)")
#define XCHG_EAX_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X01 # xchgl %eax, (%rcx)")
#define XCHG_EAX_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X02 # xchgl %eax, (%rdx)")
#define XCHG_EAX_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X07 # xchgl %eax, (%rdi)")
#define XCHG_EAX_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X06 # xchgl %eax, (%rsi)")
#define XCHG_EAX_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X45, 0X00 # xchgl %eax, (%rbp)")
#define XCHG_EAX_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X04, 0X24 # xchgl %eax, (%rsp)")
#define XCHG_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X00 # xchgl %eax, (%r8)")
#define XCHG_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X01 # xchgl %eax, (%r9)")
#define XCHG_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X02 # xchgl %eax, (%r10)")
#define XCHG_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X03 # xchgl %eax, (%r11)")
#define XCHG_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X04, 0X24 # xchgl %eax, (%r12)")
#define XCHG_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X45, 0X00 # xchgl %eax, (%r13)")
#define XCHG_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X06 # xchgl %eax, (%r14)")
#define XCHG_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X07 # xchgl %eax, (%r15)")
#define XCHG_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X00 # xchgl %eax, (%eax)")
#define XCHG_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X03 # xchgl %eax, (%ebx)")
#define XCHG_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X01 # xchgl %eax, (%ecx)")
#define XCHG_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X02 # xchgl %eax, (%edx)")
#define XCHG_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X07 # xchgl %eax, (%edi)")
#define XCHG_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X06 # xchgl %eax, (%esi)")
#define XCHG_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X45, 0X00 # xchgl %eax, (%ebp)")
#define XCHG_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X04, 0X24 # xchgl %eax, (%esp)")

#define XCHG_EBX_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X18 # xchgl %ebx, (%rax)")
#define XCHG_EBX_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X1B # xchgl %ebx, (%rbx)")
#define XCHG_EBX_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X19 # xchgl %ebx, (%rcx)")
#define XCHG_EBX_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X1A # xchgl %ebx, (%rdx)")
#define XCHG_EBX_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X1F # xchgl %ebx, (%rdi)")
#define XCHG_EBX_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X1E # xchgl %ebx, (%rsi)")
#define XCHG_EBX_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X5D, 0X00 # xchgl %ebx, (%rbp)")
#define XCHG_EBX_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X1C, 0X24 # xchgl %ebx, (%rsp)")
#define XCHG_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X18 # xchgl %ebx, (%r8)")
#define XCHG_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X19 # xchgl %ebx, (%r9)")
#define XCHG_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X1A # xchgl %ebx, (%r10)")
#define XCHG_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X1B # xchgl %ebx, (%r11)")
#define XCHG_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X1C, 0X24 # xchgl %ebx, (%r12)")
#define XCHG_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X5D, 0X00 # xchgl %ebx, (%r13)")
#define XCHG_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X1E # xchgl %ebx, (%r14)")
#define XCHG_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X1F # xchgl %ebx, (%r15)")
#define XCHG_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X18 # xchgl %ebx, (%eax)")
#define XCHG_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X1B # xchgl %ebx, (%ebx)")
#define XCHG_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X19 # xchgl %ebx, (%ecx)")
#define XCHG_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X1A # xchgl %ebx, (%edx)")
#define XCHG_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X1F # xchgl %ebx, (%edi)")
#define XCHG_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X1E # xchgl %ebx, (%esi)")
#define XCHG_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X5D, 0X00 # xchgl %ebx, (%ebp)")
#define XCHG_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X1C, 0X24 # xchgl %ebx, (%esp)")

#define XCHG_ECX_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X08 # xchgl %ecx, (%rax)")
#define XCHG_ECX_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X0B # xchgl %ecx, (%rbx)")
#define XCHG_ECX_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X09 # xchgl %ecx, (%rcx)")
#define XCHG_ECX_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X0A # xchgl %ecx, (%rdx)")
#define XCHG_ECX_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X0F # xchgl %ecx, (%rdi)")
#define XCHG_ECX_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X0E # xchgl %ecx, (%rsi)")
#define XCHG_ECX_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X4D, 0X00 # xchgl %ecx, (%rbp)")
#define XCHG_ECX_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X0C, 0X24 # xchgl %ecx, (%rsp)")
#define XCHG_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X08 # xchgl %ecx, (%r8)")
#define XCHG_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X09 # xchgl %ecx, (%r9)")
#define XCHG_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X0A # xchgl %ecx, (%r10)")
#define XCHG_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X0B # xchgl %ecx, (%r11)")
#define XCHG_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X0C, 0X24 # xchgl %ecx, (%r12)")
#define XCHG_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X4D, 0X00 # xchgl %ecx, (%r13)")
#define XCHG_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X0E # xchgl %ecx, (%r14)")
#define XCHG_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X0F # xchgl %ecx, (%r15)")
#define XCHG_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X08 # xchgl %ecx, (%eax)")
#define XCHG_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X0B # xchgl %ecx, (%ebx)")
#define XCHG_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X09 # xchgl %ecx, (%ecx)")
#define XCHG_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X0A # xchgl %ecx, (%edx)")
#define XCHG_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X0F # xchgl %ecx, (%edi)")
#define XCHG_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X0E # xchgl %ecx, (%esi)")
#define XCHG_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X4D, 0X00 # xchgl %ecx, (%ebp)")
#define XCHG_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X0C, 0X24 # xchgl %ecx, (%esp)")

#define XCHG_EDX_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X10 # xchgl %edx, (%rax)")
#define XCHG_EDX_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X13 # xchgl %edx, (%rbx)")
#define XCHG_EDX_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X11 # xchgl %edx, (%rcx)")
#define XCHG_EDX_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X12 # xchgl %edx, (%rdx)")
#define XCHG_EDX_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X17 # xchgl %edx, (%rdi)")
#define XCHG_EDX_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X16 # xchgl %edx, (%rsi)")
#define XCHG_EDX_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X55, 0X00 # xchgl %edx, (%rbp)")
#define XCHG_EDX_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X14, 0X24 # xchgl %edx, (%rsp)")
#define XCHG_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X10 # xchgl %edx, (%r8)")
#define XCHG_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X11 # xchgl %edx, (%r9)")
#define XCHG_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X12 # xchgl %edx, (%r10)")
#define XCHG_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X13 # xchgl %edx, (%r11)")
#define XCHG_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X14, 0X24 # xchgl %edx, (%r12)")
#define XCHG_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X55, 0X00 # xchgl %edx, (%r13)")
#define XCHG_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X16 # xchgl %edx, (%r14)")
#define XCHG_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X17 # xchgl %edx, (%r15)")
#define XCHG_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X10 # xchgl %edx, (%eax)")
#define XCHG_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X13 # xchgl %edx, (%ebx)")
#define XCHG_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X11 # xchgl %edx, (%ecx)")
#define XCHG_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X12 # xchgl %edx, (%edx)")
#define XCHG_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X17 # xchgl %edx, (%edi)")
#define XCHG_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X16 # xchgl %edx, (%esi)")
#define XCHG_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X55, 0X00 # xchgl %edx, (%ebp)")
#define XCHG_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X14, 0X24 # xchgl %edx, (%esp)")

#define XCHG_EDI_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X38 # xchgl %edi, (%rax)")
#define XCHG_EDI_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X3B # xchgl %edi, (%rbx)")
#define XCHG_EDI_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X39 # xchgl %edi, (%rcx)")
#define XCHG_EDI_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X3A # xchgl %edi, (%rdx)")
#define XCHG_EDI_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X3F # xchgl %edi, (%rdi)")
#define XCHG_EDI_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X3E # xchgl %edi, (%rsi)")
#define XCHG_EDI_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X7D, 0X00 # xchgl %edi, (%rbp)")
#define XCHG_EDI_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X3C, 0X24 # xchgl %edi, (%rsp)")
#define XCHG_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X38 # xchgl %edi, (%r8)")
#define XCHG_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X39 # xchgl %edi, (%r9)")
#define XCHG_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X3A # xchgl %edi, (%r10)")
#define XCHG_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X3B # xchgl %edi, (%r11)")
#define XCHG_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X3C, 0X24 # xchgl %edi, (%r12)")
#define XCHG_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X7D, 0X00 # xchgl %edi, (%r13)")
#define XCHG_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X3E # xchgl %edi, (%r14)")
#define XCHG_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X3F # xchgl %edi, (%r15)")
#define XCHG_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X38 # xchgl %edi, (%eax)")
#define XCHG_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X3B # xchgl %edi, (%ebx)")
#define XCHG_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X39 # xchgl %edi, (%ecx)")
#define XCHG_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X3A # xchgl %edi, (%edx)")
#define XCHG_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X3F # xchgl %edi, (%edi)")
#define XCHG_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X3E # xchgl %edi, (%esi)")
#define XCHG_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X7D, 0X00 # xchgl %edi, (%ebp)")
#define XCHG_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X3C, 0X24 # xchgl %edi, (%esp)")

#define XCHG_ESI_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X30 # xchgl %esi, (%rax)")
#define XCHG_ESI_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X33 # xchgl %esi, (%rbx)")
#define XCHG_ESI_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X31 # xchgl %esi, (%rcx)")
#define XCHG_ESI_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X32 # xchgl %esi, (%rdx)")
#define XCHG_ESI_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X37 # xchgl %esi, (%rdi)")
#define XCHG_ESI_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X36 # xchgl %esi, (%rsi)")
#define XCHG_ESI_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X75, 0X00 # xchgl %esi, (%rbp)")
#define XCHG_ESI_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X34, 0X24 # xchgl %esi, (%rsp)")
#define XCHG_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X30 # xchgl %esi, (%r8)")
#define XCHG_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X31 # xchgl %esi, (%r9)")
#define XCHG_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X32 # xchgl %esi, (%r10)")
#define XCHG_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X33 # xchgl %esi, (%r11)")
#define XCHG_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X34, 0X24 # xchgl %esi, (%r12)")
#define XCHG_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X75, 0X00 # xchgl %esi, (%r13)")
#define XCHG_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X36 # xchgl %esi, (%r14)")
#define XCHG_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X37 # xchgl %esi, (%r15)")
#define XCHG_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X30 # xchgl %esi, (%eax)")
#define XCHG_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X33 # xchgl %esi, (%ebx)")
#define XCHG_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X31 # xchgl %esi, (%ecx)")
#define XCHG_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X32 # xchgl %esi, (%edx)")
#define XCHG_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X37 # xchgl %esi, (%edi)")
#define XCHG_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X36 # xchgl %esi, (%esi)")
#define XCHG_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X75, 0X00 # xchgl %esi, (%ebp)")
#define XCHG_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X34, 0X24 # xchgl %esi, (%esp)")

#define XCHG_EBP_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X28 # xchgl %ebp, (%rax)")
#define XCHG_EBP_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X2B # xchgl %ebp, (%rbx)")
#define XCHG_EBP_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X29 # xchgl %ebp, (%rcx)")
#define XCHG_EBP_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X2A # xchgl %ebp, (%rdx)")
#define XCHG_EBP_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X2F # xchgl %ebp, (%rdi)")
#define XCHG_EBP_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X2E # xchgl %ebp, (%rsi)")
#define XCHG_EBP_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X6D, 0X00 # xchgl %ebp, (%rbp)")
#define XCHG_EBP_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X2C, 0X24 # xchgl %ebp, (%rsp)")
#define XCHG_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X28 # xchgl %ebp, (%r8)")
#define XCHG_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X29 # xchgl %ebp, (%r9)")
#define XCHG_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X2A # xchgl %ebp, (%r10)")
#define XCHG_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X2B # xchgl %ebp, (%r11)")
#define XCHG_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X2C, 0X24 # xchgl %ebp, (%r12)")
#define XCHG_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X6D, 0X00 # xchgl %ebp, (%r13)")
#define XCHG_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X2E # xchgl %ebp, (%r14)")
#define XCHG_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X2F # xchgl %ebp, (%r15)")
#define XCHG_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X28 # xchgl %ebp, (%eax)")
#define XCHG_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X2B # xchgl %ebp, (%ebx)")
#define XCHG_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X29 # xchgl %ebp, (%ecx)")
#define XCHG_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X2A # xchgl %ebp, (%edx)")
#define XCHG_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X2F # xchgl %ebp, (%edi)")
#define XCHG_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X2E # xchgl %ebp, (%esi)")
#define XCHG_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X6D, 0X00 # xchgl %ebp, (%ebp)")
#define XCHG_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X2C, 0X24 # xchgl %ebp, (%esp)")

#define XCHG_ESP_TO_PTR_RAX CMT_ASM(".byte 0X87, 0X20 # xchgl %esp, (%rax)")
#define XCHG_ESP_TO_PTR_RBX CMT_ASM(".byte 0X87, 0X23 # xchgl %esp, (%rbx)")
#define XCHG_ESP_TO_PTR_RCX CMT_ASM(".byte 0X87, 0X21 # xchgl %esp, (%rcx)")
#define XCHG_ESP_TO_PTR_RDX CMT_ASM(".byte 0X87, 0X22 # xchgl %esp, (%rdx)")
#define XCHG_ESP_TO_PTR_RDI CMT_ASM(".byte 0X87, 0X27 # xchgl %esp, (%rdi)")
#define XCHG_ESP_TO_PTR_RSI CMT_ASM(".byte 0X87, 0X26 # xchgl %esp, (%rsi)")
#define XCHG_ESP_TO_PTR_RBP CMT_ASM(".byte 0X87, 0X65, 0X00 # xchgl %esp, (%rbp)")
#define XCHG_ESP_TO_PTR_RSP CMT_ASM(".byte 0X87, 0X24, 0X24 # xchgl %esp, (%rsp)")
#define XCHG_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X87, 0X20 # xchgl %esp, (%r8)")
#define XCHG_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X87, 0X21 # xchgl %esp, (%r9)")
#define XCHG_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X87, 0X22 # xchgl %esp, (%r10)")
#define XCHG_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X87, 0X23 # xchgl %esp, (%r11)")
#define XCHG_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X87, 0X24, 0X24 # xchgl %esp, (%r12)")
#define XCHG_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X87, 0X65, 0X00 # xchgl %esp, (%r13)")
#define XCHG_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X87, 0X26 # xchgl %esp, (%r14)")
#define XCHG_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X87, 0X27 # xchgl %esp, (%r15)")
#define XCHG_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X87, 0X20 # xchgl %esp, (%eax)")
#define XCHG_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X87, 0X23 # xchgl %esp, (%ebx)")
#define XCHG_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X87, 0X21 # xchgl %esp, (%ecx)")
#define XCHG_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X87, 0X22 # xchgl %esp, (%edx)")
#define XCHG_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X87, 0X27 # xchgl %esp, (%edi)")
#define XCHG_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X87, 0X26 # xchgl %esp, (%esi)")
#define XCHG_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X87, 0X65, 0X00 # xchgl %esp, (%ebp)")
#define XCHG_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X87, 0X24, 0X24 # xchgl %esp, (%esp)")

#define XCHG_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X00 # xchgl %r8d, (%rax)")
#define XCHG_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X03 # xchgl %r8d, (%rbx)")
#define XCHG_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X01 # xchgl %r8d, (%rcx)")
#define XCHG_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X02 # xchgl %r8d, (%rdx)")
#define XCHG_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X07 # xchgl %r8d, (%rdi)")
#define XCHG_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X06 # xchgl %r8d, (%rsi)")
#define XCHG_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X45, 0X00 # xchgl %r8d, (%rbp)")
#define XCHG_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X04, 0X24 # xchgl %r8d, (%rsp)")
#define XCHG_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X00 # xchgl %r8d, (%r8)")
#define XCHG_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X01 # xchgl %r8d, (%r9)")
#define XCHG_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X02 # xchgl %r8d, (%r10)")
#define XCHG_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X03 # xchgl %r8d, (%r11)")
#define XCHG_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X04, 0X24 # xchgl %r8d, (%r12)")
#define XCHG_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X45, 0X00 # xchgl %r8d, (%r13)")
#define XCHG_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X06 # xchgl %r8d, (%r14)")
#define XCHG_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X07 # xchgl %r8d, (%r15)")
#define XCHG_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X00 # xchgl %r8d, (%eax)")
#define XCHG_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X03 # xchgl %r8d, (%ebx)")
#define XCHG_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X01 # xchgl %r8d, (%ecx)")
#define XCHG_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X02 # xchgl %r8d, (%edx)")
#define XCHG_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X07 # xchgl %r8d, (%edi)")
#define XCHG_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X06 # xchgl %r8d, (%esi)")
#define XCHG_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X45, 0X00 # xchgl %r8d, (%ebp)")
#define XCHG_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X04, 0X24 # xchgl %r8d, (%esp)")

#define XCHG_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X08 # xchgl %r9d, (%rax)")
#define XCHG_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X0B # xchgl %r9d, (%rbx)")
#define XCHG_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X09 # xchgl %r9d, (%rcx)")
#define XCHG_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X0A # xchgl %r9d, (%rdx)")
#define XCHG_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X0F # xchgl %r9d, (%rdi)")
#define XCHG_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X0E # xchgl %r9d, (%rsi)")
#define XCHG_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X4D, 0X00 # xchgl %r9d, (%rbp)")
#define XCHG_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X0C, 0X24 # xchgl %r9d, (%rsp)")
#define XCHG_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X08 # xchgl %r9d, (%r8)")
#define XCHG_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X09 # xchgl %r9d, (%r9)")
#define XCHG_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X0A # xchgl %r9d, (%r10)")
#define XCHG_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X0B # xchgl %r9d, (%r11)")
#define XCHG_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X0C, 0X24 # xchgl %r9d, (%r12)")
#define XCHG_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X4D, 0X00 # xchgl %r9d, (%r13)")
#define XCHG_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X0E # xchgl %r9d, (%r14)")
#define XCHG_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X0F # xchgl %r9d, (%r15)")
#define XCHG_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X08 # xchgl %r9d, (%eax)")
#define XCHG_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0B # xchgl %r9d, (%ebx)")
#define XCHG_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X09 # xchgl %r9d, (%ecx)")
#define XCHG_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0A # xchgl %r9d, (%edx)")
#define XCHG_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0F # xchgl %r9d, (%edi)")
#define XCHG_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0E # xchgl %r9d, (%esi)")
#define XCHG_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X4D, 0X00 # xchgl %r9d, (%ebp)")
#define XCHG_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X0C, 0X24 # xchgl %r9d, (%esp)")

#define XCHG_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X10 # xchgl %r10d, (%rax)")
#define XCHG_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X13 # xchgl %r10d, (%rbx)")
#define XCHG_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X11 # xchgl %r10d, (%rcx)")
#define XCHG_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X12 # xchgl %r10d, (%rdx)")
#define XCHG_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X17 # xchgl %r10d, (%rdi)")
#define XCHG_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X16 # xchgl %r10d, (%rsi)")
#define XCHG_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X55, 0X00 # xchgl %r10d, (%rbp)")
#define XCHG_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X14, 0X24 # xchgl %r10d, (%rsp)")
#define XCHG_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X10 # xchgl %r10d, (%r8)")
#define XCHG_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X11 # xchgl %r10d, (%r9)")
#define XCHG_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X12 # xchgl %r10d, (%r10)")
#define XCHG_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X13 # xchgl %r10d, (%r11)")
#define XCHG_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X14, 0X24 # xchgl %r10d, (%r12)")
#define XCHG_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X55, 0X00 # xchgl %r10d, (%r13)")
#define XCHG_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X16 # xchgl %r10d, (%r14)")
#define XCHG_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X17 # xchgl %r10d, (%r15)")
#define XCHG_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X10 # xchgl %r10d, (%eax)")
#define XCHG_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X13 # xchgl %r10d, (%ebx)")
#define XCHG_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X11 # xchgl %r10d, (%ecx)")
#define XCHG_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X12 # xchgl %r10d, (%edx)")
#define XCHG_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X17 # xchgl %r10d, (%edi)")
#define XCHG_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X16 # xchgl %r10d, (%esi)")
#define XCHG_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X55, 0X00 # xchgl %r10d, (%ebp)")
#define XCHG_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X14, 0X24 # xchgl %r10d, (%esp)")

#define XCHG_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X18 # xchgl %r11d, (%rax)")
#define XCHG_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X1B # xchgl %r11d, (%rbx)")
#define XCHG_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X19 # xchgl %r11d, (%rcx)")
#define XCHG_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X1A # xchgl %r11d, (%rdx)")
#define XCHG_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X1F # xchgl %r11d, (%rdi)")
#define XCHG_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X1E # xchgl %r11d, (%rsi)")
#define XCHG_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X5D, 0X00 # xchgl %r11d, (%rbp)")
#define XCHG_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X1C, 0X24 # xchgl %r11d, (%rsp)")
#define XCHG_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X18 # xchgl %r11d, (%r8)")
#define XCHG_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X19 # xchgl %r11d, (%r9)")
#define XCHG_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X1A # xchgl %r11d, (%r10)")
#define XCHG_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X1B # xchgl %r11d, (%r11)")
#define XCHG_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X1C, 0X24 # xchgl %r11d, (%r12)")
#define XCHG_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X5D, 0X00 # xchgl %r11d, (%r13)")
#define XCHG_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X1E # xchgl %r11d, (%r14)")
#define XCHG_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X1F # xchgl %r11d, (%r15)")
#define XCHG_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X18 # xchgl %r11d, (%eax)")
#define XCHG_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1B # xchgl %r11d, (%ebx)")
#define XCHG_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X19 # xchgl %r11d, (%ecx)")
#define XCHG_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1A # xchgl %r11d, (%edx)")
#define XCHG_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1F # xchgl %r11d, (%edi)")
#define XCHG_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1E # xchgl %r11d, (%esi)")
#define XCHG_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X5D, 0X00 # xchgl %r11d, (%ebp)")
#define XCHG_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X1C, 0X24 # xchgl %r11d, (%esp)")

#define XCHG_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X20 # xchgl %r12d, (%rax)")
#define XCHG_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X23 # xchgl %r12d, (%rbx)")
#define XCHG_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X21 # xchgl %r12d, (%rcx)")
#define XCHG_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X22 # xchgl %r12d, (%rdx)")
#define XCHG_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X27 # xchgl %r12d, (%rdi)")
#define XCHG_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X26 # xchgl %r12d, (%rsi)")
#define XCHG_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X65, 0X00 # xchgl %r12d, (%rbp)")
#define XCHG_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X24, 0X24 # xchgl %r12d, (%rsp)")
#define XCHG_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X20 # xchgl %r12d, (%r8)")
#define XCHG_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X21 # xchgl %r12d, (%r9)")
#define XCHG_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X22 # xchgl %r12d, (%r10)")
#define XCHG_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X23 # xchgl %r12d, (%r11)")
#define XCHG_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X24, 0X24 # xchgl %r12d, (%r12)")
#define XCHG_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X65, 0X00 # xchgl %r12d, (%r13)")
#define XCHG_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X26 # xchgl %r12d, (%r14)")
#define XCHG_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X27 # xchgl %r12d, (%r15)")
#define XCHG_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X20 # xchgl %r12d, (%eax)")
#define XCHG_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X23 # xchgl %r12d, (%ebx)")
#define XCHG_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X21 # xchgl %r12d, (%ecx)")
#define XCHG_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X22 # xchgl %r12d, (%edx)")
#define XCHG_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X27 # xchgl %r12d, (%edi)")
#define XCHG_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X26 # xchgl %r12d, (%esi)")
#define XCHG_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X65, 0X00 # xchgl %r12d, (%ebp)")
#define XCHG_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X24, 0X24 # xchgl %r12d, (%esp)")

#define XCHG_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X28 # xchgl %r13d, (%rax)")
#define XCHG_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X2B # xchgl %r13d, (%rbx)")
#define XCHG_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X29 # xchgl %r13d, (%rcx)")
#define XCHG_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X2A # xchgl %r13d, (%rdx)")
#define XCHG_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X2F # xchgl %r13d, (%rdi)")
#define XCHG_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X2E # xchgl %r13d, (%rsi)")
#define XCHG_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X6D, 0X00 # xchgl %r13d, (%rbp)")
#define XCHG_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X2C, 0X24 # xchgl %r13d, (%rsp)")
#define XCHG_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X28 # xchgl %r13d, (%r8)")
#define XCHG_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X29 # xchgl %r13d, (%r9)")
#define XCHG_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X2A # xchgl %r13d, (%r10)")
#define XCHG_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X2B # xchgl %r13d, (%r11)")
#define XCHG_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X2C, 0X24 # xchgl %r13d, (%r12)")
#define XCHG_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X6D, 0X00 # xchgl %r13d, (%r13)")
#define XCHG_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X2E # xchgl %r13d, (%r14)")
#define XCHG_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X2F # xchgl %r13d, (%r15)")
#define XCHG_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X28 # xchgl %r13d, (%eax)")
#define XCHG_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2B # xchgl %r13d, (%ebx)")
#define XCHG_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X29 # xchgl %r13d, (%ecx)")
#define XCHG_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2A # xchgl %r13d, (%edx)")
#define XCHG_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2F # xchgl %r13d, (%edi)")
#define XCHG_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2E # xchgl %r13d, (%esi)")
#define XCHG_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X6D, 0X00 # xchgl %r13d, (%ebp)")
#define XCHG_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X2C, 0X24 # xchgl %r13d, (%esp)")

#define XCHG_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X30 # xchgl %r14d, (%rax)")
#define XCHG_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X33 # xchgl %r14d, (%rbx)")
#define XCHG_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X31 # xchgl %r14d, (%rcx)")
#define XCHG_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X32 # xchgl %r14d, (%rdx)")
#define XCHG_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X37 # xchgl %r14d, (%rdi)")
#define XCHG_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X36 # xchgl %r14d, (%rsi)")
#define XCHG_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X75, 0X00 # xchgl %r14d, (%rbp)")
#define XCHG_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X34, 0X24 # xchgl %r14d, (%rsp)")
#define XCHG_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X30 # xchgl %r14d, (%r8)")
#define XCHG_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X31 # xchgl %r14d, (%r9)")
#define XCHG_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X32 # xchgl %r14d, (%r10)")
#define XCHG_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X33 # xchgl %r14d, (%r11)")
#define XCHG_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X34, 0X24 # xchgl %r14d, (%r12)")
#define XCHG_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X75, 0X00 # xchgl %r14d, (%r13)")
#define XCHG_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X36 # xchgl %r14d, (%r14)")
#define XCHG_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X37 # xchgl %r14d, (%r15)")
#define XCHG_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X30 # xchgl %r14d, (%eax)")
#define XCHG_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X33 # xchgl %r14d, (%ebx)")
#define XCHG_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X31 # xchgl %r14d, (%ecx)")
#define XCHG_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X32 # xchgl %r14d, (%edx)")
#define XCHG_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X37 # xchgl %r14d, (%edi)")
#define XCHG_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X36 # xchgl %r14d, (%esi)")
#define XCHG_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X75, 0X00 # xchgl %r14d, (%ebp)")
#define XCHG_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X34, 0X24 # xchgl %r14d, (%esp)")

#define XCHG_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X87, 0X38 # xchgl %r15d, (%rax)")
#define XCHG_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X87, 0X3B # xchgl %r15d, (%rbx)")
#define XCHG_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X87, 0X39 # xchgl %r15d, (%rcx)")
#define XCHG_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X87, 0X3A # xchgl %r15d, (%rdx)")
#define XCHG_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X87, 0X3F # xchgl %r15d, (%rdi)")
#define XCHG_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X87, 0X3E # xchgl %r15d, (%rsi)")
#define XCHG_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X87, 0X7D, 0X00 # xchgl %r15d, (%rbp)")
#define XCHG_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X87, 0X3C, 0X24 # xchgl %r15d, (%rsp)")
#define XCHG_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X87, 0X38 # xchgl %r15d, (%r8)")
#define XCHG_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X87, 0X39 # xchgl %r15d, (%r9)")
#define XCHG_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X87, 0X3A # xchgl %r15d, (%r10)")
#define XCHG_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X87, 0X3B # xchgl %r15d, (%r11)")
#define XCHG_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X87, 0X3C, 0X24 # xchgl %r15d, (%r12)")
#define XCHG_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X87, 0X7D, 0X00 # xchgl %r15d, (%r13)")
#define XCHG_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X87, 0X3E # xchgl %r15d, (%r14)")
#define XCHG_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X87, 0X3F # xchgl %r15d, (%r15)")
#define XCHG_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X38 # xchgl %r15d, (%eax)")
#define XCHG_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3B # xchgl %r15d, (%ebx)")
#define XCHG_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X39 # xchgl %r15d, (%ecx)")
#define XCHG_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3A # xchgl %r15d, (%edx)")
#define XCHG_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3F # xchgl %r15d, (%edi)")
#define XCHG_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3E # xchgl %r15d, (%esi)")
#define XCHG_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X7D, 0X00 # xchgl %r15d, (%ebp)")
#define XCHG_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X87, 0X3C, 0X24 # xchgl %r15d, (%esp)")

#define XCHG_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X80 # xchgl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X83 # xchgl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X81 # xchgl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X82 # xchgl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X80 # xchgl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X81 # xchgl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X82 # xchgl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X83 # xchgl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X85 # xchgl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X86 # xchgl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X87 # xchgl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X80 # xchgl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X83 # xchgl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X81 # xchgl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X82 # xchgl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X87 # xchgl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X86 # xchgl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X85 # xchgl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X98 # xchgl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9B # xchgl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X99 # xchgl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9A # xchgl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X98 # xchgl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X99 # xchgl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9A # xchgl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9B # xchgl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9D # xchgl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9E # xchgl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9F # xchgl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X98 # xchgl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9B # xchgl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X99 # xchgl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9A # xchgl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9F # xchgl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9E # xchgl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9D # xchgl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X88 # xchgl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8B # xchgl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X89 # xchgl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8A # xchgl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X88 # xchgl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X89 # xchgl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8A # xchgl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8B # xchgl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8D # xchgl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8E # xchgl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8F # xchgl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X88 # xchgl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8B # xchgl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X89 # xchgl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8A # xchgl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8F # xchgl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8E # xchgl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8D # xchgl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X90 # xchgl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X93 # xchgl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X91 # xchgl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X92 # xchgl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X90 # xchgl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X91 # xchgl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X92 # xchgl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X93 # xchgl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X95 # xchgl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X96 # xchgl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X97 # xchgl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X90 # xchgl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X93 # xchgl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X91 # xchgl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X92 # xchgl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X97 # xchgl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X96 # xchgl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X95 # xchgl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB8 # xchgl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBB # xchgl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB9 # xchgl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBA # xchgl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB8 # xchgl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB9 # xchgl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBA # xchgl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBB # xchgl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBD # xchgl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBE # xchgl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBF # xchgl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB8 # xchgl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBB # xchgl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB9 # xchgl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBA # xchgl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBF # xchgl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBE # xchgl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBD # xchgl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB0 # xchgl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB3 # xchgl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB1 # xchgl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB2 # xchgl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB0 # xchgl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB1 # xchgl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB2 # xchgl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB3 # xchgl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB5 # xchgl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB6 # xchgl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB7 # xchgl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB0 # xchgl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB3 # xchgl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB1 # xchgl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB2 # xchgl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB7 # xchgl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB6 # xchgl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB5 # xchgl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA8 # xchgl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAB # xchgl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA9 # xchgl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAA # xchgl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA8 # xchgl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA9 # xchgl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAA # xchgl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAB # xchgl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAD # xchgl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAE # xchgl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAF # xchgl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA8 # xchgl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAB # xchgl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA9 # xchgl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAA # xchgl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAF # xchgl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAE # xchgl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAD # xchgl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA0 # xchgl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA3 # xchgl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA1 # xchgl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA2 # xchgl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA0 # xchgl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA1 # xchgl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA2 # xchgl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA3 # xchgl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA5 # xchgl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA6 # xchgl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA7 # xchgl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA0 # xchgl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA3 # xchgl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA1 # xchgl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA2 # xchgl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA7 # xchgl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA6 # xchgl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA5 # xchgl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X80 # xchgl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X83 # xchgl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X81 # xchgl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X82 # xchgl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X87 # xchgl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X86 # xchgl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X85 # xchgl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X80 # xchgl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X81 # xchgl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X82 # xchgl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X83 # xchgl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X85 # xchgl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X86 # xchgl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X87 # xchgl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X80 # xchgl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X83 # xchgl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X81 # xchgl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X82 # xchgl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X87 # xchgl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X86 # xchgl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X85 # xchgl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X84, 0X24 # xchgl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X88 # xchgl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8B # xchgl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X89 # xchgl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8A # xchgl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8F # xchgl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8E # xchgl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8D # xchgl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X88 # xchgl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X89 # xchgl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8A # xchgl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8B # xchgl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8D # xchgl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8E # xchgl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8F # xchgl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X88 # xchgl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8B # xchgl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X89 # xchgl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8A # xchgl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8F # xchgl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8E # xchgl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8D # xchgl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8C, 0X24 # xchgl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X90 # xchgl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X93 # xchgl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X91 # xchgl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X92 # xchgl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X97 # xchgl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X96 # xchgl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X95 # xchgl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X90 # xchgl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X91 # xchgl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X92 # xchgl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X93 # xchgl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X95 # xchgl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X96 # xchgl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X97 # xchgl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X90 # xchgl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X93 # xchgl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X91 # xchgl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X92 # xchgl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X97 # xchgl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X96 # xchgl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X95 # xchgl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X94, 0X24 # xchgl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X98 # xchgl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9B # xchgl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X99 # xchgl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9A # xchgl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9F # xchgl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9E # xchgl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9D # xchgl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X98 # xchgl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X99 # xchgl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9A # xchgl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9B # xchgl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9D # xchgl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9E # xchgl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9F # xchgl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X98 # xchgl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9B # xchgl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X99 # xchgl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9A # xchgl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9F # xchgl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9E # xchgl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9D # xchgl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9C, 0X24 # xchgl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA0 # xchgl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA3 # xchgl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA1 # xchgl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA2 # xchgl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA7 # xchgl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA6 # xchgl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA5 # xchgl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA0 # xchgl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA1 # xchgl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA2 # xchgl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA3 # xchgl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA5 # xchgl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA6 # xchgl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA7 # xchgl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA0 # xchgl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA3 # xchgl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA1 # xchgl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA2 # xchgl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA7 # xchgl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA6 # xchgl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA5 # xchgl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA4, 0X24 # xchgl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA8 # xchgl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAB # xchgl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA9 # xchgl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAA # xchgl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAF # xchgl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAE # xchgl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAD # xchgl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA8 # xchgl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA9 # xchgl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAA # xchgl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAB # xchgl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAD # xchgl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAE # xchgl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAF # xchgl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA8 # xchgl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAB # xchgl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA9 # xchgl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAA # xchgl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAF # xchgl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAE # xchgl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAD # xchgl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAC, 0X24 # xchgl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB0 # xchgl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB3 # xchgl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB1 # xchgl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB2 # xchgl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB7 # xchgl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB6 # xchgl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB5 # xchgl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB0 # xchgl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB1 # xchgl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB2 # xchgl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB3 # xchgl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB5 # xchgl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB6 # xchgl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB7 # xchgl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB0 # xchgl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB3 # xchgl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB1 # xchgl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB2 # xchgl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB7 # xchgl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB6 # xchgl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB5 # xchgl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB4, 0X24 # xchgl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB8 # xchgl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBB # xchgl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB9 # xchgl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBA # xchgl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBF # xchgl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBE # xchgl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBD # xchgl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB8 # xchgl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB9 # xchgl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBA # xchgl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBB # xchgl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBD # xchgl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBE # xchgl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBF # xchgl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB8 # xchgl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBB # xchgl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB9 # xchgl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBA # xchgl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBF # xchgl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBE # xchgl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBD # xchgl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBC, 0X24 # xchgl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X80 # xchgl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X83 # xchgl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X81 # xchgl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X82 # xchgl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X87 # xchgl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X86 # xchgl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X85 # xchgl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X84, 0X24 # xchgl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X80 # xchgl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X81 # xchgl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X82 # xchgl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X83 # xchgl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X84, 0X24 # xchgl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X85 # xchgl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X86 # xchgl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X87 # xchgl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X80 # xchgl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X83 # xchgl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X81 # xchgl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X82 # xchgl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X87 # xchgl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X86 # xchgl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X85 # xchgl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X84, 0X24 # xchgl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X98 # xchgl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9B # xchgl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X99 # xchgl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9A # xchgl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9F # xchgl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9E # xchgl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9D # xchgl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X9C, 0X24 # xchgl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X98 # xchgl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X99 # xchgl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9A # xchgl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9B # xchgl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9C, 0X24 # xchgl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9D # xchgl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9E # xchgl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X9F # xchgl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X98 # xchgl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9B # xchgl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X99 # xchgl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9A # xchgl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9F # xchgl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9E # xchgl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9D # xchgl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X9C, 0X24 # xchgl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X88 # xchgl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8B # xchgl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X89 # xchgl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8A # xchgl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8F # xchgl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8E # xchgl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8D # xchgl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X8C, 0X24 # xchgl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X88 # xchgl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X89 # xchgl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8A # xchgl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8B # xchgl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8C, 0X24 # xchgl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8D # xchgl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8E # xchgl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X8F # xchgl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X88 # xchgl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8B # xchgl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X89 # xchgl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8A # xchgl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8F # xchgl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8E # xchgl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8D # xchgl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X8C, 0X24 # xchgl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X90 # xchgl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X93 # xchgl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X91 # xchgl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0X92 # xchgl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X97 # xchgl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0X96 # xchgl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X95 # xchgl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0X94, 0X24 # xchgl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X90 # xchgl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X91 # xchgl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X92 # xchgl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X93 # xchgl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X94, 0X24 # xchgl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X95 # xchgl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X96 # xchgl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0X97 # xchgl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X90 # xchgl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X93 # xchgl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X91 # xchgl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X92 # xchgl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X97 # xchgl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X96 # xchgl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X95 # xchgl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0X94, 0X24 # xchgl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB8 # xchgl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBB # xchgl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB9 # xchgl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBA # xchgl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBF # xchgl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBE # xchgl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBD # xchgl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XBC, 0X24 # xchgl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB8 # xchgl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB9 # xchgl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBA # xchgl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBB # xchgl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBC, 0X24 # xchgl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBD # xchgl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBE # xchgl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XBF # xchgl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB8 # xchgl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBB # xchgl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB9 # xchgl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBA # xchgl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBF # xchgl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBE # xchgl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBD # xchgl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XBC, 0X24 # xchgl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB0 # xchgl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB3 # xchgl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB1 # xchgl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB2 # xchgl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB7 # xchgl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB6 # xchgl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB5 # xchgl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XB4, 0X24 # xchgl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB0 # xchgl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB1 # xchgl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB2 # xchgl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB3 # xchgl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB4, 0X24 # xchgl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB5 # xchgl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB6 # xchgl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XB7 # xchgl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB0 # xchgl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB3 # xchgl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB1 # xchgl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB2 # xchgl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB7 # xchgl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB6 # xchgl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB5 # xchgl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XB4, 0X24 # xchgl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA8 # xchgl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAB # xchgl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA9 # xchgl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAA # xchgl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAF # xchgl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAE # xchgl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAD # xchgl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XAC, 0X24 # xchgl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA8 # xchgl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA9 # xchgl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAA # xchgl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAB # xchgl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAC, 0X24 # xchgl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAD # xchgl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAE # xchgl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XAF # xchgl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA8 # xchgl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAB # xchgl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA9 # xchgl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAA # xchgl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAF # xchgl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAE # xchgl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAD # xchgl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XAC, 0X24 # xchgl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA0 # xchgl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA3 # xchgl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA1 # xchgl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA2 # xchgl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA7 # xchgl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA6 # xchgl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA5 # xchgl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X87, 0XA4, 0X24 # xchgl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA0 # xchgl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA1 # xchgl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA2 # xchgl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA3 # xchgl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA4, 0X24 # xchgl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA5 # xchgl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA6 # xchgl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X87, 0XA7 # xchgl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA0 # xchgl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA3 # xchgl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA1 # xchgl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA2 # xchgl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA7 # xchgl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA6 # xchgl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA5 # xchgl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X87, 0XA4, 0X24 # xchgl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X80 # xchgl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X83 # xchgl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X81 # xchgl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X82 # xchgl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X87 # xchgl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X86 # xchgl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X85 # xchgl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X84, 0X24 # xchgl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X80 # xchgl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X81 # xchgl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X82 # xchgl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X83 # xchgl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X84, 0X24 # xchgl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X85 # xchgl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X86 # xchgl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X87 # xchgl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X80 # xchgl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X83 # xchgl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X81 # xchgl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X82 # xchgl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X87 # xchgl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X86 # xchgl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X85 # xchgl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X84, 0X24 # xchgl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X88 # xchgl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8B # xchgl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X89 # xchgl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8A # xchgl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8F # xchgl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8E # xchgl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8D # xchgl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X8C, 0X24 # xchgl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X88 # xchgl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X89 # xchgl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8A # xchgl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8B # xchgl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8C, 0X24 # xchgl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8D # xchgl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8E # xchgl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X8F # xchgl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X88 # xchgl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8B # xchgl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X89 # xchgl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8A # xchgl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8F # xchgl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8E # xchgl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8D # xchgl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X8C, 0X24 # xchgl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X90 # xchgl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X93 # xchgl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X91 # xchgl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X92 # xchgl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X97 # xchgl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X96 # xchgl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X95 # xchgl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X94, 0X24 # xchgl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X90 # xchgl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X91 # xchgl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X92 # xchgl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X93 # xchgl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X94, 0X24 # xchgl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X95 # xchgl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X96 # xchgl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X97 # xchgl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X90 # xchgl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X93 # xchgl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X91 # xchgl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X92 # xchgl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X97 # xchgl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X96 # xchgl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X95 # xchgl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X94, 0X24 # xchgl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X98 # xchgl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9B # xchgl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X99 # xchgl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9A # xchgl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9F # xchgl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9E # xchgl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9D # xchgl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0X9C, 0X24 # xchgl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X98 # xchgl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X99 # xchgl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9A # xchgl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9B # xchgl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9C, 0X24 # xchgl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9D # xchgl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9E # xchgl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0X9F # xchgl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X98 # xchgl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9B # xchgl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X99 # xchgl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9A # xchgl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9F # xchgl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9E # xchgl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9D # xchgl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0X9C, 0X24 # xchgl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA0 # xchgl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA3 # xchgl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA1 # xchgl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA2 # xchgl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA7 # xchgl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA6 # xchgl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA5 # xchgl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA4, 0X24 # xchgl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA0 # xchgl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA1 # xchgl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA2 # xchgl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA3 # xchgl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA4, 0X24 # xchgl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA5 # xchgl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA6 # xchgl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA7 # xchgl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA0 # xchgl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA3 # xchgl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA1 # xchgl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA2 # xchgl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA7 # xchgl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA6 # xchgl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA5 # xchgl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA4, 0X24 # xchgl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA8 # xchgl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAB # xchgl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XA9 # xchgl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAA # xchgl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAF # xchgl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAE # xchgl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAD # xchgl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XAC, 0X24 # xchgl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA8 # xchgl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XA9 # xchgl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAA # xchgl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAB # xchgl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAC, 0X24 # xchgl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAD # xchgl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAE # xchgl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XAF # xchgl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA8 # xchgl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAB # xchgl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XA9 # xchgl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAA # xchgl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAF # xchgl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAE # xchgl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAD # xchgl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XAC, 0X24 # xchgl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB0 # xchgl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB3 # xchgl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB1 # xchgl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB2 # xchgl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB7 # xchgl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB6 # xchgl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB5 # xchgl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB4, 0X24 # xchgl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB0 # xchgl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB1 # xchgl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB2 # xchgl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB3 # xchgl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB4, 0X24 # xchgl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB5 # xchgl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB6 # xchgl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB7 # xchgl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB0 # xchgl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB3 # xchgl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB1 # xchgl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB2 # xchgl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB7 # xchgl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB6 # xchgl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB5 # xchgl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB4, 0X24 # xchgl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define XCHG_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB8 # xchgl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBB # xchgl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XB9 # xchgl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBA # xchgl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBF # xchgl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBE # xchgl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBD # xchgl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X87, 0XBC, 0X24 # xchgl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB8 # xchgl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XB9 # xchgl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBA # xchgl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBB # xchgl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBC, 0X24 # xchgl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBD # xchgl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBE # xchgl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X87, 0XBF # xchgl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB8 # xchgl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBB # xchgl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XB9 # xchgl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBA # xchgl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBF # xchgl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBE # xchgl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBD # xchgl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define XCHG_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X87, 0XBC, 0X24 # xchgl %r15d, " _(VALUE) "(%esp)")\
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
