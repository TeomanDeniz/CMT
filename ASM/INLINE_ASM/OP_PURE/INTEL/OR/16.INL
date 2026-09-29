#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define OR_AL_AL _OR_AL_AL
#define OR_AL_BL _OR_AL_BL
#define OR_AL_CL _OR_AL_CL
#define OR_AL_DL _OR_AL_DL

#define OR_BL_AL _OR_BL_AL
#define OR_BL_BL _OR_BL_BL
#define OR_BL_CL _OR_BL_CL
#define OR_BL_DL _OR_BL_DL

#define OR_CL_AL _OR_CL_AL
#define OR_CL_BL _OR_CL_BL
#define OR_CL_CL _OR_CL_CL
#define OR_CL_DL _OR_CL_DL

#define OR_DL_AL _OR_DL_AL
#define OR_DL_BL _OR_DL_BL
#define OR_DL_CL _OR_DL_CL
#define OR_DL_DL _OR_DL_DL

#define OR_AL_(VALUE) _OR_AL_(VALUE)
#define OR_BL_(VALUE) _OR_BL_(VALUE)
#define OR_CL_(VALUE) _OR_CL_(VALUE)
#define OR_DL_(VALUE) _OR_DL_(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AL_AL _OR_AL_AL
#define OR_AL_BL _OR_AL_BL
#define OR_AL_CL _OR_AL_CL
#define OR_AL_DL _OR_AL_DL

#define OR_BL_AL _OR_BL_AL
#define OR_BL_BL _OR_BL_BL
#define OR_BL_CL _OR_BL_CL
#define OR_BL_DL _OR_BL_DL

#define OR_CL_AL _OR_CL_AL
#define OR_CL_BL _OR_CL_BL
#define OR_CL_CL _OR_CL_CL
#define OR_CL_DL _OR_CL_DL

#define OR_DL_AL _OR_DL_AL
#define OR_DL_BL _OR_DL_BL
#define OR_DL_CL _OR_DL_CL
#define OR_DL_DL _OR_DL_DL

#define OR_AL_(VALUE) _OR_AL_(VALUE)
#define OR_BL_(VALUE) _OR_BL_(VALUE)
#define OR_CL_(VALUE) _OR_CL_(VALUE)
#define OR_DL_(VALUE) _OR_DL_(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AL_AL _OR_AL_AL
#define OR_AL_BL _OR_AL_BL
#define OR_AL_CL _OR_AL_CL
#define OR_AL_DL _OR_AL_DL
#define OR_AL_DIL _OR_AL_DIL
#define OR_AL_SIL _OR_AL_SIL
#define OR_AL_BPL _OR_AL_BPL
#define OR_AL_SPL _OR_AL_SPL
#define OR_AL_R8B _OR_AL_R8B
#define OR_AL_R9B _OR_AL_R9B
#define OR_AL_R10B _OR_AL_R10B
#define OR_AL_R11B _OR_AL_R11B
#define OR_AL_R12B _OR_AL_R12B
#define OR_AL_R13B _OR_AL_R13B
#define OR_AL_R14B _OR_AL_R14B
#define OR_AL_R15B _OR_AL_R15B

#define OR_BL_AL _OR_BL_AL
#define OR_BL_BL _OR_BL_BL
#define OR_BL_CL _OR_BL_CL
#define OR_BL_DL _OR_BL_DL
#define OR_BL_DIL _OR_BL_DIL
#define OR_BL_SIL _OR_BL_SIL
#define OR_BL_BPL _OR_BL_BPL
#define OR_BL_SPL _OR_BL_SPL
#define OR_BL_R8B _OR_BL_R8B
#define OR_BL_R9B _OR_BL_R9B
#define OR_BL_R10B _OR_BL_R10B
#define OR_BL_R11B _OR_BL_R11B
#define OR_BL_R12B _OR_BL_R12B
#define OR_BL_R13B _OR_BL_R13B
#define OR_BL_R14B _OR_BL_R14B
#define OR_BL_R15B _OR_BL_R15B

#define OR_CL_AL _OR_CL_AL
#define OR_CL_BL _OR_CL_BL
#define OR_CL_CL _OR_CL_CL
#define OR_CL_DL _OR_CL_DL
#define OR_CL_DIL _OR_CL_DIL
#define OR_CL_SIL _OR_CL_SIL
#define OR_CL_BPL _OR_CL_BPL
#define OR_CL_SPL _OR_CL_SPL
#define OR_CL_R8B _OR_CL_R8B
#define OR_CL_R9B _OR_CL_R9B
#define OR_CL_R10B _OR_CL_R10B
#define OR_CL_R11B _OR_CL_R11B
#define OR_CL_R12B _OR_CL_R12B
#define OR_CL_R13B _OR_CL_R13B
#define OR_CL_R14B _OR_CL_R14B
#define OR_CL_R15B _OR_CL_R15B

#define OR_DL_AL _OR_DL_AL
#define OR_DL_BL _OR_DL_BL
#define OR_DL_CL _OR_DL_CL
#define OR_DL_DL _OR_DL_DL
#define OR_DL_DIL _OR_DL_DIL
#define OR_DL_SIL _OR_DL_SIL
#define OR_DL_BPL _OR_DL_BPL
#define OR_DL_SPL _OR_DL_SPL
#define OR_DL_R8B _OR_DL_R8B
#define OR_DL_R9B _OR_DL_R9B
#define OR_DL_R10B _OR_DL_R10B
#define OR_DL_R11B _OR_DL_R11B
#define OR_DL_R12B _OR_DL_R12B
#define OR_DL_R13B _OR_DL_R13B
#define OR_DL_R14B _OR_DL_R14B
#define OR_DL_R15B _OR_DL_R15B

#define OR_DIL_AL _OR_DIL_AL
#define OR_DIL_BL _OR_DIL_BL
#define OR_DIL_CL _OR_DIL_CL
#define OR_DIL_DL _OR_DIL_DL
#define OR_DIL_DIL _OR_DIL_DIL
#define OR_DIL_SIL _OR_DIL_SIL
#define OR_DIL_BPL _OR_DIL_BPL
#define OR_DIL_SPL _OR_DIL_SPL
#define OR_DIL_R8B _OR_DIL_R8B
#define OR_DIL_R9B _OR_DIL_R9B
#define OR_DIL_R10B _OR_DIL_R10B
#define OR_DIL_R11B _OR_DIL_R11B
#define OR_DIL_R12B _OR_DIL_R12B
#define OR_DIL_R13B _OR_DIL_R13B
#define OR_DIL_R14B _OR_DIL_R14B
#define OR_DIL_R15B _OR_DIL_R15B

#define OR_SIL_AL _OR_SIL_AL
#define OR_SIL_BL _OR_SIL_BL
#define OR_SIL_CL _OR_SIL_CL
#define OR_SIL_DL _OR_SIL_DL
#define OR_SIL_DIL _OR_SIL_DIL
#define OR_SIL_SIL _OR_SIL_SIL
#define OR_SIL_BPL _OR_SIL_BPL
#define OR_SIL_SPL _OR_SIL_SPL
#define OR_SIL_R8B _OR_SIL_R8B
#define OR_SIL_R9B _OR_SIL_R9B
#define OR_SIL_R10B _OR_SIL_R10B
#define OR_SIL_R11B _OR_SIL_R11B
#define OR_SIL_R12B _OR_SIL_R12B
#define OR_SIL_R13B _OR_SIL_R13B
#define OR_SIL_R14B _OR_SIL_R14B
#define OR_SIL_R15B _OR_SIL_R15B

#define OR_BPL_AL _OR_BPL_AL
#define OR_BPL_BL _OR_BPL_BL
#define OR_BPL_CL _OR_BPL_CL
#define OR_BPL_DL _OR_BPL_DL
#define OR_BPL_DIL _OR_BPL_DIL
#define OR_BPL_SIL _OR_BPL_SIL
#define OR_BPL_BPL _OR_BPL_BPL
#define OR_BPL_SPL _OR_BPL_SPL
#define OR_BPL_R8B _OR_BPL_R8B
#define OR_BPL_R9B _OR_BPL_R9B
#define OR_BPL_R10B _OR_BPL_R10B
#define OR_BPL_R11B _OR_BPL_R11B
#define OR_BPL_R12B _OR_BPL_R12B
#define OR_BPL_R13B _OR_BPL_R13B
#define OR_BPL_R14B _OR_BPL_R14B
#define OR_BPL_R15B _OR_BPL_R15B

#define OR_SPL_AL _OR_SPL_AL
#define OR_SPL_BL _OR_SPL_BL
#define OR_SPL_CL _OR_SPL_CL
#define OR_SPL_DL _OR_SPL_DL
#define OR_SPL_DIL _OR_SPL_DIL
#define OR_SPL_SIL _OR_SPL_SIL
#define OR_SPL_BPL _OR_SPL_BPL
#define OR_SPL_SPL _OR_SPL_SPL
#define OR_SPL_R8B _OR_SPL_R8B
#define OR_SPL_R9B _OR_SPL_R9B
#define OR_SPL_R10B _OR_SPL_R10B
#define OR_SPL_R11B _OR_SPL_R11B
#define OR_SPL_R12B _OR_SPL_R12B
#define OR_SPL_R13B _OR_SPL_R13B
#define OR_SPL_R14B _OR_SPL_R14B
#define OR_SPL_R15B _OR_SPL_R15B

#define OR_R8B_AL _OR_R8B_AL
#define OR_R8B_BL _OR_R8B_BL
#define OR_R8B_CL _OR_R8B_CL
#define OR_R8B_DL _OR_R8B_DL
#define OR_R8B_DIL _OR_R8B_DIL
#define OR_R8B_SIL _OR_R8B_SIL
#define OR_R8B_BPL _OR_R8B_BPL
#define OR_R8B_SPL _OR_R8B_SPL
#define OR_R8B_R8B _OR_R8B_R8B
#define OR_R8B_R9B _OR_R8B_R9B
#define OR_R8B_R10B _OR_R8B_R10B
#define OR_R8B_R11B _OR_R8B_R11B
#define OR_R8B_R12B _OR_R8B_R12B
#define OR_R8B_R13B _OR_R8B_R13B
#define OR_R8B_R14B _OR_R8B_R14B
#define OR_R8B_R15B _OR_R8B_R15B

#define OR_R9B_AL _OR_R9B_AL
#define OR_R9B_BL _OR_R9B_BL
#define OR_R9B_CL _OR_R9B_CL
#define OR_R9B_DL _OR_R9B_DL
#define OR_R9B_DIL _OR_R9B_DIL
#define OR_R9B_SIL _OR_R9B_SIL
#define OR_R9B_BPL _OR_R9B_BPL
#define OR_R9B_SPL _OR_R9B_SPL
#define OR_R9B_R8B _OR_R9B_R8B
#define OR_R9B_R9B _OR_R9B_R9B
#define OR_R9B_R10B _OR_R9B_R10B
#define OR_R9B_R11B _OR_R9B_R11B
#define OR_R9B_R12B _OR_R9B_R12B
#define OR_R9B_R13B _OR_R9B_R13B
#define OR_R9B_R14B _OR_R9B_R14B
#define OR_R9B_R15B _OR_R9B_R15B

#define OR_R10B_AL _OR_R10B_AL
#define OR_R10B_BL _OR_R10B_BL
#define OR_R10B_CL _OR_R10B_CL
#define OR_R10B_DL _OR_R10B_DL
#define OR_R10B_DIL _OR_R10B_DIL
#define OR_R10B_SIL _OR_R10B_SIL
#define OR_R10B_BPL _OR_R10B_BPL
#define OR_R10B_SPL _OR_R10B_SPL
#define OR_R10B_R8B _OR_R10B_R8B
#define OR_R10B_R9B _OR_R10B_R9B
#define OR_R10B_R10B _OR_R10B_R10B
#define OR_R10B_R11B _OR_R10B_R11B
#define OR_R10B_R12B _OR_R10B_R12B
#define OR_R10B_R13B _OR_R10B_R13B
#define OR_R10B_R14B _OR_R10B_R14B
#define OR_R10B_R15B _OR_R10B_R15B

#define OR_R11B_AL _OR_R11B_AL
#define OR_R11B_BL _OR_R11B_BL
#define OR_R11B_CL _OR_R11B_CL
#define OR_R11B_DL _OR_R11B_DL
#define OR_R11B_DIL _OR_R11B_DIL
#define OR_R11B_SIL _OR_R11B_SIL
#define OR_R11B_BPL _OR_R11B_BPL
#define OR_R11B_SPL _OR_R11B_SPL
#define OR_R11B_R8B _OR_R11B_R8B
#define OR_R11B_R9B _OR_R11B_R9B
#define OR_R11B_R10B _OR_R11B_R10B
#define OR_R11B_R11B _OR_R11B_R11B
#define OR_R11B_R12B _OR_R11B_R12B
#define OR_R11B_R13B _OR_R11B_R13B
#define OR_R11B_R14B _OR_R11B_R14B
#define OR_R11B_R15B _OR_R11B_R15B

#define OR_R12B_AL _OR_R12B_AL
#define OR_R12B_BL _OR_R12B_BL
#define OR_R12B_CL _OR_R12B_CL
#define OR_R12B_DL _OR_R12B_DL
#define OR_R12B_DIL _OR_R12B_DIL
#define OR_R12B_SIL _OR_R12B_SIL
#define OR_R12B_BPL _OR_R12B_BPL
#define OR_R12B_SPL _OR_R12B_SPL
#define OR_R12B_R8B _OR_R12B_R8B
#define OR_R12B_R9B _OR_R12B_R9B
#define OR_R12B_R10B _OR_R12B_R10B
#define OR_R12B_R11B _OR_R12B_R11B
#define OR_R12B_R12B _OR_R12B_R12B
#define OR_R12B_R13B _OR_R12B_R13B
#define OR_R12B_R14B _OR_R12B_R14B
#define OR_R12B_R15B _OR_R12B_R15B

#define OR_R13B_AL _OR_R13B_AL
#define OR_R13B_BL _OR_R13B_BL
#define OR_R13B_CL _OR_R13B_CL
#define OR_R13B_DL _OR_R13B_DL
#define OR_R13B_DIL _OR_R13B_DIL
#define OR_R13B_SIL _OR_R13B_SIL
#define OR_R13B_BPL _OR_R13B_BPL
#define OR_R13B_SPL _OR_R13B_SPL
#define OR_R13B_R8B _OR_R13B_R8B
#define OR_R13B_R9B _OR_R13B_R9B
#define OR_R13B_R10B _OR_R13B_R10B
#define OR_R13B_R11B _OR_R13B_R11B
#define OR_R13B_R12B _OR_R13B_R12B
#define OR_R13B_R13B _OR_R13B_R13B
#define OR_R13B_R14B _OR_R13B_R14B
#define OR_R13B_R15B _OR_R13B_R15B

#define OR_R14B_AL _OR_R14B_AL
#define OR_R14B_BL _OR_R14B_BL
#define OR_R14B_CL _OR_R14B_CL
#define OR_R14B_DL _OR_R14B_DL
#define OR_R14B_DIL _OR_R14B_DIL
#define OR_R14B_SIL _OR_R14B_SIL
#define OR_R14B_BPL _OR_R14B_BPL
#define OR_R14B_SPL _OR_R14B_SPL
#define OR_R14B_R8B _OR_R14B_R8B
#define OR_R14B_R9B _OR_R14B_R9B
#define OR_R14B_R10B _OR_R14B_R10B
#define OR_R14B_R11B _OR_R14B_R11B
#define OR_R14B_R12B _OR_R14B_R12B
#define OR_R14B_R13B _OR_R14B_R13B
#define OR_R14B_R14B _OR_R14B_R14B
#define OR_R14B_R15B _OR_R14B_R15B

#define OR_R15B_AL _OR_R15B_AL
#define OR_R15B_BL _OR_R15B_BL
#define OR_R15B_CL _OR_R15B_CL
#define OR_R15B_DL _OR_R15B_DL
#define OR_R15B_DIL _OR_R15B_DIL
#define OR_R15B_SIL _OR_R15B_SIL
#define OR_R15B_BPL _OR_R15B_BPL
#define OR_R15B_SPL _OR_R15B_SPL
#define OR_R15B_R8B _OR_R15B_R8B
#define OR_R15B_R9B _OR_R15B_R9B
#define OR_R15B_R10B _OR_R15B_R10B
#define OR_R15B_R11B _OR_R15B_R11B
#define OR_R15B_R12B _OR_R15B_R12B
#define OR_R15B_R13B _OR_R15B_R13B
#define OR_R15B_R14B _OR_R15B_R14B
#define OR_R15B_R15B _OR_R15B_R15B

#define OR_AL_(VALUE) _OR_AL_(VALUE)
#define OR_BL_(VALUE) _OR_BL_(VALUE)
#define OR_CL_(VALUE) _OR_CL_(VALUE)
#define OR_DL_(VALUE) _OR_DL_(VALUE)
#define OR_DIL_(VALUE) _OR_DIL_(VALUE)
#define OR_SIL_(VALUE) _OR_SIL_(VALUE)
#define OR_BPL_(VALUE) _OR_BPL_(VALUE)
#define OR_SPL_(VALUE) _OR_SPL_(VALUE)
#define OR_R8B_(VALUE) _OR_R8B_(VALUE)
#define OR_R9B_(VALUE) _OR_R9B_(VALUE)
#define OR_R10B_(VALUE) _OR_R10B_(VALUE)
#define OR_R11B_(VALUE) _OR_R11B_(VALUE)
#define OR_R12B_(VALUE) _OR_R12B_(VALUE)
#define OR_R13B_(VALUE) _OR_R13B_(VALUE)
#define OR_R14B_(VALUE) _OR_R14B_(VALUE)
#define OR_R15B_(VALUE) _OR_R15B_(VALUE)
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define OR_AX_AX _OR_AX_AX
#define OR_AX_BX _OR_AX_BX
#define OR_AX_CX _OR_AX_CX
#define OR_AX_DX _OR_AX_DX
#define OR_AX_DI _OR_AX_DI
#define OR_AX_SI _OR_AX_SI
#define OR_AX_BP _OR_AX_BP
#define OR_AX_SP _OR_AX_SP

#define OR_BX_AX _OR_BX_AX
#define OR_BX_BX _OR_BX_BX
#define OR_BX_CX _OR_BX_CX
#define OR_BX_DX _OR_BX_DX
#define OR_BX_DI _OR_BX_DI
#define OR_BX_SI _OR_BX_SI
#define OR_BX_BP _OR_BX_BP
#define OR_BX_SP _OR_BX_SP

#define OR_CX_AX _OR_CX_AX
#define OR_CX_BX _OR_CX_BX
#define OR_CX_CX _OR_CX_CX
#define OR_CX_DX _OR_CX_DX
#define OR_CX_DI _OR_CX_DI
#define OR_CX_SI _OR_CX_SI
#define OR_CX_BP _OR_CX_BP
#define OR_CX_SP _OR_CX_SP

#define OR_DX_AX _OR_DX_AX
#define OR_DX_BX _OR_DX_BX
#define OR_DX_CX _OR_DX_CX
#define OR_DX_DX _OR_DX_DX
#define OR_DX_DI _OR_DX_DI
#define OR_DX_SI _OR_DX_SI
#define OR_DX_BP _OR_DX_BP
#define OR_DX_SP _OR_DX_SP

#define OR_DI_AX _OR_DI_AX
#define OR_DI_BX _OR_DI_BX
#define OR_DI_CX _OR_DI_CX
#define OR_DI_DX _OR_DI_DX
#define OR_DI_DI _OR_DI_DI
#define OR_DI_SI _OR_DI_SI
#define OR_DI_BP _OR_DI_BP
#define OR_DI_SP _OR_DI_SP

#define OR_SI_AX _OR_SI_AX
#define OR_SI_BX _OR_SI_BX
#define OR_SI_CX _OR_SI_CX
#define OR_SI_DX _OR_SI_DX
#define OR_SI_DI _OR_SI_DI
#define OR_SI_SI _OR_SI_SI
#define OR_SI_BP _OR_SI_BP
#define OR_SI_SP _OR_SI_SP

#define OR_BP_AX _OR_BP_AX
#define OR_BP_BX _OR_BP_BX
#define OR_BP_CX _OR_BP_CX
#define OR_BP_DX _OR_BP_DX
#define OR_BP_DI _OR_BP_DI
#define OR_BP_SI _OR_BP_SI
#define OR_BP_BP _OR_BP_BP
#define OR_BP_SP _OR_BP_SP

#define OR_SP_AX _OR_SP_AX
#define OR_SP_BX _OR_SP_BX
#define OR_SP_CX _OR_SP_CX
#define OR_SP_DX _OR_SP_DX
#define OR_SP_DI _OR_SP_DI
#define OR_SP_SI _OR_SP_SI
#define OR_SP_BP _OR_SP_BP
#define OR_SP_SP _OR_SP_SP

#define OR_AX_(VALUE) _OR_AX_(VALUE)
#define OR_BX_(VALUE) _OR_BX_(VALUE)
#define OR_CX_(VALUE) _OR_CX_(VALUE)
#define OR_DX_(VALUE) _OR_DX_(VALUE)
#define OR_DI_(VALUE) _OR_DI_(VALUE)
#define OR_SI_(VALUE) _OR_SI_(VALUE)
#define OR_BP_(VALUE) _OR_BP_(VALUE)
#define OR_SP_(VALUE) _OR_SP_(VALUE)
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AX_AX _OR_AX_AX
#define OR_AX_BX _OR_AX_BX
#define OR_AX_CX _OR_AX_CX
#define OR_AX_DX _OR_AX_DX
#define OR_AX_DI _OR_AX_DI
#define OR_AX_SI _OR_AX_SI
#define OR_AX_BP _OR_AX_BP
#define OR_AX_SP _OR_AX_SP

#define OR_BX_AX _OR_BX_AX
#define OR_BX_BX _OR_BX_BX
#define OR_BX_CX _OR_BX_CX
#define OR_BX_DX _OR_BX_DX
#define OR_BX_DI _OR_BX_DI
#define OR_BX_SI _OR_BX_SI
#define OR_BX_BP _OR_BX_BP
#define OR_BX_SP _OR_BX_SP

#define OR_CX_AX _OR_CX_AX
#define OR_CX_BX _OR_CX_BX
#define OR_CX_CX _OR_CX_CX
#define OR_CX_DX _OR_CX_DX
#define OR_CX_DI _OR_CX_DI
#define OR_CX_SI _OR_CX_SI
#define OR_CX_BP _OR_CX_BP
#define OR_CX_SP _OR_CX_SP

#define OR_DX_AX _OR_DX_AX
#define OR_DX_BX _OR_DX_BX
#define OR_DX_CX _OR_DX_CX
#define OR_DX_DX _OR_DX_DX
#define OR_DX_DI _OR_DX_DI
#define OR_DX_SI _OR_DX_SI
#define OR_DX_BP _OR_DX_BP
#define OR_DX_SP _OR_DX_SP

#define OR_DI_AX _OR_DI_AX
#define OR_DI_BX _OR_DI_BX
#define OR_DI_CX _OR_DI_CX
#define OR_DI_DX _OR_DI_DX
#define OR_DI_DI _OR_DI_DI
#define OR_DI_SI _OR_DI_SI
#define OR_DI_BP _OR_DI_BP
#define OR_DI_SP _OR_DI_SP

#define OR_SI_AX _OR_SI_AX
#define OR_SI_BX _OR_SI_BX
#define OR_SI_CX _OR_SI_CX
#define OR_SI_DX _OR_SI_DX
#define OR_SI_DI _OR_SI_DI
#define OR_SI_SI _OR_SI_SI
#define OR_SI_BP _OR_SI_BP
#define OR_SI_SP _OR_SI_SP

#define OR_BP_AX _OR_BP_AX
#define OR_BP_BX _OR_BP_BX
#define OR_BP_CX _OR_BP_CX
#define OR_BP_DX _OR_BP_DX
#define OR_BP_DI _OR_BP_DI
#define OR_BP_SI _OR_BP_SI
#define OR_BP_BP _OR_BP_BP
#define OR_BP_SP _OR_BP_SP

#define OR_SP_AX _OR_SP_AX
#define OR_SP_BX _OR_SP_BX
#define OR_SP_CX _OR_SP_CX
#define OR_SP_DX _OR_SP_DX
#define OR_SP_DI _OR_SP_DI
#define OR_SP_SI _OR_SP_SI
#define OR_SP_BP _OR_SP_BP
#define OR_SP_SP _OR_SP_SP

#define OR_AX_(VALUE) _OR_AX_(VALUE)
#define OR_BX_(VALUE) _OR_BX_(VALUE)
#define OR_CX_(VALUE) _OR_CX_(VALUE)
#define OR_DX_(VALUE) _OR_DX_(VALUE)
#define OR_DI_(VALUE) _OR_DI_(VALUE)
#define OR_SI_(VALUE) _OR_SI_(VALUE)
#define OR_BP_(VALUE) _OR_BP_(VALUE)
#define OR_SP_(VALUE) _OR_SP_(VALUE)
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AX_AX _OR_AX_AX
#define OR_AX_BX _OR_AX_BX
#define OR_AX_CX _OR_AX_CX
#define OR_AX_DX _OR_AX_DX
#define OR_AX_DI _OR_AX_DI
#define OR_AX_SI _OR_AX_SI
#define OR_AX_BP _OR_AX_BP
#define OR_AX_SP _OR_AX_SP
#define OR_AX_R8W _OR_AX_R8W
#define OR_AX_R9W _OR_AX_R9W
#define OR_AX_R10W _OR_AX_R10W
#define OR_AX_R11W _OR_AX_R11W
#define OR_AX_R12W _OR_AX_R12W
#define OR_AX_R13W _OR_AX_R13W
#define OR_AX_R14W _OR_AX_R14W
#define OR_AX_R15W _OR_AX_R15W

#define OR_BX_AX _OR_BX_AX
#define OR_BX_BX _OR_BX_BX
#define OR_BX_CX _OR_BX_CX
#define OR_BX_DX _OR_BX_DX
#define OR_BX_DI _OR_BX_DI
#define OR_BX_SI _OR_BX_SI
#define OR_BX_BP _OR_BX_BP
#define OR_BX_SP _OR_BX_SP
#define OR_BX_R8W _OR_BX_R8W
#define OR_BX_R9W _OR_BX_R9W
#define OR_BX_R10W _OR_BX_R10W
#define OR_BX_R11W _OR_BX_R11W
#define OR_BX_R12W _OR_BX_R12W
#define OR_BX_R13W _OR_BX_R13W
#define OR_BX_R14W _OR_BX_R14W
#define OR_BX_R15W _OR_BX_R15W

#define OR_CX_AX _OR_CX_AX
#define OR_CX_BX _OR_CX_BX
#define OR_CX_CX _OR_CX_CX
#define OR_CX_DX _OR_CX_DX
#define OR_CX_DI _OR_CX_DI
#define OR_CX_SI _OR_CX_SI
#define OR_CX_BP _OR_CX_BP
#define OR_CX_SP _OR_CX_SP
#define OR_CX_R8W _OR_CX_R8W
#define OR_CX_R9W _OR_CX_R9W
#define OR_CX_R10W _OR_CX_R10W
#define OR_CX_R11W _OR_CX_R11W
#define OR_CX_R12W _OR_CX_R12W
#define OR_CX_R13W _OR_CX_R13W
#define OR_CX_R14W _OR_CX_R14W
#define OR_CX_R15W _OR_CX_R15W

#define OR_DX_AX _OR_DX_AX
#define OR_DX_BX _OR_DX_BX
#define OR_DX_CX _OR_DX_CX
#define OR_DX_DX _OR_DX_DX
#define OR_DX_DI _OR_DX_DI
#define OR_DX_SI _OR_DX_SI
#define OR_DX_BP _OR_DX_BP
#define OR_DX_SP _OR_DX_SP
#define OR_DX_R8W _OR_DX_R8W
#define OR_DX_R9W _OR_DX_R9W
#define OR_DX_R10W _OR_DX_R10W
#define OR_DX_R11W _OR_DX_R11W
#define OR_DX_R12W _OR_DX_R12W
#define OR_DX_R13W _OR_DX_R13W
#define OR_DX_R14W _OR_DX_R14W
#define OR_DX_R15W _OR_DX_R15W

#define OR_DI_AX _OR_DI_AX
#define OR_DI_BX _OR_DI_BX
#define OR_DI_CX _OR_DI_CX
#define OR_DI_DX _OR_DI_DX
#define OR_DI_DI _OR_DI_DI
#define OR_DI_SI _OR_DI_SI
#define OR_DI_BP _OR_DI_BP
#define OR_DI_SP _OR_DI_SP
#define OR_DI_R8W _OR_DI_R8W
#define OR_DI_R9W _OR_DI_R9W
#define OR_DI_R10W _OR_DI_R10W
#define OR_DI_R11W _OR_DI_R11W
#define OR_DI_R12W _OR_DI_R12W
#define OR_DI_R13W _OR_DI_R13W
#define OR_DI_R14W _OR_DI_R14W
#define OR_DI_R15W _OR_DI_R15W

#define OR_SI_AX _OR_SI_AX
#define OR_SI_BX _OR_SI_BX
#define OR_SI_CX _OR_SI_CX
#define OR_SI_DX _OR_SI_DX
#define OR_SI_DI _OR_SI_DI
#define OR_SI_SI _OR_SI_SI
#define OR_SI_BP _OR_SI_BP
#define OR_SI_SP _OR_SI_SP
#define OR_SI_R8W _OR_SI_R8W
#define OR_SI_R9W _OR_SI_R9W
#define OR_SI_R10W _OR_SI_R10W
#define OR_SI_R11W _OR_SI_R11W
#define OR_SI_R12W _OR_SI_R12W
#define OR_SI_R13W _OR_SI_R13W
#define OR_SI_R14W _OR_SI_R14W
#define OR_SI_R15W _OR_SI_R15W

#define OR_BP_AX _OR_BP_AX
#define OR_BP_BX _OR_BP_BX
#define OR_BP_CX _OR_BP_CX
#define OR_BP_DX _OR_BP_DX
#define OR_BP_DI _OR_BP_DI
#define OR_BP_SI _OR_BP_SI
#define OR_BP_BP _OR_BP_BP
#define OR_BP_SP _OR_BP_SP
#define OR_BP_R8W _OR_BP_R8W
#define OR_BP_R9W _OR_BP_R9W
#define OR_BP_R10W _OR_BP_R10W
#define OR_BP_R11W _OR_BP_R11W
#define OR_BP_R12W _OR_BP_R12W
#define OR_BP_R13W _OR_BP_R13W
#define OR_BP_R14W _OR_BP_R14W
#define OR_BP_R15W _OR_BP_R15W

#define OR_SP_AX _OR_SP_AX
#define OR_SP_BX _OR_SP_BX
#define OR_SP_CX _OR_SP_CX
#define OR_SP_DX _OR_SP_DX
#define OR_SP_DI _OR_SP_DI
#define OR_SP_SI _OR_SP_SI
#define OR_SP_BP _OR_SP_BP
#define OR_SP_SP _OR_SP_SP
#define OR_SP_R8W _OR_SP_R8W
#define OR_SP_R9W _OR_SP_R9W
#define OR_SP_R10W _OR_SP_R10W
#define OR_SP_R11W _OR_SP_R11W
#define OR_SP_R12W _OR_SP_R12W
#define OR_SP_R13W _OR_SP_R13W
#define OR_SP_R14W _OR_SP_R14W
#define OR_SP_R15W _OR_SP_R15W

#define OR_R8W_AX _OR_R8W_AX
#define OR_R8W_BX _OR_R8W_BX
#define OR_R8W_CX _OR_R8W_CX
#define OR_R8W_DX _OR_R8W_DX
#define OR_R8W_DI _OR_R8W_DI
#define OR_R8W_SI _OR_R8W_SI
#define OR_R8W_BP _OR_R8W_BP
#define OR_R8W_SP _OR_R8W_SP
#define OR_R8W_R8W _OR_R8W_R8W
#define OR_R8W_R9W _OR_R8W_R9W
#define OR_R8W_R10W _OR_R8W_R10W
#define OR_R8W_R11W _OR_R8W_R11W
#define OR_R8W_R12W _OR_R8W_R12W
#define OR_R8W_R13W _OR_R8W_R13W
#define OR_R8W_R14W _OR_R8W_R14W
#define OR_R8W_R15W _OR_R8W_R15W

#define OR_R9W_AX _OR_R9W_AX
#define OR_R9W_BX _OR_R9W_BX
#define OR_R9W_CX _OR_R9W_CX
#define OR_R9W_DX _OR_R9W_DX
#define OR_R9W_DI _OR_R9W_DI
#define OR_R9W_SI _OR_R9W_SI
#define OR_R9W_BP _OR_R9W_BP
#define OR_R9W_SP _OR_R9W_SP
#define OR_R9W_R8W _OR_R9W_R8W
#define OR_R9W_R9W _OR_R9W_R9W
#define OR_R9W_R10W _OR_R9W_R10W
#define OR_R9W_R11W _OR_R9W_R11W
#define OR_R9W_R12W _OR_R9W_R12W
#define OR_R9W_R13W _OR_R9W_R13W
#define OR_R9W_R14W _OR_R9W_R14W
#define OR_R9W_R15W _OR_R9W_R15W

#define OR_R10W_AX _OR_R10W_AX
#define OR_R10W_BX _OR_R10W_BX
#define OR_R10W_CX _OR_R10W_CX
#define OR_R10W_DX _OR_R10W_DX
#define OR_R10W_DI _OR_R10W_DI
#define OR_R10W_SI _OR_R10W_SI
#define OR_R10W_BP _OR_R10W_BP
#define OR_R10W_SP _OR_R10W_SP
#define OR_R10W_R8W _OR_R10W_R8W
#define OR_R10W_R9W _OR_R10W_R9W
#define OR_R10W_R10W _OR_R10W_R10W
#define OR_R10W_R11W _OR_R10W_R11W
#define OR_R10W_R12W _OR_R10W_R12W
#define OR_R10W_R13W _OR_R10W_R13W
#define OR_R10W_R14W _OR_R10W_R14W
#define OR_R10W_R15W _OR_R10W_R15W

#define OR_R11W_AX _OR_R11W_AX
#define OR_R11W_BX _OR_R11W_BX
#define OR_R11W_CX _OR_R11W_CX
#define OR_R11W_DX _OR_R11W_DX
#define OR_R11W_DI _OR_R11W_DI
#define OR_R11W_SI _OR_R11W_SI
#define OR_R11W_BP _OR_R11W_BP
#define OR_R11W_SP _OR_R11W_SP
#define OR_R11W_R8W _OR_R11W_R8W
#define OR_R11W_R9W _OR_R11W_R9W
#define OR_R11W_R10W _OR_R11W_R10W
#define OR_R11W_R11W _OR_R11W_R11W
#define OR_R11W_R12W _OR_R11W_R12W
#define OR_R11W_R13W _OR_R11W_R13W
#define OR_R11W_R14W _OR_R11W_R14W
#define OR_R11W_R15W _OR_R11W_R15W

#define OR_R12W_AX _OR_R12W_AX
#define OR_R12W_BX _OR_R12W_BX
#define OR_R12W_CX _OR_R12W_CX
#define OR_R12W_DX _OR_R12W_DX
#define OR_R12W_DI _OR_R12W_DI
#define OR_R12W_SI _OR_R12W_SI
#define OR_R12W_BP _OR_R12W_BP
#define OR_R12W_SP _OR_R12W_SP
#define OR_R12W_R8W _OR_R12W_R8W
#define OR_R12W_R9W _OR_R12W_R9W
#define OR_R12W_R10W _OR_R12W_R10W
#define OR_R12W_R11W _OR_R12W_R11W
#define OR_R12W_R12W _OR_R12W_R12W
#define OR_R12W_R13W _OR_R12W_R13W
#define OR_R12W_R14W _OR_R12W_R14W
#define OR_R12W_R15W _OR_R12W_R15W

#define OR_R13W_AX _OR_R13W_AX
#define OR_R13W_BX _OR_R13W_BX
#define OR_R13W_CX _OR_R13W_CX
#define OR_R13W_DX _OR_R13W_DX
#define OR_R13W_DI _OR_R13W_DI
#define OR_R13W_SI _OR_R13W_SI
#define OR_R13W_BP _OR_R13W_BP
#define OR_R13W_SP _OR_R13W_SP
#define OR_R13W_R8W _OR_R13W_R8W
#define OR_R13W_R9W _OR_R13W_R9W
#define OR_R13W_R10W _OR_R13W_R10W
#define OR_R13W_R11W _OR_R13W_R11W
#define OR_R13W_R12W _OR_R13W_R12W
#define OR_R13W_R13W _OR_R13W_R13W
#define OR_R13W_R14W _OR_R13W_R14W
#define OR_R13W_R15W _OR_R13W_R15W

#define OR_R14W_AX _OR_R14W_AX
#define OR_R14W_BX _OR_R14W_BX
#define OR_R14W_CX _OR_R14W_CX
#define OR_R14W_DX _OR_R14W_DX
#define OR_R14W_DI _OR_R14W_DI
#define OR_R14W_SI _OR_R14W_SI
#define OR_R14W_BP _OR_R14W_BP
#define OR_R14W_SP _OR_R14W_SP
#define OR_R14W_R8W _OR_R14W_R8W
#define OR_R14W_R9W _OR_R14W_R9W
#define OR_R14W_R10W _OR_R14W_R10W
#define OR_R14W_R11W _OR_R14W_R11W
#define OR_R14W_R12W _OR_R14W_R12W
#define OR_R14W_R13W _OR_R14W_R13W
#define OR_R14W_R14W _OR_R14W_R14W
#define OR_R14W_R15W _OR_R14W_R15W

#define OR_R15W_AX _OR_R15W_AX
#define OR_R15W_BX _OR_R15W_BX
#define OR_R15W_CX _OR_R15W_CX
#define OR_R15W_DX _OR_R15W_DX
#define OR_R15W_DI _OR_R15W_DI
#define OR_R15W_SI _OR_R15W_SI
#define OR_R15W_BP _OR_R15W_BP
#define OR_R15W_SP _OR_R15W_SP
#define OR_R15W_R8W _OR_R15W_R8W
#define OR_R15W_R9W _OR_R15W_R9W
#define OR_R15W_R10W _OR_R15W_R10W
#define OR_R15W_R11W _OR_R15W_R11W
#define OR_R15W_R12W _OR_R15W_R12W
#define OR_R15W_R13W _OR_R15W_R13W
#define OR_R15W_R14W _OR_R15W_R14W
#define OR_R15W_R15W _OR_R15W_R15W

#define OR_AX_(VALUE) _OR_AX_(VALUE)
#define OR_BX_(VALUE) _OR_BX_(VALUE)
#define OR_CX_(VALUE) _OR_CX_(VALUE)
#define OR_DX_(VALUE) _OR_DX_(VALUE)
#define OR_DI_(VALUE) _OR_DI_(VALUE)
#define OR_SI_(VALUE) _OR_SI_(VALUE)
#define OR_BP_(VALUE) _OR_BP_(VALUE)
#define OR_SP_(VALUE) _OR_SP_(VALUE)
#define OR_R8W_(VALUE) _OR_R8W_(VALUE)
#define OR_R9W_(VALUE) _OR_R9W_(VALUE)
#define OR_R10W_(VALUE) _OR_R10W_(VALUE)
#define OR_R11W_(VALUE) _OR_R11W_(VALUE)
#define OR_R12W_(VALUE) _OR_R12W_(VALUE)
#define OR_R13W_(VALUE) _OR_R13W_(VALUE)
#define OR_R14W_(VALUE) _OR_R14W_(VALUE)
#define OR_R15W_(VALUE) _OR_R15W_(VALUE)
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
