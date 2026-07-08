/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define _MOV_AL_AL __ASM__OP__(0X88) __ASM__OP__(0XC0)
#define _MOV_AL_BL __ASM__OP__(0X88) __ASM__OP__(0XD8)
#define _MOV_AL_CL __ASM__OP__(0X88) __ASM__OP__(0XC8)
#define _MOV_AL_DL __ASM__OP__(0X88) __ASM__OP__(0XD0)

#define _MOV_BL_AL __ASM__OP__(0X88) __ASM__OP__(0XC3)
#define _MOV_BL_BL __ASM__OP__(0X88) __ASM__OP__(0XDB)
#define _MOV_BL_CL __ASM__OP__(0X88) __ASM__OP__(0XCB)
#define _MOV_BL_DL __ASM__OP__(0X88) __ASM__OP__(0XD3)

#define _MOV_CL_AL __ASM__OP__(0X88) __ASM__OP__(0XC1)
#define _MOV_CL_BL __ASM__OP__(0X88) __ASM__OP__(0XD9)
#define _MOV_CL_CL __ASM__OP__(0X88) __ASM__OP__(0XC9)
#define _MOV_CL_DL __ASM__OP__(0X88) __ASM__OP__(0XD1)

#define _MOV_DL_AL __ASM__OP__(0X88) __ASM__OP__(0XC2)
#define _MOV_DL_BL __ASM__OP__(0X88) __ASM__OP__(0XDA)
#define _MOV_DL_CL __ASM__OP__(0X88) __ASM__OP__(0XCA)
#define _MOV_DL_DL __ASM__OP__(0X88) __ASM__OP__(0XD2)

#define _MOV_AL_(VALUE) __ASM__OP__(0XB0) __ASM__IMM8__(VALUE)
#define _MOV_BL_(VALUE) __ASM__OP__(0XB3) __ASM__IMM8__(VALUE)
#define _MOV_CL_(VALUE) __ASM__OP__(0XB1) __ASM__IMM8__(VALUE)
#define _MOV_DL_(VALUE) __ASM__OP__(0XB2) __ASM__IMM8__(VALUE)

#ifdef __SYSTEM_64_BIT__
#define _MOV_AL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF8)
#define _MOV_AL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF0)
#define _MOV_AL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE8)
#define _MOV_AL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE0)
#define _MOV_AL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC0)
#define _MOV_AL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC8)
#define _MOV_AL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD0)
#define _MOV_AL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD8)
#define _MOV_AL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE0)
#define _MOV_AL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE8)
#define _MOV_AL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF0)
#define _MOV_AL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF8)

#define _MOV_BL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFB)
#define _MOV_BL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF3)
#define _MOV_BL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XEB)
#define _MOV_BL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE3)
#define _MOV_BL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC3)
#define _MOV_BL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCB)
#define _MOV_BL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD3)
#define _MOV_BL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDB)
#define _MOV_BL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE3)
#define _MOV_BL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XEB)
#define _MOV_BL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF3)
#define _MOV_BL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFB)

#define _MOV_CL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF9)
#define _MOV_CL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF1)
#define _MOV_CL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE9)
#define _MOV_CL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE1)
#define _MOV_CL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC1)
#define _MOV_CL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC9)
#define _MOV_CL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD1)
#define _MOV_CL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD9)
#define _MOV_CL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE1)
#define _MOV_CL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE9)
#define _MOV_CL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF1)
#define _MOV_CL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF9)

#define _MOV_DL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFA)
#define _MOV_DL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF2)
#define _MOV_DL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XEA)
#define _MOV_DL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE2)
#define _MOV_DL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC2)
#define _MOV_DL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCA)
#define _MOV_DL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD2)
#define _MOV_DL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDA)
#define _MOV_DL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE2)
#define _MOV_DL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XEA)
#define _MOV_DL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF2)
#define _MOV_DL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFA)

#define _MOV_DIL_AL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XC7)
#define _MOV_DIL_BL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XDF)
#define _MOV_DIL_CL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XCF)
#define _MOV_DIL_DL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XD7)
#define _MOV_DIL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFF)
#define _MOV_DIL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF7)
#define _MOV_DIL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XEF)
#define _MOV_DIL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE7)
#define _MOV_DIL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC7)
#define _MOV_DIL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCF)
#define _MOV_DIL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD7)
#define _MOV_DIL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDF)
#define _MOV_DIL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE7)
#define _MOV_DIL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XEF)
#define _MOV_DIL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF7)
#define _MOV_DIL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFF)

#define _MOV_SIL_AL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XC6)
#define _MOV_SIL_BL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XDE)
#define _MOV_SIL_CL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XCE)
#define _MOV_SIL_DL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XD6)
#define _MOV_SIL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFE)
#define _MOV_SIL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF6)
#define _MOV_SIL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XEE)
#define _MOV_SIL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE6)
#define _MOV_SIL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC6)
#define _MOV_SIL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCE)
#define _MOV_SIL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD6)
#define _MOV_SIL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDE)
#define _MOV_SIL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE6)
#define _MOV_SIL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XEE)
#define _MOV_SIL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF6)
#define _MOV_SIL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFE)

#define _MOV_BPL_AL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XC5)
#define _MOV_BPL_BL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XDD)
#define _MOV_BPL_CL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XCD)
#define _MOV_BPL_DL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XD5)
#define _MOV_BPL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFD)
#define _MOV_BPL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF5)
#define _MOV_BPL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XED)
#define _MOV_BPL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE5)
#define _MOV_BPL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC5)
#define _MOV_BPL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCD)
#define _MOV_BPL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD5)
#define _MOV_BPL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDD)
#define _MOV_BPL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE5)
#define _MOV_BPL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XED)
#define _MOV_BPL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF5)
#define _MOV_BPL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFD)

#define _MOV_SPL_AL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XC4)
#define _MOV_SPL_BL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XDC)
#define _MOV_SPL_CL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XCC)
#define _MOV_SPL_DL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XD4)
#define _MOV_SPL_DIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XFC)
#define _MOV_SPL_SIL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XF4)
#define _MOV_SPL_BPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XEC)
#define _MOV_SPL_SPL __ASM__OP__(0X40) __ASM__OP__(0X88) __ASM__OP__(0XE4)
#define _MOV_SPL_R8B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XC4)
#define _MOV_SPL_R9B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XCC)
#define _MOV_SPL_R10B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XD4)
#define _MOV_SPL_R11B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XDC)
#define _MOV_SPL_R12B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XE4)
#define _MOV_SPL_R13B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XEC)
#define _MOV_SPL_R14B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XF4)
#define _MOV_SPL_R15B __ASM__OP__(0X44) __ASM__OP__(0X88) __ASM__OP__(0XFC)

#define _MOV_R8B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC0)
#define _MOV_R8B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD8)
#define _MOV_R8B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC8)
#define _MOV_R8B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD0)
#define _MOV_R8B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF8)
#define _MOV_R8B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF0)
#define _MOV_R8B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE8)
#define _MOV_R8B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE0)
#define _MOV_R8B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC0)
#define _MOV_R8B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC8)
#define _MOV_R8B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD0)
#define _MOV_R8B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD8)
#define _MOV_R8B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE0)
#define _MOV_R8B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE8)
#define _MOV_R8B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF0)
#define _MOV_R8B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF8)

#define _MOV_R9B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC1)
#define _MOV_R9B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD9)
#define _MOV_R9B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC9)
#define _MOV_R9B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD1)
#define _MOV_R9B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF9)
#define _MOV_R9B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF1)
#define _MOV_R9B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE9)
#define _MOV_R9B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE1)
#define _MOV_R9B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC1)
#define _MOV_R9B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC9)
#define _MOV_R9B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD1)
#define _MOV_R9B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD9)
#define _MOV_R9B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE1)
#define _MOV_R9B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE9)
#define _MOV_R9B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF1)
#define _MOV_R9B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF9)

#define _MOV_R10B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC2)
#define _MOV_R10B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDA)
#define _MOV_R10B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCA)
#define _MOV_R10B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD2)
#define _MOV_R10B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFA)
#define _MOV_R10B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF2)
#define _MOV_R10B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XEA)
#define _MOV_R10B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE2)
#define _MOV_R10B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC2)
#define _MOV_R10B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCA)
#define _MOV_R10B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD2)
#define _MOV_R10B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDA)
#define _MOV_R10B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE2)
#define _MOV_R10B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XEA)
#define _MOV_R10B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF2)
#define _MOV_R10B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFA)

#define _MOV_R11B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC3)
#define _MOV_R11B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDB)
#define _MOV_R11B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCB)
#define _MOV_R11B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD3)
#define _MOV_R11B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFB)
#define _MOV_R11B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF3)
#define _MOV_R11B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XEB)
#define _MOV_R11B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE3)
#define _MOV_R11B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC3)
#define _MOV_R11B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCB)
#define _MOV_R11B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD3)
#define _MOV_R11B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDB)
#define _MOV_R11B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE3)
#define _MOV_R11B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XEB)
#define _MOV_R11B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF3)
#define _MOV_R11B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFB)

#define _MOV_R12B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC4)
#define _MOV_R12B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDC)
#define _MOV_R12B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCC)
#define _MOV_R12B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD4)
#define _MOV_R12B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFC)
#define _MOV_R12B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF4)
#define _MOV_R12B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XEC)
#define _MOV_R12B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE4)
#define _MOV_R12B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC4)
#define _MOV_R12B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCC)
#define _MOV_R12B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD4)
#define _MOV_R12B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDC)
#define _MOV_R12B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE4)
#define _MOV_R12B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XEC)
#define _MOV_R12B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF4)
#define _MOV_R12B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFC)

#define _MOV_R13B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC5)
#define _MOV_R13B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDD)
#define _MOV_R13B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCD)
#define _MOV_R13B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD5)
#define _MOV_R13B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFD)
#define _MOV_R13B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF5)
#define _MOV_R13B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XED)
#define _MOV_R13B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE5)
#define _MOV_R13B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC5)
#define _MOV_R13B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCD)
#define _MOV_R13B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD5)
#define _MOV_R13B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDD)
#define _MOV_R13B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE5)
#define _MOV_R13B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XED)
#define _MOV_R13B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF5)
#define _MOV_R13B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFD)

#define _MOV_R14B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC6)
#define _MOV_R14B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDE)
#define _MOV_R14B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCE)
#define _MOV_R14B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD6)
#define _MOV_R14B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFE)
#define _MOV_R14B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF6)
#define _MOV_R14B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XEE)
#define _MOV_R14B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE6)
#define _MOV_R14B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC6)
#define _MOV_R14B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCE)
#define _MOV_R14B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD6)
#define _MOV_R14B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDE)
#define _MOV_R14B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE6)
#define _MOV_R14B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XEE)
#define _MOV_R14B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF6)
#define _MOV_R14B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFE)

#define _MOV_R15B_AL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XC7)
#define _MOV_R15B_BL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XDF)
#define _MOV_R15B_CL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XCF)
#define _MOV_R15B_DL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XD7)
#define _MOV_R15B_DIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XFF)
#define _MOV_R15B_SIL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XF7)
#define _MOV_R15B_BPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XEF)
#define _MOV_R15B_SPL __ASM__OP__(0X41) __ASM__OP__(0X88) __ASM__OP__(0XE7)
#define _MOV_R15B_R8B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XC7)
#define _MOV_R15B_R9B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XCF)
#define _MOV_R15B_R10B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XD7)
#define _MOV_R15B_R11B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XDF)
#define _MOV_R15B_R12B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XE7)
#define _MOV_R15B_R13B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XEF)
#define _MOV_R15B_R14B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XF7)
#define _MOV_R15B_R15B __ASM__OP__(0X45) __ASM__OP__(0X88) __ASM__OP__(0XFF)

#define _MOV_DIL_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0XB7)\
	__ASM__IMM8__(VALUE)
#define _MOV_SIL_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0XB6)\
	__ASM__IMM8__(VALUE)
#define _MOV_BPL_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0XB5)\
	__ASM__IMM8__(VALUE)
#define _MOV_SPL_(VALUE) \
	__ASM__OP__(0X40)\
	__ASM__OP__(0XB4)\
	__ASM__IMM8__(VALUE)
#define _MOV_R8B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB0)\
	__ASM__IMM8__(VALUE)
#define _MOV_R9B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB1)\
	__ASM__IMM8__(VALUE)
#define _MOV_R10B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB2)\
	__ASM__IMM8__(VALUE)
#define _MOV_R11B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB3)\
	__ASM__IMM8__(VALUE)
#define _MOV_R12B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB4)\
	__ASM__IMM8__(VALUE)
#define _MOV_R13B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB5)\
	__ASM__IMM8__(VALUE)
#define _MOV_R14B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB6)\
	__ASM__IMM8__(VALUE)
#define _MOV_R15B_(VALUE) \
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB7)\
	__ASM__IMM8__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define _MOV_AX_AX __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_AX_BX __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_AX_CX __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_AX_DX __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_AX_DI __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_AX_SI __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_AX_BP __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_AX_SP __ASM__OP__(0X89) __ASM__OP__(0XE0)

#define _MOV_BX_AX __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_BX_BX __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_BX_CX __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_BX_DX __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_BX_DI __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_BX_SI __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_BX_BP __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_BX_SP __ASM__OP__(0X89) __ASM__OP__(0XE3)

#define _MOV_CX_AX __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_CX_BX __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_CX_CX __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_CX_DX __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_CX_DI __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_CX_SI __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_CX_BP __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_CX_SP __ASM__OP__(0X89) __ASM__OP__(0XE1)

#define _MOV_DX_AX __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_DX_BX __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_DX_CX __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_DX_DX __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_DX_DI __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_DX_SI __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_DX_BP __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_DX_SP __ASM__OP__(0X89) __ASM__OP__(0XE2)

#define _MOV_DI_AX __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_DI_BX __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_DI_CX __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_DI_DX __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_DI_DI __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_DI_SI __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_DI_BP __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_DI_SP __ASM__OP__(0X89) __ASM__OP__(0XE7)

#define _MOV_SI_AX __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_SI_BX __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_SI_CX __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_SI_DX __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_SI_DI __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_SI_SI __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_SI_BP __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_SI_SP __ASM__OP__(0X89) __ASM__OP__(0XE6)

#define _MOV_BP_AX __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_BP_BX __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_BP_CX __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_BP_DX __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_BP_DI __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_BP_SI __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_BP_BP __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_BP_SP __ASM__OP__(0X89) __ASM__OP__(0XE5)

#define _MOV_SP_AX __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_SP_BX __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_SP_CX __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_SP_DX __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_SP_DI __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_SP_SI __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_SP_BP __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_SP_SP __ASM__OP__(0X89) __ASM__OP__(0XE4)

#define _MOV_AX_(VALUE) __ASM__OP__(0XB8) __ASM__IMM16__(VALUE)
#define _MOV_BX_(VALUE) __ASM__OP__(0XBB) __ASM__IMM16__(VALUE)
#define _MOV_CX_(VALUE) __ASM__OP__(0XB9) __ASM__IMM16__(VALUE)
#define _MOV_DX_(VALUE) __ASM__OP__(0XBA) __ASM__IMM16__(VALUE)
#define _MOV_DI_(VALUE) __ASM__OP__(0XBF) __ASM__IMM16__(VALUE)
#define _MOV_SI_(VALUE) __ASM__OP__(0XBE) __ASM__IMM16__(VALUE)
#define _MOV_BP_(VALUE) __ASM__OP__(0XBD) __ASM__IMM16__(VALUE)
#define _MOV_SP_(VALUE) __ASM__OP__(0XBC) __ASM__IMM16__(VALUE)
#else /* !__SYSTEM_16_BIT__ */
#define _MOV_AX_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC0)
#define _MOV_AX_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD8)
#define _MOV_AX_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC8)
#define _MOV_AX_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD0)
#define _MOV_AX_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF8)
#define _MOV_AX_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF0)
#define _MOV_AX_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE8)
#define _MOV_AX_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE0)

#define _MOV_BX_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC3)
#define _MOV_BX_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDB)
#define _MOV_BX_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCB)
#define _MOV_BX_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD3)
#define _MOV_BX_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFB)
#define _MOV_BX_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF3)
#define _MOV_BX_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XEB)
#define _MOV_BX_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE3)

#define _MOV_CX_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC1)
#define _MOV_CX_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD9)
#define _MOV_CX_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC9)
#define _MOV_CX_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD1)
#define _MOV_CX_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF9)
#define _MOV_CX_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF1)
#define _MOV_CX_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE9)
#define _MOV_CX_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE1)

#define _MOV_DX_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC2)
#define _MOV_DX_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDA)
#define _MOV_DX_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCA)
#define _MOV_DX_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD2)
#define _MOV_DX_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFA)
#define _MOV_DX_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF2)
#define _MOV_DX_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XEA)
#define _MOV_DX_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE2)

#define _MOV_DI_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC7)
#define _MOV_DI_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDF)
#define _MOV_DI_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCF)
#define _MOV_DI_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD7)
#define _MOV_DI_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFF)
#define _MOV_DI_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF7)
#define _MOV_DI_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XEF)
#define _MOV_DI_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE7)

#define _MOV_SI_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC6)
#define _MOV_SI_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDE)
#define _MOV_SI_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCE)
#define _MOV_SI_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD6)
#define _MOV_SI_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFE)
#define _MOV_SI_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF6)
#define _MOV_SI_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XEE)
#define _MOV_SI_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE6)

#define _MOV_BP_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC5)
#define _MOV_BP_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDD)
#define _MOV_BP_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCD)
#define _MOV_BP_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD5)
#define _MOV_BP_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFD)
#define _MOV_BP_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF5)
#define _MOV_BP_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XED)
#define _MOV_BP_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE5)

#define _MOV_SP_AX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XC4)
#define _MOV_SP_BX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XDC)
#define _MOV_SP_CX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XCC)
#define _MOV_SP_DX __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XD4)
#define _MOV_SP_DI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XFC)
#define _MOV_SP_SI __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XF4)
#define _MOV_SP_BP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XEC)
#define _MOV_SP_SP __ASM__OP__(0X66) __ASM__OP__(0X89) __ASM__OP__(0XE4)

#define _MOV_AX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XB8)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBB)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XB9)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBA)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBF)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBD)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XBC)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_AX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC0)
#define _MOV_AX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC8)
#define _MOV_AX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD0)
#define _MOV_AX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD8)
#define _MOV_AX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE0)
#define _MOV_AX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE8)
#define _MOV_AX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF0)
#define _MOV_AX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF8)

#define _MOV_BX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC3)
#define _MOV_BX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCB)
#define _MOV_BX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD3)
#define _MOV_BX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDB)
#define _MOV_BX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE3)
#define _MOV_BX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEB)
#define _MOV_BX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF3)
#define _MOV_BX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFB)

#define _MOV_CX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC1)
#define _MOV_CX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC9)
#define _MOV_CX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD1)
#define _MOV_CX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD9)
#define _MOV_CX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE1)
#define _MOV_CX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE9)
#define _MOV_CX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF1)
#define _MOV_CX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF9)

#define _MOV_DX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC2)
#define _MOV_DX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCA)
#define _MOV_DX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD2)
#define _MOV_DX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDA)
#define _MOV_DX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE2)
#define _MOV_DX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEA)
#define _MOV_DX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF2)
#define _MOV_DX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFA)

#define _MOV_SI_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC6)
#define _MOV_SI_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCE)
#define _MOV_SI_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD6)
#define _MOV_SI_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDE)
#define _MOV_SI_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE6)
#define _MOV_SI_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEE)
#define _MOV_SI_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF6)
#define _MOV_SI_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFE)

#define _MOV_DI_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC7)
#define _MOV_DI_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCF)
#define _MOV_DI_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD7)
#define _MOV_DI_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDF)
#define _MOV_DI_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE7)
#define _MOV_DI_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEF)
#define _MOV_DI_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF7)
#define _MOV_DI_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFF)

#define _MOV_BP_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC5)
#define _MOV_BP_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCD)
#define _MOV_BP_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD5)
#define _MOV_BP_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDD)
#define _MOV_BP_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE5)
#define _MOV_BP_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XED)
#define _MOV_BP_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF5)
#define _MOV_BP_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFD)

#define _MOV_SP_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC4)
#define _MOV_SP_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCC)
#define _MOV_SP_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD4)
#define _MOV_SP_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDC)
#define _MOV_SP_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE4)
#define _MOV_SP_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEC)
#define _MOV_SP_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF4)
#define _MOV_SP_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFC)

#define _MOV_R8W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC0)
#define _MOV_R8W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD8)
#define _MOV_R8W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC8)
#define _MOV_R8W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD0)
#define _MOV_R8W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF0)
#define _MOV_R8W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF8)
#define _MOV_R8W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE8)
#define _MOV_R8W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE0)
#define _MOV_R8W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC0)
#define _MOV_R8W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC8)
#define _MOV_R8W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD0)
#define _MOV_R8W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD8)
#define _MOV_R8W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE0)
#define _MOV_R8W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE8)
#define _MOV_R8W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF0)
#define _MOV_R8W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF8)

#define _MOV_R9W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC1)
#define _MOV_R9W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD9)
#define _MOV_R9W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC9)
#define _MOV_R9W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD1)
#define _MOV_R9W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF1)
#define _MOV_R9W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF9)
#define _MOV_R9W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE9)
#define _MOV_R9W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE1)
#define _MOV_R9W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC1)
#define _MOV_R9W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC9)
#define _MOV_R9W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD1)
#define _MOV_R9W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD9)
#define _MOV_R9W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE1)
#define _MOV_R9W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE9)
#define _MOV_R9W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF1)
#define _MOV_R9W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF9)

#define _MOV_R10W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC2)
#define _MOV_R10W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDA)
#define _MOV_R10W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCA)
#define _MOV_R10W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD2)
#define _MOV_R10W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF2)
#define _MOV_R10W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFA)
#define _MOV_R10W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEA)
#define _MOV_R10W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE2)
#define _MOV_R10W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC2)
#define _MOV_R10W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCA)
#define _MOV_R10W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD2)
#define _MOV_R10W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDA)
#define _MOV_R10W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE2)
#define _MOV_R10W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEA)
#define _MOV_R10W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF2)
#define _MOV_R10W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFA)

#define _MOV_R11W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC3)
#define _MOV_R11W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDB)
#define _MOV_R11W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCB)
#define _MOV_R11W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD3)
#define _MOV_R11W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF3)
#define _MOV_R11W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFB)
#define _MOV_R11W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEB)
#define _MOV_R11W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE3)
#define _MOV_R11W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC3)
#define _MOV_R11W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCB)
#define _MOV_R11W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD3)
#define _MOV_R11W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDB)
#define _MOV_R11W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE3)
#define _MOV_R11W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEB)
#define _MOV_R11W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF3)
#define _MOV_R11W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFB)

#define _MOV_R12W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC4)
#define _MOV_R12W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDC)
#define _MOV_R12W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCC)
#define _MOV_R12W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD4)
#define _MOV_R12W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF4)
#define _MOV_R12W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFC)
#define _MOV_R12W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEC)
#define _MOV_R12W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE4)
#define _MOV_R12W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC4)
#define _MOV_R12W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCC)
#define _MOV_R12W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD4)
#define _MOV_R12W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDC)
#define _MOV_R12W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE4)
#define _MOV_R12W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEC)
#define _MOV_R12W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF4)
#define _MOV_R12W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFC)

#define _MOV_R13W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC5)
#define _MOV_R13W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDD)
#define _MOV_R13W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCD)
#define _MOV_R13W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD5)
#define _MOV_R13W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF5)
#define _MOV_R13W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFD)
#define _MOV_R13W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XED)
#define _MOV_R13W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE5)
#define _MOV_R13W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC5)
#define _MOV_R13W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCD)
#define _MOV_R13W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD5)
#define _MOV_R13W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDD)
#define _MOV_R13W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE5)
#define _MOV_R13W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XED)
#define _MOV_R13W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF5)
#define _MOV_R13W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFD)

#define _MOV_R14W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC6)
#define _MOV_R14W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDE)
#define _MOV_R14W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCE)
#define _MOV_R14W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD6)
#define _MOV_R14W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF6)
#define _MOV_R14W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFE)
#define _MOV_R14W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEE)
#define _MOV_R14W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE6)
#define _MOV_R14W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC6)
#define _MOV_R14W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCE)
#define _MOV_R14W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD6)
#define _MOV_R14W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDE)
#define _MOV_R14W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE6)
#define _MOV_R14W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEE)
#define _MOV_R14W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF6)
#define _MOV_R14W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFE)

#define _MOV_R15W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC7)
#define _MOV_R15W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDF)
#define _MOV_R15W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCF)
#define _MOV_R15W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD7)
#define _MOV_R15W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF7)
#define _MOV_R15W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFF)
#define _MOV_R15W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEF)
#define _MOV_R15W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE7)
#define _MOV_R15W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XC7)
#define _MOV_R15W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XCF)
#define _MOV_R15W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XD7)
#define _MOV_R15W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XDF)
#define _MOV_R15W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XE7)
#define _MOV_R15W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XEF)
#define _MOV_R15W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XF7)
#define _MOV_R15W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XFF)

#define _MOV_R8W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB8)\
	__ASM__IMM16__(VALUE)
#define _MOV_R9W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XB9)\
	__ASM__IMM16__(VALUE)
#define _MOV_R10W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBA)\
	__ASM__IMM16__(VALUE)
#define _MOV_R11W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBB)\
	__ASM__IMM16__(VALUE)
#define _MOV_R12W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBC)\
	__ASM__IMM16__(VALUE)
#define _MOV_R13W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBD)\
	__ASM__IMM16__(VALUE)
#define _MOV_R14W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_R15W_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0XBF)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define _MOV_AL_FROM_PTR_(VALUE) \
	__ASM__OP__(0XA0)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X16)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_TO_PTR_(VALUE) \
	__ASM__OP__(0XA2) \
	__ASM__IMM16__(VALUE)
#define _MOV_BL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X16)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _MOV_AL_FROM_PTR_(VALUE) \
	__ASM__OP__(0XA0) \
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_(VALUE) \
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X46)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X5E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X4E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X56)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_AL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_(VALUE) \
	__ASM__OP__(0X88)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define _MOV_AX_FROM_PTR_(VALUE) __ASM__OP__(0XA1) __ASM__IMM16__(VALUE)
#define _MOV_BX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X16)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X36)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3E)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2E)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X26)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_(VALUE) \
	__ASM__OP__(0XA3)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X36)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3E)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2E)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_TO_PTR_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X26)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _MOV_AX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1E)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0E)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X16)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_FROM_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X86)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X9E)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X8E)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X96)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XB6)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XBE)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XAE)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_TO_PTR_BP_(VALUE) \
	__ASM__OP__(0X67)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0XA6)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_AX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_(VALUE) \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 16-BIT MEMORY [^] ************************** */
 
/* ************************* [v] 8-BIT SEGMENTS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define _MOV_AL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA0)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_FROM_PTR_GS_(VALUE)  \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA0)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA2)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)

#define _MOV_AL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA2)\
	__ASM__IMM16__(VALUE)
#define _MOV_BL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _MOV_AL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_GS_(VALUE)  \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA0)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA2)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_AL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_SIL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15B_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_SIL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15B_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8A)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_SIL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15B_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_SIL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DIL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BPL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SPL_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X40)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15B_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X88)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 8-BIT SEGMENTS [^] ************************* */

/* ************************ [v] 16-BIT SEGMENTS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define _MOV_AX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA1)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA1)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0XA3)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM16__(VALUE)

#define _MOV_AX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0XA3)\
	__ASM__IMM16__(VALUE)
#define _MOV_BX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM16__(VALUE)
#define _MOV_CX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM16__(VALUE)
#define _MOV_DX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM16__(VALUE)
#define _MOV_SI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM16__(VALUE)
#define _MOV_DI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM16__(VALUE)
#define _MOV_BP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM16__(VALUE)
#define _MOV_SP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM16__(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _MOV_AX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA1)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0XA3)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1D)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0D)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X15)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X35)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3D)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2D)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _MOV_AX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_AX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_CX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DX_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_DI_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_BP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_SP_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15W_FROM_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15W_FROM_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X8B)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15W_TO_PTR_FS_(VALUE) \
	__ASM__OP__(0X64)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)

#define _MOV_R8W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X04)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R9W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X0C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R10W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X14)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R11W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X1C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R12W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X24)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R13W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X2C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R14W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X34)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#define _MOV_R15W_TO_PTR_GS_(VALUE) \
	__ASM__OP__(0X65)\
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X89)\
	__ASM__OP__(0X3C)\
	__ASM__OP__(0X25)\
	__ASM__IMM32__(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT SEGMENTS [^] ************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
