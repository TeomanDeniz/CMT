#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define SBB_AL_AL sbb al, al
#define SBB_AL_BL sbb al, bl
#define SBB_AL_CL sbb al, cl
#define SBB_AL_DL sbb al, dl

#define SBB_BL_AL sbb bl, al
#define SBB_BL_BL sbb bl, bl
#define SBB_BL_CL sbb bl, cl
#define SBB_BL_DL sbb bl, dl

#define SBB_CL_AL sbb cl, al
#define SBB_CL_BL sbb cl, bl
#define SBB_CL_CL sbb cl, cl
#define SBB_CL_DL sbb cl, dl

#define SBB_DL_AL sbb dl, al
#define SBB_DL_BL sbb dl, bl
#define SBB_DL_CL sbb dl, cl
#define SBB_DL_DL sbb dl, dl

#define SBB_AL_(VALUE) sbb al, VALUE
#define SBB_BL_(VALUE) sbb bl, VALUE
#define SBB_CL_(VALUE) sbb cl, VALUE
#define SBB_DL_(VALUE) sbb dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AL_AL sbb al, al
#define SBB_AL_BL sbb al, bl
#define SBB_AL_CL sbb al, cl
#define SBB_AL_DL sbb al, dl

#define SBB_BL_AL sbb bl, al
#define SBB_BL_BL sbb bl, bl
#define SBB_BL_CL sbb bl, cl
#define SBB_BL_DL sbb bl, dl

#define SBB_CL_AL sbb cl, al
#define SBB_CL_BL sbb cl, bl
#define SBB_CL_CL sbb cl, cl
#define SBB_CL_DL sbb cl, dl

#define SBB_DL_AL sbb dl, al
#define SBB_DL_BL sbb dl, bl
#define SBB_DL_CL sbb dl, cl
#define SBB_DL_DL sbb dl, dl

#define SBB_AL_(VALUE) sbb al, VALUE
#define SBB_BL_(VALUE) sbb bl, VALUE
#define SBB_CL_(VALUE) sbb cl, VALUE
#define SBB_DL_(VALUE) sbb dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AL_AL sbb al, al
#define SBB_AL_BL sbb al, bl
#define SBB_AL_CL sbb al, cl
#define SBB_AL_DL sbb al, dl
#define SBB_AL_DIL sbb al, dil
#define SBB_AL_SIL sbb al, sil
#define SBB_AL_BPL sbb al, bpl
#define SBB_AL_SPL sbb al, spl
#define SBB_AL_R8B sbb al, r8b
#define SBB_AL_R9B sbb al, r9b
#define SBB_AL_R10B sbb al, r10b
#define SBB_AL_R11B sbb al, r11b
#define SBB_AL_R12B sbb al, r12b
#define SBB_AL_R13B sbb al, r13b
#define SBB_AL_R14B sbb al, r14b
#define SBB_AL_R15B sbb al, r15b

#define SBB_BL_AL sbb bl, al
#define SBB_BL_BL sbb bl, bl
#define SBB_BL_CL sbb bl, cl
#define SBB_BL_DL sbb bl, dl
#define SBB_BL_DIL sbb bl, dil
#define SBB_BL_SIL sbb bl, sil
#define SBB_BL_BPL sbb bl, bpl
#define SBB_BL_SPL sbb bl, spl
#define SBB_BL_R8B sbb bl, r8b
#define SBB_BL_R9B sbb bl, r9b
#define SBB_BL_R10B sbb bl, r10b
#define SBB_BL_R11B sbb bl, r11b
#define SBB_BL_R12B sbb bl, r12b
#define SBB_BL_R13B sbb bl, r13b
#define SBB_BL_R14B sbb bl, r14b
#define SBB_BL_R15B sbb bl, r15b

#define SBB_CL_AL sbb cl, al
#define SBB_CL_BL sbb cl, bl
#define SBB_CL_CL sbb cl, cl
#define SBB_CL_DL sbb cl, dl
#define SBB_CL_DIL sbb cl, dil
#define SBB_CL_SIL sbb cl, sil
#define SBB_CL_BPL sbb cl, bpl
#define SBB_CL_SPL sbb cl, spl
#define SBB_CL_R8B sbb cl, r8b
#define SBB_CL_R9B sbb cl, r9b
#define SBB_CL_R10B sbb cl, r10b
#define SBB_CL_R11B sbb cl, r11b
#define SBB_CL_R12B sbb cl, r12b
#define SBB_CL_R13B sbb cl, r13b
#define SBB_CL_R14B sbb cl, r14b
#define SBB_CL_R15B sbb cl, r15b

#define SBB_DL_AL sbb dl, al
#define SBB_DL_BL sbb dl, bl
#define SBB_DL_CL sbb dl, cl
#define SBB_DL_DL sbb dl, dl
#define SBB_DL_DIL sbb dl, dil
#define SBB_DL_SIL sbb dl, sil
#define SBB_DL_BPL sbb dl, bpl
#define SBB_DL_SPL sbb dl, spl
#define SBB_DL_R8B sbb dl, r8b
#define SBB_DL_R9B sbb dl, r9b
#define SBB_DL_R10B sbb dl, r10b
#define SBB_DL_R11B sbb dl, r11b
#define SBB_DL_R12B sbb dl, r12b
#define SBB_DL_R13B sbb dl, r13b
#define SBB_DL_R14B sbb dl, r14b
#define SBB_DL_R15B sbb dl, r15b

#define SBB_DIL_AL sbb dil, al
#define SBB_DIL_BL sbb dil, bl
#define SBB_DIL_CL sbb dil, cl
#define SBB_DIL_DL sbb dil, dl
#define SBB_DIL_DIL sbb dil, dil
#define SBB_DIL_SIL sbb dil, sil
#define SBB_DIL_BPL sbb dil, bpl
#define SBB_DIL_SPL sbb dil, spl
#define SBB_DIL_R8B sbb dil, r8b
#define SBB_DIL_R9B sbb dil, r9b
#define SBB_DIL_R10B sbb dil, r10b
#define SBB_DIL_R11B sbb dil, r11b
#define SBB_DIL_R12B sbb dil, r12b
#define SBB_DIL_R13B sbb dil, r13b
#define SBB_DIL_R14B sbb dil, r14b
#define SBB_DIL_R15B sbb dil, r15b

#define SBB_SIL_AL sbb sil, al
#define SBB_SIL_BL sbb sil, bl
#define SBB_SIL_CL sbb sil, cl
#define SBB_SIL_DL sbb sil, dl
#define SBB_SIL_DIL sbb sil, dil
#define SBB_SIL_SIL sbb sil, sil
#define SBB_SIL_BPL sbb sil, bpl
#define SBB_SIL_SPL sbb sil, spl
#define SBB_SIL_R8B sbb sil, r8b
#define SBB_SIL_R9B sbb sil, r9b
#define SBB_SIL_R10B sbb sil, r10b
#define SBB_SIL_R11B sbb sil, r11b
#define SBB_SIL_R12B sbb sil, r12b
#define SBB_SIL_R13B sbb sil, r13b
#define SBB_SIL_R14B sbb sil, r14b
#define SBB_SIL_R15B sbb sil, r15b

#define SBB_BPL_AL sbb bpl, al
#define SBB_BPL_BL sbb bpl, bl
#define SBB_BPL_CL sbb bpl, cl
#define SBB_BPL_DL sbb bpl, dl
#define SBB_BPL_DIL sbb bpl, dil
#define SBB_BPL_SIL sbb bpl, sil
#define SBB_BPL_BPL sbb bpl, bpl
#define SBB_BPL_SPL sbb bpl, spl
#define SBB_BPL_R8B sbb bpl, r8b
#define SBB_BPL_R9B sbb bpl, r9b
#define SBB_BPL_R10B sbb bpl, r10b
#define SBB_BPL_R11B sbb bpl, r11b
#define SBB_BPL_R12B sbb bpl, r12b
#define SBB_BPL_R13B sbb bpl, r13b
#define SBB_BPL_R14B sbb bpl, r14b
#define SBB_BPL_R15B sbb bpl, r15b

#define SBB_SPL_AL sbb spl, al
#define SBB_SPL_BL sbb spl, bl
#define SBB_SPL_CL sbb spl, cl
#define SBB_SPL_DL sbb spl, dl
#define SBB_SPL_DIL sbb spl, dil
#define SBB_SPL_SIL sbb spl, sil
#define SBB_SPL_BPL sbb spl, bpl
#define SBB_SPL_SPL sbb spl, spl
#define SBB_SPL_R8B sbb spl, r8b
#define SBB_SPL_R9B sbb spl, r9b
#define SBB_SPL_R10B sbb spl, r10b
#define SBB_SPL_R11B sbb spl, r11b
#define SBB_SPL_R12B sbb spl, r12b
#define SBB_SPL_R13B sbb spl, r13b
#define SBB_SPL_R14B sbb spl, r14b
#define SBB_SPL_R15B sbb spl, r15b

#define SBB_R8B_AL sbb r8b, al
#define SBB_R8B_BL sbb r8b, bl
#define SBB_R8B_CL sbb r8b, cl
#define SBB_R8B_DL sbb r8b, dl
#define SBB_R8B_DIL sbb r8b, dil
#define SBB_R8B_SIL sbb r8b, sil
#define SBB_R8B_BPL sbb r8b, bpl
#define SBB_R8B_SPL sbb r8b, spl
#define SBB_R8B_R8B sbb r8b, r8b
#define SBB_R8B_R9B sbb r8b, r9b
#define SBB_R8B_R10B sbb r8b, r10b
#define SBB_R8B_R11B sbb r8b, r11b
#define SBB_R8B_R12B sbb r8b, r12b
#define SBB_R8B_R13B sbb r8b, r13b
#define SBB_R8B_R14B sbb r8b, r14b
#define SBB_R8B_R15B sbb r8b, r15b

#define SBB_R9B_AL sbb r9b, al
#define SBB_R9B_BL sbb r9b, bl
#define SBB_R9B_CL sbb r9b, cl
#define SBB_R9B_DL sbb r9b, dl
#define SBB_R9B_DIL sbb r9b, dil
#define SBB_R9B_SIL sbb r9b, sil
#define SBB_R9B_BPL sbb r9b, bpl
#define SBB_R9B_SPL sbb r9b, spl
#define SBB_R9B_R8B sbb r9b, r8b
#define SBB_R9B_R9B sbb r9b, r9b
#define SBB_R9B_R10B sbb r9b, r10b
#define SBB_R9B_R11B sbb r9b, r11b
#define SBB_R9B_R12B sbb r9b, r12b
#define SBB_R9B_R13B sbb r9b, r13b
#define SBB_R9B_R14B sbb r9b, r14b
#define SBB_R9B_R15B sbb r9b, r15b

#define SBB_R10B_AL sbb r10b, al
#define SBB_R10B_BL sbb r10b, bl
#define SBB_R10B_CL sbb r10b, cl
#define SBB_R10B_DL sbb r10b, dl
#define SBB_R10B_DIL sbb r10b, dil
#define SBB_R10B_SIL sbb r10b, sil
#define SBB_R10B_BPL sbb r10b, bpl
#define SBB_R10B_SPL sbb r10b, spl
#define SBB_R10B_R8B sbb r10b, r8b
#define SBB_R10B_R9B sbb r10b, r9b
#define SBB_R10B_R10B sbb r10b, r10b
#define SBB_R10B_R11B sbb r10b, r11b
#define SBB_R10B_R12B sbb r10b, r12b
#define SBB_R10B_R13B sbb r10b, r13b
#define SBB_R10B_R14B sbb r10b, r14b
#define SBB_R10B_R15B sbb r10b, r15b

#define SBB_R11B_AL sbb r11b, al
#define SBB_R11B_BL sbb r11b, bl
#define SBB_R11B_CL sbb r11b, cl
#define SBB_R11B_DL sbb r11b, dl
#define SBB_R11B_DIL sbb r11b, dil
#define SBB_R11B_SIL sbb r11b, sil
#define SBB_R11B_BPL sbb r11b, bpl
#define SBB_R11B_SPL sbb r11b, spl
#define SBB_R11B_R8B sbb r11b, r8b
#define SBB_R11B_R9B sbb r11b, r9b
#define SBB_R11B_R10B sbb r11b, r10b
#define SBB_R11B_R11B sbb r11b, r11b
#define SBB_R11B_R12B sbb r11b, r12b
#define SBB_R11B_R13B sbb r11b, r13b
#define SBB_R11B_R14B sbb r11b, r14b
#define SBB_R11B_R15B sbb r11b, r15b

#define SBB_R12B_AL sbb r12b, al
#define SBB_R12B_BL sbb r12b, bl
#define SBB_R12B_CL sbb r12b, cl
#define SBB_R12B_DL sbb r12b, dl
#define SBB_R12B_DIL sbb r12b, dil
#define SBB_R12B_SIL sbb r12b, sil
#define SBB_R12B_BPL sbb r12b, bpl
#define SBB_R12B_SPL sbb r12b, spl
#define SBB_R12B_R8B sbb r12b, r8b
#define SBB_R12B_R9B sbb r12b, r9b
#define SBB_R12B_R10B sbb r12b, r10b
#define SBB_R12B_R11B sbb r12b, r11b
#define SBB_R12B_R12B sbb r12b, r12b
#define SBB_R12B_R13B sbb r12b, r13b
#define SBB_R12B_R14B sbb r12b, r14b
#define SBB_R12B_R15B sbb r12b, r15b

#define SBB_R13B_AL sbb r13b, al
#define SBB_R13B_BL sbb r13b, bl
#define SBB_R13B_CL sbb r13b, cl
#define SBB_R13B_DL sbb r13b, dl
#define SBB_R13B_DIL sbb r13b, dil
#define SBB_R13B_SIL sbb r13b, sil
#define SBB_R13B_BPL sbb r13b, bpl
#define SBB_R13B_SPL sbb r13b, spl
#define SBB_R13B_R8B sbb r13b, r8b
#define SBB_R13B_R9B sbb r13b, r9b
#define SBB_R13B_R10B sbb r13b, r10b
#define SBB_R13B_R11B sbb r13b, r11b
#define SBB_R13B_R12B sbb r13b, r12b
#define SBB_R13B_R13B sbb r13b, r13b
#define SBB_R13B_R14B sbb r13b, r14b
#define SBB_R13B_R15B sbb r13b, r15b

#define SBB_R14B_AL sbb r14b, al
#define SBB_R14B_BL sbb r14b, bl
#define SBB_R14B_CL sbb r14b, cl
#define SBB_R14B_DL sbb r14b, dl
#define SBB_R14B_DIL sbb r14b, dil
#define SBB_R14B_SIL sbb r14b, sil
#define SBB_R14B_BPL sbb r14b, bpl
#define SBB_R14B_SPL sbb r14b, spl
#define SBB_R14B_R8B sbb r14b, r8b
#define SBB_R14B_R9B sbb r14b, r9b
#define SBB_R14B_R10B sbb r14b, r10b
#define SBB_R14B_R11B sbb r14b, r11b
#define SBB_R14B_R12B sbb r14b, r12b
#define SBB_R14B_R13B sbb r14b, r13b
#define SBB_R14B_R14B sbb r14b, r14b
#define SBB_R14B_R15B sbb r14b, r15b

#define SBB_R15B_AL sbb r15b, al
#define SBB_R15B_BL sbb r15b, bl
#define SBB_R15B_CL sbb r15b, cl
#define SBB_R15B_DL sbb r15b, dl
#define SBB_R15B_DIL sbb r15b, dil
#define SBB_R15B_SIL sbb r15b, sil
#define SBB_R15B_BPL sbb r15b, bpl
#define SBB_R15B_SPL sbb r15b, spl
#define SBB_R15B_R8B sbb r15b, r8b
#define SBB_R15B_R9B sbb r15b, r9b
#define SBB_R15B_R10B sbb r15b, r10b
#define SBB_R15B_R11B sbb r15b, r11b
#define SBB_R15B_R12B sbb r15b, r12b
#define SBB_R15B_R13B sbb r15b, r13b
#define SBB_R15B_R14B sbb r15b, r14b
#define SBB_R15B_R15B sbb r15b, r15b

#define SBB_AL_(VALUE) sbb al, VALUE
#define SBB_BL_(VALUE) sbb bl, VALUE
#define SBB_CL_(VALUE) sbb cl, VALUE
#define SBB_DL_(VALUE) sbb dl, VALUE
#define SBB_DIL_(VALUE) sbb dil, VALUE
#define SBB_SIL_(VALUE) sbb sil, VALUE
#define SBB_BPL_(VALUE) sbb bpl, VALUE
#define SBB_SPL_(VALUE) sbb spl, VALUE
#define SBB_R8B_(VALUE) sbb r8b, VALUE
#define SBB_R9B_(VALUE) sbb r9b, VALUE
#define SBB_R10B_(VALUE) sbb r10b, VALUE
#define SBB_R11B_(VALUE) sbb r11b, VALUE
#define SBB_R12B_(VALUE) sbb r12b, VALUE
#define SBB_R13B_(VALUE) sbb r13b, VALUE
#define SBB_R14B_(VALUE) sbb r14b, VALUE
#define SBB_R15B_(VALUE) sbb r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define SBB_AX_AX sbb ax, ax
#define SBB_AX_BX sbb ax, bx
#define SBB_AX_CX sbb ax, cx
#define SBB_AX_DX sbb ax, dx
#define SBB_AX_DI sbb ax, di
#define SBB_AX_SI sbb ax, si
#define SBB_AX_BP sbb ax, bp
#define SBB_AX_SP sbb ax, sp

#define SBB_BX_AX sbb bx, ax
#define SBB_BX_BX sbb bx, bx
#define SBB_BX_CX sbb bx, cx
#define SBB_BX_DX sbb bx, dx
#define SBB_BX_DI sbb bx, di
#define SBB_BX_SI sbb bx, si
#define SBB_BX_BP sbb bx, bp
#define SBB_BX_SP sbb bx, sp

#define SBB_CX_AX sbb cx, ax
#define SBB_CX_BX sbb cx, bx
#define SBB_CX_CX sbb cx, cx
#define SBB_CX_DX sbb cx, dx
#define SBB_CX_DI sbb cx, di
#define SBB_CX_SI sbb cx, si
#define SBB_CX_BP sbb cx, bp
#define SBB_CX_SP sbb cx, sp

#define SBB_DX_AX sbb dx, ax
#define SBB_DX_BX sbb dx, bx
#define SBB_DX_CX sbb dx, cx
#define SBB_DX_DX sbb dx, dx
#define SBB_DX_DI sbb dx, di
#define SBB_DX_SI sbb dx, si
#define SBB_DX_BP sbb dx, bp
#define SBB_DX_SP sbb dx, sp

#define SBB_DI_AX sbb di, ax
#define SBB_DI_BX sbb di, bx
#define SBB_DI_CX sbb di, cx
#define SBB_DI_DX sbb di, dx
#define SBB_DI_DI sbb di, di
#define SBB_DI_SI sbb di, si
#define SBB_DI_BP sbb di, bp
#define SBB_DI_SP sbb di, sp

#define SBB_SI_AX sbb si, ax
#define SBB_SI_BX sbb si, bx
#define SBB_SI_CX sbb si, cx
#define SBB_SI_DX sbb si, dx
#define SBB_SI_DI sbb si, di
#define SBB_SI_SI sbb si, si
#define SBB_SI_BP sbb si, bp
#define SBB_SI_SP sbb si, sp

#define SBB_BP_AX sbb bp, ax
#define SBB_BP_BX sbb bp, bx
#define SBB_BP_CX sbb bp, cx
#define SBB_BP_DX sbb bp, dx
#define SBB_BP_DI sbb bp, di
#define SBB_BP_SI sbb bp, si
#define SBB_BP_BP sbb bp, bp
#define SBB_BP_SP sbb bp, sp

#define SBB_SP_AX sbb sp, ax
#define SBB_SP_BX sbb sp, bx
#define SBB_SP_CX sbb sp, cx
#define SBB_SP_DX sbb sp, dx
#define SBB_SP_DI sbb sp, di
#define SBB_SP_SI sbb sp, si
#define SBB_SP_BP sbb sp, bp
#define SBB_SP_SP sbb sp, sp

#define SBB_AX_(VALUE) sbb ax, VALUE
#define SBB_BX_(VALUE) sbb bx, VALUE
#define SBB_CX_(VALUE) sbb cx, VALUE
#define SBB_DX_(VALUE) sbb dx, VALUE
#define SBB_DI_(VALUE) sbb di, VALUE
#define SBB_SI_(VALUE) sbb si, VALUE
#define SBB_BP_(VALUE) sbb bp, VALUE
#define SBB_SP_(VALUE) sbb sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SBB_AX_AX sbb ax, ax
#define SBB_AX_BX sbb ax, bx
#define SBB_AX_CX sbb ax, cx
#define SBB_AX_DX sbb ax, dx
#define SBB_AX_DI sbb ax, di
#define SBB_AX_SI sbb ax, si
#define SBB_AX_BP sbb ax, bp
#define SBB_AX_SP sbb ax, sp

#define SBB_BX_AX sbb bx, ax
#define SBB_BX_BX sbb bx, bx
#define SBB_BX_CX sbb bx, cx
#define SBB_BX_DX sbb bx, dx
#define SBB_BX_DI sbb bx, di
#define SBB_BX_SI sbb bx, si
#define SBB_BX_BP sbb bx, bp
#define SBB_BX_SP sbb bx, sp

#define SBB_CX_AX sbb cx, ax
#define SBB_CX_BX sbb cx, bx
#define SBB_CX_CX sbb cx, cx
#define SBB_CX_DX sbb cx, dx
#define SBB_CX_DI sbb cx, di
#define SBB_CX_SI sbb cx, si
#define SBB_CX_BP sbb cx, bp
#define SBB_CX_SP sbb cx, sp

#define SBB_DX_AX sbb dx, ax
#define SBB_DX_BX sbb dx, bx
#define SBB_DX_CX sbb dx, cx
#define SBB_DX_DX sbb dx, dx
#define SBB_DX_DI sbb dx, di
#define SBB_DX_SI sbb dx, si
#define SBB_DX_BP sbb dx, bp
#define SBB_DX_SP sbb dx, sp

#define SBB_DI_AX sbb di, ax
#define SBB_DI_BX sbb di, bx
#define SBB_DI_CX sbb di, cx
#define SBB_DI_DX sbb di, dx
#define SBB_DI_DI sbb di, di
#define SBB_DI_SI sbb di, si
#define SBB_DI_BP sbb di, bp
#define SBB_DI_SP sbb di, sp

#define SBB_SI_AX sbb si, ax
#define SBB_SI_BX sbb si, bx
#define SBB_SI_CX sbb si, cx
#define SBB_SI_DX sbb si, dx
#define SBB_SI_DI sbb si, di
#define SBB_SI_SI sbb si, si
#define SBB_SI_BP sbb si, bp
#define SBB_SI_SP sbb si, sp

#define SBB_BP_AX sbb bp, ax
#define SBB_BP_BX sbb bp, bx
#define SBB_BP_CX sbb bp, cx
#define SBB_BP_DX sbb bp, dx
#define SBB_BP_DI sbb bp, di
#define SBB_BP_SI sbb bp, si
#define SBB_BP_BP sbb bp, bp
#define SBB_BP_SP sbb bp, sp

#define SBB_SP_AX sbb sp, ax
#define SBB_SP_BX sbb sp, bx
#define SBB_SP_CX sbb sp, cx
#define SBB_SP_DX sbb sp, dx
#define SBB_SP_DI sbb sp, di
#define SBB_SP_SI sbb sp, si
#define SBB_SP_BP sbb sp, bp
#define SBB_SP_SP sbb sp, sp

#define SBB_AX_(VALUE) sbb ax, VALUE
#define SBB_BX_(VALUE) sbb bx, VALUE
#define SBB_CX_(VALUE) sbb cx, VALUE
#define SBB_DX_(VALUE) sbb dx, VALUE
#define SBB_DI_(VALUE) sbb di, VALUE
#define SBB_SI_(VALUE) sbb si, VALUE
#define SBB_BP_(VALUE) sbb bp, VALUE
#define SBB_SP_(VALUE) sbb sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SBB_AX_AX sbb ax, ax
#define SBB_AX_BX sbb ax, bx
#define SBB_AX_CX sbb ax, cx
#define SBB_AX_DX sbb ax, dx
#define SBB_AX_DI sbb ax, di
#define SBB_AX_SI sbb ax, si
#define SBB_AX_BP sbb ax, bp
#define SBB_AX_SP sbb ax, sp
#define SBB_AX_R8W sbb ax, r8w
#define SBB_AX_R9W sbb ax, r9w
#define SBB_AX_R10W sbb ax, r10w
#define SBB_AX_R11W sbb ax, r11w
#define SBB_AX_R12W sbb ax, r12w
#define SBB_AX_R13W sbb ax, r13w
#define SBB_AX_R14W sbb ax, r14w
#define SBB_AX_R15W sbb ax, r15w

#define SBB_BX_AX sbb bx, ax
#define SBB_BX_BX sbb bx, bx
#define SBB_BX_CX sbb bx, cx
#define SBB_BX_DX sbb bx, dx
#define SBB_BX_DI sbb bx, di
#define SBB_BX_SI sbb bx, si
#define SBB_BX_BP sbb bx, bp
#define SBB_BX_SP sbb bx, sp
#define SBB_BX_R8W sbb bx, r8w
#define SBB_BX_R9W sbb bx, r9w
#define SBB_BX_R10W sbb bx, r10w
#define SBB_BX_R11W sbb bx, r11w
#define SBB_BX_R12W sbb bx, r12w
#define SBB_BX_R13W sbb bx, r13w
#define SBB_BX_R14W sbb bx, r14w
#define SBB_BX_R15W sbb bx, r15w

#define SBB_CX_AX sbb cx, ax
#define SBB_CX_BX sbb cx, bx
#define SBB_CX_CX sbb cx, cx
#define SBB_CX_DX sbb cx, dx
#define SBB_CX_DI sbb cx, di
#define SBB_CX_SI sbb cx, si
#define SBB_CX_BP sbb cx, bp
#define SBB_CX_SP sbb cx, sp
#define SBB_CX_R8W sbb cx, r8w
#define SBB_CX_R9W sbb cx, r9w
#define SBB_CX_R10W sbb cx, r10w
#define SBB_CX_R11W sbb cx, r11w
#define SBB_CX_R12W sbb cx, r12w
#define SBB_CX_R13W sbb cx, r13w
#define SBB_CX_R14W sbb cx, r14w
#define SBB_CX_R15W sbb cx, r15w

#define SBB_DX_AX sbb dx, ax
#define SBB_DX_BX sbb dx, bx
#define SBB_DX_CX sbb dx, cx
#define SBB_DX_DX sbb dx, dx
#define SBB_DX_DI sbb dx, di
#define SBB_DX_SI sbb dx, si
#define SBB_DX_BP sbb dx, bp
#define SBB_DX_SP sbb dx, sp
#define SBB_DX_R8W sbb dx, r8w
#define SBB_DX_R9W sbb dx, r9w
#define SBB_DX_R10W sbb dx, r10w
#define SBB_DX_R11W sbb dx, r11w
#define SBB_DX_R12W sbb dx, r12w
#define SBB_DX_R13W sbb dx, r13w
#define SBB_DX_R14W sbb dx, r14w
#define SBB_DX_R15W sbb dx, r15w

#define SBB_DI_AX sbb di, ax
#define SBB_DI_BX sbb di, bx
#define SBB_DI_CX sbb di, cx
#define SBB_DI_DX sbb di, dx
#define SBB_DI_DI sbb di, di
#define SBB_DI_SI sbb di, si
#define SBB_DI_BP sbb di, bp
#define SBB_DI_SP sbb di, sp
#define SBB_DI_R8W sbb di, r8w
#define SBB_DI_R9W sbb di, r9w
#define SBB_DI_R10W sbb di, r10w
#define SBB_DI_R11W sbb di, r11w
#define SBB_DI_R12W sbb di, r12w
#define SBB_DI_R13W sbb di, r13w
#define SBB_DI_R14W sbb di, r14w
#define SBB_DI_R15W sbb di, r15w

#define SBB_SI_AX sbb si, ax
#define SBB_SI_BX sbb si, bx
#define SBB_SI_CX sbb si, cx
#define SBB_SI_DX sbb si, dx
#define SBB_SI_DI sbb si, di
#define SBB_SI_SI sbb si, si
#define SBB_SI_BP sbb si, bp
#define SBB_SI_SP sbb si, sp
#define SBB_SI_R8W sbb si, r8w
#define SBB_SI_R9W sbb si, r9w
#define SBB_SI_R10W sbb si, r10w
#define SBB_SI_R11W sbb si, r11w
#define SBB_SI_R12W sbb si, r12w
#define SBB_SI_R13W sbb si, r13w
#define SBB_SI_R14W sbb si, r14w
#define SBB_SI_R15W sbb si, r15w

#define SBB_BP_AX sbb bp, ax
#define SBB_BP_BX sbb bp, bx
#define SBB_BP_CX sbb bp, cx
#define SBB_BP_DX sbb bp, dx
#define SBB_BP_DI sbb bp, di
#define SBB_BP_SI sbb bp, si
#define SBB_BP_BP sbb bp, bp
#define SBB_BP_SP sbb bp, sp
#define SBB_BP_R8W sbb bp, r8w
#define SBB_BP_R9W sbb bp, r9w
#define SBB_BP_R10W sbb bp, r10w
#define SBB_BP_R11W sbb bp, r11w
#define SBB_BP_R12W sbb bp, r12w
#define SBB_BP_R13W sbb bp, r13w
#define SBB_BP_R14W sbb bp, r14w
#define SBB_BP_R15W sbb bp, r15w

#define SBB_SP_AX sbb sp, ax
#define SBB_SP_BX sbb sp, bx
#define SBB_SP_CX sbb sp, cx
#define SBB_SP_DX sbb sp, dx
#define SBB_SP_DI sbb sp, di
#define SBB_SP_SI sbb sp, si
#define SBB_SP_BP sbb sp, bp
#define SBB_SP_SP sbb sp, sp
#define SBB_SP_R8W sbb sp, r8w
#define SBB_SP_R9W sbb sp, r9w
#define SBB_SP_R10W sbb sp, r10w
#define SBB_SP_R11W sbb sp, r11w
#define SBB_SP_R12W sbb sp, r12w
#define SBB_SP_R13W sbb sp, r13w
#define SBB_SP_R14W sbb sp, r14w
#define SBB_SP_R15W sbb sp, r15w

#define SBB_R8W_AX sbb r8w, ax
#define SBB_R8W_BX sbb r8w, bx
#define SBB_R8W_CX sbb r8w, cx
#define SBB_R8W_DX sbb r8w, dx
#define SBB_R8W_DI sbb r8w, di
#define SBB_R8W_SI sbb r8w, si
#define SBB_R8W_BP sbb r8w, bp
#define SBB_R8W_SP sbb r8w, sp
#define SBB_R8W_R8W sbb r8w, r8w
#define SBB_R8W_R9W sbb r8w, r9w
#define SBB_R8W_R10W sbb r8w, r10w
#define SBB_R8W_R11W sbb r8w, r11w
#define SBB_R8W_R12W sbb r8w, r12w
#define SBB_R8W_R13W sbb r8w, r13w
#define SBB_R8W_R14W sbb r8w, r14w
#define SBB_R8W_R15W sbb r8w, r15w

#define SBB_R9W_AX sbb r9w, ax
#define SBB_R9W_BX sbb r9w, bx
#define SBB_R9W_CX sbb r9w, cx
#define SBB_R9W_DX sbb r9w, dx
#define SBB_R9W_DI sbb r9w, di
#define SBB_R9W_SI sbb r9w, si
#define SBB_R9W_BP sbb r9w, bp
#define SBB_R9W_SP sbb r9w, sp
#define SBB_R9W_R8W sbb r9w, r8w
#define SBB_R9W_R9W sbb r9w, r9w
#define SBB_R9W_R10W sbb r9w, r10w
#define SBB_R9W_R11W sbb r9w, r11w
#define SBB_R9W_R12W sbb r9w, r12w
#define SBB_R9W_R13W sbb r9w, r13w
#define SBB_R9W_R14W sbb r9w, r14w
#define SBB_R9W_R15W sbb r9w, r15w

#define SBB_R10W_AX sbb r10w, ax
#define SBB_R10W_BX sbb r10w, bx
#define SBB_R10W_CX sbb r10w, cx
#define SBB_R10W_DX sbb r10w, dx
#define SBB_R10W_DI sbb r10w, di
#define SBB_R10W_SI sbb r10w, si
#define SBB_R10W_BP sbb r10w, bp
#define SBB_R10W_SP sbb r10w, sp
#define SBB_R10W_R8W sbb r10w, r8w
#define SBB_R10W_R9W sbb r10w, r9w
#define SBB_R10W_R10W sbb r10w, r10w
#define SBB_R10W_R11W sbb r10w, r11w
#define SBB_R10W_R12W sbb r10w, r12w
#define SBB_R10W_R13W sbb r10w, r13w
#define SBB_R10W_R14W sbb r10w, r14w
#define SBB_R10W_R15W sbb r10w, r15w

#define SBB_R11W_AX sbb r11w, ax
#define SBB_R11W_BX sbb r11w, bx
#define SBB_R11W_CX sbb r11w, cx
#define SBB_R11W_DX sbb r11w, dx
#define SBB_R11W_DI sbb r11w, di
#define SBB_R11W_SI sbb r11w, si
#define SBB_R11W_BP sbb r11w, bp
#define SBB_R11W_SP sbb r11w, sp
#define SBB_R11W_R8W sbb r11w, r8w
#define SBB_R11W_R9W sbb r11w, r9w
#define SBB_R11W_R10W sbb r11w, r10w
#define SBB_R11W_R11W sbb r11w, r11w
#define SBB_R11W_R12W sbb r11w, r12w
#define SBB_R11W_R13W sbb r11w, r13w
#define SBB_R11W_R14W sbb r11w, r14w
#define SBB_R11W_R15W sbb r11w, r15w

#define SBB_R12W_AX sbb r12w, ax
#define SBB_R12W_BX sbb r12w, bx
#define SBB_R12W_CX sbb r12w, cx
#define SBB_R12W_DX sbb r12w, dx
#define SBB_R12W_DI sbb r12w, di
#define SBB_R12W_SI sbb r12w, si
#define SBB_R12W_BP sbb r12w, bp
#define SBB_R12W_SP sbb r12w, sp
#define SBB_R12W_R8W sbb r12w, r8w
#define SBB_R12W_R9W sbb r12w, r9w
#define SBB_R12W_R10W sbb r12w, r10w
#define SBB_R12W_R11W sbb r12w, r11w
#define SBB_R12W_R12W sbb r12w, r12w
#define SBB_R12W_R13W sbb r12w, r13w
#define SBB_R12W_R14W sbb r12w, r14w
#define SBB_R12W_R15W sbb r12w, r15w

#define SBB_R13W_AX sbb r13w, ax
#define SBB_R13W_BX sbb r13w, bx
#define SBB_R13W_CX sbb r13w, cx
#define SBB_R13W_DX sbb r13w, dx
#define SBB_R13W_DI sbb r13w, di
#define SBB_R13W_SI sbb r13w, si
#define SBB_R13W_BP sbb r13w, bp
#define SBB_R13W_SP sbb r13w, sp
#define SBB_R13W_R8W sbb r13w, r8w
#define SBB_R13W_R9W sbb r13w, r9w
#define SBB_R13W_R10W sbb r13w, r10w
#define SBB_R13W_R11W sbb r13w, r11w
#define SBB_R13W_R12W sbb r13w, r12w
#define SBB_R13W_R13W sbb r13w, r13w
#define SBB_R13W_R14W sbb r13w, r14w
#define SBB_R13W_R15W sbb r13w, r15w

#define SBB_R14W_AX sbb r14w, ax
#define SBB_R14W_BX sbb r14w, bx
#define SBB_R14W_CX sbb r14w, cx
#define SBB_R14W_DX sbb r14w, dx
#define SBB_R14W_DI sbb r14w, di
#define SBB_R14W_SI sbb r14w, si
#define SBB_R14W_BP sbb r14w, bp
#define SBB_R14W_SP sbb r14w, sp
#define SBB_R14W_R8W sbb r14w, r8w
#define SBB_R14W_R9W sbb r14w, r9w
#define SBB_R14W_R10W sbb r14w, r10w
#define SBB_R14W_R11W sbb r14w, r11w
#define SBB_R14W_R12W sbb r14w, r12w
#define SBB_R14W_R13W sbb r14w, r13w
#define SBB_R14W_R14W sbb r14w, r14w
#define SBB_R14W_R15W sbb r14w, r15w

#define SBB_R15W_AX sbb r15w, ax
#define SBB_R15W_BX sbb r15w, bx
#define SBB_R15W_CX sbb r15w, cx
#define SBB_R15W_DX sbb r15w, dx
#define SBB_R15W_DI sbb r15w, di
#define SBB_R15W_SI sbb r15w, si
#define SBB_R15W_BP sbb r15w, bp
#define SBB_R15W_SP sbb r15w, sp
#define SBB_R15W_R8W sbb r15w, r8w
#define SBB_R15W_R9W sbb r15w, r9w
#define SBB_R15W_R10W sbb r15w, r10w
#define SBB_R15W_R11W sbb r15w, r11w
#define SBB_R15W_R12W sbb r15w, r12w
#define SBB_R15W_R13W sbb r15w, r13w
#define SBB_R15W_R14W sbb r15w, r14w
#define SBB_R15W_R15W sbb r15w, r15w

#define SBB_AX_(VALUE) sbb ax, VALUE
#define SBB_BX_(VALUE) sbb bx, VALUE
#define SBB_CX_(VALUE) sbb cx, VALUE
#define SBB_DX_(VALUE) sbb dx, VALUE
#define SBB_DI_(VALUE) sbb di, VALUE
#define SBB_SI_(VALUE) sbb si, VALUE
#define SBB_BP_(VALUE) sbb bp, VALUE
#define SBB_SP_(VALUE) sbb sp, VALUE
#define SBB_R8W_(VALUE) sbb r8w, VALUE
#define SBB_R9W_(VALUE) sbb r9w, VALUE
#define SBB_R10W_(VALUE) sbb r10w, VALUE
#define SBB_R11W_(VALUE) sbb r11w, VALUE
#define SBB_R12W_(VALUE) sbb r12w, VALUE
#define SBB_R13W_(VALUE) sbb r13w, VALUE
#define SBB_R14W_(VALUE) sbb r14w, VALUE
#define SBB_R15W_(VALUE) sbb r15w, VALUE
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
