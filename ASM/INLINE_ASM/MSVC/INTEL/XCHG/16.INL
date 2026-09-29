#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AL_AL xchg al, al
#define XCHG_AL_BL xchg al, bl
#define XCHG_AL_CL xchg al, cl
#define XCHG_AL_DL xchg al, dl

#define XCHG_BL_AL xchg bl, al
#define XCHG_BL_BL xchg bl, bl
#define XCHG_BL_CL xchg bl, cl
#define XCHG_BL_DL xchg bl, dl

#define XCHG_CL_AL xchg cl, al
#define XCHG_CL_BL xchg cl, bl
#define XCHG_CL_CL xchg cl, cl
#define XCHG_CL_DL xchg cl, dl

#define XCHG_DL_AL xchg dl, al
#define XCHG_DL_BL xchg dl, bl
#define XCHG_DL_CL xchg dl, cl
#define XCHG_DL_DL xchg dl, dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AL_AL xchg al, al
#define XCHG_AL_BL xchg al, bl
#define XCHG_AL_CL xchg al, cl
#define XCHG_AL_DL xchg al, dl

#define XCHG_BL_AL xchg bl, al
#define XCHG_BL_BL xchg bl, bl
#define XCHG_BL_CL xchg bl, cl
#define XCHG_BL_DL xchg bl, dl

#define XCHG_CL_AL xchg cl, al
#define XCHG_CL_BL xchg cl, bl
#define XCHG_CL_CL xchg cl, cl
#define XCHG_CL_DL xchg cl, dl

#define XCHG_DL_AL xchg dl, al
#define XCHG_DL_BL xchg dl, bl
#define XCHG_DL_CL xchg dl, cl
#define XCHG_DL_DL xchg dl, dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AL_AL xchg al, al
#define XCHG_AL_BL xchg al, bl
#define XCHG_AL_CL xchg al, cl
#define XCHG_AL_DL xchg al, dl
#define XCHG_AL_DIL xchg al, dil
#define XCHG_AL_SIL xchg al, sil
#define XCHG_AL_BPL xchg al, bpl
#define XCHG_AL_SPL xchg al, spl
#define XCHG_AL_R8B xchg al, r8b
#define XCHG_AL_R9B xchg al, r9b
#define XCHG_AL_R10B xchg al, r10b
#define XCHG_AL_R11B xchg al, r11b
#define XCHG_AL_R12B xchg al, r12b
#define XCHG_AL_R13B xchg al, r13b
#define XCHG_AL_R14B xchg al, r14b
#define XCHG_AL_R15B xchg al, r15b

#define XCHG_BL_AL xchg bl, al
#define XCHG_BL_BL xchg bl, bl
#define XCHG_BL_CL xchg bl, cl
#define XCHG_BL_DL xchg bl, dl
#define XCHG_BL_DIL xchg bl, dil
#define XCHG_BL_SIL xchg bl, sil
#define XCHG_BL_BPL xchg bl, bpl
#define XCHG_BL_SPL xchg bl, spl
#define XCHG_BL_R8B xchg bl, r8b
#define XCHG_BL_R9B xchg bl, r9b
#define XCHG_BL_R10B xchg bl, r10b
#define XCHG_BL_R11B xchg bl, r11b
#define XCHG_BL_R12B xchg bl, r12b
#define XCHG_BL_R13B xchg bl, r13b
#define XCHG_BL_R14B xchg bl, r14b
#define XCHG_BL_R15B xchg bl, r15b

#define XCHG_CL_AL xchg cl, al
#define XCHG_CL_BL xchg cl, bl
#define XCHG_CL_CL xchg cl, cl
#define XCHG_CL_DL xchg cl, dl
#define XCHG_CL_DIL xchg cl, dil
#define XCHG_CL_SIL xchg cl, sil
#define XCHG_CL_BPL xchg cl, bpl
#define XCHG_CL_SPL xchg cl, spl
#define XCHG_CL_R8B xchg cl, r8b
#define XCHG_CL_R9B xchg cl, r9b
#define XCHG_CL_R10B xchg cl, r10b
#define XCHG_CL_R11B xchg cl, r11b
#define XCHG_CL_R12B xchg cl, r12b
#define XCHG_CL_R13B xchg cl, r13b
#define XCHG_CL_R14B xchg cl, r14b
#define XCHG_CL_R15B xchg cl, r15b

#define XCHG_DL_AL xchg dl, al
#define XCHG_DL_BL xchg dl, bl
#define XCHG_DL_CL xchg dl, cl
#define XCHG_DL_DL xchg dl, dl
#define XCHG_DL_DIL xchg dl, dil
#define XCHG_DL_SIL xchg dl, sil
#define XCHG_DL_BPL xchg dl, bpl
#define XCHG_DL_SPL xchg dl, spl
#define XCHG_DL_R8B xchg dl, r8b
#define XCHG_DL_R9B xchg dl, r9b
#define XCHG_DL_R10B xchg dl, r10b
#define XCHG_DL_R11B xchg dl, r11b
#define XCHG_DL_R12B xchg dl, r12b
#define XCHG_DL_R13B xchg dl, r13b
#define XCHG_DL_R14B xchg dl, r14b
#define XCHG_DL_R15B xchg dl, r15b

#define XCHG_DIL_AL xchg dil, al
#define XCHG_DIL_BL xchg dil, bl
#define XCHG_DIL_CL xchg dil, cl
#define XCHG_DIL_DL xchg dil, dl
#define XCHG_DIL_DIL xchg dil, dil
#define XCHG_DIL_SIL xchg dil, sil
#define XCHG_DIL_BPL xchg dil, bpl
#define XCHG_DIL_SPL xchg dil, spl
#define XCHG_DIL_R8B xchg dil, r8b
#define XCHG_DIL_R9B xchg dil, r9b
#define XCHG_DIL_R10B xchg dil, r10b
#define XCHG_DIL_R11B xchg dil, r11b
#define XCHG_DIL_R12B xchg dil, r12b
#define XCHG_DIL_R13B xchg dil, r13b
#define XCHG_DIL_R14B xchg dil, r14b
#define XCHG_DIL_R15B xchg dil, r15b

#define XCHG_SIL_AL xchg sil, al
#define XCHG_SIL_BL xchg sil, bl
#define XCHG_SIL_CL xchg sil, cl
#define XCHG_SIL_DL xchg sil, dl
#define XCHG_SIL_DIL xchg sil, dil
#define XCHG_SIL_SIL xchg sil, sil
#define XCHG_SIL_BPL xchg sil, bpl
#define XCHG_SIL_SPL xchg sil, spl
#define XCHG_SIL_R8B xchg sil, r8b
#define XCHG_SIL_R9B xchg sil, r9b
#define XCHG_SIL_R10B xchg sil, r10b
#define XCHG_SIL_R11B xchg sil, r11b
#define XCHG_SIL_R12B xchg sil, r12b
#define XCHG_SIL_R13B xchg sil, r13b
#define XCHG_SIL_R14B xchg sil, r14b
#define XCHG_SIL_R15B xchg sil, r15b

#define XCHG_BPL_AL xchg bpl, al
#define XCHG_BPL_BL xchg bpl, bl
#define XCHG_BPL_CL xchg bpl, cl
#define XCHG_BPL_DL xchg bpl, dl
#define XCHG_BPL_DIL xchg bpl, dil
#define XCHG_BPL_SIL xchg bpl, sil
#define XCHG_BPL_BPL xchg bpl, bpl
#define XCHG_BPL_SPL xchg bpl, spl
#define XCHG_BPL_R8B xchg bpl, r8b
#define XCHG_BPL_R9B xchg bpl, r9b
#define XCHG_BPL_R10B xchg bpl, r10b
#define XCHG_BPL_R11B xchg bpl, r11b
#define XCHG_BPL_R12B xchg bpl, r12b
#define XCHG_BPL_R13B xchg bpl, r13b
#define XCHG_BPL_R14B xchg bpl, r14b
#define XCHG_BPL_R15B xchg bpl, r15b

#define XCHG_SPL_AL xchg spl, al
#define XCHG_SPL_BL xchg spl, bl
#define XCHG_SPL_CL xchg spl, cl
#define XCHG_SPL_DL xchg spl, dl
#define XCHG_SPL_DIL xchg spl, dil
#define XCHG_SPL_SIL xchg spl, sil
#define XCHG_SPL_BPL xchg spl, bpl
#define XCHG_SPL_SPL xchg spl, spl
#define XCHG_SPL_R8B xchg spl, r8b
#define XCHG_SPL_R9B xchg spl, r9b
#define XCHG_SPL_R10B xchg spl, r10b
#define XCHG_SPL_R11B xchg spl, r11b
#define XCHG_SPL_R12B xchg spl, r12b
#define XCHG_SPL_R13B xchg spl, r13b
#define XCHG_SPL_R14B xchg spl, r14b
#define XCHG_SPL_R15B xchg spl, r15b

#define XCHG_R8B_AL xchg r8b, al
#define XCHG_R8B_BL xchg r8b, bl
#define XCHG_R8B_CL xchg r8b, cl
#define XCHG_R8B_DL xchg r8b, dl
#define XCHG_R8B_DIL xchg r8b, dil
#define XCHG_R8B_SIL xchg r8b, sil
#define XCHG_R8B_BPL xchg r8b, bpl
#define XCHG_R8B_SPL xchg r8b, spl
#define XCHG_R8B_R8B xchg r8b, r8b
#define XCHG_R8B_R9B xchg r8b, r9b
#define XCHG_R8B_R10B xchg r8b, r10b
#define XCHG_R8B_R11B xchg r8b, r11b
#define XCHG_R8B_R12B xchg r8b, r12b
#define XCHG_R8B_R13B xchg r8b, r13b
#define XCHG_R8B_R14B xchg r8b, r14b
#define XCHG_R8B_R15B xchg r8b, r15b

#define XCHG_R9B_AL xchg r9b, al
#define XCHG_R9B_BL xchg r9b, bl
#define XCHG_R9B_CL xchg r9b, cl
#define XCHG_R9B_DL xchg r9b, dl
#define XCHG_R9B_DIL xchg r9b, dil
#define XCHG_R9B_SIL xchg r9b, sil
#define XCHG_R9B_BPL xchg r9b, bpl
#define XCHG_R9B_SPL xchg r9b, spl
#define XCHG_R9B_R8B xchg r9b, r8b
#define XCHG_R9B_R9B xchg r9b, r9b
#define XCHG_R9B_R10B xchg r9b, r10b
#define XCHG_R9B_R11B xchg r9b, r11b
#define XCHG_R9B_R12B xchg r9b, r12b
#define XCHG_R9B_R13B xchg r9b, r13b
#define XCHG_R9B_R14B xchg r9b, r14b
#define XCHG_R9B_R15B xchg r9b, r15b

#define XCHG_R10B_AL xchg r10b, al
#define XCHG_R10B_BL xchg r10b, bl
#define XCHG_R10B_CL xchg r10b, cl
#define XCHG_R10B_DL xchg r10b, dl
#define XCHG_R10B_DIL xchg r10b, dil
#define XCHG_R10B_SIL xchg r10b, sil
#define XCHG_R10B_BPL xchg r10b, bpl
#define XCHG_R10B_SPL xchg r10b, spl
#define XCHG_R10B_R8B xchg r10b, r8b
#define XCHG_R10B_R9B xchg r10b, r9b
#define XCHG_R10B_R10B xchg r10b, r10b
#define XCHG_R10B_R11B xchg r10b, r11b
#define XCHG_R10B_R12B xchg r10b, r12b
#define XCHG_R10B_R13B xchg r10b, r13b
#define XCHG_R10B_R14B xchg r10b, r14b
#define XCHG_R10B_R15B xchg r10b, r15b

#define XCHG_R11B_AL xchg r11b, al
#define XCHG_R11B_BL xchg r11b, bl
#define XCHG_R11B_CL xchg r11b, cl
#define XCHG_R11B_DL xchg r11b, dl
#define XCHG_R11B_DIL xchg r11b, dil
#define XCHG_R11B_SIL xchg r11b, sil
#define XCHG_R11B_BPL xchg r11b, bpl
#define XCHG_R11B_SPL xchg r11b, spl
#define XCHG_R11B_R8B xchg r11b, r8b
#define XCHG_R11B_R9B xchg r11b, r9b
#define XCHG_R11B_R10B xchg r11b, r10b
#define XCHG_R11B_R11B xchg r11b, r11b
#define XCHG_R11B_R12B xchg r11b, r12b
#define XCHG_R11B_R13B xchg r11b, r13b
#define XCHG_R11B_R14B xchg r11b, r14b
#define XCHG_R11B_R15B xchg r11b, r15b

#define XCHG_R12B_AL xchg r12b, al
#define XCHG_R12B_BL xchg r12b, bl
#define XCHG_R12B_CL xchg r12b, cl
#define XCHG_R12B_DL xchg r12b, dl
#define XCHG_R12B_DIL xchg r12b, dil
#define XCHG_R12B_SIL xchg r12b, sil
#define XCHG_R12B_BPL xchg r12b, bpl
#define XCHG_R12B_SPL xchg r12b, spl
#define XCHG_R12B_R8B xchg r12b, r8b
#define XCHG_R12B_R9B xchg r12b, r9b
#define XCHG_R12B_R10B xchg r12b, r10b
#define XCHG_R12B_R11B xchg r12b, r11b
#define XCHG_R12B_R12B xchg r12b, r12b
#define XCHG_R12B_R13B xchg r12b, r13b
#define XCHG_R12B_R14B xchg r12b, r14b
#define XCHG_R12B_R15B xchg r12b, r15b

#define XCHG_R13B_AL xchg r13b, al
#define XCHG_R13B_BL xchg r13b, bl
#define XCHG_R13B_CL xchg r13b, cl
#define XCHG_R13B_DL xchg r13b, dl
#define XCHG_R13B_DIL xchg r13b, dil
#define XCHG_R13B_SIL xchg r13b, sil
#define XCHG_R13B_BPL xchg r13b, bpl
#define XCHG_R13B_SPL xchg r13b, spl
#define XCHG_R13B_R8B xchg r13b, r8b
#define XCHG_R13B_R9B xchg r13b, r9b
#define XCHG_R13B_R10B xchg r13b, r10b
#define XCHG_R13B_R11B xchg r13b, r11b
#define XCHG_R13B_R12B xchg r13b, r12b
#define XCHG_R13B_R13B xchg r13b, r13b
#define XCHG_R13B_R14B xchg r13b, r14b
#define XCHG_R13B_R15B xchg r13b, r15b

#define XCHG_R14B_AL xchg r14b, al
#define XCHG_R14B_BL xchg r14b, bl
#define XCHG_R14B_CL xchg r14b, cl
#define XCHG_R14B_DL xchg r14b, dl
#define XCHG_R14B_DIL xchg r14b, dil
#define XCHG_R14B_SIL xchg r14b, sil
#define XCHG_R14B_BPL xchg r14b, bpl
#define XCHG_R14B_SPL xchg r14b, spl
#define XCHG_R14B_R8B xchg r14b, r8b
#define XCHG_R14B_R9B xchg r14b, r9b
#define XCHG_R14B_R10B xchg r14b, r10b
#define XCHG_R14B_R11B xchg r14b, r11b
#define XCHG_R14B_R12B xchg r14b, r12b
#define XCHG_R14B_R13B xchg r14b, r13b
#define XCHG_R14B_R14B xchg r14b, r14b
#define XCHG_R14B_R15B xchg r14b, r15b

#define XCHG_R15B_AL xchg r15b, al
#define XCHG_R15B_BL xchg r15b, bl
#define XCHG_R15B_CL xchg r15b, cl
#define XCHG_R15B_DL xchg r15b, dl
#define XCHG_R15B_DIL xchg r15b, dil
#define XCHG_R15B_SIL xchg r15b, sil
#define XCHG_R15B_BPL xchg r15b, bpl
#define XCHG_R15B_SPL xchg r15b, spl
#define XCHG_R15B_R8B xchg r15b, r8b
#define XCHG_R15B_R9B xchg r15b, r9b
#define XCHG_R15B_R10B xchg r15b, r10b
#define XCHG_R15B_R11B xchg r15b, r11b
#define XCHG_R15B_R12B xchg r15b, r12b
#define XCHG_R15B_R13B xchg r15b, r13b
#define XCHG_R15B_R14B xchg r15b, r14b
#define XCHG_R15B_R15B xchg r15b, r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define XCHG_AX_AX xchg ax, ax
#define XCHG_AX_BX xchg ax, bx
#define XCHG_AX_CX xchg ax, cx
#define XCHG_AX_DX xchg ax, dx
#define XCHG_AX_DI xchg ax, di
#define XCHG_AX_SI xchg ax, si
#define XCHG_AX_BP xchg ax, bp
#define XCHG_AX_SP xchg ax, sp

#define XCHG_BX_AX xchg bx, ax
#define XCHG_BX_BX xchg bx, bx
#define XCHG_BX_CX xchg bx, cx
#define XCHG_BX_DX xchg bx, dx
#define XCHG_BX_DI xchg bx, di
#define XCHG_BX_SI xchg bx, si
#define XCHG_BX_BP xchg bx, bp
#define XCHG_BX_SP xchg bx, sp

#define XCHG_CX_AX xchg cx, ax
#define XCHG_CX_BX xchg cx, bx
#define XCHG_CX_CX xchg cx, cx
#define XCHG_CX_DX xchg cx, dx
#define XCHG_CX_DI xchg cx, di
#define XCHG_CX_SI xchg cx, si
#define XCHG_CX_BP xchg cx, bp
#define XCHG_CX_SP xchg cx, sp

#define XCHG_DX_AX xchg dx, ax
#define XCHG_DX_BX xchg dx, bx
#define XCHG_DX_CX xchg dx, cx
#define XCHG_DX_DX xchg dx, dx
#define XCHG_DX_DI xchg dx, di
#define XCHG_DX_SI xchg dx, si
#define XCHG_DX_BP xchg dx, bp
#define XCHG_DX_SP xchg dx, sp

#define XCHG_DI_AX xchg di, ax
#define XCHG_DI_BX xchg di, bx
#define XCHG_DI_CX xchg di, cx
#define XCHG_DI_DX xchg di, dx
#define XCHG_DI_DI xchg di, di
#define XCHG_DI_SI xchg di, si
#define XCHG_DI_BP xchg di, bp
#define XCHG_DI_SP xchg di, sp

#define XCHG_SI_AX xchg si, ax
#define XCHG_SI_BX xchg si, bx
#define XCHG_SI_CX xchg si, cx
#define XCHG_SI_DX xchg si, dx
#define XCHG_SI_DI xchg si, di
#define XCHG_SI_SI xchg si, si
#define XCHG_SI_BP xchg si, bp
#define XCHG_SI_SP xchg si, sp

#define XCHG_BP_AX xchg bp, ax
#define XCHG_BP_BX xchg bp, bx
#define XCHG_BP_CX xchg bp, cx
#define XCHG_BP_DX xchg bp, dx
#define XCHG_BP_DI xchg bp, di
#define XCHG_BP_SI xchg bp, si
#define XCHG_BP_BP xchg bp, bp
#define XCHG_BP_SP xchg bp, sp

#define XCHG_SP_AX xchg sp, ax
#define XCHG_SP_BX xchg sp, bx
#define XCHG_SP_CX xchg sp, cx
#define XCHG_SP_DX xchg sp, dx
#define XCHG_SP_DI xchg sp, di
#define XCHG_SP_SI xchg sp, si
#define XCHG_SP_BP xchg sp, bp
#define XCHG_SP_SP xchg sp, sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XCHG_AX_AX xchg ax, ax
#define XCHG_AX_BX xchg ax, bx
#define XCHG_AX_CX xchg ax, cx
#define XCHG_AX_DX xchg ax, dx
#define XCHG_AX_DI xchg ax, di
#define XCHG_AX_SI xchg ax, si
#define XCHG_AX_BP xchg ax, bp
#define XCHG_AX_SP xchg ax, sp

#define XCHG_BX_AX xchg bx, ax
#define XCHG_BX_BX xchg bx, bx
#define XCHG_BX_CX xchg bx, cx
#define XCHG_BX_DX xchg bx, dx
#define XCHG_BX_DI xchg bx, di
#define XCHG_BX_SI xchg bx, si
#define XCHG_BX_BP xchg bx, bp
#define XCHG_BX_SP xchg bx, sp

#define XCHG_CX_AX xchg cx, ax
#define XCHG_CX_BX xchg cx, bx
#define XCHG_CX_CX xchg cx, cx
#define XCHG_CX_DX xchg cx, dx
#define XCHG_CX_DI xchg cx, di
#define XCHG_CX_SI xchg cx, si
#define XCHG_CX_BP xchg cx, bp
#define XCHG_CX_SP xchg cx, sp

#define XCHG_DX_AX xchg dx, ax
#define XCHG_DX_BX xchg dx, bx
#define XCHG_DX_CX xchg dx, cx
#define XCHG_DX_DX xchg dx, dx
#define XCHG_DX_DI xchg dx, di
#define XCHG_DX_SI xchg dx, si
#define XCHG_DX_BP xchg dx, bp
#define XCHG_DX_SP xchg dx, sp

#define XCHG_DI_AX xchg di, ax
#define XCHG_DI_BX xchg di, bx
#define XCHG_DI_CX xchg di, cx
#define XCHG_DI_DX xchg di, dx
#define XCHG_DI_DI xchg di, di
#define XCHG_DI_SI xchg di, si
#define XCHG_DI_BP xchg di, bp
#define XCHG_DI_SP xchg di, sp

#define XCHG_SI_AX xchg si, ax
#define XCHG_SI_BX xchg si, bx
#define XCHG_SI_CX xchg si, cx
#define XCHG_SI_DX xchg si, dx
#define XCHG_SI_DI xchg si, di
#define XCHG_SI_SI xchg si, si
#define XCHG_SI_BP xchg si, bp
#define XCHG_SI_SP xchg si, sp

#define XCHG_BP_AX xchg bp, ax
#define XCHG_BP_BX xchg bp, bx
#define XCHG_BP_CX xchg bp, cx
#define XCHG_BP_DX xchg bp, dx
#define XCHG_BP_DI xchg bp, di
#define XCHG_BP_SI xchg bp, si
#define XCHG_BP_BP xchg bp, bp
#define XCHG_BP_SP xchg bp, sp

#define XCHG_SP_AX xchg sp, ax
#define XCHG_SP_BX xchg sp, bx
#define XCHG_SP_CX xchg sp, cx
#define XCHG_SP_DX xchg sp, dx
#define XCHG_SP_DI xchg sp, di
#define XCHG_SP_SI xchg sp, si
#define XCHG_SP_BP xchg sp, bp
#define XCHG_SP_SP xchg sp, sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XCHG_AX_AX xchg ax, ax
#define XCHG_AX_BX xchg ax, bx
#define XCHG_AX_CX xchg ax, cx
#define XCHG_AX_DX xchg ax, dx
#define XCHG_AX_DI xchg ax, di
#define XCHG_AX_SI xchg ax, si
#define XCHG_AX_BP xchg ax, bp
#define XCHG_AX_SP xchg ax, sp
#define XCHG_AX_R8W xchg ax, r8w
#define XCHG_AX_R9W xchg ax, r9w
#define XCHG_AX_R10W xchg ax, r10w
#define XCHG_AX_R11W xchg ax, r11w
#define XCHG_AX_R12W xchg ax, r12w
#define XCHG_AX_R13W xchg ax, r13w
#define XCHG_AX_R14W xchg ax, r14w
#define XCHG_AX_R15W xchg ax, r15w

#define XCHG_BX_AX xchg bx, ax
#define XCHG_BX_BX xchg bx, bx
#define XCHG_BX_CX xchg bx, cx
#define XCHG_BX_DX xchg bx, dx
#define XCHG_BX_DI xchg bx, di
#define XCHG_BX_SI xchg bx, si
#define XCHG_BX_BP xchg bx, bp
#define XCHG_BX_SP xchg bx, sp
#define XCHG_BX_R8W xchg bx, r8w
#define XCHG_BX_R9W xchg bx, r9w
#define XCHG_BX_R10W xchg bx, r10w
#define XCHG_BX_R11W xchg bx, r11w
#define XCHG_BX_R12W xchg bx, r12w
#define XCHG_BX_R13W xchg bx, r13w
#define XCHG_BX_R14W xchg bx, r14w
#define XCHG_BX_R15W xchg bx, r15w

#define XCHG_CX_AX xchg cx, ax
#define XCHG_CX_BX xchg cx, bx
#define XCHG_CX_CX xchg cx, cx
#define XCHG_CX_DX xchg cx, dx
#define XCHG_CX_DI xchg cx, di
#define XCHG_CX_SI xchg cx, si
#define XCHG_CX_BP xchg cx, bp
#define XCHG_CX_SP xchg cx, sp
#define XCHG_CX_R8W xchg cx, r8w
#define XCHG_CX_R9W xchg cx, r9w
#define XCHG_CX_R10W xchg cx, r10w
#define XCHG_CX_R11W xchg cx, r11w
#define XCHG_CX_R12W xchg cx, r12w
#define XCHG_CX_R13W xchg cx, r13w
#define XCHG_CX_R14W xchg cx, r14w
#define XCHG_CX_R15W xchg cx, r15w

#define XCHG_DX_AX xchg dx, ax
#define XCHG_DX_BX xchg dx, bx
#define XCHG_DX_CX xchg dx, cx
#define XCHG_DX_DX xchg dx, dx
#define XCHG_DX_DI xchg dx, di
#define XCHG_DX_SI xchg dx, si
#define XCHG_DX_BP xchg dx, bp
#define XCHG_DX_SP xchg dx, sp
#define XCHG_DX_R8W xchg dx, r8w
#define XCHG_DX_R9W xchg dx, r9w
#define XCHG_DX_R10W xchg dx, r10w
#define XCHG_DX_R11W xchg dx, r11w
#define XCHG_DX_R12W xchg dx, r12w
#define XCHG_DX_R13W xchg dx, r13w
#define XCHG_DX_R14W xchg dx, r14w
#define XCHG_DX_R15W xchg dx, r15w

#define XCHG_DI_AX xchg di, ax
#define XCHG_DI_BX xchg di, bx
#define XCHG_DI_CX xchg di, cx
#define XCHG_DI_DX xchg di, dx
#define XCHG_DI_DI xchg di, di
#define XCHG_DI_SI xchg di, si
#define XCHG_DI_BP xchg di, bp
#define XCHG_DI_SP xchg di, sp
#define XCHG_DI_R8W xchg di, r8w
#define XCHG_DI_R9W xchg di, r9w
#define XCHG_DI_R10W xchg di, r10w
#define XCHG_DI_R11W xchg di, r11w
#define XCHG_DI_R12W xchg di, r12w
#define XCHG_DI_R13W xchg di, r13w
#define XCHG_DI_R14W xchg di, r14w
#define XCHG_DI_R15W xchg di, r15w

#define XCHG_SI_AX xchg si, ax
#define XCHG_SI_BX xchg si, bx
#define XCHG_SI_CX xchg si, cx
#define XCHG_SI_DX xchg si, dx
#define XCHG_SI_DI xchg si, di
#define XCHG_SI_SI xchg si, si
#define XCHG_SI_BP xchg si, bp
#define XCHG_SI_SP xchg si, sp
#define XCHG_SI_R8W xchg si, r8w
#define XCHG_SI_R9W xchg si, r9w
#define XCHG_SI_R10W xchg si, r10w
#define XCHG_SI_R11W xchg si, r11w
#define XCHG_SI_R12W xchg si, r12w
#define XCHG_SI_R13W xchg si, r13w
#define XCHG_SI_R14W xchg si, r14w
#define XCHG_SI_R15W xchg si, r15w

#define XCHG_BP_AX xchg bp, ax
#define XCHG_BP_BX xchg bp, bx
#define XCHG_BP_CX xchg bp, cx
#define XCHG_BP_DX xchg bp, dx
#define XCHG_BP_DI xchg bp, di
#define XCHG_BP_SI xchg bp, si
#define XCHG_BP_BP xchg bp, bp
#define XCHG_BP_SP xchg bp, sp
#define XCHG_BP_R8W xchg bp, r8w
#define XCHG_BP_R9W xchg bp, r9w
#define XCHG_BP_R10W xchg bp, r10w
#define XCHG_BP_R11W xchg bp, r11w
#define XCHG_BP_R12W xchg bp, r12w
#define XCHG_BP_R13W xchg bp, r13w
#define XCHG_BP_R14W xchg bp, r14w
#define XCHG_BP_R15W xchg bp, r15w

#define XCHG_SP_AX xchg sp, ax
#define XCHG_SP_BX xchg sp, bx
#define XCHG_SP_CX xchg sp, cx
#define XCHG_SP_DX xchg sp, dx
#define XCHG_SP_DI xchg sp, di
#define XCHG_SP_SI xchg sp, si
#define XCHG_SP_BP xchg sp, bp
#define XCHG_SP_SP xchg sp, sp
#define XCHG_SP_R8W xchg sp, r8w
#define XCHG_SP_R9W xchg sp, r9w
#define XCHG_SP_R10W xchg sp, r10w
#define XCHG_SP_R11W xchg sp, r11w
#define XCHG_SP_R12W xchg sp, r12w
#define XCHG_SP_R13W xchg sp, r13w
#define XCHG_SP_R14W xchg sp, r14w
#define XCHG_SP_R15W xchg sp, r15w

#define XCHG_R8W_AX xchg r8w, ax
#define XCHG_R8W_BX xchg r8w, bx
#define XCHG_R8W_CX xchg r8w, cx
#define XCHG_R8W_DX xchg r8w, dx
#define XCHG_R8W_DI xchg r8w, di
#define XCHG_R8W_SI xchg r8w, si
#define XCHG_R8W_BP xchg r8w, bp
#define XCHG_R8W_SP xchg r8w, sp
#define XCHG_R8W_R8W xchg r8w, r8w
#define XCHG_R8W_R9W xchg r8w, r9w
#define XCHG_R8W_R10W xchg r8w, r10w
#define XCHG_R8W_R11W xchg r8w, r11w
#define XCHG_R8W_R12W xchg r8w, r12w
#define XCHG_R8W_R13W xchg r8w, r13w
#define XCHG_R8W_R14W xchg r8w, r14w
#define XCHG_R8W_R15W xchg r8w, r15w

#define XCHG_R9W_AX xchg r9w, ax
#define XCHG_R9W_BX xchg r9w, bx
#define XCHG_R9W_CX xchg r9w, cx
#define XCHG_R9W_DX xchg r9w, dx
#define XCHG_R9W_DI xchg r9w, di
#define XCHG_R9W_SI xchg r9w, si
#define XCHG_R9W_BP xchg r9w, bp
#define XCHG_R9W_SP xchg r9w, sp
#define XCHG_R9W_R8W xchg r9w, r8w
#define XCHG_R9W_R9W xchg r9w, r9w
#define XCHG_R9W_R10W xchg r9w, r10w
#define XCHG_R9W_R11W xchg r9w, r11w
#define XCHG_R9W_R12W xchg r9w, r12w
#define XCHG_R9W_R13W xchg r9w, r13w
#define XCHG_R9W_R14W xchg r9w, r14w
#define XCHG_R9W_R15W xchg r9w, r15w

#define XCHG_R10W_AX xchg r10w, ax
#define XCHG_R10W_BX xchg r10w, bx
#define XCHG_R10W_CX xchg r10w, cx
#define XCHG_R10W_DX xchg r10w, dx
#define XCHG_R10W_DI xchg r10w, di
#define XCHG_R10W_SI xchg r10w, si
#define XCHG_R10W_BP xchg r10w, bp
#define XCHG_R10W_SP xchg r10w, sp
#define XCHG_R10W_R8W xchg r10w, r8w
#define XCHG_R10W_R9W xchg r10w, r9w
#define XCHG_R10W_R10W xchg r10w, r10w
#define XCHG_R10W_R11W xchg r10w, r11w
#define XCHG_R10W_R12W xchg r10w, r12w
#define XCHG_R10W_R13W xchg r10w, r13w
#define XCHG_R10W_R14W xchg r10w, r14w
#define XCHG_R10W_R15W xchg r10w, r15w

#define XCHG_R11W_AX xchg r11w, ax
#define XCHG_R11W_BX xchg r11w, bx
#define XCHG_R11W_CX xchg r11w, cx
#define XCHG_R11W_DX xchg r11w, dx
#define XCHG_R11W_DI xchg r11w, di
#define XCHG_R11W_SI xchg r11w, si
#define XCHG_R11W_BP xchg r11w, bp
#define XCHG_R11W_SP xchg r11w, sp
#define XCHG_R11W_R8W xchg r11w, r8w
#define XCHG_R11W_R9W xchg r11w, r9w
#define XCHG_R11W_R10W xchg r11w, r10w
#define XCHG_R11W_R11W xchg r11w, r11w
#define XCHG_R11W_R12W xchg r11w, r12w
#define XCHG_R11W_R13W xchg r11w, r13w
#define XCHG_R11W_R14W xchg r11w, r14w
#define XCHG_R11W_R15W xchg r11w, r15w

#define XCHG_R12W_AX xchg r12w, ax
#define XCHG_R12W_BX xchg r12w, bx
#define XCHG_R12W_CX xchg r12w, cx
#define XCHG_R12W_DX xchg r12w, dx
#define XCHG_R12W_DI xchg r12w, di
#define XCHG_R12W_SI xchg r12w, si
#define XCHG_R12W_BP xchg r12w, bp
#define XCHG_R12W_SP xchg r12w, sp
#define XCHG_R12W_R8W xchg r12w, r8w
#define XCHG_R12W_R9W xchg r12w, r9w
#define XCHG_R12W_R10W xchg r12w, r10w
#define XCHG_R12W_R11W xchg r12w, r11w
#define XCHG_R12W_R12W xchg r12w, r12w
#define XCHG_R12W_R13W xchg r12w, r13w
#define XCHG_R12W_R14W xchg r12w, r14w
#define XCHG_R12W_R15W xchg r12w, r15w

#define XCHG_R13W_AX xchg r13w, ax
#define XCHG_R13W_BX xchg r13w, bx
#define XCHG_R13W_CX xchg r13w, cx
#define XCHG_R13W_DX xchg r13w, dx
#define XCHG_R13W_DI xchg r13w, di
#define XCHG_R13W_SI xchg r13w, si
#define XCHG_R13W_BP xchg r13w, bp
#define XCHG_R13W_SP xchg r13w, sp
#define XCHG_R13W_R8W xchg r13w, r8w
#define XCHG_R13W_R9W xchg r13w, r9w
#define XCHG_R13W_R10W xchg r13w, r10w
#define XCHG_R13W_R11W xchg r13w, r11w
#define XCHG_R13W_R12W xchg r13w, r12w
#define XCHG_R13W_R13W xchg r13w, r13w
#define XCHG_R13W_R14W xchg r13w, r14w
#define XCHG_R13W_R15W xchg r13w, r15w

#define XCHG_R14W_AX xchg r14w, ax
#define XCHG_R14W_BX xchg r14w, bx
#define XCHG_R14W_CX xchg r14w, cx
#define XCHG_R14W_DX xchg r14w, dx
#define XCHG_R14W_DI xchg r14w, di
#define XCHG_R14W_SI xchg r14w, si
#define XCHG_R14W_BP xchg r14w, bp
#define XCHG_R14W_SP xchg r14w, sp
#define XCHG_R14W_R8W xchg r14w, r8w
#define XCHG_R14W_R9W xchg r14w, r9w
#define XCHG_R14W_R10W xchg r14w, r10w
#define XCHG_R14W_R11W xchg r14w, r11w
#define XCHG_R14W_R12W xchg r14w, r12w
#define XCHG_R14W_R13W xchg r14w, r13w
#define XCHG_R14W_R14W xchg r14w, r14w
#define XCHG_R14W_R15W xchg r14w, r15w

#define XCHG_R15W_AX xchg r15w, ax
#define XCHG_R15W_BX xchg r15w, bx
#define XCHG_R15W_CX xchg r15w, cx
#define XCHG_R15W_DX xchg r15w, dx
#define XCHG_R15W_DI xchg r15w, di
#define XCHG_R15W_SI xchg r15w, si
#define XCHG_R15W_BP xchg r15w, bp
#define XCHG_R15W_SP xchg r15w, sp
#define XCHG_R15W_R8W xchg r15w, r8w
#define XCHG_R15W_R9W xchg r15w, r9w
#define XCHG_R15W_R10W xchg r15w, r10w
#define XCHG_R15W_R11W xchg r15w, r11w
#define XCHG_R15W_R12W xchg r15w, r12w
#define XCHG_R15W_R13W xchg r15w, r13w
#define XCHG_R15W_R14W xchg r15w, r14w
#define XCHG_R15W_R15W xchg r15w, r15w
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
