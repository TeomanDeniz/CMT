#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define ADC_AL_AL adc al, al
#define ADC_AL_BL adc al, bl
#define ADC_AL_CL adc al, cl
#define ADC_AL_DL adc al, dl

#define ADC_BL_AL adc bl, al
#define ADC_BL_BL adc bl, bl
#define ADC_BL_CL adc bl, cl
#define ADC_BL_DL adc bl, dl

#define ADC_CL_AL adc cl, al
#define ADC_CL_BL adc cl, bl
#define ADC_CL_CL adc cl, cl
#define ADC_CL_DL adc cl, dl

#define ADC_DL_AL adc dl, al
#define ADC_DL_BL adc dl, bl
#define ADC_DL_CL adc dl, cl
#define ADC_DL_DL adc dl, dl

#define ADC_AL_(VALUE) adc al, VALUE
#define ADC_BL_(VALUE) adc bl, VALUE
#define ADC_CL_(VALUE) adc cl, VALUE
#define ADC_DL_(VALUE) adc dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AL_AL adc al, al
#define ADC_AL_BL adc al, bl
#define ADC_AL_CL adc al, cl
#define ADC_AL_DL adc al, dl

#define ADC_BL_AL adc bl, al
#define ADC_BL_BL adc bl, bl
#define ADC_BL_CL adc bl, cl
#define ADC_BL_DL adc bl, dl

#define ADC_CL_AL adc cl, al
#define ADC_CL_BL adc cl, bl
#define ADC_CL_CL adc cl, cl
#define ADC_CL_DL adc cl, dl

#define ADC_DL_AL adc dl, al
#define ADC_DL_BL adc dl, bl
#define ADC_DL_CL adc dl, cl
#define ADC_DL_DL adc dl, dl

#define ADC_AL_(VALUE) adc al, VALUE
#define ADC_BL_(VALUE) adc bl, VALUE
#define ADC_CL_(VALUE) adc cl, VALUE
#define ADC_DL_(VALUE) adc dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AL_AL adc al, al
#define ADC_AL_BL adc al, bl
#define ADC_AL_CL adc al, cl
#define ADC_AL_DL adc al, dl
#define ADC_AL_DIL adc al, dil
#define ADC_AL_SIL adc al, sil
#define ADC_AL_BPL adc al, bpl
#define ADC_AL_SPL adc al, spl
#define ADC_AL_R8B adc al, r8b
#define ADC_AL_R9B adc al, r9b
#define ADC_AL_R10B adc al, r10b
#define ADC_AL_R11B adc al, r11b
#define ADC_AL_R12B adc al, r12b
#define ADC_AL_R13B adc al, r13b
#define ADC_AL_R14B adc al, r14b
#define ADC_AL_R15B adc al, r15b

#define ADC_BL_AL adc bl, al
#define ADC_BL_BL adc bl, bl
#define ADC_BL_CL adc bl, cl
#define ADC_BL_DL adc bl, dl
#define ADC_BL_DIL adc bl, dil
#define ADC_BL_SIL adc bl, sil
#define ADC_BL_BPL adc bl, bpl
#define ADC_BL_SPL adc bl, spl
#define ADC_BL_R8B adc bl, r8b
#define ADC_BL_R9B adc bl, r9b
#define ADC_BL_R10B adc bl, r10b
#define ADC_BL_R11B adc bl, r11b
#define ADC_BL_R12B adc bl, r12b
#define ADC_BL_R13B adc bl, r13b
#define ADC_BL_R14B adc bl, r14b
#define ADC_BL_R15B adc bl, r15b

#define ADC_CL_AL adc cl, al
#define ADC_CL_BL adc cl, bl
#define ADC_CL_CL adc cl, cl
#define ADC_CL_DL adc cl, dl
#define ADC_CL_DIL adc cl, dil
#define ADC_CL_SIL adc cl, sil
#define ADC_CL_BPL adc cl, bpl
#define ADC_CL_SPL adc cl, spl
#define ADC_CL_R8B adc cl, r8b
#define ADC_CL_R9B adc cl, r9b
#define ADC_CL_R10B adc cl, r10b
#define ADC_CL_R11B adc cl, r11b
#define ADC_CL_R12B adc cl, r12b
#define ADC_CL_R13B adc cl, r13b
#define ADC_CL_R14B adc cl, r14b
#define ADC_CL_R15B adc cl, r15b

#define ADC_DL_AL adc dl, al
#define ADC_DL_BL adc dl, bl
#define ADC_DL_CL adc dl, cl
#define ADC_DL_DL adc dl, dl
#define ADC_DL_DIL adc dl, dil
#define ADC_DL_SIL adc dl, sil
#define ADC_DL_BPL adc dl, bpl
#define ADC_DL_SPL adc dl, spl
#define ADC_DL_R8B adc dl, r8b
#define ADC_DL_R9B adc dl, r9b
#define ADC_DL_R10B adc dl, r10b
#define ADC_DL_R11B adc dl, r11b
#define ADC_DL_R12B adc dl, r12b
#define ADC_DL_R13B adc dl, r13b
#define ADC_DL_R14B adc dl, r14b
#define ADC_DL_R15B adc dl, r15b

#define ADC_DIL_AL adc dil, al
#define ADC_DIL_BL adc dil, bl
#define ADC_DIL_CL adc dil, cl
#define ADC_DIL_DL adc dil, dl
#define ADC_DIL_DIL adc dil, dil
#define ADC_DIL_SIL adc dil, sil
#define ADC_DIL_BPL adc dil, bpl
#define ADC_DIL_SPL adc dil, spl
#define ADC_DIL_R8B adc dil, r8b
#define ADC_DIL_R9B adc dil, r9b
#define ADC_DIL_R10B adc dil, r10b
#define ADC_DIL_R11B adc dil, r11b
#define ADC_DIL_R12B adc dil, r12b
#define ADC_DIL_R13B adc dil, r13b
#define ADC_DIL_R14B adc dil, r14b
#define ADC_DIL_R15B adc dil, r15b

#define ADC_SIL_AL adc sil, al
#define ADC_SIL_BL adc sil, bl
#define ADC_SIL_CL adc sil, cl
#define ADC_SIL_DL adc sil, dl
#define ADC_SIL_DIL adc sil, dil
#define ADC_SIL_SIL adc sil, sil
#define ADC_SIL_BPL adc sil, bpl
#define ADC_SIL_SPL adc sil, spl
#define ADC_SIL_R8B adc sil, r8b
#define ADC_SIL_R9B adc sil, r9b
#define ADC_SIL_R10B adc sil, r10b
#define ADC_SIL_R11B adc sil, r11b
#define ADC_SIL_R12B adc sil, r12b
#define ADC_SIL_R13B adc sil, r13b
#define ADC_SIL_R14B adc sil, r14b
#define ADC_SIL_R15B adc sil, r15b

#define ADC_BPL_AL adc bpl, al
#define ADC_BPL_BL adc bpl, bl
#define ADC_BPL_CL adc bpl, cl
#define ADC_BPL_DL adc bpl, dl
#define ADC_BPL_DIL adc bpl, dil
#define ADC_BPL_SIL adc bpl, sil
#define ADC_BPL_BPL adc bpl, bpl
#define ADC_BPL_SPL adc bpl, spl
#define ADC_BPL_R8B adc bpl, r8b
#define ADC_BPL_R9B adc bpl, r9b
#define ADC_BPL_R10B adc bpl, r10b
#define ADC_BPL_R11B adc bpl, r11b
#define ADC_BPL_R12B adc bpl, r12b
#define ADC_BPL_R13B adc bpl, r13b
#define ADC_BPL_R14B adc bpl, r14b
#define ADC_BPL_R15B adc bpl, r15b

#define ADC_SPL_AL adc spl, al
#define ADC_SPL_BL adc spl, bl
#define ADC_SPL_CL adc spl, cl
#define ADC_SPL_DL adc spl, dl
#define ADC_SPL_DIL adc spl, dil
#define ADC_SPL_SIL adc spl, sil
#define ADC_SPL_BPL adc spl, bpl
#define ADC_SPL_SPL adc spl, spl
#define ADC_SPL_R8B adc spl, r8b
#define ADC_SPL_R9B adc spl, r9b
#define ADC_SPL_R10B adc spl, r10b
#define ADC_SPL_R11B adc spl, r11b
#define ADC_SPL_R12B adc spl, r12b
#define ADC_SPL_R13B adc spl, r13b
#define ADC_SPL_R14B adc spl, r14b
#define ADC_SPL_R15B adc spl, r15b

#define ADC_R8B_AL adc r8b, al
#define ADC_R8B_BL adc r8b, bl
#define ADC_R8B_CL adc r8b, cl
#define ADC_R8B_DL adc r8b, dl
#define ADC_R8B_DIL adc r8b, dil
#define ADC_R8B_SIL adc r8b, sil
#define ADC_R8B_BPL adc r8b, bpl
#define ADC_R8B_SPL adc r8b, spl
#define ADC_R8B_R8B adc r8b, r8b
#define ADC_R8B_R9B adc r8b, r9b
#define ADC_R8B_R10B adc r8b, r10b
#define ADC_R8B_R11B adc r8b, r11b
#define ADC_R8B_R12B adc r8b, r12b
#define ADC_R8B_R13B adc r8b, r13b
#define ADC_R8B_R14B adc r8b, r14b
#define ADC_R8B_R15B adc r8b, r15b

#define ADC_R9B_AL adc r9b, al
#define ADC_R9B_BL adc r9b, bl
#define ADC_R9B_CL adc r9b, cl
#define ADC_R9B_DL adc r9b, dl
#define ADC_R9B_DIL adc r9b, dil
#define ADC_R9B_SIL adc r9b, sil
#define ADC_R9B_BPL adc r9b, bpl
#define ADC_R9B_SPL adc r9b, spl
#define ADC_R9B_R8B adc r9b, r8b
#define ADC_R9B_R9B adc r9b, r9b
#define ADC_R9B_R10B adc r9b, r10b
#define ADC_R9B_R11B adc r9b, r11b
#define ADC_R9B_R12B adc r9b, r12b
#define ADC_R9B_R13B adc r9b, r13b
#define ADC_R9B_R14B adc r9b, r14b
#define ADC_R9B_R15B adc r9b, r15b

#define ADC_R10B_AL adc r10b, al
#define ADC_R10B_BL adc r10b, bl
#define ADC_R10B_CL adc r10b, cl
#define ADC_R10B_DL adc r10b, dl
#define ADC_R10B_DIL adc r10b, dil
#define ADC_R10B_SIL adc r10b, sil
#define ADC_R10B_BPL adc r10b, bpl
#define ADC_R10B_SPL adc r10b, spl
#define ADC_R10B_R8B adc r10b, r8b
#define ADC_R10B_R9B adc r10b, r9b
#define ADC_R10B_R10B adc r10b, r10b
#define ADC_R10B_R11B adc r10b, r11b
#define ADC_R10B_R12B adc r10b, r12b
#define ADC_R10B_R13B adc r10b, r13b
#define ADC_R10B_R14B adc r10b, r14b
#define ADC_R10B_R15B adc r10b, r15b

#define ADC_R11B_AL adc r11b, al
#define ADC_R11B_BL adc r11b, bl
#define ADC_R11B_CL adc r11b, cl
#define ADC_R11B_DL adc r11b, dl
#define ADC_R11B_DIL adc r11b, dil
#define ADC_R11B_SIL adc r11b, sil
#define ADC_R11B_BPL adc r11b, bpl
#define ADC_R11B_SPL adc r11b, spl
#define ADC_R11B_R8B adc r11b, r8b
#define ADC_R11B_R9B adc r11b, r9b
#define ADC_R11B_R10B adc r11b, r10b
#define ADC_R11B_R11B adc r11b, r11b
#define ADC_R11B_R12B adc r11b, r12b
#define ADC_R11B_R13B adc r11b, r13b
#define ADC_R11B_R14B adc r11b, r14b
#define ADC_R11B_R15B adc r11b, r15b

#define ADC_R12B_AL adc r12b, al
#define ADC_R12B_BL adc r12b, bl
#define ADC_R12B_CL adc r12b, cl
#define ADC_R12B_DL adc r12b, dl
#define ADC_R12B_DIL adc r12b, dil
#define ADC_R12B_SIL adc r12b, sil
#define ADC_R12B_BPL adc r12b, bpl
#define ADC_R12B_SPL adc r12b, spl
#define ADC_R12B_R8B adc r12b, r8b
#define ADC_R12B_R9B adc r12b, r9b
#define ADC_R12B_R10B adc r12b, r10b
#define ADC_R12B_R11B adc r12b, r11b
#define ADC_R12B_R12B adc r12b, r12b
#define ADC_R12B_R13B adc r12b, r13b
#define ADC_R12B_R14B adc r12b, r14b
#define ADC_R12B_R15B adc r12b, r15b

#define ADC_R13B_AL adc r13b, al
#define ADC_R13B_BL adc r13b, bl
#define ADC_R13B_CL adc r13b, cl
#define ADC_R13B_DL adc r13b, dl
#define ADC_R13B_DIL adc r13b, dil
#define ADC_R13B_SIL adc r13b, sil
#define ADC_R13B_BPL adc r13b, bpl
#define ADC_R13B_SPL adc r13b, spl
#define ADC_R13B_R8B adc r13b, r8b
#define ADC_R13B_R9B adc r13b, r9b
#define ADC_R13B_R10B adc r13b, r10b
#define ADC_R13B_R11B adc r13b, r11b
#define ADC_R13B_R12B adc r13b, r12b
#define ADC_R13B_R13B adc r13b, r13b
#define ADC_R13B_R14B adc r13b, r14b
#define ADC_R13B_R15B adc r13b, r15b

#define ADC_R14B_AL adc r14b, al
#define ADC_R14B_BL adc r14b, bl
#define ADC_R14B_CL adc r14b, cl
#define ADC_R14B_DL adc r14b, dl
#define ADC_R14B_DIL adc r14b, dil
#define ADC_R14B_SIL adc r14b, sil
#define ADC_R14B_BPL adc r14b, bpl
#define ADC_R14B_SPL adc r14b, spl
#define ADC_R14B_R8B adc r14b, r8b
#define ADC_R14B_R9B adc r14b, r9b
#define ADC_R14B_R10B adc r14b, r10b
#define ADC_R14B_R11B adc r14b, r11b
#define ADC_R14B_R12B adc r14b, r12b
#define ADC_R14B_R13B adc r14b, r13b
#define ADC_R14B_R14B adc r14b, r14b
#define ADC_R14B_R15B adc r14b, r15b

#define ADC_R15B_AL adc r15b, al
#define ADC_R15B_BL adc r15b, bl
#define ADC_R15B_CL adc r15b, cl
#define ADC_R15B_DL adc r15b, dl
#define ADC_R15B_DIL adc r15b, dil
#define ADC_R15B_SIL adc r15b, sil
#define ADC_R15B_BPL adc r15b, bpl
#define ADC_R15B_SPL adc r15b, spl
#define ADC_R15B_R8B adc r15b, r8b
#define ADC_R15B_R9B adc r15b, r9b
#define ADC_R15B_R10B adc r15b, r10b
#define ADC_R15B_R11B adc r15b, r11b
#define ADC_R15B_R12B adc r15b, r12b
#define ADC_R15B_R13B adc r15b, r13b
#define ADC_R15B_R14B adc r15b, r14b
#define ADC_R15B_R15B adc r15b, r15b

#define ADC_AL_(VALUE) adc al, VALUE
#define ADC_BL_(VALUE) adc bl, VALUE
#define ADC_CL_(VALUE) adc cl, VALUE
#define ADC_DL_(VALUE) adc dl, VALUE
#define ADC_DIL_(VALUE) adc dil, VALUE
#define ADC_SIL_(VALUE) adc sil, VALUE
#define ADC_BPL_(VALUE) adc bpl, VALUE
#define ADC_SPL_(VALUE) adc spl, VALUE
#define ADC_R8B_(VALUE) adc r8b, VALUE
#define ADC_R9B_(VALUE) adc r9b, VALUE
#define ADC_R10B_(VALUE) adc r10b, VALUE
#define ADC_R11B_(VALUE) adc r11b, VALUE
#define ADC_R12B_(VALUE) adc r12b, VALUE
#define ADC_R13B_(VALUE) adc r13b, VALUE
#define ADC_R14B_(VALUE) adc r14b, VALUE
#define ADC_R15B_(VALUE) adc r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define ADC_AX_AX adc ax, ax
#define ADC_AX_BX adc ax, bx
#define ADC_AX_CX adc ax, cx
#define ADC_AX_DX adc ax, dx
#define ADC_AX_DI adc ax, di
#define ADC_AX_SI adc ax, si
#define ADC_AX_BP adc ax, bp
#define ADC_AX_SP adc ax, sp

#define ADC_BX_AX adc bx, ax
#define ADC_BX_BX adc bx, bx
#define ADC_BX_CX adc bx, cx
#define ADC_BX_DX adc bx, dx
#define ADC_BX_DI adc bx, di
#define ADC_BX_SI adc bx, si
#define ADC_BX_BP adc bx, bp
#define ADC_BX_SP adc bx, sp

#define ADC_CX_AX adc cx, ax
#define ADC_CX_BX adc cx, bx
#define ADC_CX_CX adc cx, cx
#define ADC_CX_DX adc cx, dx
#define ADC_CX_DI adc cx, di
#define ADC_CX_SI adc cx, si
#define ADC_CX_BP adc cx, bp
#define ADC_CX_SP adc cx, sp

#define ADC_DX_AX adc dx, ax
#define ADC_DX_BX adc dx, bx
#define ADC_DX_CX adc dx, cx
#define ADC_DX_DX adc dx, dx
#define ADC_DX_DI adc dx, di
#define ADC_DX_SI adc dx, si
#define ADC_DX_BP adc dx, bp
#define ADC_DX_SP adc dx, sp

#define ADC_DI_AX adc di, ax
#define ADC_DI_BX adc di, bx
#define ADC_DI_CX adc di, cx
#define ADC_DI_DX adc di, dx
#define ADC_DI_DI adc di, di
#define ADC_DI_SI adc di, si
#define ADC_DI_BP adc di, bp
#define ADC_DI_SP adc di, sp

#define ADC_SI_AX adc si, ax
#define ADC_SI_BX adc si, bx
#define ADC_SI_CX adc si, cx
#define ADC_SI_DX adc si, dx
#define ADC_SI_DI adc si, di
#define ADC_SI_SI adc si, si
#define ADC_SI_BP adc si, bp
#define ADC_SI_SP adc si, sp

#define ADC_BP_AX adc bp, ax
#define ADC_BP_BX adc bp, bx
#define ADC_BP_CX adc bp, cx
#define ADC_BP_DX adc bp, dx
#define ADC_BP_DI adc bp, di
#define ADC_BP_SI adc bp, si
#define ADC_BP_BP adc bp, bp
#define ADC_BP_SP adc bp, sp

#define ADC_SP_AX adc sp, ax
#define ADC_SP_BX adc sp, bx
#define ADC_SP_CX adc sp, cx
#define ADC_SP_DX adc sp, dx
#define ADC_SP_DI adc sp, di
#define ADC_SP_SI adc sp, si
#define ADC_SP_BP adc sp, bp
#define ADC_SP_SP adc sp, sp

#define ADC_AX_(VALUE) adc ax, VALUE
#define ADC_BX_(VALUE) adc bx, VALUE
#define ADC_CX_(VALUE) adc cx, VALUE
#define ADC_DX_(VALUE) adc dx, VALUE
#define ADC_DI_(VALUE) adc di, VALUE
#define ADC_SI_(VALUE) adc si, VALUE
#define ADC_BP_(VALUE) adc bp, VALUE
#define ADC_SP_(VALUE) adc sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADC_AX_AX adc ax, ax
#define ADC_AX_BX adc ax, bx
#define ADC_AX_CX adc ax, cx
#define ADC_AX_DX adc ax, dx
#define ADC_AX_DI adc ax, di
#define ADC_AX_SI adc ax, si
#define ADC_AX_BP adc ax, bp
#define ADC_AX_SP adc ax, sp

#define ADC_BX_AX adc bx, ax
#define ADC_BX_BX adc bx, bx
#define ADC_BX_CX adc bx, cx
#define ADC_BX_DX adc bx, dx
#define ADC_BX_DI adc bx, di
#define ADC_BX_SI adc bx, si
#define ADC_BX_BP adc bx, bp
#define ADC_BX_SP adc bx, sp

#define ADC_CX_AX adc cx, ax
#define ADC_CX_BX adc cx, bx
#define ADC_CX_CX adc cx, cx
#define ADC_CX_DX adc cx, dx
#define ADC_CX_DI adc cx, di
#define ADC_CX_SI adc cx, si
#define ADC_CX_BP adc cx, bp
#define ADC_CX_SP adc cx, sp

#define ADC_DX_AX adc dx, ax
#define ADC_DX_BX adc dx, bx
#define ADC_DX_CX adc dx, cx
#define ADC_DX_DX adc dx, dx
#define ADC_DX_DI adc dx, di
#define ADC_DX_SI adc dx, si
#define ADC_DX_BP adc dx, bp
#define ADC_DX_SP adc dx, sp

#define ADC_DI_AX adc di, ax
#define ADC_DI_BX adc di, bx
#define ADC_DI_CX adc di, cx
#define ADC_DI_DX adc di, dx
#define ADC_DI_DI adc di, di
#define ADC_DI_SI adc di, si
#define ADC_DI_BP adc di, bp
#define ADC_DI_SP adc di, sp

#define ADC_SI_AX adc si, ax
#define ADC_SI_BX adc si, bx
#define ADC_SI_CX adc si, cx
#define ADC_SI_DX adc si, dx
#define ADC_SI_DI adc si, di
#define ADC_SI_SI adc si, si
#define ADC_SI_BP adc si, bp
#define ADC_SI_SP adc si, sp

#define ADC_BP_AX adc bp, ax
#define ADC_BP_BX adc bp, bx
#define ADC_BP_CX adc bp, cx
#define ADC_BP_DX adc bp, dx
#define ADC_BP_DI adc bp, di
#define ADC_BP_SI adc bp, si
#define ADC_BP_BP adc bp, bp
#define ADC_BP_SP adc bp, sp

#define ADC_SP_AX adc sp, ax
#define ADC_SP_BX adc sp, bx
#define ADC_SP_CX adc sp, cx
#define ADC_SP_DX adc sp, dx
#define ADC_SP_DI adc sp, di
#define ADC_SP_SI adc sp, si
#define ADC_SP_BP adc sp, bp
#define ADC_SP_SP adc sp, sp

#define ADC_AX_(VALUE) adc ax, VALUE
#define ADC_BX_(VALUE) adc bx, VALUE
#define ADC_CX_(VALUE) adc cx, VALUE
#define ADC_DX_(VALUE) adc dx, VALUE
#define ADC_DI_(VALUE) adc di, VALUE
#define ADC_SI_(VALUE) adc si, VALUE
#define ADC_BP_(VALUE) adc bp, VALUE
#define ADC_SP_(VALUE) adc sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADC_AX_AX adc ax, ax
#define ADC_AX_BX adc ax, bx
#define ADC_AX_CX adc ax, cx
#define ADC_AX_DX adc ax, dx
#define ADC_AX_DI adc ax, di
#define ADC_AX_SI adc ax, si
#define ADC_AX_BP adc ax, bp
#define ADC_AX_SP adc ax, sp
#define ADC_AX_R8W adc ax, r8w
#define ADC_AX_R9W adc ax, r9w
#define ADC_AX_R10W adc ax, r10w
#define ADC_AX_R11W adc ax, r11w
#define ADC_AX_R12W adc ax, r12w
#define ADC_AX_R13W adc ax, r13w
#define ADC_AX_R14W adc ax, r14w
#define ADC_AX_R15W adc ax, r15w

#define ADC_BX_AX adc bx, ax
#define ADC_BX_BX adc bx, bx
#define ADC_BX_CX adc bx, cx
#define ADC_BX_DX adc bx, dx
#define ADC_BX_DI adc bx, di
#define ADC_BX_SI adc bx, si
#define ADC_BX_BP adc bx, bp
#define ADC_BX_SP adc bx, sp
#define ADC_BX_R8W adc bx, r8w
#define ADC_BX_R9W adc bx, r9w
#define ADC_BX_R10W adc bx, r10w
#define ADC_BX_R11W adc bx, r11w
#define ADC_BX_R12W adc bx, r12w
#define ADC_BX_R13W adc bx, r13w
#define ADC_BX_R14W adc bx, r14w
#define ADC_BX_R15W adc bx, r15w

#define ADC_CX_AX adc cx, ax
#define ADC_CX_BX adc cx, bx
#define ADC_CX_CX adc cx, cx
#define ADC_CX_DX adc cx, dx
#define ADC_CX_DI adc cx, di
#define ADC_CX_SI adc cx, si
#define ADC_CX_BP adc cx, bp
#define ADC_CX_SP adc cx, sp
#define ADC_CX_R8W adc cx, r8w
#define ADC_CX_R9W adc cx, r9w
#define ADC_CX_R10W adc cx, r10w
#define ADC_CX_R11W adc cx, r11w
#define ADC_CX_R12W adc cx, r12w
#define ADC_CX_R13W adc cx, r13w
#define ADC_CX_R14W adc cx, r14w
#define ADC_CX_R15W adc cx, r15w

#define ADC_DX_AX adc dx, ax
#define ADC_DX_BX adc dx, bx
#define ADC_DX_CX adc dx, cx
#define ADC_DX_DX adc dx, dx
#define ADC_DX_DI adc dx, di
#define ADC_DX_SI adc dx, si
#define ADC_DX_BP adc dx, bp
#define ADC_DX_SP adc dx, sp
#define ADC_DX_R8W adc dx, r8w
#define ADC_DX_R9W adc dx, r9w
#define ADC_DX_R10W adc dx, r10w
#define ADC_DX_R11W adc dx, r11w
#define ADC_DX_R12W adc dx, r12w
#define ADC_DX_R13W adc dx, r13w
#define ADC_DX_R14W adc dx, r14w
#define ADC_DX_R15W adc dx, r15w

#define ADC_DI_AX adc di, ax
#define ADC_DI_BX adc di, bx
#define ADC_DI_CX adc di, cx
#define ADC_DI_DX adc di, dx
#define ADC_DI_DI adc di, di
#define ADC_DI_SI adc di, si
#define ADC_DI_BP adc di, bp
#define ADC_DI_SP adc di, sp
#define ADC_DI_R8W adc di, r8w
#define ADC_DI_R9W adc di, r9w
#define ADC_DI_R10W adc di, r10w
#define ADC_DI_R11W adc di, r11w
#define ADC_DI_R12W adc di, r12w
#define ADC_DI_R13W adc di, r13w
#define ADC_DI_R14W adc di, r14w
#define ADC_DI_R15W adc di, r15w

#define ADC_SI_AX adc si, ax
#define ADC_SI_BX adc si, bx
#define ADC_SI_CX adc si, cx
#define ADC_SI_DX adc si, dx
#define ADC_SI_DI adc si, di
#define ADC_SI_SI adc si, si
#define ADC_SI_BP adc si, bp
#define ADC_SI_SP adc si, sp
#define ADC_SI_R8W adc si, r8w
#define ADC_SI_R9W adc si, r9w
#define ADC_SI_R10W adc si, r10w
#define ADC_SI_R11W adc si, r11w
#define ADC_SI_R12W adc si, r12w
#define ADC_SI_R13W adc si, r13w
#define ADC_SI_R14W adc si, r14w
#define ADC_SI_R15W adc si, r15w

#define ADC_BP_AX adc bp, ax
#define ADC_BP_BX adc bp, bx
#define ADC_BP_CX adc bp, cx
#define ADC_BP_DX adc bp, dx
#define ADC_BP_DI adc bp, di
#define ADC_BP_SI adc bp, si
#define ADC_BP_BP adc bp, bp
#define ADC_BP_SP adc bp, sp
#define ADC_BP_R8W adc bp, r8w
#define ADC_BP_R9W adc bp, r9w
#define ADC_BP_R10W adc bp, r10w
#define ADC_BP_R11W adc bp, r11w
#define ADC_BP_R12W adc bp, r12w
#define ADC_BP_R13W adc bp, r13w
#define ADC_BP_R14W adc bp, r14w
#define ADC_BP_R15W adc bp, r15w

#define ADC_SP_AX adc sp, ax
#define ADC_SP_BX adc sp, bx
#define ADC_SP_CX adc sp, cx
#define ADC_SP_DX adc sp, dx
#define ADC_SP_DI adc sp, di
#define ADC_SP_SI adc sp, si
#define ADC_SP_BP adc sp, bp
#define ADC_SP_SP adc sp, sp
#define ADC_SP_R8W adc sp, r8w
#define ADC_SP_R9W adc sp, r9w
#define ADC_SP_R10W adc sp, r10w
#define ADC_SP_R11W adc sp, r11w
#define ADC_SP_R12W adc sp, r12w
#define ADC_SP_R13W adc sp, r13w
#define ADC_SP_R14W adc sp, r14w
#define ADC_SP_R15W adc sp, r15w

#define ADC_R8W_AX adc r8w, ax
#define ADC_R8W_BX adc r8w, bx
#define ADC_R8W_CX adc r8w, cx
#define ADC_R8W_DX adc r8w, dx
#define ADC_R8W_DI adc r8w, di
#define ADC_R8W_SI adc r8w, si
#define ADC_R8W_BP adc r8w, bp
#define ADC_R8W_SP adc r8w, sp
#define ADC_R8W_R8W adc r8w, r8w
#define ADC_R8W_R9W adc r8w, r9w
#define ADC_R8W_R10W adc r8w, r10w
#define ADC_R8W_R11W adc r8w, r11w
#define ADC_R8W_R12W adc r8w, r12w
#define ADC_R8W_R13W adc r8w, r13w
#define ADC_R8W_R14W adc r8w, r14w
#define ADC_R8W_R15W adc r8w, r15w

#define ADC_R9W_AX adc r9w, ax
#define ADC_R9W_BX adc r9w, bx
#define ADC_R9W_CX adc r9w, cx
#define ADC_R9W_DX adc r9w, dx
#define ADC_R9W_DI adc r9w, di
#define ADC_R9W_SI adc r9w, si
#define ADC_R9W_BP adc r9w, bp
#define ADC_R9W_SP adc r9w, sp
#define ADC_R9W_R8W adc r9w, r8w
#define ADC_R9W_R9W adc r9w, r9w
#define ADC_R9W_R10W adc r9w, r10w
#define ADC_R9W_R11W adc r9w, r11w
#define ADC_R9W_R12W adc r9w, r12w
#define ADC_R9W_R13W adc r9w, r13w
#define ADC_R9W_R14W adc r9w, r14w
#define ADC_R9W_R15W adc r9w, r15w

#define ADC_R10W_AX adc r10w, ax
#define ADC_R10W_BX adc r10w, bx
#define ADC_R10W_CX adc r10w, cx
#define ADC_R10W_DX adc r10w, dx
#define ADC_R10W_DI adc r10w, di
#define ADC_R10W_SI adc r10w, si
#define ADC_R10W_BP adc r10w, bp
#define ADC_R10W_SP adc r10w, sp
#define ADC_R10W_R8W adc r10w, r8w
#define ADC_R10W_R9W adc r10w, r9w
#define ADC_R10W_R10W adc r10w, r10w
#define ADC_R10W_R11W adc r10w, r11w
#define ADC_R10W_R12W adc r10w, r12w
#define ADC_R10W_R13W adc r10w, r13w
#define ADC_R10W_R14W adc r10w, r14w
#define ADC_R10W_R15W adc r10w, r15w

#define ADC_R11W_AX adc r11w, ax
#define ADC_R11W_BX adc r11w, bx
#define ADC_R11W_CX adc r11w, cx
#define ADC_R11W_DX adc r11w, dx
#define ADC_R11W_DI adc r11w, di
#define ADC_R11W_SI adc r11w, si
#define ADC_R11W_BP adc r11w, bp
#define ADC_R11W_SP adc r11w, sp
#define ADC_R11W_R8W adc r11w, r8w
#define ADC_R11W_R9W adc r11w, r9w
#define ADC_R11W_R10W adc r11w, r10w
#define ADC_R11W_R11W adc r11w, r11w
#define ADC_R11W_R12W adc r11w, r12w
#define ADC_R11W_R13W adc r11w, r13w
#define ADC_R11W_R14W adc r11w, r14w
#define ADC_R11W_R15W adc r11w, r15w

#define ADC_R12W_AX adc r12w, ax
#define ADC_R12W_BX adc r12w, bx
#define ADC_R12W_CX adc r12w, cx
#define ADC_R12W_DX adc r12w, dx
#define ADC_R12W_DI adc r12w, di
#define ADC_R12W_SI adc r12w, si
#define ADC_R12W_BP adc r12w, bp
#define ADC_R12W_SP adc r12w, sp
#define ADC_R12W_R8W adc r12w, r8w
#define ADC_R12W_R9W adc r12w, r9w
#define ADC_R12W_R10W adc r12w, r10w
#define ADC_R12W_R11W adc r12w, r11w
#define ADC_R12W_R12W adc r12w, r12w
#define ADC_R12W_R13W adc r12w, r13w
#define ADC_R12W_R14W adc r12w, r14w
#define ADC_R12W_R15W adc r12w, r15w

#define ADC_R13W_AX adc r13w, ax
#define ADC_R13W_BX adc r13w, bx
#define ADC_R13W_CX adc r13w, cx
#define ADC_R13W_DX adc r13w, dx
#define ADC_R13W_DI adc r13w, di
#define ADC_R13W_SI adc r13w, si
#define ADC_R13W_BP adc r13w, bp
#define ADC_R13W_SP adc r13w, sp
#define ADC_R13W_R8W adc r13w, r8w
#define ADC_R13W_R9W adc r13w, r9w
#define ADC_R13W_R10W adc r13w, r10w
#define ADC_R13W_R11W adc r13w, r11w
#define ADC_R13W_R12W adc r13w, r12w
#define ADC_R13W_R13W adc r13w, r13w
#define ADC_R13W_R14W adc r13w, r14w
#define ADC_R13W_R15W adc r13w, r15w

#define ADC_R14W_AX adc r14w, ax
#define ADC_R14W_BX adc r14w, bx
#define ADC_R14W_CX adc r14w, cx
#define ADC_R14W_DX adc r14w, dx
#define ADC_R14W_DI adc r14w, di
#define ADC_R14W_SI adc r14w, si
#define ADC_R14W_BP adc r14w, bp
#define ADC_R14W_SP adc r14w, sp
#define ADC_R14W_R8W adc r14w, r8w
#define ADC_R14W_R9W adc r14w, r9w
#define ADC_R14W_R10W adc r14w, r10w
#define ADC_R14W_R11W adc r14w, r11w
#define ADC_R14W_R12W adc r14w, r12w
#define ADC_R14W_R13W adc r14w, r13w
#define ADC_R14W_R14W adc r14w, r14w
#define ADC_R14W_R15W adc r14w, r15w

#define ADC_R15W_AX adc r15w, ax
#define ADC_R15W_BX adc r15w, bx
#define ADC_R15W_CX adc r15w, cx
#define ADC_R15W_DX adc r15w, dx
#define ADC_R15W_DI adc r15w, di
#define ADC_R15W_SI adc r15w, si
#define ADC_R15W_BP adc r15w, bp
#define ADC_R15W_SP adc r15w, sp
#define ADC_R15W_R8W adc r15w, r8w
#define ADC_R15W_R9W adc r15w, r9w
#define ADC_R15W_R10W adc r15w, r10w
#define ADC_R15W_R11W adc r15w, r11w
#define ADC_R15W_R12W adc r15w, r12w
#define ADC_R15W_R13W adc r15w, r13w
#define ADC_R15W_R14W adc r15w, r14w
#define ADC_R15W_R15W adc r15w, r15w

#define ADC_AX_(VALUE) adc ax, VALUE
#define ADC_BX_(VALUE) adc bx, VALUE
#define ADC_CX_(VALUE) adc cx, VALUE
#define ADC_DX_(VALUE) adc dx, VALUE
#define ADC_DI_(VALUE) adc di, VALUE
#define ADC_SI_(VALUE) adc si, VALUE
#define ADC_BP_(VALUE) adc bp, VALUE
#define ADC_SP_(VALUE) adc sp, VALUE
#define ADC_R8W_(VALUE) adc r8w, VALUE
#define ADC_R9W_(VALUE) adc r9w, VALUE
#define ADC_R10W_(VALUE) adc r10w, VALUE
#define ADC_R11W_(VALUE) adc r11w, VALUE
#define ADC_R12W_(VALUE) adc r12w, VALUE
#define ADC_R13W_(VALUE) adc r13w, VALUE
#define ADC_R14W_(VALUE) adc r14w, VALUE
#define ADC_R15W_(VALUE) adc r15w, VALUE
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
