#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define TEST_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X05 # testl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1D # testl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0D # testl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X15 # testl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3D # testl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X35 # testl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2D # testl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X25 # testl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X05 # testl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1D # testl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0D # testl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X15 # testl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3D # testl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X35 # testl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2D # testl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X25 # testl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X00 # testl (%eax), %eax")
#define TEST_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X03 # testl (%ebx), %eax")
#define TEST_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X01 # testl (%ecx), %eax")
#define TEST_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X02 # testl (%edx), %eax")
#define TEST_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X07 # testl (%edi), %eax")
#define TEST_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X06 # testl (%esi), %eax")
#define TEST_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X45, 0X00 # testl (%ebp), %eax")
#define TEST_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X04, 0X24 # testl (%esp), %eax")
#define TEST_EAX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X07 # testl (%bx), %eax")
#define TEST_EAX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X46, 0X00 # testl (%bp), %eax")
#define TEST_EAX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X04 # testl (%si), %eax")
#define TEST_EAX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X05 # testl (%di), %eax")

#define TEST_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X18 # testl (%eax), %ebx")
#define TEST_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X1B # testl (%ebx), %ebx")
#define TEST_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X19 # testl (%ecx), %ebx")
#define TEST_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X1A # testl (%edx), %ebx")
#define TEST_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X1F # testl (%edi), %ebx")
#define TEST_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X1E # testl (%esi), %ebx")
#define TEST_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X5D, 0X00 # testl (%ebp), %ebx")
#define TEST_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X1C, 0X24 # testl (%esp), %ebx")
#define TEST_EBX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X1F # testl (%bx), %ebx")
#define TEST_EBX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X5E, 0X00 # testl (%bp), %ebx")
#define TEST_EBX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X1C # testl (%si), %ebx")
#define TEST_EBX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X1D # testl (%di), %ebx")

#define TEST_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X08 # testl (%eax), %ecx")
#define TEST_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X0B # testl (%ebx), %ecx")
#define TEST_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X09 # testl (%ecx), %ecx")
#define TEST_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X0A # testl (%edx), %ecx")
#define TEST_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X0F # testl (%edi), %ecx")
#define TEST_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X0E # testl (%esi), %ecx")
#define TEST_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X4D, 0X00 # testl (%ebp), %ecx")
#define TEST_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X0C, 0X24 # testl (%esp), %ecx")
#define TEST_ECX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X0F # testl (%bx), %ecx")
#define TEST_ECX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X4E, 0X00 # testl (%bp), %ecx")
#define TEST_ECX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X0C # testl (%si), %ecx")
#define TEST_ECX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X0D # testl (%di), %ecx")

#define TEST_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X10 # testl (%eax), %edx")
#define TEST_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X13 # testl (%ebx), %edx")
#define TEST_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X11 # testl (%ecx), %edx")
#define TEST_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X12 # testl (%edx), %edx")
#define TEST_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X17 # testl (%edi), %edx")
#define TEST_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X16 # testl (%esi), %edx")
#define TEST_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X55, 0X00 # testl (%ebp), %edx")
#define TEST_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X14, 0X24 # testl (%esp), %edx")
#define TEST_EDX_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X17 # testl (%bx), %edx")
#define TEST_EDX_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X56, 0X00 # testl (%bp), %edx")
#define TEST_EDX_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X14 # testl (%si), %edx")
#define TEST_EDX_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X15 # testl (%di), %edx")

#define TEST_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X38 # testl (%eax), %edi")
#define TEST_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X3B # testl (%ebx), %edi")
#define TEST_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X39 # testl (%ecx), %edi")
#define TEST_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X3A # testl (%edx), %edi")
#define TEST_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X3F # testl (%edi), %edi")
#define TEST_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X3E # testl (%esi), %edi")
#define TEST_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X7D, 0X00 # testl (%ebp), %edi")
#define TEST_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X3C, 0X24 # testl (%esp), %edi")
#define TEST_EDI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X3F # testl (%bx), %edi")
#define TEST_EDI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X7E, 0X00 # testl (%bp), %edi")
#define TEST_EDI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X3C # testl (%si), %edi")
#define TEST_EDI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X3D # testl (%di), %edi")

#define TEST_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X30 # testl (%eax), %esi")
#define TEST_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X33 # testl (%ebx), %esi")
#define TEST_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X31 # testl (%ecx), %esi")
#define TEST_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X32 # testl (%edx), %esi")
#define TEST_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X37 # testl (%edi), %esi")
#define TEST_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X36 # testl (%esi), %esi")
#define TEST_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X75, 0X00 # testl (%ebp), %esi")
#define TEST_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X34, 0X24 # testl (%esp), %esi")
#define TEST_ESI_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X37 # testl (%bx), %esi")
#define TEST_ESI_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X76, 0X00 # testl (%bp), %esi")
#define TEST_ESI_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X34 # testl (%si), %esi")
#define TEST_ESI_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X35 # testl (%di), %esi")

#define TEST_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X28 # testl (%eax), %ebp")
#define TEST_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X2B # testl (%ebx), %ebp")
#define TEST_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X29 # testl (%ecx), %ebp")
#define TEST_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X2A # testl (%edx), %ebp")
#define TEST_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X2F # testl (%edi), %ebp")
#define TEST_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X2E # testl (%esi), %ebp")
#define TEST_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X6D, 0X00 # testl (%ebp), %ebp")
#define TEST_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X2C, 0X24 # testl (%esp), %ebp")
#define TEST_EBP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X2F # testl (%bx), %ebp")
#define TEST_EBP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X6E, 0X00 # testl (%bp), %ebp")
#define TEST_EBP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X2C # testl (%si), %ebp")
#define TEST_EBP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X2D # testl (%di), %ebp")

#define TEST_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X85, 0X20 # testl (%eax), %esp")
#define TEST_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X85, 0X23 # testl (%ebx), %esp")
#define TEST_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X85, 0X21 # testl (%ecx), %esp")
#define TEST_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X85, 0X22 # testl (%edx), %esp")
#define TEST_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X85, 0X27 # testl (%edi), %esp")
#define TEST_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X85, 0X26 # testl (%esi), %esp")
#define TEST_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X85, 0X65, 0X00 # testl (%ebp), %esp")
#define TEST_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X85, 0X24, 0X24 # testl (%esp), %esp")
#define TEST_ESP_FROM_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X27 # testl (%bx), %esp")
#define TEST_ESP_FROM_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X66, 0X00 # testl (%bp), %esp")
#define TEST_ESP_FROM_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X24 # testl (%si), %esp")
#define TEST_ESP_FROM_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X25 # testl (%di), %esp")

#define TEST_EAX_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X00 # testl %eax, (%eax)")
#define TEST_EAX_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X03 # testl %eax, (%ebx)")
#define TEST_EAX_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X01 # testl %eax, (%ecx)")
#define TEST_EAX_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X02 # testl %eax, (%edx)")
#define TEST_EAX_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X07 # testl %eax, (%edi)")
#define TEST_EAX_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X06 # testl %eax, (%esi)")
#define TEST_EAX_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X45, 0X00 # testl %eax, (%ebp)")
#define TEST_EAX_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X04, 0X24 # testl %eax, (%esp)")
#define TEST_EAX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X07 # testl %eax, (%bx)")
#define TEST_EAX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X46, 0X00 # testl %eax, (%bp)")
#define TEST_EAX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X04 # testl %eax, (%si)")
#define TEST_EAX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X05 # testl %eax, (%di)")

#define TEST_EBX_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X18 # testl %ebx, (%eax)")
#define TEST_EBX_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X1B # testl %ebx, (%ebx)")
#define TEST_EBX_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X19 # testl %ebx, (%ecx)")
#define TEST_EBX_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X1A # testl %ebx, (%edx)")
#define TEST_EBX_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X1F # testl %ebx, (%edi)")
#define TEST_EBX_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X1E # testl %ebx, (%esi)")
#define TEST_EBX_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X5D, 0X00 # testl %ebx, (%ebp)")
#define TEST_EBX_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X1C, 0X24 # testl %ebx, (%esp)")
#define TEST_EBX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X1F # testl %ebx, (%bx)")
#define TEST_EBX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X5E, 0X00 # testl %ebx, (%bp)")
#define TEST_EBX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X1C # testl %ebx, (%si)")
#define TEST_EBX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X1D # testl %ebx, (%di)")

#define TEST_ECX_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X08 # testl %ecx, (%eax)")
#define TEST_ECX_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X0B # testl %ecx, (%ebx)")
#define TEST_ECX_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X09 # testl %ecx, (%ecx)")
#define TEST_ECX_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X0A # testl %ecx, (%edx)")
#define TEST_ECX_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X0F # testl %ecx, (%edi)")
#define TEST_ECX_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X0E # testl %ecx, (%esi)")
#define TEST_ECX_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X4D, 0X00 # testl %ecx, (%ebp)")
#define TEST_ECX_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X0C, 0X24 # testl %ecx, (%esp)")
#define TEST_ECX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X0F # testl %ecx, (%bx)")
#define TEST_ECX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X4E, 0X00 # testl %ecx, (%bp)")
#define TEST_ECX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X0C # testl %ecx, (%si)")
#define TEST_ECX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X0D # testl %ecx, (%di)")

#define TEST_EDX_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X10 # testl %edx, (%eax)")
#define TEST_EDX_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X13 # testl %edx, (%ebx)")
#define TEST_EDX_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X11 # testl %edx, (%ecx)")
#define TEST_EDX_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X12 # testl %edx, (%edx)")
#define TEST_EDX_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X17 # testl %edx, (%edi)")
#define TEST_EDX_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X16 # testl %edx, (%esi)")
#define TEST_EDX_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X55, 0X00 # testl %edx, (%ebp)")
#define TEST_EDX_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X14, 0X24 # testl %edx, (%esp)")
#define TEST_EDX_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X17 # testl %edx, (%bx)")
#define TEST_EDX_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X56, 0X00 # testl %edx, (%bp)")
#define TEST_EDX_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X14 # testl %edx, (%si)")
#define TEST_EDX_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X15 # testl %edx, (%di)")

#define TEST_EDI_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X38 # testl %edi, (%eax)")
#define TEST_EDI_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X3B # testl %edi, (%ebx)")
#define TEST_EDI_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X39 # testl %edi, (%ecx)")
#define TEST_EDI_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X3A # testl %edi, (%edx)")
#define TEST_EDI_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X3F # testl %edi, (%edi)")
#define TEST_EDI_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X3E # testl %edi, (%esi)")
#define TEST_EDI_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X7D, 0X00 # testl %edi, (%ebp)")
#define TEST_EDI_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X3C, 0X24 # testl %edi, (%esp)")
#define TEST_EDI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X3F # testl %edi, (%bx)")
#define TEST_EDI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X7E, 0X00 # testl %edi, (%bp)")
#define TEST_EDI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X3C # testl %edi, (%si)")
#define TEST_EDI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X3D # testl %edi, (%di)")

#define TEST_ESI_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X30 # testl %esi, (%eax)")
#define TEST_ESI_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X33 # testl %esi, (%ebx)")
#define TEST_ESI_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X31 # testl %esi, (%ecx)")
#define TEST_ESI_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X32 # testl %esi, (%edx)")
#define TEST_ESI_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X37 # testl %esi, (%edi)")
#define TEST_ESI_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X36 # testl %esi, (%esi)")
#define TEST_ESI_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X75, 0X00 # testl %esi, (%ebp)")
#define TEST_ESI_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X34, 0X24 # testl %esi, (%esp)")
#define TEST_ESI_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X37 # testl %esi, (%bx)")
#define TEST_ESI_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X76, 0X00 # testl %esi, (%bp)")
#define TEST_ESI_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X34 # testl %esi, (%si)")
#define TEST_ESI_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X35 # testl %esi, (%di)")

#define TEST_EBP_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X28 # testl %ebp, (%eax)")
#define TEST_EBP_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X2B # testl %ebp, (%ebx)")
#define TEST_EBP_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X29 # testl %ebp, (%ecx)")
#define TEST_EBP_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X2A # testl %ebp, (%edx)")
#define TEST_EBP_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X2F # testl %ebp, (%edi)")
#define TEST_EBP_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X2E # testl %ebp, (%esi)")
#define TEST_EBP_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X6D, 0X00 # testl %ebp, (%ebp)")
#define TEST_EBP_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X2C, 0X24 # testl %ebp, (%esp)")
#define TEST_EBP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X2F # testl %ebp, (%bx)")
#define TEST_EBP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X6E, 0X00 # testl %ebp, (%bp)")
#define TEST_EBP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X2C # testl %ebp, (%si)")
#define TEST_EBP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X2D # testl %ebp, (%di)")

#define TEST_ESP_TO_PTR_EAX CMT_ASM(".byte 0X85, 0X20 # testl %esp, (%eax)")
#define TEST_ESP_TO_PTR_EBX CMT_ASM(".byte 0X85, 0X23 # testl %esp, (%ebx)")
#define TEST_ESP_TO_PTR_ECX CMT_ASM(".byte 0X85, 0X21 # testl %esp, (%ecx)")
#define TEST_ESP_TO_PTR_EDX CMT_ASM(".byte 0X85, 0X22 # testl %esp, (%edx)")
#define TEST_ESP_TO_PTR_EDI CMT_ASM(".byte 0X85, 0X27 # testl %esp, (%edi)")
#define TEST_ESP_TO_PTR_ESI CMT_ASM(".byte 0X85, 0X26 # testl %esp, (%esi)")
#define TEST_ESP_TO_PTR_EBP CMT_ASM(".byte 0X85, 0X65, 0X00 # testl %esp, (%ebp)")
#define TEST_ESP_TO_PTR_ESP CMT_ASM(".byte 0X85, 0X24, 0X24 # testl %esp, (%esp)")
#define TEST_ESP_TO_PTR_BX CMT_ASM(".byte 0X67, 0X85, 0X27 # testl %esp, (%bx)")
#define TEST_ESP_TO_PTR_BP CMT_ASM(".byte 0X67, 0X85, 0X66, 0X00 # testl %esp, (%bp)")
#define TEST_ESP_TO_PTR_SI CMT_ASM(".byte 0X67, 0X85, 0X24 # testl %esp, (%si)")
#define TEST_ESP_TO_PTR_DI CMT_ASM(".byte 0X67, 0X85, 0X25 # testl %esp, (%di)")

#define TEST_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X80 # testl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X83 # testl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X81 # testl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X82 # testl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84, 0X24 # testl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X87 # testl " _(VALUE) "(%bx), %eax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X86 # testl " _(VALUE) "(%bp), %eax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X84 # testl " _(VALUE) "(%si), %eax")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X85 # testl " _(VALUE) "(%di), %eax")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X98 # testl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9B # testl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X99 # testl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9A # testl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9F # testl " _(VALUE) "(%bx), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9E # testl " _(VALUE) "(%bp), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9C # testl " _(VALUE) "(%si), %ebx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9D # testl " _(VALUE) "(%di), %ebx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X88 # testl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8B # testl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X89 # testl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8A # testl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8F # testl " _(VALUE) "(%bx), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8E # testl " _(VALUE) "(%bp), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8C # testl " _(VALUE) "(%si), %ecx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8D # testl " _(VALUE) "(%di), %ecx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X90 # testl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X93 # testl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X91 # testl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X92 # testl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94, 0X24 # testl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X97 # testl " _(VALUE) "(%bx), %edx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X96 # testl " _(VALUE) "(%bp), %edx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X94 # testl " _(VALUE) "(%si), %edx")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X95 # testl " _(VALUE) "(%di), %edx")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB8 # testl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBB # testl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB9 # testl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBA # testl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBF # testl " _(VALUE) "(%bx), %edi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBE # testl " _(VALUE) "(%bp), %edi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBC # testl " _(VALUE) "(%si), %edi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBD # testl " _(VALUE) "(%di), %edi")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB0 # testl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB3 # testl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB1 # testl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB2 # testl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB7 # testl " _(VALUE) "(%bx), %esi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB6 # testl " _(VALUE) "(%bp), %esi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB4 # testl " _(VALUE) "(%si), %esi")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB5 # testl " _(VALUE) "(%di), %esi")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA8 # testl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAB # testl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA9 # testl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAA # testl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAF # testl " _(VALUE) "(%bx), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAE # testl " _(VALUE) "(%bp), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAC # testl " _(VALUE) "(%si), %ebp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAD # testl " _(VALUE) "(%di), %ebp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA0 # testl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA3 # testl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA1 # testl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA2 # testl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA7 # testl " _(VALUE) "(%bx), %esp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_FROM_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA6 # testl " _(VALUE) "(%bp), %esp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_FROM_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA4 # testl " _(VALUE) "(%si), %esp")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_FROM_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA5 # testl " _(VALUE) "(%di), %esp")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X80 # testl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X83 # testl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X81 # testl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X82 # testl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84, 0X24 # testl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X87 # testl %eax, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X86 # testl %eax, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X84 # testl %eax, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EAX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X85 # testl %eax, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X98 # testl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9B # testl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X99 # testl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9A # testl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C, 0X24 # testl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9F # testl %ebx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9E # testl %ebx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9C # testl %ebx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9D # testl %ebx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X88 # testl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8B # testl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X89 # testl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8A # testl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C, 0X24 # testl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8F # testl %ecx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8E # testl %ecx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8C # testl %ecx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ECX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8D # testl %ecx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X90 # testl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X93 # testl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X91 # testl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X92 # testl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94, 0X24 # testl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X97 # testl %edx, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X96 # testl %edx, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X94 # testl %edx, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDX_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X95 # testl %edx, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB8 # testl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBB # testl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB9 # testl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBA # testl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC, 0X24 # testl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBF # testl %edi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBE # testl %edi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBC # testl %edi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EDI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBD # testl %edi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB0 # testl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB3 # testl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB1 # testl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB2 # testl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4, 0X24 # testl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB7 # testl %esi, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB6 # testl %esi, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB4 # testl %esi, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESI_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB5 # testl %esi, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA8 # testl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAB # testl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA9 # testl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAA # testl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC, 0X24 # testl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAF # testl %ebp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAE # testl %ebp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAC # testl %ebp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_EBP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAD # testl %ebp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))

#define TEST_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA0 # testl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA3 # testl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA1 # testl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA2 # testl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4, 0X24 # testl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_BX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA7 # testl %esp, " _(VALUE) "(%bx)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_TO_PTR_BP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA6 # testl %esp, " _(VALUE) "(%bp)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_TO_PTR_SI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA4 # testl %esp, " _(VALUE) "(%si)")\
	CMT_ASM(".short " _(VALUE))
#define TEST_ESP_TO_PTR_DI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA5 # testl %esp, " _(VALUE) "(%di)")\
	CMT_ASM(".short " _(VALUE))
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_EAX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X04, 0X25 # testl (" _(VALUE) "), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1C, 0X25 # testl (" _(VALUE) "), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0C, 0X25 # testl (" _(VALUE) "), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X14, 0X25 # testl (" _(VALUE) "), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3C, 0X25 # testl (" _(VALUE) "), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X34, 0X25 # testl (" _(VALUE) "), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2C, 0X25 # testl (" _(VALUE) "), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X24, 0X25 # testl (" _(VALUE) "), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X04, 0X25 # testl (" _(VALUE) "), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X0C, 0X25 # testl (" _(VALUE) "), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X14, 0X25 # testl (" _(VALUE) "), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X1C, 0X25 # testl (" _(VALUE) "), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X24, 0X25 # testl (" _(VALUE) "), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X2C, 0X25 # testl (" _(VALUE) "), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X34, 0X25 # testl (" _(VALUE) "), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X3C, 0X25 # testl (" _(VALUE) "), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EAX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X04, 0X25 # testl %eax, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X1C, 0X25 # testl %ebx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X0C, 0X25 # testl %ecx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X14, 0X25 # testl %edx, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X3C, 0X25 # testl %edi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X34, 0X25 # testl %esi, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X2C, 0X25 # testl %ebp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X85, 0X24, 0X25 # testl %esp, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X04, 0X25 # testl %r8d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X0C, 0X25 # testl %r9d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X14, 0X25 # testl %r10d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X1C, 0X25 # testl %r11d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X24, 0X25 # testl %r12d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X2C, 0X25 # testl %r13d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X34, 0X25 # testl %r14d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X3C, 0X25 # testl %r15d, (" _(VALUE) ")")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EAX_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X00 # testl (%rax), %eax")
#define TEST_EAX_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X03 # testl (%rbx), %eax")
#define TEST_EAX_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X01 # testl (%rcx), %eax")
#define TEST_EAX_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X02 # testl (%rdx), %eax")
#define TEST_EAX_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X07 # testl (%rdi), %eax")
#define TEST_EAX_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X06 # testl (%rsi), %eax")
#define TEST_EAX_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X45, 0X00 # testl (%rbp), %eax")
#define TEST_EAX_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X04, 0X24 # testl (%rsp), %eax")
#define TEST_EAX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X00 # testl (%r8), %eax")
#define TEST_EAX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X01 # testl (%r9), %eax")
#define TEST_EAX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X02 # testl (%r10), %eax")
#define TEST_EAX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X03 # testl (%r11), %eax")
#define TEST_EAX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X04, 0X24 # testl (%r12), %eax")
#define TEST_EAX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X45, 0X00 # testl (%r13), %eax")
#define TEST_EAX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X06 # testl (%r14), %eax")
#define TEST_EAX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X07 # testl (%r15), %eax")
#define TEST_EAX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X00 # testl (%eax), %eax")
#define TEST_EAX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X03 # testl (%ebx), %eax")
#define TEST_EAX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X01 # testl (%ecx), %eax")
#define TEST_EAX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X02 # testl (%edx), %eax")
#define TEST_EAX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X07 # testl (%edi), %eax")
#define TEST_EAX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X06 # testl (%esi), %eax")
#define TEST_EAX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X45, 0X00 # testl (%ebp), %eax")
#define TEST_EAX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X04, 0X24 # testl (%esp), %eax")

#define TEST_EBX_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X18 # testl (%rax), %ebx")
#define TEST_EBX_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X1B # testl (%rbx), %ebx")
#define TEST_EBX_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X19 # testl (%rcx), %ebx")
#define TEST_EBX_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X1A # testl (%rdx), %ebx")
#define TEST_EBX_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X1F # testl (%rdi), %ebx")
#define TEST_EBX_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X1E # testl (%rsi), %ebx")
#define TEST_EBX_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X5D, 0X00 # testl (%rbp), %ebx")
#define TEST_EBX_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X1C, 0X24 # testl (%rsp), %ebx")
#define TEST_EBX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X18 # testl (%r8), %ebx")
#define TEST_EBX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X19 # testl (%r9), %ebx")
#define TEST_EBX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X1A # testl (%r10), %ebx")
#define TEST_EBX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X1B # testl (%r11), %ebx")
#define TEST_EBX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X1C, 0X24 # testl (%r12), %ebx")
#define TEST_EBX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X5D, 0X00 # testl (%r13), %ebx")
#define TEST_EBX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X1E # testl (%r14), %ebx")
#define TEST_EBX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X1F # testl (%r15), %ebx")
#define TEST_EBX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X18 # testl (%eax), %ebx")
#define TEST_EBX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X1B # testl (%ebx), %ebx")
#define TEST_EBX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X19 # testl (%ecx), %ebx")
#define TEST_EBX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X1A # testl (%edx), %ebx")
#define TEST_EBX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X1F # testl (%edi), %ebx")
#define TEST_EBX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X1E # testl (%esi), %ebx")
#define TEST_EBX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X5D, 0X00 # testl (%ebp), %ebx")
#define TEST_EBX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X1C, 0X24 # testl (%esp), %ebx")

#define TEST_ECX_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X08 # testl (%rax), %ecx")
#define TEST_ECX_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X0B # testl (%rbx), %ecx")
#define TEST_ECX_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X09 # testl (%rcx), %ecx")
#define TEST_ECX_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X0A # testl (%rdx), %ecx")
#define TEST_ECX_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X0F # testl (%rdi), %ecx")
#define TEST_ECX_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X0E # testl (%rsi), %ecx")
#define TEST_ECX_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X4D, 0X00 # testl (%rbp), %ecx")
#define TEST_ECX_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X0C, 0X24 # testl (%rsp), %ecx")
#define TEST_ECX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X08 # testl (%r8), %ecx")
#define TEST_ECX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X09 # testl (%r9), %ecx")
#define TEST_ECX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X0A # testl (%r10), %ecx")
#define TEST_ECX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X0B # testl (%r11), %ecx")
#define TEST_ECX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X0C, 0X24 # testl (%r12), %ecx")
#define TEST_ECX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X4D, 0X00 # testl (%r13), %ecx")
#define TEST_ECX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X0E # testl (%r14), %ecx")
#define TEST_ECX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X0F # testl (%r15), %ecx")
#define TEST_ECX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X08 # testl (%eax), %ecx")
#define TEST_ECX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X0B # testl (%ebx), %ecx")
#define TEST_ECX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X09 # testl (%ecx), %ecx")
#define TEST_ECX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X0A # testl (%edx), %ecx")
#define TEST_ECX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X0F # testl (%edi), %ecx")
#define TEST_ECX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X0E # testl (%esi), %ecx")
#define TEST_ECX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X4D, 0X00 # testl (%ebp), %ecx")
#define TEST_ECX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X0C, 0X24 # testl (%esp), %ecx")

#define TEST_EDX_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X10 # testl (%rax), %edx")
#define TEST_EDX_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X13 # testl (%rbx), %edx")
#define TEST_EDX_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X11 # testl (%rcx), %edx")
#define TEST_EDX_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X12 # testl (%rdx), %edx")
#define TEST_EDX_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X17 # testl (%rdi), %edx")
#define TEST_EDX_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X16 # testl (%rsi), %edx")
#define TEST_EDX_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X55, 0X00 # testl (%rbp), %edx")
#define TEST_EDX_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X14, 0X24 # testl (%rsp), %edx")
#define TEST_EDX_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X10 # testl (%r8), %edx")
#define TEST_EDX_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X11 # testl (%r9), %edx")
#define TEST_EDX_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X12 # testl (%r10), %edx")
#define TEST_EDX_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X13 # testl (%r11), %edx")
#define TEST_EDX_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X14, 0X24 # testl (%r12), %edx")
#define TEST_EDX_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X55, 0X00 # testl (%r13), %edx")
#define TEST_EDX_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X16 # testl (%r14), %edx")
#define TEST_EDX_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X17 # testl (%r15), %edx")
#define TEST_EDX_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X10 # testl (%eax), %edx")
#define TEST_EDX_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X13 # testl (%ebx), %edx")
#define TEST_EDX_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X11 # testl (%ecx), %edx")
#define TEST_EDX_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X12 # testl (%edx), %edx")
#define TEST_EDX_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X17 # testl (%edi), %edx")
#define TEST_EDX_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X16 # testl (%esi), %edx")
#define TEST_EDX_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X55, 0X00 # testl (%ebp), %edx")
#define TEST_EDX_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X14, 0X24 # testl (%esp), %edx")

#define TEST_EDI_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X38 # testl (%rax), %edi")
#define TEST_EDI_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X3B # testl (%rbx), %edi")
#define TEST_EDI_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X39 # testl (%rcx), %edi")
#define TEST_EDI_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X3A # testl (%rdx), %edi")
#define TEST_EDI_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X3F # testl (%rdi), %edi")
#define TEST_EDI_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X3E # testl (%rsi), %edi")
#define TEST_EDI_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X7D, 0X00 # testl (%rbp), %edi")
#define TEST_EDI_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X3C, 0X24 # testl (%rsp), %edi")
#define TEST_EDI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X38 # testl (%r8), %edi")
#define TEST_EDI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X39 # testl (%r9), %edi")
#define TEST_EDI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X3A # testl (%r10), %edi")
#define TEST_EDI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X3B # testl (%r11), %edi")
#define TEST_EDI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X3C, 0X24 # testl (%r12), %edi")
#define TEST_EDI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X7D, 0X00 # testl (%r13), %edi")
#define TEST_EDI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X3E # testl (%r14), %edi")
#define TEST_EDI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X3F # testl (%r15), %edi")
#define TEST_EDI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X38 # testl (%eax), %edi")
#define TEST_EDI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X3B # testl (%ebx), %edi")
#define TEST_EDI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X39 # testl (%ecx), %edi")
#define TEST_EDI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X3A # testl (%edx), %edi")
#define TEST_EDI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X3F # testl (%edi), %edi")
#define TEST_EDI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X3E # testl (%esi), %edi")
#define TEST_EDI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X7D, 0X00 # testl (%ebp), %edi")
#define TEST_EDI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X3C, 0X24 # testl (%esp), %edi")

#define TEST_ESI_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X30 # testl (%rax), %esi")
#define TEST_ESI_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X33 # testl (%rbx), %esi")
#define TEST_ESI_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X31 # testl (%rcx), %esi")
#define TEST_ESI_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X32 # testl (%rdx), %esi")
#define TEST_ESI_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X37 # testl (%rdi), %esi")
#define TEST_ESI_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X36 # testl (%rsi), %esi")
#define TEST_ESI_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X75, 0X00 # testl (%rbp), %esi")
#define TEST_ESI_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X34, 0X24 # testl (%rsp), %esi")
#define TEST_ESI_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X30 # testl (%r8), %esi")
#define TEST_ESI_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X31 # testl (%r9), %esi")
#define TEST_ESI_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X32 # testl (%r10), %esi")
#define TEST_ESI_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X33 # testl (%r11), %esi")
#define TEST_ESI_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X34, 0X24 # testl (%r12), %esi")
#define TEST_ESI_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X75, 0X00 # testl (%r13), %esi")
#define TEST_ESI_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X36 # testl (%r14), %esi")
#define TEST_ESI_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X37 # testl (%r15), %esi")
#define TEST_ESI_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X30 # testl (%eax), %esi")
#define TEST_ESI_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X33 # testl (%ebx), %esi")
#define TEST_ESI_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X31 # testl (%ecx), %esi")
#define TEST_ESI_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X32 # testl (%edx), %esi")
#define TEST_ESI_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X37 # testl (%edi), %esi")
#define TEST_ESI_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X36 # testl (%esi), %esi")
#define TEST_ESI_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X75, 0X00 # testl (%ebp), %esi")
#define TEST_ESI_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X34, 0X24 # testl (%esp), %esi")

#define TEST_EBP_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X28 # testl (%rax), %ebp")
#define TEST_EBP_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X2B # testl (%rbx), %ebp")
#define TEST_EBP_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X29 # testl (%rcx), %ebp")
#define TEST_EBP_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X2A # testl (%rdx), %ebp")
#define TEST_EBP_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X2F # testl (%rdi), %ebp")
#define TEST_EBP_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X2E # testl (%rsi), %ebp")
#define TEST_EBP_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X6D, 0X00 # testl (%rbp), %ebp")
#define TEST_EBP_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X2C, 0X24 # testl (%rsp), %ebp")
#define TEST_EBP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X28 # testl (%r8), %ebp")
#define TEST_EBP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X29 # testl (%r9), %ebp")
#define TEST_EBP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X2A # testl (%r10), %ebp")
#define TEST_EBP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X2B # testl (%r11), %ebp")
#define TEST_EBP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X2C, 0X24 # testl (%r12), %ebp")
#define TEST_EBP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X6D, 0X00 # testl (%r13), %ebp")
#define TEST_EBP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X2E # testl (%r14), %ebp")
#define TEST_EBP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X2F # testl (%r15), %ebp")
#define TEST_EBP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X28 # testl (%eax), %ebp")
#define TEST_EBP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X2B # testl (%ebx), %ebp")
#define TEST_EBP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X29 # testl (%ecx), %ebp")
#define TEST_EBP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X2A # testl (%edx), %ebp")
#define TEST_EBP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X2F # testl (%edi), %ebp")
#define TEST_EBP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X2E # testl (%esi), %ebp")
#define TEST_EBP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X6D, 0X00 # testl (%ebp), %ebp")
#define TEST_EBP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X2C, 0X24 # testl (%esp), %ebp")

#define TEST_ESP_FROM_PTR_RAX CMT_ASM(".byte 0X85, 0X20 # testl (%rax), %esp")
#define TEST_ESP_FROM_PTR_RBX CMT_ASM(".byte 0X85, 0X23 # testl (%rbx), %esp")
#define TEST_ESP_FROM_PTR_RCX CMT_ASM(".byte 0X85, 0X21 # testl (%rcx), %esp")
#define TEST_ESP_FROM_PTR_RDX CMT_ASM(".byte 0X85, 0X22 # testl (%rdx), %esp")
#define TEST_ESP_FROM_PTR_RDI CMT_ASM(".byte 0X85, 0X27 # testl (%rdi), %esp")
#define TEST_ESP_FROM_PTR_RSI CMT_ASM(".byte 0X85, 0X26 # testl (%rsi), %esp")
#define TEST_ESP_FROM_PTR_RBP CMT_ASM(".byte 0X85, 0X65, 0X00 # testl (%rbp), %esp")
#define TEST_ESP_FROM_PTR_RSP CMT_ASM(".byte 0X85, 0X24, 0X24 # testl (%rsp), %esp")
#define TEST_ESP_FROM_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X20 # testl (%r8), %esp")
#define TEST_ESP_FROM_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X21 # testl (%r9), %esp")
#define TEST_ESP_FROM_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X22 # testl (%r10), %esp")
#define TEST_ESP_FROM_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X23 # testl (%r11), %esp")
#define TEST_ESP_FROM_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X24, 0X24 # testl (%r12), %esp")
#define TEST_ESP_FROM_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X65, 0X00 # testl (%r13), %esp")
#define TEST_ESP_FROM_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X26 # testl (%r14), %esp")
#define TEST_ESP_FROM_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X27 # testl (%r15), %esp")
#define TEST_ESP_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X20 # testl (%eax), %esp")
#define TEST_ESP_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X23 # testl (%ebx), %esp")
#define TEST_ESP_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X21 # testl (%ecx), %esp")
#define TEST_ESP_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X22 # testl (%edx), %esp")
#define TEST_ESP_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X27 # testl (%edi), %esp")
#define TEST_ESP_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X26 # testl (%esi), %esp")
#define TEST_ESP_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X65, 0X00 # testl (%ebp), %esp")
#define TEST_ESP_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X24, 0X24 # testl (%esp), %esp")

#define TEST_R8D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X00 # testl (%rax), %r8d")
#define TEST_R8D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X03 # testl (%rbx), %r8d")
#define TEST_R8D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X01 # testl (%rcx), %r8d")
#define TEST_R8D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X02 # testl (%rdx), %r8d")
#define TEST_R8D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X07 # testl (%rdi), %r8d")
#define TEST_R8D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X06 # testl (%rsi), %r8d")
#define TEST_R8D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X45, 0X00 # testl (%rbp), %r8d")
#define TEST_R8D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X04, 0X24 # testl (%rsp), %r8d")
#define TEST_R8D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X00 # testl (%r8), %r8d")
#define TEST_R8D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X01 # testl (%r9), %r8d")
#define TEST_R8D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X02 # testl (%r10), %r8d")
#define TEST_R8D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X03 # testl (%r11), %r8d")
#define TEST_R8D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X04, 0X24 # testl (%r12), %r8d")
#define TEST_R8D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X45, 0X00 # testl (%r13), %r8d")
#define TEST_R8D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X06 # testl (%r14), %r8d")
#define TEST_R8D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X07 # testl (%r15), %r8d")
#define TEST_R8D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X00 # testl (%eax), %r8d")
#define TEST_R8D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X03 # testl (%ebx), %r8d")
#define TEST_R8D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X01 # testl (%ecx), %r8d")
#define TEST_R8D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X02 # testl (%edx), %r8d")
#define TEST_R8D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X07 # testl (%edi), %r8d")
#define TEST_R8D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X06 # testl (%esi), %r8d")
#define TEST_R8D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X45, 0X00 # testl (%ebp), %r8d")
#define TEST_R8D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X04, 0X24 # testl (%esp), %r8d")

#define TEST_R9D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X08 # testl (%rax), %r9d")
#define TEST_R9D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X0B # testl (%rbx), %r9d")
#define TEST_R9D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X09 # testl (%rcx), %r9d")
#define TEST_R9D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X0A # testl (%rdx), %r9d")
#define TEST_R9D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X0F # testl (%rdi), %r9d")
#define TEST_R9D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X0E # testl (%rsi), %r9d")
#define TEST_R9D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X4D, 0X00 # testl (%rbp), %r9d")
#define TEST_R9D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X0C, 0X24 # testl (%rsp), %r9d")
#define TEST_R9D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X08 # testl (%r8), %r9d")
#define TEST_R9D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X09 # testl (%r9), %r9d")
#define TEST_R9D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X0A # testl (%r10), %r9d")
#define TEST_R9D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X0B # testl (%r11), %r9d")
#define TEST_R9D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X0C, 0X24 # testl (%r12), %r9d")
#define TEST_R9D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X4D, 0X00 # testl (%r13), %r9d")
#define TEST_R9D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X0E # testl (%r14), %r9d")
#define TEST_R9D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X0F # testl (%r15), %r9d")
#define TEST_R9D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X08 # testl (%eax), %r9d")
#define TEST_R9D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0B # testl (%ebx), %r9d")
#define TEST_R9D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X09 # testl (%ecx), %r9d")
#define TEST_R9D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0A # testl (%edx), %r9d")
#define TEST_R9D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0F # testl (%edi), %r9d")
#define TEST_R9D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0E # testl (%esi), %r9d")
#define TEST_R9D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X4D, 0X00 # testl (%ebp), %r9d")
#define TEST_R9D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0C, 0X24 # testl (%esp), %r9d")

#define TEST_R10D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X10 # testl (%rax), %r10d")
#define TEST_R10D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X13 # testl (%rbx), %r10d")
#define TEST_R10D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X11 # testl (%rcx), %r10d")
#define TEST_R10D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X12 # testl (%rdx), %r10d")
#define TEST_R10D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X17 # testl (%rdi), %r10d")
#define TEST_R10D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X16 # testl (%rsi), %r10d")
#define TEST_R10D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X55, 0X00 # testl (%rbp), %r10d")
#define TEST_R10D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X14, 0X24 # testl (%rsp), %r10d")
#define TEST_R10D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X10 # testl (%r8), %r10d")
#define TEST_R10D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X11 # testl (%r9), %r10d")
#define TEST_R10D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X12 # testl (%r10), %r10d")
#define TEST_R10D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X13 # testl (%r11), %r10d")
#define TEST_R10D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X14, 0X24 # testl (%r12), %r10d")
#define TEST_R10D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X55, 0X00 # testl (%r13), %r10d")
#define TEST_R10D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X16 # testl (%r14), %r10d")
#define TEST_R10D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X17 # testl (%r15), %r10d")
#define TEST_R10D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X10 # testl (%eax), %r10d")
#define TEST_R10D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X13 # testl (%ebx), %r10d")
#define TEST_R10D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X11 # testl (%ecx), %r10d")
#define TEST_R10D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X12 # testl (%edx), %r10d")
#define TEST_R10D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X17 # testl (%edi), %r10d")
#define TEST_R10D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X16 # testl (%esi), %r10d")
#define TEST_R10D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X55, 0X00 # testl (%ebp), %r10d")
#define TEST_R10D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X14, 0X24 # testl (%esp), %r10d")

#define TEST_R11D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X18 # testl (%rax), %r11d")
#define TEST_R11D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X1B # testl (%rbx), %r11d")
#define TEST_R11D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X19 # testl (%rcx), %r11d")
#define TEST_R11D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X1A # testl (%rdx), %r11d")
#define TEST_R11D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X1F # testl (%rdi), %r11d")
#define TEST_R11D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X1E # testl (%rsi), %r11d")
#define TEST_R11D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X5D, 0X00 # testl (%rbp), %r11d")
#define TEST_R11D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X1C, 0X24 # testl (%rsp), %r11d")
#define TEST_R11D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X18 # testl (%r8), %r11d")
#define TEST_R11D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X19 # testl (%r9), %r11d")
#define TEST_R11D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X1A # testl (%r10), %r11d")
#define TEST_R11D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X1B # testl (%r11), %r11d")
#define TEST_R11D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X1C, 0X24 # testl (%r12), %r11d")
#define TEST_R11D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X5D, 0X00 # testl (%r13), %r11d")
#define TEST_R11D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X1E # testl (%r14), %r11d")
#define TEST_R11D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X1F # testl (%r15), %r11d")
#define TEST_R11D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X18 # testl (%eax), %r11d")
#define TEST_R11D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1B # testl (%ebx), %r11d")
#define TEST_R11D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X19 # testl (%ecx), %r11d")
#define TEST_R11D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1A # testl (%edx), %r11d")
#define TEST_R11D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1F # testl (%edi), %r11d")
#define TEST_R11D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1E # testl (%esi), %r11d")
#define TEST_R11D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X5D, 0X00 # testl (%ebp), %r11d")
#define TEST_R11D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1C, 0X24 # testl (%esp), %r11d")

#define TEST_R12D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X20 # testl (%rax), %r12d")
#define TEST_R12D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X23 # testl (%rbx), %r12d")
#define TEST_R12D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X21 # testl (%rcx), %r12d")
#define TEST_R12D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X22 # testl (%rdx), %r12d")
#define TEST_R12D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X27 # testl (%rdi), %r12d")
#define TEST_R12D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X26 # testl (%rsi), %r12d")
#define TEST_R12D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X65, 0X00 # testl (%rbp), %r12d")
#define TEST_R12D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X24, 0X24 # testl (%rsp), %r12d")
#define TEST_R12D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X20 # testl (%r8), %r12d")
#define TEST_R12D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X21 # testl (%r9), %r12d")
#define TEST_R12D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X22 # testl (%r10), %r12d")
#define TEST_R12D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X23 # testl (%r11), %r12d")
#define TEST_R12D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X24, 0X24 # testl (%r12), %r12d")
#define TEST_R12D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X65, 0X00 # testl (%r13), %r12d")
#define TEST_R12D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X26 # testl (%r14), %r12d")
#define TEST_R12D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X27 # testl (%r15), %r12d")
#define TEST_R12D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X20 # testl (%eax), %r12d")
#define TEST_R12D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X23 # testl (%ebx), %r12d")
#define TEST_R12D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X21 # testl (%ecx), %r12d")
#define TEST_R12D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X22 # testl (%edx), %r12d")
#define TEST_R12D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X27 # testl (%edi), %r12d")
#define TEST_R12D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X26 # testl (%esi), %r12d")
#define TEST_R12D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X65, 0X00 # testl (%ebp), %r12d")
#define TEST_R12D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X24, 0X24 # testl (%esp), %r12d")

#define TEST_R13D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X28 # testl (%rax), %r13d")
#define TEST_R13D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X2B # testl (%rbx), %r13d")
#define TEST_R13D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X29 # testl (%rcx), %r13d")
#define TEST_R13D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X2A # testl (%rdx), %r13d")
#define TEST_R13D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X2F # testl (%rdi), %r13d")
#define TEST_R13D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X2E # testl (%rsi), %r13d")
#define TEST_R13D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X6D, 0X00 # testl (%rbp), %r13d")
#define TEST_R13D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X2C, 0X24 # testl (%rsp), %r13d")
#define TEST_R13D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X28 # testl (%r8), %r13d")
#define TEST_R13D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X29 # testl (%r9), %r13d")
#define TEST_R13D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X2A # testl (%r10), %r13d")
#define TEST_R13D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X2B # testl (%r11), %r13d")
#define TEST_R13D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X2C, 0X24 # testl (%r12), %r13d")
#define TEST_R13D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X6D, 0X00 # testl (%r13), %r13d")
#define TEST_R13D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X2E # testl (%r14), %r13d")
#define TEST_R13D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X2F # testl (%r15), %r13d")
#define TEST_R13D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X28 # testl (%eax), %r13d")
#define TEST_R13D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2B # testl (%ebx), %r13d")
#define TEST_R13D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X29 # testl (%ecx), %r13d")
#define TEST_R13D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2A # testl (%edx), %r13d")
#define TEST_R13D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2F # testl (%edi), %r13d")
#define TEST_R13D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2E # testl (%esi), %r13d")
#define TEST_R13D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X6D, 0X00 # testl (%ebp), %r13d")
#define TEST_R13D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2C, 0X24 # testl (%esp), %r13d")

#define TEST_R14D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X30 # testl (%rax), %r14d")
#define TEST_R14D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X33 # testl (%rbx), %r14d")
#define TEST_R14D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X31 # testl (%rcx), %r14d")
#define TEST_R14D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X32 # testl (%rdx), %r14d")
#define TEST_R14D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X37 # testl (%rdi), %r14d")
#define TEST_R14D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X36 # testl (%rsi), %r14d")
#define TEST_R14D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X75, 0X00 # testl (%rbp), %r14d")
#define TEST_R14D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X34, 0X24 # testl (%rsp), %r14d")
#define TEST_R14D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X30 # testl (%r8), %r14d")
#define TEST_R14D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X31 # testl (%r9), %r14d")
#define TEST_R14D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X32 # testl (%r10), %r14d")
#define TEST_R14D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X33 # testl (%r11), %r14d")
#define TEST_R14D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X34, 0X24 # testl (%r12), %r14d")
#define TEST_R14D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X75, 0X00 # testl (%r13), %r14d")
#define TEST_R14D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X36 # testl (%r14), %r14d")
#define TEST_R14D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X37 # testl (%r15), %r14d")
#define TEST_R14D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X30 # testl (%eax), %r14d")
#define TEST_R14D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X33 # testl (%ebx), %r14d")
#define TEST_R14D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X31 # testl (%ecx), %r14d")
#define TEST_R14D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X32 # testl (%edx), %r14d")
#define TEST_R14D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X37 # testl (%edi), %r14d")
#define TEST_R14D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X36 # testl (%esi), %r14d")
#define TEST_R14D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X75, 0X00 # testl (%ebp), %r14d")
#define TEST_R14D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X34, 0X24 # testl (%esp), %r14d")

#define TEST_R15D_FROM_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X38 # testl (%rax), %r15d")
#define TEST_R15D_FROM_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X3B # testl (%rbx), %r15d")
#define TEST_R15D_FROM_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X39 # testl (%rcx), %r15d")
#define TEST_R15D_FROM_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X3A # testl (%rdx), %r15d")
#define TEST_R15D_FROM_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X3F # testl (%rdi), %r15d")
#define TEST_R15D_FROM_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X3E # testl (%rsi), %r15d")
#define TEST_R15D_FROM_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X7D, 0X00 # testl (%rbp), %r15d")
#define TEST_R15D_FROM_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X3C, 0X24 # testl (%rsp), %r15d")
#define TEST_R15D_FROM_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X38 # testl (%r8), %r15d")
#define TEST_R15D_FROM_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X39 # testl (%r9), %r15d")
#define TEST_R15D_FROM_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X3A # testl (%r10), %r15d")
#define TEST_R15D_FROM_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X3B # testl (%r11), %r15d")
#define TEST_R15D_FROM_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X3C, 0X24 # testl (%r12), %r15d")
#define TEST_R15D_FROM_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X7D, 0X00 # testl (%r13), %r15d")
#define TEST_R15D_FROM_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X3E # testl (%r14), %r15d")
#define TEST_R15D_FROM_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X3F # testl (%r15), %r15d")
#define TEST_R15D_FROM_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X38 # testl (%eax), %r15d")
#define TEST_R15D_FROM_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3B # testl (%ebx), %r15d")
#define TEST_R15D_FROM_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X39 # testl (%ecx), %r15d")
#define TEST_R15D_FROM_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3A # testl (%edx), %r15d")
#define TEST_R15D_FROM_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3F # testl (%edi), %r15d")
#define TEST_R15D_FROM_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3E # testl (%esi), %r15d")
#define TEST_R15D_FROM_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X7D, 0X00 # testl (%ebp), %r15d")
#define TEST_R15D_FROM_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3C, 0X24 # testl (%esp), %r15d")

#define TEST_EAX_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X00 # testl %eax, (%rax)")
#define TEST_EAX_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X03 # testl %eax, (%rbx)")
#define TEST_EAX_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X01 # testl %eax, (%rcx)")
#define TEST_EAX_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X02 # testl %eax, (%rdx)")
#define TEST_EAX_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X07 # testl %eax, (%rdi)")
#define TEST_EAX_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X06 # testl %eax, (%rsi)")
#define TEST_EAX_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X45, 0X00 # testl %eax, (%rbp)")
#define TEST_EAX_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X04, 0X24 # testl %eax, (%rsp)")
#define TEST_EAX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X00 # testl %eax, (%r8)")
#define TEST_EAX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X01 # testl %eax, (%r9)")
#define TEST_EAX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X02 # testl %eax, (%r10)")
#define TEST_EAX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X03 # testl %eax, (%r11)")
#define TEST_EAX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X04, 0X24 # testl %eax, (%r12)")
#define TEST_EAX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X45, 0X00 # testl %eax, (%r13)")
#define TEST_EAX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X06 # testl %eax, (%r14)")
#define TEST_EAX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X07 # testl %eax, (%r15)")
#define TEST_EAX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X00 # testl %eax, (%eax)")
#define TEST_EAX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X03 # testl %eax, (%ebx)")
#define TEST_EAX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X01 # testl %eax, (%ecx)")
#define TEST_EAX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X02 # testl %eax, (%edx)")
#define TEST_EAX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X07 # testl %eax, (%edi)")
#define TEST_EAX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X06 # testl %eax, (%esi)")
#define TEST_EAX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X45, 0X00 # testl %eax, (%ebp)")
#define TEST_EAX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X04, 0X24 # testl %eax, (%esp)")

#define TEST_EBX_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X18 # testl %ebx, (%rax)")
#define TEST_EBX_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X1B # testl %ebx, (%rbx)")
#define TEST_EBX_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X19 # testl %ebx, (%rcx)")
#define TEST_EBX_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X1A # testl %ebx, (%rdx)")
#define TEST_EBX_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X1F # testl %ebx, (%rdi)")
#define TEST_EBX_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X1E # testl %ebx, (%rsi)")
#define TEST_EBX_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X5D, 0X00 # testl %ebx, (%rbp)")
#define TEST_EBX_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X1C, 0X24 # testl %ebx, (%rsp)")
#define TEST_EBX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X18 # testl %ebx, (%r8)")
#define TEST_EBX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X19 # testl %ebx, (%r9)")
#define TEST_EBX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X1A # testl %ebx, (%r10)")
#define TEST_EBX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X1B # testl %ebx, (%r11)")
#define TEST_EBX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X1C, 0X24 # testl %ebx, (%r12)")
#define TEST_EBX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X5D, 0X00 # testl %ebx, (%r13)")
#define TEST_EBX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X1E # testl %ebx, (%r14)")
#define TEST_EBX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X1F # testl %ebx, (%r15)")
#define TEST_EBX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X18 # testl %ebx, (%eax)")
#define TEST_EBX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X1B # testl %ebx, (%ebx)")
#define TEST_EBX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X19 # testl %ebx, (%ecx)")
#define TEST_EBX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X1A # testl %ebx, (%edx)")
#define TEST_EBX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X1F # testl %ebx, (%edi)")
#define TEST_EBX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X1E # testl %ebx, (%esi)")
#define TEST_EBX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X5D, 0X00 # testl %ebx, (%ebp)")
#define TEST_EBX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X1C, 0X24 # testl %ebx, (%esp)")

#define TEST_ECX_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X08 # testl %ecx, (%rax)")
#define TEST_ECX_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X0B # testl %ecx, (%rbx)")
#define TEST_ECX_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X09 # testl %ecx, (%rcx)")
#define TEST_ECX_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X0A # testl %ecx, (%rdx)")
#define TEST_ECX_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X0F # testl %ecx, (%rdi)")
#define TEST_ECX_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X0E # testl %ecx, (%rsi)")
#define TEST_ECX_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X4D, 0X00 # testl %ecx, (%rbp)")
#define TEST_ECX_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X0C, 0X24 # testl %ecx, (%rsp)")
#define TEST_ECX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X08 # testl %ecx, (%r8)")
#define TEST_ECX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X09 # testl %ecx, (%r9)")
#define TEST_ECX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X0A # testl %ecx, (%r10)")
#define TEST_ECX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X0B # testl %ecx, (%r11)")
#define TEST_ECX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X0C, 0X24 # testl %ecx, (%r12)")
#define TEST_ECX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X4D, 0X00 # testl %ecx, (%r13)")
#define TEST_ECX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X0E # testl %ecx, (%r14)")
#define TEST_ECX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X0F # testl %ecx, (%r15)")
#define TEST_ECX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X08 # testl %ecx, (%eax)")
#define TEST_ECX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X0B # testl %ecx, (%ebx)")
#define TEST_ECX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X09 # testl %ecx, (%ecx)")
#define TEST_ECX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X0A # testl %ecx, (%edx)")
#define TEST_ECX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X0F # testl %ecx, (%edi)")
#define TEST_ECX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X0E # testl %ecx, (%esi)")
#define TEST_ECX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X4D, 0X00 # testl %ecx, (%ebp)")
#define TEST_ECX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X0C, 0X24 # testl %ecx, (%esp)")

#define TEST_EDX_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X10 # testl %edx, (%rax)")
#define TEST_EDX_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X13 # testl %edx, (%rbx)")
#define TEST_EDX_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X11 # testl %edx, (%rcx)")
#define TEST_EDX_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X12 # testl %edx, (%rdx)")
#define TEST_EDX_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X17 # testl %edx, (%rdi)")
#define TEST_EDX_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X16 # testl %edx, (%rsi)")
#define TEST_EDX_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X55, 0X00 # testl %edx, (%rbp)")
#define TEST_EDX_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X14, 0X24 # testl %edx, (%rsp)")
#define TEST_EDX_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X10 # testl %edx, (%r8)")
#define TEST_EDX_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X11 # testl %edx, (%r9)")
#define TEST_EDX_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X12 # testl %edx, (%r10)")
#define TEST_EDX_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X13 # testl %edx, (%r11)")
#define TEST_EDX_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X14, 0X24 # testl %edx, (%r12)")
#define TEST_EDX_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X55, 0X00 # testl %edx, (%r13)")
#define TEST_EDX_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X16 # testl %edx, (%r14)")
#define TEST_EDX_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X17 # testl %edx, (%r15)")
#define TEST_EDX_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X10 # testl %edx, (%eax)")
#define TEST_EDX_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X13 # testl %edx, (%ebx)")
#define TEST_EDX_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X11 # testl %edx, (%ecx)")
#define TEST_EDX_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X12 # testl %edx, (%edx)")
#define TEST_EDX_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X17 # testl %edx, (%edi)")
#define TEST_EDX_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X16 # testl %edx, (%esi)")
#define TEST_EDX_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X55, 0X00 # testl %edx, (%ebp)")
#define TEST_EDX_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X14, 0X24 # testl %edx, (%esp)")

#define TEST_EDI_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X38 # testl %edi, (%rax)")
#define TEST_EDI_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X3B # testl %edi, (%rbx)")
#define TEST_EDI_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X39 # testl %edi, (%rcx)")
#define TEST_EDI_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X3A # testl %edi, (%rdx)")
#define TEST_EDI_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X3F # testl %edi, (%rdi)")
#define TEST_EDI_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X3E # testl %edi, (%rsi)")
#define TEST_EDI_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X7D, 0X00 # testl %edi, (%rbp)")
#define TEST_EDI_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X3C, 0X24 # testl %edi, (%rsp)")
#define TEST_EDI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X38 # testl %edi, (%r8)")
#define TEST_EDI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X39 # testl %edi, (%r9)")
#define TEST_EDI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X3A # testl %edi, (%r10)")
#define TEST_EDI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X3B # testl %edi, (%r11)")
#define TEST_EDI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X3C, 0X24 # testl %edi, (%r12)")
#define TEST_EDI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X7D, 0X00 # testl %edi, (%r13)")
#define TEST_EDI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X3E # testl %edi, (%r14)")
#define TEST_EDI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X3F # testl %edi, (%r15)")
#define TEST_EDI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X38 # testl %edi, (%eax)")
#define TEST_EDI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X3B # testl %edi, (%ebx)")
#define TEST_EDI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X39 # testl %edi, (%ecx)")
#define TEST_EDI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X3A # testl %edi, (%edx)")
#define TEST_EDI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X3F # testl %edi, (%edi)")
#define TEST_EDI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X3E # testl %edi, (%esi)")
#define TEST_EDI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X7D, 0X00 # testl %edi, (%ebp)")
#define TEST_EDI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X3C, 0X24 # testl %edi, (%esp)")

#define TEST_ESI_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X30 # testl %esi, (%rax)")
#define TEST_ESI_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X33 # testl %esi, (%rbx)")
#define TEST_ESI_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X31 # testl %esi, (%rcx)")
#define TEST_ESI_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X32 # testl %esi, (%rdx)")
#define TEST_ESI_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X37 # testl %esi, (%rdi)")
#define TEST_ESI_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X36 # testl %esi, (%rsi)")
#define TEST_ESI_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X75, 0X00 # testl %esi, (%rbp)")
#define TEST_ESI_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X34, 0X24 # testl %esi, (%rsp)")
#define TEST_ESI_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X30 # testl %esi, (%r8)")
#define TEST_ESI_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X31 # testl %esi, (%r9)")
#define TEST_ESI_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X32 # testl %esi, (%r10)")
#define TEST_ESI_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X33 # testl %esi, (%r11)")
#define TEST_ESI_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X34, 0X24 # testl %esi, (%r12)")
#define TEST_ESI_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X75, 0X00 # testl %esi, (%r13)")
#define TEST_ESI_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X36 # testl %esi, (%r14)")
#define TEST_ESI_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X37 # testl %esi, (%r15)")
#define TEST_ESI_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X30 # testl %esi, (%eax)")
#define TEST_ESI_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X33 # testl %esi, (%ebx)")
#define TEST_ESI_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X31 # testl %esi, (%ecx)")
#define TEST_ESI_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X32 # testl %esi, (%edx)")
#define TEST_ESI_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X37 # testl %esi, (%edi)")
#define TEST_ESI_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X36 # testl %esi, (%esi)")
#define TEST_ESI_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X75, 0X00 # testl %esi, (%ebp)")
#define TEST_ESI_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X34, 0X24 # testl %esi, (%esp)")

#define TEST_EBP_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X28 # testl %ebp, (%rax)")
#define TEST_EBP_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X2B # testl %ebp, (%rbx)")
#define TEST_EBP_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X29 # testl %ebp, (%rcx)")
#define TEST_EBP_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X2A # testl %ebp, (%rdx)")
#define TEST_EBP_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X2F # testl %ebp, (%rdi)")
#define TEST_EBP_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X2E # testl %ebp, (%rsi)")
#define TEST_EBP_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X6D, 0X00 # testl %ebp, (%rbp)")
#define TEST_EBP_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X2C, 0X24 # testl %ebp, (%rsp)")
#define TEST_EBP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X28 # testl %ebp, (%r8)")
#define TEST_EBP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X29 # testl %ebp, (%r9)")
#define TEST_EBP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X2A # testl %ebp, (%r10)")
#define TEST_EBP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X2B # testl %ebp, (%r11)")
#define TEST_EBP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X2C, 0X24 # testl %ebp, (%r12)")
#define TEST_EBP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X6D, 0X00 # testl %ebp, (%r13)")
#define TEST_EBP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X2E # testl %ebp, (%r14)")
#define TEST_EBP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X2F # testl %ebp, (%r15)")
#define TEST_EBP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X28 # testl %ebp, (%eax)")
#define TEST_EBP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X2B # testl %ebp, (%ebx)")
#define TEST_EBP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X29 # testl %ebp, (%ecx)")
#define TEST_EBP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X2A # testl %ebp, (%edx)")
#define TEST_EBP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X2F # testl %ebp, (%edi)")
#define TEST_EBP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X2E # testl %ebp, (%esi)")
#define TEST_EBP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X6D, 0X00 # testl %ebp, (%ebp)")
#define TEST_EBP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X2C, 0X24 # testl %ebp, (%esp)")

#define TEST_ESP_TO_PTR_RAX CMT_ASM(".byte 0X85, 0X20 # testl %esp, (%rax)")
#define TEST_ESP_TO_PTR_RBX CMT_ASM(".byte 0X85, 0X23 # testl %esp, (%rbx)")
#define TEST_ESP_TO_PTR_RCX CMT_ASM(".byte 0X85, 0X21 # testl %esp, (%rcx)")
#define TEST_ESP_TO_PTR_RDX CMT_ASM(".byte 0X85, 0X22 # testl %esp, (%rdx)")
#define TEST_ESP_TO_PTR_RDI CMT_ASM(".byte 0X85, 0X27 # testl %esp, (%rdi)")
#define TEST_ESP_TO_PTR_RSI CMT_ASM(".byte 0X85, 0X26 # testl %esp, (%rsi)")
#define TEST_ESP_TO_PTR_RBP CMT_ASM(".byte 0X85, 0X65, 0X00 # testl %esp, (%rbp)")
#define TEST_ESP_TO_PTR_RSP CMT_ASM(".byte 0X85, 0X24, 0X24 # testl %esp, (%rsp)")
#define TEST_ESP_TO_PTR_R8 CMT_ASM(".byte 0X41, 0X85, 0X20 # testl %esp, (%r8)")
#define TEST_ESP_TO_PTR_R9 CMT_ASM(".byte 0X41, 0X85, 0X21 # testl %esp, (%r9)")
#define TEST_ESP_TO_PTR_R10 CMT_ASM(".byte 0X41, 0X85, 0X22 # testl %esp, (%r10)")
#define TEST_ESP_TO_PTR_R11 CMT_ASM(".byte 0X41, 0X85, 0X23 # testl %esp, (%r11)")
#define TEST_ESP_TO_PTR_R12 CMT_ASM(".byte 0X41, 0X85, 0X24, 0X24 # testl %esp, (%r12)")
#define TEST_ESP_TO_PTR_R13 CMT_ASM(".byte 0X41, 0X85, 0X65, 0X00 # testl %esp, (%r13)")
#define TEST_ESP_TO_PTR_R14 CMT_ASM(".byte 0X41, 0X85, 0X26 # testl %esp, (%r14)")
#define TEST_ESP_TO_PTR_R15 CMT_ASM(".byte 0X41, 0X85, 0X27 # testl %esp, (%r15)")
#define TEST_ESP_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X85, 0X20 # testl %esp, (%eax)")
#define TEST_ESP_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X85, 0X23 # testl %esp, (%ebx)")
#define TEST_ESP_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X85, 0X21 # testl %esp, (%ecx)")
#define TEST_ESP_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X85, 0X22 # testl %esp, (%edx)")
#define TEST_ESP_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X85, 0X27 # testl %esp, (%edi)")
#define TEST_ESP_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X85, 0X26 # testl %esp, (%esi)")
#define TEST_ESP_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X85, 0X65, 0X00 # testl %esp, (%ebp)")
#define TEST_ESP_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X85, 0X24, 0X24 # testl %esp, (%esp)")

#define TEST_R8D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X00 # testl %r8d, (%rax)")
#define TEST_R8D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X03 # testl %r8d, (%rbx)")
#define TEST_R8D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X01 # testl %r8d, (%rcx)")
#define TEST_R8D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X02 # testl %r8d, (%rdx)")
#define TEST_R8D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X07 # testl %r8d, (%rdi)")
#define TEST_R8D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X06 # testl %r8d, (%rsi)")
#define TEST_R8D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X45, 0X00 # testl %r8d, (%rbp)")
#define TEST_R8D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X04, 0X24 # testl %r8d, (%rsp)")
#define TEST_R8D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X00 # testl %r8d, (%r8)")
#define TEST_R8D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X01 # testl %r8d, (%r9)")
#define TEST_R8D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X02 # testl %r8d, (%r10)")
#define TEST_R8D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X03 # testl %r8d, (%r11)")
#define TEST_R8D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X04, 0X24 # testl %r8d, (%r12)")
#define TEST_R8D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X45, 0X00 # testl %r8d, (%r13)")
#define TEST_R8D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X06 # testl %r8d, (%r14)")
#define TEST_R8D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X07 # testl %r8d, (%r15)")
#define TEST_R8D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X00 # testl %r8d, (%eax)")
#define TEST_R8D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X03 # testl %r8d, (%ebx)")
#define TEST_R8D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X01 # testl %r8d, (%ecx)")
#define TEST_R8D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X02 # testl %r8d, (%edx)")
#define TEST_R8D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X07 # testl %r8d, (%edi)")
#define TEST_R8D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X06 # testl %r8d, (%esi)")
#define TEST_R8D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X45, 0X00 # testl %r8d, (%ebp)")
#define TEST_R8D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X04, 0X24 # testl %r8d, (%esp)")

#define TEST_R9D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X08 # testl %r9d, (%rax)")
#define TEST_R9D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X0B # testl %r9d, (%rbx)")
#define TEST_R9D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X09 # testl %r9d, (%rcx)")
#define TEST_R9D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X0A # testl %r9d, (%rdx)")
#define TEST_R9D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X0F # testl %r9d, (%rdi)")
#define TEST_R9D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X0E # testl %r9d, (%rsi)")
#define TEST_R9D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X4D, 0X00 # testl %r9d, (%rbp)")
#define TEST_R9D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X0C, 0X24 # testl %r9d, (%rsp)")
#define TEST_R9D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X08 # testl %r9d, (%r8)")
#define TEST_R9D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X09 # testl %r9d, (%r9)")
#define TEST_R9D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X0A # testl %r9d, (%r10)")
#define TEST_R9D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X0B # testl %r9d, (%r11)")
#define TEST_R9D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X0C, 0X24 # testl %r9d, (%r12)")
#define TEST_R9D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X4D, 0X00 # testl %r9d, (%r13)")
#define TEST_R9D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X0E # testl %r9d, (%r14)")
#define TEST_R9D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X0F # testl %r9d, (%r15)")
#define TEST_R9D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X08 # testl %r9d, (%eax)")
#define TEST_R9D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0B # testl %r9d, (%ebx)")
#define TEST_R9D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X09 # testl %r9d, (%ecx)")
#define TEST_R9D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0A # testl %r9d, (%edx)")
#define TEST_R9D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0F # testl %r9d, (%edi)")
#define TEST_R9D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0E # testl %r9d, (%esi)")
#define TEST_R9D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X4D, 0X00 # testl %r9d, (%ebp)")
#define TEST_R9D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X0C, 0X24 # testl %r9d, (%esp)")

#define TEST_R10D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X10 # testl %r10d, (%rax)")
#define TEST_R10D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X13 # testl %r10d, (%rbx)")
#define TEST_R10D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X11 # testl %r10d, (%rcx)")
#define TEST_R10D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X12 # testl %r10d, (%rdx)")
#define TEST_R10D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X17 # testl %r10d, (%rdi)")
#define TEST_R10D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X16 # testl %r10d, (%rsi)")
#define TEST_R10D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X55, 0X00 # testl %r10d, (%rbp)")
#define TEST_R10D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X14, 0X24 # testl %r10d, (%rsp)")
#define TEST_R10D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X10 # testl %r10d, (%r8)")
#define TEST_R10D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X11 # testl %r10d, (%r9)")
#define TEST_R10D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X12 # testl %r10d, (%r10)")
#define TEST_R10D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X13 # testl %r10d, (%r11)")
#define TEST_R10D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X14, 0X24 # testl %r10d, (%r12)")
#define TEST_R10D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X55, 0X00 # testl %r10d, (%r13)")
#define TEST_R10D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X16 # testl %r10d, (%r14)")
#define TEST_R10D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X17 # testl %r10d, (%r15)")
#define TEST_R10D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X10 # testl %r10d, (%eax)")
#define TEST_R10D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X13 # testl %r10d, (%ebx)")
#define TEST_R10D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X11 # testl %r10d, (%ecx)")
#define TEST_R10D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X12 # testl %r10d, (%edx)")
#define TEST_R10D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X17 # testl %r10d, (%edi)")
#define TEST_R10D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X16 # testl %r10d, (%esi)")
#define TEST_R10D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X55, 0X00 # testl %r10d, (%ebp)")
#define TEST_R10D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X14, 0X24 # testl %r10d, (%esp)")

#define TEST_R11D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X18 # testl %r11d, (%rax)")
#define TEST_R11D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X1B # testl %r11d, (%rbx)")
#define TEST_R11D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X19 # testl %r11d, (%rcx)")
#define TEST_R11D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X1A # testl %r11d, (%rdx)")
#define TEST_R11D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X1F # testl %r11d, (%rdi)")
#define TEST_R11D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X1E # testl %r11d, (%rsi)")
#define TEST_R11D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X5D, 0X00 # testl %r11d, (%rbp)")
#define TEST_R11D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X1C, 0X24 # testl %r11d, (%rsp)")
#define TEST_R11D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X18 # testl %r11d, (%r8)")
#define TEST_R11D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X19 # testl %r11d, (%r9)")
#define TEST_R11D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X1A # testl %r11d, (%r10)")
#define TEST_R11D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X1B # testl %r11d, (%r11)")
#define TEST_R11D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X1C, 0X24 # testl %r11d, (%r12)")
#define TEST_R11D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X5D, 0X00 # testl %r11d, (%r13)")
#define TEST_R11D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X1E # testl %r11d, (%r14)")
#define TEST_R11D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X1F # testl %r11d, (%r15)")
#define TEST_R11D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X18 # testl %r11d, (%eax)")
#define TEST_R11D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1B # testl %r11d, (%ebx)")
#define TEST_R11D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X19 # testl %r11d, (%ecx)")
#define TEST_R11D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1A # testl %r11d, (%edx)")
#define TEST_R11D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1F # testl %r11d, (%edi)")
#define TEST_R11D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1E # testl %r11d, (%esi)")
#define TEST_R11D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X5D, 0X00 # testl %r11d, (%ebp)")
#define TEST_R11D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X1C, 0X24 # testl %r11d, (%esp)")

#define TEST_R12D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X20 # testl %r12d, (%rax)")
#define TEST_R12D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X23 # testl %r12d, (%rbx)")
#define TEST_R12D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X21 # testl %r12d, (%rcx)")
#define TEST_R12D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X22 # testl %r12d, (%rdx)")
#define TEST_R12D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X27 # testl %r12d, (%rdi)")
#define TEST_R12D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X26 # testl %r12d, (%rsi)")
#define TEST_R12D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X65, 0X00 # testl %r12d, (%rbp)")
#define TEST_R12D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X24, 0X24 # testl %r12d, (%rsp)")
#define TEST_R12D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X20 # testl %r12d, (%r8)")
#define TEST_R12D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X21 # testl %r12d, (%r9)")
#define TEST_R12D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X22 # testl %r12d, (%r10)")
#define TEST_R12D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X23 # testl %r12d, (%r11)")
#define TEST_R12D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X24, 0X24 # testl %r12d, (%r12)")
#define TEST_R12D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X65, 0X00 # testl %r12d, (%r13)")
#define TEST_R12D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X26 # testl %r12d, (%r14)")
#define TEST_R12D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X27 # testl %r12d, (%r15)")
#define TEST_R12D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X20 # testl %r12d, (%eax)")
#define TEST_R12D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X23 # testl %r12d, (%ebx)")
#define TEST_R12D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X21 # testl %r12d, (%ecx)")
#define TEST_R12D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X22 # testl %r12d, (%edx)")
#define TEST_R12D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X27 # testl %r12d, (%edi)")
#define TEST_R12D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X26 # testl %r12d, (%esi)")
#define TEST_R12D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X65, 0X00 # testl %r12d, (%ebp)")
#define TEST_R12D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X24, 0X24 # testl %r12d, (%esp)")

#define TEST_R13D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X28 # testl %r13d, (%rax)")
#define TEST_R13D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X2B # testl %r13d, (%rbx)")
#define TEST_R13D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X29 # testl %r13d, (%rcx)")
#define TEST_R13D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X2A # testl %r13d, (%rdx)")
#define TEST_R13D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X2F # testl %r13d, (%rdi)")
#define TEST_R13D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X2E # testl %r13d, (%rsi)")
#define TEST_R13D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X6D, 0X00 # testl %r13d, (%rbp)")
#define TEST_R13D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X2C, 0X24 # testl %r13d, (%rsp)")
#define TEST_R13D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X28 # testl %r13d, (%r8)")
#define TEST_R13D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X29 # testl %r13d, (%r9)")
#define TEST_R13D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X2A # testl %r13d, (%r10)")
#define TEST_R13D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X2B # testl %r13d, (%r11)")
#define TEST_R13D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X2C, 0X24 # testl %r13d, (%r12)")
#define TEST_R13D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X6D, 0X00 # testl %r13d, (%r13)")
#define TEST_R13D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X2E # testl %r13d, (%r14)")
#define TEST_R13D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X2F # testl %r13d, (%r15)")
#define TEST_R13D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X28 # testl %r13d, (%eax)")
#define TEST_R13D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2B # testl %r13d, (%ebx)")
#define TEST_R13D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X29 # testl %r13d, (%ecx)")
#define TEST_R13D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2A # testl %r13d, (%edx)")
#define TEST_R13D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2F # testl %r13d, (%edi)")
#define TEST_R13D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2E # testl %r13d, (%esi)")
#define TEST_R13D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X6D, 0X00 # testl %r13d, (%ebp)")
#define TEST_R13D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X2C, 0X24 # testl %r13d, (%esp)")

#define TEST_R14D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X30 # testl %r14d, (%rax)")
#define TEST_R14D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X33 # testl %r14d, (%rbx)")
#define TEST_R14D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X31 # testl %r14d, (%rcx)")
#define TEST_R14D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X32 # testl %r14d, (%rdx)")
#define TEST_R14D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X37 # testl %r14d, (%rdi)")
#define TEST_R14D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X36 # testl %r14d, (%rsi)")
#define TEST_R14D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X75, 0X00 # testl %r14d, (%rbp)")
#define TEST_R14D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X34, 0X24 # testl %r14d, (%rsp)")
#define TEST_R14D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X30 # testl %r14d, (%r8)")
#define TEST_R14D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X31 # testl %r14d, (%r9)")
#define TEST_R14D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X32 # testl %r14d, (%r10)")
#define TEST_R14D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X33 # testl %r14d, (%r11)")
#define TEST_R14D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X34, 0X24 # testl %r14d, (%r12)")
#define TEST_R14D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X75, 0X00 # testl %r14d, (%r13)")
#define TEST_R14D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X36 # testl %r14d, (%r14)")
#define TEST_R14D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X37 # testl %r14d, (%r15)")
#define TEST_R14D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X30 # testl %r14d, (%eax)")
#define TEST_R14D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X33 # testl %r14d, (%ebx)")
#define TEST_R14D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X31 # testl %r14d, (%ecx)")
#define TEST_R14D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X32 # testl %r14d, (%edx)")
#define TEST_R14D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X37 # testl %r14d, (%edi)")
#define TEST_R14D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X36 # testl %r14d, (%esi)")
#define TEST_R14D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X75, 0X00 # testl %r14d, (%ebp)")
#define TEST_R14D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X34, 0X24 # testl %r14d, (%esp)")

#define TEST_R15D_TO_PTR_RAX CMT_ASM(".byte 0X44, 0X85, 0X38 # testl %r15d, (%rax)")
#define TEST_R15D_TO_PTR_RBX CMT_ASM(".byte 0X44, 0X85, 0X3B # testl %r15d, (%rbx)")
#define TEST_R15D_TO_PTR_RCX CMT_ASM(".byte 0X44, 0X85, 0X39 # testl %r15d, (%rcx)")
#define TEST_R15D_TO_PTR_RDX CMT_ASM(".byte 0X44, 0X85, 0X3A # testl %r15d, (%rdx)")
#define TEST_R15D_TO_PTR_RDI CMT_ASM(".byte 0X44, 0X85, 0X3F # testl %r15d, (%rdi)")
#define TEST_R15D_TO_PTR_RSI CMT_ASM(".byte 0X44, 0X85, 0X3E # testl %r15d, (%rsi)")
#define TEST_R15D_TO_PTR_RBP CMT_ASM(".byte 0X44, 0X85, 0X7D, 0X00 # testl %r15d, (%rbp)")
#define TEST_R15D_TO_PTR_RSP CMT_ASM(".byte 0X44, 0X85, 0X3C, 0X24 # testl %r15d, (%rsp)")
#define TEST_R15D_TO_PTR_R8 CMT_ASM(".byte 0X45, 0X85, 0X38 # testl %r15d, (%r8)")
#define TEST_R15D_TO_PTR_R9 CMT_ASM(".byte 0X45, 0X85, 0X39 # testl %r15d, (%r9)")
#define TEST_R15D_TO_PTR_R10 CMT_ASM(".byte 0X45, 0X85, 0X3A # testl %r15d, (%r10)")
#define TEST_R15D_TO_PTR_R11 CMT_ASM(".byte 0X45, 0X85, 0X3B # testl %r15d, (%r11)")
#define TEST_R15D_TO_PTR_R12 CMT_ASM(".byte 0X45, 0X85, 0X3C, 0X24 # testl %r15d, (%r12)")
#define TEST_R15D_TO_PTR_R13 CMT_ASM(".byte 0X45, 0X85, 0X7D, 0X00 # testl %r15d, (%r13)")
#define TEST_R15D_TO_PTR_R14 CMT_ASM(".byte 0X45, 0X85, 0X3E # testl %r15d, (%r14)")
#define TEST_R15D_TO_PTR_R15 CMT_ASM(".byte 0X45, 0X85, 0X3F # testl %r15d, (%r15)")
#define TEST_R15D_TO_PTR_EAX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X38 # testl %r15d, (%eax)")
#define TEST_R15D_TO_PTR_EBX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3B # testl %r15d, (%ebx)")
#define TEST_R15D_TO_PTR_ECX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X39 # testl %r15d, (%ecx)")
#define TEST_R15D_TO_PTR_EDX CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3A # testl %r15d, (%edx)")
#define TEST_R15D_TO_PTR_EDI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3F # testl %r15d, (%edi)")
#define TEST_R15D_TO_PTR_ESI CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3E # testl %r15d, (%esi)")
#define TEST_R15D_TO_PTR_EBP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X7D, 0X00 # testl %r15d, (%ebp)")
#define TEST_R15D_TO_PTR_ESP CMT_ASM(".byte 0X67, 0X44, 0X85, 0X3C, 0X24 # testl %r15d, (%esp)")

#define TEST_EAX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X80 # testl " _(VALUE) "(%rax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X83 # testl " _(VALUE) "(%rbx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X81 # testl " _(VALUE) "(%rcx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X82 # testl " _(VALUE) "(%rdx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testl " _(VALUE) "(%rdi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testl " _(VALUE) "(%rsi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testl " _(VALUE) "(%rbp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84, 0X24 # testl " _(VALUE) "(%rsp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X80 # testl " _(VALUE) "(%r8), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X81 # testl " _(VALUE) "(%r9), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X82 # testl " _(VALUE) "(%r10), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X83 # testl " _(VALUE) "(%r11), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X84, 0X24 # testl " _(VALUE) "(%r12), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X85 # testl " _(VALUE) "(%r13), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X86 # testl " _(VALUE) "(%r14), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X87 # testl " _(VALUE) "(%r15), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X80 # testl " _(VALUE) "(%eax), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X83 # testl " _(VALUE) "(%ebx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X81 # testl " _(VALUE) "(%ecx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X82 # testl " _(VALUE) "(%edx), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X87 # testl " _(VALUE) "(%edi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X86 # testl " _(VALUE) "(%esi), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X85 # testl " _(VALUE) "(%ebp), %eax")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X84, 0X24 # testl " _(VALUE) "(%esp), %eax")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EBX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X98 # testl " _(VALUE) "(%rax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9B # testl " _(VALUE) "(%rbx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X99 # testl " _(VALUE) "(%rcx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9A # testl " _(VALUE) "(%rdx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testl " _(VALUE) "(%rdi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testl " _(VALUE) "(%rsi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testl " _(VALUE) "(%rbp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%rsp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X98 # testl " _(VALUE) "(%r8), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X99 # testl " _(VALUE) "(%r9), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9A # testl " _(VALUE) "(%r10), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9B # testl " _(VALUE) "(%r11), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%r12), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9D # testl " _(VALUE) "(%r13), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9E # testl " _(VALUE) "(%r14), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9F # testl " _(VALUE) "(%r15), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X98 # testl " _(VALUE) "(%eax), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9B # testl " _(VALUE) "(%ebx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X99 # testl " _(VALUE) "(%ecx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9A # testl " _(VALUE) "(%edx), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9F # testl " _(VALUE) "(%edi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9E # testl " _(VALUE) "(%esi), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9D # testl " _(VALUE) "(%ebp), %ebx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%esp), %ebx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ECX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X88 # testl " _(VALUE) "(%rax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8B # testl " _(VALUE) "(%rbx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X89 # testl " _(VALUE) "(%rcx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8A # testl " _(VALUE) "(%rdx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testl " _(VALUE) "(%rdi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testl " _(VALUE) "(%rsi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testl " _(VALUE) "(%rbp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%rsp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X88 # testl " _(VALUE) "(%r8), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X89 # testl " _(VALUE) "(%r9), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8A # testl " _(VALUE) "(%r10), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8B # testl " _(VALUE) "(%r11), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%r12), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8D # testl " _(VALUE) "(%r13), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8E # testl " _(VALUE) "(%r14), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8F # testl " _(VALUE) "(%r15), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X88 # testl " _(VALUE) "(%eax), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8B # testl " _(VALUE) "(%ebx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X89 # testl " _(VALUE) "(%ecx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8A # testl " _(VALUE) "(%edx), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8F # testl " _(VALUE) "(%edi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8E # testl " _(VALUE) "(%esi), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8D # testl " _(VALUE) "(%ebp), %ecx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%esp), %ecx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EDX_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X90 # testl " _(VALUE) "(%rax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X93 # testl " _(VALUE) "(%rbx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X91 # testl " _(VALUE) "(%rcx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X92 # testl " _(VALUE) "(%rdx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testl " _(VALUE) "(%rdi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testl " _(VALUE) "(%rsi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testl " _(VALUE) "(%rbp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94, 0X24 # testl " _(VALUE) "(%rsp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X90 # testl " _(VALUE) "(%r8), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X91 # testl " _(VALUE) "(%r9), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X92 # testl " _(VALUE) "(%r10), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X93 # testl " _(VALUE) "(%r11), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X94, 0X24 # testl " _(VALUE) "(%r12), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X95 # testl " _(VALUE) "(%r13), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X96 # testl " _(VALUE) "(%r14), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X97 # testl " _(VALUE) "(%r15), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X90 # testl " _(VALUE) "(%eax), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X93 # testl " _(VALUE) "(%ebx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X91 # testl " _(VALUE) "(%ecx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X92 # testl " _(VALUE) "(%edx), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X97 # testl " _(VALUE) "(%edi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X96 # testl " _(VALUE) "(%esi), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X95 # testl " _(VALUE) "(%ebp), %edx")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X94, 0X24 # testl " _(VALUE) "(%esp), %edx")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EDI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB8 # testl " _(VALUE) "(%rax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBB # testl " _(VALUE) "(%rbx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB9 # testl " _(VALUE) "(%rcx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBA # testl " _(VALUE) "(%rdx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testl " _(VALUE) "(%rdi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testl " _(VALUE) "(%rsi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testl " _(VALUE) "(%rbp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%rsp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB8 # testl " _(VALUE) "(%r8), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB9 # testl " _(VALUE) "(%r9), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBA # testl " _(VALUE) "(%r10), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBB # testl " _(VALUE) "(%r11), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%r12), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBD # testl " _(VALUE) "(%r13), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBE # testl " _(VALUE) "(%r14), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBF # testl " _(VALUE) "(%r15), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB8 # testl " _(VALUE) "(%eax), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBB # testl " _(VALUE) "(%ebx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB9 # testl " _(VALUE) "(%ecx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBA # testl " _(VALUE) "(%edx), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBF # testl " _(VALUE) "(%edi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBE # testl " _(VALUE) "(%esi), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBD # testl " _(VALUE) "(%ebp), %edi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%esp), %edi")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ESI_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB0 # testl " _(VALUE) "(%rax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB3 # testl " _(VALUE) "(%rbx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB1 # testl " _(VALUE) "(%rcx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB2 # testl " _(VALUE) "(%rdx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testl " _(VALUE) "(%rdi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testl " _(VALUE) "(%rsi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testl " _(VALUE) "(%rbp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%rsp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB0 # testl " _(VALUE) "(%r8), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB1 # testl " _(VALUE) "(%r9), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB2 # testl " _(VALUE) "(%r10), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB3 # testl " _(VALUE) "(%r11), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%r12), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB5 # testl " _(VALUE) "(%r13), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB6 # testl " _(VALUE) "(%r14), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB7 # testl " _(VALUE) "(%r15), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB0 # testl " _(VALUE) "(%eax), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB3 # testl " _(VALUE) "(%ebx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB1 # testl " _(VALUE) "(%ecx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB2 # testl " _(VALUE) "(%edx), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB7 # testl " _(VALUE) "(%edi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB6 # testl " _(VALUE) "(%esi), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB5 # testl " _(VALUE) "(%ebp), %esi")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%esp), %esi")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EBP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA8 # testl " _(VALUE) "(%rax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAB # testl " _(VALUE) "(%rbx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA9 # testl " _(VALUE) "(%rcx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAA # testl " _(VALUE) "(%rdx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testl " _(VALUE) "(%rdi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testl " _(VALUE) "(%rsi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testl " _(VALUE) "(%rbp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%rsp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA8 # testl " _(VALUE) "(%r8), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA9 # testl " _(VALUE) "(%r9), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAA # testl " _(VALUE) "(%r10), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAB # testl " _(VALUE) "(%r11), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%r12), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAD # testl " _(VALUE) "(%r13), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAE # testl " _(VALUE) "(%r14), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAF # testl " _(VALUE) "(%r15), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA8 # testl " _(VALUE) "(%eax), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAB # testl " _(VALUE) "(%ebx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA9 # testl " _(VALUE) "(%ecx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAA # testl " _(VALUE) "(%edx), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAF # testl " _(VALUE) "(%edi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAE # testl " _(VALUE) "(%esi), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAD # testl " _(VALUE) "(%ebp), %ebp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%esp), %ebp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ESP_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA0 # testl " _(VALUE) "(%rax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA3 # testl " _(VALUE) "(%rbx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA1 # testl " _(VALUE) "(%rcx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA2 # testl " _(VALUE) "(%rdx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testl " _(VALUE) "(%rdi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testl " _(VALUE) "(%rsi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testl " _(VALUE) "(%rbp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%rsp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA0 # testl " _(VALUE) "(%r8), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA1 # testl " _(VALUE) "(%r9), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA2 # testl " _(VALUE) "(%r10), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA3 # testl " _(VALUE) "(%r11), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%r12), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA5 # testl " _(VALUE) "(%r13), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA6 # testl " _(VALUE) "(%r14), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA7 # testl " _(VALUE) "(%r15), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA0 # testl " _(VALUE) "(%eax), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA3 # testl " _(VALUE) "(%ebx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA1 # testl " _(VALUE) "(%ecx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA2 # testl " _(VALUE) "(%edx), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA7 # testl " _(VALUE) "(%edi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA6 # testl " _(VALUE) "(%esi), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA5 # testl " _(VALUE) "(%ebp), %esp")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%esp), %esp")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X80 # testl " _(VALUE) "(%rax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X83 # testl " _(VALUE) "(%rbx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X81 # testl " _(VALUE) "(%rcx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X82 # testl " _(VALUE) "(%rdx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X87 # testl " _(VALUE) "(%rdi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X86 # testl " _(VALUE) "(%rsi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X85 # testl " _(VALUE) "(%rbp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X84, 0X24 # testl " _(VALUE) "(%rsp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X80 # testl " _(VALUE) "(%r8), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X81 # testl " _(VALUE) "(%r9), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X82 # testl " _(VALUE) "(%r10), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X83 # testl " _(VALUE) "(%r11), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X84, 0X24 # testl " _(VALUE) "(%r12), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X85 # testl " _(VALUE) "(%r13), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X86 # testl " _(VALUE) "(%r14), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X87 # testl " _(VALUE) "(%r15), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X80 # testl " _(VALUE) "(%eax), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X83 # testl " _(VALUE) "(%ebx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X81 # testl " _(VALUE) "(%ecx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X82 # testl " _(VALUE) "(%edx), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X87 # testl " _(VALUE) "(%edi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X86 # testl " _(VALUE) "(%esi), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X85 # testl " _(VALUE) "(%ebp), %r8d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X84, 0X24 # testl " _(VALUE) "(%esp), %r8d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X88 # testl " _(VALUE) "(%rax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8B # testl " _(VALUE) "(%rbx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X89 # testl " _(VALUE) "(%rcx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8A # testl " _(VALUE) "(%rdx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8F # testl " _(VALUE) "(%rdi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8E # testl " _(VALUE) "(%rsi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8D # testl " _(VALUE) "(%rbp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%rsp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X88 # testl " _(VALUE) "(%r8), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X89 # testl " _(VALUE) "(%r9), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8A # testl " _(VALUE) "(%r10), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8B # testl " _(VALUE) "(%r11), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%r12), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8D # testl " _(VALUE) "(%r13), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8E # testl " _(VALUE) "(%r14), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8F # testl " _(VALUE) "(%r15), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X88 # testl " _(VALUE) "(%eax), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8B # testl " _(VALUE) "(%ebx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X89 # testl " _(VALUE) "(%ecx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8A # testl " _(VALUE) "(%edx), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8F # testl " _(VALUE) "(%edi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8E # testl " _(VALUE) "(%esi), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8D # testl " _(VALUE) "(%ebp), %r9d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8C, 0X24 # testl " _(VALUE) "(%esp), %r9d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X90 # testl " _(VALUE) "(%rax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X93 # testl " _(VALUE) "(%rbx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X91 # testl " _(VALUE) "(%rcx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X92 # testl " _(VALUE) "(%rdx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X97 # testl " _(VALUE) "(%rdi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X96 # testl " _(VALUE) "(%rsi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X95 # testl " _(VALUE) "(%rbp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X94, 0X24 # testl " _(VALUE) "(%rsp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X90 # testl " _(VALUE) "(%r8), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X91 # testl " _(VALUE) "(%r9), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X92 # testl " _(VALUE) "(%r10), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X93 # testl " _(VALUE) "(%r11), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X94, 0X24 # testl " _(VALUE) "(%r12), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X95 # testl " _(VALUE) "(%r13), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X96 # testl " _(VALUE) "(%r14), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X97 # testl " _(VALUE) "(%r15), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X90 # testl " _(VALUE) "(%eax), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X93 # testl " _(VALUE) "(%ebx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X91 # testl " _(VALUE) "(%ecx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X92 # testl " _(VALUE) "(%edx), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X97 # testl " _(VALUE) "(%edi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X96 # testl " _(VALUE) "(%esi), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X95 # testl " _(VALUE) "(%ebp), %r10d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X94, 0X24 # testl " _(VALUE) "(%esp), %r10d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X98 # testl " _(VALUE) "(%rax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9B # testl " _(VALUE) "(%rbx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X99 # testl " _(VALUE) "(%rcx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9A # testl " _(VALUE) "(%rdx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9F # testl " _(VALUE) "(%rdi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9E # testl " _(VALUE) "(%rsi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9D # testl " _(VALUE) "(%rbp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%rsp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X98 # testl " _(VALUE) "(%r8), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X99 # testl " _(VALUE) "(%r9), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9A # testl " _(VALUE) "(%r10), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9B # testl " _(VALUE) "(%r11), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%r12), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9D # testl " _(VALUE) "(%r13), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9E # testl " _(VALUE) "(%r14), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9F # testl " _(VALUE) "(%r15), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X98 # testl " _(VALUE) "(%eax), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9B # testl " _(VALUE) "(%ebx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X99 # testl " _(VALUE) "(%ecx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9A # testl " _(VALUE) "(%edx), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9F # testl " _(VALUE) "(%edi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9E # testl " _(VALUE) "(%esi), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9D # testl " _(VALUE) "(%ebp), %r11d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9C, 0X24 # testl " _(VALUE) "(%esp), %r11d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA0 # testl " _(VALUE) "(%rax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA3 # testl " _(VALUE) "(%rbx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA1 # testl " _(VALUE) "(%rcx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA2 # testl " _(VALUE) "(%rdx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA7 # testl " _(VALUE) "(%rdi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA6 # testl " _(VALUE) "(%rsi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA5 # testl " _(VALUE) "(%rbp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%rsp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA0 # testl " _(VALUE) "(%r8), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA1 # testl " _(VALUE) "(%r9), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA2 # testl " _(VALUE) "(%r10), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA3 # testl " _(VALUE) "(%r11), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%r12), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA5 # testl " _(VALUE) "(%r13), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA6 # testl " _(VALUE) "(%r14), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA7 # testl " _(VALUE) "(%r15), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA0 # testl " _(VALUE) "(%eax), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA3 # testl " _(VALUE) "(%ebx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA1 # testl " _(VALUE) "(%ecx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA2 # testl " _(VALUE) "(%edx), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA7 # testl " _(VALUE) "(%edi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA6 # testl " _(VALUE) "(%esi), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA5 # testl " _(VALUE) "(%ebp), %r12d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA4, 0X24 # testl " _(VALUE) "(%esp), %r12d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA8 # testl " _(VALUE) "(%rax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAB # testl " _(VALUE) "(%rbx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA9 # testl " _(VALUE) "(%rcx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAA # testl " _(VALUE) "(%rdx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAF # testl " _(VALUE) "(%rdi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAE # testl " _(VALUE) "(%rsi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAD # testl " _(VALUE) "(%rbp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%rsp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA8 # testl " _(VALUE) "(%r8), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA9 # testl " _(VALUE) "(%r9), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAA # testl " _(VALUE) "(%r10), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAB # testl " _(VALUE) "(%r11), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%r12), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAD # testl " _(VALUE) "(%r13), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAE # testl " _(VALUE) "(%r14), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAF # testl " _(VALUE) "(%r15), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA8 # testl " _(VALUE) "(%eax), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAB # testl " _(VALUE) "(%ebx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA9 # testl " _(VALUE) "(%ecx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAA # testl " _(VALUE) "(%edx), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAF # testl " _(VALUE) "(%edi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAE # testl " _(VALUE) "(%esi), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAD # testl " _(VALUE) "(%ebp), %r13d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAC, 0X24 # testl " _(VALUE) "(%esp), %r13d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB0 # testl " _(VALUE) "(%rax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB3 # testl " _(VALUE) "(%rbx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB1 # testl " _(VALUE) "(%rcx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB2 # testl " _(VALUE) "(%rdx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB7 # testl " _(VALUE) "(%rdi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB6 # testl " _(VALUE) "(%rsi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB5 # testl " _(VALUE) "(%rbp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%rsp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB0 # testl " _(VALUE) "(%r8), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB1 # testl " _(VALUE) "(%r9), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB2 # testl " _(VALUE) "(%r10), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB3 # testl " _(VALUE) "(%r11), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%r12), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB5 # testl " _(VALUE) "(%r13), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB6 # testl " _(VALUE) "(%r14), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB7 # testl " _(VALUE) "(%r15), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB0 # testl " _(VALUE) "(%eax), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB3 # testl " _(VALUE) "(%ebx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB1 # testl " _(VALUE) "(%ecx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB2 # testl " _(VALUE) "(%edx), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB7 # testl " _(VALUE) "(%edi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB6 # testl " _(VALUE) "(%esi), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB5 # testl " _(VALUE) "(%ebp), %r14d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB4, 0X24 # testl " _(VALUE) "(%esp), %r14d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15D_FROM_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB8 # testl " _(VALUE) "(%rax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBB # testl " _(VALUE) "(%rbx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB9 # testl " _(VALUE) "(%rcx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBA # testl " _(VALUE) "(%rdx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBF # testl " _(VALUE) "(%rdi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBE # testl " _(VALUE) "(%rsi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBD # testl " _(VALUE) "(%rbp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%rsp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB8 # testl " _(VALUE) "(%r8), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB9 # testl " _(VALUE) "(%r9), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBA # testl " _(VALUE) "(%r10), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBB # testl " _(VALUE) "(%r11), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%r12), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBD # testl " _(VALUE) "(%r13), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBE # testl " _(VALUE) "(%r14), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBF # testl " _(VALUE) "(%r15), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB8 # testl " _(VALUE) "(%eax), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBB # testl " _(VALUE) "(%ebx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB9 # testl " _(VALUE) "(%ecx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBA # testl " _(VALUE) "(%edx), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBF # testl " _(VALUE) "(%edi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBE # testl " _(VALUE) "(%esi), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBD # testl " _(VALUE) "(%ebp), %r15d")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_FROM_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBC, 0X24 # testl " _(VALUE) "(%esp), %r15d")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EAX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X80 # testl %eax, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X83 # testl %eax, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X81 # testl %eax, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X82 # testl %eax, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X87 # testl %eax, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X86 # testl %eax, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X85 # testl %eax, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X84, 0X24 # testl %eax, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X80 # testl %eax, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X81 # testl %eax, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X82 # testl %eax, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X83 # testl %eax, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X84, 0X24 # testl %eax, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X85 # testl %eax, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X86 # testl %eax, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X87 # testl %eax, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X80 # testl %eax, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X83 # testl %eax, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X81 # testl %eax, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X82 # testl %eax, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X87 # testl %eax, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X86 # testl %eax, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X85 # testl %eax, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EAX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X84, 0X24 # testl %eax, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EBX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X98 # testl %ebx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9B # testl %ebx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X99 # testl %ebx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9A # testl %ebx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9F # testl %ebx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9E # testl %ebx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9D # testl %ebx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X9C, 0X24 # testl %ebx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X98 # testl %ebx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X99 # testl %ebx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9A # testl %ebx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9B # testl %ebx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9C, 0X24 # testl %ebx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9D # testl %ebx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9E # testl %ebx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X9F # testl %ebx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X98 # testl %ebx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9B # testl %ebx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X99 # testl %ebx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9A # testl %ebx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9F # testl %ebx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9E # testl %ebx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9D # testl %ebx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X9C, 0X24 # testl %ebx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ECX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X88 # testl %ecx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8B # testl %ecx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X89 # testl %ecx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8A # testl %ecx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8F # testl %ecx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8E # testl %ecx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8D # testl %ecx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X8C, 0X24 # testl %ecx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X88 # testl %ecx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X89 # testl %ecx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8A # testl %ecx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8B # testl %ecx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8C, 0X24 # testl %ecx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8D # testl %ecx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8E # testl %ecx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X8F # testl %ecx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X88 # testl %ecx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8B # testl %ecx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X89 # testl %ecx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8A # testl %ecx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8F # testl %ecx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8E # testl %ecx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8D # testl %ecx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ECX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X8C, 0X24 # testl %ecx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EDX_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X90 # testl %edx, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X93 # testl %edx, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X91 # testl %edx, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0X92 # testl %edx, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X97 # testl %edx, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0X96 # testl %edx, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X95 # testl %edx, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0X94, 0X24 # testl %edx, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X90 # testl %edx, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X91 # testl %edx, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X92 # testl %edx, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X93 # testl %edx, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X94, 0X24 # testl %edx, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X95 # testl %edx, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X96 # testl %edx, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0X97 # testl %edx, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X90 # testl %edx, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X93 # testl %edx, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X91 # testl %edx, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X92 # testl %edx, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X97 # testl %edx, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X96 # testl %edx, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X95 # testl %edx, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDX_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0X94, 0X24 # testl %edx, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EDI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB8 # testl %edi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBB # testl %edi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB9 # testl %edi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBA # testl %edi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBF # testl %edi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBE # testl %edi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBD # testl %edi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XBC, 0X24 # testl %edi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB8 # testl %edi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB9 # testl %edi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBA # testl %edi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBB # testl %edi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBC, 0X24 # testl %edi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBD # testl %edi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBE # testl %edi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XBF # testl %edi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB8 # testl %edi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBB # testl %edi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB9 # testl %edi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBA # testl %edi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBF # testl %edi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBE # testl %edi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBD # testl %edi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EDI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XBC, 0X24 # testl %edi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ESI_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB0 # testl %esi, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB3 # testl %esi, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB1 # testl %esi, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB2 # testl %esi, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB7 # testl %esi, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB6 # testl %esi, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB5 # testl %esi, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XB4, 0X24 # testl %esi, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB0 # testl %esi, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB1 # testl %esi, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB2 # testl %esi, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB3 # testl %esi, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB4, 0X24 # testl %esi, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB5 # testl %esi, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB6 # testl %esi, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XB7 # testl %esi, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB0 # testl %esi, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB3 # testl %esi, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB1 # testl %esi, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB2 # testl %esi, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB7 # testl %esi, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB6 # testl %esi, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB5 # testl %esi, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESI_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XB4, 0X24 # testl %esi, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_EBP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA8 # testl %ebp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAB # testl %ebp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA9 # testl %ebp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAA # testl %ebp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAF # testl %ebp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAE # testl %ebp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAD # testl %ebp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XAC, 0X24 # testl %ebp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA8 # testl %ebp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA9 # testl %ebp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAA # testl %ebp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAB # testl %ebp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAC, 0X24 # testl %ebp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAD # testl %ebp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAE # testl %ebp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XAF # testl %ebp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA8 # testl %ebp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAB # testl %ebp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA9 # testl %ebp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAA # testl %ebp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAF # testl %ebp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAE # testl %ebp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAD # testl %ebp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_EBP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XAC, 0X24 # testl %ebp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_ESP_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA0 # testl %esp, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA3 # testl %esp, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA1 # testl %esp, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA2 # testl %esp, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA7 # testl %esp, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA6 # testl %esp, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA5 # testl %esp, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X85, 0XA4, 0X24 # testl %esp, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA0 # testl %esp, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA1 # testl %esp, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA2 # testl %esp, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA3 # testl %esp, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA4, 0X24 # testl %esp, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA5 # testl %esp, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA6 # testl %esp, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X41, 0X85, 0XA7 # testl %esp, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA0 # testl %esp, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA3 # testl %esp, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA1 # testl %esp, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA2 # testl %esp, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA7 # testl %esp, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA6 # testl %esp, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA5 # testl %esp, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_ESP_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X85, 0XA4, 0X24 # testl %esp, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R8D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X80 # testl %r8d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X83 # testl %r8d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X81 # testl %r8d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X82 # testl %r8d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X87 # testl %r8d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X86 # testl %r8d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X85 # testl %r8d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X84, 0X24 # testl %r8d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X80 # testl %r8d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X81 # testl %r8d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X82 # testl %r8d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X83 # testl %r8d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X84, 0X24 # testl %r8d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X85 # testl %r8d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X86 # testl %r8d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X87 # testl %r8d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X80 # testl %r8d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X83 # testl %r8d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X81 # testl %r8d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X82 # testl %r8d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X87 # testl %r8d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X86 # testl %r8d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X85 # testl %r8d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R8D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X84, 0X24 # testl %r8d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R9D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X88 # testl %r9d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8B # testl %r9d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X89 # testl %r9d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8A # testl %r9d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8F # testl %r9d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8E # testl %r9d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8D # testl %r9d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X8C, 0X24 # testl %r9d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X88 # testl %r9d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X89 # testl %r9d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8A # testl %r9d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8B # testl %r9d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8C, 0X24 # testl %r9d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8D # testl %r9d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8E # testl %r9d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X8F # testl %r9d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X88 # testl %r9d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8B # testl %r9d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X89 # testl %r9d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8A # testl %r9d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8F # testl %r9d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8E # testl %r9d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8D # testl %r9d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R9D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X8C, 0X24 # testl %r9d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R10D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X90 # testl %r10d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X93 # testl %r10d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X91 # testl %r10d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X92 # testl %r10d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X97 # testl %r10d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X96 # testl %r10d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X95 # testl %r10d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X94, 0X24 # testl %r10d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X90 # testl %r10d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X91 # testl %r10d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X92 # testl %r10d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X93 # testl %r10d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X94, 0X24 # testl %r10d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X95 # testl %r10d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X96 # testl %r10d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X97 # testl %r10d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X90 # testl %r10d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X93 # testl %r10d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X91 # testl %r10d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X92 # testl %r10d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X97 # testl %r10d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X96 # testl %r10d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X95 # testl %r10d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R10D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X94, 0X24 # testl %r10d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R11D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X98 # testl %r11d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9B # testl %r11d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X99 # testl %r11d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9A # testl %r11d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9F # testl %r11d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9E # testl %r11d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9D # testl %r11d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0X9C, 0X24 # testl %r11d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X98 # testl %r11d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X99 # testl %r11d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9A # testl %r11d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9B # testl %r11d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9C, 0X24 # testl %r11d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9D # testl %r11d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9E # testl %r11d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0X9F # testl %r11d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X98 # testl %r11d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9B # testl %r11d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X99 # testl %r11d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9A # testl %r11d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9F # testl %r11d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9E # testl %r11d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9D # testl %r11d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R11D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0X9C, 0X24 # testl %r11d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R12D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA0 # testl %r12d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA3 # testl %r12d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA1 # testl %r12d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA2 # testl %r12d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA7 # testl %r12d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA6 # testl %r12d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA5 # testl %r12d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA4, 0X24 # testl %r12d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA0 # testl %r12d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA1 # testl %r12d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA2 # testl %r12d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA3 # testl %r12d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA4, 0X24 # testl %r12d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA5 # testl %r12d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA6 # testl %r12d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA7 # testl %r12d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA0 # testl %r12d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA3 # testl %r12d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA1 # testl %r12d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA2 # testl %r12d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA7 # testl %r12d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA6 # testl %r12d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA5 # testl %r12d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R12D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA4, 0X24 # testl %r12d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R13D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA8 # testl %r13d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAB # testl %r13d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XA9 # testl %r13d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAA # testl %r13d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAF # testl %r13d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAE # testl %r13d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAD # testl %r13d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XAC, 0X24 # testl %r13d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA8 # testl %r13d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XA9 # testl %r13d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAA # testl %r13d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAB # testl %r13d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAC, 0X24 # testl %r13d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAD # testl %r13d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAE # testl %r13d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XAF # testl %r13d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA8 # testl %r13d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAB # testl %r13d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XA9 # testl %r13d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAA # testl %r13d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAF # testl %r13d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAE # testl %r13d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAD # testl %r13d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R13D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XAC, 0X24 # testl %r13d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R14D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB0 # testl %r14d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB3 # testl %r14d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB1 # testl %r14d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB2 # testl %r14d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB7 # testl %r14d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB6 # testl %r14d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB5 # testl %r14d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB4, 0X24 # testl %r14d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB0 # testl %r14d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB1 # testl %r14d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB2 # testl %r14d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB3 # testl %r14d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB4, 0X24 # testl %r14d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB5 # testl %r14d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB6 # testl %r14d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB7 # testl %r14d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB0 # testl %r14d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB3 # testl %r14d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB1 # testl %r14d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB2 # testl %r14d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB7 # testl %r14d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB6 # testl %r14d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB5 # testl %r14d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R14D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB4, 0X24 # testl %r14d, " _(VALUE) "(%esp)")\
	CMT_ASM(".long " _(VALUE))

#define TEST_R15D_TO_PTR_RAX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB8 # testl %r15d, " _(VALUE) "(%rax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RBX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBB # testl %r15d, " _(VALUE) "(%rbx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RCX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XB9 # testl %r15d, " _(VALUE) "(%rcx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RDX_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBA # testl %r15d, " _(VALUE) "(%rdx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RDI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBF # testl %r15d, " _(VALUE) "(%rdi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RSI_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBE # testl %r15d, " _(VALUE) "(%rsi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RBP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBD # testl %r15d, " _(VALUE) "(%rbp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_RSP_(VALUE) \
	CMT_ASM(".byte 0X44, 0X85, 0XBC, 0X24 # testl %r15d, " _(VALUE) "(%rsp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R8_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB8 # testl %r15d, " _(VALUE) "(%r8)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R9_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XB9 # testl %r15d, " _(VALUE) "(%r9)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R10_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBA # testl %r15d, " _(VALUE) "(%r10)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R11_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBB # testl %r15d, " _(VALUE) "(%r11)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R12_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBC, 0X24 # testl %r15d, " _(VALUE) "(%r12)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R13_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBD # testl %r15d, " _(VALUE) "(%r13)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R14_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBE # testl %r15d, " _(VALUE) "(%r14)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_R15_(VALUE) \
	CMT_ASM(".byte 0X45, 0X85, 0XBF # testl %r15d, " _(VALUE) "(%r15)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_EAX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB8 # testl %r15d, " _(VALUE) "(%eax)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_EBX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBB # testl %r15d, " _(VALUE) "(%ebx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_ECX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XB9 # testl %r15d, " _(VALUE) "(%ecx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_EDX_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBA # testl %r15d, " _(VALUE) "(%edx)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_EDI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBF # testl %r15d, " _(VALUE) "(%edi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_ESI_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBE # testl %r15d, " _(VALUE) "(%esi)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_EBP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBD # testl %r15d, " _(VALUE) "(%ebp)")\
	CMT_ASM(".long " _(VALUE))
#define TEST_R15D_TO_PTR_ESP_(VALUE) \
	CMT_ASM(".byte 0X67, 0X44, 0X85, 0XBC, 0X24 # testl %r15d, " _(VALUE) "(%esp)")\
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
