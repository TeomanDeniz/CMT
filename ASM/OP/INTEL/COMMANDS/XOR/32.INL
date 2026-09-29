/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_32_BIT__
#define _XOR_EAX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC0)
#define _XOR_EAX_EBX __ASM__OP__(0X31) __ASM__OP__(0XD8)
#define _XOR_EAX_ECX __ASM__OP__(0X31) __ASM__OP__(0XC8)
#define _XOR_EAX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD0)
#define _XOR_EAX_EDI __ASM__OP__(0X31) __ASM__OP__(0XF8)
#define _XOR_EAX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF0)
#define _XOR_EAX_EBP __ASM__OP__(0X31) __ASM__OP__(0XE8)
#define _XOR_EAX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE0)

#define _XOR_EBX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC3)
#define _XOR_EBX_EBX __ASM__OP__(0X31) __ASM__OP__(0XDB)
#define _XOR_EBX_ECX __ASM__OP__(0X31) __ASM__OP__(0XCB)
#define _XOR_EBX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD3)
#define _XOR_EBX_EDI __ASM__OP__(0X31) __ASM__OP__(0XFB)
#define _XOR_EBX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF3)
#define _XOR_EBX_EBP __ASM__OP__(0X31) __ASM__OP__(0XEB)
#define _XOR_EBX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE3)

#define _XOR_ECX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC1)
#define _XOR_ECX_EBX __ASM__OP__(0X31) __ASM__OP__(0XD9)
#define _XOR_ECX_ECX __ASM__OP__(0X31) __ASM__OP__(0XC9)
#define _XOR_ECX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD1)
#define _XOR_ECX_EDI __ASM__OP__(0X31) __ASM__OP__(0XF9)
#define _XOR_ECX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF1)
#define _XOR_ECX_EBP __ASM__OP__(0X31) __ASM__OP__(0XE9)
#define _XOR_ECX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE1)

#define _XOR_EDX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC2)
#define _XOR_EDX_EBX __ASM__OP__(0X31) __ASM__OP__(0XDA)
#define _XOR_EDX_ECX __ASM__OP__(0X31) __ASM__OP__(0XCA)
#define _XOR_EDX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD2)
#define _XOR_EDX_EDI __ASM__OP__(0X31) __ASM__OP__(0XFA)
#define _XOR_EDX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF2)
#define _XOR_EDX_EBP __ASM__OP__(0X31) __ASM__OP__(0XEA)
#define _XOR_EDX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE2)

#define _XOR_EDI_EAX __ASM__OP__(0X31) __ASM__OP__(0XC7)
#define _XOR_EDI_EBX __ASM__OP__(0X31) __ASM__OP__(0XDF)
#define _XOR_EDI_ECX __ASM__OP__(0X31) __ASM__OP__(0XCF)
#define _XOR_EDI_EDX __ASM__OP__(0X31) __ASM__OP__(0XD7)
#define _XOR_EDI_EDI __ASM__OP__(0X31) __ASM__OP__(0XFF)
#define _XOR_EDI_ESI __ASM__OP__(0X31) __ASM__OP__(0XF7)
#define _XOR_EDI_EBP __ASM__OP__(0X31) __ASM__OP__(0XEF)
#define _XOR_EDI_ESP __ASM__OP__(0X31) __ASM__OP__(0XE7)

#define _XOR_ESI_EAX __ASM__OP__(0X31) __ASM__OP__(0XC6)
#define _XOR_ESI_EBX __ASM__OP__(0X31) __ASM__OP__(0XDE)
#define _XOR_ESI_ECX __ASM__OP__(0X31) __ASM__OP__(0XCE)
#define _XOR_ESI_EDX __ASM__OP__(0X31) __ASM__OP__(0XD6)
#define _XOR_ESI_EDI __ASM__OP__(0X31) __ASM__OP__(0XFE)
#define _XOR_ESI_ESI __ASM__OP__(0X31) __ASM__OP__(0XF6)
#define _XOR_ESI_EBP __ASM__OP__(0X31) __ASM__OP__(0XEE)
#define _XOR_ESI_ESP __ASM__OP__(0X31) __ASM__OP__(0XE6)

#define _XOR_EBP_EAX __ASM__OP__(0X31) __ASM__OP__(0XC5)
#define _XOR_EBP_EBX __ASM__OP__(0X31) __ASM__OP__(0XDD)
#define _XOR_EBP_ECX __ASM__OP__(0X31) __ASM__OP__(0XCD)
#define _XOR_EBP_EDX __ASM__OP__(0X31) __ASM__OP__(0XD5)
#define _XOR_EBP_EDI __ASM__OP__(0X31) __ASM__OP__(0XFD)
#define _XOR_EBP_ESI __ASM__OP__(0X31) __ASM__OP__(0XF5)
#define _XOR_EBP_EBP __ASM__OP__(0X31) __ASM__OP__(0XED)
#define _XOR_EBP_ESP __ASM__OP__(0X31) __ASM__OP__(0XE5)

#define _XOR_ESP_EAX __ASM__OP__(0X31) __ASM__OP__(0XC4)
#define _XOR_ESP_EBX __ASM__OP__(0X31) __ASM__OP__(0XDC)
#define _XOR_ESP_ECX __ASM__OP__(0X31) __ASM__OP__(0XCC)
#define _XOR_ESP_EDX __ASM__OP__(0X31) __ASM__OP__(0XD4)
#define _XOR_ESP_EDI __ASM__OP__(0X31) __ASM__OP__(0XFC)
#define _XOR_ESP_ESI __ASM__OP__(0X31) __ASM__OP__(0XF4)
#define _XOR_ESP_EBP __ASM__OP__(0X31) __ASM__OP__(0XEC)
#define _XOR_ESP_ESP __ASM__OP__(0X31) __ASM__OP__(0XE4)

#define _XOR_EAX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF0)\
	__ASM__IMM32__(VALUE)
#define _XOR_EBX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF3)\
	__ASM__IMM32__(VALUE)
#define _XOR_ECX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF1)\
	__ASM__IMM32__(VALUE)
#define _XOR_EDX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF2)\
	__ASM__IMM32__(VALUE)
#define _XOR_EDI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF7)\
	__ASM__IMM32__(VALUE)
#define _XOR_ESI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF6)\
	__ASM__IMM32__(VALUE)
#define _XOR_EBP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF5)\
	__ASM__IMM32__(VALUE)
#define _XOR_ESP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF4)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _XOR_EAX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC0)
#define _XOR_EAX_EBX __ASM__OP__(0X31) __ASM__OP__(0XD8)
#define _XOR_EAX_ECX __ASM__OP__(0X31) __ASM__OP__(0XC8)
#define _XOR_EAX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD0)
#define _XOR_EAX_EDI __ASM__OP__(0X31) __ASM__OP__(0XF8)
#define _XOR_EAX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF0)
#define _XOR_EAX_EBP __ASM__OP__(0X31) __ASM__OP__(0XE8)
#define _XOR_EAX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE0)
#define _XOR_EAX_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC0)
#define _XOR_EAX_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC8)
#define _XOR_EAX_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD0)
#define _XOR_EAX_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD8)
#define _XOR_EAX_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE0)
#define _XOR_EAX_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE8)
#define _XOR_EAX_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF0)
#define _XOR_EAX_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF8)

#define _XOR_EBX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC3)
#define _XOR_EBX_EBX __ASM__OP__(0X31) __ASM__OP__(0XDB)
#define _XOR_EBX_ECX __ASM__OP__(0X31) __ASM__OP__(0XCB)
#define _XOR_EBX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD3)
#define _XOR_EBX_EDI __ASM__OP__(0X31) __ASM__OP__(0XFB)
#define _XOR_EBX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF3)
#define _XOR_EBX_EBP __ASM__OP__(0X31) __ASM__OP__(0XEB)
#define _XOR_EBX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE3)
#define _XOR_EBX_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC3)
#define _XOR_EBX_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCB)
#define _XOR_EBX_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD3)
#define _XOR_EBX_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDB)
#define _XOR_EBX_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE3)
#define _XOR_EBX_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XEB)
#define _XOR_EBX_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF3)
#define _XOR_EBX_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFB)

#define _XOR_ECX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC1)
#define _XOR_ECX_EBX __ASM__OP__(0X31) __ASM__OP__(0XD9)
#define _XOR_ECX_ECX __ASM__OP__(0X31) __ASM__OP__(0XC9)
#define _XOR_ECX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD1)
#define _XOR_ECX_EDI __ASM__OP__(0X31) __ASM__OP__(0XF9)
#define _XOR_ECX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF1)
#define _XOR_ECX_EBP __ASM__OP__(0X31) __ASM__OP__(0XE9)
#define _XOR_ECX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE1)
#define _XOR_ECX_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC1)
#define _XOR_ECX_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC9)
#define _XOR_ECX_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD1)
#define _XOR_ECX_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD9)
#define _XOR_ECX_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE1)
#define _XOR_ECX_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE9)
#define _XOR_ECX_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF1)
#define _XOR_ECX_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF9)

#define _XOR_EDX_EAX __ASM__OP__(0X31) __ASM__OP__(0XC2)
#define _XOR_EDX_EBX __ASM__OP__(0X31) __ASM__OP__(0XDA)
#define _XOR_EDX_ECX __ASM__OP__(0X31) __ASM__OP__(0XCA)
#define _XOR_EDX_EDX __ASM__OP__(0X31) __ASM__OP__(0XD2)
#define _XOR_EDX_EDI __ASM__OP__(0X31) __ASM__OP__(0XFA)
#define _XOR_EDX_ESI __ASM__OP__(0X31) __ASM__OP__(0XF2)
#define _XOR_EDX_EBP __ASM__OP__(0X31) __ASM__OP__(0XEA)
#define _XOR_EDX_ESP __ASM__OP__(0X31) __ASM__OP__(0XE2)
#define _XOR_EDX_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC2)
#define _XOR_EDX_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCA)
#define _XOR_EDX_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD2)
#define _XOR_EDX_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDA)
#define _XOR_EDX_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE2)
#define _XOR_EDX_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XEA)
#define _XOR_EDX_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF2)
#define _XOR_EDX_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFA)

#define _XOR_EDI_EAX __ASM__OP__(0X31) __ASM__OP__(0XC7)
#define _XOR_EDI_EBX __ASM__OP__(0X31) __ASM__OP__(0XDF)
#define _XOR_EDI_ECX __ASM__OP__(0X31) __ASM__OP__(0XCF)
#define _XOR_EDI_EDX __ASM__OP__(0X31) __ASM__OP__(0XD7)
#define _XOR_EDI_EDI __ASM__OP__(0X31) __ASM__OP__(0XFF)
#define _XOR_EDI_ESI __ASM__OP__(0X31) __ASM__OP__(0XF7)
#define _XOR_EDI_EBP __ASM__OP__(0X31) __ASM__OP__(0XEF)
#define _XOR_EDI_ESP __ASM__OP__(0X31) __ASM__OP__(0XE7)
#define _XOR_EDI_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC7)
#define _XOR_EDI_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCF)
#define _XOR_EDI_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD7)
#define _XOR_EDI_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDF)
#define _XOR_EDI_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE7)
#define _XOR_EDI_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XEF)
#define _XOR_EDI_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF7)
#define _XOR_EDI_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFF)

#define _XOR_ESI_EAX __ASM__OP__(0X31) __ASM__OP__(0XC6)
#define _XOR_ESI_EBX __ASM__OP__(0X31) __ASM__OP__(0XDE)
#define _XOR_ESI_ECX __ASM__OP__(0X31) __ASM__OP__(0XCE)
#define _XOR_ESI_EDX __ASM__OP__(0X31) __ASM__OP__(0XD6)
#define _XOR_ESI_EDI __ASM__OP__(0X31) __ASM__OP__(0XFE)
#define _XOR_ESI_ESI __ASM__OP__(0X31) __ASM__OP__(0XF6)
#define _XOR_ESI_EBP __ASM__OP__(0X31) __ASM__OP__(0XEE)
#define _XOR_ESI_ESP __ASM__OP__(0X31) __ASM__OP__(0XE6)
#define _XOR_ESI_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC6)
#define _XOR_ESI_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCE)
#define _XOR_ESI_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD6)
#define _XOR_ESI_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDE)
#define _XOR_ESI_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE6)
#define _XOR_ESI_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XEE)
#define _XOR_ESI_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF6)
#define _XOR_ESI_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFE)

#define _XOR_EBP_EAX __ASM__OP__(0X31) __ASM__OP__(0XC5)
#define _XOR_EBP_EBX __ASM__OP__(0X31) __ASM__OP__(0XDD)
#define _XOR_EBP_ECX __ASM__OP__(0X31) __ASM__OP__(0XCD)
#define _XOR_EBP_EDX __ASM__OP__(0X31) __ASM__OP__(0XD5)
#define _XOR_EBP_EDI __ASM__OP__(0X31) __ASM__OP__(0XFD)
#define _XOR_EBP_ESI __ASM__OP__(0X31) __ASM__OP__(0XF5)
#define _XOR_EBP_EBP __ASM__OP__(0X31) __ASM__OP__(0XED)
#define _XOR_EBP_ESP __ASM__OP__(0X31) __ASM__OP__(0XE5)
#define _XOR_EBP_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC5)
#define _XOR_EBP_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCD)
#define _XOR_EBP_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD5)
#define _XOR_EBP_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDD)
#define _XOR_EBP_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE5)
#define _XOR_EBP_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XED)
#define _XOR_EBP_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF5)
#define _XOR_EBP_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFD)

#define _XOR_ESP_EAX __ASM__OP__(0X31) __ASM__OP__(0XC4)
#define _XOR_ESP_EBX __ASM__OP__(0X31) __ASM__OP__(0XDC)
#define _XOR_ESP_ECX __ASM__OP__(0X31) __ASM__OP__(0XCC)
#define _XOR_ESP_EDX __ASM__OP__(0X31) __ASM__OP__(0XD4)
#define _XOR_ESP_EDI __ASM__OP__(0X31) __ASM__OP__(0XFC)
#define _XOR_ESP_ESI __ASM__OP__(0X31) __ASM__OP__(0XF4)
#define _XOR_ESP_EBP __ASM__OP__(0X31) __ASM__OP__(0XEC)
#define _XOR_ESP_ESP __ASM__OP__(0X31) __ASM__OP__(0XE4)
#define _XOR_ESP_R8D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XC4)
#define _XOR_ESP_R9D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XCC)
#define _XOR_ESP_R10D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XD4)
#define _XOR_ESP_R11D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XDC)
#define _XOR_ESP_R12D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XE4)
#define _XOR_ESP_R13D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XEC)
#define _XOR_ESP_R14D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XF4)
#define _XOR_ESP_R15D __ASM__OP__(0X44) __ASM__OP__(0X31) __ASM__OP__(0XFC)

#define _XOR_R8D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC0)
#define _XOR_R8D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD8)
#define _XOR_R8D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC8)
#define _XOR_R8D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD0)
#define _XOR_R8D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF8)
#define _XOR_R8D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF0)
#define _XOR_R8D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE8)
#define _XOR_R8D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE0)
#define _XOR_R8D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC0)
#define _XOR_R8D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC8)
#define _XOR_R8D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD0)
#define _XOR_R8D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD8)
#define _XOR_R8D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE0)
#define _XOR_R8D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE8)
#define _XOR_R8D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF0)
#define _XOR_R8D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF8)

#define _XOR_R9D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC1)
#define _XOR_R9D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD9)
#define _XOR_R9D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC9)
#define _XOR_R9D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD1)
#define _XOR_R9D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF9)
#define _XOR_R9D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF1)
#define _XOR_R9D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE9)
#define _XOR_R9D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE1)
#define _XOR_R9D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC1)
#define _XOR_R9D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC9)
#define _XOR_R9D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD1)
#define _XOR_R9D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD9)
#define _XOR_R9D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE1)
#define _XOR_R9D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE9)
#define _XOR_R9D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF1)
#define _XOR_R9D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF9)

#define _XOR_R10D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC2)
#define _XOR_R10D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDA)
#define _XOR_R10D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCA)
#define _XOR_R10D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD2)
#define _XOR_R10D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFA)
#define _XOR_R10D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF2)
#define _XOR_R10D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XEA)
#define _XOR_R10D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE2)
#define _XOR_R10D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC2)
#define _XOR_R10D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCA)
#define _XOR_R10D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD2)
#define _XOR_R10D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDA)
#define _XOR_R10D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE2)
#define _XOR_R10D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XEA)
#define _XOR_R10D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF2)
#define _XOR_R10D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFA)

#define _XOR_R11D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC3)
#define _XOR_R11D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDB)
#define _XOR_R11D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCB)
#define _XOR_R11D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD3)
#define _XOR_R11D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFB)
#define _XOR_R11D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF3)
#define _XOR_R11D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XEB)
#define _XOR_R11D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE3)
#define _XOR_R11D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC3)
#define _XOR_R11D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCB)
#define _XOR_R11D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD3)
#define _XOR_R11D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDB)
#define _XOR_R11D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE3)
#define _XOR_R11D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XEB)
#define _XOR_R11D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF3)
#define _XOR_R11D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFB)

#define _XOR_R12D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC4)
#define _XOR_R12D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDC)
#define _XOR_R12D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCC)
#define _XOR_R12D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD4)
#define _XOR_R12D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFC)
#define _XOR_R12D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF4)
#define _XOR_R12D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XEC)
#define _XOR_R12D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE4)
#define _XOR_R12D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC4)
#define _XOR_R12D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCC)
#define _XOR_R12D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD4)
#define _XOR_R12D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDC)
#define _XOR_R12D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE4)
#define _XOR_R12D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XEC)
#define _XOR_R12D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF4)
#define _XOR_R12D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFC)

#define _XOR_R13D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC5)
#define _XOR_R13D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDD)
#define _XOR_R13D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCD)
#define _XOR_R13D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD5)
#define _XOR_R13D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFD)
#define _XOR_R13D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF5)
#define _XOR_R13D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XED)
#define _XOR_R13D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE5)
#define _XOR_R13D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC5)
#define _XOR_R13D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCD)
#define _XOR_R13D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD5)
#define _XOR_R13D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDD)
#define _XOR_R13D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE5)
#define _XOR_R13D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XED)
#define _XOR_R13D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF5)
#define _XOR_R13D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFD)

#define _XOR_R14D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC6)
#define _XOR_R14D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDE)
#define _XOR_R14D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCE)
#define _XOR_R14D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD6)
#define _XOR_R14D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFE)
#define _XOR_R14D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF6)
#define _XOR_R14D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XEE)
#define _XOR_R14D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE6)
#define _XOR_R14D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC6)
#define _XOR_R14D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCE)
#define _XOR_R14D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD6)
#define _XOR_R14D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDE)
#define _XOR_R14D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE6)
#define _XOR_R14D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XEE)
#define _XOR_R14D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF6)
#define _XOR_R14D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFE)

#define _XOR_R15D_EAX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XC7)
#define _XOR_R15D_EBX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XDF)
#define _XOR_R15D_ECX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XCF)
#define _XOR_R15D_EDX __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XD7)
#define _XOR_R15D_EDI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XFF)
#define _XOR_R15D_ESI __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XF7)
#define _XOR_R15D_EBP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XEF)
#define _XOR_R15D_ESP __ASM__OP__(0X41) __ASM__OP__(0X31) __ASM__OP__(0XE7)
#define _XOR_R15D_R8D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XC7)
#define _XOR_R15D_R9D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XCF)
#define _XOR_R15D_R10D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XD7)
#define _XOR_R15D_R11D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XDF)
#define _XOR_R15D_R12D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XE7)
#define _XOR_R15D_R13D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XEF)
#define _XOR_R15D_R14D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XF7)
#define _XOR_R15D_R15D __ASM__OP__(0X45) __ASM__OP__(0X31) __ASM__OP__(0XFF)

#define _XOR_EAX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF0)\
	__ASM__IMM32__(VALUE)
#define _XOR_EBX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF3)\
	__ASM__IMM32__(VALUE)
#define _XOR_ECX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF1)\
	__ASM__IMM32__(VALUE)
#define _XOR_EDX_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF2)\
	__ASM__IMM32__(VALUE)
#define _XOR_EDI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF7)\
	__ASM__IMM32__(VALUE)
#define _XOR_ESI_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF6)\
	__ASM__IMM32__(VALUE)
#define _XOR_EBP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF5)\
	__ASM__IMM32__(VALUE)
#define _XOR_ESP_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF4)\
	__ASM__IMM32__(VALUE)
#define _XOR_R8D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF0)\
	__ASM__IMM32__(VALUE)
#define _XOR_R9D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF1)\
	__ASM__IMM32__(VALUE)
#define _XOR_R10D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF2)\
	__ASM__IMM32__(VALUE)
#define _XOR_R11D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF3)\
	__ASM__IMM32__(VALUE)
#define _XOR_R12D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF4)\
	__ASM__IMM32__(VALUE)
#define _XOR_R13D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF5)\
	__ASM__IMM32__(VALUE)
#define _XOR_R14D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF6)\
	__ASM__IMM32__(VALUE)
#define _XOR_R15D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0X81)\
	__ASM__OP__(0XF7)\
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
