#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define ADD_AL_AL add al, al
#define ADD_AL_BL add al, bl
#define ADD_AL_CL add al, cl
#define ADD_AL_DL add al, dl

#define ADD_BL_AL add bl, al
#define ADD_BL_BL add bl, bl
#define ADD_BL_CL add bl, cl
#define ADD_BL_DL add bl, dl

#define ADD_CL_AL add cl, al
#define ADD_CL_BL add cl, bl
#define ADD_CL_CL add cl, cl
#define ADD_CL_DL add cl, dl

#define ADD_DL_AL add dl, al
#define ADD_DL_BL add dl, bl
#define ADD_DL_CL add dl, cl
#define ADD_DL_DL add dl, dl

#define ADD_AL_(VALUE) add al, VALUE
#define ADD_BL_(VALUE) add bl, VALUE
#define ADD_CL_(VALUE) add cl, VALUE
#define ADD_DL_(VALUE) add dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AL_AL add al, al
#define ADD_AL_BL add al, bl
#define ADD_AL_CL add al, cl
#define ADD_AL_DL add al, dl

#define ADD_BL_AL add bl, al
#define ADD_BL_BL add bl, bl
#define ADD_BL_CL add bl, cl
#define ADD_BL_DL add bl, dl

#define ADD_CL_AL add cl, al
#define ADD_CL_BL add cl, bl
#define ADD_CL_CL add cl, cl
#define ADD_CL_DL add cl, dl

#define ADD_DL_AL add dl, al
#define ADD_DL_BL add dl, bl
#define ADD_DL_CL add dl, cl
#define ADD_DL_DL add dl, dl

#define ADD_AL_(VALUE) add al, VALUE
#define ADD_BL_(VALUE) add bl, VALUE
#define ADD_CL_(VALUE) add cl, VALUE
#define ADD_DL_(VALUE) add dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AL_AL add al, al
#define ADD_AL_BL add al, bl
#define ADD_AL_CL add al, cl
#define ADD_AL_DL add al, dl
#define ADD_AL_DIL add al, dil
#define ADD_AL_SIL add al, sil
#define ADD_AL_BPL add al, bpl
#define ADD_AL_SPL add al, spl
#define ADD_AL_R8B add al, r8b
#define ADD_AL_R9B add al, r9b
#define ADD_AL_R10B add al, r10b
#define ADD_AL_R11B add al, r11b
#define ADD_AL_R12B add al, r12b
#define ADD_AL_R13B add al, r13b
#define ADD_AL_R14B add al, r14b
#define ADD_AL_R15B add al, r15b

#define ADD_BL_AL add bl, al
#define ADD_BL_BL add bl, bl
#define ADD_BL_CL add bl, cl
#define ADD_BL_DL add bl, dl
#define ADD_BL_DIL add bl, dil
#define ADD_BL_SIL add bl, sil
#define ADD_BL_BPL add bl, bpl
#define ADD_BL_SPL add bl, spl
#define ADD_BL_R8B add bl, r8b
#define ADD_BL_R9B add bl, r9b
#define ADD_BL_R10B add bl, r10b
#define ADD_BL_R11B add bl, r11b
#define ADD_BL_R12B add bl, r12b
#define ADD_BL_R13B add bl, r13b
#define ADD_BL_R14B add bl, r14b
#define ADD_BL_R15B add bl, r15b

#define ADD_CL_AL add cl, al
#define ADD_CL_BL add cl, bl
#define ADD_CL_CL add cl, cl
#define ADD_CL_DL add cl, dl
#define ADD_CL_DIL add cl, dil
#define ADD_CL_SIL add cl, sil
#define ADD_CL_BPL add cl, bpl
#define ADD_CL_SPL add cl, spl
#define ADD_CL_R8B add cl, r8b
#define ADD_CL_R9B add cl, r9b
#define ADD_CL_R10B add cl, r10b
#define ADD_CL_R11B add cl, r11b
#define ADD_CL_R12B add cl, r12b
#define ADD_CL_R13B add cl, r13b
#define ADD_CL_R14B add cl, r14b
#define ADD_CL_R15B add cl, r15b

#define ADD_DL_AL add dl, al
#define ADD_DL_BL add dl, bl
#define ADD_DL_CL add dl, cl
#define ADD_DL_DL add dl, dl
#define ADD_DL_DIL add dl, dil
#define ADD_DL_SIL add dl, sil
#define ADD_DL_BPL add dl, bpl
#define ADD_DL_SPL add dl, spl
#define ADD_DL_R8B add dl, r8b
#define ADD_DL_R9B add dl, r9b
#define ADD_DL_R10B add dl, r10b
#define ADD_DL_R11B add dl, r11b
#define ADD_DL_R12B add dl, r12b
#define ADD_DL_R13B add dl, r13b
#define ADD_DL_R14B add dl, r14b
#define ADD_DL_R15B add dl, r15b

#define ADD_DIL_AL add dil, al
#define ADD_DIL_BL add dil, bl
#define ADD_DIL_CL add dil, cl
#define ADD_DIL_DL add dil, dl
#define ADD_DIL_DIL add dil, dil
#define ADD_DIL_SIL add dil, sil
#define ADD_DIL_BPL add dil, bpl
#define ADD_DIL_SPL add dil, spl
#define ADD_DIL_R8B add dil, r8b
#define ADD_DIL_R9B add dil, r9b
#define ADD_DIL_R10B add dil, r10b
#define ADD_DIL_R11B add dil, r11b
#define ADD_DIL_R12B add dil, r12b
#define ADD_DIL_R13B add dil, r13b
#define ADD_DIL_R14B add dil, r14b
#define ADD_DIL_R15B add dil, r15b

#define ADD_SIL_AL add sil, al
#define ADD_SIL_BL add sil, bl
#define ADD_SIL_CL add sil, cl
#define ADD_SIL_DL add sil, dl
#define ADD_SIL_DIL add sil, dil
#define ADD_SIL_SIL add sil, sil
#define ADD_SIL_BPL add sil, bpl
#define ADD_SIL_SPL add sil, spl
#define ADD_SIL_R8B add sil, r8b
#define ADD_SIL_R9B add sil, r9b
#define ADD_SIL_R10B add sil, r10b
#define ADD_SIL_R11B add sil, r11b
#define ADD_SIL_R12B add sil, r12b
#define ADD_SIL_R13B add sil, r13b
#define ADD_SIL_R14B add sil, r14b
#define ADD_SIL_R15B add sil, r15b

#define ADD_BPL_AL add bpl, al
#define ADD_BPL_BL add bpl, bl
#define ADD_BPL_CL add bpl, cl
#define ADD_BPL_DL add bpl, dl
#define ADD_BPL_DIL add bpl, dil
#define ADD_BPL_SIL add bpl, sil
#define ADD_BPL_BPL add bpl, bpl
#define ADD_BPL_SPL add bpl, spl
#define ADD_BPL_R8B add bpl, r8b
#define ADD_BPL_R9B add bpl, r9b
#define ADD_BPL_R10B add bpl, r10b
#define ADD_BPL_R11B add bpl, r11b
#define ADD_BPL_R12B add bpl, r12b
#define ADD_BPL_R13B add bpl, r13b
#define ADD_BPL_R14B add bpl, r14b
#define ADD_BPL_R15B add bpl, r15b

#define ADD_SPL_AL add spl, al
#define ADD_SPL_BL add spl, bl
#define ADD_SPL_CL add spl, cl
#define ADD_SPL_DL add spl, dl
#define ADD_SPL_DIL add spl, dil
#define ADD_SPL_SIL add spl, sil
#define ADD_SPL_BPL add spl, bpl
#define ADD_SPL_SPL add spl, spl
#define ADD_SPL_R8B add spl, r8b
#define ADD_SPL_R9B add spl, r9b
#define ADD_SPL_R10B add spl, r10b
#define ADD_SPL_R11B add spl, r11b
#define ADD_SPL_R12B add spl, r12b
#define ADD_SPL_R13B add spl, r13b
#define ADD_SPL_R14B add spl, r14b
#define ADD_SPL_R15B add spl, r15b

#define ADD_R8B_AL add r8b, al
#define ADD_R8B_BL add r8b, bl
#define ADD_R8B_CL add r8b, cl
#define ADD_R8B_DL add r8b, dl
#define ADD_R8B_DIL add r8b, dil
#define ADD_R8B_SIL add r8b, sil
#define ADD_R8B_BPL add r8b, bpl
#define ADD_R8B_SPL add r8b, spl
#define ADD_R8B_R8B add r8b, r8b
#define ADD_R8B_R9B add r8b, r9b
#define ADD_R8B_R10B add r8b, r10b
#define ADD_R8B_R11B add r8b, r11b
#define ADD_R8B_R12B add r8b, r12b
#define ADD_R8B_R13B add r8b, r13b
#define ADD_R8B_R14B add r8b, r14b
#define ADD_R8B_R15B add r8b, r15b

#define ADD_R9B_AL add r9b, al
#define ADD_R9B_BL add r9b, bl
#define ADD_R9B_CL add r9b, cl
#define ADD_R9B_DL add r9b, dl
#define ADD_R9B_DIL add r9b, dil
#define ADD_R9B_SIL add r9b, sil
#define ADD_R9B_BPL add r9b, bpl
#define ADD_R9B_SPL add r9b, spl
#define ADD_R9B_R8B add r9b, r8b
#define ADD_R9B_R9B add r9b, r9b
#define ADD_R9B_R10B add r9b, r10b
#define ADD_R9B_R11B add r9b, r11b
#define ADD_R9B_R12B add r9b, r12b
#define ADD_R9B_R13B add r9b, r13b
#define ADD_R9B_R14B add r9b, r14b
#define ADD_R9B_R15B add r9b, r15b

#define ADD_R10B_AL add r10b, al
#define ADD_R10B_BL add r10b, bl
#define ADD_R10B_CL add r10b, cl
#define ADD_R10B_DL add r10b, dl
#define ADD_R10B_DIL add r10b, dil
#define ADD_R10B_SIL add r10b, sil
#define ADD_R10B_BPL add r10b, bpl
#define ADD_R10B_SPL add r10b, spl
#define ADD_R10B_R8B add r10b, r8b
#define ADD_R10B_R9B add r10b, r9b
#define ADD_R10B_R10B add r10b, r10b
#define ADD_R10B_R11B add r10b, r11b
#define ADD_R10B_R12B add r10b, r12b
#define ADD_R10B_R13B add r10b, r13b
#define ADD_R10B_R14B add r10b, r14b
#define ADD_R10B_R15B add r10b, r15b

#define ADD_R11B_AL add r11b, al
#define ADD_R11B_BL add r11b, bl
#define ADD_R11B_CL add r11b, cl
#define ADD_R11B_DL add r11b, dl
#define ADD_R11B_DIL add r11b, dil
#define ADD_R11B_SIL add r11b, sil
#define ADD_R11B_BPL add r11b, bpl
#define ADD_R11B_SPL add r11b, spl
#define ADD_R11B_R8B add r11b, r8b
#define ADD_R11B_R9B add r11b, r9b
#define ADD_R11B_R10B add r11b, r10b
#define ADD_R11B_R11B add r11b, r11b
#define ADD_R11B_R12B add r11b, r12b
#define ADD_R11B_R13B add r11b, r13b
#define ADD_R11B_R14B add r11b, r14b
#define ADD_R11B_R15B add r11b, r15b

#define ADD_R12B_AL add r12b, al
#define ADD_R12B_BL add r12b, bl
#define ADD_R12B_CL add r12b, cl
#define ADD_R12B_DL add r12b, dl
#define ADD_R12B_DIL add r12b, dil
#define ADD_R12B_SIL add r12b, sil
#define ADD_R12B_BPL add r12b, bpl
#define ADD_R12B_SPL add r12b, spl
#define ADD_R12B_R8B add r12b, r8b
#define ADD_R12B_R9B add r12b, r9b
#define ADD_R12B_R10B add r12b, r10b
#define ADD_R12B_R11B add r12b, r11b
#define ADD_R12B_R12B add r12b, r12b
#define ADD_R12B_R13B add r12b, r13b
#define ADD_R12B_R14B add r12b, r14b
#define ADD_R12B_R15B add r12b, r15b

#define ADD_R13B_AL add r13b, al
#define ADD_R13B_BL add r13b, bl
#define ADD_R13B_CL add r13b, cl
#define ADD_R13B_DL add r13b, dl
#define ADD_R13B_DIL add r13b, dil
#define ADD_R13B_SIL add r13b, sil
#define ADD_R13B_BPL add r13b, bpl
#define ADD_R13B_SPL add r13b, spl
#define ADD_R13B_R8B add r13b, r8b
#define ADD_R13B_R9B add r13b, r9b
#define ADD_R13B_R10B add r13b, r10b
#define ADD_R13B_R11B add r13b, r11b
#define ADD_R13B_R12B add r13b, r12b
#define ADD_R13B_R13B add r13b, r13b
#define ADD_R13B_R14B add r13b, r14b
#define ADD_R13B_R15B add r13b, r15b

#define ADD_R14B_AL add r14b, al
#define ADD_R14B_BL add r14b, bl
#define ADD_R14B_CL add r14b, cl
#define ADD_R14B_DL add r14b, dl
#define ADD_R14B_DIL add r14b, dil
#define ADD_R14B_SIL add r14b, sil
#define ADD_R14B_BPL add r14b, bpl
#define ADD_R14B_SPL add r14b, spl
#define ADD_R14B_R8B add r14b, r8b
#define ADD_R14B_R9B add r14b, r9b
#define ADD_R14B_R10B add r14b, r10b
#define ADD_R14B_R11B add r14b, r11b
#define ADD_R14B_R12B add r14b, r12b
#define ADD_R14B_R13B add r14b, r13b
#define ADD_R14B_R14B add r14b, r14b
#define ADD_R14B_R15B add r14b, r15b

#define ADD_R15B_AL add r15b, al
#define ADD_R15B_BL add r15b, bl
#define ADD_R15B_CL add r15b, cl
#define ADD_R15B_DL add r15b, dl
#define ADD_R15B_DIL add r15b, dil
#define ADD_R15B_SIL add r15b, sil
#define ADD_R15B_BPL add r15b, bpl
#define ADD_R15B_SPL add r15b, spl
#define ADD_R15B_R8B add r15b, r8b
#define ADD_R15B_R9B add r15b, r9b
#define ADD_R15B_R10B add r15b, r10b
#define ADD_R15B_R11B add r15b, r11b
#define ADD_R15B_R12B add r15b, r12b
#define ADD_R15B_R13B add r15b, r13b
#define ADD_R15B_R14B add r15b, r14b
#define ADD_R15B_R15B add r15b, r15b

#define ADD_AL_(VALUE) add al, VALUE
#define ADD_BL_(VALUE) add bl, VALUE
#define ADD_CL_(VALUE) add cl, VALUE
#define ADD_DL_(VALUE) add dl, VALUE
#define ADD_DIL_(VALUE) add dil, VALUE
#define ADD_SIL_(VALUE) add sil, VALUE
#define ADD_BPL_(VALUE) add bpl, VALUE
#define ADD_SPL_(VALUE) add spl, VALUE
#define ADD_R8B_(VALUE) add r8b, VALUE
#define ADD_R9B_(VALUE) add r9b, VALUE
#define ADD_R10B_(VALUE) add r10b, VALUE
#define ADD_R11B_(VALUE) add r11b, VALUE
#define ADD_R12B_(VALUE) add r12b, VALUE
#define ADD_R13B_(VALUE) add r13b, VALUE
#define ADD_R14B_(VALUE) add r14b, VALUE
#define ADD_R15B_(VALUE) add r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define ADD_AX_AX add ax, ax
#define ADD_AX_BX add ax, bx
#define ADD_AX_CX add ax, cx
#define ADD_AX_DX add ax, dx
#define ADD_AX_DI add ax, di
#define ADD_AX_SI add ax, si
#define ADD_AX_BP add ax, bp
#define ADD_AX_SP add ax, sp

#define ADD_BX_AX add bx, ax
#define ADD_BX_BX add bx, bx
#define ADD_BX_CX add bx, cx
#define ADD_BX_DX add bx, dx
#define ADD_BX_DI add bx, di
#define ADD_BX_SI add bx, si
#define ADD_BX_BP add bx, bp
#define ADD_BX_SP add bx, sp

#define ADD_CX_AX add cx, ax
#define ADD_CX_BX add cx, bx
#define ADD_CX_CX add cx, cx
#define ADD_CX_DX add cx, dx
#define ADD_CX_DI add cx, di
#define ADD_CX_SI add cx, si
#define ADD_CX_BP add cx, bp
#define ADD_CX_SP add cx, sp

#define ADD_DX_AX add dx, ax
#define ADD_DX_BX add dx, bx
#define ADD_DX_CX add dx, cx
#define ADD_DX_DX add dx, dx
#define ADD_DX_DI add dx, di
#define ADD_DX_SI add dx, si
#define ADD_DX_BP add dx, bp
#define ADD_DX_SP add dx, sp

#define ADD_DI_AX add di, ax
#define ADD_DI_BX add di, bx
#define ADD_DI_CX add di, cx
#define ADD_DI_DX add di, dx
#define ADD_DI_DI add di, di
#define ADD_DI_SI add di, si
#define ADD_DI_BP add di, bp
#define ADD_DI_SP add di, sp

#define ADD_SI_AX add si, ax
#define ADD_SI_BX add si, bx
#define ADD_SI_CX add si, cx
#define ADD_SI_DX add si, dx
#define ADD_SI_DI add si, di
#define ADD_SI_SI add si, si
#define ADD_SI_BP add si, bp
#define ADD_SI_SP add si, sp

#define ADD_BP_AX add bp, ax
#define ADD_BP_BX add bp, bx
#define ADD_BP_CX add bp, cx
#define ADD_BP_DX add bp, dx
#define ADD_BP_DI add bp, di
#define ADD_BP_SI add bp, si
#define ADD_BP_BP add bp, bp
#define ADD_BP_SP add bp, sp

#define ADD_SP_AX add sp, ax
#define ADD_SP_BX add sp, bx
#define ADD_SP_CX add sp, cx
#define ADD_SP_DX add sp, dx
#define ADD_SP_DI add sp, di
#define ADD_SP_SI add sp, si
#define ADD_SP_BP add sp, bp
#define ADD_SP_SP add sp, sp

#define ADD_AX_(VALUE) add ax, VALUE
#define ADD_BX_(VALUE) add bx, VALUE
#define ADD_CX_(VALUE) add cx, VALUE
#define ADD_DX_(VALUE) add dx, VALUE
#define ADD_DI_(VALUE) add di, VALUE
#define ADD_SI_(VALUE) add si, VALUE
#define ADD_BP_(VALUE) add bp, VALUE
#define ADD_SP_(VALUE) add sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define ADD_AX_AX add ax, ax
#define ADD_AX_BX add ax, bx
#define ADD_AX_CX add ax, cx
#define ADD_AX_DX add ax, dx
#define ADD_AX_DI add ax, di
#define ADD_AX_SI add ax, si
#define ADD_AX_BP add ax, bp
#define ADD_AX_SP add ax, sp

#define ADD_BX_AX add bx, ax
#define ADD_BX_BX add bx, bx
#define ADD_BX_CX add bx, cx
#define ADD_BX_DX add bx, dx
#define ADD_BX_DI add bx, di
#define ADD_BX_SI add bx, si
#define ADD_BX_BP add bx, bp
#define ADD_BX_SP add bx, sp

#define ADD_CX_AX add cx, ax
#define ADD_CX_BX add cx, bx
#define ADD_CX_CX add cx, cx
#define ADD_CX_DX add cx, dx
#define ADD_CX_DI add cx, di
#define ADD_CX_SI add cx, si
#define ADD_CX_BP add cx, bp
#define ADD_CX_SP add cx, sp

#define ADD_DX_AX add dx, ax
#define ADD_DX_BX add dx, bx
#define ADD_DX_CX add dx, cx
#define ADD_DX_DX add dx, dx
#define ADD_DX_DI add dx, di
#define ADD_DX_SI add dx, si
#define ADD_DX_BP add dx, bp
#define ADD_DX_SP add dx, sp

#define ADD_DI_AX add di, ax
#define ADD_DI_BX add di, bx
#define ADD_DI_CX add di, cx
#define ADD_DI_DX add di, dx
#define ADD_DI_DI add di, di
#define ADD_DI_SI add di, si
#define ADD_DI_BP add di, bp
#define ADD_DI_SP add di, sp

#define ADD_SI_AX add si, ax
#define ADD_SI_BX add si, bx
#define ADD_SI_CX add si, cx
#define ADD_SI_DX add si, dx
#define ADD_SI_DI add si, di
#define ADD_SI_SI add si, si
#define ADD_SI_BP add si, bp
#define ADD_SI_SP add si, sp

#define ADD_BP_AX add bp, ax
#define ADD_BP_BX add bp, bx
#define ADD_BP_CX add bp, cx
#define ADD_BP_DX add bp, dx
#define ADD_BP_DI add bp, di
#define ADD_BP_SI add bp, si
#define ADD_BP_BP add bp, bp
#define ADD_BP_SP add bp, sp

#define ADD_SP_AX add sp, ax
#define ADD_SP_BX add sp, bx
#define ADD_SP_CX add sp, cx
#define ADD_SP_DX add sp, dx
#define ADD_SP_DI add sp, di
#define ADD_SP_SI add sp, si
#define ADD_SP_BP add sp, bp
#define ADD_SP_SP add sp, sp

#define ADD_AX_(VALUE) add ax, VALUE
#define ADD_BX_(VALUE) add bx, VALUE
#define ADD_CX_(VALUE) add cx, VALUE
#define ADD_DX_(VALUE) add dx, VALUE
#define ADD_DI_(VALUE) add di, VALUE
#define ADD_SI_(VALUE) add si, VALUE
#define ADD_BP_(VALUE) add bp, VALUE
#define ADD_SP_(VALUE) add sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define ADD_AX_AX add ax, ax
#define ADD_AX_BX add ax, bx
#define ADD_AX_CX add ax, cx
#define ADD_AX_DX add ax, dx
#define ADD_AX_DI add ax, di
#define ADD_AX_SI add ax, si
#define ADD_AX_BP add ax, bp
#define ADD_AX_SP add ax, sp
#define ADD_AX_R8W add ax, r8w
#define ADD_AX_R9W add ax, r9w
#define ADD_AX_R10W add ax, r10w
#define ADD_AX_R11W add ax, r11w
#define ADD_AX_R12W add ax, r12w
#define ADD_AX_R13W add ax, r13w
#define ADD_AX_R14W add ax, r14w
#define ADD_AX_R15W add ax, r15w

#define ADD_BX_AX add bx, ax
#define ADD_BX_BX add bx, bx
#define ADD_BX_CX add bx, cx
#define ADD_BX_DX add bx, dx
#define ADD_BX_DI add bx, di
#define ADD_BX_SI add bx, si
#define ADD_BX_BP add bx, bp
#define ADD_BX_SP add bx, sp
#define ADD_BX_R8W add bx, r8w
#define ADD_BX_R9W add bx, r9w
#define ADD_BX_R10W add bx, r10w
#define ADD_BX_R11W add bx, r11w
#define ADD_BX_R12W add bx, r12w
#define ADD_BX_R13W add bx, r13w
#define ADD_BX_R14W add bx, r14w
#define ADD_BX_R15W add bx, r15w

#define ADD_CX_AX add cx, ax
#define ADD_CX_BX add cx, bx
#define ADD_CX_CX add cx, cx
#define ADD_CX_DX add cx, dx
#define ADD_CX_DI add cx, di
#define ADD_CX_SI add cx, si
#define ADD_CX_BP add cx, bp
#define ADD_CX_SP add cx, sp
#define ADD_CX_R8W add cx, r8w
#define ADD_CX_R9W add cx, r9w
#define ADD_CX_R10W add cx, r10w
#define ADD_CX_R11W add cx, r11w
#define ADD_CX_R12W add cx, r12w
#define ADD_CX_R13W add cx, r13w
#define ADD_CX_R14W add cx, r14w
#define ADD_CX_R15W add cx, r15w

#define ADD_DX_AX add dx, ax
#define ADD_DX_BX add dx, bx
#define ADD_DX_CX add dx, cx
#define ADD_DX_DX add dx, dx
#define ADD_DX_DI add dx, di
#define ADD_DX_SI add dx, si
#define ADD_DX_BP add dx, bp
#define ADD_DX_SP add dx, sp
#define ADD_DX_R8W add dx, r8w
#define ADD_DX_R9W add dx, r9w
#define ADD_DX_R10W add dx, r10w
#define ADD_DX_R11W add dx, r11w
#define ADD_DX_R12W add dx, r12w
#define ADD_DX_R13W add dx, r13w
#define ADD_DX_R14W add dx, r14w
#define ADD_DX_R15W add dx, r15w

#define ADD_DI_AX add di, ax
#define ADD_DI_BX add di, bx
#define ADD_DI_CX add di, cx
#define ADD_DI_DX add di, dx
#define ADD_DI_DI add di, di
#define ADD_DI_SI add di, si
#define ADD_DI_BP add di, bp
#define ADD_DI_SP add di, sp
#define ADD_DI_R8W add di, r8w
#define ADD_DI_R9W add di, r9w
#define ADD_DI_R10W add di, r10w
#define ADD_DI_R11W add di, r11w
#define ADD_DI_R12W add di, r12w
#define ADD_DI_R13W add di, r13w
#define ADD_DI_R14W add di, r14w
#define ADD_DI_R15W add di, r15w

#define ADD_SI_AX add si, ax
#define ADD_SI_BX add si, bx
#define ADD_SI_CX add si, cx
#define ADD_SI_DX add si, dx
#define ADD_SI_DI add si, di
#define ADD_SI_SI add si, si
#define ADD_SI_BP add si, bp
#define ADD_SI_SP add si, sp
#define ADD_SI_R8W add si, r8w
#define ADD_SI_R9W add si, r9w
#define ADD_SI_R10W add si, r10w
#define ADD_SI_R11W add si, r11w
#define ADD_SI_R12W add si, r12w
#define ADD_SI_R13W add si, r13w
#define ADD_SI_R14W add si, r14w
#define ADD_SI_R15W add si, r15w

#define ADD_BP_AX add bp, ax
#define ADD_BP_BX add bp, bx
#define ADD_BP_CX add bp, cx
#define ADD_BP_DX add bp, dx
#define ADD_BP_DI add bp, di
#define ADD_BP_SI add bp, si
#define ADD_BP_BP add bp, bp
#define ADD_BP_SP add bp, sp
#define ADD_BP_R8W add bp, r8w
#define ADD_BP_R9W add bp, r9w
#define ADD_BP_R10W add bp, r10w
#define ADD_BP_R11W add bp, r11w
#define ADD_BP_R12W add bp, r12w
#define ADD_BP_R13W add bp, r13w
#define ADD_BP_R14W add bp, r14w
#define ADD_BP_R15W add bp, r15w

#define ADD_SP_AX add sp, ax
#define ADD_SP_BX add sp, bx
#define ADD_SP_CX add sp, cx
#define ADD_SP_DX add sp, dx
#define ADD_SP_DI add sp, di
#define ADD_SP_SI add sp, si
#define ADD_SP_BP add sp, bp
#define ADD_SP_SP add sp, sp
#define ADD_SP_R8W add sp, r8w
#define ADD_SP_R9W add sp, r9w
#define ADD_SP_R10W add sp, r10w
#define ADD_SP_R11W add sp, r11w
#define ADD_SP_R12W add sp, r12w
#define ADD_SP_R13W add sp, r13w
#define ADD_SP_R14W add sp, r14w
#define ADD_SP_R15W add sp, r15w

#define ADD_R8W_AX add r8w, ax
#define ADD_R8W_BX add r8w, bx
#define ADD_R8W_CX add r8w, cx
#define ADD_R8W_DX add r8w, dx
#define ADD_R8W_DI add r8w, di
#define ADD_R8W_SI add r8w, si
#define ADD_R8W_BP add r8w, bp
#define ADD_R8W_SP add r8w, sp
#define ADD_R8W_R8W add r8w, r8w
#define ADD_R8W_R9W add r8w, r9w
#define ADD_R8W_R10W add r8w, r10w
#define ADD_R8W_R11W add r8w, r11w
#define ADD_R8W_R12W add r8w, r12w
#define ADD_R8W_R13W add r8w, r13w
#define ADD_R8W_R14W add r8w, r14w
#define ADD_R8W_R15W add r8w, r15w

#define ADD_R9W_AX add r9w, ax
#define ADD_R9W_BX add r9w, bx
#define ADD_R9W_CX add r9w, cx
#define ADD_R9W_DX add r9w, dx
#define ADD_R9W_DI add r9w, di
#define ADD_R9W_SI add r9w, si
#define ADD_R9W_BP add r9w, bp
#define ADD_R9W_SP add r9w, sp
#define ADD_R9W_R8W add r9w, r8w
#define ADD_R9W_R9W add r9w, r9w
#define ADD_R9W_R10W add r9w, r10w
#define ADD_R9W_R11W add r9w, r11w
#define ADD_R9W_R12W add r9w, r12w
#define ADD_R9W_R13W add r9w, r13w
#define ADD_R9W_R14W add r9w, r14w
#define ADD_R9W_R15W add r9w, r15w

#define ADD_R10W_AX add r10w, ax
#define ADD_R10W_BX add r10w, bx
#define ADD_R10W_CX add r10w, cx
#define ADD_R10W_DX add r10w, dx
#define ADD_R10W_DI add r10w, di
#define ADD_R10W_SI add r10w, si
#define ADD_R10W_BP add r10w, bp
#define ADD_R10W_SP add r10w, sp
#define ADD_R10W_R8W add r10w, r8w
#define ADD_R10W_R9W add r10w, r9w
#define ADD_R10W_R10W add r10w, r10w
#define ADD_R10W_R11W add r10w, r11w
#define ADD_R10W_R12W add r10w, r12w
#define ADD_R10W_R13W add r10w, r13w
#define ADD_R10W_R14W add r10w, r14w
#define ADD_R10W_R15W add r10w, r15w

#define ADD_R11W_AX add r11w, ax
#define ADD_R11W_BX add r11w, bx
#define ADD_R11W_CX add r11w, cx
#define ADD_R11W_DX add r11w, dx
#define ADD_R11W_DI add r11w, di
#define ADD_R11W_SI add r11w, si
#define ADD_R11W_BP add r11w, bp
#define ADD_R11W_SP add r11w, sp
#define ADD_R11W_R8W add r11w, r8w
#define ADD_R11W_R9W add r11w, r9w
#define ADD_R11W_R10W add r11w, r10w
#define ADD_R11W_R11W add r11w, r11w
#define ADD_R11W_R12W add r11w, r12w
#define ADD_R11W_R13W add r11w, r13w
#define ADD_R11W_R14W add r11w, r14w
#define ADD_R11W_R15W add r11w, r15w

#define ADD_R12W_AX add r12w, ax
#define ADD_R12W_BX add r12w, bx
#define ADD_R12W_CX add r12w, cx
#define ADD_R12W_DX add r12w, dx
#define ADD_R12W_DI add r12w, di
#define ADD_R12W_SI add r12w, si
#define ADD_R12W_BP add r12w, bp
#define ADD_R12W_SP add r12w, sp
#define ADD_R12W_R8W add r12w, r8w
#define ADD_R12W_R9W add r12w, r9w
#define ADD_R12W_R10W add r12w, r10w
#define ADD_R12W_R11W add r12w, r11w
#define ADD_R12W_R12W add r12w, r12w
#define ADD_R12W_R13W add r12w, r13w
#define ADD_R12W_R14W add r12w, r14w
#define ADD_R12W_R15W add r12w, r15w

#define ADD_R13W_AX add r13w, ax
#define ADD_R13W_BX add r13w, bx
#define ADD_R13W_CX add r13w, cx
#define ADD_R13W_DX add r13w, dx
#define ADD_R13W_DI add r13w, di
#define ADD_R13W_SI add r13w, si
#define ADD_R13W_BP add r13w, bp
#define ADD_R13W_SP add r13w, sp
#define ADD_R13W_R8W add r13w, r8w
#define ADD_R13W_R9W add r13w, r9w
#define ADD_R13W_R10W add r13w, r10w
#define ADD_R13W_R11W add r13w, r11w
#define ADD_R13W_R12W add r13w, r12w
#define ADD_R13W_R13W add r13w, r13w
#define ADD_R13W_R14W add r13w, r14w
#define ADD_R13W_R15W add r13w, r15w

#define ADD_R14W_AX add r14w, ax
#define ADD_R14W_BX add r14w, bx
#define ADD_R14W_CX add r14w, cx
#define ADD_R14W_DX add r14w, dx
#define ADD_R14W_DI add r14w, di
#define ADD_R14W_SI add r14w, si
#define ADD_R14W_BP add r14w, bp
#define ADD_R14W_SP add r14w, sp
#define ADD_R14W_R8W add r14w, r8w
#define ADD_R14W_R9W add r14w, r9w
#define ADD_R14W_R10W add r14w, r10w
#define ADD_R14W_R11W add r14w, r11w
#define ADD_R14W_R12W add r14w, r12w
#define ADD_R14W_R13W add r14w, r13w
#define ADD_R14W_R14W add r14w, r14w
#define ADD_R14W_R15W add r14w, r15w

#define ADD_R15W_AX add r15w, ax
#define ADD_R15W_BX add r15w, bx
#define ADD_R15W_CX add r15w, cx
#define ADD_R15W_DX add r15w, dx
#define ADD_R15W_DI add r15w, di
#define ADD_R15W_SI add r15w, si
#define ADD_R15W_BP add r15w, bp
#define ADD_R15W_SP add r15w, sp
#define ADD_R15W_R8W add r15w, r8w
#define ADD_R15W_R9W add r15w, r9w
#define ADD_R15W_R10W add r15w, r10w
#define ADD_R15W_R11W add r15w, r11w
#define ADD_R15W_R12W add r15w, r12w
#define ADD_R15W_R13W add r15w, r13w
#define ADD_R15W_R14W add r15w, r14w
#define ADD_R15W_R15W add r15w, r15w

#define ADD_AX_(VALUE) add ax, VALUE
#define ADD_BX_(VALUE) add bx, VALUE
#define ADD_CX_(VALUE) add cx, VALUE
#define ADD_DX_(VALUE) add dx, VALUE
#define ADD_DI_(VALUE) add di, VALUE
#define ADD_SI_(VALUE) add si, VALUE
#define ADD_BP_(VALUE) add bp, VALUE
#define ADD_SP_(VALUE) add sp, VALUE
#define ADD_R8W_(VALUE) add r8w, VALUE
#define ADD_R9W_(VALUE) add r9w, VALUE
#define ADD_R10W_(VALUE) add r10w, VALUE
#define ADD_R11W_(VALUE) add r11w, VALUE
#define ADD_R12W_(VALUE) add r12w, VALUE
#define ADD_R13W_(VALUE) add r13w, VALUE
#define ADD_R14W_(VALUE) add r14w, VALUE
#define ADD_R15W_(VALUE) add r15w, VALUE
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
