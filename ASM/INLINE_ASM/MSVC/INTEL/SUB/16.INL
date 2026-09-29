#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define SUB_AL_AL sub al, al
#define SUB_AL_BL sub al, bl
#define SUB_AL_CL sub al, cl
#define SUB_AL_DL sub al, dl

#define SUB_BL_AL sub bl, al
#define SUB_BL_BL sub bl, bl
#define SUB_BL_CL sub bl, cl
#define SUB_BL_DL sub bl, dl

#define SUB_CL_AL sub cl, al
#define SUB_CL_BL sub cl, bl
#define SUB_CL_CL sub cl, cl
#define SUB_CL_DL sub cl, dl

#define SUB_DL_AL sub dl, al
#define SUB_DL_BL sub dl, bl
#define SUB_DL_CL sub dl, cl
#define SUB_DL_DL sub dl, dl

#define SUB_AL_(VALUE) sub al, VALUE
#define SUB_BL_(VALUE) sub bl, VALUE
#define SUB_CL_(VALUE) sub cl, VALUE
#define SUB_DL_(VALUE) sub dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AL_AL sub al, al
#define SUB_AL_BL sub al, bl
#define SUB_AL_CL sub al, cl
#define SUB_AL_DL sub al, dl

#define SUB_BL_AL sub bl, al
#define SUB_BL_BL sub bl, bl
#define SUB_BL_CL sub bl, cl
#define SUB_BL_DL sub bl, dl

#define SUB_CL_AL sub cl, al
#define SUB_CL_BL sub cl, bl
#define SUB_CL_CL sub cl, cl
#define SUB_CL_DL sub cl, dl

#define SUB_DL_AL sub dl, al
#define SUB_DL_BL sub dl, bl
#define SUB_DL_CL sub dl, cl
#define SUB_DL_DL sub dl, dl

#define SUB_AL_(VALUE) sub al, VALUE
#define SUB_BL_(VALUE) sub bl, VALUE
#define SUB_CL_(VALUE) sub cl, VALUE
#define SUB_DL_(VALUE) sub dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AL_AL sub al, al
#define SUB_AL_BL sub al, bl
#define SUB_AL_CL sub al, cl
#define SUB_AL_DL sub al, dl
#define SUB_AL_DIL sub al, dil
#define SUB_AL_SIL sub al, sil
#define SUB_AL_BPL sub al, bpl
#define SUB_AL_SPL sub al, spl
#define SUB_AL_R8B sub al, r8b
#define SUB_AL_R9B sub al, r9b
#define SUB_AL_R10B sub al, r10b
#define SUB_AL_R11B sub al, r11b
#define SUB_AL_R12B sub al, r12b
#define SUB_AL_R13B sub al, r13b
#define SUB_AL_R14B sub al, r14b
#define SUB_AL_R15B sub al, r15b

#define SUB_BL_AL sub bl, al
#define SUB_BL_BL sub bl, bl
#define SUB_BL_CL sub bl, cl
#define SUB_BL_DL sub bl, dl
#define SUB_BL_DIL sub bl, dil
#define SUB_BL_SIL sub bl, sil
#define SUB_BL_BPL sub bl, bpl
#define SUB_BL_SPL sub bl, spl
#define SUB_BL_R8B sub bl, r8b
#define SUB_BL_R9B sub bl, r9b
#define SUB_BL_R10B sub bl, r10b
#define SUB_BL_R11B sub bl, r11b
#define SUB_BL_R12B sub bl, r12b
#define SUB_BL_R13B sub bl, r13b
#define SUB_BL_R14B sub bl, r14b
#define SUB_BL_R15B sub bl, r15b

#define SUB_CL_AL sub cl, al
#define SUB_CL_BL sub cl, bl
#define SUB_CL_CL sub cl, cl
#define SUB_CL_DL sub cl, dl
#define SUB_CL_DIL sub cl, dil
#define SUB_CL_SIL sub cl, sil
#define SUB_CL_BPL sub cl, bpl
#define SUB_CL_SPL sub cl, spl
#define SUB_CL_R8B sub cl, r8b
#define SUB_CL_R9B sub cl, r9b
#define SUB_CL_R10B sub cl, r10b
#define SUB_CL_R11B sub cl, r11b
#define SUB_CL_R12B sub cl, r12b
#define SUB_CL_R13B sub cl, r13b
#define SUB_CL_R14B sub cl, r14b
#define SUB_CL_R15B sub cl, r15b

#define SUB_DL_AL sub dl, al
#define SUB_DL_BL sub dl, bl
#define SUB_DL_CL sub dl, cl
#define SUB_DL_DL sub dl, dl
#define SUB_DL_DIL sub dl, dil
#define SUB_DL_SIL sub dl, sil
#define SUB_DL_BPL sub dl, bpl
#define SUB_DL_SPL sub dl, spl
#define SUB_DL_R8B sub dl, r8b
#define SUB_DL_R9B sub dl, r9b
#define SUB_DL_R10B sub dl, r10b
#define SUB_DL_R11B sub dl, r11b
#define SUB_DL_R12B sub dl, r12b
#define SUB_DL_R13B sub dl, r13b
#define SUB_DL_R14B sub dl, r14b
#define SUB_DL_R15B sub dl, r15b

#define SUB_DIL_AL sub dil, al
#define SUB_DIL_BL sub dil, bl
#define SUB_DIL_CL sub dil, cl
#define SUB_DIL_DL sub dil, dl
#define SUB_DIL_DIL sub dil, dil
#define SUB_DIL_SIL sub dil, sil
#define SUB_DIL_BPL sub dil, bpl
#define SUB_DIL_SPL sub dil, spl
#define SUB_DIL_R8B sub dil, r8b
#define SUB_DIL_R9B sub dil, r9b
#define SUB_DIL_R10B sub dil, r10b
#define SUB_DIL_R11B sub dil, r11b
#define SUB_DIL_R12B sub dil, r12b
#define SUB_DIL_R13B sub dil, r13b
#define SUB_DIL_R14B sub dil, r14b
#define SUB_DIL_R15B sub dil, r15b

#define SUB_SIL_AL sub sil, al
#define SUB_SIL_BL sub sil, bl
#define SUB_SIL_CL sub sil, cl
#define SUB_SIL_DL sub sil, dl
#define SUB_SIL_DIL sub sil, dil
#define SUB_SIL_SIL sub sil, sil
#define SUB_SIL_BPL sub sil, bpl
#define SUB_SIL_SPL sub sil, spl
#define SUB_SIL_R8B sub sil, r8b
#define SUB_SIL_R9B sub sil, r9b
#define SUB_SIL_R10B sub sil, r10b
#define SUB_SIL_R11B sub sil, r11b
#define SUB_SIL_R12B sub sil, r12b
#define SUB_SIL_R13B sub sil, r13b
#define SUB_SIL_R14B sub sil, r14b
#define SUB_SIL_R15B sub sil, r15b

#define SUB_BPL_AL sub bpl, al
#define SUB_BPL_BL sub bpl, bl
#define SUB_BPL_CL sub bpl, cl
#define SUB_BPL_DL sub bpl, dl
#define SUB_BPL_DIL sub bpl, dil
#define SUB_BPL_SIL sub bpl, sil
#define SUB_BPL_BPL sub bpl, bpl
#define SUB_BPL_SPL sub bpl, spl
#define SUB_BPL_R8B sub bpl, r8b
#define SUB_BPL_R9B sub bpl, r9b
#define SUB_BPL_R10B sub bpl, r10b
#define SUB_BPL_R11B sub bpl, r11b
#define SUB_BPL_R12B sub bpl, r12b
#define SUB_BPL_R13B sub bpl, r13b
#define SUB_BPL_R14B sub bpl, r14b
#define SUB_BPL_R15B sub bpl, r15b

#define SUB_SPL_AL sub spl, al
#define SUB_SPL_BL sub spl, bl
#define SUB_SPL_CL sub spl, cl
#define SUB_SPL_DL sub spl, dl
#define SUB_SPL_DIL sub spl, dil
#define SUB_SPL_SIL sub spl, sil
#define SUB_SPL_BPL sub spl, bpl
#define SUB_SPL_SPL sub spl, spl
#define SUB_SPL_R8B sub spl, r8b
#define SUB_SPL_R9B sub spl, r9b
#define SUB_SPL_R10B sub spl, r10b
#define SUB_SPL_R11B sub spl, r11b
#define SUB_SPL_R12B sub spl, r12b
#define SUB_SPL_R13B sub spl, r13b
#define SUB_SPL_R14B sub spl, r14b
#define SUB_SPL_R15B sub spl, r15b

#define SUB_R8B_AL sub r8b, al
#define SUB_R8B_BL sub r8b, bl
#define SUB_R8B_CL sub r8b, cl
#define SUB_R8B_DL sub r8b, dl
#define SUB_R8B_DIL sub r8b, dil
#define SUB_R8B_SIL sub r8b, sil
#define SUB_R8B_BPL sub r8b, bpl
#define SUB_R8B_SPL sub r8b, spl
#define SUB_R8B_R8B sub r8b, r8b
#define SUB_R8B_R9B sub r8b, r9b
#define SUB_R8B_R10B sub r8b, r10b
#define SUB_R8B_R11B sub r8b, r11b
#define SUB_R8B_R12B sub r8b, r12b
#define SUB_R8B_R13B sub r8b, r13b
#define SUB_R8B_R14B sub r8b, r14b
#define SUB_R8B_R15B sub r8b, r15b

#define SUB_R9B_AL sub r9b, al
#define SUB_R9B_BL sub r9b, bl
#define SUB_R9B_CL sub r9b, cl
#define SUB_R9B_DL sub r9b, dl
#define SUB_R9B_DIL sub r9b, dil
#define SUB_R9B_SIL sub r9b, sil
#define SUB_R9B_BPL sub r9b, bpl
#define SUB_R9B_SPL sub r9b, spl
#define SUB_R9B_R8B sub r9b, r8b
#define SUB_R9B_R9B sub r9b, r9b
#define SUB_R9B_R10B sub r9b, r10b
#define SUB_R9B_R11B sub r9b, r11b
#define SUB_R9B_R12B sub r9b, r12b
#define SUB_R9B_R13B sub r9b, r13b
#define SUB_R9B_R14B sub r9b, r14b
#define SUB_R9B_R15B sub r9b, r15b

#define SUB_R10B_AL sub r10b, al
#define SUB_R10B_BL sub r10b, bl
#define SUB_R10B_CL sub r10b, cl
#define SUB_R10B_DL sub r10b, dl
#define SUB_R10B_DIL sub r10b, dil
#define SUB_R10B_SIL sub r10b, sil
#define SUB_R10B_BPL sub r10b, bpl
#define SUB_R10B_SPL sub r10b, spl
#define SUB_R10B_R8B sub r10b, r8b
#define SUB_R10B_R9B sub r10b, r9b
#define SUB_R10B_R10B sub r10b, r10b
#define SUB_R10B_R11B sub r10b, r11b
#define SUB_R10B_R12B sub r10b, r12b
#define SUB_R10B_R13B sub r10b, r13b
#define SUB_R10B_R14B sub r10b, r14b
#define SUB_R10B_R15B sub r10b, r15b

#define SUB_R11B_AL sub r11b, al
#define SUB_R11B_BL sub r11b, bl
#define SUB_R11B_CL sub r11b, cl
#define SUB_R11B_DL sub r11b, dl
#define SUB_R11B_DIL sub r11b, dil
#define SUB_R11B_SIL sub r11b, sil
#define SUB_R11B_BPL sub r11b, bpl
#define SUB_R11B_SPL sub r11b, spl
#define SUB_R11B_R8B sub r11b, r8b
#define SUB_R11B_R9B sub r11b, r9b
#define SUB_R11B_R10B sub r11b, r10b
#define SUB_R11B_R11B sub r11b, r11b
#define SUB_R11B_R12B sub r11b, r12b
#define SUB_R11B_R13B sub r11b, r13b
#define SUB_R11B_R14B sub r11b, r14b
#define SUB_R11B_R15B sub r11b, r15b

#define SUB_R12B_AL sub r12b, al
#define SUB_R12B_BL sub r12b, bl
#define SUB_R12B_CL sub r12b, cl
#define SUB_R12B_DL sub r12b, dl
#define SUB_R12B_DIL sub r12b, dil
#define SUB_R12B_SIL sub r12b, sil
#define SUB_R12B_BPL sub r12b, bpl
#define SUB_R12B_SPL sub r12b, spl
#define SUB_R12B_R8B sub r12b, r8b
#define SUB_R12B_R9B sub r12b, r9b
#define SUB_R12B_R10B sub r12b, r10b
#define SUB_R12B_R11B sub r12b, r11b
#define SUB_R12B_R12B sub r12b, r12b
#define SUB_R12B_R13B sub r12b, r13b
#define SUB_R12B_R14B sub r12b, r14b
#define SUB_R12B_R15B sub r12b, r15b

#define SUB_R13B_AL sub r13b, al
#define SUB_R13B_BL sub r13b, bl
#define SUB_R13B_CL sub r13b, cl
#define SUB_R13B_DL sub r13b, dl
#define SUB_R13B_DIL sub r13b, dil
#define SUB_R13B_SIL sub r13b, sil
#define SUB_R13B_BPL sub r13b, bpl
#define SUB_R13B_SPL sub r13b, spl
#define SUB_R13B_R8B sub r13b, r8b
#define SUB_R13B_R9B sub r13b, r9b
#define SUB_R13B_R10B sub r13b, r10b
#define SUB_R13B_R11B sub r13b, r11b
#define SUB_R13B_R12B sub r13b, r12b
#define SUB_R13B_R13B sub r13b, r13b
#define SUB_R13B_R14B sub r13b, r14b
#define SUB_R13B_R15B sub r13b, r15b

#define SUB_R14B_AL sub r14b, al
#define SUB_R14B_BL sub r14b, bl
#define SUB_R14B_CL sub r14b, cl
#define SUB_R14B_DL sub r14b, dl
#define SUB_R14B_DIL sub r14b, dil
#define SUB_R14B_SIL sub r14b, sil
#define SUB_R14B_BPL sub r14b, bpl
#define SUB_R14B_SPL sub r14b, spl
#define SUB_R14B_R8B sub r14b, r8b
#define SUB_R14B_R9B sub r14b, r9b
#define SUB_R14B_R10B sub r14b, r10b
#define SUB_R14B_R11B sub r14b, r11b
#define SUB_R14B_R12B sub r14b, r12b
#define SUB_R14B_R13B sub r14b, r13b
#define SUB_R14B_R14B sub r14b, r14b
#define SUB_R14B_R15B sub r14b, r15b

#define SUB_R15B_AL sub r15b, al
#define SUB_R15B_BL sub r15b, bl
#define SUB_R15B_CL sub r15b, cl
#define SUB_R15B_DL sub r15b, dl
#define SUB_R15B_DIL sub r15b, dil
#define SUB_R15B_SIL sub r15b, sil
#define SUB_R15B_BPL sub r15b, bpl
#define SUB_R15B_SPL sub r15b, spl
#define SUB_R15B_R8B sub r15b, r8b
#define SUB_R15B_R9B sub r15b, r9b
#define SUB_R15B_R10B sub r15b, r10b
#define SUB_R15B_R11B sub r15b, r11b
#define SUB_R15B_R12B sub r15b, r12b
#define SUB_R15B_R13B sub r15b, r13b
#define SUB_R15B_R14B sub r15b, r14b
#define SUB_R15B_R15B sub r15b, r15b

#define SUB_AL_(VALUE) sub al, VALUE
#define SUB_BL_(VALUE) sub bl, VALUE
#define SUB_CL_(VALUE) sub cl, VALUE
#define SUB_DL_(VALUE) sub dl, VALUE
#define SUB_DIL_(VALUE) sub dil, VALUE
#define SUB_SIL_(VALUE) sub sil, VALUE
#define SUB_BPL_(VALUE) sub bpl, VALUE
#define SUB_SPL_(VALUE) sub spl, VALUE
#define SUB_R8B_(VALUE) sub r8b, VALUE
#define SUB_R9B_(VALUE) sub r9b, VALUE
#define SUB_R10B_(VALUE) sub r10b, VALUE
#define SUB_R11B_(VALUE) sub r11b, VALUE
#define SUB_R12B_(VALUE) sub r12b, VALUE
#define SUB_R13B_(VALUE) sub r13b, VALUE
#define SUB_R14B_(VALUE) sub r14b, VALUE
#define SUB_R15B_(VALUE) sub r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define SUB_AX_AX sub ax, ax
#define SUB_AX_BX sub ax, bx
#define SUB_AX_CX sub ax, cx
#define SUB_AX_DX sub ax, dx
#define SUB_AX_DI sub ax, di
#define SUB_AX_SI sub ax, si
#define SUB_AX_BP sub ax, bp
#define SUB_AX_SP sub ax, sp

#define SUB_BX_AX sub bx, ax
#define SUB_BX_BX sub bx, bx
#define SUB_BX_CX sub bx, cx
#define SUB_BX_DX sub bx, dx
#define SUB_BX_DI sub bx, di
#define SUB_BX_SI sub bx, si
#define SUB_BX_BP sub bx, bp
#define SUB_BX_SP sub bx, sp

#define SUB_CX_AX sub cx, ax
#define SUB_CX_BX sub cx, bx
#define SUB_CX_CX sub cx, cx
#define SUB_CX_DX sub cx, dx
#define SUB_CX_DI sub cx, di
#define SUB_CX_SI sub cx, si
#define SUB_CX_BP sub cx, bp
#define SUB_CX_SP sub cx, sp

#define SUB_DX_AX sub dx, ax
#define SUB_DX_BX sub dx, bx
#define SUB_DX_CX sub dx, cx
#define SUB_DX_DX sub dx, dx
#define SUB_DX_DI sub dx, di
#define SUB_DX_SI sub dx, si
#define SUB_DX_BP sub dx, bp
#define SUB_DX_SP sub dx, sp

#define SUB_DI_AX sub di, ax
#define SUB_DI_BX sub di, bx
#define SUB_DI_CX sub di, cx
#define SUB_DI_DX sub di, dx
#define SUB_DI_DI sub di, di
#define SUB_DI_SI sub di, si
#define SUB_DI_BP sub di, bp
#define SUB_DI_SP sub di, sp

#define SUB_SI_AX sub si, ax
#define SUB_SI_BX sub si, bx
#define SUB_SI_CX sub si, cx
#define SUB_SI_DX sub si, dx
#define SUB_SI_DI sub si, di
#define SUB_SI_SI sub si, si
#define SUB_SI_BP sub si, bp
#define SUB_SI_SP sub si, sp

#define SUB_BP_AX sub bp, ax
#define SUB_BP_BX sub bp, bx
#define SUB_BP_CX sub bp, cx
#define SUB_BP_DX sub bp, dx
#define SUB_BP_DI sub bp, di
#define SUB_BP_SI sub bp, si
#define SUB_BP_BP sub bp, bp
#define SUB_BP_SP sub bp, sp

#define SUB_SP_AX sub sp, ax
#define SUB_SP_BX sub sp, bx
#define SUB_SP_CX sub sp, cx
#define SUB_SP_DX sub sp, dx
#define SUB_SP_DI sub sp, di
#define SUB_SP_SI sub sp, si
#define SUB_SP_BP sub sp, bp
#define SUB_SP_SP sub sp, sp

#define SUB_AX_(VALUE) sub ax, VALUE
#define SUB_BX_(VALUE) sub bx, VALUE
#define SUB_CX_(VALUE) sub cx, VALUE
#define SUB_DX_(VALUE) sub dx, VALUE
#define SUB_DI_(VALUE) sub di, VALUE
#define SUB_SI_(VALUE) sub si, VALUE
#define SUB_BP_(VALUE) sub bp, VALUE
#define SUB_SP_(VALUE) sub sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define SUB_AX_AX sub ax, ax
#define SUB_AX_BX sub ax, bx
#define SUB_AX_CX sub ax, cx
#define SUB_AX_DX sub ax, dx
#define SUB_AX_DI sub ax, di
#define SUB_AX_SI sub ax, si
#define SUB_AX_BP sub ax, bp
#define SUB_AX_SP sub ax, sp

#define SUB_BX_AX sub bx, ax
#define SUB_BX_BX sub bx, bx
#define SUB_BX_CX sub bx, cx
#define SUB_BX_DX sub bx, dx
#define SUB_BX_DI sub bx, di
#define SUB_BX_SI sub bx, si
#define SUB_BX_BP sub bx, bp
#define SUB_BX_SP sub bx, sp

#define SUB_CX_AX sub cx, ax
#define SUB_CX_BX sub cx, bx
#define SUB_CX_CX sub cx, cx
#define SUB_CX_DX sub cx, dx
#define SUB_CX_DI sub cx, di
#define SUB_CX_SI sub cx, si
#define SUB_CX_BP sub cx, bp
#define SUB_CX_SP sub cx, sp

#define SUB_DX_AX sub dx, ax
#define SUB_DX_BX sub dx, bx
#define SUB_DX_CX sub dx, cx
#define SUB_DX_DX sub dx, dx
#define SUB_DX_DI sub dx, di
#define SUB_DX_SI sub dx, si
#define SUB_DX_BP sub dx, bp
#define SUB_DX_SP sub dx, sp

#define SUB_DI_AX sub di, ax
#define SUB_DI_BX sub di, bx
#define SUB_DI_CX sub di, cx
#define SUB_DI_DX sub di, dx
#define SUB_DI_DI sub di, di
#define SUB_DI_SI sub di, si
#define SUB_DI_BP sub di, bp
#define SUB_DI_SP sub di, sp

#define SUB_SI_AX sub si, ax
#define SUB_SI_BX sub si, bx
#define SUB_SI_CX sub si, cx
#define SUB_SI_DX sub si, dx
#define SUB_SI_DI sub si, di
#define SUB_SI_SI sub si, si
#define SUB_SI_BP sub si, bp
#define SUB_SI_SP sub si, sp

#define SUB_BP_AX sub bp, ax
#define SUB_BP_BX sub bp, bx
#define SUB_BP_CX sub bp, cx
#define SUB_BP_DX sub bp, dx
#define SUB_BP_DI sub bp, di
#define SUB_BP_SI sub bp, si
#define SUB_BP_BP sub bp, bp
#define SUB_BP_SP sub bp, sp

#define SUB_SP_AX sub sp, ax
#define SUB_SP_BX sub sp, bx
#define SUB_SP_CX sub sp, cx
#define SUB_SP_DX sub sp, dx
#define SUB_SP_DI sub sp, di
#define SUB_SP_SI sub sp, si
#define SUB_SP_BP sub sp, bp
#define SUB_SP_SP sub sp, sp

#define SUB_AX_(VALUE) sub ax, VALUE
#define SUB_BX_(VALUE) sub bx, VALUE
#define SUB_CX_(VALUE) sub cx, VALUE
#define SUB_DX_(VALUE) sub dx, VALUE
#define SUB_DI_(VALUE) sub di, VALUE
#define SUB_SI_(VALUE) sub si, VALUE
#define SUB_BP_(VALUE) sub bp, VALUE
#define SUB_SP_(VALUE) sub sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define SUB_AX_AX sub ax, ax
#define SUB_AX_BX sub ax, bx
#define SUB_AX_CX sub ax, cx
#define SUB_AX_DX sub ax, dx
#define SUB_AX_DI sub ax, di
#define SUB_AX_SI sub ax, si
#define SUB_AX_BP sub ax, bp
#define SUB_AX_SP sub ax, sp
#define SUB_AX_R8W sub ax, r8w
#define SUB_AX_R9W sub ax, r9w
#define SUB_AX_R10W sub ax, r10w
#define SUB_AX_R11W sub ax, r11w
#define SUB_AX_R12W sub ax, r12w
#define SUB_AX_R13W sub ax, r13w
#define SUB_AX_R14W sub ax, r14w
#define SUB_AX_R15W sub ax, r15w

#define SUB_BX_AX sub bx, ax
#define SUB_BX_BX sub bx, bx
#define SUB_BX_CX sub bx, cx
#define SUB_BX_DX sub bx, dx
#define SUB_BX_DI sub bx, di
#define SUB_BX_SI sub bx, si
#define SUB_BX_BP sub bx, bp
#define SUB_BX_SP sub bx, sp
#define SUB_BX_R8W sub bx, r8w
#define SUB_BX_R9W sub bx, r9w
#define SUB_BX_R10W sub bx, r10w
#define SUB_BX_R11W sub bx, r11w
#define SUB_BX_R12W sub bx, r12w
#define SUB_BX_R13W sub bx, r13w
#define SUB_BX_R14W sub bx, r14w
#define SUB_BX_R15W sub bx, r15w

#define SUB_CX_AX sub cx, ax
#define SUB_CX_BX sub cx, bx
#define SUB_CX_CX sub cx, cx
#define SUB_CX_DX sub cx, dx
#define SUB_CX_DI sub cx, di
#define SUB_CX_SI sub cx, si
#define SUB_CX_BP sub cx, bp
#define SUB_CX_SP sub cx, sp
#define SUB_CX_R8W sub cx, r8w
#define SUB_CX_R9W sub cx, r9w
#define SUB_CX_R10W sub cx, r10w
#define SUB_CX_R11W sub cx, r11w
#define SUB_CX_R12W sub cx, r12w
#define SUB_CX_R13W sub cx, r13w
#define SUB_CX_R14W sub cx, r14w
#define SUB_CX_R15W sub cx, r15w

#define SUB_DX_AX sub dx, ax
#define SUB_DX_BX sub dx, bx
#define SUB_DX_CX sub dx, cx
#define SUB_DX_DX sub dx, dx
#define SUB_DX_DI sub dx, di
#define SUB_DX_SI sub dx, si
#define SUB_DX_BP sub dx, bp
#define SUB_DX_SP sub dx, sp
#define SUB_DX_R8W sub dx, r8w
#define SUB_DX_R9W sub dx, r9w
#define SUB_DX_R10W sub dx, r10w
#define SUB_DX_R11W sub dx, r11w
#define SUB_DX_R12W sub dx, r12w
#define SUB_DX_R13W sub dx, r13w
#define SUB_DX_R14W sub dx, r14w
#define SUB_DX_R15W sub dx, r15w

#define SUB_DI_AX sub di, ax
#define SUB_DI_BX sub di, bx
#define SUB_DI_CX sub di, cx
#define SUB_DI_DX sub di, dx
#define SUB_DI_DI sub di, di
#define SUB_DI_SI sub di, si
#define SUB_DI_BP sub di, bp
#define SUB_DI_SP sub di, sp
#define SUB_DI_R8W sub di, r8w
#define SUB_DI_R9W sub di, r9w
#define SUB_DI_R10W sub di, r10w
#define SUB_DI_R11W sub di, r11w
#define SUB_DI_R12W sub di, r12w
#define SUB_DI_R13W sub di, r13w
#define SUB_DI_R14W sub di, r14w
#define SUB_DI_R15W sub di, r15w

#define SUB_SI_AX sub si, ax
#define SUB_SI_BX sub si, bx
#define SUB_SI_CX sub si, cx
#define SUB_SI_DX sub si, dx
#define SUB_SI_DI sub si, di
#define SUB_SI_SI sub si, si
#define SUB_SI_BP sub si, bp
#define SUB_SI_SP sub si, sp
#define SUB_SI_R8W sub si, r8w
#define SUB_SI_R9W sub si, r9w
#define SUB_SI_R10W sub si, r10w
#define SUB_SI_R11W sub si, r11w
#define SUB_SI_R12W sub si, r12w
#define SUB_SI_R13W sub si, r13w
#define SUB_SI_R14W sub si, r14w
#define SUB_SI_R15W sub si, r15w

#define SUB_BP_AX sub bp, ax
#define SUB_BP_BX sub bp, bx
#define SUB_BP_CX sub bp, cx
#define SUB_BP_DX sub bp, dx
#define SUB_BP_DI sub bp, di
#define SUB_BP_SI sub bp, si
#define SUB_BP_BP sub bp, bp
#define SUB_BP_SP sub bp, sp
#define SUB_BP_R8W sub bp, r8w
#define SUB_BP_R9W sub bp, r9w
#define SUB_BP_R10W sub bp, r10w
#define SUB_BP_R11W sub bp, r11w
#define SUB_BP_R12W sub bp, r12w
#define SUB_BP_R13W sub bp, r13w
#define SUB_BP_R14W sub bp, r14w
#define SUB_BP_R15W sub bp, r15w

#define SUB_SP_AX sub sp, ax
#define SUB_SP_BX sub sp, bx
#define SUB_SP_CX sub sp, cx
#define SUB_SP_DX sub sp, dx
#define SUB_SP_DI sub sp, di
#define SUB_SP_SI sub sp, si
#define SUB_SP_BP sub sp, bp
#define SUB_SP_SP sub sp, sp
#define SUB_SP_R8W sub sp, r8w
#define SUB_SP_R9W sub sp, r9w
#define SUB_SP_R10W sub sp, r10w
#define SUB_SP_R11W sub sp, r11w
#define SUB_SP_R12W sub sp, r12w
#define SUB_SP_R13W sub sp, r13w
#define SUB_SP_R14W sub sp, r14w
#define SUB_SP_R15W sub sp, r15w

#define SUB_R8W_AX sub r8w, ax
#define SUB_R8W_BX sub r8w, bx
#define SUB_R8W_CX sub r8w, cx
#define SUB_R8W_DX sub r8w, dx
#define SUB_R8W_DI sub r8w, di
#define SUB_R8W_SI sub r8w, si
#define SUB_R8W_BP sub r8w, bp
#define SUB_R8W_SP sub r8w, sp
#define SUB_R8W_R8W sub r8w, r8w
#define SUB_R8W_R9W sub r8w, r9w
#define SUB_R8W_R10W sub r8w, r10w
#define SUB_R8W_R11W sub r8w, r11w
#define SUB_R8W_R12W sub r8w, r12w
#define SUB_R8W_R13W sub r8w, r13w
#define SUB_R8W_R14W sub r8w, r14w
#define SUB_R8W_R15W sub r8w, r15w

#define SUB_R9W_AX sub r9w, ax
#define SUB_R9W_BX sub r9w, bx
#define SUB_R9W_CX sub r9w, cx
#define SUB_R9W_DX sub r9w, dx
#define SUB_R9W_DI sub r9w, di
#define SUB_R9W_SI sub r9w, si
#define SUB_R9W_BP sub r9w, bp
#define SUB_R9W_SP sub r9w, sp
#define SUB_R9W_R8W sub r9w, r8w
#define SUB_R9W_R9W sub r9w, r9w
#define SUB_R9W_R10W sub r9w, r10w
#define SUB_R9W_R11W sub r9w, r11w
#define SUB_R9W_R12W sub r9w, r12w
#define SUB_R9W_R13W sub r9w, r13w
#define SUB_R9W_R14W sub r9w, r14w
#define SUB_R9W_R15W sub r9w, r15w

#define SUB_R10W_AX sub r10w, ax
#define SUB_R10W_BX sub r10w, bx
#define SUB_R10W_CX sub r10w, cx
#define SUB_R10W_DX sub r10w, dx
#define SUB_R10W_DI sub r10w, di
#define SUB_R10W_SI sub r10w, si
#define SUB_R10W_BP sub r10w, bp
#define SUB_R10W_SP sub r10w, sp
#define SUB_R10W_R8W sub r10w, r8w
#define SUB_R10W_R9W sub r10w, r9w
#define SUB_R10W_R10W sub r10w, r10w
#define SUB_R10W_R11W sub r10w, r11w
#define SUB_R10W_R12W sub r10w, r12w
#define SUB_R10W_R13W sub r10w, r13w
#define SUB_R10W_R14W sub r10w, r14w
#define SUB_R10W_R15W sub r10w, r15w

#define SUB_R11W_AX sub r11w, ax
#define SUB_R11W_BX sub r11w, bx
#define SUB_R11W_CX sub r11w, cx
#define SUB_R11W_DX sub r11w, dx
#define SUB_R11W_DI sub r11w, di
#define SUB_R11W_SI sub r11w, si
#define SUB_R11W_BP sub r11w, bp
#define SUB_R11W_SP sub r11w, sp
#define SUB_R11W_R8W sub r11w, r8w
#define SUB_R11W_R9W sub r11w, r9w
#define SUB_R11W_R10W sub r11w, r10w
#define SUB_R11W_R11W sub r11w, r11w
#define SUB_R11W_R12W sub r11w, r12w
#define SUB_R11W_R13W sub r11w, r13w
#define SUB_R11W_R14W sub r11w, r14w
#define SUB_R11W_R15W sub r11w, r15w

#define SUB_R12W_AX sub r12w, ax
#define SUB_R12W_BX sub r12w, bx
#define SUB_R12W_CX sub r12w, cx
#define SUB_R12W_DX sub r12w, dx
#define SUB_R12W_DI sub r12w, di
#define SUB_R12W_SI sub r12w, si
#define SUB_R12W_BP sub r12w, bp
#define SUB_R12W_SP sub r12w, sp
#define SUB_R12W_R8W sub r12w, r8w
#define SUB_R12W_R9W sub r12w, r9w
#define SUB_R12W_R10W sub r12w, r10w
#define SUB_R12W_R11W sub r12w, r11w
#define SUB_R12W_R12W sub r12w, r12w
#define SUB_R12W_R13W sub r12w, r13w
#define SUB_R12W_R14W sub r12w, r14w
#define SUB_R12W_R15W sub r12w, r15w

#define SUB_R13W_AX sub r13w, ax
#define SUB_R13W_BX sub r13w, bx
#define SUB_R13W_CX sub r13w, cx
#define SUB_R13W_DX sub r13w, dx
#define SUB_R13W_DI sub r13w, di
#define SUB_R13W_SI sub r13w, si
#define SUB_R13W_BP sub r13w, bp
#define SUB_R13W_SP sub r13w, sp
#define SUB_R13W_R8W sub r13w, r8w
#define SUB_R13W_R9W sub r13w, r9w
#define SUB_R13W_R10W sub r13w, r10w
#define SUB_R13W_R11W sub r13w, r11w
#define SUB_R13W_R12W sub r13w, r12w
#define SUB_R13W_R13W sub r13w, r13w
#define SUB_R13W_R14W sub r13w, r14w
#define SUB_R13W_R15W sub r13w, r15w

#define SUB_R14W_AX sub r14w, ax
#define SUB_R14W_BX sub r14w, bx
#define SUB_R14W_CX sub r14w, cx
#define SUB_R14W_DX sub r14w, dx
#define SUB_R14W_DI sub r14w, di
#define SUB_R14W_SI sub r14w, si
#define SUB_R14W_BP sub r14w, bp
#define SUB_R14W_SP sub r14w, sp
#define SUB_R14W_R8W sub r14w, r8w
#define SUB_R14W_R9W sub r14w, r9w
#define SUB_R14W_R10W sub r14w, r10w
#define SUB_R14W_R11W sub r14w, r11w
#define SUB_R14W_R12W sub r14w, r12w
#define SUB_R14W_R13W sub r14w, r13w
#define SUB_R14W_R14W sub r14w, r14w
#define SUB_R14W_R15W sub r14w, r15w

#define SUB_R15W_AX sub r15w, ax
#define SUB_R15W_BX sub r15w, bx
#define SUB_R15W_CX sub r15w, cx
#define SUB_R15W_DX sub r15w, dx
#define SUB_R15W_DI sub r15w, di
#define SUB_R15W_SI sub r15w, si
#define SUB_R15W_BP sub r15w, bp
#define SUB_R15W_SP sub r15w, sp
#define SUB_R15W_R8W sub r15w, r8w
#define SUB_R15W_R9W sub r15w, r9w
#define SUB_R15W_R10W sub r15w, r10w
#define SUB_R15W_R11W sub r15w, r11w
#define SUB_R15W_R12W sub r15w, r12w
#define SUB_R15W_R13W sub r15w, r13w
#define SUB_R15W_R14W sub r15w, r14w
#define SUB_R15W_R15W sub r15w, r15w

#define SUB_AX_(VALUE) sub ax, VALUE
#define SUB_BX_(VALUE) sub bx, VALUE
#define SUB_CX_(VALUE) sub cx, VALUE
#define SUB_DX_(VALUE) sub dx, VALUE
#define SUB_DI_(VALUE) sub di, VALUE
#define SUB_SI_(VALUE) sub si, VALUE
#define SUB_BP_(VALUE) sub bp, VALUE
#define SUB_SP_(VALUE) sub sp, VALUE
#define SUB_R8W_(VALUE) sub r8w, VALUE
#define SUB_R9W_(VALUE) sub r9w, VALUE
#define SUB_R10W_(VALUE) sub r10w, VALUE
#define SUB_R11W_(VALUE) sub r11w, VALUE
#define SUB_R12W_(VALUE) sub r12w, VALUE
#define SUB_R13W_(VALUE) sub r13w, VALUE
#define SUB_R14W_(VALUE) sub r14w, VALUE
#define SUB_R15W_(VALUE) sub r15w, VALUE
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
