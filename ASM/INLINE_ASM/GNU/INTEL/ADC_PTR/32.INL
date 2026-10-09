#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define ADC_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X05 # adcl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X1D # adcl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X0D # adcl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X15 # adcl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X3D # adcl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X35 # adcl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X2D # adcl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X25 # adcl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X05 # adcl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X1D # adcl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X0D # adcl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X15 # adcl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X3D # adcl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X35 # adcl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X2D # adcl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X25 # adcl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X00 # adcl (%eax), %eax")
#define ADC_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X03 # adcl (%ebx), %eax")
#define ADC_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X01 # adcl (%ecx), %eax")
#define ADC_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X02 # adcl (%edx), %eax")
#define ADC_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X07 # adcl (%edi), %eax")
#define ADC_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X06 # adcl (%esi), %eax")
#define ADC_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X45, 0X00 # adcl (%ebp), %eax")
#define ADC_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X04, 0X24 # adcl (%esp), %eax")
#define ADC_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X07 # adcl (%bx), %eax")
#define ADC_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X46, 0X00 # adcl (%bp), %eax")
#define ADC_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X04 # adcl (%si), %eax")
#define ADC_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X05 # adcl (%di), %eax")

#define ADC_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X18 # adcl (%eax), %ebx")
#define ADC_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X1B # adcl (%ebx), %ebx")
#define ADC_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X19 # adcl (%ecx), %ebx")
#define ADC_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X1A # adcl (%edx), %ebx")
#define ADC_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X1F # adcl (%edi), %ebx")
#define ADC_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X1E # adcl (%esi), %ebx")
#define ADC_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X5D, 0X00 # adcl (%ebp), %ebx")
#define ADC_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X1C, 0X24 # adcl (%esp), %ebx")
#define ADC_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X1F # adcl (%bx), %ebx")
#define ADC_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X5E, 0X00 # adcl (%bp), %ebx")
#define ADC_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X1C # adcl (%si), %ebx")
#define ADC_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X1D # adcl (%di), %ebx")

#define ADC_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X08 # adcl (%eax), %ecx")
#define ADC_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X0B # adcl (%ebx), %ecx")
#define ADC_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X09 # adcl (%ecx), %ecx")
#define ADC_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X0A # adcl (%edx), %ecx")
#define ADC_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X0F # adcl (%edi), %ecx")
#define ADC_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X0E # adcl (%esi), %ecx")
#define ADC_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X4D, 0X00 # adcl (%ebp), %ecx")
#define ADC_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X0C, 0X24 # adcl (%esp), %ecx")
#define ADC_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X0F # adcl (%bx), %ecx")
#define ADC_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X4E, 0X00 # adcl (%bp), %ecx")
#define ADC_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X0C # adcl (%si), %ecx")
#define ADC_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X0D # adcl (%di), %ecx")

#define ADC_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X10 # adcl (%eax), %edx")
#define ADC_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X13 # adcl (%ebx), %edx")
#define ADC_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X11 # adcl (%ecx), %edx")
#define ADC_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X12 # adcl (%edx), %edx")
#define ADC_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X17 # adcl (%edi), %edx")
#define ADC_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X16 # adcl (%esi), %edx")
#define ADC_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X55, 0X00 # adcl (%ebp), %edx")
#define ADC_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X14, 0X24 # adcl (%esp), %edx")
#define ADC_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X17 # adcl (%bx), %edx")
#define ADC_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X56, 0X00 # adcl (%bp), %edx")
#define ADC_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X14 # adcl (%si), %edx")
#define ADC_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X15 # adcl (%di), %edx")

#define ADC_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X38 # adcl (%eax), %edi")
#define ADC_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X3B # adcl (%ebx), %edi")
#define ADC_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X39 # adcl (%ecx), %edi")
#define ADC_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X3A # adcl (%edx), %edi")
#define ADC_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X3F # adcl (%edi), %edi")
#define ADC_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X3E # adcl (%esi), %edi")
#define ADC_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X7D, 0X00 # adcl (%ebp), %edi")
#define ADC_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X3C, 0X24 # adcl (%esp), %edi")
#define ADC_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X3F # adcl (%bx), %edi")
#define ADC_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X7E, 0X00 # adcl (%bp), %edi")
#define ADC_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X3C # adcl (%si), %edi")
#define ADC_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X3D # adcl (%di), %edi")

#define ADC_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X30 # adcl (%eax), %esi")
#define ADC_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X33 # adcl (%ebx), %esi")
#define ADC_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X31 # adcl (%ecx), %esi")
#define ADC_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X32 # adcl (%edx), %esi")
#define ADC_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X37 # adcl (%edi), %esi")
#define ADC_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X36 # adcl (%esi), %esi")
#define ADC_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X75, 0X00 # adcl (%ebp), %esi")
#define ADC_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X34, 0X24 # adcl (%esp), %esi")
#define ADC_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X37 # adcl (%bx), %esi")
#define ADC_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X76, 0X00 # adcl (%bp), %esi")
#define ADC_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X34 # adcl (%si), %esi")
#define ADC_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X35 # adcl (%di), %esi")

#define ADC_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X28 # adcl (%eax), %ebp")
#define ADC_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X2B # adcl (%ebx), %ebp")
#define ADC_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X29 # adcl (%ecx), %ebp")
#define ADC_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X2A # adcl (%edx), %ebp")
#define ADC_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X2F # adcl (%edi), %ebp")
#define ADC_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X2E # adcl (%esi), %ebp")
#define ADC_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X6D, 0X00 # adcl (%ebp), %ebp")
#define ADC_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X2C, 0X24 # adcl (%esp), %ebp")
#define ADC_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X2F # adcl (%bx), %ebp")
#define ADC_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X6E, 0X00 # adcl (%bp), %ebp")
#define ADC_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X2C # adcl (%si), %ebp")
#define ADC_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X2D # adcl (%di), %ebp")

#define ADC_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X13, 0X20 # adcl (%eax), %esp")
#define ADC_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X13, 0X23 # adcl (%ebx), %esp")
#define ADC_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X13, 0X21 # adcl (%ecx), %esp")
#define ADC_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X13, 0X22 # adcl (%edx), %esp")
#define ADC_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X13, 0X27 # adcl (%edi), %esp")
#define ADC_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X13, 0X26 # adcl (%esi), %esp")
#define ADC_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X13, 0X65, 0X00 # adcl (%ebp), %esp")
#define ADC_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X13, 0X24, 0X24 # adcl (%esp), %esp")
#define ADC_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X13, 0X27 # adcl (%bx), %esp")
#define ADC_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X13, 0X66, 0X00 # adcl (%bp), %esp")
#define ADC_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X13, 0X24 # adcl (%si), %esp")
#define ADC_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X13, 0X25 # adcl (%di), %esp")

#define ADC_EAX_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X00 # adcl %eax, (%eax)")
#define ADC_EAX_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X03 # adcl %eax, (%ebx)")
#define ADC_EAX_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X01 # adcl %eax, (%ecx)")
#define ADC_EAX_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X02 # adcl %eax, (%edx)")
#define ADC_EAX_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X07 # adcl %eax, (%edi)")
#define ADC_EAX_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X06 # adcl %eax, (%esi)")
#define ADC_EAX_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X45, 0X00 # adcl %eax, (%ebp)")
#define ADC_EAX_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X04, 0X24 # adcl %eax, (%esp)")
#define ADC_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X07 # adcl %eax, (%bx)")
#define ADC_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X46, 0X00 # adcl %eax, (%bp)")
#define ADC_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X04 # adcl %eax, (%si)")
#define ADC_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X05 # adcl %eax, (%di)")

#define ADC_EBX_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X18 # adcl %ebx, (%eax)")
#define ADC_EBX_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X1B # adcl %ebx, (%ebx)")
#define ADC_EBX_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X19 # adcl %ebx, (%ecx)")
#define ADC_EBX_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X1A # adcl %ebx, (%edx)")
#define ADC_EBX_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X1F # adcl %ebx, (%edi)")
#define ADC_EBX_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X1E # adcl %ebx, (%esi)")
#define ADC_EBX_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X5D, 0X00 # adcl %ebx, (%ebp)")
#define ADC_EBX_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X1C, 0X24 # adcl %ebx, (%esp)")
#define ADC_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X1F # adcl %ebx, (%bx)")
#define ADC_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X5E, 0X00 # adcl %ebx, (%bp)")
#define ADC_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X1C # adcl %ebx, (%si)")
#define ADC_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X1D # adcl %ebx, (%di)")

#define ADC_ECX_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X08 # adcl %ecx, (%eax)")
#define ADC_ECX_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X0B # adcl %ecx, (%ebx)")
#define ADC_ECX_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X09 # adcl %ecx, (%ecx)")
#define ADC_ECX_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X0A # adcl %ecx, (%edx)")
#define ADC_ECX_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X0F # adcl %ecx, (%edi)")
#define ADC_ECX_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X0E # adcl %ecx, (%esi)")
#define ADC_ECX_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X4D, 0X00 # adcl %ecx, (%ebp)")
#define ADC_ECX_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X0C, 0X24 # adcl %ecx, (%esp)")
#define ADC_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X0F # adcl %ecx, (%bx)")
#define ADC_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X4E, 0X00 # adcl %ecx, (%bp)")
#define ADC_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X0C # adcl %ecx, (%si)")
#define ADC_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X0D # adcl %ecx, (%di)")

#define ADC_EDX_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X10 # adcl %edx, (%eax)")
#define ADC_EDX_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X13 # adcl %edx, (%ebx)")
#define ADC_EDX_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X11 # adcl %edx, (%ecx)")
#define ADC_EDX_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X12 # adcl %edx, (%edx)")
#define ADC_EDX_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X17 # adcl %edx, (%edi)")
#define ADC_EDX_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X16 # adcl %edx, (%esi)")
#define ADC_EDX_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X55, 0X00 # adcl %edx, (%ebp)")
#define ADC_EDX_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X14, 0X24 # adcl %edx, (%esp)")
#define ADC_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X17 # adcl %edx, (%bx)")
#define ADC_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X56, 0X00 # adcl %edx, (%bp)")
#define ADC_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X14 # adcl %edx, (%si)")
#define ADC_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X15 # adcl %edx, (%di)")

#define ADC_EDI_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X38 # adcl %edi, (%eax)")
#define ADC_EDI_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X3B # adcl %edi, (%ebx)")
#define ADC_EDI_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X39 # adcl %edi, (%ecx)")
#define ADC_EDI_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X3A # adcl %edi, (%edx)")
#define ADC_EDI_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X3F # adcl %edi, (%edi)")
#define ADC_EDI_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X3E # adcl %edi, (%esi)")
#define ADC_EDI_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X7D, 0X00 # adcl %edi, (%ebp)")
#define ADC_EDI_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X3C, 0X24 # adcl %edi, (%esp)")
#define ADC_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X3F # adcl %edi, (%bx)")
#define ADC_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X7E, 0X00 # adcl %edi, (%bp)")
#define ADC_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X3C # adcl %edi, (%si)")
#define ADC_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X3D # adcl %edi, (%di)")

#define ADC_ESI_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X30 # adcl %esi, (%eax)")
#define ADC_ESI_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X33 # adcl %esi, (%ebx)")
#define ADC_ESI_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X31 # adcl %esi, (%ecx)")
#define ADC_ESI_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X32 # adcl %esi, (%edx)")
#define ADC_ESI_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X37 # adcl %esi, (%edi)")
#define ADC_ESI_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X36 # adcl %esi, (%esi)")
#define ADC_ESI_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X75, 0X00 # adcl %esi, (%ebp)")
#define ADC_ESI_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X34, 0X24 # adcl %esi, (%esp)")
#define ADC_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X37 # adcl %esi, (%bx)")
#define ADC_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X76, 0X00 # adcl %esi, (%bp)")
#define ADC_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X34 # adcl %esi, (%si)")
#define ADC_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X35 # adcl %esi, (%di)")

#define ADC_EBP_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X28 # adcl %ebp, (%eax)")
#define ADC_EBP_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X2B # adcl %ebp, (%ebx)")
#define ADC_EBP_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X29 # adcl %ebp, (%ecx)")
#define ADC_EBP_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X2A # adcl %ebp, (%edx)")
#define ADC_EBP_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X2F # adcl %ebp, (%edi)")
#define ADC_EBP_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X2E # adcl %ebp, (%esi)")
#define ADC_EBP_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X6D, 0X00 # adcl %ebp, (%ebp)")
#define ADC_EBP_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X2C, 0X24 # adcl %ebp, (%esp)")
#define ADC_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X2F # adcl %ebp, (%bx)")
#define ADC_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X6E, 0X00 # adcl %ebp, (%bp)")
#define ADC_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X2C # adcl %ebp, (%si)")
#define ADC_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X2D # adcl %ebp, (%di)")

#define ADC_ESP_TO_PTR_EAX CMT_ASM(".byte 0X11, 0X20 # adcl %esp, (%eax)")
#define ADC_ESP_TO_PTR_EBX CMT_ASM(".byte 0X11, 0X23 # adcl %esp, (%ebx)")
#define ADC_ESP_TO_PTR_ECX CMT_ASM(".byte 0X11, 0X21 # adcl %esp, (%ecx)")
#define ADC_ESP_TO_PTR_EDX CMT_ASM(".byte 0X11, 0X22 # adcl %esp, (%edx)")
#define ADC_ESP_TO_PTR_EDI CMT_ASM(".byte 0X11, 0X27 # adcl %esp, (%edi)")
#define ADC_ESP_TO_PTR_ESI CMT_ASM(".byte 0X11, 0X26 # adcl %esp, (%esi)")
#define ADC_ESP_TO_PTR_EBP CMT_ASM(".byte 0X11, 0X65, 0X00 # adcl %esp, (%ebp)")
#define ADC_ESP_TO_PTR_ESP CMT_ASM(".byte 0X11, 0X24, 0X24 # adcl %esp, (%esp)")
#define ADC_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X11, 0X27 # adcl %esp, (%bx)")
#define ADC_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X11, 0X66, 0X00 # adcl %esp, (%bp)")
#define ADC_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X11, 0X24 # adcl %esp, (%si)")
#define ADC_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X11, 0X25 # adcl %esp, (%di)")

#define ADC_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X80 # adcl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X83 # adcl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X81 # adcl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X82 # adcl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X87 # adcl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X86 # adcl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X85 # adcl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X87 # adcl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X86 # adcl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X84 # adcl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X85 # adcl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X98 # adcl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9B # adcl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X99 # adcl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9A # adcl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9F # adcl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9E # adcl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9D # adcl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9F # adcl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9E # adcl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9C # adcl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9D # adcl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X88 # adcl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8B # adcl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X89 # adcl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8A # adcl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8F # adcl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8E # adcl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8D # adcl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8F # adcl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8E # adcl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8C # adcl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8D # adcl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X90 # adcl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X93 # adcl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X91 # adcl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X92 # adcl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X97 # adcl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X96 # adcl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X95 # adcl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X97 # adcl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X96 # adcl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X94 # adcl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X95 # adcl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB8 # adcl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBB # adcl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB9 # adcl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBA # adcl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBF # adcl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBE # adcl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBD # adcl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBF # adcl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBE # adcl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBC # adcl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBD # adcl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB0 # adcl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB3 # adcl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB1 # adcl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB2 # adcl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB7 # adcl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB6 # adcl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB5 # adcl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB7 # adcl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB6 # adcl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB4 # adcl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB5 # adcl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA8 # adcl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAB # adcl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA9 # adcl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAA # adcl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAF # adcl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAE # adcl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAD # adcl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAF # adcl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAE # adcl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAC # adcl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAD # adcl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA0 # adcl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA3 # adcl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA1 # adcl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA2 # adcl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA7 # adcl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA6 # adcl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA5 # adcl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA7 # adcl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA6 # adcl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA4 # adcl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA5 # adcl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X80 # adcl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X83 # adcl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X81 # adcl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X82 # adcl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X87 # adcl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X86 # adcl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X85 # adcl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X84, 0X24 # adcl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X87 # adcl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X86 # adcl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X84 # adcl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X85 # adcl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X98 # adcl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9B # adcl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X99 # adcl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9A # adcl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9F # adcl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9E # adcl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9D # adcl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9C, 0X24 # adcl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9F # adcl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9E # adcl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9C # adcl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9D # adcl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X88 # adcl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8B # adcl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X89 # adcl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8A # adcl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8F # adcl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8E # adcl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8D # adcl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8C, 0X24 # adcl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8F # adcl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8E # adcl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8C # adcl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8D # adcl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X90 # adcl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X93 # adcl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X91 # adcl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X92 # adcl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X97 # adcl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X96 # adcl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X95 # adcl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X94, 0X24 # adcl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X97 # adcl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X96 # adcl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X94 # adcl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X95 # adcl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB8 # adcl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBB # adcl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB9 # adcl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBA # adcl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBF # adcl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBE # adcl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBD # adcl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBC, 0X24 # adcl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBF # adcl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBE # adcl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBC # adcl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBD # adcl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB0 # adcl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB3 # adcl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB1 # adcl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB2 # adcl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB7 # adcl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB6 # adcl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB5 # adcl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB4, 0X24 # adcl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB7 # adcl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB6 # adcl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB4 # adcl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB5 # adcl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA8 # adcl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAB # adcl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA9 # adcl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAA # adcl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAF # adcl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAE # adcl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAD # adcl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAC, 0X24 # adcl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAF # adcl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAE # adcl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAC # adcl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAD # adcl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define ADC_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA0 # adcl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA3 # adcl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA1 # adcl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA2 # adcl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA7 # adcl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA6 # adcl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA5 # adcl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA4, 0X24 # adcl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA7 # adcl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA6 # adcl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA4 # adcl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define ADC_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA5 # adcl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X04, 0X25 # adcl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X1C, 0X25 # adcl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X0C, 0X25 # adcl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X14, 0X25 # adcl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X3C, 0X25 # adcl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X34, 0X25 # adcl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X2C, 0X25 # adcl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X13, 0X24, 0X25 # adcl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X04, 0X25 # adcl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X0C, 0X25 # adcl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X14, 0X25 # adcl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X1C, 0X25 # adcl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X24, 0X25 # adcl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X2C, 0X25 # adcl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X34, 0X25 # adcl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X3C, 0X25 # adcl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X04, 0X25 # adcl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X1C, 0X25 # adcl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X0C, 0X25 # adcl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X14, 0X25 # adcl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X3C, 0X25 # adcl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X34, 0X25 # adcl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X2C, 0X25 # adcl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X11, 0X24, 0X25 # adcl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X04, 0X25 # adcl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X0C, 0X25 # adcl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X14, 0X25 # adcl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X1C, 0X25 # adcl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X24, 0X25 # adcl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X2C, 0X25 # adcl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X34, 0X25 # adcl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X3C, 0X25 # adcl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X00 # adcl (%rax), %eax")
#define ADC_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X03 # adcl (%rbx), %eax")
#define ADC_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X01 # adcl (%rcx), %eax")
#define ADC_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X02 # adcl (%rdx), %eax")
#define ADC_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X07 # adcl (%rdi), %eax")
#define ADC_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X06 # adcl (%rsi), %eax")
#define ADC_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X45, 0X00 # adcl (%rbp), %eax")
#define ADC_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X04, 0X24 # adcl (%rsp), %eax")
#define ADC_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X00 # adcl (%r8), %eax")
#define ADC_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X01 # adcl (%r9), %eax")
#define ADC_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X02 # adcl (%r10), %eax")
#define ADC_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X03 # adcl (%r11), %eax")
#define ADC_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X04, 0X24 # adcl (%r12), %eax")
#define ADC_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X45, 0X00 # adcl (%r13), %eax")
#define ADC_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X06 # adcl (%r14), %eax")
#define ADC_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X07 # adcl (%r15), %eax")
#define ADC_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X00 # adcl (%eax), %eax")
#define ADC_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X03 # adcl (%ebx), %eax")
#define ADC_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X01 # adcl (%ecx), %eax")
#define ADC_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X02 # adcl (%edx), %eax")
#define ADC_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X07 # adcl (%edi), %eax")
#define ADC_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X06 # adcl (%esi), %eax")
#define ADC_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X45, 0X00 # adcl (%ebp), %eax")
#define ADC_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X04, 0X24 # adcl (%esp), %eax")

#define ADC_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X18 # adcl (%rax), %ebx")
#define ADC_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X1B # adcl (%rbx), %ebx")
#define ADC_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X19 # adcl (%rcx), %ebx")
#define ADC_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X1A # adcl (%rdx), %ebx")
#define ADC_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X1F # adcl (%rdi), %ebx")
#define ADC_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X1E # adcl (%rsi), %ebx")
#define ADC_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X5D, 0X00 # adcl (%rbp), %ebx")
#define ADC_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X1C, 0X24 # adcl (%rsp), %ebx")
#define ADC_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X18 # adcl (%r8), %ebx")
#define ADC_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X19 # adcl (%r9), %ebx")
#define ADC_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X1A # adcl (%r10), %ebx")
#define ADC_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X1B # adcl (%r11), %ebx")
#define ADC_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X1C, 0X24 # adcl (%r12), %ebx")
#define ADC_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X5D, 0X00 # adcl (%r13), %ebx")
#define ADC_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X1E # adcl (%r14), %ebx")
#define ADC_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X1F # adcl (%r15), %ebx")
#define ADC_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X18 # adcl (%eax), %ebx")
#define ADC_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X1B # adcl (%ebx), %ebx")
#define ADC_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X19 # adcl (%ecx), %ebx")
#define ADC_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X1A # adcl (%edx), %ebx")
#define ADC_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X1F # adcl (%edi), %ebx")
#define ADC_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X1E # adcl (%esi), %ebx")
#define ADC_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X5D, 0X00 # adcl (%ebp), %ebx")
#define ADC_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X1C, 0X24 # adcl (%esp), %ebx")

#define ADC_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X08 # adcl (%rax), %ecx")
#define ADC_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X0B # adcl (%rbx), %ecx")
#define ADC_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X09 # adcl (%rcx), %ecx")
#define ADC_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X0A # adcl (%rdx), %ecx")
#define ADC_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X0F # adcl (%rdi), %ecx")
#define ADC_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X0E # adcl (%rsi), %ecx")
#define ADC_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X4D, 0X00 # adcl (%rbp), %ecx")
#define ADC_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X0C, 0X24 # adcl (%rsp), %ecx")
#define ADC_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X08 # adcl (%r8), %ecx")
#define ADC_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X09 # adcl (%r9), %ecx")
#define ADC_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X0A # adcl (%r10), %ecx")
#define ADC_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X0B # adcl (%r11), %ecx")
#define ADC_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X0C, 0X24 # adcl (%r12), %ecx")
#define ADC_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X4D, 0X00 # adcl (%r13), %ecx")
#define ADC_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X0E # adcl (%r14), %ecx")
#define ADC_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X0F # adcl (%r15), %ecx")
#define ADC_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X08 # adcl (%eax), %ecx")
#define ADC_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X0B # adcl (%ebx), %ecx")
#define ADC_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X09 # adcl (%ecx), %ecx")
#define ADC_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X0A # adcl (%edx), %ecx")
#define ADC_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X0F # adcl (%edi), %ecx")
#define ADC_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X0E # adcl (%esi), %ecx")
#define ADC_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X4D, 0X00 # adcl (%ebp), %ecx")
#define ADC_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X0C, 0X24 # adcl (%esp), %ecx")

#define ADC_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X10 # adcl (%rax), %edx")
#define ADC_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X13 # adcl (%rbx), %edx")
#define ADC_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X11 # adcl (%rcx), %edx")
#define ADC_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X12 # adcl (%rdx), %edx")
#define ADC_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X17 # adcl (%rdi), %edx")
#define ADC_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X16 # adcl (%rsi), %edx")
#define ADC_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X55, 0X00 # adcl (%rbp), %edx")
#define ADC_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X14, 0X24 # adcl (%rsp), %edx")
#define ADC_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X10 # adcl (%r8), %edx")
#define ADC_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X11 # adcl (%r9), %edx")
#define ADC_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X12 # adcl (%r10), %edx")
#define ADC_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X13 # adcl (%r11), %edx")
#define ADC_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X14, 0X24 # adcl (%r12), %edx")
#define ADC_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X55, 0X00 # adcl (%r13), %edx")
#define ADC_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X16 # adcl (%r14), %edx")
#define ADC_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X17 # adcl (%r15), %edx")
#define ADC_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X10 # adcl (%eax), %edx")
#define ADC_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X13 # adcl (%ebx), %edx")
#define ADC_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X11 # adcl (%ecx), %edx")
#define ADC_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X12 # adcl (%edx), %edx")
#define ADC_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X17 # adcl (%edi), %edx")
#define ADC_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X16 # adcl (%esi), %edx")
#define ADC_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X55, 0X00 # adcl (%ebp), %edx")
#define ADC_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X14, 0X24 # adcl (%esp), %edx")

#define ADC_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X38 # adcl (%rax), %edi")
#define ADC_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X3B # adcl (%rbx), %edi")
#define ADC_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X39 # adcl (%rcx), %edi")
#define ADC_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X3A # adcl (%rdx), %edi")
#define ADC_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X3F # adcl (%rdi), %edi")
#define ADC_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X3E # adcl (%rsi), %edi")
#define ADC_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X7D, 0X00 # adcl (%rbp), %edi")
#define ADC_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X3C, 0X24 # adcl (%rsp), %edi")
#define ADC_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X38 # adcl (%r8), %edi")
#define ADC_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X39 # adcl (%r9), %edi")
#define ADC_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X3A # adcl (%r10), %edi")
#define ADC_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X3B # adcl (%r11), %edi")
#define ADC_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X3C, 0X24 # adcl (%r12), %edi")
#define ADC_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X7D, 0X00 # adcl (%r13), %edi")
#define ADC_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X3E # adcl (%r14), %edi")
#define ADC_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X3F # adcl (%r15), %edi")
#define ADC_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X38 # adcl (%eax), %edi")
#define ADC_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X3B # adcl (%ebx), %edi")
#define ADC_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X39 # adcl (%ecx), %edi")
#define ADC_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X3A # adcl (%edx), %edi")
#define ADC_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X3F # adcl (%edi), %edi")
#define ADC_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X3E # adcl (%esi), %edi")
#define ADC_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X7D, 0X00 # adcl (%ebp), %edi")
#define ADC_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X3C, 0X24 # adcl (%esp), %edi")

#define ADC_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X30 # adcl (%rax), %esi")
#define ADC_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X33 # adcl (%rbx), %esi")
#define ADC_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X31 # adcl (%rcx), %esi")
#define ADC_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X32 # adcl (%rdx), %esi")
#define ADC_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X37 # adcl (%rdi), %esi")
#define ADC_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X36 # adcl (%rsi), %esi")
#define ADC_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X75, 0X00 # adcl (%rbp), %esi")
#define ADC_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X34, 0X24 # adcl (%rsp), %esi")
#define ADC_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X30 # adcl (%r8), %esi")
#define ADC_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X31 # adcl (%r9), %esi")
#define ADC_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X32 # adcl (%r10), %esi")
#define ADC_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X33 # adcl (%r11), %esi")
#define ADC_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X34, 0X24 # adcl (%r12), %esi")
#define ADC_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X75, 0X00 # adcl (%r13), %esi")
#define ADC_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X36 # adcl (%r14), %esi")
#define ADC_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X37 # adcl (%r15), %esi")
#define ADC_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X30 # adcl (%eax), %esi")
#define ADC_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X33 # adcl (%ebx), %esi")
#define ADC_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X31 # adcl (%ecx), %esi")
#define ADC_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X32 # adcl (%edx), %esi")
#define ADC_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X37 # adcl (%edi), %esi")
#define ADC_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X36 # adcl (%esi), %esi")
#define ADC_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X75, 0X00 # adcl (%ebp), %esi")
#define ADC_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X34, 0X24 # adcl (%esp), %esi")

#define ADC_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X28 # adcl (%rax), %ebp")
#define ADC_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X2B # adcl (%rbx), %ebp")
#define ADC_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X29 # adcl (%rcx), %ebp")
#define ADC_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X2A # adcl (%rdx), %ebp")
#define ADC_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X2F # adcl (%rdi), %ebp")
#define ADC_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X2E # adcl (%rsi), %ebp")
#define ADC_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X6D, 0X00 # adcl (%rbp), %ebp")
#define ADC_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X2C, 0X24 # adcl (%rsp), %ebp")
#define ADC_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X28 # adcl (%r8), %ebp")
#define ADC_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X29 # adcl (%r9), %ebp")
#define ADC_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X2A # adcl (%r10), %ebp")
#define ADC_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X2B # adcl (%r11), %ebp")
#define ADC_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X2C, 0X24 # adcl (%r12), %ebp")
#define ADC_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X6D, 0X00 # adcl (%r13), %ebp")
#define ADC_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X2E # adcl (%r14), %ebp")
#define ADC_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X2F # adcl (%r15), %ebp")
#define ADC_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X28 # adcl (%eax), %ebp")
#define ADC_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X2B # adcl (%ebx), %ebp")
#define ADC_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X29 # adcl (%ecx), %ebp")
#define ADC_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X2A # adcl (%edx), %ebp")
#define ADC_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X2F # adcl (%edi), %ebp")
#define ADC_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X2E # adcl (%esi), %ebp")
#define ADC_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X6D, 0X00 # adcl (%ebp), %ebp")
#define ADC_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X2C, 0X24 # adcl (%esp), %ebp")

#define ADC_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X13, 0X20 # adcl (%rax), %esp")
#define ADC_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X13, 0X23 # adcl (%rbx), %esp")
#define ADC_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X13, 0X21 # adcl (%rcx), %esp")
#define ADC_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X13, 0X22 # adcl (%rdx), %esp")
#define ADC_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X13, 0X27 # adcl (%rdi), %esp")
#define ADC_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X13, 0X26 # adcl (%rsi), %esp")
#define ADC_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X13, 0X65, 0X00 # adcl (%rbp), %esp")
#define ADC_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X13, 0X24, 0X24 # adcl (%rsp), %esp")
#define ADC_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X13, 0X20 # adcl (%r8), %esp")
#define ADC_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X13, 0X21 # adcl (%r9), %esp")
#define ADC_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X13, 0X22 # adcl (%r10), %esp")
#define ADC_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X13, 0X23 # adcl (%r11), %esp")
#define ADC_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X13, 0X24, 0X24 # adcl (%r12), %esp")
#define ADC_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X13, 0X65, 0X00 # adcl (%r13), %esp")
#define ADC_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X13, 0X26 # adcl (%r14), %esp")
#define ADC_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X13, 0X27 # adcl (%r15), %esp")
#define ADC_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X13, 0X20 # adcl (%eax), %esp")
#define ADC_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X13, 0X23 # adcl (%ebx), %esp")
#define ADC_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X13, 0X21 # adcl (%ecx), %esp")
#define ADC_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X13, 0X22 # adcl (%edx), %esp")
#define ADC_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X13, 0X27 # adcl (%edi), %esp")
#define ADC_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X13, 0X26 # adcl (%esi), %esp")
#define ADC_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X13, 0X65, 0X00 # adcl (%ebp), %esp")
#define ADC_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X13, 0X24, 0X24 # adcl (%esp), %esp")

#define ADC_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X00 # adcl (%rax), %r8d")
#define ADC_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X03 # adcl (%rbx), %r8d")
#define ADC_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X01 # adcl (%rcx), %r8d")
#define ADC_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X02 # adcl (%rdx), %r8d")
#define ADC_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X07 # adcl (%rdi), %r8d")
#define ADC_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X06 # adcl (%rsi), %r8d")
#define ADC_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X45, 0X00 # adcl (%rbp), %r8d")
#define ADC_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X04, 0X24 # adcl (%rsp), %r8d")
#define ADC_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X00 # adcl (%r8), %r8d")
#define ADC_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X01 # adcl (%r9), %r8d")
#define ADC_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X02 # adcl (%r10), %r8d")
#define ADC_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X03 # adcl (%r11), %r8d")
#define ADC_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X04, 0X24 # adcl (%r12), %r8d")
#define ADC_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X45, 0X00 # adcl (%r13), %r8d")
#define ADC_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X06 # adcl (%r14), %r8d")
#define ADC_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X07 # adcl (%r15), %r8d")
#define ADC_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X00 # adcl (%eax), %r8d")
#define ADC_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X03 # adcl (%ebx), %r8d")
#define ADC_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X01 # adcl (%ecx), %r8d")
#define ADC_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X02 # adcl (%edx), %r8d")
#define ADC_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X07 # adcl (%edi), %r8d")
#define ADC_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X06 # adcl (%esi), %r8d")
#define ADC_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X45, 0X00 # adcl (%ebp), %r8d")
#define ADC_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X04, 0X24 # adcl (%esp), %r8d")

#define ADC_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X08 # adcl (%rax), %r9d")
#define ADC_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X0B # adcl (%rbx), %r9d")
#define ADC_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X09 # adcl (%rcx), %r9d")
#define ADC_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X0A # adcl (%rdx), %r9d")
#define ADC_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X0F # adcl (%rdi), %r9d")
#define ADC_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X0E # adcl (%rsi), %r9d")
#define ADC_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X4D, 0X00 # adcl (%rbp), %r9d")
#define ADC_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X0C, 0X24 # adcl (%rsp), %r9d")
#define ADC_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X08 # adcl (%r8), %r9d")
#define ADC_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X09 # adcl (%r9), %r9d")
#define ADC_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X0A # adcl (%r10), %r9d")
#define ADC_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X0B # adcl (%r11), %r9d")
#define ADC_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X0C, 0X24 # adcl (%r12), %r9d")
#define ADC_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X4D, 0X00 # adcl (%r13), %r9d")
#define ADC_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X0E # adcl (%r14), %r9d")
#define ADC_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X0F # adcl (%r15), %r9d")
#define ADC_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X08 # adcl (%eax), %r9d")
#define ADC_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X0B # adcl (%ebx), %r9d")
#define ADC_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X09 # adcl (%ecx), %r9d")
#define ADC_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X0A # adcl (%edx), %r9d")
#define ADC_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X0F # adcl (%edi), %r9d")
#define ADC_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X0E # adcl (%esi), %r9d")
#define ADC_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X4D, 0X00 # adcl (%ebp), %r9d")
#define ADC_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X0C, 0X24 # adcl (%esp), %r9d")

#define ADC_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X10 # adcl (%rax), %r10d")
#define ADC_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X13 # adcl (%rbx), %r10d")
#define ADC_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X11 # adcl (%rcx), %r10d")
#define ADC_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X12 # adcl (%rdx), %r10d")
#define ADC_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X17 # adcl (%rdi), %r10d")
#define ADC_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X16 # adcl (%rsi), %r10d")
#define ADC_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X55, 0X00 # adcl (%rbp), %r10d")
#define ADC_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X14, 0X24 # adcl (%rsp), %r10d")
#define ADC_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X10 # adcl (%r8), %r10d")
#define ADC_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X11 # adcl (%r9), %r10d")
#define ADC_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X12 # adcl (%r10), %r10d")
#define ADC_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X13 # adcl (%r11), %r10d")
#define ADC_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X14, 0X24 # adcl (%r12), %r10d")
#define ADC_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X55, 0X00 # adcl (%r13), %r10d")
#define ADC_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X16 # adcl (%r14), %r10d")
#define ADC_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X17 # adcl (%r15), %r10d")
#define ADC_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X10 # adcl (%eax), %r10d")
#define ADC_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X13 # adcl (%ebx), %r10d")
#define ADC_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X11 # adcl (%ecx), %r10d")
#define ADC_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X12 # adcl (%edx), %r10d")
#define ADC_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X17 # adcl (%edi), %r10d")
#define ADC_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X16 # adcl (%esi), %r10d")
#define ADC_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X55, 0X00 # adcl (%ebp), %r10d")
#define ADC_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X14, 0X24 # adcl (%esp), %r10d")

#define ADC_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X18 # adcl (%rax), %r11d")
#define ADC_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X1B # adcl (%rbx), %r11d")
#define ADC_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X19 # adcl (%rcx), %r11d")
#define ADC_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X1A # adcl (%rdx), %r11d")
#define ADC_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X1F # adcl (%rdi), %r11d")
#define ADC_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X1E # adcl (%rsi), %r11d")
#define ADC_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X5D, 0X00 # adcl (%rbp), %r11d")
#define ADC_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X1C, 0X24 # adcl (%rsp), %r11d")
#define ADC_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X18 # adcl (%r8), %r11d")
#define ADC_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X19 # adcl (%r9), %r11d")
#define ADC_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X1A # adcl (%r10), %r11d")
#define ADC_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X1B # adcl (%r11), %r11d")
#define ADC_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X1C, 0X24 # adcl (%r12), %r11d")
#define ADC_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X5D, 0X00 # adcl (%r13), %r11d")
#define ADC_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X1E # adcl (%r14), %r11d")
#define ADC_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X1F # adcl (%r15), %r11d")
#define ADC_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X18 # adcl (%eax), %r11d")
#define ADC_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X1B # adcl (%ebx), %r11d")
#define ADC_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X19 # adcl (%ecx), %r11d")
#define ADC_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X1A # adcl (%edx), %r11d")
#define ADC_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X1F # adcl (%edi), %r11d")
#define ADC_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X1E # adcl (%esi), %r11d")
#define ADC_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X5D, 0X00 # adcl (%ebp), %r11d")
#define ADC_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X1C, 0X24 # adcl (%esp), %r11d")

#define ADC_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X20 # adcl (%rax), %r12d")
#define ADC_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X23 # adcl (%rbx), %r12d")
#define ADC_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X21 # adcl (%rcx), %r12d")
#define ADC_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X22 # adcl (%rdx), %r12d")
#define ADC_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X27 # adcl (%rdi), %r12d")
#define ADC_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X26 # adcl (%rsi), %r12d")
#define ADC_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X65, 0X00 # adcl (%rbp), %r12d")
#define ADC_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X24, 0X24 # adcl (%rsp), %r12d")
#define ADC_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X20 # adcl (%r8), %r12d")
#define ADC_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X21 # adcl (%r9), %r12d")
#define ADC_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X22 # adcl (%r10), %r12d")
#define ADC_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X23 # adcl (%r11), %r12d")
#define ADC_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X24, 0X24 # adcl (%r12), %r12d")
#define ADC_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X65, 0X00 # adcl (%r13), %r12d")
#define ADC_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X26 # adcl (%r14), %r12d")
#define ADC_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X27 # adcl (%r15), %r12d")
#define ADC_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X20 # adcl (%eax), %r12d")
#define ADC_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X23 # adcl (%ebx), %r12d")
#define ADC_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X21 # adcl (%ecx), %r12d")
#define ADC_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X22 # adcl (%edx), %r12d")
#define ADC_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X27 # adcl (%edi), %r12d")
#define ADC_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X26 # adcl (%esi), %r12d")
#define ADC_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X65, 0X00 # adcl (%ebp), %r12d")
#define ADC_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X24, 0X24 # adcl (%esp), %r12d")

#define ADC_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X28 # adcl (%rax), %r13d")
#define ADC_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X2B # adcl (%rbx), %r13d")
#define ADC_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X29 # adcl (%rcx), %r13d")
#define ADC_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X2A # adcl (%rdx), %r13d")
#define ADC_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X2F # adcl (%rdi), %r13d")
#define ADC_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X2E # adcl (%rsi), %r13d")
#define ADC_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X6D, 0X00 # adcl (%rbp), %r13d")
#define ADC_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X2C, 0X24 # adcl (%rsp), %r13d")
#define ADC_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X28 # adcl (%r8), %r13d")
#define ADC_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X29 # adcl (%r9), %r13d")
#define ADC_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X2A # adcl (%r10), %r13d")
#define ADC_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X2B # adcl (%r11), %r13d")
#define ADC_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X2C, 0X24 # adcl (%r12), %r13d")
#define ADC_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X6D, 0X00 # adcl (%r13), %r13d")
#define ADC_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X2E # adcl (%r14), %r13d")
#define ADC_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X2F # adcl (%r15), %r13d")
#define ADC_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X28 # adcl (%eax), %r13d")
#define ADC_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X2B # adcl (%ebx), %r13d")
#define ADC_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X29 # adcl (%ecx), %r13d")
#define ADC_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X2A # adcl (%edx), %r13d")
#define ADC_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X2F # adcl (%edi), %r13d")
#define ADC_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X2E # adcl (%esi), %r13d")
#define ADC_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X6D, 0X00 # adcl (%ebp), %r13d")
#define ADC_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X2C, 0X24 # adcl (%esp), %r13d")

#define ADC_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X30 # adcl (%rax), %r14d")
#define ADC_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X33 # adcl (%rbx), %r14d")
#define ADC_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X31 # adcl (%rcx), %r14d")
#define ADC_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X32 # adcl (%rdx), %r14d")
#define ADC_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X37 # adcl (%rdi), %r14d")
#define ADC_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X36 # adcl (%rsi), %r14d")
#define ADC_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X75, 0X00 # adcl (%rbp), %r14d")
#define ADC_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X34, 0X24 # adcl (%rsp), %r14d")
#define ADC_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X30 # adcl (%r8), %r14d")
#define ADC_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X31 # adcl (%r9), %r14d")
#define ADC_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X32 # adcl (%r10), %r14d")
#define ADC_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X33 # adcl (%r11), %r14d")
#define ADC_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X34, 0X24 # adcl (%r12), %r14d")
#define ADC_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X75, 0X00 # adcl (%r13), %r14d")
#define ADC_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X36 # adcl (%r14), %r14d")
#define ADC_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X37 # adcl (%r15), %r14d")
#define ADC_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X30 # adcl (%eax), %r14d")
#define ADC_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X33 # adcl (%ebx), %r14d")
#define ADC_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X31 # adcl (%ecx), %r14d")
#define ADC_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X32 # adcl (%edx), %r14d")
#define ADC_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X37 # adcl (%edi), %r14d")
#define ADC_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X36 # adcl (%esi), %r14d")
#define ADC_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X75, 0X00 # adcl (%ebp), %r14d")
#define ADC_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X34, 0X24 # adcl (%esp), %r14d")

#define ADC_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X13, 0X38 # adcl (%rax), %r15d")
#define ADC_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X13, 0X3B # adcl (%rbx), %r15d")
#define ADC_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X13, 0X39 # adcl (%rcx), %r15d")
#define ADC_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X13, 0X3A # adcl (%rdx), %r15d")
#define ADC_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X13, 0X3F # adcl (%rdi), %r15d")
#define ADC_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X13, 0X3E # adcl (%rsi), %r15d")
#define ADC_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X13, 0X7D, 0X00 # adcl (%rbp), %r15d")
#define ADC_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X13, 0X3C, 0X24 # adcl (%rsp), %r15d")
#define ADC_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X13, 0X38 # adcl (%r8), %r15d")
#define ADC_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X13, 0X39 # adcl (%r9), %r15d")
#define ADC_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X13, 0X3A # adcl (%r10), %r15d")
#define ADC_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X13, 0X3B # adcl (%r11), %r15d")
#define ADC_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X13, 0X3C, 0X24 # adcl (%r12), %r15d")
#define ADC_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X13, 0X7D, 0X00 # adcl (%r13), %r15d")
#define ADC_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X13, 0X3E # adcl (%r14), %r15d")
#define ADC_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X13, 0X3F # adcl (%r15), %r15d")
#define ADC_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X38 # adcl (%eax), %r15d")
#define ADC_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X3B # adcl (%ebx), %r15d")
#define ADC_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X39 # adcl (%ecx), %r15d")
#define ADC_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X13, 0X3A # adcl (%edx), %r15d")
#define ADC_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X3F # adcl (%edi), %r15d")
#define ADC_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X13, 0X3E # adcl (%esi), %r15d")
#define ADC_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X7D, 0X00 # adcl (%ebp), %r15d")
#define ADC_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X13, 0X3C, 0X24 # adcl (%esp), %r15d")

#define ADC_EAX_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X00 # adcl %eax, (%rax)")
#define ADC_EAX_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X03 # adcl %eax, (%rbx)")
#define ADC_EAX_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X01 # adcl %eax, (%rcx)")
#define ADC_EAX_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X02 # adcl %eax, (%rdx)")
#define ADC_EAX_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X07 # adcl %eax, (%rdi)")
#define ADC_EAX_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X06 # adcl %eax, (%rsi)")
#define ADC_EAX_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X45, 0X00 # adcl %eax, (%rbp)")
#define ADC_EAX_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X04, 0X24 # adcl %eax, (%rsp)")
#define ADC_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X00 # adcl %eax, (%r8)")
#define ADC_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X01 # adcl %eax, (%r9)")
#define ADC_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X02 # adcl %eax, (%r10)")
#define ADC_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X03 # adcl %eax, (%r11)")
#define ADC_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X04, 0X24 # adcl %eax, (%r12)")
#define ADC_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X45, 0X00 # adcl %eax, (%r13)")
#define ADC_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X06 # adcl %eax, (%r14)")
#define ADC_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X07 # adcl %eax, (%r15)")
#define ADC_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X00 # adcl %eax, (%eax)")
#define ADC_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X03 # adcl %eax, (%ebx)")
#define ADC_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X01 # adcl %eax, (%ecx)")
#define ADC_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X02 # adcl %eax, (%edx)")
#define ADC_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X07 # adcl %eax, (%edi)")
#define ADC_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X06 # adcl %eax, (%esi)")
#define ADC_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X45, 0X00 # adcl %eax, (%ebp)")
#define ADC_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X04, 0X24 # adcl %eax, (%esp)")

#define ADC_EBX_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X18 # adcl %ebx, (%rax)")
#define ADC_EBX_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X1B # adcl %ebx, (%rbx)")
#define ADC_EBX_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X19 # adcl %ebx, (%rcx)")
#define ADC_EBX_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X1A # adcl %ebx, (%rdx)")
#define ADC_EBX_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X1F # adcl %ebx, (%rdi)")
#define ADC_EBX_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X1E # adcl %ebx, (%rsi)")
#define ADC_EBX_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X5D, 0X00 # adcl %ebx, (%rbp)")
#define ADC_EBX_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X1C, 0X24 # adcl %ebx, (%rsp)")
#define ADC_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X18 # adcl %ebx, (%r8)")
#define ADC_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X19 # adcl %ebx, (%r9)")
#define ADC_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X1A # adcl %ebx, (%r10)")
#define ADC_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X1B # adcl %ebx, (%r11)")
#define ADC_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X1C, 0X24 # adcl %ebx, (%r12)")
#define ADC_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X5D, 0X00 # adcl %ebx, (%r13)")
#define ADC_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X1E # adcl %ebx, (%r14)")
#define ADC_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X1F # adcl %ebx, (%r15)")
#define ADC_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X18 # adcl %ebx, (%eax)")
#define ADC_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X1B # adcl %ebx, (%ebx)")
#define ADC_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X19 # adcl %ebx, (%ecx)")
#define ADC_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X1A # adcl %ebx, (%edx)")
#define ADC_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X1F # adcl %ebx, (%edi)")
#define ADC_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X1E # adcl %ebx, (%esi)")
#define ADC_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X5D, 0X00 # adcl %ebx, (%ebp)")
#define ADC_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X1C, 0X24 # adcl %ebx, (%esp)")

#define ADC_ECX_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X08 # adcl %ecx, (%rax)")
#define ADC_ECX_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X0B # adcl %ecx, (%rbx)")
#define ADC_ECX_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X09 # adcl %ecx, (%rcx)")
#define ADC_ECX_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X0A # adcl %ecx, (%rdx)")
#define ADC_ECX_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X0F # adcl %ecx, (%rdi)")
#define ADC_ECX_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X0E # adcl %ecx, (%rsi)")
#define ADC_ECX_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X4D, 0X00 # adcl %ecx, (%rbp)")
#define ADC_ECX_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X0C, 0X24 # adcl %ecx, (%rsp)")
#define ADC_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X08 # adcl %ecx, (%r8)")
#define ADC_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X09 # adcl %ecx, (%r9)")
#define ADC_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X0A # adcl %ecx, (%r10)")
#define ADC_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X0B # adcl %ecx, (%r11)")
#define ADC_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X0C, 0X24 # adcl %ecx, (%r12)")
#define ADC_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X4D, 0X00 # adcl %ecx, (%r13)")
#define ADC_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X0E # adcl %ecx, (%r14)")
#define ADC_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X0F # adcl %ecx, (%r15)")
#define ADC_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X08 # adcl %ecx, (%eax)")
#define ADC_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X0B # adcl %ecx, (%ebx)")
#define ADC_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X09 # adcl %ecx, (%ecx)")
#define ADC_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X0A # adcl %ecx, (%edx)")
#define ADC_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X0F # adcl %ecx, (%edi)")
#define ADC_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X0E # adcl %ecx, (%esi)")
#define ADC_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X4D, 0X00 # adcl %ecx, (%ebp)")
#define ADC_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X0C, 0X24 # adcl %ecx, (%esp)")

#define ADC_EDX_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X10 # adcl %edx, (%rax)")
#define ADC_EDX_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X13 # adcl %edx, (%rbx)")
#define ADC_EDX_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X11 # adcl %edx, (%rcx)")
#define ADC_EDX_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X12 # adcl %edx, (%rdx)")
#define ADC_EDX_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X17 # adcl %edx, (%rdi)")
#define ADC_EDX_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X16 # adcl %edx, (%rsi)")
#define ADC_EDX_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X55, 0X00 # adcl %edx, (%rbp)")
#define ADC_EDX_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X14, 0X24 # adcl %edx, (%rsp)")
#define ADC_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X10 # adcl %edx, (%r8)")
#define ADC_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X11 # adcl %edx, (%r9)")
#define ADC_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X12 # adcl %edx, (%r10)")
#define ADC_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X13 # adcl %edx, (%r11)")
#define ADC_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X14, 0X24 # adcl %edx, (%r12)")
#define ADC_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X55, 0X00 # adcl %edx, (%r13)")
#define ADC_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X16 # adcl %edx, (%r14)")
#define ADC_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X17 # adcl %edx, (%r15)")
#define ADC_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X10 # adcl %edx, (%eax)")
#define ADC_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X13 # adcl %edx, (%ebx)")
#define ADC_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X11 # adcl %edx, (%ecx)")
#define ADC_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X12 # adcl %edx, (%edx)")
#define ADC_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X17 # adcl %edx, (%edi)")
#define ADC_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X16 # adcl %edx, (%esi)")
#define ADC_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X55, 0X00 # adcl %edx, (%ebp)")
#define ADC_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X14, 0X24 # adcl %edx, (%esp)")

#define ADC_EDI_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X38 # adcl %edi, (%rax)")
#define ADC_EDI_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X3B # adcl %edi, (%rbx)")
#define ADC_EDI_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X39 # adcl %edi, (%rcx)")
#define ADC_EDI_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X3A # adcl %edi, (%rdx)")
#define ADC_EDI_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X3F # adcl %edi, (%rdi)")
#define ADC_EDI_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X3E # adcl %edi, (%rsi)")
#define ADC_EDI_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X7D, 0X00 # adcl %edi, (%rbp)")
#define ADC_EDI_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X3C, 0X24 # adcl %edi, (%rsp)")
#define ADC_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X38 # adcl %edi, (%r8)")
#define ADC_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X39 # adcl %edi, (%r9)")
#define ADC_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X3A # adcl %edi, (%r10)")
#define ADC_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X3B # adcl %edi, (%r11)")
#define ADC_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X3C, 0X24 # adcl %edi, (%r12)")
#define ADC_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X7D, 0X00 # adcl %edi, (%r13)")
#define ADC_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X3E # adcl %edi, (%r14)")
#define ADC_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X3F # adcl %edi, (%r15)")
#define ADC_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X38 # adcl %edi, (%eax)")
#define ADC_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X3B # adcl %edi, (%ebx)")
#define ADC_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X39 # adcl %edi, (%ecx)")
#define ADC_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X3A # adcl %edi, (%edx)")
#define ADC_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X3F # adcl %edi, (%edi)")
#define ADC_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X3E # adcl %edi, (%esi)")
#define ADC_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X7D, 0X00 # adcl %edi, (%ebp)")
#define ADC_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X3C, 0X24 # adcl %edi, (%esp)")

#define ADC_ESI_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X30 # adcl %esi, (%rax)")
#define ADC_ESI_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X33 # adcl %esi, (%rbx)")
#define ADC_ESI_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X31 # adcl %esi, (%rcx)")
#define ADC_ESI_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X32 # adcl %esi, (%rdx)")
#define ADC_ESI_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X37 # adcl %esi, (%rdi)")
#define ADC_ESI_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X36 # adcl %esi, (%rsi)")
#define ADC_ESI_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X75, 0X00 # adcl %esi, (%rbp)")
#define ADC_ESI_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X34, 0X24 # adcl %esi, (%rsp)")
#define ADC_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X30 # adcl %esi, (%r8)")
#define ADC_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X31 # adcl %esi, (%r9)")
#define ADC_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X32 # adcl %esi, (%r10)")
#define ADC_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X33 # adcl %esi, (%r11)")
#define ADC_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X34, 0X24 # adcl %esi, (%r12)")
#define ADC_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X75, 0X00 # adcl %esi, (%r13)")
#define ADC_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X36 # adcl %esi, (%r14)")
#define ADC_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X37 # adcl %esi, (%r15)")
#define ADC_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X30 # adcl %esi, (%eax)")
#define ADC_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X33 # adcl %esi, (%ebx)")
#define ADC_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X31 # adcl %esi, (%ecx)")
#define ADC_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X32 # adcl %esi, (%edx)")
#define ADC_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X37 # adcl %esi, (%edi)")
#define ADC_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X36 # adcl %esi, (%esi)")
#define ADC_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X75, 0X00 # adcl %esi, (%ebp)")
#define ADC_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X34, 0X24 # adcl %esi, (%esp)")

#define ADC_EBP_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X28 # adcl %ebp, (%rax)")
#define ADC_EBP_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X2B # adcl %ebp, (%rbx)")
#define ADC_EBP_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X29 # adcl %ebp, (%rcx)")
#define ADC_EBP_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X2A # adcl %ebp, (%rdx)")
#define ADC_EBP_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X2F # adcl %ebp, (%rdi)")
#define ADC_EBP_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X2E # adcl %ebp, (%rsi)")
#define ADC_EBP_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X6D, 0X00 # adcl %ebp, (%rbp)")
#define ADC_EBP_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X2C, 0X24 # adcl %ebp, (%rsp)")
#define ADC_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X28 # adcl %ebp, (%r8)")
#define ADC_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X29 # adcl %ebp, (%r9)")
#define ADC_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X2A # adcl %ebp, (%r10)")
#define ADC_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X2B # adcl %ebp, (%r11)")
#define ADC_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X2C, 0X24 # adcl %ebp, (%r12)")
#define ADC_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X6D, 0X00 # adcl %ebp, (%r13)")
#define ADC_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X2E # adcl %ebp, (%r14)")
#define ADC_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X2F # adcl %ebp, (%r15)")
#define ADC_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X28 # adcl %ebp, (%eax)")
#define ADC_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X2B # adcl %ebp, (%ebx)")
#define ADC_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X29 # adcl %ebp, (%ecx)")
#define ADC_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X2A # adcl %ebp, (%edx)")
#define ADC_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X2F # adcl %ebp, (%edi)")
#define ADC_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X2E # adcl %ebp, (%esi)")
#define ADC_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X6D, 0X00 # adcl %ebp, (%ebp)")
#define ADC_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X2C, 0X24 # adcl %ebp, (%esp)")

#define ADC_ESP_TO_PTR_RAX CMT_ASM(".byte 0X11, 0X20 # adcl %esp, (%rax)")
#define ADC_ESP_TO_PTR_RBX CMT_ASM(".byte 0X11, 0X23 # adcl %esp, (%rbx)")
#define ADC_ESP_TO_PTR_RCX CMT_ASM(".byte 0X11, 0X21 # adcl %esp, (%rcx)")
#define ADC_ESP_TO_PTR_RDX CMT_ASM(".byte 0X11, 0X22 # adcl %esp, (%rdx)")
#define ADC_ESP_TO_PTR_RDI CMT_ASM(".byte 0X11, 0X27 # adcl %esp, (%rdi)")
#define ADC_ESP_TO_PTR_RSI CMT_ASM(".byte 0X11, 0X26 # adcl %esp, (%rsi)")
#define ADC_ESP_TO_PTR_RBP CMT_ASM(".byte 0X11, 0X65, 0X00 # adcl %esp, (%rbp)")
#define ADC_ESP_TO_PTR_RSP CMT_ASM(".byte 0X11, 0X24, 0X24 # adcl %esp, (%rsp)")
#define ADC_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X11, 0X20 # adcl %esp, (%r8)")
#define ADC_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X11, 0X21 # adcl %esp, (%r9)")
#define ADC_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X11, 0X22 # adcl %esp, (%r10)")
#define ADC_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X11, 0X23 # adcl %esp, (%r11)")
#define ADC_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X11, 0X24, 0X24 # adcl %esp, (%r12)")
#define ADC_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X11, 0X65, 0X00 # adcl %esp, (%r13)")
#define ADC_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X11, 0X26 # adcl %esp, (%r14)")
#define ADC_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X11, 0X27 # adcl %esp, (%r15)")
#define ADC_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X11, 0X20 # adcl %esp, (%eax)")
#define ADC_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X11, 0X23 # adcl %esp, (%ebx)")
#define ADC_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X11, 0X21 # adcl %esp, (%ecx)")
#define ADC_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X11, 0X22 # adcl %esp, (%edx)")
#define ADC_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X11, 0X27 # adcl %esp, (%edi)")
#define ADC_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X11, 0X26 # adcl %esp, (%esi)")
#define ADC_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X11, 0X65, 0X00 # adcl %esp, (%ebp)")
#define ADC_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X11, 0X24, 0X24 # adcl %esp, (%esp)")

#define ADC_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X00 # adcl %r8d, (%rax)")
#define ADC_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X03 # adcl %r8d, (%rbx)")
#define ADC_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X01 # adcl %r8d, (%rcx)")
#define ADC_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X02 # adcl %r8d, (%rdx)")
#define ADC_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X07 # adcl %r8d, (%rdi)")
#define ADC_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X06 # adcl %r8d, (%rsi)")
#define ADC_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X45, 0X00 # adcl %r8d, (%rbp)")
#define ADC_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X04, 0X24 # adcl %r8d, (%rsp)")
#define ADC_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X00 # adcl %r8d, (%r8)")
#define ADC_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X01 # adcl %r8d, (%r9)")
#define ADC_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X02 # adcl %r8d, (%r10)")
#define ADC_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X03 # adcl %r8d, (%r11)")
#define ADC_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X04, 0X24 # adcl %r8d, (%r12)")
#define ADC_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X45, 0X00 # adcl %r8d, (%r13)")
#define ADC_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X06 # adcl %r8d, (%r14)")
#define ADC_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X07 # adcl %r8d, (%r15)")
#define ADC_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X00 # adcl %r8d, (%eax)")
#define ADC_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X03 # adcl %r8d, (%ebx)")
#define ADC_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X01 # adcl %r8d, (%ecx)")
#define ADC_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X02 # adcl %r8d, (%edx)")
#define ADC_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X07 # adcl %r8d, (%edi)")
#define ADC_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X06 # adcl %r8d, (%esi)")
#define ADC_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X45, 0X00 # adcl %r8d, (%ebp)")
#define ADC_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X04, 0X24 # adcl %r8d, (%esp)")

#define ADC_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X08 # adcl %r9d, (%rax)")
#define ADC_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X0B # adcl %r9d, (%rbx)")
#define ADC_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X09 # adcl %r9d, (%rcx)")
#define ADC_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X0A # adcl %r9d, (%rdx)")
#define ADC_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X0F # adcl %r9d, (%rdi)")
#define ADC_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X0E # adcl %r9d, (%rsi)")
#define ADC_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X4D, 0X00 # adcl %r9d, (%rbp)")
#define ADC_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X0C, 0X24 # adcl %r9d, (%rsp)")
#define ADC_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X08 # adcl %r9d, (%r8)")
#define ADC_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X09 # adcl %r9d, (%r9)")
#define ADC_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X0A # adcl %r9d, (%r10)")
#define ADC_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X0B # adcl %r9d, (%r11)")
#define ADC_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X0C, 0X24 # adcl %r9d, (%r12)")
#define ADC_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X4D, 0X00 # adcl %r9d, (%r13)")
#define ADC_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X0E # adcl %r9d, (%r14)")
#define ADC_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X0F # adcl %r9d, (%r15)")
#define ADC_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X08 # adcl %r9d, (%eax)")
#define ADC_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X0B # adcl %r9d, (%ebx)")
#define ADC_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X09 # adcl %r9d, (%ecx)")
#define ADC_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X0A # adcl %r9d, (%edx)")
#define ADC_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X0F # adcl %r9d, (%edi)")
#define ADC_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X0E # adcl %r9d, (%esi)")
#define ADC_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X4D, 0X00 # adcl %r9d, (%ebp)")
#define ADC_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X0C, 0X24 # adcl %r9d, (%esp)")

#define ADC_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X10 # adcl %r10d, (%rax)")
#define ADC_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X13 # adcl %r10d, (%rbx)")
#define ADC_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X11 # adcl %r10d, (%rcx)")
#define ADC_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X12 # adcl %r10d, (%rdx)")
#define ADC_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X17 # adcl %r10d, (%rdi)")
#define ADC_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X16 # adcl %r10d, (%rsi)")
#define ADC_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X55, 0X00 # adcl %r10d, (%rbp)")
#define ADC_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X14, 0X24 # adcl %r10d, (%rsp)")
#define ADC_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X10 # adcl %r10d, (%r8)")
#define ADC_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X11 # adcl %r10d, (%r9)")
#define ADC_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X12 # adcl %r10d, (%r10)")
#define ADC_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X13 # adcl %r10d, (%r11)")
#define ADC_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X14, 0X24 # adcl %r10d, (%r12)")
#define ADC_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X55, 0X00 # adcl %r10d, (%r13)")
#define ADC_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X16 # adcl %r10d, (%r14)")
#define ADC_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X17 # adcl %r10d, (%r15)")
#define ADC_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X10 # adcl %r10d, (%eax)")
#define ADC_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X13 # adcl %r10d, (%ebx)")
#define ADC_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X11 # adcl %r10d, (%ecx)")
#define ADC_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X12 # adcl %r10d, (%edx)")
#define ADC_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X17 # adcl %r10d, (%edi)")
#define ADC_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X16 # adcl %r10d, (%esi)")
#define ADC_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X55, 0X00 # adcl %r10d, (%ebp)")
#define ADC_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X14, 0X24 # adcl %r10d, (%esp)")

#define ADC_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X18 # adcl %r11d, (%rax)")
#define ADC_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X1B # adcl %r11d, (%rbx)")
#define ADC_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X19 # adcl %r11d, (%rcx)")
#define ADC_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X1A # adcl %r11d, (%rdx)")
#define ADC_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X1F # adcl %r11d, (%rdi)")
#define ADC_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X1E # adcl %r11d, (%rsi)")
#define ADC_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X5D, 0X00 # adcl %r11d, (%rbp)")
#define ADC_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X1C, 0X24 # adcl %r11d, (%rsp)")
#define ADC_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X18 # adcl %r11d, (%r8)")
#define ADC_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X19 # adcl %r11d, (%r9)")
#define ADC_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X1A # adcl %r11d, (%r10)")
#define ADC_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X1B # adcl %r11d, (%r11)")
#define ADC_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X1C, 0X24 # adcl %r11d, (%r12)")
#define ADC_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X5D, 0X00 # adcl %r11d, (%r13)")
#define ADC_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X1E # adcl %r11d, (%r14)")
#define ADC_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X1F # adcl %r11d, (%r15)")
#define ADC_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X18 # adcl %r11d, (%eax)")
#define ADC_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X1B # adcl %r11d, (%ebx)")
#define ADC_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X19 # adcl %r11d, (%ecx)")
#define ADC_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X1A # adcl %r11d, (%edx)")
#define ADC_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X1F # adcl %r11d, (%edi)")
#define ADC_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X1E # adcl %r11d, (%esi)")
#define ADC_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X5D, 0X00 # adcl %r11d, (%ebp)")
#define ADC_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X1C, 0X24 # adcl %r11d, (%esp)")

#define ADC_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X20 # adcl %r12d, (%rax)")
#define ADC_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X23 # adcl %r12d, (%rbx)")
#define ADC_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X21 # adcl %r12d, (%rcx)")
#define ADC_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X22 # adcl %r12d, (%rdx)")
#define ADC_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X27 # adcl %r12d, (%rdi)")
#define ADC_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X26 # adcl %r12d, (%rsi)")
#define ADC_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X65, 0X00 # adcl %r12d, (%rbp)")
#define ADC_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X24, 0X24 # adcl %r12d, (%rsp)")
#define ADC_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X20 # adcl %r12d, (%r8)")
#define ADC_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X21 # adcl %r12d, (%r9)")
#define ADC_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X22 # adcl %r12d, (%r10)")
#define ADC_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X23 # adcl %r12d, (%r11)")
#define ADC_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X24, 0X24 # adcl %r12d, (%r12)")
#define ADC_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X65, 0X00 # adcl %r12d, (%r13)")
#define ADC_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X26 # adcl %r12d, (%r14)")
#define ADC_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X27 # adcl %r12d, (%r15)")
#define ADC_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X20 # adcl %r12d, (%eax)")
#define ADC_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X23 # adcl %r12d, (%ebx)")
#define ADC_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X21 # adcl %r12d, (%ecx)")
#define ADC_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X22 # adcl %r12d, (%edx)")
#define ADC_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X27 # adcl %r12d, (%edi)")
#define ADC_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X26 # adcl %r12d, (%esi)")
#define ADC_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X65, 0X00 # adcl %r12d, (%ebp)")
#define ADC_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X24, 0X24 # adcl %r12d, (%esp)")

#define ADC_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X28 # adcl %r13d, (%rax)")
#define ADC_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X2B # adcl %r13d, (%rbx)")
#define ADC_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X29 # adcl %r13d, (%rcx)")
#define ADC_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X2A # adcl %r13d, (%rdx)")
#define ADC_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X2F # adcl %r13d, (%rdi)")
#define ADC_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X2E # adcl %r13d, (%rsi)")
#define ADC_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X6D, 0X00 # adcl %r13d, (%rbp)")
#define ADC_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X2C, 0X24 # adcl %r13d, (%rsp)")
#define ADC_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X28 # adcl %r13d, (%r8)")
#define ADC_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X29 # adcl %r13d, (%r9)")
#define ADC_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X2A # adcl %r13d, (%r10)")
#define ADC_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X2B # adcl %r13d, (%r11)")
#define ADC_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X2C, 0X24 # adcl %r13d, (%r12)")
#define ADC_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X6D, 0X00 # adcl %r13d, (%r13)")
#define ADC_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X2E # adcl %r13d, (%r14)")
#define ADC_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X2F # adcl %r13d, (%r15)")
#define ADC_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X28 # adcl %r13d, (%eax)")
#define ADC_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X2B # adcl %r13d, (%ebx)")
#define ADC_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X29 # adcl %r13d, (%ecx)")
#define ADC_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X2A # adcl %r13d, (%edx)")
#define ADC_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X2F # adcl %r13d, (%edi)")
#define ADC_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X2E # adcl %r13d, (%esi)")
#define ADC_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X6D, 0X00 # adcl %r13d, (%ebp)")
#define ADC_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X2C, 0X24 # adcl %r13d, (%esp)")

#define ADC_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X30 # adcl %r14d, (%rax)")
#define ADC_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X33 # adcl %r14d, (%rbx)")
#define ADC_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X31 # adcl %r14d, (%rcx)")
#define ADC_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X32 # adcl %r14d, (%rdx)")
#define ADC_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X37 # adcl %r14d, (%rdi)")
#define ADC_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X36 # adcl %r14d, (%rsi)")
#define ADC_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X75, 0X00 # adcl %r14d, (%rbp)")
#define ADC_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X34, 0X24 # adcl %r14d, (%rsp)")
#define ADC_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X30 # adcl %r14d, (%r8)")
#define ADC_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X31 # adcl %r14d, (%r9)")
#define ADC_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X32 # adcl %r14d, (%r10)")
#define ADC_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X33 # adcl %r14d, (%r11)")
#define ADC_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X34, 0X24 # adcl %r14d, (%r12)")
#define ADC_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X75, 0X00 # adcl %r14d, (%r13)")
#define ADC_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X36 # adcl %r14d, (%r14)")
#define ADC_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X37 # adcl %r14d, (%r15)")
#define ADC_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X30 # adcl %r14d, (%eax)")
#define ADC_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X33 # adcl %r14d, (%ebx)")
#define ADC_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X31 # adcl %r14d, (%ecx)")
#define ADC_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X32 # adcl %r14d, (%edx)")
#define ADC_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X37 # adcl %r14d, (%edi)")
#define ADC_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X36 # adcl %r14d, (%esi)")
#define ADC_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X75, 0X00 # adcl %r14d, (%ebp)")
#define ADC_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X34, 0X24 # adcl %r14d, (%esp)")

#define ADC_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X11, 0X38 # adcl %r15d, (%rax)")
#define ADC_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X11, 0X3B # adcl %r15d, (%rbx)")
#define ADC_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X11, 0X39 # adcl %r15d, (%rcx)")
#define ADC_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X11, 0X3A # adcl %r15d, (%rdx)")
#define ADC_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X11, 0X3F # adcl %r15d, (%rdi)")
#define ADC_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X11, 0X3E # adcl %r15d, (%rsi)")
#define ADC_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X11, 0X7D, 0X00 # adcl %r15d, (%rbp)")
#define ADC_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X11, 0X3C, 0X24 # adcl %r15d, (%rsp)")
#define ADC_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X11, 0X38 # adcl %r15d, (%r8)")
#define ADC_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X11, 0X39 # adcl %r15d, (%r9)")
#define ADC_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X11, 0X3A # adcl %r15d, (%r10)")
#define ADC_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X11, 0X3B # adcl %r15d, (%r11)")
#define ADC_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X11, 0X3C, 0X24 # adcl %r15d, (%r12)")
#define ADC_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X11, 0X7D, 0X00 # adcl %r15d, (%r13)")
#define ADC_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X11, 0X3E # adcl %r15d, (%r14)")
#define ADC_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X11, 0X3F # adcl %r15d, (%r15)")
#define ADC_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X38 # adcl %r15d, (%eax)")
#define ADC_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X3B # adcl %r15d, (%ebx)")
#define ADC_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X39 # adcl %r15d, (%ecx)")
#define ADC_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X11, 0X3A # adcl %r15d, (%edx)")
#define ADC_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X3F # adcl %r15d, (%edi)")
#define ADC_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X11, 0X3E # adcl %r15d, (%esi)")
#define ADC_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X7D, 0X00 # adcl %r15d, (%ebp)")
#define ADC_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X11, 0X3C, 0X24 # adcl %r15d, (%esp)")

#define ADC_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X80 # adcl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X83 # adcl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X81 # adcl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X82 # adcl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X87 # adcl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X86 # adcl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X85 # adcl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X80 # adcl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X81 # adcl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X82 # adcl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X83 # adcl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X85 # adcl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X86 # adcl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X87 # adcl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X80 # adcl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X83 # adcl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X81 # adcl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X82 # adcl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X87 # adcl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X86 # adcl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X85 # adcl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X98 # adcl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9B # adcl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X99 # adcl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9A # adcl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9F # adcl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9E # adcl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9D # adcl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X98 # adcl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X99 # adcl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9A # adcl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9B # adcl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9D # adcl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9E # adcl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X9F # adcl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X98 # adcl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9B # adcl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X99 # adcl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9A # adcl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9F # adcl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9E # adcl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9D # adcl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X88 # adcl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8B # adcl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X89 # adcl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8A # adcl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8F # adcl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8E # adcl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8D # adcl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X88 # adcl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X89 # adcl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8A # adcl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8B # adcl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8D # adcl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8E # adcl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X8F # adcl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X88 # adcl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8B # adcl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X89 # adcl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8A # adcl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8F # adcl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8E # adcl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8D # adcl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X90 # adcl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X93 # adcl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X91 # adcl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0X92 # adcl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X97 # adcl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0X96 # adcl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X95 # adcl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X90 # adcl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X91 # adcl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X92 # adcl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X93 # adcl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X95 # adcl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X96 # adcl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0X97 # adcl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X90 # adcl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X93 # adcl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X91 # adcl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X92 # adcl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X97 # adcl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X96 # adcl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X95 # adcl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB8 # adcl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBB # adcl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB9 # adcl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBA # adcl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBF # adcl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBE # adcl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBD # adcl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB8 # adcl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB9 # adcl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBA # adcl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBB # adcl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBD # adcl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBE # adcl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XBF # adcl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB8 # adcl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBB # adcl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB9 # adcl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBA # adcl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBF # adcl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBE # adcl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBD # adcl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB0 # adcl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB3 # adcl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB1 # adcl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB2 # adcl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB7 # adcl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB6 # adcl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB5 # adcl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB0 # adcl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB1 # adcl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB2 # adcl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB3 # adcl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB5 # adcl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB6 # adcl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XB7 # adcl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB0 # adcl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB3 # adcl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB1 # adcl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB2 # adcl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB7 # adcl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB6 # adcl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB5 # adcl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA8 # adcl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAB # adcl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA9 # adcl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAA # adcl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAF # adcl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAE # adcl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAD # adcl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA8 # adcl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA9 # adcl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAA # adcl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAB # adcl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAD # adcl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAE # adcl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XAF # adcl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA8 # adcl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAB # adcl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA9 # adcl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAA # adcl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAF # adcl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAE # adcl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAD # adcl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA0 # adcl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA3 # adcl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA1 # adcl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA2 # adcl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA7 # adcl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA6 # adcl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA5 # adcl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA0 # adcl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA1 # adcl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA2 # adcl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA3 # adcl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA5 # adcl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA6 # adcl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X13, 0XA7 # adcl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA0 # adcl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA3 # adcl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA1 # adcl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA2 # adcl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA7 # adcl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA6 # adcl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA5 # adcl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X80 # adcl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X83 # adcl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X81 # adcl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X82 # adcl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X87 # adcl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X86 # adcl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X85 # adcl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X80 # adcl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X81 # adcl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X82 # adcl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X83 # adcl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X85 # adcl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X86 # adcl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X87 # adcl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X80 # adcl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X83 # adcl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X81 # adcl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X82 # adcl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X87 # adcl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X86 # adcl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X85 # adcl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X84, 0X24 # adcl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X88 # adcl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8B # adcl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X89 # adcl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8A # adcl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8F # adcl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8E # adcl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8D # adcl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X88 # adcl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X89 # adcl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8A # adcl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8B # adcl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8D # adcl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8E # adcl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X8F # adcl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X88 # adcl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8B # adcl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X89 # adcl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8A # adcl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8F # adcl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8E # adcl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8D # adcl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X8C, 0X24 # adcl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X90 # adcl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X93 # adcl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X91 # adcl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X92 # adcl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X97 # adcl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X96 # adcl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X95 # adcl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X90 # adcl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X91 # adcl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X92 # adcl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X93 # adcl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X95 # adcl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X96 # adcl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X97 # adcl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X90 # adcl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X93 # adcl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X91 # adcl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X92 # adcl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X97 # adcl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X96 # adcl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X95 # adcl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X94, 0X24 # adcl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X98 # adcl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9B # adcl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X99 # adcl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9A # adcl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9F # adcl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9E # adcl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9D # adcl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X98 # adcl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X99 # adcl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9A # adcl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9B # adcl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9D # adcl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9E # adcl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0X9F # adcl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X98 # adcl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9B # adcl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X99 # adcl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9A # adcl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9F # adcl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9E # adcl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9D # adcl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0X9C, 0X24 # adcl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA0 # adcl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA3 # adcl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA1 # adcl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA2 # adcl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA7 # adcl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA6 # adcl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA5 # adcl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA0 # adcl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA1 # adcl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA2 # adcl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA3 # adcl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA5 # adcl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA6 # adcl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA7 # adcl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA0 # adcl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA3 # adcl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA1 # adcl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA2 # adcl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA7 # adcl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA6 # adcl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA5 # adcl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA4, 0X24 # adcl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA8 # adcl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAB # adcl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XA9 # adcl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAA # adcl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAF # adcl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAE # adcl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAD # adcl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA8 # adcl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XA9 # adcl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAA # adcl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAB # adcl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAD # adcl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAE # adcl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XAF # adcl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA8 # adcl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAB # adcl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XA9 # adcl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAA # adcl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAF # adcl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAE # adcl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAD # adcl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XAC, 0X24 # adcl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB0 # adcl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB3 # adcl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB1 # adcl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB2 # adcl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB7 # adcl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB6 # adcl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB5 # adcl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB0 # adcl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB1 # adcl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB2 # adcl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB3 # adcl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB5 # adcl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB6 # adcl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB7 # adcl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB0 # adcl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB3 # adcl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB1 # adcl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB2 # adcl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB7 # adcl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB6 # adcl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB5 # adcl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB4, 0X24 # adcl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB8 # adcl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBB # adcl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XB9 # adcl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBA # adcl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBF # adcl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBE # adcl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBD # adcl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB8 # adcl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XB9 # adcl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBA # adcl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBB # adcl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBD # adcl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBE # adcl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X13, 0XBF # adcl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB8 # adcl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBB # adcl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XB9 # adcl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBA # adcl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBF # adcl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBE # adcl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBD # adcl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X13, 0XBC, 0X24 # adcl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X80 # adcl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X83 # adcl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X81 # adcl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X82 # adcl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X87 # adcl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X86 # adcl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X85 # adcl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X84, 0X24 # adcl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X80 # adcl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X81 # adcl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X82 # adcl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X83 # adcl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X84, 0X24 # adcl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X85 # adcl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X86 # adcl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X87 # adcl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X80 # adcl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X83 # adcl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X81 # adcl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X82 # adcl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X87 # adcl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X86 # adcl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X85 # adcl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X84, 0X24 # adcl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X98 # adcl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9B # adcl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X99 # adcl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9A # adcl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9F # adcl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9E # adcl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9D # adcl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X9C, 0X24 # adcl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X98 # adcl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X99 # adcl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9A # adcl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9B # adcl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9C, 0X24 # adcl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9D # adcl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9E # adcl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X9F # adcl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X98 # adcl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9B # adcl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X99 # adcl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9A # adcl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9F # adcl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9E # adcl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9D # adcl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X9C, 0X24 # adcl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X88 # adcl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8B # adcl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X89 # adcl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8A # adcl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8F # adcl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8E # adcl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8D # adcl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X8C, 0X24 # adcl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X88 # adcl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X89 # adcl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8A # adcl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8B # adcl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8C, 0X24 # adcl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8D # adcl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8E # adcl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X8F # adcl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X88 # adcl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8B # adcl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X89 # adcl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8A # adcl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8F # adcl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8E # adcl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8D # adcl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X8C, 0X24 # adcl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X90 # adcl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X93 # adcl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X91 # adcl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0X92 # adcl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X97 # adcl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0X96 # adcl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X95 # adcl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0X94, 0X24 # adcl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X90 # adcl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X91 # adcl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X92 # adcl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X93 # adcl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X94, 0X24 # adcl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X95 # adcl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X96 # adcl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0X97 # adcl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X90 # adcl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X93 # adcl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X91 # adcl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X92 # adcl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X97 # adcl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X96 # adcl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X95 # adcl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0X94, 0X24 # adcl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB8 # adcl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBB # adcl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB9 # adcl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBA # adcl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBF # adcl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBE # adcl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBD # adcl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XBC, 0X24 # adcl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB8 # adcl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB9 # adcl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBA # adcl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBB # adcl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBC, 0X24 # adcl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBD # adcl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBE # adcl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XBF # adcl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB8 # adcl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBB # adcl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB9 # adcl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBA # adcl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBF # adcl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBE # adcl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBD # adcl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XBC, 0X24 # adcl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB0 # adcl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB3 # adcl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB1 # adcl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB2 # adcl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB7 # adcl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB6 # adcl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB5 # adcl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XB4, 0X24 # adcl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB0 # adcl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB1 # adcl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB2 # adcl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB3 # adcl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB4, 0X24 # adcl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB5 # adcl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB6 # adcl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XB7 # adcl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB0 # adcl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB3 # adcl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB1 # adcl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB2 # adcl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB7 # adcl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB6 # adcl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB5 # adcl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XB4, 0X24 # adcl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA8 # adcl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAB # adcl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA9 # adcl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAA # adcl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAF # adcl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAE # adcl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAD # adcl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XAC, 0X24 # adcl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA8 # adcl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA9 # adcl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAA # adcl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAB # adcl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAC, 0X24 # adcl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAD # adcl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAE # adcl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XAF # adcl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA8 # adcl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAB # adcl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA9 # adcl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAA # adcl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAF # adcl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAE # adcl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAD # adcl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XAC, 0X24 # adcl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA0 # adcl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA3 # adcl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA1 # adcl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA2 # adcl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA7 # adcl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA6 # adcl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA5 # adcl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X11, 0XA4, 0X24 # adcl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA0 # adcl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA1 # adcl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA2 # adcl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA3 # adcl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA4, 0X24 # adcl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA5 # adcl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA6 # adcl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X11, 0XA7 # adcl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA0 # adcl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA3 # adcl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA1 # adcl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA2 # adcl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA7 # adcl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA6 # adcl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA5 # adcl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X11, 0XA4, 0X24 # adcl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X80 # adcl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X83 # adcl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X81 # adcl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X82 # adcl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X87 # adcl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X86 # adcl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X85 # adcl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X84, 0X24 # adcl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X80 # adcl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X81 # adcl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X82 # adcl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X83 # adcl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X84, 0X24 # adcl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X85 # adcl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X86 # adcl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X87 # adcl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X80 # adcl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X83 # adcl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X81 # adcl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X82 # adcl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X87 # adcl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X86 # adcl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X85 # adcl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X84, 0X24 # adcl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X88 # adcl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8B # adcl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X89 # adcl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8A # adcl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8F # adcl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8E # adcl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8D # adcl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X8C, 0X24 # adcl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X88 # adcl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X89 # adcl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8A # adcl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8B # adcl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8C, 0X24 # adcl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8D # adcl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8E # adcl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X8F # adcl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X88 # adcl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8B # adcl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X89 # adcl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8A # adcl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8F # adcl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8E # adcl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8D # adcl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X8C, 0X24 # adcl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X90 # adcl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X93 # adcl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X91 # adcl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X92 # adcl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X97 # adcl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X96 # adcl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X95 # adcl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X94, 0X24 # adcl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X90 # adcl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X91 # adcl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X92 # adcl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X93 # adcl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X94, 0X24 # adcl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X95 # adcl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X96 # adcl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X97 # adcl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X90 # adcl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X93 # adcl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X91 # adcl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X92 # adcl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X97 # adcl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X96 # adcl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X95 # adcl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X94, 0X24 # adcl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X98 # adcl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9B # adcl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X99 # adcl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9A # adcl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9F # adcl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9E # adcl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9D # adcl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0X9C, 0X24 # adcl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X98 # adcl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X99 # adcl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9A # adcl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9B # adcl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9C, 0X24 # adcl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9D # adcl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9E # adcl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0X9F # adcl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X98 # adcl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9B # adcl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X99 # adcl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9A # adcl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9F # adcl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9E # adcl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9D # adcl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0X9C, 0X24 # adcl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA0 # adcl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA3 # adcl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA1 # adcl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA2 # adcl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA7 # adcl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA6 # adcl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA5 # adcl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA4, 0X24 # adcl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA0 # adcl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA1 # adcl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA2 # adcl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA3 # adcl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA4, 0X24 # adcl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA5 # adcl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA6 # adcl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA7 # adcl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA0 # adcl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA3 # adcl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA1 # adcl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA2 # adcl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA7 # adcl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA6 # adcl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA5 # adcl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA4, 0X24 # adcl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA8 # adcl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAB # adcl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XA9 # adcl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAA # adcl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAF # adcl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAE # adcl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAD # adcl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XAC, 0X24 # adcl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA8 # adcl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XA9 # adcl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAA # adcl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAB # adcl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAC, 0X24 # adcl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAD # adcl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAE # adcl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XAF # adcl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA8 # adcl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAB # adcl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XA9 # adcl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAA # adcl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAF # adcl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAE # adcl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAD # adcl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XAC, 0X24 # adcl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB0 # adcl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB3 # adcl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB1 # adcl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB2 # adcl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB7 # adcl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB6 # adcl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB5 # adcl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB4, 0X24 # adcl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB0 # adcl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB1 # adcl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB2 # adcl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB3 # adcl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB4, 0X24 # adcl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB5 # adcl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB6 # adcl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB7 # adcl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB0 # adcl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB3 # adcl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB1 # adcl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB2 # adcl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB7 # adcl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB6 # adcl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB5 # adcl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB4, 0X24 # adcl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define ADC_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB8 # adcl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBB # adcl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XB9 # adcl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBA # adcl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBF # adcl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBE # adcl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBD # adcl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X11, 0XBC, 0X24 # adcl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB8 # adcl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XB9 # adcl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBA # adcl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBB # adcl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBC, 0X24 # adcl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBD # adcl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBE # adcl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X11, 0XBF # adcl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB8 # adcl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBB # adcl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XB9 # adcl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBA # adcl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBF # adcl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBE # adcl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBD # adcl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define ADC_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X11, 0XBC, 0X24 # adcl %r15d, " _(VALUE) "(%esp)")\
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
