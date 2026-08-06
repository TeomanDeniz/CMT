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

#include "32.INL"

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
