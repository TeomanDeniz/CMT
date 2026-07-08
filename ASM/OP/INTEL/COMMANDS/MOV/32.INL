/* ************************ [v] 32-BIT REGISTERS [v] ************************ */
#define _MOV_EAX_EAX __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_EAX_EBX __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_EAX_ECX __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_EAX_EDX __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_EAX_EDI __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_EAX_ESI __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_EAX_EBP __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_EAX_ESP __ASM__OP__(0X89) __ASM__OP__(0XE0)

#define _MOV_EBX_EAX __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_EBX_EBX __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_EBX_ECX __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_EBX_EDX __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_EBX_EDI __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_EBX_ESI __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_EBX_EBP __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_EBX_ESP __ASM__OP__(0X89) __ASM__OP__(0XE3)

#define _MOV_ECX_EAX __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_ECX_EBX __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_ECX_ECX __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_ECX_EDX __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_ECX_EDI __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_ECX_ESI __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_ECX_EBP __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_ECX_ESP __ASM__OP__(0X89) __ASM__OP__(0XE1)

#define _MOV_EDX_EAX __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_EDX_EBX __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_EDX_ECX __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_EDX_EDX __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_EDX_EDI __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_EDX_ESI __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_EDX_EBP __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_EDX_ESP __ASM__OP__(0X89) __ASM__OP__(0XE2)

#define _MOV_EDI_EAX __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_EDI_EBX __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_EDI_ECX __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_EDI_EDX __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_EDI_EDI __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_EDI_ESI __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_EDI_EBP __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_EDI_ESP __ASM__OP__(0X89) __ASM__OP__(0XE7)

#define _MOV_ESI_EAX __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_ESI_EBX __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_ESI_ECX __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_ESI_EDX __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_ESI_EDI __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_ESI_ESI __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_ESI_EBP __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_ESI_ESP __ASM__OP__(0X89) __ASM__OP__(0XE6)

#define _MOV_EBP_EAX __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_EBP_EBX __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_EBP_ECX __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_EBP_EDX __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_EBP_EDI __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_EBP_ESI __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_EBP_EBP __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_EBP_ESP __ASM__OP__(0X89) __ASM__OP__(0XE5)

#define _MOV_ESP_EAX __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_ESP_EBX __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_ESP_ECX __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_ESP_EDX __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_ESP_EDI __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_ESP_ESI __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_ESP_EBP __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_ESP_ESP __ASM__OP__(0X89) __ASM__OP__(0XE4)

#define _MOV_EAX_(VALUE) __ASM__OP__(0XB8) __ASM__IMM32__(VALUE)
#define _MOV_EBX_(VALUE) __ASM__OP__(0XBB) __ASM__IMM32__(VALUE)
#define _MOV_ECX_(VALUE) __ASM__OP__(0XB9) __ASM__IMM32__(VALUE)
#define _MOV_EDX_(VALUE) __ASM__OP__(0XBA) __ASM__IMM32__(VALUE)
#define _MOV_EDI_(VALUE) __ASM__OP__(0XBF) __ASM__IMM32__(VALUE)
#define _MOV_ESI_(VALUE) __ASM__OP__(0XBE) __ASM__IMM32__(VALUE)
#define _MOV_EBP_(VALUE) __ASM__OP__(0XBD) __ASM__IMM32__(VALUE)
#define _MOV_ESP_(VALUE) __ASM__OP__(0XBC) __ASM__IMM32__(VALUE)

#ifdef __SYSTEM_64_BIT__
#define _MOV_EAX_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_EAX_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_EAX_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_EAX_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_EAX_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_EAX_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_EAX_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_EAX_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF8)

#define _MOV_EBX_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_EBX_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_EBX_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_EBX_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_EBX_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_EBX_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_EBX_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_EBX_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFB)

#define _MOV_ECX_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_ECX_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_ECX_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_ECX_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_ECX_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_ECX_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_ECX_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_ECX_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF9)

#define _MOV_EDX_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_EDX_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_EDX_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_EDX_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_EDX_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_EDX_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_EDX_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_EDX_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFA)

#define _MOV_ESI_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_ESI_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_ESI_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_ESI_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_ESI_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_ESI_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_ESI_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_ESI_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFE)

#define _MOV_EDI_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_EDI_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_EDI_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_EDI_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_EDI_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_EDI_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_EDI_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_EDI_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFF)

#define _MOV_ESP_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_ESP_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_ESP_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_ESP_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_ESP_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_ESP_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_ESP_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_ESP_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFC)

#define _MOV_EBP_R8D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_EBP_R9D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_EBP_R10D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_EBP_R11D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_EBP_R12D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_EBP_R13D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_EBP_R14D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_EBP_R15D __ASM__OP__(0X44) __ASM__OP__(0X89) __ASM__OP__(0XFD)

#define _MOV_R8D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_R8D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_R8D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_R8D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_R8D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_R8D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_R8D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_R8D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_R8D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_R8D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_R8D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_R8D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_R8D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_R8D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_R8D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_R8D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF8)

#define _MOV_R9D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_R9D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_R9D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_R9D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_R9D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_R9D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_R9D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_R9D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_R9D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_R9D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_R9D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_R9D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_R9D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_R9D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_R9D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_R9D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF9)

#define _MOV_R10D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_R10D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_R10D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_R10D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_R10D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_R10D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_R10D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_R10D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_R10D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_R10D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_R10D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_R10D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_R10D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_R10D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_R10D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_R10D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFA)

#define _MOV_R11D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_R11D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_R11D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_R11D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_R11D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_R11D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_R11D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_R11D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_R11D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_R11D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_R11D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_R11D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_R11D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_R11D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_R11D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_R11D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFB)

#define _MOV_R12D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_R12D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_R12D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_R12D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_R12D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_R12D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_R12D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_R12D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_R12D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_R12D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_R12D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_R12D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_R12D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_R12D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_R12D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_R12D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFC)

#define _MOV_R13D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_R13D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_R13D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_R13D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_R13D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_R13D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_R13D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_R13D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_R13D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_R13D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_R13D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_R13D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_R13D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_R13D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_R13D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_R13D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFD)

#define _MOV_R14D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_R14D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_R14D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_R14D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_R14D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_R14D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_R14D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_R14D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_R14D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_R14D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_R14D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_R14D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_R14D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_R14D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_R14D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_R14D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFE)

#define _MOV_R15D_EAX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_R15D_EBX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_R15D_ECX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_R15D_EDX __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_R15D_ESI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_R15D_EDI __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_R15D_ESP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_R15D_EBP __ASM__OP__(0X41) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_R15D_R8D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_R15D_R9D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_R15D_R10D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_R15D_R11D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_R15D_R12D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_R15D_R13D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_R15D_R14D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_R15D_R15D __ASM__OP__(0X45) __ASM__OP__(0X89) __ASM__OP__(0XFF)

#define _MOV_R8D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB8)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB9)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBA)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBB)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBC)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBE)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBF)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT REGISTERS [^] ************************ */

/* ************************* [v] 32-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_32_BIT__
#define _MOV_EAX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X0A)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X81)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_(VALUE) \
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_ESI \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EBX_TO_PTR_ESI \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_ECX_TO_PTR_ESI \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_EDX_TO_PTR_ESI \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)

#define _MOV_EAX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_EBX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_ECX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_EDX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_ESI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_EDI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_EBP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_ESP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_EBX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_ECX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_EDX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_ESI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_EDI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_EBP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_ESP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ECX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE) 

#define _MOV_AX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ECX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE) 

#define _MOV_AX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_EAX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X06)
#define _MOV_EBX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)
#define _MOV_ECX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)
#define _MOV_EDX_TO_PTR_ESI \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)

#define _MOV_EAX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ECX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE) 

#define _MOV_AX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ECX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EDI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_EBP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE) 
#define _MOV_ESP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE) 

#define _MOV_AX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 32-BIT MEMORY [^] ************************** */

/* ************************ [v] 32-BIT SEGMENTS [v] ************************* */
#ifdef __SYSTEM_32_BIT__
#define _MOV_EAX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64) __ASM__OP__(0X8B) __ASM__OP__(0X00)

#define _MOV_EAX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_EAX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_FS_EAX \
	__ASM__OP__(0X64) __ASM__OP__(0X67) __ASM__OP__(0X8B) __ASM__OP__(0X00)

#define _MOV_EAX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15D_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 32-BIT SEGMENTS [^] ************************* */

#include "16.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
