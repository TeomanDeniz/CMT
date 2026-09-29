/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define _ADC_EAX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC0)
#define _ADC_EAX_EBX __ASM__OP__(0X11) __ASM__OP__(0XD8)
#define _ADC_EAX_ECX __ASM__OP__(0X11) __ASM__OP__(0XC8)
#define _ADC_EAX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD0)
#define _ADC_EAX_EDI __ASM__OP__(0X11) __ASM__OP__(0XF8)
#define _ADC_EAX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF0)
#define _ADC_EAX_EBP __ASM__OP__(0X11) __ASM__OP__(0XE8)
#define _ADC_EAX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE0)

#define _ADC_EBX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC3)
#define _ADC_EBX_EBX __ASM__OP__(0X11) __ASM__OP__(0XDB)
#define _ADC_EBX_ECX __ASM__OP__(0X11) __ASM__OP__(0XCB)
#define _ADC_EBX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD3)
#define _ADC_EBX_EDI __ASM__OP__(0X11) __ASM__OP__(0XFB)
#define _ADC_EBX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF3)
#define _ADC_EBX_EBP __ASM__OP__(0X11) __ASM__OP__(0XEB)
#define _ADC_EBX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE3)

#define _ADC_ECX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC1)
#define _ADC_ECX_EBX __ASM__OP__(0X11) __ASM__OP__(0XD9)
#define _ADC_ECX_ECX __ASM__OP__(0X11) __ASM__OP__(0XC9)
#define _ADC_ECX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD1)
#define _ADC_ECX_EDI __ASM__OP__(0X11) __ASM__OP__(0XF9)
#define _ADC_ECX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF1)
#define _ADC_ECX_EBP __ASM__OP__(0X11) __ASM__OP__(0XE9)
#define _ADC_ECX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE1)

#define _ADC_EDX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC2)
#define _ADC_EDX_EBX __ASM__OP__(0X11) __ASM__OP__(0XDA)
#define _ADC_EDX_ECX __ASM__OP__(0X11) __ASM__OP__(0XCA)
#define _ADC_EDX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD2)
#define _ADC_EDX_EDI __ASM__OP__(0X11) __ASM__OP__(0XFA)
#define _ADC_EDX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF2)
#define _ADC_EDX_EBP __ASM__OP__(0X11) __ASM__OP__(0XEA)
#define _ADC_EDX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE2)

#define _ADC_EDI_EAX __ASM__OP__(0X11) __ASM__OP__(0XC7)
#define _ADC_EDI_EBX __ASM__OP__(0X11) __ASM__OP__(0XDF)
#define _ADC_EDI_ECX __ASM__OP__(0X11) __ASM__OP__(0XCF)
#define _ADC_EDI_EDX __ASM__OP__(0X11) __ASM__OP__(0XD7)
#define _ADC_EDI_EDI __ASM__OP__(0X11) __ASM__OP__(0XFF)
#define _ADC_EDI_ESI __ASM__OP__(0X11) __ASM__OP__(0XF7)
#define _ADC_EDI_EBP __ASM__OP__(0X11) __ASM__OP__(0XEF)
#define _ADC_EDI_ESP __ASM__OP__(0X11) __ASM__OP__(0XE7)

#define _ADC_ESI_EAX __ASM__OP__(0X11) __ASM__OP__(0XC6)
#define _ADC_ESI_EBX __ASM__OP__(0X11) __ASM__OP__(0XDE)
#define _ADC_ESI_ECX __ASM__OP__(0X11) __ASM__OP__(0XCE)
#define _ADC_ESI_EDX __ASM__OP__(0X11) __ASM__OP__(0XD6)
#define _ADC_ESI_EDI __ASM__OP__(0X11) __ASM__OP__(0XFE)
#define _ADC_ESI_ESI __ASM__OP__(0X11) __ASM__OP__(0XF6)
#define _ADC_ESI_EBP __ASM__OP__(0X11) __ASM__OP__(0XEE)
#define _ADC_ESI_ESP __ASM__OP__(0X11) __ASM__OP__(0XE6)

#define _ADC_EBP_EAX __ASM__OP__(0X11) __ASM__OP__(0XC5)
#define _ADC_EBP_EBX __ASM__OP__(0X11) __ASM__OP__(0XDD)
#define _ADC_EBP_ECX __ASM__OP__(0X11) __ASM__OP__(0XCD)
#define _ADC_EBP_EDX __ASM__OP__(0X11) __ASM__OP__(0XD5)
#define _ADC_EBP_EDI __ASM__OP__(0X11) __ASM__OP__(0XFD)
#define _ADC_EBP_ESI __ASM__OP__(0X11) __ASM__OP__(0XF5)
#define _ADC_EBP_EBP __ASM__OP__(0X11) __ASM__OP__(0XED)
#define _ADC_EBP_ESP __ASM__OP__(0X11) __ASM__OP__(0XE5)

#define _ADC_ESP_EAX __ASM__OP__(0X11) __ASM__OP__(0XC4)
#define _ADC_ESP_EBX __ASM__OP__(0X11) __ASM__OP__(0XDC)
#define _ADC_ESP_ECX __ASM__OP__(0X11) __ASM__OP__(0XCC)
#define _ADC_ESP_EDX __ASM__OP__(0X11) __ASM__OP__(0XD4)
#define _ADC_ESP_EDI __ASM__OP__(0X11) __ASM__OP__(0XFC)
#define _ADC_ESP_ESI __ASM__OP__(0X11) __ASM__OP__(0XF4)
#define _ADC_ESP_EBP __ASM__OP__(0X11) __ASM__OP__(0XEC)
#define _ADC_ESP_ESP __ASM__OP__(0X11) __ASM__OP__(0XE4)

#define _ADC_EAX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD0)\
	__ASM__IMM32__(VALUE)
#define _ADC_EBX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD3)\
	__ASM__IMM32__(VALUE)
#define _ADC_ECX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD1)\
	__ASM__IMM32__(VALUE)
#define _ADC_EDX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD2)\
	__ASM__IMM32__(VALUE)
#define _ADC_EDI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD7)\
	__ASM__IMM32__(VALUE)
#define _ADC_ESI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD6)\
	__ASM__IMM32__(VALUE)
#define _ADC_EBP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD5)\
	__ASM__IMM32__(VALUE)
#define _ADC_ESP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD4)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _ADC_EAX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC0)
#define _ADC_EAX_EBX __ASM__OP__(0X11) __ASM__OP__(0XD8)
#define _ADC_EAX_ECX __ASM__OP__(0X11) __ASM__OP__(0XC8)
#define _ADC_EAX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD0)
#define _ADC_EAX_EDI __ASM__OP__(0X11) __ASM__OP__(0XF8)
#define _ADC_EAX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF0)
#define _ADC_EAX_EBP __ASM__OP__(0X11) __ASM__OP__(0XE8)
#define _ADC_EAX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE0)
#define _ADC_EAX_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC0)
#define _ADC_EAX_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC8)
#define _ADC_EAX_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD0)
#define _ADC_EAX_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD8)
#define _ADC_EAX_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE0)
#define _ADC_EAX_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE8)
#define _ADC_EAX_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF0)
#define _ADC_EAX_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF8)

#define _ADC_EBX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC3)
#define _ADC_EBX_EBX __ASM__OP__(0X11) __ASM__OP__(0XDB)
#define _ADC_EBX_ECX __ASM__OP__(0X11) __ASM__OP__(0XCB)
#define _ADC_EBX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD3)
#define _ADC_EBX_EDI __ASM__OP__(0X11) __ASM__OP__(0XFB)
#define _ADC_EBX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF3)
#define _ADC_EBX_EBP __ASM__OP__(0X11) __ASM__OP__(0XEB)
#define _ADC_EBX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE3)
#define _ADC_EBX_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC3)
#define _ADC_EBX_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCB)
#define _ADC_EBX_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD3)
#define _ADC_EBX_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDB)
#define _ADC_EBX_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE3)
#define _ADC_EBX_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XEB)
#define _ADC_EBX_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF3)
#define _ADC_EBX_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFB)

#define _ADC_ECX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC1)
#define _ADC_ECX_EBX __ASM__OP__(0X11) __ASM__OP__(0XD9)
#define _ADC_ECX_ECX __ASM__OP__(0X11) __ASM__OP__(0XC9)
#define _ADC_ECX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD1)
#define _ADC_ECX_EDI __ASM__OP__(0X11) __ASM__OP__(0XF9)
#define _ADC_ECX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF1)
#define _ADC_ECX_EBP __ASM__OP__(0X11) __ASM__OP__(0XE9)
#define _ADC_ECX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE1)
#define _ADC_ECX_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC1)
#define _ADC_ECX_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC9)
#define _ADC_ECX_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD1)
#define _ADC_ECX_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD9)
#define _ADC_ECX_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE1)
#define _ADC_ECX_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE9)
#define _ADC_ECX_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF1)
#define _ADC_ECX_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF9)

#define _ADC_EDX_EAX __ASM__OP__(0X11) __ASM__OP__(0XC2)
#define _ADC_EDX_EBX __ASM__OP__(0X11) __ASM__OP__(0XDA)
#define _ADC_EDX_ECX __ASM__OP__(0X11) __ASM__OP__(0XCA)
#define _ADC_EDX_EDX __ASM__OP__(0X11) __ASM__OP__(0XD2)
#define _ADC_EDX_EDI __ASM__OP__(0X11) __ASM__OP__(0XFA)
#define _ADC_EDX_ESI __ASM__OP__(0X11) __ASM__OP__(0XF2)
#define _ADC_EDX_EBP __ASM__OP__(0X11) __ASM__OP__(0XEA)
#define _ADC_EDX_ESP __ASM__OP__(0X11) __ASM__OP__(0XE2)
#define _ADC_EDX_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC2)
#define _ADC_EDX_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCA)
#define _ADC_EDX_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD2)
#define _ADC_EDX_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDA)
#define _ADC_EDX_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE2)
#define _ADC_EDX_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XEA)
#define _ADC_EDX_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF2)
#define _ADC_EDX_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFA)

#define _ADC_EDI_EAX __ASM__OP__(0X11) __ASM__OP__(0XC7)
#define _ADC_EDI_EBX __ASM__OP__(0X11) __ASM__OP__(0XDF)
#define _ADC_EDI_ECX __ASM__OP__(0X11) __ASM__OP__(0XCF)
#define _ADC_EDI_EDX __ASM__OP__(0X11) __ASM__OP__(0XD7)
#define _ADC_EDI_EDI __ASM__OP__(0X11) __ASM__OP__(0XFF)
#define _ADC_EDI_ESI __ASM__OP__(0X11) __ASM__OP__(0XF7)
#define _ADC_EDI_EBP __ASM__OP__(0X11) __ASM__OP__(0XEF)
#define _ADC_EDI_ESP __ASM__OP__(0X11) __ASM__OP__(0XE7)
#define _ADC_EDI_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC7)
#define _ADC_EDI_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCF)
#define _ADC_EDI_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD7)
#define _ADC_EDI_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDF)
#define _ADC_EDI_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE7)
#define _ADC_EDI_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XEF)
#define _ADC_EDI_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF7)
#define _ADC_EDI_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFF)

#define _ADC_ESI_EAX __ASM__OP__(0X11) __ASM__OP__(0XC6)
#define _ADC_ESI_EBX __ASM__OP__(0X11) __ASM__OP__(0XDE)
#define _ADC_ESI_ECX __ASM__OP__(0X11) __ASM__OP__(0XCE)
#define _ADC_ESI_EDX __ASM__OP__(0X11) __ASM__OP__(0XD6)
#define _ADC_ESI_EDI __ASM__OP__(0X11) __ASM__OP__(0XFE)
#define _ADC_ESI_ESI __ASM__OP__(0X11) __ASM__OP__(0XF6)
#define _ADC_ESI_EBP __ASM__OP__(0X11) __ASM__OP__(0XEE)
#define _ADC_ESI_ESP __ASM__OP__(0X11) __ASM__OP__(0XE6)
#define _ADC_ESI_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC6)
#define _ADC_ESI_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCE)
#define _ADC_ESI_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD6)
#define _ADC_ESI_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDE)
#define _ADC_ESI_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE6)
#define _ADC_ESI_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XEE)
#define _ADC_ESI_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF6)
#define _ADC_ESI_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFE)

#define _ADC_EBP_EAX __ASM__OP__(0X11) __ASM__OP__(0XC5)
#define _ADC_EBP_EBX __ASM__OP__(0X11) __ASM__OP__(0XDD)
#define _ADC_EBP_ECX __ASM__OP__(0X11) __ASM__OP__(0XCD)
#define _ADC_EBP_EDX __ASM__OP__(0X11) __ASM__OP__(0XD5)
#define _ADC_EBP_EDI __ASM__OP__(0X11) __ASM__OP__(0XFD)
#define _ADC_EBP_ESI __ASM__OP__(0X11) __ASM__OP__(0XF5)
#define _ADC_EBP_EBP __ASM__OP__(0X11) __ASM__OP__(0XED)
#define _ADC_EBP_ESP __ASM__OP__(0X11) __ASM__OP__(0XE5)
#define _ADC_EBP_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC5)
#define _ADC_EBP_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCD)
#define _ADC_EBP_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD5)
#define _ADC_EBP_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDD)
#define _ADC_EBP_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE5)
#define _ADC_EBP_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XED)
#define _ADC_EBP_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF5)
#define _ADC_EBP_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFD)

#define _ADC_ESP_EAX __ASM__OP__(0X11) __ASM__OP__(0XC4)
#define _ADC_ESP_EBX __ASM__OP__(0X11) __ASM__OP__(0XDC)
#define _ADC_ESP_ECX __ASM__OP__(0X11) __ASM__OP__(0XCC)
#define _ADC_ESP_EDX __ASM__OP__(0X11) __ASM__OP__(0XD4)
#define _ADC_ESP_EDI __ASM__OP__(0X11) __ASM__OP__(0XFC)
#define _ADC_ESP_ESI __ASM__OP__(0X11) __ASM__OP__(0XF4)
#define _ADC_ESP_EBP __ASM__OP__(0X11) __ASM__OP__(0XEC)
#define _ADC_ESP_ESP __ASM__OP__(0X11) __ASM__OP__(0XE4)
#define _ADC_ESP_R8D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XC4)
#define _ADC_ESP_R9D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XCC)
#define _ADC_ESP_R10D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XD4)
#define _ADC_ESP_R11D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XDC)
#define _ADC_ESP_R12D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XE4)
#define _ADC_ESP_R13D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XEC)
#define _ADC_ESP_R14D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XF4)
#define _ADC_ESP_R15D __ASM__OP__(0X44) __ASM__OP__(0X11) __ASM__OP__(0XFC)

#define _ADC_R8D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC0)
#define _ADC_R8D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD8)
#define _ADC_R8D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC8)
#define _ADC_R8D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD0)
#define _ADC_R8D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF8)
#define _ADC_R8D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF0)
#define _ADC_R8D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE8)
#define _ADC_R8D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE0)
#define _ADC_R8D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC0)
#define _ADC_R8D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC8)
#define _ADC_R8D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD0)
#define _ADC_R8D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD8)
#define _ADC_R8D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE0)
#define _ADC_R8D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE8)
#define _ADC_R8D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF0)
#define _ADC_R8D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF8)

#define _ADC_R9D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC1)
#define _ADC_R9D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD9)
#define _ADC_R9D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC9)
#define _ADC_R9D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD1)
#define _ADC_R9D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF9)
#define _ADC_R9D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF1)
#define _ADC_R9D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE9)
#define _ADC_R9D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE1)
#define _ADC_R9D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC1)
#define _ADC_R9D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC9)
#define _ADC_R9D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD1)
#define _ADC_R9D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD9)
#define _ADC_R9D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE1)
#define _ADC_R9D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE9)
#define _ADC_R9D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF1)
#define _ADC_R9D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF9)

#define _ADC_R10D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC2)
#define _ADC_R10D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDA)
#define _ADC_R10D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCA)
#define _ADC_R10D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD2)
#define _ADC_R10D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFA)
#define _ADC_R10D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF2)
#define _ADC_R10D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XEA)
#define _ADC_R10D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE2)
#define _ADC_R10D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC2)
#define _ADC_R10D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCA)
#define _ADC_R10D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD2)
#define _ADC_R10D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDA)
#define _ADC_R10D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE2)
#define _ADC_R10D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XEA)
#define _ADC_R10D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF2)
#define _ADC_R10D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFA)

#define _ADC_R11D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC3)
#define _ADC_R11D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDB)
#define _ADC_R11D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCB)
#define _ADC_R11D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD3)
#define _ADC_R11D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFB)
#define _ADC_R11D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF3)
#define _ADC_R11D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XEB)
#define _ADC_R11D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE3)
#define _ADC_R11D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC3)
#define _ADC_R11D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCB)
#define _ADC_R11D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD3)
#define _ADC_R11D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDB)
#define _ADC_R11D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE3)
#define _ADC_R11D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XEB)
#define _ADC_R11D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF3)
#define _ADC_R11D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFB)

#define _ADC_R12D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC4)
#define _ADC_R12D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDC)
#define _ADC_R12D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCC)
#define _ADC_R12D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD4)
#define _ADC_R12D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFC)
#define _ADC_R12D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF4)
#define _ADC_R12D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XEC)
#define _ADC_R12D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE4)
#define _ADC_R12D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC4)
#define _ADC_R12D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCC)
#define _ADC_R12D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD4)
#define _ADC_R12D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDC)
#define _ADC_R12D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE4)
#define _ADC_R12D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XEC)
#define _ADC_R12D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF4)
#define _ADC_R12D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFC)

#define _ADC_R13D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC5)
#define _ADC_R13D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDD)
#define _ADC_R13D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCD)
#define _ADC_R13D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD5)
#define _ADC_R13D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFD)
#define _ADC_R13D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF5)
#define _ADC_R13D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XED)
#define _ADC_R13D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE5)
#define _ADC_R13D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC5)
#define _ADC_R13D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCD)
#define _ADC_R13D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD5)
#define _ADC_R13D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDD)
#define _ADC_R13D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE5)
#define _ADC_R13D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XED)
#define _ADC_R13D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF5)
#define _ADC_R13D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFD)

#define _ADC_R14D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC6)
#define _ADC_R14D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDE)
#define _ADC_R14D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCE)
#define _ADC_R14D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD6)
#define _ADC_R14D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFE)
#define _ADC_R14D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF6)
#define _ADC_R14D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XEE)
#define _ADC_R14D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE6)
#define _ADC_R14D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC6)
#define _ADC_R14D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCE)
#define _ADC_R14D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD6)
#define _ADC_R14D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDE)
#define _ADC_R14D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE6)
#define _ADC_R14D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XEE)
#define _ADC_R14D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF6)
#define _ADC_R14D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFE)

#define _ADC_R15D_EAX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XC7)
#define _ADC_R15D_EBX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XDF)
#define _ADC_R15D_ECX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XCF)
#define _ADC_R15D_EDX __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XD7)
#define _ADC_R15D_EDI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XFF)
#define _ADC_R15D_ESI __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XF7)
#define _ADC_R15D_EBP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XEF)
#define _ADC_R15D_ESP __ASM__OP__(0X41) __ASM__OP__(0X11) __ASM__OP__(0XE7)
#define _ADC_R15D_R8D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XC7)
#define _ADC_R15D_R9D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XCF)
#define _ADC_R15D_R10D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XD7)
#define _ADC_R15D_R11D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XDF)
#define _ADC_R15D_R12D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XE7)
#define _ADC_R15D_R13D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XEF)
#define _ADC_R15D_R14D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XF7)
#define _ADC_R15D_R15D __ASM__OP__(0X45) __ASM__OP__(0X11) __ASM__OP__(0XFF)

#define _ADC_EAX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD0)\
	__ASM__IMM32__(VALUE)
#define _ADC_EBX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD3)\
	__ASM__IMM32__(VALUE)
#define _ADC_ECX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD1)\
	__ASM__IMM32__(VALUE)
#define _ADC_EDX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD2)\
	__ASM__IMM32__(VALUE)
#define _ADC_EDI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD7)\
	__ASM__IMM32__(VALUE)
#define _ADC_ESI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD6)\
	__ASM__IMM32__(VALUE)
#define _ADC_EBP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD5)\
	__ASM__IMM32__(VALUE)
#define _ADC_ESP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD4)\
	__ASM__IMM32__(VALUE)
#define _ADC_R8D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD0)\
	__ASM__IMM32__(VALUE)
#define _ADC_R9D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD1)\
	__ASM__IMM32__(VALUE)
#define _ADC_R10D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD2)\
	__ASM__IMM32__(VALUE)
#define _ADC_R11D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD3)\
	__ASM__IMM32__(VALUE)
#define _ADC_R12D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD4)\
	__ASM__IMM32__(VALUE)
#define _ADC_R13D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD5)\
	__ASM__IMM32__(VALUE)
#define _ADC_R14D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD6)\
	__ASM__IMM32__(VALUE)
#define _ADC_R15D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XD7)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
