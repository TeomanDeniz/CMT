#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define AND_AL_AL and al, al
#define AND_AL_BL and al, bl
#define AND_AL_CL and al, cl
#define AND_AL_DL and al, dl

#define AND_BL_AL and bl, al
#define AND_BL_BL and bl, bl
#define AND_BL_CL and bl, cl
#define AND_BL_DL and bl, dl

#define AND_CL_AL and cl, al
#define AND_CL_BL and cl, bl
#define AND_CL_CL and cl, cl
#define AND_CL_DL and cl, dl

#define AND_DL_AL and dl, al
#define AND_DL_BL and dl, bl
#define AND_DL_CL and dl, cl
#define AND_DL_DL and dl, dl

#define AND_AL_(VALUE) and al, VALUE
#define AND_BL_(VALUE) and bl, VALUE
#define AND_CL_(VALUE) and cl, VALUE
#define AND_DL_(VALUE) and dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AL_AL and al, al
#define AND_AL_BL and al, bl
#define AND_AL_CL and al, cl
#define AND_AL_DL and al, dl

#define AND_BL_AL and bl, al
#define AND_BL_BL and bl, bl
#define AND_BL_CL and bl, cl
#define AND_BL_DL and bl, dl

#define AND_CL_AL and cl, al
#define AND_CL_BL and cl, bl
#define AND_CL_CL and cl, cl
#define AND_CL_DL and cl, dl

#define AND_DL_AL and dl, al
#define AND_DL_BL and dl, bl
#define AND_DL_CL and dl, cl
#define AND_DL_DL and dl, dl

#define AND_AL_(VALUE) and al, VALUE
#define AND_BL_(VALUE) and bl, VALUE
#define AND_CL_(VALUE) and cl, VALUE
#define AND_DL_(VALUE) and dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AL_AL and al, al
#define AND_AL_BL and al, bl
#define AND_AL_CL and al, cl
#define AND_AL_DL and al, dl
#define AND_AL_DIL and al, dil
#define AND_AL_SIL and al, sil
#define AND_AL_BPL and al, bpl
#define AND_AL_SPL and al, spl
#define AND_AL_R8B and al, r8b
#define AND_AL_R9B and al, r9b
#define AND_AL_R10B and al, r10b
#define AND_AL_R11B and al, r11b
#define AND_AL_R12B and al, r12b
#define AND_AL_R13B and al, r13b
#define AND_AL_R14B and al, r14b
#define AND_AL_R15B and al, r15b

#define AND_BL_AL and bl, al
#define AND_BL_BL and bl, bl
#define AND_BL_CL and bl, cl
#define AND_BL_DL and bl, dl
#define AND_BL_DIL and bl, dil
#define AND_BL_SIL and bl, sil
#define AND_BL_BPL and bl, bpl
#define AND_BL_SPL and bl, spl
#define AND_BL_R8B and bl, r8b
#define AND_BL_R9B and bl, r9b
#define AND_BL_R10B and bl, r10b
#define AND_BL_R11B and bl, r11b
#define AND_BL_R12B and bl, r12b
#define AND_BL_R13B and bl, r13b
#define AND_BL_R14B and bl, r14b
#define AND_BL_R15B and bl, r15b

#define AND_CL_AL and cl, al
#define AND_CL_BL and cl, bl
#define AND_CL_CL and cl, cl
#define AND_CL_DL and cl, dl
#define AND_CL_DIL and cl, dil
#define AND_CL_SIL and cl, sil
#define AND_CL_BPL and cl, bpl
#define AND_CL_SPL and cl, spl
#define AND_CL_R8B and cl, r8b
#define AND_CL_R9B and cl, r9b
#define AND_CL_R10B and cl, r10b
#define AND_CL_R11B and cl, r11b
#define AND_CL_R12B and cl, r12b
#define AND_CL_R13B and cl, r13b
#define AND_CL_R14B and cl, r14b
#define AND_CL_R15B and cl, r15b

#define AND_DL_AL and dl, al
#define AND_DL_BL and dl, bl
#define AND_DL_CL and dl, cl
#define AND_DL_DL and dl, dl
#define AND_DL_DIL and dl, dil
#define AND_DL_SIL and dl, sil
#define AND_DL_BPL and dl, bpl
#define AND_DL_SPL and dl, spl
#define AND_DL_R8B and dl, r8b
#define AND_DL_R9B and dl, r9b
#define AND_DL_R10B and dl, r10b
#define AND_DL_R11B and dl, r11b
#define AND_DL_R12B and dl, r12b
#define AND_DL_R13B and dl, r13b
#define AND_DL_R14B and dl, r14b
#define AND_DL_R15B and dl, r15b

#define AND_DIL_AL and dil, al
#define AND_DIL_BL and dil, bl
#define AND_DIL_CL and dil, cl
#define AND_DIL_DL and dil, dl
#define AND_DIL_DIL and dil, dil
#define AND_DIL_SIL and dil, sil
#define AND_DIL_BPL and dil, bpl
#define AND_DIL_SPL and dil, spl
#define AND_DIL_R8B and dil, r8b
#define AND_DIL_R9B and dil, r9b
#define AND_DIL_R10B and dil, r10b
#define AND_DIL_R11B and dil, r11b
#define AND_DIL_R12B and dil, r12b
#define AND_DIL_R13B and dil, r13b
#define AND_DIL_R14B and dil, r14b
#define AND_DIL_R15B and dil, r15b

#define AND_SIL_AL and sil, al
#define AND_SIL_BL and sil, bl
#define AND_SIL_CL and sil, cl
#define AND_SIL_DL and sil, dl
#define AND_SIL_DIL and sil, dil
#define AND_SIL_SIL and sil, sil
#define AND_SIL_BPL and sil, bpl
#define AND_SIL_SPL and sil, spl
#define AND_SIL_R8B and sil, r8b
#define AND_SIL_R9B and sil, r9b
#define AND_SIL_R10B and sil, r10b
#define AND_SIL_R11B and sil, r11b
#define AND_SIL_R12B and sil, r12b
#define AND_SIL_R13B and sil, r13b
#define AND_SIL_R14B and sil, r14b
#define AND_SIL_R15B and sil, r15b

#define AND_BPL_AL and bpl, al
#define AND_BPL_BL and bpl, bl
#define AND_BPL_CL and bpl, cl
#define AND_BPL_DL and bpl, dl
#define AND_BPL_DIL and bpl, dil
#define AND_BPL_SIL and bpl, sil
#define AND_BPL_BPL and bpl, bpl
#define AND_BPL_SPL and bpl, spl
#define AND_BPL_R8B and bpl, r8b
#define AND_BPL_R9B and bpl, r9b
#define AND_BPL_R10B and bpl, r10b
#define AND_BPL_R11B and bpl, r11b
#define AND_BPL_R12B and bpl, r12b
#define AND_BPL_R13B and bpl, r13b
#define AND_BPL_R14B and bpl, r14b
#define AND_BPL_R15B and bpl, r15b

#define AND_SPL_AL and spl, al
#define AND_SPL_BL and spl, bl
#define AND_SPL_CL and spl, cl
#define AND_SPL_DL and spl, dl
#define AND_SPL_DIL and spl, dil
#define AND_SPL_SIL and spl, sil
#define AND_SPL_BPL and spl, bpl
#define AND_SPL_SPL and spl, spl
#define AND_SPL_R8B and spl, r8b
#define AND_SPL_R9B and spl, r9b
#define AND_SPL_R10B and spl, r10b
#define AND_SPL_R11B and spl, r11b
#define AND_SPL_R12B and spl, r12b
#define AND_SPL_R13B and spl, r13b
#define AND_SPL_R14B and spl, r14b
#define AND_SPL_R15B and spl, r15b

#define AND_R8B_AL and r8b, al
#define AND_R8B_BL and r8b, bl
#define AND_R8B_CL and r8b, cl
#define AND_R8B_DL and r8b, dl
#define AND_R8B_DIL and r8b, dil
#define AND_R8B_SIL and r8b, sil
#define AND_R8B_BPL and r8b, bpl
#define AND_R8B_SPL and r8b, spl
#define AND_R8B_R8B and r8b, r8b
#define AND_R8B_R9B and r8b, r9b
#define AND_R8B_R10B and r8b, r10b
#define AND_R8B_R11B and r8b, r11b
#define AND_R8B_R12B and r8b, r12b
#define AND_R8B_R13B and r8b, r13b
#define AND_R8B_R14B and r8b, r14b
#define AND_R8B_R15B and r8b, r15b

#define AND_R9B_AL and r9b, al
#define AND_R9B_BL and r9b, bl
#define AND_R9B_CL and r9b, cl
#define AND_R9B_DL and r9b, dl
#define AND_R9B_DIL and r9b, dil
#define AND_R9B_SIL and r9b, sil
#define AND_R9B_BPL and r9b, bpl
#define AND_R9B_SPL and r9b, spl
#define AND_R9B_R8B and r9b, r8b
#define AND_R9B_R9B and r9b, r9b
#define AND_R9B_R10B and r9b, r10b
#define AND_R9B_R11B and r9b, r11b
#define AND_R9B_R12B and r9b, r12b
#define AND_R9B_R13B and r9b, r13b
#define AND_R9B_R14B and r9b, r14b
#define AND_R9B_R15B and r9b, r15b

#define AND_R10B_AL and r10b, al
#define AND_R10B_BL and r10b, bl
#define AND_R10B_CL and r10b, cl
#define AND_R10B_DL and r10b, dl
#define AND_R10B_DIL and r10b, dil
#define AND_R10B_SIL and r10b, sil
#define AND_R10B_BPL and r10b, bpl
#define AND_R10B_SPL and r10b, spl
#define AND_R10B_R8B and r10b, r8b
#define AND_R10B_R9B and r10b, r9b
#define AND_R10B_R10B and r10b, r10b
#define AND_R10B_R11B and r10b, r11b
#define AND_R10B_R12B and r10b, r12b
#define AND_R10B_R13B and r10b, r13b
#define AND_R10B_R14B and r10b, r14b
#define AND_R10B_R15B and r10b, r15b

#define AND_R11B_AL and r11b, al
#define AND_R11B_BL and r11b, bl
#define AND_R11B_CL and r11b, cl
#define AND_R11B_DL and r11b, dl
#define AND_R11B_DIL and r11b, dil
#define AND_R11B_SIL and r11b, sil
#define AND_R11B_BPL and r11b, bpl
#define AND_R11B_SPL and r11b, spl
#define AND_R11B_R8B and r11b, r8b
#define AND_R11B_R9B and r11b, r9b
#define AND_R11B_R10B and r11b, r10b
#define AND_R11B_R11B and r11b, r11b
#define AND_R11B_R12B and r11b, r12b
#define AND_R11B_R13B and r11b, r13b
#define AND_R11B_R14B and r11b, r14b
#define AND_R11B_R15B and r11b, r15b

#define AND_R12B_AL and r12b, al
#define AND_R12B_BL and r12b, bl
#define AND_R12B_CL and r12b, cl
#define AND_R12B_DL and r12b, dl
#define AND_R12B_DIL and r12b, dil
#define AND_R12B_SIL and r12b, sil
#define AND_R12B_BPL and r12b, bpl
#define AND_R12B_SPL and r12b, spl
#define AND_R12B_R8B and r12b, r8b
#define AND_R12B_R9B and r12b, r9b
#define AND_R12B_R10B and r12b, r10b
#define AND_R12B_R11B and r12b, r11b
#define AND_R12B_R12B and r12b, r12b
#define AND_R12B_R13B and r12b, r13b
#define AND_R12B_R14B and r12b, r14b
#define AND_R12B_R15B and r12b, r15b

#define AND_R13B_AL and r13b, al
#define AND_R13B_BL and r13b, bl
#define AND_R13B_CL and r13b, cl
#define AND_R13B_DL and r13b, dl
#define AND_R13B_DIL and r13b, dil
#define AND_R13B_SIL and r13b, sil
#define AND_R13B_BPL and r13b, bpl
#define AND_R13B_SPL and r13b, spl
#define AND_R13B_R8B and r13b, r8b
#define AND_R13B_R9B and r13b, r9b
#define AND_R13B_R10B and r13b, r10b
#define AND_R13B_R11B and r13b, r11b
#define AND_R13B_R12B and r13b, r12b
#define AND_R13B_R13B and r13b, r13b
#define AND_R13B_R14B and r13b, r14b
#define AND_R13B_R15B and r13b, r15b

#define AND_R14B_AL and r14b, al
#define AND_R14B_BL and r14b, bl
#define AND_R14B_CL and r14b, cl
#define AND_R14B_DL and r14b, dl
#define AND_R14B_DIL and r14b, dil
#define AND_R14B_SIL and r14b, sil
#define AND_R14B_BPL and r14b, bpl
#define AND_R14B_SPL and r14b, spl
#define AND_R14B_R8B and r14b, r8b
#define AND_R14B_R9B and r14b, r9b
#define AND_R14B_R10B and r14b, r10b
#define AND_R14B_R11B and r14b, r11b
#define AND_R14B_R12B and r14b, r12b
#define AND_R14B_R13B and r14b, r13b
#define AND_R14B_R14B and r14b, r14b
#define AND_R14B_R15B and r14b, r15b

#define AND_R15B_AL and r15b, al
#define AND_R15B_BL and r15b, bl
#define AND_R15B_CL and r15b, cl
#define AND_R15B_DL and r15b, dl
#define AND_R15B_DIL and r15b, dil
#define AND_R15B_SIL and r15b, sil
#define AND_R15B_BPL and r15b, bpl
#define AND_R15B_SPL and r15b, spl
#define AND_R15B_R8B and r15b, r8b
#define AND_R15B_R9B and r15b, r9b
#define AND_R15B_R10B and r15b, r10b
#define AND_R15B_R11B and r15b, r11b
#define AND_R15B_R12B and r15b, r12b
#define AND_R15B_R13B and r15b, r13b
#define AND_R15B_R14B and r15b, r14b
#define AND_R15B_R15B and r15b, r15b

#define AND_AL_(VALUE) and al, VALUE
#define AND_BL_(VALUE) and bl, VALUE
#define AND_CL_(VALUE) and cl, VALUE
#define AND_DL_(VALUE) and dl, VALUE
#define AND_DIL_(VALUE) and dil, VALUE
#define AND_SIL_(VALUE) and sil, VALUE
#define AND_BPL_(VALUE) and bpl, VALUE
#define AND_SPL_(VALUE) and spl, VALUE
#define AND_R8B_(VALUE) and r8b, VALUE
#define AND_R9B_(VALUE) and r9b, VALUE
#define AND_R10B_(VALUE) and r10b, VALUE
#define AND_R11B_(VALUE) and r11b, VALUE
#define AND_R12B_(VALUE) and r12b, VALUE
#define AND_R13B_(VALUE) and r13b, VALUE
#define AND_R14B_(VALUE) and r14b, VALUE
#define AND_R15B_(VALUE) and r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define AND_AX_AX and ax, ax
#define AND_AX_BX and ax, bx
#define AND_AX_CX and ax, cx
#define AND_AX_DX and ax, dx
#define AND_AX_DI and ax, di
#define AND_AX_SI and ax, si
#define AND_AX_BP and ax, bp
#define AND_AX_SP and ax, sp

#define AND_BX_AX and bx, ax
#define AND_BX_BX and bx, bx
#define AND_BX_CX and bx, cx
#define AND_BX_DX and bx, dx
#define AND_BX_DI and bx, di
#define AND_BX_SI and bx, si
#define AND_BX_BP and bx, bp
#define AND_BX_SP and bx, sp

#define AND_CX_AX and cx, ax
#define AND_CX_BX and cx, bx
#define AND_CX_CX and cx, cx
#define AND_CX_DX and cx, dx
#define AND_CX_DI and cx, di
#define AND_CX_SI and cx, si
#define AND_CX_BP and cx, bp
#define AND_CX_SP and cx, sp

#define AND_DX_AX and dx, ax
#define AND_DX_BX and dx, bx
#define AND_DX_CX and dx, cx
#define AND_DX_DX and dx, dx
#define AND_DX_DI and dx, di
#define AND_DX_SI and dx, si
#define AND_DX_BP and dx, bp
#define AND_DX_SP and dx, sp

#define AND_DI_AX and di, ax
#define AND_DI_BX and di, bx
#define AND_DI_CX and di, cx
#define AND_DI_DX and di, dx
#define AND_DI_DI and di, di
#define AND_DI_SI and di, si
#define AND_DI_BP and di, bp
#define AND_DI_SP and di, sp

#define AND_SI_AX and si, ax
#define AND_SI_BX and si, bx
#define AND_SI_CX and si, cx
#define AND_SI_DX and si, dx
#define AND_SI_DI and si, di
#define AND_SI_SI and si, si
#define AND_SI_BP and si, bp
#define AND_SI_SP and si, sp

#define AND_BP_AX and bp, ax
#define AND_BP_BX and bp, bx
#define AND_BP_CX and bp, cx
#define AND_BP_DX and bp, dx
#define AND_BP_DI and bp, di
#define AND_BP_SI and bp, si
#define AND_BP_BP and bp, bp
#define AND_BP_SP and bp, sp

#define AND_SP_AX and sp, ax
#define AND_SP_BX and sp, bx
#define AND_SP_CX and sp, cx
#define AND_SP_DX and sp, dx
#define AND_SP_DI and sp, di
#define AND_SP_SI and sp, si
#define AND_SP_BP and sp, bp
#define AND_SP_SP and sp, sp

#define AND_AX_(VALUE) and ax, VALUE
#define AND_BX_(VALUE) and bx, VALUE
#define AND_CX_(VALUE) and cx, VALUE
#define AND_DX_(VALUE) and dx, VALUE
#define AND_DI_(VALUE) and di, VALUE
#define AND_SI_(VALUE) and si, VALUE
#define AND_BP_(VALUE) and bp, VALUE
#define AND_SP_(VALUE) and sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define AND_AX_AX and ax, ax
#define AND_AX_BX and ax, bx
#define AND_AX_CX and ax, cx
#define AND_AX_DX and ax, dx
#define AND_AX_DI and ax, di
#define AND_AX_SI and ax, si
#define AND_AX_BP and ax, bp
#define AND_AX_SP and ax, sp

#define AND_BX_AX and bx, ax
#define AND_BX_BX and bx, bx
#define AND_BX_CX and bx, cx
#define AND_BX_DX and bx, dx
#define AND_BX_DI and bx, di
#define AND_BX_SI and bx, si
#define AND_BX_BP and bx, bp
#define AND_BX_SP and bx, sp

#define AND_CX_AX and cx, ax
#define AND_CX_BX and cx, bx
#define AND_CX_CX and cx, cx
#define AND_CX_DX and cx, dx
#define AND_CX_DI and cx, di
#define AND_CX_SI and cx, si
#define AND_CX_BP and cx, bp
#define AND_CX_SP and cx, sp

#define AND_DX_AX and dx, ax
#define AND_DX_BX and dx, bx
#define AND_DX_CX and dx, cx
#define AND_DX_DX and dx, dx
#define AND_DX_DI and dx, di
#define AND_DX_SI and dx, si
#define AND_DX_BP and dx, bp
#define AND_DX_SP and dx, sp

#define AND_DI_AX and di, ax
#define AND_DI_BX and di, bx
#define AND_DI_CX and di, cx
#define AND_DI_DX and di, dx
#define AND_DI_DI and di, di
#define AND_DI_SI and di, si
#define AND_DI_BP and di, bp
#define AND_DI_SP and di, sp

#define AND_SI_AX and si, ax
#define AND_SI_BX and si, bx
#define AND_SI_CX and si, cx
#define AND_SI_DX and si, dx
#define AND_SI_DI and si, di
#define AND_SI_SI and si, si
#define AND_SI_BP and si, bp
#define AND_SI_SP and si, sp

#define AND_BP_AX and bp, ax
#define AND_BP_BX and bp, bx
#define AND_BP_CX and bp, cx
#define AND_BP_DX and bp, dx
#define AND_BP_DI and bp, di
#define AND_BP_SI and bp, si
#define AND_BP_BP and bp, bp
#define AND_BP_SP and bp, sp

#define AND_SP_AX and sp, ax
#define AND_SP_BX and sp, bx
#define AND_SP_CX and sp, cx
#define AND_SP_DX and sp, dx
#define AND_SP_DI and sp, di
#define AND_SP_SI and sp, si
#define AND_SP_BP and sp, bp
#define AND_SP_SP and sp, sp

#define AND_AX_(VALUE) and ax, VALUE
#define AND_BX_(VALUE) and bx, VALUE
#define AND_CX_(VALUE) and cx, VALUE
#define AND_DX_(VALUE) and dx, VALUE
#define AND_DI_(VALUE) and di, VALUE
#define AND_SI_(VALUE) and si, VALUE
#define AND_BP_(VALUE) and bp, VALUE
#define AND_SP_(VALUE) and sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define AND_AX_AX and ax, ax
#define AND_AX_BX and ax, bx
#define AND_AX_CX and ax, cx
#define AND_AX_DX and ax, dx
#define AND_AX_DI and ax, di
#define AND_AX_SI and ax, si
#define AND_AX_BP and ax, bp
#define AND_AX_SP and ax, sp
#define AND_AX_R8W and ax, r8w
#define AND_AX_R9W and ax, r9w
#define AND_AX_R10W and ax, r10w
#define AND_AX_R11W and ax, r11w
#define AND_AX_R12W and ax, r12w
#define AND_AX_R13W and ax, r13w
#define AND_AX_R14W and ax, r14w
#define AND_AX_R15W and ax, r15w

#define AND_BX_AX and bx, ax
#define AND_BX_BX and bx, bx
#define AND_BX_CX and bx, cx
#define AND_BX_DX and bx, dx
#define AND_BX_DI and bx, di
#define AND_BX_SI and bx, si
#define AND_BX_BP and bx, bp
#define AND_BX_SP and bx, sp
#define AND_BX_R8W and bx, r8w
#define AND_BX_R9W and bx, r9w
#define AND_BX_R10W and bx, r10w
#define AND_BX_R11W and bx, r11w
#define AND_BX_R12W and bx, r12w
#define AND_BX_R13W and bx, r13w
#define AND_BX_R14W and bx, r14w
#define AND_BX_R15W and bx, r15w

#define AND_CX_AX and cx, ax
#define AND_CX_BX and cx, bx
#define AND_CX_CX and cx, cx
#define AND_CX_DX and cx, dx
#define AND_CX_DI and cx, di
#define AND_CX_SI and cx, si
#define AND_CX_BP and cx, bp
#define AND_CX_SP and cx, sp
#define AND_CX_R8W and cx, r8w
#define AND_CX_R9W and cx, r9w
#define AND_CX_R10W and cx, r10w
#define AND_CX_R11W and cx, r11w
#define AND_CX_R12W and cx, r12w
#define AND_CX_R13W and cx, r13w
#define AND_CX_R14W and cx, r14w
#define AND_CX_R15W and cx, r15w

#define AND_DX_AX and dx, ax
#define AND_DX_BX and dx, bx
#define AND_DX_CX and dx, cx
#define AND_DX_DX and dx, dx
#define AND_DX_DI and dx, di
#define AND_DX_SI and dx, si
#define AND_DX_BP and dx, bp
#define AND_DX_SP and dx, sp
#define AND_DX_R8W and dx, r8w
#define AND_DX_R9W and dx, r9w
#define AND_DX_R10W and dx, r10w
#define AND_DX_R11W and dx, r11w
#define AND_DX_R12W and dx, r12w
#define AND_DX_R13W and dx, r13w
#define AND_DX_R14W and dx, r14w
#define AND_DX_R15W and dx, r15w

#define AND_DI_AX and di, ax
#define AND_DI_BX and di, bx
#define AND_DI_CX and di, cx
#define AND_DI_DX and di, dx
#define AND_DI_DI and di, di
#define AND_DI_SI and di, si
#define AND_DI_BP and di, bp
#define AND_DI_SP and di, sp
#define AND_DI_R8W and di, r8w
#define AND_DI_R9W and di, r9w
#define AND_DI_R10W and di, r10w
#define AND_DI_R11W and di, r11w
#define AND_DI_R12W and di, r12w
#define AND_DI_R13W and di, r13w
#define AND_DI_R14W and di, r14w
#define AND_DI_R15W and di, r15w

#define AND_SI_AX and si, ax
#define AND_SI_BX and si, bx
#define AND_SI_CX and si, cx
#define AND_SI_DX and si, dx
#define AND_SI_DI and si, di
#define AND_SI_SI and si, si
#define AND_SI_BP and si, bp
#define AND_SI_SP and si, sp
#define AND_SI_R8W and si, r8w
#define AND_SI_R9W and si, r9w
#define AND_SI_R10W and si, r10w
#define AND_SI_R11W and si, r11w
#define AND_SI_R12W and si, r12w
#define AND_SI_R13W and si, r13w
#define AND_SI_R14W and si, r14w
#define AND_SI_R15W and si, r15w

#define AND_BP_AX and bp, ax
#define AND_BP_BX and bp, bx
#define AND_BP_CX and bp, cx
#define AND_BP_DX and bp, dx
#define AND_BP_DI and bp, di
#define AND_BP_SI and bp, si
#define AND_BP_BP and bp, bp
#define AND_BP_SP and bp, sp
#define AND_BP_R8W and bp, r8w
#define AND_BP_R9W and bp, r9w
#define AND_BP_R10W and bp, r10w
#define AND_BP_R11W and bp, r11w
#define AND_BP_R12W and bp, r12w
#define AND_BP_R13W and bp, r13w
#define AND_BP_R14W and bp, r14w
#define AND_BP_R15W and bp, r15w

#define AND_SP_AX and sp, ax
#define AND_SP_BX and sp, bx
#define AND_SP_CX and sp, cx
#define AND_SP_DX and sp, dx
#define AND_SP_DI and sp, di
#define AND_SP_SI and sp, si
#define AND_SP_BP and sp, bp
#define AND_SP_SP and sp, sp
#define AND_SP_R8W and sp, r8w
#define AND_SP_R9W and sp, r9w
#define AND_SP_R10W and sp, r10w
#define AND_SP_R11W and sp, r11w
#define AND_SP_R12W and sp, r12w
#define AND_SP_R13W and sp, r13w
#define AND_SP_R14W and sp, r14w
#define AND_SP_R15W and sp, r15w

#define AND_R8W_AX and r8w, ax
#define AND_R8W_BX and r8w, bx
#define AND_R8W_CX and r8w, cx
#define AND_R8W_DX and r8w, dx
#define AND_R8W_DI and r8w, di
#define AND_R8W_SI and r8w, si
#define AND_R8W_BP and r8w, bp
#define AND_R8W_SP and r8w, sp
#define AND_R8W_R8W and r8w, r8w
#define AND_R8W_R9W and r8w, r9w
#define AND_R8W_R10W and r8w, r10w
#define AND_R8W_R11W and r8w, r11w
#define AND_R8W_R12W and r8w, r12w
#define AND_R8W_R13W and r8w, r13w
#define AND_R8W_R14W and r8w, r14w
#define AND_R8W_R15W and r8w, r15w

#define AND_R9W_AX and r9w, ax
#define AND_R9W_BX and r9w, bx
#define AND_R9W_CX and r9w, cx
#define AND_R9W_DX and r9w, dx
#define AND_R9W_DI and r9w, di
#define AND_R9W_SI and r9w, si
#define AND_R9W_BP and r9w, bp
#define AND_R9W_SP and r9w, sp
#define AND_R9W_R8W and r9w, r8w
#define AND_R9W_R9W and r9w, r9w
#define AND_R9W_R10W and r9w, r10w
#define AND_R9W_R11W and r9w, r11w
#define AND_R9W_R12W and r9w, r12w
#define AND_R9W_R13W and r9w, r13w
#define AND_R9W_R14W and r9w, r14w
#define AND_R9W_R15W and r9w, r15w

#define AND_R10W_AX and r10w, ax
#define AND_R10W_BX and r10w, bx
#define AND_R10W_CX and r10w, cx
#define AND_R10W_DX and r10w, dx
#define AND_R10W_DI and r10w, di
#define AND_R10W_SI and r10w, si
#define AND_R10W_BP and r10w, bp
#define AND_R10W_SP and r10w, sp
#define AND_R10W_R8W and r10w, r8w
#define AND_R10W_R9W and r10w, r9w
#define AND_R10W_R10W and r10w, r10w
#define AND_R10W_R11W and r10w, r11w
#define AND_R10W_R12W and r10w, r12w
#define AND_R10W_R13W and r10w, r13w
#define AND_R10W_R14W and r10w, r14w
#define AND_R10W_R15W and r10w, r15w

#define AND_R11W_AX and r11w, ax
#define AND_R11W_BX and r11w, bx
#define AND_R11W_CX and r11w, cx
#define AND_R11W_DX and r11w, dx
#define AND_R11W_DI and r11w, di
#define AND_R11W_SI and r11w, si
#define AND_R11W_BP and r11w, bp
#define AND_R11W_SP and r11w, sp
#define AND_R11W_R8W and r11w, r8w
#define AND_R11W_R9W and r11w, r9w
#define AND_R11W_R10W and r11w, r10w
#define AND_R11W_R11W and r11w, r11w
#define AND_R11W_R12W and r11w, r12w
#define AND_R11W_R13W and r11w, r13w
#define AND_R11W_R14W and r11w, r14w
#define AND_R11W_R15W and r11w, r15w

#define AND_R12W_AX and r12w, ax
#define AND_R12W_BX and r12w, bx
#define AND_R12W_CX and r12w, cx
#define AND_R12W_DX and r12w, dx
#define AND_R12W_DI and r12w, di
#define AND_R12W_SI and r12w, si
#define AND_R12W_BP and r12w, bp
#define AND_R12W_SP and r12w, sp
#define AND_R12W_R8W and r12w, r8w
#define AND_R12W_R9W and r12w, r9w
#define AND_R12W_R10W and r12w, r10w
#define AND_R12W_R11W and r12w, r11w
#define AND_R12W_R12W and r12w, r12w
#define AND_R12W_R13W and r12w, r13w
#define AND_R12W_R14W and r12w, r14w
#define AND_R12W_R15W and r12w, r15w

#define AND_R13W_AX and r13w, ax
#define AND_R13W_BX and r13w, bx
#define AND_R13W_CX and r13w, cx
#define AND_R13W_DX and r13w, dx
#define AND_R13W_DI and r13w, di
#define AND_R13W_SI and r13w, si
#define AND_R13W_BP and r13w, bp
#define AND_R13W_SP and r13w, sp
#define AND_R13W_R8W and r13w, r8w
#define AND_R13W_R9W and r13w, r9w
#define AND_R13W_R10W and r13w, r10w
#define AND_R13W_R11W and r13w, r11w
#define AND_R13W_R12W and r13w, r12w
#define AND_R13W_R13W and r13w, r13w
#define AND_R13W_R14W and r13w, r14w
#define AND_R13W_R15W and r13w, r15w

#define AND_R14W_AX and r14w, ax
#define AND_R14W_BX and r14w, bx
#define AND_R14W_CX and r14w, cx
#define AND_R14W_DX and r14w, dx
#define AND_R14W_DI and r14w, di
#define AND_R14W_SI and r14w, si
#define AND_R14W_BP and r14w, bp
#define AND_R14W_SP and r14w, sp
#define AND_R14W_R8W and r14w, r8w
#define AND_R14W_R9W and r14w, r9w
#define AND_R14W_R10W and r14w, r10w
#define AND_R14W_R11W and r14w, r11w
#define AND_R14W_R12W and r14w, r12w
#define AND_R14W_R13W and r14w, r13w
#define AND_R14W_R14W and r14w, r14w
#define AND_R14W_R15W and r14w, r15w

#define AND_R15W_AX and r15w, ax
#define AND_R15W_BX and r15w, bx
#define AND_R15W_CX and r15w, cx
#define AND_R15W_DX and r15w, dx
#define AND_R15W_DI and r15w, di
#define AND_R15W_SI and r15w, si
#define AND_R15W_BP and r15w, bp
#define AND_R15W_SP and r15w, sp
#define AND_R15W_R8W and r15w, r8w
#define AND_R15W_R9W and r15w, r9w
#define AND_R15W_R10W and r15w, r10w
#define AND_R15W_R11W and r15w, r11w
#define AND_R15W_R12W and r15w, r12w
#define AND_R15W_R13W and r15w, r13w
#define AND_R15W_R14W and r15w, r14w
#define AND_R15W_R15W and r15w, r15w

#define AND_AX_(VALUE) and ax, VALUE
#define AND_BX_(VALUE) and bx, VALUE
#define AND_CX_(VALUE) and cx, VALUE
#define AND_DX_(VALUE) and dx, VALUE
#define AND_DI_(VALUE) and di, VALUE
#define AND_SI_(VALUE) and si, VALUE
#define AND_BP_(VALUE) and bp, VALUE
#define AND_SP_(VALUE) and sp, VALUE
#define AND_R8W_(VALUE) and r8w, VALUE
#define AND_R9W_(VALUE) and r9w, VALUE
#define AND_R10W_(VALUE) and r10w, VALUE
#define AND_R11W_(VALUE) and r11w, VALUE
#define AND_R12W_(VALUE) and r12w, VALUE
#define AND_R13W_(VALUE) and r13w, VALUE
#define AND_R14W_(VALUE) and r14w, VALUE
#define AND_R15W_(VALUE) and r15w, VALUE
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
