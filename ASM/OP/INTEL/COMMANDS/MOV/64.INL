/* ************************ [v] 64-BIT REGISTERS [v] ************************ */
#define _MOV_RAX_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_RAX_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_RAX_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_RAX_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_RAX_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_RAX_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_RAX_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_RAX_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_RAX_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_RAX_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_RAX_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_RAX_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_RAX_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_RAX_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_RAX_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_RAX_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF8)

#define _MOV_RBX_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_RBX_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_RBX_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_RBX_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_RBX_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_RBX_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_RBX_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_RBX_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_RBX_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_RBX_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_RBX_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_RBX_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_RBX_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_RBX_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_RBX_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_RBX_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFB)

#define _MOV_RCX_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_RCX_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_RCX_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_RCX_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_RCX_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_RCX_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_RCX_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_RCX_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_RCX_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_RCX_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_RCX_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_RCX_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_RCX_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_RCX_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_RCX_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_RCX_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF9)

#define _MOV_RDX_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_RDX_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_RDX_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_RDX_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_RDX_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_RDX_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_RDX_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_RDX_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_RDX_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_RDX_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_RDX_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_RDX_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_RDX_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_RDX_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_RDX_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_RDX_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFA)

#define _MOV_RDI_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_RDI_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_RDI_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_RDI_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_RDI_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_RDI_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_RDI_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_RDI_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_RDI_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_RDI_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_RDI_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_RDI_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_RDI_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_RDI_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_RDI_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_RDI_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFF)

#define _MOV_RSI_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_RSI_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_RSI_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_RSI_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_RSI_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_RSI_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_RSI_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_RSI_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_RSI_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_RSI_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_RSI_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_RSI_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_RSI_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_RSI_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_RSI_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_RSI_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFE)

#define _MOV_RBP_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_RBP_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_RBP_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_RBP_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_RBP_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_RBP_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_RBP_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_RBP_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_RBP_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_RBP_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_RBP_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_RBP_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_RBP_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_RBP_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_RBP_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_RBP_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFD)

#define _MOV_RSP_RAX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_RSP_RBX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_RSP_RCX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_RSP_RDX __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_RSP_RDI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_RSP_RSI __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_RSP_RBP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_RSP_RSP __ASM__OP__(0X48) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_RSP_R8 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_RSP_R9 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_RSP_R10 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_RSP_R11 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_RSP_R12 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_RSP_R13 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_RSP_R14 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_RSP_R15 __ASM__OP__(0X4C) __ASM__OP__(0X89) __ASM__OP__(0XFC)

#define _MOV_R8_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_R8_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_R8_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_R8_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_R8_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_R8_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_R8_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_R8_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_R8_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_R8_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_R8_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_R8_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_R8_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE0)
#define _MOV_R8_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_R8_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_R8_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF8)

#define _MOV_R9_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_R9_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_R9_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_R9_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_R9_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_R9_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_R9_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_R9_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_R9_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_R9_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_R9_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_R9_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_R9_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE1)
#define _MOV_R9_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_R9_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_R9_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF9)

#define _MOV_R10_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_R10_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_R10_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_R10_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_R10_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_R10_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_R10_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_R10_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_R10_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_R10_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_R10_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_R10_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_R10_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE2)
#define _MOV_R10_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_R10_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_R10_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFA)

#define _MOV_R11_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_R11_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_R11_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_R11_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_R11_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_R11_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_R11_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_R11_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_R11_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_R11_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_R11_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_R11_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_R11_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE3)
#define _MOV_R11_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_R11_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_R11_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFB)

#define _MOV_R12_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_R12_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_R12_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_R12_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_R12_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_R12_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_R12_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_R12_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_R12_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_R12_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_R12_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_R12_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_R12_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE4)
#define _MOV_R12_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_R12_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_R12_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFC)

#define _MOV_R13_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_R13_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_R13_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_R13_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_R13_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_R13_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_R13_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_R13_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_R13_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_R13_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_R13_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_R13_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_R13_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE5)
#define _MOV_R13_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_R13_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_R13_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFD)

#define _MOV_R14_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_R14_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_R14_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_R14_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_R14_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_R14_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_R14_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_R14_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_R14_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_R14_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_R14_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_R14_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_R14_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE6)
#define _MOV_R14_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_R14_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_R14_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFE)

#define _MOV_R15_RAX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_R15_RBX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_R15_RCX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_R15_RDX __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_R15_RDI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_R15_RSI __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_R15_RBP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_R15_RSP __ASM__OP__(0X49) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_R15_R8 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_R15_R9 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_R15_R10 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_R15_R11 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_R15_R12 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XE7)
#define _MOV_R15_R13 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_R15_R14 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_R15_R15 __ASM__OP__(0X4D) __ASM__OP__(0X89) __ASM__OP__(0XFF)

#define _MOV_RAX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC0)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC3)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC1)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC2)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC7)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC6)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC4)\
	__ASM__IMM32__(VALUE)
#define _MOV_R8_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC0)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC1)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC2)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC3)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC4)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC5)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC6)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_(VALUE) \
	__ASM__OP__(0X49)\
	__ASM__OP__(0XC7)\
	__ASM__OP__(0XC7)\
	__ASM__IMM32__(VALUE)
/* ************************ [^] 64-BIT REGISTERS [^] ************************ */

/* ************************* [v] 64-BIT MEMORY [v] ************************** */
#define _MOV_RAX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RAX_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RAX_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RAX_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RAX_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RAX_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RAX_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RBX_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RBX_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RBX_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RBX_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RBX_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RBX_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RBX_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RBX_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RCX_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RCX_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RCX_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RCX_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RCX_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RCX_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RCX_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RCX_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RDX_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RDX_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RDX_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RDX_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RDX_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RDX_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RDX_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RDX_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RSI_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RSI_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RSI_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RSI_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RSI_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RSI_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RSI_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RSI_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RDI_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RDI_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RDI_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RDI_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RDI_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RDI_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RDI_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RDI_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RBP_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RBP_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RBP_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RBP_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RBP_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RBP_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RBP_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RBP_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RSP_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_RSP_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_RSP_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_RSP_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_RSP_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_RSP_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_RSP_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RSP_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R8_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R8_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R8_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R8_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R8_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R8_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R8_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R9_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R9_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R9_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R9_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R9_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R9_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R9_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R9_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R10_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R10_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R10_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R10_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R10_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R10_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R10_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R10_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R11_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R11_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R11_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R11_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R11_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R11_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R11_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R11_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R12_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R12_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R12_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R12_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R12_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R12_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R12_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R12_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R13_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R13_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R13_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R13_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R13_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R13_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R13_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R13_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R14_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R14_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R14_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R14_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R14_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R14_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R14_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R14_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R15_TO_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X00)
#define _MOV_R15_TO_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X1B)
#define _MOV_R15_TO_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X09)
#define _MOV_R15_TO_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X12)
#define _MOV_R15_TO_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X36)
#define _MOV_R15_TO_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X3F)
#define _MOV_R15_TO_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R15_TO_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X89) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_RAX_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X03)
#define _MOV_RAX_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X01)
#define _MOV_RAX_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X02)
#define _MOV_RAX_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X06)
#define _MOV_RAX_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X07)
#define _MOV_RAX_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X45) \
	__ASM__OP__(0X00)
#define _MOV_RAX_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X04) \
	__ASM__OP__(0X24)

#define _MOV_RBX_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X18)
#define _MOV_RBX_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1B)
#define _MOV_RBX_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X19)
#define _MOV_RBX_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1A)
#define _MOV_RBX_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1E)
#define _MOV_RBX_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1F)
#define _MOV_RBX_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X5D) \
	__ASM__OP__(0X00)
#define _MOV_RBX_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1C) \
	__ASM__OP__(0X24)

#define _MOV_RCX_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X08)
#define _MOV_RCX_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0B)
#define _MOV_RCX_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X09)
#define _MOV_RCX_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0A)
#define _MOV_RCX_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0E)
#define _MOV_RCX_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0F)
#define _MOV_RCX_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X4D) \
	__ASM__OP__(0X00)
#define _MOV_RCX_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0C) \
	__ASM__OP__(0X24)

#define _MOV_RDX_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X10)
#define _MOV_RDX_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X13)
#define _MOV_RDX_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X11)
#define _MOV_RDX_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X12)
#define _MOV_RDX_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X16)
#define _MOV_RDX_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X17)
#define _MOV_RDX_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X55) \
	__ASM__OP__(0X00)
#define _MOV_RDX_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X14) \
	__ASM__OP__(0X24)

#define _MOV_RSI_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X30)
#define _MOV_RSI_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X33)
#define _MOV_RSI_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X31)
#define _MOV_RSI_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X32)
#define _MOV_RSI_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X36)
#define _MOV_RSI_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X37)
#define _MOV_RSI_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X75) \
	__ASM__OP__(0X00)
#define _MOV_RSI_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X34) \
	__ASM__OP__(0X24)

#define _MOV_RDI_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X38)
#define _MOV_RDI_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3B)
#define _MOV_RDI_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X39)
#define _MOV_RDI_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3A)
#define _MOV_RDI_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3E)
#define _MOV_RDI_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3F)
#define _MOV_RDI_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X7D) \
	__ASM__OP__(0X00)
#define _MOV_RDI_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3C) \
	__ASM__OP__(0X24)

#define _MOV_RBP_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X28)
#define _MOV_RBP_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2B)
#define _MOV_RBP_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X29)
#define _MOV_RBP_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2A)
#define _MOV_RBP_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2E)
#define _MOV_RBP_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2F)
#define _MOV_RBP_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_RBP_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2C) \
	__ASM__OP__(0X24)

#define _MOV_RSP_FROM_PTR_RAX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X20)
#define _MOV_RSP_FROM_PTR_RBX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X23)
#define _MOV_RSP_FROM_PTR_RCX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X21)
#define _MOV_RSP_FROM_PTR_RDX \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X22)
#define _MOV_RSP_FROM_PTR_RSI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X26)
#define _MOV_RSP_FROM_PTR_RDI \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X27)
#define _MOV_RSP_FROM_PTR_RBP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X65) \
	__ASM__OP__(0X00)
#define _MOV_RSP_FROM_PTR_RSP \
	__ASM__OP__(0X48) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R8_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X03)
#define _MOV_R8_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X01)
#define _MOV_R8_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X02)
#define _MOV_R8_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X06)
#define _MOV_R8_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X07)
#define _MOV_R8_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X45) \
	__ASM__OP__(0X00)
#define _MOV_R8_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X04) \
	__ASM__OP__(0X24)

#define _MOV_R9_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X08)
#define _MOV_R9_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0B)
#define _MOV_R9_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X09)
#define _MOV_R9_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0A)
#define _MOV_R9_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0E)
#define _MOV_R9_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0F)
#define _MOV_R9_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X4D) \
	__ASM__OP__(0X00)
#define _MOV_R9_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X0C) \
	__ASM__OP__(0X24)

#define _MOV_R10_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X10)
#define _MOV_R10_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X13)
#define _MOV_R10_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X11)
#define _MOV_R10_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X12)
#define _MOV_R10_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X16)
#define _MOV_R10_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X17)
#define _MOV_R10_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X55) \
	__ASM__OP__(0X00)
#define _MOV_R10_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X14) \
	__ASM__OP__(0X24)

#define _MOV_R11_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X18)
#define _MOV_R11_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1B)
#define _MOV_R11_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X19)
#define _MOV_R11_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1A)
#define _MOV_R11_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1E)
#define _MOV_R11_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1F)
#define _MOV_R11_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X5D) \
	__ASM__OP__(0X00)
#define _MOV_R11_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X1C) \
	__ASM__OP__(0X24)

#define _MOV_R12_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X20)
#define _MOV_R12_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X23)
#define _MOV_R12_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X21)
#define _MOV_R12_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X22)
#define _MOV_R12_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X26)
#define _MOV_R12_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X27)
#define _MOV_R12_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X65) \
	__ASM__OP__(0X00)
#define _MOV_R12_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X24) \
	__ASM__OP__(0X24)

#define _MOV_R13_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X28)
#define _MOV_R13_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2B)
#define _MOV_R13_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X29)
#define _MOV_R13_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2A)
#define _MOV_R13_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2E)
#define _MOV_R13_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2F)
#define _MOV_R13_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X6D) \
	__ASM__OP__(0X00)
#define _MOV_R13_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X2C) \
	__ASM__OP__(0X24)

#define _MOV_R14_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X30) 
#define _MOV_R14_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X33) 
#define _MOV_R14_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X31) 
#define _MOV_R14_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X32) 
#define _MOV_R14_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X36) 
#define _MOV_R14_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X37) 
#define _MOV_R14_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X75) \
	__ASM__OP__(0X00)
#define _MOV_R14_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X34) \
	__ASM__OP__(0X24)

#define _MOV_R15_FROM_PTR_RAX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X38) 
#define _MOV_R15_FROM_PTR_RBX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3B) 
#define _MOV_R15_FROM_PTR_RCX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X39) 
#define _MOV_R15_FROM_PTR_RDX \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3A) 
#define _MOV_R15_FROM_PTR_RSI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3E) 
#define _MOV_R15_FROM_PTR_RDI \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3F) 
#define _MOV_R15_FROM_PTR_RBP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X7D) \
	__ASM__OP__(0X00)
#define _MOV_R15_FROM_PTR_RSP \
	__ASM__OP__(0X4C) \
	__ASM__OP__(0X8B) \
	__ASM__OP__(0X3C) \
	__ASM__OP__(0X24)

#define _MOV_RAX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP__FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_ESP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X84)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8C)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X94)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XB4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XBC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XAC)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_RSP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XA4)\
	__ASM__OP__(0X24)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_EBP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_EAX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_ECX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_EDI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_EBP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_ESP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X85)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X95)\
	__ASM__IMM32__(VALUE)
#define _MOV_SIL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XB5)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XBD)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XAD)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_RBP_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0XA5)\
	__ASM__IMM32__(VALUE)
/* ************************* [v] 64-BIT MEMORY [v] ************************** */

/* ************************ [v] 64-BIT SEGMENTS [v] ************************* */
#define _MOV_RAX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_RAX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RCX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RDI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RBP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_RSP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X48)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X4C)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
/* ************************ [^] 64-BIT SEGMENTS [^] ************************* */

#define _MOV_RAX_FROM_PTR_GS_RCX \
	__ASM__OP__(0X65) __ASM__OP__(0X48) __ASM__OP__(0X8B) __ASM__OP__(0X01)

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
