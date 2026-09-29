#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define OR_AL_AL or al, al
#define OR_AL_BL or al, bl
#define OR_AL_CL or al, cl
#define OR_AL_DL or al, dl

#define OR_BL_AL or bl, al
#define OR_BL_BL or bl, bl
#define OR_BL_CL or bl, cl
#define OR_BL_DL or bl, dl

#define OR_CL_AL or cl, al
#define OR_CL_BL or cl, bl
#define OR_CL_CL or cl, cl
#define OR_CL_DL or cl, dl

#define OR_DL_AL or dl, al
#define OR_DL_BL or dl, bl
#define OR_DL_CL or dl, cl
#define OR_DL_DL or dl, dl

#define OR_AL_(VALUE) or al, VALUE
#define OR_BL_(VALUE) or bl, VALUE
#define OR_CL_(VALUE) or cl, VALUE
#define OR_DL_(VALUE) or dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AL_AL or al, al
#define OR_AL_BL or al, bl
#define OR_AL_CL or al, cl
#define OR_AL_DL or al, dl

#define OR_BL_AL or bl, al
#define OR_BL_BL or bl, bl
#define OR_BL_CL or bl, cl
#define OR_BL_DL or bl, dl

#define OR_CL_AL or cl, al
#define OR_CL_BL or cl, bl
#define OR_CL_CL or cl, cl
#define OR_CL_DL or cl, dl

#define OR_DL_AL or dl, al
#define OR_DL_BL or dl, bl
#define OR_DL_CL or dl, cl
#define OR_DL_DL or dl, dl

#define OR_AL_(VALUE) or al, VALUE
#define OR_BL_(VALUE) or bl, VALUE
#define OR_CL_(VALUE) or cl, VALUE
#define OR_DL_(VALUE) or dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AL_AL or al, al
#define OR_AL_BL or al, bl
#define OR_AL_CL or al, cl
#define OR_AL_DL or al, dl
#define OR_AL_DIL or al, dil
#define OR_AL_SIL or al, sil
#define OR_AL_BPL or al, bpl
#define OR_AL_SPL or al, spl
#define OR_AL_R8B or al, r8b
#define OR_AL_R9B or al, r9b
#define OR_AL_R10B or al, r10b
#define OR_AL_R11B or al, r11b
#define OR_AL_R12B or al, r12b
#define OR_AL_R13B or al, r13b
#define OR_AL_R14B or al, r14b
#define OR_AL_R15B or al, r15b

#define OR_BL_AL or bl, al
#define OR_BL_BL or bl, bl
#define OR_BL_CL or bl, cl
#define OR_BL_DL or bl, dl
#define OR_BL_DIL or bl, dil
#define OR_BL_SIL or bl, sil
#define OR_BL_BPL or bl, bpl
#define OR_BL_SPL or bl, spl
#define OR_BL_R8B or bl, r8b
#define OR_BL_R9B or bl, r9b
#define OR_BL_R10B or bl, r10b
#define OR_BL_R11B or bl, r11b
#define OR_BL_R12B or bl, r12b
#define OR_BL_R13B or bl, r13b
#define OR_BL_R14B or bl, r14b
#define OR_BL_R15B or bl, r15b

#define OR_CL_AL or cl, al
#define OR_CL_BL or cl, bl
#define OR_CL_CL or cl, cl
#define OR_CL_DL or cl, dl
#define OR_CL_DIL or cl, dil
#define OR_CL_SIL or cl, sil
#define OR_CL_BPL or cl, bpl
#define OR_CL_SPL or cl, spl
#define OR_CL_R8B or cl, r8b
#define OR_CL_R9B or cl, r9b
#define OR_CL_R10B or cl, r10b
#define OR_CL_R11B or cl, r11b
#define OR_CL_R12B or cl, r12b
#define OR_CL_R13B or cl, r13b
#define OR_CL_R14B or cl, r14b
#define OR_CL_R15B or cl, r15b

#define OR_DL_AL or dl, al
#define OR_DL_BL or dl, bl
#define OR_DL_CL or dl, cl
#define OR_DL_DL or dl, dl
#define OR_DL_DIL or dl, dil
#define OR_DL_SIL or dl, sil
#define OR_DL_BPL or dl, bpl
#define OR_DL_SPL or dl, spl
#define OR_DL_R8B or dl, r8b
#define OR_DL_R9B or dl, r9b
#define OR_DL_R10B or dl, r10b
#define OR_DL_R11B or dl, r11b
#define OR_DL_R12B or dl, r12b
#define OR_DL_R13B or dl, r13b
#define OR_DL_R14B or dl, r14b
#define OR_DL_R15B or dl, r15b

#define OR_DIL_AL or dil, al
#define OR_DIL_BL or dil, bl
#define OR_DIL_CL or dil, cl
#define OR_DIL_DL or dil, dl
#define OR_DIL_DIL or dil, dil
#define OR_DIL_SIL or dil, sil
#define OR_DIL_BPL or dil, bpl
#define OR_DIL_SPL or dil, spl
#define OR_DIL_R8B or dil, r8b
#define OR_DIL_R9B or dil, r9b
#define OR_DIL_R10B or dil, r10b
#define OR_DIL_R11B or dil, r11b
#define OR_DIL_R12B or dil, r12b
#define OR_DIL_R13B or dil, r13b
#define OR_DIL_R14B or dil, r14b
#define OR_DIL_R15B or dil, r15b

#define OR_SIL_AL or sil, al
#define OR_SIL_BL or sil, bl
#define OR_SIL_CL or sil, cl
#define OR_SIL_DL or sil, dl
#define OR_SIL_DIL or sil, dil
#define OR_SIL_SIL or sil, sil
#define OR_SIL_BPL or sil, bpl
#define OR_SIL_SPL or sil, spl
#define OR_SIL_R8B or sil, r8b
#define OR_SIL_R9B or sil, r9b
#define OR_SIL_R10B or sil, r10b
#define OR_SIL_R11B or sil, r11b
#define OR_SIL_R12B or sil, r12b
#define OR_SIL_R13B or sil, r13b
#define OR_SIL_R14B or sil, r14b
#define OR_SIL_R15B or sil, r15b

#define OR_BPL_AL or bpl, al
#define OR_BPL_BL or bpl, bl
#define OR_BPL_CL or bpl, cl
#define OR_BPL_DL or bpl, dl
#define OR_BPL_DIL or bpl, dil
#define OR_BPL_SIL or bpl, sil
#define OR_BPL_BPL or bpl, bpl
#define OR_BPL_SPL or bpl, spl
#define OR_BPL_R8B or bpl, r8b
#define OR_BPL_R9B or bpl, r9b
#define OR_BPL_R10B or bpl, r10b
#define OR_BPL_R11B or bpl, r11b
#define OR_BPL_R12B or bpl, r12b
#define OR_BPL_R13B or bpl, r13b
#define OR_BPL_R14B or bpl, r14b
#define OR_BPL_R15B or bpl, r15b

#define OR_SPL_AL or spl, al
#define OR_SPL_BL or spl, bl
#define OR_SPL_CL or spl, cl
#define OR_SPL_DL or spl, dl
#define OR_SPL_DIL or spl, dil
#define OR_SPL_SIL or spl, sil
#define OR_SPL_BPL or spl, bpl
#define OR_SPL_SPL or spl, spl
#define OR_SPL_R8B or spl, r8b
#define OR_SPL_R9B or spl, r9b
#define OR_SPL_R10B or spl, r10b
#define OR_SPL_R11B or spl, r11b
#define OR_SPL_R12B or spl, r12b
#define OR_SPL_R13B or spl, r13b
#define OR_SPL_R14B or spl, r14b
#define OR_SPL_R15B or spl, r15b

#define OR_R8B_AL or r8b, al
#define OR_R8B_BL or r8b, bl
#define OR_R8B_CL or r8b, cl
#define OR_R8B_DL or r8b, dl
#define OR_R8B_DIL or r8b, dil
#define OR_R8B_SIL or r8b, sil
#define OR_R8B_BPL or r8b, bpl
#define OR_R8B_SPL or r8b, spl
#define OR_R8B_R8B or r8b, r8b
#define OR_R8B_R9B or r8b, r9b
#define OR_R8B_R10B or r8b, r10b
#define OR_R8B_R11B or r8b, r11b
#define OR_R8B_R12B or r8b, r12b
#define OR_R8B_R13B or r8b, r13b
#define OR_R8B_R14B or r8b, r14b
#define OR_R8B_R15B or r8b, r15b

#define OR_R9B_AL or r9b, al
#define OR_R9B_BL or r9b, bl
#define OR_R9B_CL or r9b, cl
#define OR_R9B_DL or r9b, dl
#define OR_R9B_DIL or r9b, dil
#define OR_R9B_SIL or r9b, sil
#define OR_R9B_BPL or r9b, bpl
#define OR_R9B_SPL or r9b, spl
#define OR_R9B_R8B or r9b, r8b
#define OR_R9B_R9B or r9b, r9b
#define OR_R9B_R10B or r9b, r10b
#define OR_R9B_R11B or r9b, r11b
#define OR_R9B_R12B or r9b, r12b
#define OR_R9B_R13B or r9b, r13b
#define OR_R9B_R14B or r9b, r14b
#define OR_R9B_R15B or r9b, r15b

#define OR_R10B_AL or r10b, al
#define OR_R10B_BL or r10b, bl
#define OR_R10B_CL or r10b, cl
#define OR_R10B_DL or r10b, dl
#define OR_R10B_DIL or r10b, dil
#define OR_R10B_SIL or r10b, sil
#define OR_R10B_BPL or r10b, bpl
#define OR_R10B_SPL or r10b, spl
#define OR_R10B_R8B or r10b, r8b
#define OR_R10B_R9B or r10b, r9b
#define OR_R10B_R10B or r10b, r10b
#define OR_R10B_R11B or r10b, r11b
#define OR_R10B_R12B or r10b, r12b
#define OR_R10B_R13B or r10b, r13b
#define OR_R10B_R14B or r10b, r14b
#define OR_R10B_R15B or r10b, r15b

#define OR_R11B_AL or r11b, al
#define OR_R11B_BL or r11b, bl
#define OR_R11B_CL or r11b, cl
#define OR_R11B_DL or r11b, dl
#define OR_R11B_DIL or r11b, dil
#define OR_R11B_SIL or r11b, sil
#define OR_R11B_BPL or r11b, bpl
#define OR_R11B_SPL or r11b, spl
#define OR_R11B_R8B or r11b, r8b
#define OR_R11B_R9B or r11b, r9b
#define OR_R11B_R10B or r11b, r10b
#define OR_R11B_R11B or r11b, r11b
#define OR_R11B_R12B or r11b, r12b
#define OR_R11B_R13B or r11b, r13b
#define OR_R11B_R14B or r11b, r14b
#define OR_R11B_R15B or r11b, r15b

#define OR_R12B_AL or r12b, al
#define OR_R12B_BL or r12b, bl
#define OR_R12B_CL or r12b, cl
#define OR_R12B_DL or r12b, dl
#define OR_R12B_DIL or r12b, dil
#define OR_R12B_SIL or r12b, sil
#define OR_R12B_BPL or r12b, bpl
#define OR_R12B_SPL or r12b, spl
#define OR_R12B_R8B or r12b, r8b
#define OR_R12B_R9B or r12b, r9b
#define OR_R12B_R10B or r12b, r10b
#define OR_R12B_R11B or r12b, r11b
#define OR_R12B_R12B or r12b, r12b
#define OR_R12B_R13B or r12b, r13b
#define OR_R12B_R14B or r12b, r14b
#define OR_R12B_R15B or r12b, r15b

#define OR_R13B_AL or r13b, al
#define OR_R13B_BL or r13b, bl
#define OR_R13B_CL or r13b, cl
#define OR_R13B_DL or r13b, dl
#define OR_R13B_DIL or r13b, dil
#define OR_R13B_SIL or r13b, sil
#define OR_R13B_BPL or r13b, bpl
#define OR_R13B_SPL or r13b, spl
#define OR_R13B_R8B or r13b, r8b
#define OR_R13B_R9B or r13b, r9b
#define OR_R13B_R10B or r13b, r10b
#define OR_R13B_R11B or r13b, r11b
#define OR_R13B_R12B or r13b, r12b
#define OR_R13B_R13B or r13b, r13b
#define OR_R13B_R14B or r13b, r14b
#define OR_R13B_R15B or r13b, r15b

#define OR_R14B_AL or r14b, al
#define OR_R14B_BL or r14b, bl
#define OR_R14B_CL or r14b, cl
#define OR_R14B_DL or r14b, dl
#define OR_R14B_DIL or r14b, dil
#define OR_R14B_SIL or r14b, sil
#define OR_R14B_BPL or r14b, bpl
#define OR_R14B_SPL or r14b, spl
#define OR_R14B_R8B or r14b, r8b
#define OR_R14B_R9B or r14b, r9b
#define OR_R14B_R10B or r14b, r10b
#define OR_R14B_R11B or r14b, r11b
#define OR_R14B_R12B or r14b, r12b
#define OR_R14B_R13B or r14b, r13b
#define OR_R14B_R14B or r14b, r14b
#define OR_R14B_R15B or r14b, r15b

#define OR_R15B_AL or r15b, al
#define OR_R15B_BL or r15b, bl
#define OR_R15B_CL or r15b, cl
#define OR_R15B_DL or r15b, dl
#define OR_R15B_DIL or r15b, dil
#define OR_R15B_SIL or r15b, sil
#define OR_R15B_BPL or r15b, bpl
#define OR_R15B_SPL or r15b, spl
#define OR_R15B_R8B or r15b, r8b
#define OR_R15B_R9B or r15b, r9b
#define OR_R15B_R10B or r15b, r10b
#define OR_R15B_R11B or r15b, r11b
#define OR_R15B_R12B or r15b, r12b
#define OR_R15B_R13B or r15b, r13b
#define OR_R15B_R14B or r15b, r14b
#define OR_R15B_R15B or r15b, r15b

#define OR_AL_(VALUE) or al, VALUE
#define OR_BL_(VALUE) or bl, VALUE
#define OR_CL_(VALUE) or cl, VALUE
#define OR_DL_(VALUE) or dl, VALUE
#define OR_DIL_(VALUE) or dil, VALUE
#define OR_SIL_(VALUE) or sil, VALUE
#define OR_BPL_(VALUE) or bpl, VALUE
#define OR_SPL_(VALUE) or spl, VALUE
#define OR_R8B_(VALUE) or r8b, VALUE
#define OR_R9B_(VALUE) or r9b, VALUE
#define OR_R10B_(VALUE) or r10b, VALUE
#define OR_R11B_(VALUE) or r11b, VALUE
#define OR_R12B_(VALUE) or r12b, VALUE
#define OR_R13B_(VALUE) or r13b, VALUE
#define OR_R14B_(VALUE) or r14b, VALUE
#define OR_R15B_(VALUE) or r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define OR_AX_AX or ax, ax
#define OR_AX_BX or ax, bx
#define OR_AX_CX or ax, cx
#define OR_AX_DX or ax, dx
#define OR_AX_DI or ax, di
#define OR_AX_SI or ax, si
#define OR_AX_BP or ax, bp
#define OR_AX_SP or ax, sp

#define OR_BX_AX or bx, ax
#define OR_BX_BX or bx, bx
#define OR_BX_CX or bx, cx
#define OR_BX_DX or bx, dx
#define OR_BX_DI or bx, di
#define OR_BX_SI or bx, si
#define OR_BX_BP or bx, bp
#define OR_BX_SP or bx, sp

#define OR_CX_AX or cx, ax
#define OR_CX_BX or cx, bx
#define OR_CX_CX or cx, cx
#define OR_CX_DX or cx, dx
#define OR_CX_DI or cx, di
#define OR_CX_SI or cx, si
#define OR_CX_BP or cx, bp
#define OR_CX_SP or cx, sp

#define OR_DX_AX or dx, ax
#define OR_DX_BX or dx, bx
#define OR_DX_CX or dx, cx
#define OR_DX_DX or dx, dx
#define OR_DX_DI or dx, di
#define OR_DX_SI or dx, si
#define OR_DX_BP or dx, bp
#define OR_DX_SP or dx, sp

#define OR_DI_AX or di, ax
#define OR_DI_BX or di, bx
#define OR_DI_CX or di, cx
#define OR_DI_DX or di, dx
#define OR_DI_DI or di, di
#define OR_DI_SI or di, si
#define OR_DI_BP or di, bp
#define OR_DI_SP or di, sp

#define OR_SI_AX or si, ax
#define OR_SI_BX or si, bx
#define OR_SI_CX or si, cx
#define OR_SI_DX or si, dx
#define OR_SI_DI or si, di
#define OR_SI_SI or si, si
#define OR_SI_BP or si, bp
#define OR_SI_SP or si, sp

#define OR_BP_AX or bp, ax
#define OR_BP_BX or bp, bx
#define OR_BP_CX or bp, cx
#define OR_BP_DX or bp, dx
#define OR_BP_DI or bp, di
#define OR_BP_SI or bp, si
#define OR_BP_BP or bp, bp
#define OR_BP_SP or bp, sp

#define OR_SP_AX or sp, ax
#define OR_SP_BX or sp, bx
#define OR_SP_CX or sp, cx
#define OR_SP_DX or sp, dx
#define OR_SP_DI or sp, di
#define OR_SP_SI or sp, si
#define OR_SP_BP or sp, bp
#define OR_SP_SP or sp, sp

#define OR_AX_(VALUE) or ax, VALUE
#define OR_BX_(VALUE) or bx, VALUE
#define OR_CX_(VALUE) or cx, VALUE
#define OR_DX_(VALUE) or dx, VALUE
#define OR_DI_(VALUE) or di, VALUE
#define OR_SI_(VALUE) or si, VALUE
#define OR_BP_(VALUE) or bp, VALUE
#define OR_SP_(VALUE) or sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define OR_AX_AX or ax, ax
#define OR_AX_BX or ax, bx
#define OR_AX_CX or ax, cx
#define OR_AX_DX or ax, dx
#define OR_AX_DI or ax, di
#define OR_AX_SI or ax, si
#define OR_AX_BP or ax, bp
#define OR_AX_SP or ax, sp

#define OR_BX_AX or bx, ax
#define OR_BX_BX or bx, bx
#define OR_BX_CX or bx, cx
#define OR_BX_DX or bx, dx
#define OR_BX_DI or bx, di
#define OR_BX_SI or bx, si
#define OR_BX_BP or bx, bp
#define OR_BX_SP or bx, sp

#define OR_CX_AX or cx, ax
#define OR_CX_BX or cx, bx
#define OR_CX_CX or cx, cx
#define OR_CX_DX or cx, dx
#define OR_CX_DI or cx, di
#define OR_CX_SI or cx, si
#define OR_CX_BP or cx, bp
#define OR_CX_SP or cx, sp

#define OR_DX_AX or dx, ax
#define OR_DX_BX or dx, bx
#define OR_DX_CX or dx, cx
#define OR_DX_DX or dx, dx
#define OR_DX_DI or dx, di
#define OR_DX_SI or dx, si
#define OR_DX_BP or dx, bp
#define OR_DX_SP or dx, sp

#define OR_DI_AX or di, ax
#define OR_DI_BX or di, bx
#define OR_DI_CX or di, cx
#define OR_DI_DX or di, dx
#define OR_DI_DI or di, di
#define OR_DI_SI or di, si
#define OR_DI_BP or di, bp
#define OR_DI_SP or di, sp

#define OR_SI_AX or si, ax
#define OR_SI_BX or si, bx
#define OR_SI_CX or si, cx
#define OR_SI_DX or si, dx
#define OR_SI_DI or si, di
#define OR_SI_SI or si, si
#define OR_SI_BP or si, bp
#define OR_SI_SP or si, sp

#define OR_BP_AX or bp, ax
#define OR_BP_BX or bp, bx
#define OR_BP_CX or bp, cx
#define OR_BP_DX or bp, dx
#define OR_BP_DI or bp, di
#define OR_BP_SI or bp, si
#define OR_BP_BP or bp, bp
#define OR_BP_SP or bp, sp

#define OR_SP_AX or sp, ax
#define OR_SP_BX or sp, bx
#define OR_SP_CX or sp, cx
#define OR_SP_DX or sp, dx
#define OR_SP_DI or sp, di
#define OR_SP_SI or sp, si
#define OR_SP_BP or sp, bp
#define OR_SP_SP or sp, sp

#define OR_AX_(VALUE) or ax, VALUE
#define OR_BX_(VALUE) or bx, VALUE
#define OR_CX_(VALUE) or cx, VALUE
#define OR_DX_(VALUE) or dx, VALUE
#define OR_DI_(VALUE) or di, VALUE
#define OR_SI_(VALUE) or si, VALUE
#define OR_BP_(VALUE) or bp, VALUE
#define OR_SP_(VALUE) or sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define OR_AX_AX or ax, ax
#define OR_AX_BX or ax, bx
#define OR_AX_CX or ax, cx
#define OR_AX_DX or ax, dx
#define OR_AX_DI or ax, di
#define OR_AX_SI or ax, si
#define OR_AX_BP or ax, bp
#define OR_AX_SP or ax, sp
#define OR_AX_R8W or ax, r8w
#define OR_AX_R9W or ax, r9w
#define OR_AX_R10W or ax, r10w
#define OR_AX_R11W or ax, r11w
#define OR_AX_R12W or ax, r12w
#define OR_AX_R13W or ax, r13w
#define OR_AX_R14W or ax, r14w
#define OR_AX_R15W or ax, r15w

#define OR_BX_AX or bx, ax
#define OR_BX_BX or bx, bx
#define OR_BX_CX or bx, cx
#define OR_BX_DX or bx, dx
#define OR_BX_DI or bx, di
#define OR_BX_SI or bx, si
#define OR_BX_BP or bx, bp
#define OR_BX_SP or bx, sp
#define OR_BX_R8W or bx, r8w
#define OR_BX_R9W or bx, r9w
#define OR_BX_R10W or bx, r10w
#define OR_BX_R11W or bx, r11w
#define OR_BX_R12W or bx, r12w
#define OR_BX_R13W or bx, r13w
#define OR_BX_R14W or bx, r14w
#define OR_BX_R15W or bx, r15w

#define OR_CX_AX or cx, ax
#define OR_CX_BX or cx, bx
#define OR_CX_CX or cx, cx
#define OR_CX_DX or cx, dx
#define OR_CX_DI or cx, di
#define OR_CX_SI or cx, si
#define OR_CX_BP or cx, bp
#define OR_CX_SP or cx, sp
#define OR_CX_R8W or cx, r8w
#define OR_CX_R9W or cx, r9w
#define OR_CX_R10W or cx, r10w
#define OR_CX_R11W or cx, r11w
#define OR_CX_R12W or cx, r12w
#define OR_CX_R13W or cx, r13w
#define OR_CX_R14W or cx, r14w
#define OR_CX_R15W or cx, r15w

#define OR_DX_AX or dx, ax
#define OR_DX_BX or dx, bx
#define OR_DX_CX or dx, cx
#define OR_DX_DX or dx, dx
#define OR_DX_DI or dx, di
#define OR_DX_SI or dx, si
#define OR_DX_BP or dx, bp
#define OR_DX_SP or dx, sp
#define OR_DX_R8W or dx, r8w
#define OR_DX_R9W or dx, r9w
#define OR_DX_R10W or dx, r10w
#define OR_DX_R11W or dx, r11w
#define OR_DX_R12W or dx, r12w
#define OR_DX_R13W or dx, r13w
#define OR_DX_R14W or dx, r14w
#define OR_DX_R15W or dx, r15w

#define OR_DI_AX or di, ax
#define OR_DI_BX or di, bx
#define OR_DI_CX or di, cx
#define OR_DI_DX or di, dx
#define OR_DI_DI or di, di
#define OR_DI_SI or di, si
#define OR_DI_BP or di, bp
#define OR_DI_SP or di, sp
#define OR_DI_R8W or di, r8w
#define OR_DI_R9W or di, r9w
#define OR_DI_R10W or di, r10w
#define OR_DI_R11W or di, r11w
#define OR_DI_R12W or di, r12w
#define OR_DI_R13W or di, r13w
#define OR_DI_R14W or di, r14w
#define OR_DI_R15W or di, r15w

#define OR_SI_AX or si, ax
#define OR_SI_BX or si, bx
#define OR_SI_CX or si, cx
#define OR_SI_DX or si, dx
#define OR_SI_DI or si, di
#define OR_SI_SI or si, si
#define OR_SI_BP or si, bp
#define OR_SI_SP or si, sp
#define OR_SI_R8W or si, r8w
#define OR_SI_R9W or si, r9w
#define OR_SI_R10W or si, r10w
#define OR_SI_R11W or si, r11w
#define OR_SI_R12W or si, r12w
#define OR_SI_R13W or si, r13w
#define OR_SI_R14W or si, r14w
#define OR_SI_R15W or si, r15w

#define OR_BP_AX or bp, ax
#define OR_BP_BX or bp, bx
#define OR_BP_CX or bp, cx
#define OR_BP_DX or bp, dx
#define OR_BP_DI or bp, di
#define OR_BP_SI or bp, si
#define OR_BP_BP or bp, bp
#define OR_BP_SP or bp, sp
#define OR_BP_R8W or bp, r8w
#define OR_BP_R9W or bp, r9w
#define OR_BP_R10W or bp, r10w
#define OR_BP_R11W or bp, r11w
#define OR_BP_R12W or bp, r12w
#define OR_BP_R13W or bp, r13w
#define OR_BP_R14W or bp, r14w
#define OR_BP_R15W or bp, r15w

#define OR_SP_AX or sp, ax
#define OR_SP_BX or sp, bx
#define OR_SP_CX or sp, cx
#define OR_SP_DX or sp, dx
#define OR_SP_DI or sp, di
#define OR_SP_SI or sp, si
#define OR_SP_BP or sp, bp
#define OR_SP_SP or sp, sp
#define OR_SP_R8W or sp, r8w
#define OR_SP_R9W or sp, r9w
#define OR_SP_R10W or sp, r10w
#define OR_SP_R11W or sp, r11w
#define OR_SP_R12W or sp, r12w
#define OR_SP_R13W or sp, r13w
#define OR_SP_R14W or sp, r14w
#define OR_SP_R15W or sp, r15w

#define OR_R8W_AX or r8w, ax
#define OR_R8W_BX or r8w, bx
#define OR_R8W_CX or r8w, cx
#define OR_R8W_DX or r8w, dx
#define OR_R8W_DI or r8w, di
#define OR_R8W_SI or r8w, si
#define OR_R8W_BP or r8w, bp
#define OR_R8W_SP or r8w, sp
#define OR_R8W_R8W or r8w, r8w
#define OR_R8W_R9W or r8w, r9w
#define OR_R8W_R10W or r8w, r10w
#define OR_R8W_R11W or r8w, r11w
#define OR_R8W_R12W or r8w, r12w
#define OR_R8W_R13W or r8w, r13w
#define OR_R8W_R14W or r8w, r14w
#define OR_R8W_R15W or r8w, r15w

#define OR_R9W_AX or r9w, ax
#define OR_R9W_BX or r9w, bx
#define OR_R9W_CX or r9w, cx
#define OR_R9W_DX or r9w, dx
#define OR_R9W_DI or r9w, di
#define OR_R9W_SI or r9w, si
#define OR_R9W_BP or r9w, bp
#define OR_R9W_SP or r9w, sp
#define OR_R9W_R8W or r9w, r8w
#define OR_R9W_R9W or r9w, r9w
#define OR_R9W_R10W or r9w, r10w
#define OR_R9W_R11W or r9w, r11w
#define OR_R9W_R12W or r9w, r12w
#define OR_R9W_R13W or r9w, r13w
#define OR_R9W_R14W or r9w, r14w
#define OR_R9W_R15W or r9w, r15w

#define OR_R10W_AX or r10w, ax
#define OR_R10W_BX or r10w, bx
#define OR_R10W_CX or r10w, cx
#define OR_R10W_DX or r10w, dx
#define OR_R10W_DI or r10w, di
#define OR_R10W_SI or r10w, si
#define OR_R10W_BP or r10w, bp
#define OR_R10W_SP or r10w, sp
#define OR_R10W_R8W or r10w, r8w
#define OR_R10W_R9W or r10w, r9w
#define OR_R10W_R10W or r10w, r10w
#define OR_R10W_R11W or r10w, r11w
#define OR_R10W_R12W or r10w, r12w
#define OR_R10W_R13W or r10w, r13w
#define OR_R10W_R14W or r10w, r14w
#define OR_R10W_R15W or r10w, r15w

#define OR_R11W_AX or r11w, ax
#define OR_R11W_BX or r11w, bx
#define OR_R11W_CX or r11w, cx
#define OR_R11W_DX or r11w, dx
#define OR_R11W_DI or r11w, di
#define OR_R11W_SI or r11w, si
#define OR_R11W_BP or r11w, bp
#define OR_R11W_SP or r11w, sp
#define OR_R11W_R8W or r11w, r8w
#define OR_R11W_R9W or r11w, r9w
#define OR_R11W_R10W or r11w, r10w
#define OR_R11W_R11W or r11w, r11w
#define OR_R11W_R12W or r11w, r12w
#define OR_R11W_R13W or r11w, r13w
#define OR_R11W_R14W or r11w, r14w
#define OR_R11W_R15W or r11w, r15w

#define OR_R12W_AX or r12w, ax
#define OR_R12W_BX or r12w, bx
#define OR_R12W_CX or r12w, cx
#define OR_R12W_DX or r12w, dx
#define OR_R12W_DI or r12w, di
#define OR_R12W_SI or r12w, si
#define OR_R12W_BP or r12w, bp
#define OR_R12W_SP or r12w, sp
#define OR_R12W_R8W or r12w, r8w
#define OR_R12W_R9W or r12w, r9w
#define OR_R12W_R10W or r12w, r10w
#define OR_R12W_R11W or r12w, r11w
#define OR_R12W_R12W or r12w, r12w
#define OR_R12W_R13W or r12w, r13w
#define OR_R12W_R14W or r12w, r14w
#define OR_R12W_R15W or r12w, r15w

#define OR_R13W_AX or r13w, ax
#define OR_R13W_BX or r13w, bx
#define OR_R13W_CX or r13w, cx
#define OR_R13W_DX or r13w, dx
#define OR_R13W_DI or r13w, di
#define OR_R13W_SI or r13w, si
#define OR_R13W_BP or r13w, bp
#define OR_R13W_SP or r13w, sp
#define OR_R13W_R8W or r13w, r8w
#define OR_R13W_R9W or r13w, r9w
#define OR_R13W_R10W or r13w, r10w
#define OR_R13W_R11W or r13w, r11w
#define OR_R13W_R12W or r13w, r12w
#define OR_R13W_R13W or r13w, r13w
#define OR_R13W_R14W or r13w, r14w
#define OR_R13W_R15W or r13w, r15w

#define OR_R14W_AX or r14w, ax
#define OR_R14W_BX or r14w, bx
#define OR_R14W_CX or r14w, cx
#define OR_R14W_DX or r14w, dx
#define OR_R14W_DI or r14w, di
#define OR_R14W_SI or r14w, si
#define OR_R14W_BP or r14w, bp
#define OR_R14W_SP or r14w, sp
#define OR_R14W_R8W or r14w, r8w
#define OR_R14W_R9W or r14w, r9w
#define OR_R14W_R10W or r14w, r10w
#define OR_R14W_R11W or r14w, r11w
#define OR_R14W_R12W or r14w, r12w
#define OR_R14W_R13W or r14w, r13w
#define OR_R14W_R14W or r14w, r14w
#define OR_R14W_R15W or r14w, r15w

#define OR_R15W_AX or r15w, ax
#define OR_R15W_BX or r15w, bx
#define OR_R15W_CX or r15w, cx
#define OR_R15W_DX or r15w, dx
#define OR_R15W_DI or r15w, di
#define OR_R15W_SI or r15w, si
#define OR_R15W_BP or r15w, bp
#define OR_R15W_SP or r15w, sp
#define OR_R15W_R8W or r15w, r8w
#define OR_R15W_R9W or r15w, r9w
#define OR_R15W_R10W or r15w, r10w
#define OR_R15W_R11W or r15w, r11w
#define OR_R15W_R12W or r15w, r12w
#define OR_R15W_R13W or r15w, r13w
#define OR_R15W_R14W or r15w, r14w
#define OR_R15W_R15W or r15w, r15w

#define OR_AX_(VALUE) or ax, VALUE
#define OR_BX_(VALUE) or bx, VALUE
#define OR_CX_(VALUE) or cx, VALUE
#define OR_DX_(VALUE) or dx, VALUE
#define OR_DI_(VALUE) or di, VALUE
#define OR_SI_(VALUE) or si, VALUE
#define OR_BP_(VALUE) or bp, VALUE
#define OR_SP_(VALUE) or sp, VALUE
#define OR_R8W_(VALUE) or r8w, VALUE
#define OR_R9W_(VALUE) or r9w, VALUE
#define OR_R10W_(VALUE) or r10w, VALUE
#define OR_R11W_(VALUE) or r11w, VALUE
#define OR_R12W_(VALUE) or r12w, VALUE
#define OR_R13W_(VALUE) or r13w, VALUE
#define OR_R14W_(VALUE) or r14w, VALUE
#define OR_R15W_(VALUE) or r15w, VALUE
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
