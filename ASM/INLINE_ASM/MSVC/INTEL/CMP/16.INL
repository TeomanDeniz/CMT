#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define CMP_AL_AL cmp al, al
#define CMP_AL_BL cmp al, bl
#define CMP_AL_CL cmp al, cl
#define CMP_AL_DL cmp al, dl

#define CMP_BL_AL cmp bl, al
#define CMP_BL_BL cmp bl, bl
#define CMP_BL_CL cmp bl, cl
#define CMP_BL_DL cmp bl, dl

#define CMP_CL_AL cmp cl, al
#define CMP_CL_BL cmp cl, bl
#define CMP_CL_CL cmp cl, cl
#define CMP_CL_DL cmp cl, dl

#define CMP_DL_AL cmp dl, al
#define CMP_DL_BL cmp dl, bl
#define CMP_DL_CL cmp dl, cl
#define CMP_DL_DL cmp dl, dl

#define CMP_AL_(VALUE) cmp al, VALUE
#define CMP_BL_(VALUE) cmp bl, VALUE
#define CMP_CL_(VALUE) cmp cl, VALUE
#define CMP_DL_(VALUE) cmp dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AL_AL cmp al, al
#define CMP_AL_BL cmp al, bl
#define CMP_AL_CL cmp al, cl
#define CMP_AL_DL cmp al, dl

#define CMP_BL_AL cmp bl, al
#define CMP_BL_BL cmp bl, bl
#define CMP_BL_CL cmp bl, cl
#define CMP_BL_DL cmp bl, dl

#define CMP_CL_AL cmp cl, al
#define CMP_CL_BL cmp cl, bl
#define CMP_CL_CL cmp cl, cl
#define CMP_CL_DL cmp cl, dl

#define CMP_DL_AL cmp dl, al
#define CMP_DL_BL cmp dl, bl
#define CMP_DL_CL cmp dl, cl
#define CMP_DL_DL cmp dl, dl

#define CMP_AL_(VALUE) cmp al, VALUE
#define CMP_BL_(VALUE) cmp bl, VALUE
#define CMP_CL_(VALUE) cmp cl, VALUE
#define CMP_DL_(VALUE) cmp dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AL_AL cmp al, al
#define CMP_AL_BL cmp al, bl
#define CMP_AL_CL cmp al, cl
#define CMP_AL_DL cmp al, dl
#define CMP_AL_DIL cmp al, dil
#define CMP_AL_SIL cmp al, sil
#define CMP_AL_BPL cmp al, bpl
#define CMP_AL_SPL cmp al, spl
#define CMP_AL_R8B cmp al, r8b
#define CMP_AL_R9B cmp al, r9b
#define CMP_AL_R10B cmp al, r10b
#define CMP_AL_R11B cmp al, r11b
#define CMP_AL_R12B cmp al, r12b
#define CMP_AL_R13B cmp al, r13b
#define CMP_AL_R14B cmp al, r14b
#define CMP_AL_R15B cmp al, r15b

#define CMP_BL_AL cmp bl, al
#define CMP_BL_BL cmp bl, bl
#define CMP_BL_CL cmp bl, cl
#define CMP_BL_DL cmp bl, dl
#define CMP_BL_DIL cmp bl, dil
#define CMP_BL_SIL cmp bl, sil
#define CMP_BL_BPL cmp bl, bpl
#define CMP_BL_SPL cmp bl, spl
#define CMP_BL_R8B cmp bl, r8b
#define CMP_BL_R9B cmp bl, r9b
#define CMP_BL_R10B cmp bl, r10b
#define CMP_BL_R11B cmp bl, r11b
#define CMP_BL_R12B cmp bl, r12b
#define CMP_BL_R13B cmp bl, r13b
#define CMP_BL_R14B cmp bl, r14b
#define CMP_BL_R15B cmp bl, r15b

#define CMP_CL_AL cmp cl, al
#define CMP_CL_BL cmp cl, bl
#define CMP_CL_CL cmp cl, cl
#define CMP_CL_DL cmp cl, dl
#define CMP_CL_DIL cmp cl, dil
#define CMP_CL_SIL cmp cl, sil
#define CMP_CL_BPL cmp cl, bpl
#define CMP_CL_SPL cmp cl, spl
#define CMP_CL_R8B cmp cl, r8b
#define CMP_CL_R9B cmp cl, r9b
#define CMP_CL_R10B cmp cl, r10b
#define CMP_CL_R11B cmp cl, r11b
#define CMP_CL_R12B cmp cl, r12b
#define CMP_CL_R13B cmp cl, r13b
#define CMP_CL_R14B cmp cl, r14b
#define CMP_CL_R15B cmp cl, r15b

#define CMP_DL_AL cmp dl, al
#define CMP_DL_BL cmp dl, bl
#define CMP_DL_CL cmp dl, cl
#define CMP_DL_DL cmp dl, dl
#define CMP_DL_DIL cmp dl, dil
#define CMP_DL_SIL cmp dl, sil
#define CMP_DL_BPL cmp dl, bpl
#define CMP_DL_SPL cmp dl, spl
#define CMP_DL_R8B cmp dl, r8b
#define CMP_DL_R9B cmp dl, r9b
#define CMP_DL_R10B cmp dl, r10b
#define CMP_DL_R11B cmp dl, r11b
#define CMP_DL_R12B cmp dl, r12b
#define CMP_DL_R13B cmp dl, r13b
#define CMP_DL_R14B cmp dl, r14b
#define CMP_DL_R15B cmp dl, r15b

#define CMP_DIL_AL cmp dil, al
#define CMP_DIL_BL cmp dil, bl
#define CMP_DIL_CL cmp dil, cl
#define CMP_DIL_DL cmp dil, dl
#define CMP_DIL_DIL cmp dil, dil
#define CMP_DIL_SIL cmp dil, sil
#define CMP_DIL_BPL cmp dil, bpl
#define CMP_DIL_SPL cmp dil, spl
#define CMP_DIL_R8B cmp dil, r8b
#define CMP_DIL_R9B cmp dil, r9b
#define CMP_DIL_R10B cmp dil, r10b
#define CMP_DIL_R11B cmp dil, r11b
#define CMP_DIL_R12B cmp dil, r12b
#define CMP_DIL_R13B cmp dil, r13b
#define CMP_DIL_R14B cmp dil, r14b
#define CMP_DIL_R15B cmp dil, r15b

#define CMP_SIL_AL cmp sil, al
#define CMP_SIL_BL cmp sil, bl
#define CMP_SIL_CL cmp sil, cl
#define CMP_SIL_DL cmp sil, dl
#define CMP_SIL_DIL cmp sil, dil
#define CMP_SIL_SIL cmp sil, sil
#define CMP_SIL_BPL cmp sil, bpl
#define CMP_SIL_SPL cmp sil, spl
#define CMP_SIL_R8B cmp sil, r8b
#define CMP_SIL_R9B cmp sil, r9b
#define CMP_SIL_R10B cmp sil, r10b
#define CMP_SIL_R11B cmp sil, r11b
#define CMP_SIL_R12B cmp sil, r12b
#define CMP_SIL_R13B cmp sil, r13b
#define CMP_SIL_R14B cmp sil, r14b
#define CMP_SIL_R15B cmp sil, r15b

#define CMP_BPL_AL cmp bpl, al
#define CMP_BPL_BL cmp bpl, bl
#define CMP_BPL_CL cmp bpl, cl
#define CMP_BPL_DL cmp bpl, dl
#define CMP_BPL_DIL cmp bpl, dil
#define CMP_BPL_SIL cmp bpl, sil
#define CMP_BPL_BPL cmp bpl, bpl
#define CMP_BPL_SPL cmp bpl, spl
#define CMP_BPL_R8B cmp bpl, r8b
#define CMP_BPL_R9B cmp bpl, r9b
#define CMP_BPL_R10B cmp bpl, r10b
#define CMP_BPL_R11B cmp bpl, r11b
#define CMP_BPL_R12B cmp bpl, r12b
#define CMP_BPL_R13B cmp bpl, r13b
#define CMP_BPL_R14B cmp bpl, r14b
#define CMP_BPL_R15B cmp bpl, r15b

#define CMP_SPL_AL cmp spl, al
#define CMP_SPL_BL cmp spl, bl
#define CMP_SPL_CL cmp spl, cl
#define CMP_SPL_DL cmp spl, dl
#define CMP_SPL_DIL cmp spl, dil
#define CMP_SPL_SIL cmp spl, sil
#define CMP_SPL_BPL cmp spl, bpl
#define CMP_SPL_SPL cmp spl, spl
#define CMP_SPL_R8B cmp spl, r8b
#define CMP_SPL_R9B cmp spl, r9b
#define CMP_SPL_R10B cmp spl, r10b
#define CMP_SPL_R11B cmp spl, r11b
#define CMP_SPL_R12B cmp spl, r12b
#define CMP_SPL_R13B cmp spl, r13b
#define CMP_SPL_R14B cmp spl, r14b
#define CMP_SPL_R15B cmp spl, r15b

#define CMP_R8B_AL cmp r8b, al
#define CMP_R8B_BL cmp r8b, bl
#define CMP_R8B_CL cmp r8b, cl
#define CMP_R8B_DL cmp r8b, dl
#define CMP_R8B_DIL cmp r8b, dil
#define CMP_R8B_SIL cmp r8b, sil
#define CMP_R8B_BPL cmp r8b, bpl
#define CMP_R8B_SPL cmp r8b, spl
#define CMP_R8B_R8B cmp r8b, r8b
#define CMP_R8B_R9B cmp r8b, r9b
#define CMP_R8B_R10B cmp r8b, r10b
#define CMP_R8B_R11B cmp r8b, r11b
#define CMP_R8B_R12B cmp r8b, r12b
#define CMP_R8B_R13B cmp r8b, r13b
#define CMP_R8B_R14B cmp r8b, r14b
#define CMP_R8B_R15B cmp r8b, r15b

#define CMP_R9B_AL cmp r9b, al
#define CMP_R9B_BL cmp r9b, bl
#define CMP_R9B_CL cmp r9b, cl
#define CMP_R9B_DL cmp r9b, dl
#define CMP_R9B_DIL cmp r9b, dil
#define CMP_R9B_SIL cmp r9b, sil
#define CMP_R9B_BPL cmp r9b, bpl
#define CMP_R9B_SPL cmp r9b, spl
#define CMP_R9B_R8B cmp r9b, r8b
#define CMP_R9B_R9B cmp r9b, r9b
#define CMP_R9B_R10B cmp r9b, r10b
#define CMP_R9B_R11B cmp r9b, r11b
#define CMP_R9B_R12B cmp r9b, r12b
#define CMP_R9B_R13B cmp r9b, r13b
#define CMP_R9B_R14B cmp r9b, r14b
#define CMP_R9B_R15B cmp r9b, r15b

#define CMP_R10B_AL cmp r10b, al
#define CMP_R10B_BL cmp r10b, bl
#define CMP_R10B_CL cmp r10b, cl
#define CMP_R10B_DL cmp r10b, dl
#define CMP_R10B_DIL cmp r10b, dil
#define CMP_R10B_SIL cmp r10b, sil
#define CMP_R10B_BPL cmp r10b, bpl
#define CMP_R10B_SPL cmp r10b, spl
#define CMP_R10B_R8B cmp r10b, r8b
#define CMP_R10B_R9B cmp r10b, r9b
#define CMP_R10B_R10B cmp r10b, r10b
#define CMP_R10B_R11B cmp r10b, r11b
#define CMP_R10B_R12B cmp r10b, r12b
#define CMP_R10B_R13B cmp r10b, r13b
#define CMP_R10B_R14B cmp r10b, r14b
#define CMP_R10B_R15B cmp r10b, r15b

#define CMP_R11B_AL cmp r11b, al
#define CMP_R11B_BL cmp r11b, bl
#define CMP_R11B_CL cmp r11b, cl
#define CMP_R11B_DL cmp r11b, dl
#define CMP_R11B_DIL cmp r11b, dil
#define CMP_R11B_SIL cmp r11b, sil
#define CMP_R11B_BPL cmp r11b, bpl
#define CMP_R11B_SPL cmp r11b, spl
#define CMP_R11B_R8B cmp r11b, r8b
#define CMP_R11B_R9B cmp r11b, r9b
#define CMP_R11B_R10B cmp r11b, r10b
#define CMP_R11B_R11B cmp r11b, r11b
#define CMP_R11B_R12B cmp r11b, r12b
#define CMP_R11B_R13B cmp r11b, r13b
#define CMP_R11B_R14B cmp r11b, r14b
#define CMP_R11B_R15B cmp r11b, r15b

#define CMP_R12B_AL cmp r12b, al
#define CMP_R12B_BL cmp r12b, bl
#define CMP_R12B_CL cmp r12b, cl
#define CMP_R12B_DL cmp r12b, dl
#define CMP_R12B_DIL cmp r12b, dil
#define CMP_R12B_SIL cmp r12b, sil
#define CMP_R12B_BPL cmp r12b, bpl
#define CMP_R12B_SPL cmp r12b, spl
#define CMP_R12B_R8B cmp r12b, r8b
#define CMP_R12B_R9B cmp r12b, r9b
#define CMP_R12B_R10B cmp r12b, r10b
#define CMP_R12B_R11B cmp r12b, r11b
#define CMP_R12B_R12B cmp r12b, r12b
#define CMP_R12B_R13B cmp r12b, r13b
#define CMP_R12B_R14B cmp r12b, r14b
#define CMP_R12B_R15B cmp r12b, r15b

#define CMP_R13B_AL cmp r13b, al
#define CMP_R13B_BL cmp r13b, bl
#define CMP_R13B_CL cmp r13b, cl
#define CMP_R13B_DL cmp r13b, dl
#define CMP_R13B_DIL cmp r13b, dil
#define CMP_R13B_SIL cmp r13b, sil
#define CMP_R13B_BPL cmp r13b, bpl
#define CMP_R13B_SPL cmp r13b, spl
#define CMP_R13B_R8B cmp r13b, r8b
#define CMP_R13B_R9B cmp r13b, r9b
#define CMP_R13B_R10B cmp r13b, r10b
#define CMP_R13B_R11B cmp r13b, r11b
#define CMP_R13B_R12B cmp r13b, r12b
#define CMP_R13B_R13B cmp r13b, r13b
#define CMP_R13B_R14B cmp r13b, r14b
#define CMP_R13B_R15B cmp r13b, r15b

#define CMP_R14B_AL cmp r14b, al
#define CMP_R14B_BL cmp r14b, bl
#define CMP_R14B_CL cmp r14b, cl
#define CMP_R14B_DL cmp r14b, dl
#define CMP_R14B_DIL cmp r14b, dil
#define CMP_R14B_SIL cmp r14b, sil
#define CMP_R14B_BPL cmp r14b, bpl
#define CMP_R14B_SPL cmp r14b, spl
#define CMP_R14B_R8B cmp r14b, r8b
#define CMP_R14B_R9B cmp r14b, r9b
#define CMP_R14B_R10B cmp r14b, r10b
#define CMP_R14B_R11B cmp r14b, r11b
#define CMP_R14B_R12B cmp r14b, r12b
#define CMP_R14B_R13B cmp r14b, r13b
#define CMP_R14B_R14B cmp r14b, r14b
#define CMP_R14B_R15B cmp r14b, r15b

#define CMP_R15B_AL cmp r15b, al
#define CMP_R15B_BL cmp r15b, bl
#define CMP_R15B_CL cmp r15b, cl
#define CMP_R15B_DL cmp r15b, dl
#define CMP_R15B_DIL cmp r15b, dil
#define CMP_R15B_SIL cmp r15b, sil
#define CMP_R15B_BPL cmp r15b, bpl
#define CMP_R15B_SPL cmp r15b, spl
#define CMP_R15B_R8B cmp r15b, r8b
#define CMP_R15B_R9B cmp r15b, r9b
#define CMP_R15B_R10B cmp r15b, r10b
#define CMP_R15B_R11B cmp r15b, r11b
#define CMP_R15B_R12B cmp r15b, r12b
#define CMP_R15B_R13B cmp r15b, r13b
#define CMP_R15B_R14B cmp r15b, r14b
#define CMP_R15B_R15B cmp r15b, r15b

#define CMP_AL_(VALUE) cmp al, VALUE
#define CMP_BL_(VALUE) cmp bl, VALUE
#define CMP_CL_(VALUE) cmp cl, VALUE
#define CMP_DL_(VALUE) cmp dl, VALUE
#define CMP_DIL_(VALUE) cmp dil, VALUE
#define CMP_SIL_(VALUE) cmp sil, VALUE
#define CMP_BPL_(VALUE) cmp bpl, VALUE
#define CMP_SPL_(VALUE) cmp spl, VALUE
#define CMP_R8B_(VALUE) cmp r8b, VALUE
#define CMP_R9B_(VALUE) cmp r9b, VALUE
#define CMP_R10B_(VALUE) cmp r10b, VALUE
#define CMP_R11B_(VALUE) cmp r11b, VALUE
#define CMP_R12B_(VALUE) cmp r12b, VALUE
#define CMP_R13B_(VALUE) cmp r13b, VALUE
#define CMP_R14B_(VALUE) cmp r14b, VALUE
#define CMP_R15B_(VALUE) cmp r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define CMP_AX_AX cmp ax, ax
#define CMP_AX_BX cmp ax, bx
#define CMP_AX_CX cmp ax, cx
#define CMP_AX_DX cmp ax, dx
#define CMP_AX_DI cmp ax, di
#define CMP_AX_SI cmp ax, si
#define CMP_AX_BP cmp ax, bp
#define CMP_AX_SP cmp ax, sp

#define CMP_BX_AX cmp bx, ax
#define CMP_BX_BX cmp bx, bx
#define CMP_BX_CX cmp bx, cx
#define CMP_BX_DX cmp bx, dx
#define CMP_BX_DI cmp bx, di
#define CMP_BX_SI cmp bx, si
#define CMP_BX_BP cmp bx, bp
#define CMP_BX_SP cmp bx, sp

#define CMP_CX_AX cmp cx, ax
#define CMP_CX_BX cmp cx, bx
#define CMP_CX_CX cmp cx, cx
#define CMP_CX_DX cmp cx, dx
#define CMP_CX_DI cmp cx, di
#define CMP_CX_SI cmp cx, si
#define CMP_CX_BP cmp cx, bp
#define CMP_CX_SP cmp cx, sp

#define CMP_DX_AX cmp dx, ax
#define CMP_DX_BX cmp dx, bx
#define CMP_DX_CX cmp dx, cx
#define CMP_DX_DX cmp dx, dx
#define CMP_DX_DI cmp dx, di
#define CMP_DX_SI cmp dx, si
#define CMP_DX_BP cmp dx, bp
#define CMP_DX_SP cmp dx, sp

#define CMP_DI_AX cmp di, ax
#define CMP_DI_BX cmp di, bx
#define CMP_DI_CX cmp di, cx
#define CMP_DI_DX cmp di, dx
#define CMP_DI_DI cmp di, di
#define CMP_DI_SI cmp di, si
#define CMP_DI_BP cmp di, bp
#define CMP_DI_SP cmp di, sp

#define CMP_SI_AX cmp si, ax
#define CMP_SI_BX cmp si, bx
#define CMP_SI_CX cmp si, cx
#define CMP_SI_DX cmp si, dx
#define CMP_SI_DI cmp si, di
#define CMP_SI_SI cmp si, si
#define CMP_SI_BP cmp si, bp
#define CMP_SI_SP cmp si, sp

#define CMP_BP_AX cmp bp, ax
#define CMP_BP_BX cmp bp, bx
#define CMP_BP_CX cmp bp, cx
#define CMP_BP_DX cmp bp, dx
#define CMP_BP_DI cmp bp, di
#define CMP_BP_SI cmp bp, si
#define CMP_BP_BP cmp bp, bp
#define CMP_BP_SP cmp bp, sp

#define CMP_SP_AX cmp sp, ax
#define CMP_SP_BX cmp sp, bx
#define CMP_SP_CX cmp sp, cx
#define CMP_SP_DX cmp sp, dx
#define CMP_SP_DI cmp sp, di
#define CMP_SP_SI cmp sp, si
#define CMP_SP_BP cmp sp, bp
#define CMP_SP_SP cmp sp, sp

#define CMP_AX_(VALUE) cmp ax, VALUE
#define CMP_BX_(VALUE) cmp bx, VALUE
#define CMP_CX_(VALUE) cmp cx, VALUE
#define CMP_DX_(VALUE) cmp dx, VALUE
#define CMP_DI_(VALUE) cmp di, VALUE
#define CMP_SI_(VALUE) cmp si, VALUE
#define CMP_BP_(VALUE) cmp bp, VALUE
#define CMP_SP_(VALUE) cmp sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AX_AX cmp ax, ax
#define CMP_AX_BX cmp ax, bx
#define CMP_AX_CX cmp ax, cx
#define CMP_AX_DX cmp ax, dx
#define CMP_AX_DI cmp ax, di
#define CMP_AX_SI cmp ax, si
#define CMP_AX_BP cmp ax, bp
#define CMP_AX_SP cmp ax, sp

#define CMP_BX_AX cmp bx, ax
#define CMP_BX_BX cmp bx, bx
#define CMP_BX_CX cmp bx, cx
#define CMP_BX_DX cmp bx, dx
#define CMP_BX_DI cmp bx, di
#define CMP_BX_SI cmp bx, si
#define CMP_BX_BP cmp bx, bp
#define CMP_BX_SP cmp bx, sp

#define CMP_CX_AX cmp cx, ax
#define CMP_CX_BX cmp cx, bx
#define CMP_CX_CX cmp cx, cx
#define CMP_CX_DX cmp cx, dx
#define CMP_CX_DI cmp cx, di
#define CMP_CX_SI cmp cx, si
#define CMP_CX_BP cmp cx, bp
#define CMP_CX_SP cmp cx, sp

#define CMP_DX_AX cmp dx, ax
#define CMP_DX_BX cmp dx, bx
#define CMP_DX_CX cmp dx, cx
#define CMP_DX_DX cmp dx, dx
#define CMP_DX_DI cmp dx, di
#define CMP_DX_SI cmp dx, si
#define CMP_DX_BP cmp dx, bp
#define CMP_DX_SP cmp dx, sp

#define CMP_DI_AX cmp di, ax
#define CMP_DI_BX cmp di, bx
#define CMP_DI_CX cmp di, cx
#define CMP_DI_DX cmp di, dx
#define CMP_DI_DI cmp di, di
#define CMP_DI_SI cmp di, si
#define CMP_DI_BP cmp di, bp
#define CMP_DI_SP cmp di, sp

#define CMP_SI_AX cmp si, ax
#define CMP_SI_BX cmp si, bx
#define CMP_SI_CX cmp si, cx
#define CMP_SI_DX cmp si, dx
#define CMP_SI_DI cmp si, di
#define CMP_SI_SI cmp si, si
#define CMP_SI_BP cmp si, bp
#define CMP_SI_SP cmp si, sp

#define CMP_BP_AX cmp bp, ax
#define CMP_BP_BX cmp bp, bx
#define CMP_BP_CX cmp bp, cx
#define CMP_BP_DX cmp bp, dx
#define CMP_BP_DI cmp bp, di
#define CMP_BP_SI cmp bp, si
#define CMP_BP_BP cmp bp, bp
#define CMP_BP_SP cmp bp, sp

#define CMP_SP_AX cmp sp, ax
#define CMP_SP_BX cmp sp, bx
#define CMP_SP_CX cmp sp, cx
#define CMP_SP_DX cmp sp, dx
#define CMP_SP_DI cmp sp, di
#define CMP_SP_SI cmp sp, si
#define CMP_SP_BP cmp sp, bp
#define CMP_SP_SP cmp sp, sp

#define CMP_AX_(VALUE) cmp ax, VALUE
#define CMP_BX_(VALUE) cmp bx, VALUE
#define CMP_CX_(VALUE) cmp cx, VALUE
#define CMP_DX_(VALUE) cmp dx, VALUE
#define CMP_DI_(VALUE) cmp di, VALUE
#define CMP_SI_(VALUE) cmp si, VALUE
#define CMP_BP_(VALUE) cmp bp, VALUE
#define CMP_SP_(VALUE) cmp sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AX_AX cmp ax, ax
#define CMP_AX_BX cmp ax, bx
#define CMP_AX_CX cmp ax, cx
#define CMP_AX_DX cmp ax, dx
#define CMP_AX_DI cmp ax, di
#define CMP_AX_SI cmp ax, si
#define CMP_AX_BP cmp ax, bp
#define CMP_AX_SP cmp ax, sp
#define CMP_AX_R8W cmp ax, r8w
#define CMP_AX_R9W cmp ax, r9w
#define CMP_AX_R10W cmp ax, r10w
#define CMP_AX_R11W cmp ax, r11w
#define CMP_AX_R12W cmp ax, r12w
#define CMP_AX_R13W cmp ax, r13w
#define CMP_AX_R14W cmp ax, r14w
#define CMP_AX_R15W cmp ax, r15w

#define CMP_BX_AX cmp bx, ax
#define CMP_BX_BX cmp bx, bx
#define CMP_BX_CX cmp bx, cx
#define CMP_BX_DX cmp bx, dx
#define CMP_BX_DI cmp bx, di
#define CMP_BX_SI cmp bx, si
#define CMP_BX_BP cmp bx, bp
#define CMP_BX_SP cmp bx, sp
#define CMP_BX_R8W cmp bx, r8w
#define CMP_BX_R9W cmp bx, r9w
#define CMP_BX_R10W cmp bx, r10w
#define CMP_BX_R11W cmp bx, r11w
#define CMP_BX_R12W cmp bx, r12w
#define CMP_BX_R13W cmp bx, r13w
#define CMP_BX_R14W cmp bx, r14w
#define CMP_BX_R15W cmp bx, r15w

#define CMP_CX_AX cmp cx, ax
#define CMP_CX_BX cmp cx, bx
#define CMP_CX_CX cmp cx, cx
#define CMP_CX_DX cmp cx, dx
#define CMP_CX_DI cmp cx, di
#define CMP_CX_SI cmp cx, si
#define CMP_CX_BP cmp cx, bp
#define CMP_CX_SP cmp cx, sp
#define CMP_CX_R8W cmp cx, r8w
#define CMP_CX_R9W cmp cx, r9w
#define CMP_CX_R10W cmp cx, r10w
#define CMP_CX_R11W cmp cx, r11w
#define CMP_CX_R12W cmp cx, r12w
#define CMP_CX_R13W cmp cx, r13w
#define CMP_CX_R14W cmp cx, r14w
#define CMP_CX_R15W cmp cx, r15w

#define CMP_DX_AX cmp dx, ax
#define CMP_DX_BX cmp dx, bx
#define CMP_DX_CX cmp dx, cx
#define CMP_DX_DX cmp dx, dx
#define CMP_DX_DI cmp dx, di
#define CMP_DX_SI cmp dx, si
#define CMP_DX_BP cmp dx, bp
#define CMP_DX_SP cmp dx, sp
#define CMP_DX_R8W cmp dx, r8w
#define CMP_DX_R9W cmp dx, r9w
#define CMP_DX_R10W cmp dx, r10w
#define CMP_DX_R11W cmp dx, r11w
#define CMP_DX_R12W cmp dx, r12w
#define CMP_DX_R13W cmp dx, r13w
#define CMP_DX_R14W cmp dx, r14w
#define CMP_DX_R15W cmp dx, r15w

#define CMP_DI_AX cmp di, ax
#define CMP_DI_BX cmp di, bx
#define CMP_DI_CX cmp di, cx
#define CMP_DI_DX cmp di, dx
#define CMP_DI_DI cmp di, di
#define CMP_DI_SI cmp di, si
#define CMP_DI_BP cmp di, bp
#define CMP_DI_SP cmp di, sp
#define CMP_DI_R8W cmp di, r8w
#define CMP_DI_R9W cmp di, r9w
#define CMP_DI_R10W cmp di, r10w
#define CMP_DI_R11W cmp di, r11w
#define CMP_DI_R12W cmp di, r12w
#define CMP_DI_R13W cmp di, r13w
#define CMP_DI_R14W cmp di, r14w
#define CMP_DI_R15W cmp di, r15w

#define CMP_SI_AX cmp si, ax
#define CMP_SI_BX cmp si, bx
#define CMP_SI_CX cmp si, cx
#define CMP_SI_DX cmp si, dx
#define CMP_SI_DI cmp si, di
#define CMP_SI_SI cmp si, si
#define CMP_SI_BP cmp si, bp
#define CMP_SI_SP cmp si, sp
#define CMP_SI_R8W cmp si, r8w
#define CMP_SI_R9W cmp si, r9w
#define CMP_SI_R10W cmp si, r10w
#define CMP_SI_R11W cmp si, r11w
#define CMP_SI_R12W cmp si, r12w
#define CMP_SI_R13W cmp si, r13w
#define CMP_SI_R14W cmp si, r14w
#define CMP_SI_R15W cmp si, r15w

#define CMP_BP_AX cmp bp, ax
#define CMP_BP_BX cmp bp, bx
#define CMP_BP_CX cmp bp, cx
#define CMP_BP_DX cmp bp, dx
#define CMP_BP_DI cmp bp, di
#define CMP_BP_SI cmp bp, si
#define CMP_BP_BP cmp bp, bp
#define CMP_BP_SP cmp bp, sp
#define CMP_BP_R8W cmp bp, r8w
#define CMP_BP_R9W cmp bp, r9w
#define CMP_BP_R10W cmp bp, r10w
#define CMP_BP_R11W cmp bp, r11w
#define CMP_BP_R12W cmp bp, r12w
#define CMP_BP_R13W cmp bp, r13w
#define CMP_BP_R14W cmp bp, r14w
#define CMP_BP_R15W cmp bp, r15w

#define CMP_SP_AX cmp sp, ax
#define CMP_SP_BX cmp sp, bx
#define CMP_SP_CX cmp sp, cx
#define CMP_SP_DX cmp sp, dx
#define CMP_SP_DI cmp sp, di
#define CMP_SP_SI cmp sp, si
#define CMP_SP_BP cmp sp, bp
#define CMP_SP_SP cmp sp, sp
#define CMP_SP_R8W cmp sp, r8w
#define CMP_SP_R9W cmp sp, r9w
#define CMP_SP_R10W cmp sp, r10w
#define CMP_SP_R11W cmp sp, r11w
#define CMP_SP_R12W cmp sp, r12w
#define CMP_SP_R13W cmp sp, r13w
#define CMP_SP_R14W cmp sp, r14w
#define CMP_SP_R15W cmp sp, r15w

#define CMP_R8W_AX cmp r8w, ax
#define CMP_R8W_BX cmp r8w, bx
#define CMP_R8W_CX cmp r8w, cx
#define CMP_R8W_DX cmp r8w, dx
#define CMP_R8W_DI cmp r8w, di
#define CMP_R8W_SI cmp r8w, si
#define CMP_R8W_BP cmp r8w, bp
#define CMP_R8W_SP cmp r8w, sp
#define CMP_R8W_R8W cmp r8w, r8w
#define CMP_R8W_R9W cmp r8w, r9w
#define CMP_R8W_R10W cmp r8w, r10w
#define CMP_R8W_R11W cmp r8w, r11w
#define CMP_R8W_R12W cmp r8w, r12w
#define CMP_R8W_R13W cmp r8w, r13w
#define CMP_R8W_R14W cmp r8w, r14w
#define CMP_R8W_R15W cmp r8w, r15w

#define CMP_R9W_AX cmp r9w, ax
#define CMP_R9W_BX cmp r9w, bx
#define CMP_R9W_CX cmp r9w, cx
#define CMP_R9W_DX cmp r9w, dx
#define CMP_R9W_DI cmp r9w, di
#define CMP_R9W_SI cmp r9w, si
#define CMP_R9W_BP cmp r9w, bp
#define CMP_R9W_SP cmp r9w, sp
#define CMP_R9W_R8W cmp r9w, r8w
#define CMP_R9W_R9W cmp r9w, r9w
#define CMP_R9W_R10W cmp r9w, r10w
#define CMP_R9W_R11W cmp r9w, r11w
#define CMP_R9W_R12W cmp r9w, r12w
#define CMP_R9W_R13W cmp r9w, r13w
#define CMP_R9W_R14W cmp r9w, r14w
#define CMP_R9W_R15W cmp r9w, r15w

#define CMP_R10W_AX cmp r10w, ax
#define CMP_R10W_BX cmp r10w, bx
#define CMP_R10W_CX cmp r10w, cx
#define CMP_R10W_DX cmp r10w, dx
#define CMP_R10W_DI cmp r10w, di
#define CMP_R10W_SI cmp r10w, si
#define CMP_R10W_BP cmp r10w, bp
#define CMP_R10W_SP cmp r10w, sp
#define CMP_R10W_R8W cmp r10w, r8w
#define CMP_R10W_R9W cmp r10w, r9w
#define CMP_R10W_R10W cmp r10w, r10w
#define CMP_R10W_R11W cmp r10w, r11w
#define CMP_R10W_R12W cmp r10w, r12w
#define CMP_R10W_R13W cmp r10w, r13w
#define CMP_R10W_R14W cmp r10w, r14w
#define CMP_R10W_R15W cmp r10w, r15w

#define CMP_R11W_AX cmp r11w, ax
#define CMP_R11W_BX cmp r11w, bx
#define CMP_R11W_CX cmp r11w, cx
#define CMP_R11W_DX cmp r11w, dx
#define CMP_R11W_DI cmp r11w, di
#define CMP_R11W_SI cmp r11w, si
#define CMP_R11W_BP cmp r11w, bp
#define CMP_R11W_SP cmp r11w, sp
#define CMP_R11W_R8W cmp r11w, r8w
#define CMP_R11W_R9W cmp r11w, r9w
#define CMP_R11W_R10W cmp r11w, r10w
#define CMP_R11W_R11W cmp r11w, r11w
#define CMP_R11W_R12W cmp r11w, r12w
#define CMP_R11W_R13W cmp r11w, r13w
#define CMP_R11W_R14W cmp r11w, r14w
#define CMP_R11W_R15W cmp r11w, r15w

#define CMP_R12W_AX cmp r12w, ax
#define CMP_R12W_BX cmp r12w, bx
#define CMP_R12W_CX cmp r12w, cx
#define CMP_R12W_DX cmp r12w, dx
#define CMP_R12W_DI cmp r12w, di
#define CMP_R12W_SI cmp r12w, si
#define CMP_R12W_BP cmp r12w, bp
#define CMP_R12W_SP cmp r12w, sp
#define CMP_R12W_R8W cmp r12w, r8w
#define CMP_R12W_R9W cmp r12w, r9w
#define CMP_R12W_R10W cmp r12w, r10w
#define CMP_R12W_R11W cmp r12w, r11w
#define CMP_R12W_R12W cmp r12w, r12w
#define CMP_R12W_R13W cmp r12w, r13w
#define CMP_R12W_R14W cmp r12w, r14w
#define CMP_R12W_R15W cmp r12w, r15w

#define CMP_R13W_AX cmp r13w, ax
#define CMP_R13W_BX cmp r13w, bx
#define CMP_R13W_CX cmp r13w, cx
#define CMP_R13W_DX cmp r13w, dx
#define CMP_R13W_DI cmp r13w, di
#define CMP_R13W_SI cmp r13w, si
#define CMP_R13W_BP cmp r13w, bp
#define CMP_R13W_SP cmp r13w, sp
#define CMP_R13W_R8W cmp r13w, r8w
#define CMP_R13W_R9W cmp r13w, r9w
#define CMP_R13W_R10W cmp r13w, r10w
#define CMP_R13W_R11W cmp r13w, r11w
#define CMP_R13W_R12W cmp r13w, r12w
#define CMP_R13W_R13W cmp r13w, r13w
#define CMP_R13W_R14W cmp r13w, r14w
#define CMP_R13W_R15W cmp r13w, r15w

#define CMP_R14W_AX cmp r14w, ax
#define CMP_R14W_BX cmp r14w, bx
#define CMP_R14W_CX cmp r14w, cx
#define CMP_R14W_DX cmp r14w, dx
#define CMP_R14W_DI cmp r14w, di
#define CMP_R14W_SI cmp r14w, si
#define CMP_R14W_BP cmp r14w, bp
#define CMP_R14W_SP cmp r14w, sp
#define CMP_R14W_R8W cmp r14w, r8w
#define CMP_R14W_R9W cmp r14w, r9w
#define CMP_R14W_R10W cmp r14w, r10w
#define CMP_R14W_R11W cmp r14w, r11w
#define CMP_R14W_R12W cmp r14w, r12w
#define CMP_R14W_R13W cmp r14w, r13w
#define CMP_R14W_R14W cmp r14w, r14w
#define CMP_R14W_R15W cmp r14w, r15w

#define CMP_R15W_AX cmp r15w, ax
#define CMP_R15W_BX cmp r15w, bx
#define CMP_R15W_CX cmp r15w, cx
#define CMP_R15W_DX cmp r15w, dx
#define CMP_R15W_DI cmp r15w, di
#define CMP_R15W_SI cmp r15w, si
#define CMP_R15W_BP cmp r15w, bp
#define CMP_R15W_SP cmp r15w, sp
#define CMP_R15W_R8W cmp r15w, r8w
#define CMP_R15W_R9W cmp r15w, r9w
#define CMP_R15W_R10W cmp r15w, r10w
#define CMP_R15W_R11W cmp r15w, r11w
#define CMP_R15W_R12W cmp r15w, r12w
#define CMP_R15W_R13W cmp r15w, r13w
#define CMP_R15W_R14W cmp r15w, r14w
#define CMP_R15W_R15W cmp r15w, r15w

#define CMP_AX_(VALUE) cmp ax, VALUE
#define CMP_BX_(VALUE) cmp bx, VALUE
#define CMP_CX_(VALUE) cmp cx, VALUE
#define CMP_DX_(VALUE) cmp dx, VALUE
#define CMP_DI_(VALUE) cmp di, VALUE
#define CMP_SI_(VALUE) cmp si, VALUE
#define CMP_BP_(VALUE) cmp bp, VALUE
#define CMP_SP_(VALUE) cmp sp, VALUE
#define CMP_R8W_(VALUE) cmp r8w, VALUE
#define CMP_R9W_(VALUE) cmp r9w, VALUE
#define CMP_R10W_(VALUE) cmp r10w, VALUE
#define CMP_R11W_(VALUE) cmp r11w, VALUE
#define CMP_R12W_(VALUE) cmp r12w, VALUE
#define CMP_R13W_(VALUE) cmp r13w, VALUE
#define CMP_R14W_(VALUE) cmp r14w, VALUE
#define CMP_R15W_(VALUE) cmp r15w, VALUE
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
