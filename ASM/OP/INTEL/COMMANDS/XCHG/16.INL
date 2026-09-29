/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define _XCHG_AL_AL __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_AL_BL __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_AL_CL __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_AL_DL __ASM__OP__(0X86) __ASM__OP__(0XD0)

#define _XCHG_BL_AL __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_BL_BL __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_BL_CL __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_BL_DL __ASM__OP__(0X86) __ASM__OP__(0XD3)

#define _XCHG_CL_AL __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_CL_BL __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_CL_CL __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_CL_DL __ASM__OP__(0X86) __ASM__OP__(0XD1)

#define _XCHG_DL_AL __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_DL_BL __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_DL_CL __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_DL_DL __ASM__OP__(0X86) __ASM__OP__(0XD2)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _XCHG_AL_AL __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_AL_BL __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_AL_CL __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_AL_DL __ASM__OP__(0X86) __ASM__OP__(0XD0)

#define _XCHG_BL_AL __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_BL_BL __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_BL_CL __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_BL_DL __ASM__OP__(0X86) __ASM__OP__(0XD3)

#define _XCHG_CL_AL __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_CL_BL __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_CL_CL __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_CL_DL __ASM__OP__(0X86) __ASM__OP__(0XD1)

#define _XCHG_DL_AL __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_DL_BL __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_DL_CL __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_DL_DL __ASM__OP__(0X86) __ASM__OP__(0XD2)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _XCHG_AL_AL __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_AL_BL __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_AL_CL __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_AL_DL __ASM__OP__(0X86) __ASM__OP__(0XD0)
#define _XCHG_AL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF8)
#define _XCHG_AL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF0)
#define _XCHG_AL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE8)
#define _XCHG_AL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE0)
#define _XCHG_AL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_AL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_AL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD0)
#define _XCHG_AL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_AL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE0)
#define _XCHG_AL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE8)
#define _XCHG_AL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF0)
#define _XCHG_AL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF8)

#define _XCHG_BL_AL __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_BL_BL __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_BL_CL __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_BL_DL __ASM__OP__(0X86) __ASM__OP__(0XD3)
#define _XCHG_BL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFB)
#define _XCHG_BL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF3)
#define _XCHG_BL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XEB)
#define _XCHG_BL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE3)
#define _XCHG_BL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_BL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_BL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD3)
#define _XCHG_BL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_BL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE3)
#define _XCHG_BL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XEB)
#define _XCHG_BL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF3)
#define _XCHG_BL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFB)

#define _XCHG_CL_AL __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_CL_BL __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_CL_CL __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_CL_DL __ASM__OP__(0X86) __ASM__OP__(0XD1)
#define _XCHG_CL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF9)
#define _XCHG_CL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF1)
#define _XCHG_CL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE9)
#define _XCHG_CL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE1)
#define _XCHG_CL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_CL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_CL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD1)
#define _XCHG_CL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_CL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE1)
#define _XCHG_CL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE9)
#define _XCHG_CL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF1)
#define _XCHG_CL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF9)

#define _XCHG_DL_AL __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_DL_BL __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_DL_CL __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_DL_DL __ASM__OP__(0X86) __ASM__OP__(0XD2)
#define _XCHG_DL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFA)
#define _XCHG_DL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF2)
#define _XCHG_DL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XEA)
#define _XCHG_DL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE2)
#define _XCHG_DL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_DL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_DL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD2)
#define _XCHG_DL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_DL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE2)
#define _XCHG_DL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XEA)
#define _XCHG_DL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF2)
#define _XCHG_DL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFA)

#define _XCHG_DIL_AL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XC7)
#define _XCHG_DIL_BL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XDF)
#define _XCHG_DIL_CL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XCF)
#define _XCHG_DIL_DL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XD7)
#define _XCHG_DIL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFF)
#define _XCHG_DIL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF7)
#define _XCHG_DIL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XEF)
#define _XCHG_DIL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE7)
#define _XCHG_DIL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC7)
#define _XCHG_DIL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCF)
#define _XCHG_DIL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD7)
#define _XCHG_DIL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDF)
#define _XCHG_DIL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE7)
#define _XCHG_DIL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XEF)
#define _XCHG_DIL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF7)
#define _XCHG_DIL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFF)

#define _XCHG_SIL_AL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XC6)
#define _XCHG_SIL_BL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XDE)
#define _XCHG_SIL_CL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XCE)
#define _XCHG_SIL_DL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XD6)
#define _XCHG_SIL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFE)
#define _XCHG_SIL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF6)
#define _XCHG_SIL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XEE)
#define _XCHG_SIL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE6)
#define _XCHG_SIL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC6)
#define _XCHG_SIL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCE)
#define _XCHG_SIL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD6)
#define _XCHG_SIL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDE)
#define _XCHG_SIL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE6)
#define _XCHG_SIL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XEE)
#define _XCHG_SIL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF6)
#define _XCHG_SIL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFE)

#define _XCHG_BPL_AL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XC5)
#define _XCHG_BPL_BL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XDD)
#define _XCHG_BPL_CL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XCD)
#define _XCHG_BPL_DL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XD5)
#define _XCHG_BPL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFD)
#define _XCHG_BPL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF5)
#define _XCHG_BPL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XED)
#define _XCHG_BPL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE5)
#define _XCHG_BPL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC5)
#define _XCHG_BPL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCD)
#define _XCHG_BPL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD5)
#define _XCHG_BPL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDD)
#define _XCHG_BPL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE5)
#define _XCHG_BPL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XED)
#define _XCHG_BPL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF5)
#define _XCHG_BPL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFD)

#define _XCHG_SPL_AL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XC4)
#define _XCHG_SPL_BL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XDC)
#define _XCHG_SPL_CL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XCC)
#define _XCHG_SPL_DL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XD4)
#define _XCHG_SPL_DIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XFC)
#define _XCHG_SPL_SIL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XF4)
#define _XCHG_SPL_BPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XEC)
#define _XCHG_SPL_SPL __ASM__OP__(0X40) __ASM__OP__(0X86) __ASM__OP__(0XE4)
#define _XCHG_SPL_R8B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XC4)
#define _XCHG_SPL_R9B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XCC)
#define _XCHG_SPL_R10B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XD4)
#define _XCHG_SPL_R11B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XDC)
#define _XCHG_SPL_R12B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XE4)
#define _XCHG_SPL_R13B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XEC)
#define _XCHG_SPL_R14B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XF4)
#define _XCHG_SPL_R15B __ASM__OP__(0X44) __ASM__OP__(0X86) __ASM__OP__(0XFC)

#define _XCHG_R8B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_R8B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_R8B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_R8B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD0)
#define _XCHG_R8B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF8)
#define _XCHG_R8B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF0)
#define _XCHG_R8B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE8)
#define _XCHG_R8B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE0)
#define _XCHG_R8B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC0)
#define _XCHG_R8B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC8)
#define _XCHG_R8B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD0)
#define _XCHG_R8B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD8)
#define _XCHG_R8B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE0)
#define _XCHG_R8B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE8)
#define _XCHG_R8B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF0)
#define _XCHG_R8B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF8)

#define _XCHG_R9B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_R9B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_R9B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_R9B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD1)
#define _XCHG_R9B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF9)
#define _XCHG_R9B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF1)
#define _XCHG_R9B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE9)
#define _XCHG_R9B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE1)
#define _XCHG_R9B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC1)
#define _XCHG_R9B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC9)
#define _XCHG_R9B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD1)
#define _XCHG_R9B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD9)
#define _XCHG_R9B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE1)
#define _XCHG_R9B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE9)
#define _XCHG_R9B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF1)
#define _XCHG_R9B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF9)

#define _XCHG_R10B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_R10B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_R10B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_R10B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD2)
#define _XCHG_R10B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFA)
#define _XCHG_R10B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF2)
#define _XCHG_R10B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XEA)
#define _XCHG_R10B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE2)
#define _XCHG_R10B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC2)
#define _XCHG_R10B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCA)
#define _XCHG_R10B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD2)
#define _XCHG_R10B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDA)
#define _XCHG_R10B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE2)
#define _XCHG_R10B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XEA)
#define _XCHG_R10B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF2)
#define _XCHG_R10B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFA)

#define _XCHG_R11B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_R11B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_R11B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_R11B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD3)
#define _XCHG_R11B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFB)
#define _XCHG_R11B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF3)
#define _XCHG_R11B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XEB)
#define _XCHG_R11B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE3)
#define _XCHG_R11B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC3)
#define _XCHG_R11B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCB)
#define _XCHG_R11B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD3)
#define _XCHG_R11B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDB)
#define _XCHG_R11B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE3)
#define _XCHG_R11B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XEB)
#define _XCHG_R11B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF3)
#define _XCHG_R11B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFB)

#define _XCHG_R12B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC4)
#define _XCHG_R12B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDC)
#define _XCHG_R12B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCC)
#define _XCHG_R12B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD4)
#define _XCHG_R12B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFC)
#define _XCHG_R12B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF4)
#define _XCHG_R12B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XEC)
#define _XCHG_R12B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE4)
#define _XCHG_R12B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC4)
#define _XCHG_R12B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCC)
#define _XCHG_R12B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD4)
#define _XCHG_R12B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDC)
#define _XCHG_R12B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE4)
#define _XCHG_R12B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XEC)
#define _XCHG_R12B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF4)
#define _XCHG_R12B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFC)

#define _XCHG_R13B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC5)
#define _XCHG_R13B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDD)
#define _XCHG_R13B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCD)
#define _XCHG_R13B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD5)
#define _XCHG_R13B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFD)
#define _XCHG_R13B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF5)
#define _XCHG_R13B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XED)
#define _XCHG_R13B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE5)
#define _XCHG_R13B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC5)
#define _XCHG_R13B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCD)
#define _XCHG_R13B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD5)
#define _XCHG_R13B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDD)
#define _XCHG_R13B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE5)
#define _XCHG_R13B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XED)
#define _XCHG_R13B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF5)
#define _XCHG_R13B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFD)

#define _XCHG_R14B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC6)
#define _XCHG_R14B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDE)
#define _XCHG_R14B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCE)
#define _XCHG_R14B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD6)
#define _XCHG_R14B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFE)
#define _XCHG_R14B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF6)
#define _XCHG_R14B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XEE)
#define _XCHG_R14B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE6)
#define _XCHG_R14B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC6)
#define _XCHG_R14B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCE)
#define _XCHG_R14B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD6)
#define _XCHG_R14B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDE)
#define _XCHG_R14B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE6)
#define _XCHG_R14B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XEE)
#define _XCHG_R14B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF6)
#define _XCHG_R14B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFE)

#define _XCHG_R15B_AL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XC7)
#define _XCHG_R15B_BL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XDF)
#define _XCHG_R15B_CL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XCF)
#define _XCHG_R15B_DL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XD7)
#define _XCHG_R15B_DIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XFF)
#define _XCHG_R15B_SIL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XF7)
#define _XCHG_R15B_BPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XEF)
#define _XCHG_R15B_SPL __ASM__OP__(0X41) __ASM__OP__(0X86) __ASM__OP__(0XE7)
#define _XCHG_R15B_R8B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XC7)
#define _XCHG_R15B_R9B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XCF)
#define _XCHG_R15B_R10B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XD7)
#define _XCHG_R15B_R11B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XDF)
#define _XCHG_R15B_R12B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XE7)
#define _XCHG_R15B_R13B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XEF)
#define _XCHG_R15B_R14B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XF7)
#define _XCHG_R15B_R15B __ASM__OP__(0X45) __ASM__OP__(0X86) __ASM__OP__(0XFF)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define _XCHG_AX_AX __ASM__OP__(0X87) __ASM__OP__(0XC0)
#define _XCHG_AX_BX __ASM__OP__(0X87) __ASM__OP__(0XD8)
#define _XCHG_AX_CX __ASM__OP__(0X87) __ASM__OP__(0XC8)
#define _XCHG_AX_DX __ASM__OP__(0X87) __ASM__OP__(0XD0)
#define _XCHG_AX_DI __ASM__OP__(0X87) __ASM__OP__(0XF8)
#define _XCHG_AX_SI __ASM__OP__(0X87) __ASM__OP__(0XF0)
#define _XCHG_AX_BP __ASM__OP__(0X87) __ASM__OP__(0XE8)
#define _XCHG_AX_SP __ASM__OP__(0X87) __ASM__OP__(0XE0)

#define _XCHG_BX_AX __ASM__OP__(0X87) __ASM__OP__(0XC3)
#define _XCHG_BX_BX __ASM__OP__(0X87) __ASM__OP__(0XDB)
#define _XCHG_BX_CX __ASM__OP__(0X87) __ASM__OP__(0XCB)
#define _XCHG_BX_DX __ASM__OP__(0X87) __ASM__OP__(0XD3)
#define _XCHG_BX_DI __ASM__OP__(0X87) __ASM__OP__(0XFB)
#define _XCHG_BX_SI __ASM__OP__(0X87) __ASM__OP__(0XF3)
#define _XCHG_BX_BP __ASM__OP__(0X87) __ASM__OP__(0XEB)
#define _XCHG_BX_SP __ASM__OP__(0X87) __ASM__OP__(0XE3)

#define _XCHG_CX_AX __ASM__OP__(0X87) __ASM__OP__(0XC1)
#define _XCHG_CX_BX __ASM__OP__(0X87) __ASM__OP__(0XD9)
#define _XCHG_CX_CX __ASM__OP__(0X87) __ASM__OP__(0XC9)
#define _XCHG_CX_DX __ASM__OP__(0X87) __ASM__OP__(0XD1)
#define _XCHG_CX_DI __ASM__OP__(0X87) __ASM__OP__(0XF9)
#define _XCHG_CX_SI __ASM__OP__(0X87) __ASM__OP__(0XF1)
#define _XCHG_CX_BP __ASM__OP__(0X87) __ASM__OP__(0XE9)
#define _XCHG_CX_SP __ASM__OP__(0X87) __ASM__OP__(0XE1)

#define _XCHG_DX_AX __ASM__OP__(0X87) __ASM__OP__(0XC2)
#define _XCHG_DX_BX __ASM__OP__(0X87) __ASM__OP__(0XDA)
#define _XCHG_DX_CX __ASM__OP__(0X87) __ASM__OP__(0XCA)
#define _XCHG_DX_DX __ASM__OP__(0X87) __ASM__OP__(0XD2)
#define _XCHG_DX_DI __ASM__OP__(0X87) __ASM__OP__(0XFA)
#define _XCHG_DX_SI __ASM__OP__(0X87) __ASM__OP__(0XF2)
#define _XCHG_DX_BP __ASM__OP__(0X87) __ASM__OP__(0XEA)
#define _XCHG_DX_SP __ASM__OP__(0X87) __ASM__OP__(0XE2)

#define _XCHG_DI_AX __ASM__OP__(0X87) __ASM__OP__(0XC7)
#define _XCHG_DI_BX __ASM__OP__(0X87) __ASM__OP__(0XDF)
#define _XCHG_DI_CX __ASM__OP__(0X87) __ASM__OP__(0XCF)
#define _XCHG_DI_DX __ASM__OP__(0X87) __ASM__OP__(0XD7)
#define _XCHG_DI_DI __ASM__OP__(0X87) __ASM__OP__(0XFF)
#define _XCHG_DI_SI __ASM__OP__(0X87) __ASM__OP__(0XF7)
#define _XCHG_DI_BP __ASM__OP__(0X87) __ASM__OP__(0XEF)
#define _XCHG_DI_SP __ASM__OP__(0X87) __ASM__OP__(0XE7)

#define _XCHG_SI_AX __ASM__OP__(0X87) __ASM__OP__(0XC6)
#define _XCHG_SI_BX __ASM__OP__(0X87) __ASM__OP__(0XDE)
#define _XCHG_SI_CX __ASM__OP__(0X87) __ASM__OP__(0XCE)
#define _XCHG_SI_DX __ASM__OP__(0X87) __ASM__OP__(0XD6)
#define _XCHG_SI_DI __ASM__OP__(0X87) __ASM__OP__(0XFE)
#define _XCHG_SI_SI __ASM__OP__(0X87) __ASM__OP__(0XF6)
#define _XCHG_SI_BP __ASM__OP__(0X87) __ASM__OP__(0XEE)
#define _XCHG_SI_SP __ASM__OP__(0X87) __ASM__OP__(0XE6)

#define _XCHG_BP_AX __ASM__OP__(0X87) __ASM__OP__(0XC5)
#define _XCHG_BP_BX __ASM__OP__(0X87) __ASM__OP__(0XDD)
#define _XCHG_BP_CX __ASM__OP__(0X87) __ASM__OP__(0XCD)
#define _XCHG_BP_DX __ASM__OP__(0X87) __ASM__OP__(0XD5)
#define _XCHG_BP_DI __ASM__OP__(0X87) __ASM__OP__(0XFD)
#define _XCHG_BP_SI __ASM__OP__(0X87) __ASM__OP__(0XF5)
#define _XCHG_BP_BP __ASM__OP__(0X87) __ASM__OP__(0XED)
#define _XCHG_BP_SP __ASM__OP__(0X87) __ASM__OP__(0XE5)

#define _XCHG_SP_AX __ASM__OP__(0X87) __ASM__OP__(0XC4)
#define _XCHG_SP_BX __ASM__OP__(0X87) __ASM__OP__(0XDC)
#define _XCHG_SP_CX __ASM__OP__(0X87) __ASM__OP__(0XCC)
#define _XCHG_SP_DX __ASM__OP__(0X87) __ASM__OP__(0XD4)
#define _XCHG_SP_DI __ASM__OP__(0X87) __ASM__OP__(0XFC)
#define _XCHG_SP_SI __ASM__OP__(0X87) __ASM__OP__(0XF4)
#define _XCHG_SP_BP __ASM__OP__(0X87) __ASM__OP__(0XEC)
#define _XCHG_SP_SP __ASM__OP__(0X87) __ASM__OP__(0XE4)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define _XCHG_AX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC0)
#define _XCHG_AX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD8)
#define _XCHG_AX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC8)
#define _XCHG_AX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD0)
#define _XCHG_AX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF8)
#define _XCHG_AX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF0)
#define _XCHG_AX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE8)
#define _XCHG_AX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE0)

#define _XCHG_BX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC3)
#define _XCHG_BX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDB)
#define _XCHG_BX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCB)
#define _XCHG_BX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD3)
#define _XCHG_BX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFB)
#define _XCHG_BX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF3)
#define _XCHG_BX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEB)
#define _XCHG_BX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE3)

#define _XCHG_CX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC1)
#define _XCHG_CX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD9)
#define _XCHG_CX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC9)
#define _XCHG_CX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD1)
#define _XCHG_CX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF9)
#define _XCHG_CX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF1)
#define _XCHG_CX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE9)
#define _XCHG_CX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE1)

#define _XCHG_DX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC2)
#define _XCHG_DX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDA)
#define _XCHG_DX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCA)
#define _XCHG_DX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD2)
#define _XCHG_DX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFA)
#define _XCHG_DX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF2)
#define _XCHG_DX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEA)
#define _XCHG_DX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE2)

#define _XCHG_DI_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC7)
#define _XCHG_DI_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDF)
#define _XCHG_DI_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCF)
#define _XCHG_DI_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD7)
#define _XCHG_DI_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFF)
#define _XCHG_DI_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF7)
#define _XCHG_DI_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEF)
#define _XCHG_DI_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE7)

#define _XCHG_SI_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC6)
#define _XCHG_SI_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDE)
#define _XCHG_SI_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCE)
#define _XCHG_SI_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD6)
#define _XCHG_SI_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFE)
#define _XCHG_SI_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF6)
#define _XCHG_SI_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEE)
#define _XCHG_SI_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE6)

#define _XCHG_BP_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC5)
#define _XCHG_BP_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDD)
#define _XCHG_BP_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCD)
#define _XCHG_BP_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD5)
#define _XCHG_BP_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFD)
#define _XCHG_BP_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF5)
#define _XCHG_BP_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XED)
#define _XCHG_BP_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE5)

#define _XCHG_SP_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC4)
#define _XCHG_SP_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDC)
#define _XCHG_SP_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCC)
#define _XCHG_SP_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD4)
#define _XCHG_SP_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFC)
#define _XCHG_SP_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF4)
#define _XCHG_SP_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEC)
#define _XCHG_SP_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE4)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define _XCHG_AX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC0)
#define _XCHG_AX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD8)
#define _XCHG_AX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC8)
#define _XCHG_AX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD0)
#define _XCHG_AX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF8)
#define _XCHG_AX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF0)
#define _XCHG_AX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE8)
#define _XCHG_AX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE0)
#define _XCHG_AX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC0)
#define _XCHG_AX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC8)
#define _XCHG_AX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD0)
#define _XCHG_AX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD8)
#define _XCHG_AX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE0)
#define _XCHG_AX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE8)
#define _XCHG_AX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF0)
#define _XCHG_AX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF8)

#define _XCHG_BX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC3)
#define _XCHG_BX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDB)
#define _XCHG_BX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCB)
#define _XCHG_BX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD3)
#define _XCHG_BX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFB)
#define _XCHG_BX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF3)
#define _XCHG_BX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEB)
#define _XCHG_BX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE3)
#define _XCHG_BX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC3)
#define _XCHG_BX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCB)
#define _XCHG_BX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD3)
#define _XCHG_BX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDB)
#define _XCHG_BX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE3)
#define _XCHG_BX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEB)
#define _XCHG_BX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF3)
#define _XCHG_BX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFB)

#define _XCHG_CX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC1)
#define _XCHG_CX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD9)
#define _XCHG_CX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC9)
#define _XCHG_CX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD1)
#define _XCHG_CX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF9)
#define _XCHG_CX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF1)
#define _XCHG_CX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE9)
#define _XCHG_CX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE1)
#define _XCHG_CX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC1)
#define _XCHG_CX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC9)
#define _XCHG_CX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD1)
#define _XCHG_CX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD9)
#define _XCHG_CX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE1)
#define _XCHG_CX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE9)
#define _XCHG_CX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF1)
#define _XCHG_CX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF9)

#define _XCHG_DX_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC2)
#define _XCHG_DX_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDA)
#define _XCHG_DX_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCA)
#define _XCHG_DX_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD2)
#define _XCHG_DX_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFA)
#define _XCHG_DX_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF2)
#define _XCHG_DX_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEA)
#define _XCHG_DX_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE2)
#define _XCHG_DX_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC2)
#define _XCHG_DX_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCA)
#define _XCHG_DX_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD2)
#define _XCHG_DX_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDA)
#define _XCHG_DX_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE2)
#define _XCHG_DX_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEA)
#define _XCHG_DX_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF2)
#define _XCHG_DX_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFA)

#define _XCHG_DI_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC7)
#define _XCHG_DI_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDF)
#define _XCHG_DI_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCF)
#define _XCHG_DI_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD7)
#define _XCHG_DI_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFF)
#define _XCHG_DI_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF7)
#define _XCHG_DI_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEF)
#define _XCHG_DI_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE7)
#define _XCHG_DI_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC7)
#define _XCHG_DI_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCF)
#define _XCHG_DI_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD7)
#define _XCHG_DI_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDF)
#define _XCHG_DI_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE7)
#define _XCHG_DI_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEF)
#define _XCHG_DI_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF7)
#define _XCHG_DI_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFF)

#define _XCHG_SI_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC6)
#define _XCHG_SI_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDE)
#define _XCHG_SI_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCE)
#define _XCHG_SI_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD6)
#define _XCHG_SI_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFE)
#define _XCHG_SI_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF6)
#define _XCHG_SI_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEE)
#define _XCHG_SI_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE6)
#define _XCHG_SI_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC6)
#define _XCHG_SI_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCE)
#define _XCHG_SI_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD6)
#define _XCHG_SI_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDE)
#define _XCHG_SI_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE6)
#define _XCHG_SI_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEE)
#define _XCHG_SI_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF6)
#define _XCHG_SI_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFE)

#define _XCHG_BP_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC5)
#define _XCHG_BP_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDD)
#define _XCHG_BP_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCD)
#define _XCHG_BP_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD5)
#define _XCHG_BP_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFD)
#define _XCHG_BP_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF5)
#define _XCHG_BP_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XED)
#define _XCHG_BP_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE5)
#define _XCHG_BP_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC5)
#define _XCHG_BP_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCD)
#define _XCHG_BP_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD5)
#define _XCHG_BP_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDD)
#define _XCHG_BP_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE5)
#define _XCHG_BP_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XED)
#define _XCHG_BP_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF5)
#define _XCHG_BP_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFD)

#define _XCHG_SP_AX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XC4)
#define _XCHG_SP_BX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XDC)
#define _XCHG_SP_CX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XCC)
#define _XCHG_SP_DX __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XD4)
#define _XCHG_SP_DI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XFC)
#define _XCHG_SP_SI __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XF4)
#define _XCHG_SP_BP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XEC)
#define _XCHG_SP_SP __ASM__OP__(0X66) __ASM__OP__(0X87) __ASM__OP__(0XE4)
#define _XCHG_SP_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC4)
#define _XCHG_SP_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCC)
#define _XCHG_SP_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD4)
#define _XCHG_SP_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDC)
#define _XCHG_SP_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE4)
#define _XCHG_SP_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEC)
#define _XCHG_SP_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF4)
#define _XCHG_SP_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X44)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFC)

#define _XCHG_R8W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC0)
#define _XCHG_R8W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD8)
#define _XCHG_R8W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC8)
#define _XCHG_R8W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD0)
#define _XCHG_R8W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF8)
#define _XCHG_R8W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF0)
#define _XCHG_R8W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE8)
#define _XCHG_R8W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE0)
#define _XCHG_R8W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC0)
#define _XCHG_R8W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC8)
#define _XCHG_R8W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD0)
#define _XCHG_R8W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD8)
#define _XCHG_R8W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE0)
#define _XCHG_R8W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE8)
#define _XCHG_R8W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF0)
#define _XCHG_R8W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF8)

#define _XCHG_R9W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC1)
#define _XCHG_R9W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD9)
#define _XCHG_R9W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC9)
#define _XCHG_R9W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD1)
#define _XCHG_R9W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF9)
#define _XCHG_R9W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF1)
#define _XCHG_R9W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE9)
#define _XCHG_R9W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE1)
#define _XCHG_R9W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC1)
#define _XCHG_R9W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC9)
#define _XCHG_R9W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD1)
#define _XCHG_R9W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD9)
#define _XCHG_R9W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE1)
#define _XCHG_R9W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE9)
#define _XCHG_R9W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF1)
#define _XCHG_R9W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF9)

#define _XCHG_R10W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC2)
#define _XCHG_R10W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDA)
#define _XCHG_R10W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCA)
#define _XCHG_R10W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD2)
#define _XCHG_R10W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFA)
#define _XCHG_R10W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF2)
#define _XCHG_R10W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEA)
#define _XCHG_R10W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE2)
#define _XCHG_R10W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC2)
#define _XCHG_R10W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCA)
#define _XCHG_R10W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD2)
#define _XCHG_R10W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDA)
#define _XCHG_R10W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE2)
#define _XCHG_R10W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEA)
#define _XCHG_R10W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF2)
#define _XCHG_R10W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFA)

#define _XCHG_R11W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC3)
#define _XCHG_R11W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDB)
#define _XCHG_R11W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCB)
#define _XCHG_R11W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD3)
#define _XCHG_R11W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFB)
#define _XCHG_R11W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF3)
#define _XCHG_R11W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEB)
#define _XCHG_R11W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE3)
#define _XCHG_R11W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC3)
#define _XCHG_R11W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCB)
#define _XCHG_R11W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD3)
#define _XCHG_R11W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDB)
#define _XCHG_R11W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE3)
#define _XCHG_R11W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEB)
#define _XCHG_R11W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF3)
#define _XCHG_R11W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFB)

#define _XCHG_R12W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC4)
#define _XCHG_R12W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDC)
#define _XCHG_R12W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCC)
#define _XCHG_R12W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD4)
#define _XCHG_R12W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFC)
#define _XCHG_R12W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF4)
#define _XCHG_R12W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEC)
#define _XCHG_R12W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE4)
#define _XCHG_R12W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC4)
#define _XCHG_R12W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCC)
#define _XCHG_R12W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD4)
#define _XCHG_R12W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDC)
#define _XCHG_R12W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE4)
#define _XCHG_R12W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEC)
#define _XCHG_R12W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF4)
#define _XCHG_R12W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFC)

#define _XCHG_R13W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC5)
#define _XCHG_R13W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDD)
#define _XCHG_R13W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCD)
#define _XCHG_R13W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD5)
#define _XCHG_R13W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFD)
#define _XCHG_R13W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF5)
#define _XCHG_R13W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XED)
#define _XCHG_R13W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE5)
#define _XCHG_R13W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC5)
#define _XCHG_R13W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCD)
#define _XCHG_R13W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD5)
#define _XCHG_R13W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDD)
#define _XCHG_R13W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE5)
#define _XCHG_R13W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XED)
#define _XCHG_R13W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF5)
#define _XCHG_R13W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFD)

#define _XCHG_R14W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC6)
#define _XCHG_R14W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDE)
#define _XCHG_R14W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCE)
#define _XCHG_R14W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD6)
#define _XCHG_R14W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFE)
#define _XCHG_R14W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF6)
#define _XCHG_R14W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEE)
#define _XCHG_R14W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE6)
#define _XCHG_R14W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC6)
#define _XCHG_R14W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCE)
#define _XCHG_R14W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD6)
#define _XCHG_R14W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDE)
#define _XCHG_R14W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE6)
#define _XCHG_R14W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEE)
#define _XCHG_R14W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF6)
#define _XCHG_R14W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFE)

#define _XCHG_R15W_AX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC7)
#define _XCHG_R15W_BX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDF)
#define _XCHG_R15W_CX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCF)
#define _XCHG_R15W_DX \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD7)
#define _XCHG_R15W_DI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFF)
#define _XCHG_R15W_SI \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF7)
#define _XCHG_R15W_BP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEF)
#define _XCHG_R15W_SP \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X41)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE7)
#define _XCHG_R15W_R8W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XC7)
#define _XCHG_R15W_R9W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XCF)
#define _XCHG_R15W_R10W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XD7)
#define _XCHG_R15W_R11W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XDF)
#define _XCHG_R15W_R12W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XE7)
#define _XCHG_R15W_R13W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XEF)
#define _XCHG_R15W_R14W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XF7)
#define _XCHG_R15W_R15W \
	__ASM__OP__(0X66)\
	__ASM__OP__(0X45)\
	__ASM__OP__(0X87)\
	__ASM__OP__(0XFF)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
