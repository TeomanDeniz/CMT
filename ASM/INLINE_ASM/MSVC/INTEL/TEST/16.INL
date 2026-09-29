#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define TEST_AL_AL test al, al
#define TEST_AL_BL test al, bl
#define TEST_AL_CL test al, cl
#define TEST_AL_DL test al, dl

#define TEST_BL_AL test bl, al
#define TEST_BL_BL test bl, bl
#define TEST_BL_CL test bl, cl
#define TEST_BL_DL test bl, dl

#define TEST_CL_AL test cl, al
#define TEST_CL_BL test cl, bl
#define TEST_CL_CL test cl, cl
#define TEST_CL_DL test cl, dl

#define TEST_DL_AL test dl, al
#define TEST_DL_BL test dl, bl
#define TEST_DL_CL test dl, cl
#define TEST_DL_DL test dl, dl

#define TEST_AL_(VALUE) test al, VALUE
#define TEST_BL_(VALUE) test bl, VALUE
#define TEST_CL_(VALUE) test cl, VALUE
#define TEST_DL_(VALUE) test dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AL_AL test al, al
#define TEST_AL_BL test al, bl
#define TEST_AL_CL test al, cl
#define TEST_AL_DL test al, dl

#define TEST_BL_AL test bl, al
#define TEST_BL_BL test bl, bl
#define TEST_BL_CL test bl, cl
#define TEST_BL_DL test bl, dl

#define TEST_CL_AL test cl, al
#define TEST_CL_BL test cl, bl
#define TEST_CL_CL test cl, cl
#define TEST_CL_DL test cl, dl

#define TEST_DL_AL test dl, al
#define TEST_DL_BL test dl, bl
#define TEST_DL_CL test dl, cl
#define TEST_DL_DL test dl, dl

#define TEST_AL_(VALUE) test al, VALUE
#define TEST_BL_(VALUE) test bl, VALUE
#define TEST_CL_(VALUE) test cl, VALUE
#define TEST_DL_(VALUE) test dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AL_AL test al, al
#define TEST_AL_BL test al, bl
#define TEST_AL_CL test al, cl
#define TEST_AL_DL test al, dl
#define TEST_AL_DIL test al, dil
#define TEST_AL_SIL test al, sil
#define TEST_AL_BPL test al, bpl
#define TEST_AL_SPL test al, spl
#define TEST_AL_R8B test al, r8b
#define TEST_AL_R9B test al, r9b
#define TEST_AL_R10B test al, r10b
#define TEST_AL_R11B test al, r11b
#define TEST_AL_R12B test al, r12b
#define TEST_AL_R13B test al, r13b
#define TEST_AL_R14B test al, r14b
#define TEST_AL_R15B test al, r15b

#define TEST_BL_AL test bl, al
#define TEST_BL_BL test bl, bl
#define TEST_BL_CL test bl, cl
#define TEST_BL_DL test bl, dl
#define TEST_BL_DIL test bl, dil
#define TEST_BL_SIL test bl, sil
#define TEST_BL_BPL test bl, bpl
#define TEST_BL_SPL test bl, spl
#define TEST_BL_R8B test bl, r8b
#define TEST_BL_R9B test bl, r9b
#define TEST_BL_R10B test bl, r10b
#define TEST_BL_R11B test bl, r11b
#define TEST_BL_R12B test bl, r12b
#define TEST_BL_R13B test bl, r13b
#define TEST_BL_R14B test bl, r14b
#define TEST_BL_R15B test bl, r15b

#define TEST_CL_AL test cl, al
#define TEST_CL_BL test cl, bl
#define TEST_CL_CL test cl, cl
#define TEST_CL_DL test cl, dl
#define TEST_CL_DIL test cl, dil
#define TEST_CL_SIL test cl, sil
#define TEST_CL_BPL test cl, bpl
#define TEST_CL_SPL test cl, spl
#define TEST_CL_R8B test cl, r8b
#define TEST_CL_R9B test cl, r9b
#define TEST_CL_R10B test cl, r10b
#define TEST_CL_R11B test cl, r11b
#define TEST_CL_R12B test cl, r12b
#define TEST_CL_R13B test cl, r13b
#define TEST_CL_R14B test cl, r14b
#define TEST_CL_R15B test cl, r15b

#define TEST_DL_AL test dl, al
#define TEST_DL_BL test dl, bl
#define TEST_DL_CL test dl, cl
#define TEST_DL_DL test dl, dl
#define TEST_DL_DIL test dl, dil
#define TEST_DL_SIL test dl, sil
#define TEST_DL_BPL test dl, bpl
#define TEST_DL_SPL test dl, spl
#define TEST_DL_R8B test dl, r8b
#define TEST_DL_R9B test dl, r9b
#define TEST_DL_R10B test dl, r10b
#define TEST_DL_R11B test dl, r11b
#define TEST_DL_R12B test dl, r12b
#define TEST_DL_R13B test dl, r13b
#define TEST_DL_R14B test dl, r14b
#define TEST_DL_R15B test dl, r15b

#define TEST_DIL_AL test dil, al
#define TEST_DIL_BL test dil, bl
#define TEST_DIL_CL test dil, cl
#define TEST_DIL_DL test dil, dl
#define TEST_DIL_DIL test dil, dil
#define TEST_DIL_SIL test dil, sil
#define TEST_DIL_BPL test dil, bpl
#define TEST_DIL_SPL test dil, spl
#define TEST_DIL_R8B test dil, r8b
#define TEST_DIL_R9B test dil, r9b
#define TEST_DIL_R10B test dil, r10b
#define TEST_DIL_R11B test dil, r11b
#define TEST_DIL_R12B test dil, r12b
#define TEST_DIL_R13B test dil, r13b
#define TEST_DIL_R14B test dil, r14b
#define TEST_DIL_R15B test dil, r15b

#define TEST_SIL_AL test sil, al
#define TEST_SIL_BL test sil, bl
#define TEST_SIL_CL test sil, cl
#define TEST_SIL_DL test sil, dl
#define TEST_SIL_DIL test sil, dil
#define TEST_SIL_SIL test sil, sil
#define TEST_SIL_BPL test sil, bpl
#define TEST_SIL_SPL test sil, spl
#define TEST_SIL_R8B test sil, r8b
#define TEST_SIL_R9B test sil, r9b
#define TEST_SIL_R10B test sil, r10b
#define TEST_SIL_R11B test sil, r11b
#define TEST_SIL_R12B test sil, r12b
#define TEST_SIL_R13B test sil, r13b
#define TEST_SIL_R14B test sil, r14b
#define TEST_SIL_R15B test sil, r15b

#define TEST_BPL_AL test bpl, al
#define TEST_BPL_BL test bpl, bl
#define TEST_BPL_CL test bpl, cl
#define TEST_BPL_DL test bpl, dl
#define TEST_BPL_DIL test bpl, dil
#define TEST_BPL_SIL test bpl, sil
#define TEST_BPL_BPL test bpl, bpl
#define TEST_BPL_SPL test bpl, spl
#define TEST_BPL_R8B test bpl, r8b
#define TEST_BPL_R9B test bpl, r9b
#define TEST_BPL_R10B test bpl, r10b
#define TEST_BPL_R11B test bpl, r11b
#define TEST_BPL_R12B test bpl, r12b
#define TEST_BPL_R13B test bpl, r13b
#define TEST_BPL_R14B test bpl, r14b
#define TEST_BPL_R15B test bpl, r15b

#define TEST_SPL_AL test spl, al
#define TEST_SPL_BL test spl, bl
#define TEST_SPL_CL test spl, cl
#define TEST_SPL_DL test spl, dl
#define TEST_SPL_DIL test spl, dil
#define TEST_SPL_SIL test spl, sil
#define TEST_SPL_BPL test spl, bpl
#define TEST_SPL_SPL test spl, spl
#define TEST_SPL_R8B test spl, r8b
#define TEST_SPL_R9B test spl, r9b
#define TEST_SPL_R10B test spl, r10b
#define TEST_SPL_R11B test spl, r11b
#define TEST_SPL_R12B test spl, r12b
#define TEST_SPL_R13B test spl, r13b
#define TEST_SPL_R14B test spl, r14b
#define TEST_SPL_R15B test spl, r15b

#define TEST_R8B_AL test r8b, al
#define TEST_R8B_BL test r8b, bl
#define TEST_R8B_CL test r8b, cl
#define TEST_R8B_DL test r8b, dl
#define TEST_R8B_DIL test r8b, dil
#define TEST_R8B_SIL test r8b, sil
#define TEST_R8B_BPL test r8b, bpl
#define TEST_R8B_SPL test r8b, spl
#define TEST_R8B_R8B test r8b, r8b
#define TEST_R8B_R9B test r8b, r9b
#define TEST_R8B_R10B test r8b, r10b
#define TEST_R8B_R11B test r8b, r11b
#define TEST_R8B_R12B test r8b, r12b
#define TEST_R8B_R13B test r8b, r13b
#define TEST_R8B_R14B test r8b, r14b
#define TEST_R8B_R15B test r8b, r15b

#define TEST_R9B_AL test r9b, al
#define TEST_R9B_BL test r9b, bl
#define TEST_R9B_CL test r9b, cl
#define TEST_R9B_DL test r9b, dl
#define TEST_R9B_DIL test r9b, dil
#define TEST_R9B_SIL test r9b, sil
#define TEST_R9B_BPL test r9b, bpl
#define TEST_R9B_SPL test r9b, spl
#define TEST_R9B_R8B test r9b, r8b
#define TEST_R9B_R9B test r9b, r9b
#define TEST_R9B_R10B test r9b, r10b
#define TEST_R9B_R11B test r9b, r11b
#define TEST_R9B_R12B test r9b, r12b
#define TEST_R9B_R13B test r9b, r13b
#define TEST_R9B_R14B test r9b, r14b
#define TEST_R9B_R15B test r9b, r15b

#define TEST_R10B_AL test r10b, al
#define TEST_R10B_BL test r10b, bl
#define TEST_R10B_CL test r10b, cl
#define TEST_R10B_DL test r10b, dl
#define TEST_R10B_DIL test r10b, dil
#define TEST_R10B_SIL test r10b, sil
#define TEST_R10B_BPL test r10b, bpl
#define TEST_R10B_SPL test r10b, spl
#define TEST_R10B_R8B test r10b, r8b
#define TEST_R10B_R9B test r10b, r9b
#define TEST_R10B_R10B test r10b, r10b
#define TEST_R10B_R11B test r10b, r11b
#define TEST_R10B_R12B test r10b, r12b
#define TEST_R10B_R13B test r10b, r13b
#define TEST_R10B_R14B test r10b, r14b
#define TEST_R10B_R15B test r10b, r15b

#define TEST_R11B_AL test r11b, al
#define TEST_R11B_BL test r11b, bl
#define TEST_R11B_CL test r11b, cl
#define TEST_R11B_DL test r11b, dl
#define TEST_R11B_DIL test r11b, dil
#define TEST_R11B_SIL test r11b, sil
#define TEST_R11B_BPL test r11b, bpl
#define TEST_R11B_SPL test r11b, spl
#define TEST_R11B_R8B test r11b, r8b
#define TEST_R11B_R9B test r11b, r9b
#define TEST_R11B_R10B test r11b, r10b
#define TEST_R11B_R11B test r11b, r11b
#define TEST_R11B_R12B test r11b, r12b
#define TEST_R11B_R13B test r11b, r13b
#define TEST_R11B_R14B test r11b, r14b
#define TEST_R11B_R15B test r11b, r15b

#define TEST_R12B_AL test r12b, al
#define TEST_R12B_BL test r12b, bl
#define TEST_R12B_CL test r12b, cl
#define TEST_R12B_DL test r12b, dl
#define TEST_R12B_DIL test r12b, dil
#define TEST_R12B_SIL test r12b, sil
#define TEST_R12B_BPL test r12b, bpl
#define TEST_R12B_SPL test r12b, spl
#define TEST_R12B_R8B test r12b, r8b
#define TEST_R12B_R9B test r12b, r9b
#define TEST_R12B_R10B test r12b, r10b
#define TEST_R12B_R11B test r12b, r11b
#define TEST_R12B_R12B test r12b, r12b
#define TEST_R12B_R13B test r12b, r13b
#define TEST_R12B_R14B test r12b, r14b
#define TEST_R12B_R15B test r12b, r15b

#define TEST_R13B_AL test r13b, al
#define TEST_R13B_BL test r13b, bl
#define TEST_R13B_CL test r13b, cl
#define TEST_R13B_DL test r13b, dl
#define TEST_R13B_DIL test r13b, dil
#define TEST_R13B_SIL test r13b, sil
#define TEST_R13B_BPL test r13b, bpl
#define TEST_R13B_SPL test r13b, spl
#define TEST_R13B_R8B test r13b, r8b
#define TEST_R13B_R9B test r13b, r9b
#define TEST_R13B_R10B test r13b, r10b
#define TEST_R13B_R11B test r13b, r11b
#define TEST_R13B_R12B test r13b, r12b
#define TEST_R13B_R13B test r13b, r13b
#define TEST_R13B_R14B test r13b, r14b
#define TEST_R13B_R15B test r13b, r15b

#define TEST_R14B_AL test r14b, al
#define TEST_R14B_BL test r14b, bl
#define TEST_R14B_CL test r14b, cl
#define TEST_R14B_DL test r14b, dl
#define TEST_R14B_DIL test r14b, dil
#define TEST_R14B_SIL test r14b, sil
#define TEST_R14B_BPL test r14b, bpl
#define TEST_R14B_SPL test r14b, spl
#define TEST_R14B_R8B test r14b, r8b
#define TEST_R14B_R9B test r14b, r9b
#define TEST_R14B_R10B test r14b, r10b
#define TEST_R14B_R11B test r14b, r11b
#define TEST_R14B_R12B test r14b, r12b
#define TEST_R14B_R13B test r14b, r13b
#define TEST_R14B_R14B test r14b, r14b
#define TEST_R14B_R15B test r14b, r15b

#define TEST_R15B_AL test r15b, al
#define TEST_R15B_BL test r15b, bl
#define TEST_R15B_CL test r15b, cl
#define TEST_R15B_DL test r15b, dl
#define TEST_R15B_DIL test r15b, dil
#define TEST_R15B_SIL test r15b, sil
#define TEST_R15B_BPL test r15b, bpl
#define TEST_R15B_SPL test r15b, spl
#define TEST_R15B_R8B test r15b, r8b
#define TEST_R15B_R9B test r15b, r9b
#define TEST_R15B_R10B test r15b, r10b
#define TEST_R15B_R11B test r15b, r11b
#define TEST_R15B_R12B test r15b, r12b
#define TEST_R15B_R13B test r15b, r13b
#define TEST_R15B_R14B test r15b, r14b
#define TEST_R15B_R15B test r15b, r15b

#define TEST_AL_(VALUE) test al, VALUE
#define TEST_BL_(VALUE) test bl, VALUE
#define TEST_CL_(VALUE) test cl, VALUE
#define TEST_DL_(VALUE) test dl, VALUE
#define TEST_DIL_(VALUE) test dil, VALUE
#define TEST_SIL_(VALUE) test sil, VALUE
#define TEST_BPL_(VALUE) test bpl, VALUE
#define TEST_SPL_(VALUE) test spl, VALUE
#define TEST_R8B_(VALUE) test r8b, VALUE
#define TEST_R9B_(VALUE) test r9b, VALUE
#define TEST_R10B_(VALUE) test r10b, VALUE
#define TEST_R11B_(VALUE) test r11b, VALUE
#define TEST_R12B_(VALUE) test r12b, VALUE
#define TEST_R13B_(VALUE) test r13b, VALUE
#define TEST_R14B_(VALUE) test r14b, VALUE
#define TEST_R15B_(VALUE) test r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define TEST_AX_AX test ax, ax
#define TEST_AX_BX test ax, bx
#define TEST_AX_CX test ax, cx
#define TEST_AX_DX test ax, dx
#define TEST_AX_DI test ax, di
#define TEST_AX_SI test ax, si
#define TEST_AX_BP test ax, bp
#define TEST_AX_SP test ax, sp

#define TEST_BX_AX test bx, ax
#define TEST_BX_BX test bx, bx
#define TEST_BX_CX test bx, cx
#define TEST_BX_DX test bx, dx
#define TEST_BX_DI test bx, di
#define TEST_BX_SI test bx, si
#define TEST_BX_BP test bx, bp
#define TEST_BX_SP test bx, sp

#define TEST_CX_AX test cx, ax
#define TEST_CX_BX test cx, bx
#define TEST_CX_CX test cx, cx
#define TEST_CX_DX test cx, dx
#define TEST_CX_DI test cx, di
#define TEST_CX_SI test cx, si
#define TEST_CX_BP test cx, bp
#define TEST_CX_SP test cx, sp

#define TEST_DX_AX test dx, ax
#define TEST_DX_BX test dx, bx
#define TEST_DX_CX test dx, cx
#define TEST_DX_DX test dx, dx
#define TEST_DX_DI test dx, di
#define TEST_DX_SI test dx, si
#define TEST_DX_BP test dx, bp
#define TEST_DX_SP test dx, sp

#define TEST_DI_AX test di, ax
#define TEST_DI_BX test di, bx
#define TEST_DI_CX test di, cx
#define TEST_DI_DX test di, dx
#define TEST_DI_DI test di, di
#define TEST_DI_SI test di, si
#define TEST_DI_BP test di, bp
#define TEST_DI_SP test di, sp

#define TEST_SI_AX test si, ax
#define TEST_SI_BX test si, bx
#define TEST_SI_CX test si, cx
#define TEST_SI_DX test si, dx
#define TEST_SI_DI test si, di
#define TEST_SI_SI test si, si
#define TEST_SI_BP test si, bp
#define TEST_SI_SP test si, sp

#define TEST_BP_AX test bp, ax
#define TEST_BP_BX test bp, bx
#define TEST_BP_CX test bp, cx
#define TEST_BP_DX test bp, dx
#define TEST_BP_DI test bp, di
#define TEST_BP_SI test bp, si
#define TEST_BP_BP test bp, bp
#define TEST_BP_SP test bp, sp

#define TEST_SP_AX test sp, ax
#define TEST_SP_BX test sp, bx
#define TEST_SP_CX test sp, cx
#define TEST_SP_DX test sp, dx
#define TEST_SP_DI test sp, di
#define TEST_SP_SI test sp, si
#define TEST_SP_BP test sp, bp
#define TEST_SP_SP test sp, sp

#define TEST_AX_(VALUE) test ax, VALUE
#define TEST_BX_(VALUE) test bx, VALUE
#define TEST_CX_(VALUE) test cx, VALUE
#define TEST_DX_(VALUE) test dx, VALUE
#define TEST_DI_(VALUE) test di, VALUE
#define TEST_SI_(VALUE) test si, VALUE
#define TEST_BP_(VALUE) test bp, VALUE
#define TEST_SP_(VALUE) test sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define TEST_AX_AX test ax, ax
#define TEST_AX_BX test ax, bx
#define TEST_AX_CX test ax, cx
#define TEST_AX_DX test ax, dx
#define TEST_AX_DI test ax, di
#define TEST_AX_SI test ax, si
#define TEST_AX_BP test ax, bp
#define TEST_AX_SP test ax, sp

#define TEST_BX_AX test bx, ax
#define TEST_BX_BX test bx, bx
#define TEST_BX_CX test bx, cx
#define TEST_BX_DX test bx, dx
#define TEST_BX_DI test bx, di
#define TEST_BX_SI test bx, si
#define TEST_BX_BP test bx, bp
#define TEST_BX_SP test bx, sp

#define TEST_CX_AX test cx, ax
#define TEST_CX_BX test cx, bx
#define TEST_CX_CX test cx, cx
#define TEST_CX_DX test cx, dx
#define TEST_CX_DI test cx, di
#define TEST_CX_SI test cx, si
#define TEST_CX_BP test cx, bp
#define TEST_CX_SP test cx, sp

#define TEST_DX_AX test dx, ax
#define TEST_DX_BX test dx, bx
#define TEST_DX_CX test dx, cx
#define TEST_DX_DX test dx, dx
#define TEST_DX_DI test dx, di
#define TEST_DX_SI test dx, si
#define TEST_DX_BP test dx, bp
#define TEST_DX_SP test dx, sp

#define TEST_DI_AX test di, ax
#define TEST_DI_BX test di, bx
#define TEST_DI_CX test di, cx
#define TEST_DI_DX test di, dx
#define TEST_DI_DI test di, di
#define TEST_DI_SI test di, si
#define TEST_DI_BP test di, bp
#define TEST_DI_SP test di, sp

#define TEST_SI_AX test si, ax
#define TEST_SI_BX test si, bx
#define TEST_SI_CX test si, cx
#define TEST_SI_DX test si, dx
#define TEST_SI_DI test si, di
#define TEST_SI_SI test si, si
#define TEST_SI_BP test si, bp
#define TEST_SI_SP test si, sp

#define TEST_BP_AX test bp, ax
#define TEST_BP_BX test bp, bx
#define TEST_BP_CX test bp, cx
#define TEST_BP_DX test bp, dx
#define TEST_BP_DI test bp, di
#define TEST_BP_SI test bp, si
#define TEST_BP_BP test bp, bp
#define TEST_BP_SP test bp, sp

#define TEST_SP_AX test sp, ax
#define TEST_SP_BX test sp, bx
#define TEST_SP_CX test sp, cx
#define TEST_SP_DX test sp, dx
#define TEST_SP_DI test sp, di
#define TEST_SP_SI test sp, si
#define TEST_SP_BP test sp, bp
#define TEST_SP_SP test sp, sp

#define TEST_AX_(VALUE) test ax, VALUE
#define TEST_BX_(VALUE) test bx, VALUE
#define TEST_CX_(VALUE) test cx, VALUE
#define TEST_DX_(VALUE) test dx, VALUE
#define TEST_DI_(VALUE) test di, VALUE
#define TEST_SI_(VALUE) test si, VALUE
#define TEST_BP_(VALUE) test bp, VALUE
#define TEST_SP_(VALUE) test sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define TEST_AX_AX test ax, ax
#define TEST_AX_BX test ax, bx
#define TEST_AX_CX test ax, cx
#define TEST_AX_DX test ax, dx
#define TEST_AX_DI test ax, di
#define TEST_AX_SI test ax, si
#define TEST_AX_BP test ax, bp
#define TEST_AX_SP test ax, sp
#define TEST_AX_R8W test ax, r8w
#define TEST_AX_R9W test ax, r9w
#define TEST_AX_R10W test ax, r10w
#define TEST_AX_R11W test ax, r11w
#define TEST_AX_R12W test ax, r12w
#define TEST_AX_R13W test ax, r13w
#define TEST_AX_R14W test ax, r14w
#define TEST_AX_R15W test ax, r15w

#define TEST_BX_AX test bx, ax
#define TEST_BX_BX test bx, bx
#define TEST_BX_CX test bx, cx
#define TEST_BX_DX test bx, dx
#define TEST_BX_DI test bx, di
#define TEST_BX_SI test bx, si
#define TEST_BX_BP test bx, bp
#define TEST_BX_SP test bx, sp
#define TEST_BX_R8W test bx, r8w
#define TEST_BX_R9W test bx, r9w
#define TEST_BX_R10W test bx, r10w
#define TEST_BX_R11W test bx, r11w
#define TEST_BX_R12W test bx, r12w
#define TEST_BX_R13W test bx, r13w
#define TEST_BX_R14W test bx, r14w
#define TEST_BX_R15W test bx, r15w

#define TEST_CX_AX test cx, ax
#define TEST_CX_BX test cx, bx
#define TEST_CX_CX test cx, cx
#define TEST_CX_DX test cx, dx
#define TEST_CX_DI test cx, di
#define TEST_CX_SI test cx, si
#define TEST_CX_BP test cx, bp
#define TEST_CX_SP test cx, sp
#define TEST_CX_R8W test cx, r8w
#define TEST_CX_R9W test cx, r9w
#define TEST_CX_R10W test cx, r10w
#define TEST_CX_R11W test cx, r11w
#define TEST_CX_R12W test cx, r12w
#define TEST_CX_R13W test cx, r13w
#define TEST_CX_R14W test cx, r14w
#define TEST_CX_R15W test cx, r15w

#define TEST_DX_AX test dx, ax
#define TEST_DX_BX test dx, bx
#define TEST_DX_CX test dx, cx
#define TEST_DX_DX test dx, dx
#define TEST_DX_DI test dx, di
#define TEST_DX_SI test dx, si
#define TEST_DX_BP test dx, bp
#define TEST_DX_SP test dx, sp
#define TEST_DX_R8W test dx, r8w
#define TEST_DX_R9W test dx, r9w
#define TEST_DX_R10W test dx, r10w
#define TEST_DX_R11W test dx, r11w
#define TEST_DX_R12W test dx, r12w
#define TEST_DX_R13W test dx, r13w
#define TEST_DX_R14W test dx, r14w
#define TEST_DX_R15W test dx, r15w

#define TEST_DI_AX test di, ax
#define TEST_DI_BX test di, bx
#define TEST_DI_CX test di, cx
#define TEST_DI_DX test di, dx
#define TEST_DI_DI test di, di
#define TEST_DI_SI test di, si
#define TEST_DI_BP test di, bp
#define TEST_DI_SP test di, sp
#define TEST_DI_R8W test di, r8w
#define TEST_DI_R9W test di, r9w
#define TEST_DI_R10W test di, r10w
#define TEST_DI_R11W test di, r11w
#define TEST_DI_R12W test di, r12w
#define TEST_DI_R13W test di, r13w
#define TEST_DI_R14W test di, r14w
#define TEST_DI_R15W test di, r15w

#define TEST_SI_AX test si, ax
#define TEST_SI_BX test si, bx
#define TEST_SI_CX test si, cx
#define TEST_SI_DX test si, dx
#define TEST_SI_DI test si, di
#define TEST_SI_SI test si, si
#define TEST_SI_BP test si, bp
#define TEST_SI_SP test si, sp
#define TEST_SI_R8W test si, r8w
#define TEST_SI_R9W test si, r9w
#define TEST_SI_R10W test si, r10w
#define TEST_SI_R11W test si, r11w
#define TEST_SI_R12W test si, r12w
#define TEST_SI_R13W test si, r13w
#define TEST_SI_R14W test si, r14w
#define TEST_SI_R15W test si, r15w

#define TEST_BP_AX test bp, ax
#define TEST_BP_BX test bp, bx
#define TEST_BP_CX test bp, cx
#define TEST_BP_DX test bp, dx
#define TEST_BP_DI test bp, di
#define TEST_BP_SI test bp, si
#define TEST_BP_BP test bp, bp
#define TEST_BP_SP test bp, sp
#define TEST_BP_R8W test bp, r8w
#define TEST_BP_R9W test bp, r9w
#define TEST_BP_R10W test bp, r10w
#define TEST_BP_R11W test bp, r11w
#define TEST_BP_R12W test bp, r12w
#define TEST_BP_R13W test bp, r13w
#define TEST_BP_R14W test bp, r14w
#define TEST_BP_R15W test bp, r15w

#define TEST_SP_AX test sp, ax
#define TEST_SP_BX test sp, bx
#define TEST_SP_CX test sp, cx
#define TEST_SP_DX test sp, dx
#define TEST_SP_DI test sp, di
#define TEST_SP_SI test sp, si
#define TEST_SP_BP test sp, bp
#define TEST_SP_SP test sp, sp
#define TEST_SP_R8W test sp, r8w
#define TEST_SP_R9W test sp, r9w
#define TEST_SP_R10W test sp, r10w
#define TEST_SP_R11W test sp, r11w
#define TEST_SP_R12W test sp, r12w
#define TEST_SP_R13W test sp, r13w
#define TEST_SP_R14W test sp, r14w
#define TEST_SP_R15W test sp, r15w

#define TEST_R8W_AX test r8w, ax
#define TEST_R8W_BX test r8w, bx
#define TEST_R8W_CX test r8w, cx
#define TEST_R8W_DX test r8w, dx
#define TEST_R8W_DI test r8w, di
#define TEST_R8W_SI test r8w, si
#define TEST_R8W_BP test r8w, bp
#define TEST_R8W_SP test r8w, sp
#define TEST_R8W_R8W test r8w, r8w
#define TEST_R8W_R9W test r8w, r9w
#define TEST_R8W_R10W test r8w, r10w
#define TEST_R8W_R11W test r8w, r11w
#define TEST_R8W_R12W test r8w, r12w
#define TEST_R8W_R13W test r8w, r13w
#define TEST_R8W_R14W test r8w, r14w
#define TEST_R8W_R15W test r8w, r15w

#define TEST_R9W_AX test r9w, ax
#define TEST_R9W_BX test r9w, bx
#define TEST_R9W_CX test r9w, cx
#define TEST_R9W_DX test r9w, dx
#define TEST_R9W_DI test r9w, di
#define TEST_R9W_SI test r9w, si
#define TEST_R9W_BP test r9w, bp
#define TEST_R9W_SP test r9w, sp
#define TEST_R9W_R8W test r9w, r8w
#define TEST_R9W_R9W test r9w, r9w
#define TEST_R9W_R10W test r9w, r10w
#define TEST_R9W_R11W test r9w, r11w
#define TEST_R9W_R12W test r9w, r12w
#define TEST_R9W_R13W test r9w, r13w
#define TEST_R9W_R14W test r9w, r14w
#define TEST_R9W_R15W test r9w, r15w

#define TEST_R10W_AX test r10w, ax
#define TEST_R10W_BX test r10w, bx
#define TEST_R10W_CX test r10w, cx
#define TEST_R10W_DX test r10w, dx
#define TEST_R10W_DI test r10w, di
#define TEST_R10W_SI test r10w, si
#define TEST_R10W_BP test r10w, bp
#define TEST_R10W_SP test r10w, sp
#define TEST_R10W_R8W test r10w, r8w
#define TEST_R10W_R9W test r10w, r9w
#define TEST_R10W_R10W test r10w, r10w
#define TEST_R10W_R11W test r10w, r11w
#define TEST_R10W_R12W test r10w, r12w
#define TEST_R10W_R13W test r10w, r13w
#define TEST_R10W_R14W test r10w, r14w
#define TEST_R10W_R15W test r10w, r15w

#define TEST_R11W_AX test r11w, ax
#define TEST_R11W_BX test r11w, bx
#define TEST_R11W_CX test r11w, cx
#define TEST_R11W_DX test r11w, dx
#define TEST_R11W_DI test r11w, di
#define TEST_R11W_SI test r11w, si
#define TEST_R11W_BP test r11w, bp
#define TEST_R11W_SP test r11w, sp
#define TEST_R11W_R8W test r11w, r8w
#define TEST_R11W_R9W test r11w, r9w
#define TEST_R11W_R10W test r11w, r10w
#define TEST_R11W_R11W test r11w, r11w
#define TEST_R11W_R12W test r11w, r12w
#define TEST_R11W_R13W test r11w, r13w
#define TEST_R11W_R14W test r11w, r14w
#define TEST_R11W_R15W test r11w, r15w

#define TEST_R12W_AX test r12w, ax
#define TEST_R12W_BX test r12w, bx
#define TEST_R12W_CX test r12w, cx
#define TEST_R12W_DX test r12w, dx
#define TEST_R12W_DI test r12w, di
#define TEST_R12W_SI test r12w, si
#define TEST_R12W_BP test r12w, bp
#define TEST_R12W_SP test r12w, sp
#define TEST_R12W_R8W test r12w, r8w
#define TEST_R12W_R9W test r12w, r9w
#define TEST_R12W_R10W test r12w, r10w
#define TEST_R12W_R11W test r12w, r11w
#define TEST_R12W_R12W test r12w, r12w
#define TEST_R12W_R13W test r12w, r13w
#define TEST_R12W_R14W test r12w, r14w
#define TEST_R12W_R15W test r12w, r15w

#define TEST_R13W_AX test r13w, ax
#define TEST_R13W_BX test r13w, bx
#define TEST_R13W_CX test r13w, cx
#define TEST_R13W_DX test r13w, dx
#define TEST_R13W_DI test r13w, di
#define TEST_R13W_SI test r13w, si
#define TEST_R13W_BP test r13w, bp
#define TEST_R13W_SP test r13w, sp
#define TEST_R13W_R8W test r13w, r8w
#define TEST_R13W_R9W test r13w, r9w
#define TEST_R13W_R10W test r13w, r10w
#define TEST_R13W_R11W test r13w, r11w
#define TEST_R13W_R12W test r13w, r12w
#define TEST_R13W_R13W test r13w, r13w
#define TEST_R13W_R14W test r13w, r14w
#define TEST_R13W_R15W test r13w, r15w

#define TEST_R14W_AX test r14w, ax
#define TEST_R14W_BX test r14w, bx
#define TEST_R14W_CX test r14w, cx
#define TEST_R14W_DX test r14w, dx
#define TEST_R14W_DI test r14w, di
#define TEST_R14W_SI test r14w, si
#define TEST_R14W_BP test r14w, bp
#define TEST_R14W_SP test r14w, sp
#define TEST_R14W_R8W test r14w, r8w
#define TEST_R14W_R9W test r14w, r9w
#define TEST_R14W_R10W test r14w, r10w
#define TEST_R14W_R11W test r14w, r11w
#define TEST_R14W_R12W test r14w, r12w
#define TEST_R14W_R13W test r14w, r13w
#define TEST_R14W_R14W test r14w, r14w
#define TEST_R14W_R15W test r14w, r15w

#define TEST_R15W_AX test r15w, ax
#define TEST_R15W_BX test r15w, bx
#define TEST_R15W_CX test r15w, cx
#define TEST_R15W_DX test r15w, dx
#define TEST_R15W_DI test r15w, di
#define TEST_R15W_SI test r15w, si
#define TEST_R15W_BP test r15w, bp
#define TEST_R15W_SP test r15w, sp
#define TEST_R15W_R8W test r15w, r8w
#define TEST_R15W_R9W test r15w, r9w
#define TEST_R15W_R10W test r15w, r10w
#define TEST_R15W_R11W test r15w, r11w
#define TEST_R15W_R12W test r15w, r12w
#define TEST_R15W_R13W test r15w, r13w
#define TEST_R15W_R14W test r15w, r14w
#define TEST_R15W_R15W test r15w, r15w

#define TEST_AX_(VALUE) test ax, VALUE
#define TEST_BX_(VALUE) test bx, VALUE
#define TEST_CX_(VALUE) test cx, VALUE
#define TEST_DX_(VALUE) test dx, VALUE
#define TEST_DI_(VALUE) test di, VALUE
#define TEST_SI_(VALUE) test si, VALUE
#define TEST_BP_(VALUE) test bp, VALUE
#define TEST_SP_(VALUE) test sp, VALUE
#define TEST_R8W_(VALUE) test r8w, VALUE
#define TEST_R9W_(VALUE) test r9w, VALUE
#define TEST_R10W_(VALUE) test r10w, VALUE
#define TEST_R11W_(VALUE) test r11w, VALUE
#define TEST_R12W_(VALUE) test r12w, VALUE
#define TEST_R13W_(VALUE) test r13w, VALUE
#define TEST_R14W_(VALUE) test r14w, VALUE
#define TEST_R15W_(VALUE) test r15w, VALUE
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
