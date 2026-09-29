#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#ifdef __SYSTEM_16_BIT__
#define XOR_AL_AL xor al, al
#define XOR_AL_BL xor al, bl
#define XOR_AL_CL xor al, cl
#define XOR_AL_DL xor al, dl

#define XOR_BL_AL xor bl, al
#define XOR_BL_BL xor bl, bl
#define XOR_BL_CL xor bl, cl
#define XOR_BL_DL xor bl, dl

#define XOR_CL_AL xor cl, al
#define XOR_CL_BL xor cl, bl
#define XOR_CL_CL xor cl, cl
#define XOR_CL_DL xor cl, dl

#define XOR_DL_AL xor dl, al
#define XOR_DL_BL xor dl, bl
#define XOR_DL_CL xor dl, cl
#define XOR_DL_DL xor dl, dl

#define XOR_AL_(VALUE) xor al, VALUE
#define XOR_BL_(VALUE) xor bl, VALUE
#define XOR_CL_(VALUE) xor cl, VALUE
#define XOR_DL_(VALUE) xor dl, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AL_AL xor al, al
#define XOR_AL_BL xor al, bl
#define XOR_AL_CL xor al, cl
#define XOR_AL_DL xor al, dl

#define XOR_BL_AL xor bl, al
#define XOR_BL_BL xor bl, bl
#define XOR_BL_CL xor bl, cl
#define XOR_BL_DL xor bl, dl

#define XOR_CL_AL xor cl, al
#define XOR_CL_BL xor cl, bl
#define XOR_CL_CL xor cl, cl
#define XOR_CL_DL xor cl, dl

#define XOR_DL_AL xor dl, al
#define XOR_DL_BL xor dl, bl
#define XOR_DL_CL xor dl, cl
#define XOR_DL_DL xor dl, dl

#define XOR_AL_(VALUE) xor al, VALUE
#define XOR_BL_(VALUE) xor bl, VALUE
#define XOR_CL_(VALUE) xor cl, VALUE
#define XOR_DL_(VALUE) xor dl, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AL_AL xor al, al
#define XOR_AL_BL xor al, bl
#define XOR_AL_CL xor al, cl
#define XOR_AL_DL xor al, dl
#define XOR_AL_DIL xor al, dil
#define XOR_AL_SIL xor al, sil
#define XOR_AL_BPL xor al, bpl
#define XOR_AL_SPL xor al, spl
#define XOR_AL_R8B xor al, r8b
#define XOR_AL_R9B xor al, r9b
#define XOR_AL_R10B xor al, r10b
#define XOR_AL_R11B xor al, r11b
#define XOR_AL_R12B xor al, r12b
#define XOR_AL_R13B xor al, r13b
#define XOR_AL_R14B xor al, r14b
#define XOR_AL_R15B xor al, r15b

#define XOR_BL_AL xor bl, al
#define XOR_BL_BL xor bl, bl
#define XOR_BL_CL xor bl, cl
#define XOR_BL_DL xor bl, dl
#define XOR_BL_DIL xor bl, dil
#define XOR_BL_SIL xor bl, sil
#define XOR_BL_BPL xor bl, bpl
#define XOR_BL_SPL xor bl, spl
#define XOR_BL_R8B xor bl, r8b
#define XOR_BL_R9B xor bl, r9b
#define XOR_BL_R10B xor bl, r10b
#define XOR_BL_R11B xor bl, r11b
#define XOR_BL_R12B xor bl, r12b
#define XOR_BL_R13B xor bl, r13b
#define XOR_BL_R14B xor bl, r14b
#define XOR_BL_R15B xor bl, r15b

#define XOR_CL_AL xor cl, al
#define XOR_CL_BL xor cl, bl
#define XOR_CL_CL xor cl, cl
#define XOR_CL_DL xor cl, dl
#define XOR_CL_DIL xor cl, dil
#define XOR_CL_SIL xor cl, sil
#define XOR_CL_BPL xor cl, bpl
#define XOR_CL_SPL xor cl, spl
#define XOR_CL_R8B xor cl, r8b
#define XOR_CL_R9B xor cl, r9b
#define XOR_CL_R10B xor cl, r10b
#define XOR_CL_R11B xor cl, r11b
#define XOR_CL_R12B xor cl, r12b
#define XOR_CL_R13B xor cl, r13b
#define XOR_CL_R14B xor cl, r14b
#define XOR_CL_R15B xor cl, r15b

#define XOR_DL_AL xor dl, al
#define XOR_DL_BL xor dl, bl
#define XOR_DL_CL xor dl, cl
#define XOR_DL_DL xor dl, dl
#define XOR_DL_DIL xor dl, dil
#define XOR_DL_SIL xor dl, sil
#define XOR_DL_BPL xor dl, bpl
#define XOR_DL_SPL xor dl, spl
#define XOR_DL_R8B xor dl, r8b
#define XOR_DL_R9B xor dl, r9b
#define XOR_DL_R10B xor dl, r10b
#define XOR_DL_R11B xor dl, r11b
#define XOR_DL_R12B xor dl, r12b
#define XOR_DL_R13B xor dl, r13b
#define XOR_DL_R14B xor dl, r14b
#define XOR_DL_R15B xor dl, r15b

#define XOR_DIL_AL xor dil, al
#define XOR_DIL_BL xor dil, bl
#define XOR_DIL_CL xor dil, cl
#define XOR_DIL_DL xor dil, dl
#define XOR_DIL_DIL xor dil, dil
#define XOR_DIL_SIL xor dil, sil
#define XOR_DIL_BPL xor dil, bpl
#define XOR_DIL_SPL xor dil, spl
#define XOR_DIL_R8B xor dil, r8b
#define XOR_DIL_R9B xor dil, r9b
#define XOR_DIL_R10B xor dil, r10b
#define XOR_DIL_R11B xor dil, r11b
#define XOR_DIL_R12B xor dil, r12b
#define XOR_DIL_R13B xor dil, r13b
#define XOR_DIL_R14B xor dil, r14b
#define XOR_DIL_R15B xor dil, r15b

#define XOR_SIL_AL xor sil, al
#define XOR_SIL_BL xor sil, bl
#define XOR_SIL_CL xor sil, cl
#define XOR_SIL_DL xor sil, dl
#define XOR_SIL_DIL xor sil, dil
#define XOR_SIL_SIL xor sil, sil
#define XOR_SIL_BPL xor sil, bpl
#define XOR_SIL_SPL xor sil, spl
#define XOR_SIL_R8B xor sil, r8b
#define XOR_SIL_R9B xor sil, r9b
#define XOR_SIL_R10B xor sil, r10b
#define XOR_SIL_R11B xor sil, r11b
#define XOR_SIL_R12B xor sil, r12b
#define XOR_SIL_R13B xor sil, r13b
#define XOR_SIL_R14B xor sil, r14b
#define XOR_SIL_R15B xor sil, r15b

#define XOR_BPL_AL xor bpl, al
#define XOR_BPL_BL xor bpl, bl
#define XOR_BPL_CL xor bpl, cl
#define XOR_BPL_DL xor bpl, dl
#define XOR_BPL_DIL xor bpl, dil
#define XOR_BPL_SIL xor bpl, sil
#define XOR_BPL_BPL xor bpl, bpl
#define XOR_BPL_SPL xor bpl, spl
#define XOR_BPL_R8B xor bpl, r8b
#define XOR_BPL_R9B xor bpl, r9b
#define XOR_BPL_R10B xor bpl, r10b
#define XOR_BPL_R11B xor bpl, r11b
#define XOR_BPL_R12B xor bpl, r12b
#define XOR_BPL_R13B xor bpl, r13b
#define XOR_BPL_R14B xor bpl, r14b
#define XOR_BPL_R15B xor bpl, r15b

#define XOR_SPL_AL xor spl, al
#define XOR_SPL_BL xor spl, bl
#define XOR_SPL_CL xor spl, cl
#define XOR_SPL_DL xor spl, dl
#define XOR_SPL_DIL xor spl, dil
#define XOR_SPL_SIL xor spl, sil
#define XOR_SPL_BPL xor spl, bpl
#define XOR_SPL_SPL xor spl, spl
#define XOR_SPL_R8B xor spl, r8b
#define XOR_SPL_R9B xor spl, r9b
#define XOR_SPL_R10B xor spl, r10b
#define XOR_SPL_R11B xor spl, r11b
#define XOR_SPL_R12B xor spl, r12b
#define XOR_SPL_R13B xor spl, r13b
#define XOR_SPL_R14B xor spl, r14b
#define XOR_SPL_R15B xor spl, r15b

#define XOR_R8B_AL xor r8b, al
#define XOR_R8B_BL xor r8b, bl
#define XOR_R8B_CL xor r8b, cl
#define XOR_R8B_DL xor r8b, dl
#define XOR_R8B_DIL xor r8b, dil
#define XOR_R8B_SIL xor r8b, sil
#define XOR_R8B_BPL xor r8b, bpl
#define XOR_R8B_SPL xor r8b, spl
#define XOR_R8B_R8B xor r8b, r8b
#define XOR_R8B_R9B xor r8b, r9b
#define XOR_R8B_R10B xor r8b, r10b
#define XOR_R8B_R11B xor r8b, r11b
#define XOR_R8B_R12B xor r8b, r12b
#define XOR_R8B_R13B xor r8b, r13b
#define XOR_R8B_R14B xor r8b, r14b
#define XOR_R8B_R15B xor r8b, r15b

#define XOR_R9B_AL xor r9b, al
#define XOR_R9B_BL xor r9b, bl
#define XOR_R9B_CL xor r9b, cl
#define XOR_R9B_DL xor r9b, dl
#define XOR_R9B_DIL xor r9b, dil
#define XOR_R9B_SIL xor r9b, sil
#define XOR_R9B_BPL xor r9b, bpl
#define XOR_R9B_SPL xor r9b, spl
#define XOR_R9B_R8B xor r9b, r8b
#define XOR_R9B_R9B xor r9b, r9b
#define XOR_R9B_R10B xor r9b, r10b
#define XOR_R9B_R11B xor r9b, r11b
#define XOR_R9B_R12B xor r9b, r12b
#define XOR_R9B_R13B xor r9b, r13b
#define XOR_R9B_R14B xor r9b, r14b
#define XOR_R9B_R15B xor r9b, r15b

#define XOR_R10B_AL xor r10b, al
#define XOR_R10B_BL xor r10b, bl
#define XOR_R10B_CL xor r10b, cl
#define XOR_R10B_DL xor r10b, dl
#define XOR_R10B_DIL xor r10b, dil
#define XOR_R10B_SIL xor r10b, sil
#define XOR_R10B_BPL xor r10b, bpl
#define XOR_R10B_SPL xor r10b, spl
#define XOR_R10B_R8B xor r10b, r8b
#define XOR_R10B_R9B xor r10b, r9b
#define XOR_R10B_R10B xor r10b, r10b
#define XOR_R10B_R11B xor r10b, r11b
#define XOR_R10B_R12B xor r10b, r12b
#define XOR_R10B_R13B xor r10b, r13b
#define XOR_R10B_R14B xor r10b, r14b
#define XOR_R10B_R15B xor r10b, r15b

#define XOR_R11B_AL xor r11b, al
#define XOR_R11B_BL xor r11b, bl
#define XOR_R11B_CL xor r11b, cl
#define XOR_R11B_DL xor r11b, dl
#define XOR_R11B_DIL xor r11b, dil
#define XOR_R11B_SIL xor r11b, sil
#define XOR_R11B_BPL xor r11b, bpl
#define XOR_R11B_SPL xor r11b, spl
#define XOR_R11B_R8B xor r11b, r8b
#define XOR_R11B_R9B xor r11b, r9b
#define XOR_R11B_R10B xor r11b, r10b
#define XOR_R11B_R11B xor r11b, r11b
#define XOR_R11B_R12B xor r11b, r12b
#define XOR_R11B_R13B xor r11b, r13b
#define XOR_R11B_R14B xor r11b, r14b
#define XOR_R11B_R15B xor r11b, r15b

#define XOR_R12B_AL xor r12b, al
#define XOR_R12B_BL xor r12b, bl
#define XOR_R12B_CL xor r12b, cl
#define XOR_R12B_DL xor r12b, dl
#define XOR_R12B_DIL xor r12b, dil
#define XOR_R12B_SIL xor r12b, sil
#define XOR_R12B_BPL xor r12b, bpl
#define XOR_R12B_SPL xor r12b, spl
#define XOR_R12B_R8B xor r12b, r8b
#define XOR_R12B_R9B xor r12b, r9b
#define XOR_R12B_R10B xor r12b, r10b
#define XOR_R12B_R11B xor r12b, r11b
#define XOR_R12B_R12B xor r12b, r12b
#define XOR_R12B_R13B xor r12b, r13b
#define XOR_R12B_R14B xor r12b, r14b
#define XOR_R12B_R15B xor r12b, r15b

#define XOR_R13B_AL xor r13b, al
#define XOR_R13B_BL xor r13b, bl
#define XOR_R13B_CL xor r13b, cl
#define XOR_R13B_DL xor r13b, dl
#define XOR_R13B_DIL xor r13b, dil
#define XOR_R13B_SIL xor r13b, sil
#define XOR_R13B_BPL xor r13b, bpl
#define XOR_R13B_SPL xor r13b, spl
#define XOR_R13B_R8B xor r13b, r8b
#define XOR_R13B_R9B xor r13b, r9b
#define XOR_R13B_R10B xor r13b, r10b
#define XOR_R13B_R11B xor r13b, r11b
#define XOR_R13B_R12B xor r13b, r12b
#define XOR_R13B_R13B xor r13b, r13b
#define XOR_R13B_R14B xor r13b, r14b
#define XOR_R13B_R15B xor r13b, r15b

#define XOR_R14B_AL xor r14b, al
#define XOR_R14B_BL xor r14b, bl
#define XOR_R14B_CL xor r14b, cl
#define XOR_R14B_DL xor r14b, dl
#define XOR_R14B_DIL xor r14b, dil
#define XOR_R14B_SIL xor r14b, sil
#define XOR_R14B_BPL xor r14b, bpl
#define XOR_R14B_SPL xor r14b, spl
#define XOR_R14B_R8B xor r14b, r8b
#define XOR_R14B_R9B xor r14b, r9b
#define XOR_R14B_R10B xor r14b, r10b
#define XOR_R14B_R11B xor r14b, r11b
#define XOR_R14B_R12B xor r14b, r12b
#define XOR_R14B_R13B xor r14b, r13b
#define XOR_R14B_R14B xor r14b, r14b
#define XOR_R14B_R15B xor r14b, r15b

#define XOR_R15B_AL xor r15b, al
#define XOR_R15B_BL xor r15b, bl
#define XOR_R15B_CL xor r15b, cl
#define XOR_R15B_DL xor r15b, dl
#define XOR_R15B_DIL xor r15b, dil
#define XOR_R15B_SIL xor r15b, sil
#define XOR_R15B_BPL xor r15b, bpl
#define XOR_R15B_SPL xor r15b, spl
#define XOR_R15B_R8B xor r15b, r8b
#define XOR_R15B_R9B xor r15b, r9b
#define XOR_R15B_R10B xor r15b, r10b
#define XOR_R15B_R11B xor r15b, r11b
#define XOR_R15B_R12B xor r15b, r12b
#define XOR_R15B_R13B xor r15b, r13b
#define XOR_R15B_R14B xor r15b, r14b
#define XOR_R15B_R15B xor r15b, r15b

#define XOR_AL_(VALUE) xor al, VALUE
#define XOR_BL_(VALUE) xor bl, VALUE
#define XOR_CL_(VALUE) xor cl, VALUE
#define XOR_DL_(VALUE) xor dl, VALUE
#define XOR_DIL_(VALUE) xor dil, VALUE
#define XOR_SIL_(VALUE) xor sil, VALUE
#define XOR_BPL_(VALUE) xor bpl, VALUE
#define XOR_SPL_(VALUE) xor spl, VALUE
#define XOR_R8B_(VALUE) xor r8b, VALUE
#define XOR_R9B_(VALUE) xor r9b, VALUE
#define XOR_R10B_(VALUE) xor r10b, VALUE
#define XOR_R11B_(VALUE) xor r11b, VALUE
#define XOR_R12B_(VALUE) xor r12b, VALUE
#define XOR_R13B_(VALUE) xor r13b, VALUE
#define XOR_R14B_(VALUE) xor r14b, VALUE
#define XOR_R15B_(VALUE) xor r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#ifdef __SYSTEM_16_BIT__
#define XOR_AX_AX xor ax, ax
#define XOR_AX_BX xor ax, bx
#define XOR_AX_CX xor ax, cx
#define XOR_AX_DX xor ax, dx
#define XOR_AX_DI xor ax, di
#define XOR_AX_SI xor ax, si
#define XOR_AX_BP xor ax, bp
#define XOR_AX_SP xor ax, sp

#define XOR_BX_AX xor bx, ax
#define XOR_BX_BX xor bx, bx
#define XOR_BX_CX xor bx, cx
#define XOR_BX_DX xor bx, dx
#define XOR_BX_DI xor bx, di
#define XOR_BX_SI xor bx, si
#define XOR_BX_BP xor bx, bp
#define XOR_BX_SP xor bx, sp

#define XOR_CX_AX xor cx, ax
#define XOR_CX_BX xor cx, bx
#define XOR_CX_CX xor cx, cx
#define XOR_CX_DX xor cx, dx
#define XOR_CX_DI xor cx, di
#define XOR_CX_SI xor cx, si
#define XOR_CX_BP xor cx, bp
#define XOR_CX_SP xor cx, sp

#define XOR_DX_AX xor dx, ax
#define XOR_DX_BX xor dx, bx
#define XOR_DX_CX xor dx, cx
#define XOR_DX_DX xor dx, dx
#define XOR_DX_DI xor dx, di
#define XOR_DX_SI xor dx, si
#define XOR_DX_BP xor dx, bp
#define XOR_DX_SP xor dx, sp

#define XOR_DI_AX xor di, ax
#define XOR_DI_BX xor di, bx
#define XOR_DI_CX xor di, cx
#define XOR_DI_DX xor di, dx
#define XOR_DI_DI xor di, di
#define XOR_DI_SI xor di, si
#define XOR_DI_BP xor di, bp
#define XOR_DI_SP xor di, sp

#define XOR_SI_AX xor si, ax
#define XOR_SI_BX xor si, bx
#define XOR_SI_CX xor si, cx
#define XOR_SI_DX xor si, dx
#define XOR_SI_DI xor si, di
#define XOR_SI_SI xor si, si
#define XOR_SI_BP xor si, bp
#define XOR_SI_SP xor si, sp

#define XOR_BP_AX xor bp, ax
#define XOR_BP_BX xor bp, bx
#define XOR_BP_CX xor bp, cx
#define XOR_BP_DX xor bp, dx
#define XOR_BP_DI xor bp, di
#define XOR_BP_SI xor bp, si
#define XOR_BP_BP xor bp, bp
#define XOR_BP_SP xor bp, sp

#define XOR_SP_AX xor sp, ax
#define XOR_SP_BX xor sp, bx
#define XOR_SP_CX xor sp, cx
#define XOR_SP_DX xor sp, dx
#define XOR_SP_DI xor sp, di
#define XOR_SP_SI xor sp, si
#define XOR_SP_BP xor sp, bp
#define XOR_SP_SP xor sp, sp

#define XOR_AX_(VALUE) xor ax, VALUE
#define XOR_BX_(VALUE) xor bx, VALUE
#define XOR_CX_(VALUE) xor cx, VALUE
#define XOR_DX_(VALUE) xor dx, VALUE
#define XOR_DI_(VALUE) xor di, VALUE
#define XOR_SI_(VALUE) xor si, VALUE
#define XOR_BP_(VALUE) xor bp, VALUE
#define XOR_SP_(VALUE) xor sp, VALUE
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define XOR_AX_AX xor ax, ax
#define XOR_AX_BX xor ax, bx
#define XOR_AX_CX xor ax, cx
#define XOR_AX_DX xor ax, dx
#define XOR_AX_DI xor ax, di
#define XOR_AX_SI xor ax, si
#define XOR_AX_BP xor ax, bp
#define XOR_AX_SP xor ax, sp

#define XOR_BX_AX xor bx, ax
#define XOR_BX_BX xor bx, bx
#define XOR_BX_CX xor bx, cx
#define XOR_BX_DX xor bx, dx
#define XOR_BX_DI xor bx, di
#define XOR_BX_SI xor bx, si
#define XOR_BX_BP xor bx, bp
#define XOR_BX_SP xor bx, sp

#define XOR_CX_AX xor cx, ax
#define XOR_CX_BX xor cx, bx
#define XOR_CX_CX xor cx, cx
#define XOR_CX_DX xor cx, dx
#define XOR_CX_DI xor cx, di
#define XOR_CX_SI xor cx, si
#define XOR_CX_BP xor cx, bp
#define XOR_CX_SP xor cx, sp

#define XOR_DX_AX xor dx, ax
#define XOR_DX_BX xor dx, bx
#define XOR_DX_CX xor dx, cx
#define XOR_DX_DX xor dx, dx
#define XOR_DX_DI xor dx, di
#define XOR_DX_SI xor dx, si
#define XOR_DX_BP xor dx, bp
#define XOR_DX_SP xor dx, sp

#define XOR_DI_AX xor di, ax
#define XOR_DI_BX xor di, bx
#define XOR_DI_CX xor di, cx
#define XOR_DI_DX xor di, dx
#define XOR_DI_DI xor di, di
#define XOR_DI_SI xor di, si
#define XOR_DI_BP xor di, bp
#define XOR_DI_SP xor di, sp

#define XOR_SI_AX xor si, ax
#define XOR_SI_BX xor si, bx
#define XOR_SI_CX xor si, cx
#define XOR_SI_DX xor si, dx
#define XOR_SI_DI xor si, di
#define XOR_SI_SI xor si, si
#define XOR_SI_BP xor si, bp
#define XOR_SI_SP xor si, sp

#define XOR_BP_AX xor bp, ax
#define XOR_BP_BX xor bp, bx
#define XOR_BP_CX xor bp, cx
#define XOR_BP_DX xor bp, dx
#define XOR_BP_DI xor bp, di
#define XOR_BP_SI xor bp, si
#define XOR_BP_BP xor bp, bp
#define XOR_BP_SP xor bp, sp

#define XOR_SP_AX xor sp, ax
#define XOR_SP_BX xor sp, bx
#define XOR_SP_CX xor sp, cx
#define XOR_SP_DX xor sp, dx
#define XOR_SP_DI xor sp, di
#define XOR_SP_SI xor sp, si
#define XOR_SP_BP xor sp, bp
#define XOR_SP_SP xor sp, sp

#define XOR_AX_(VALUE) xor ax, VALUE
#define XOR_BX_(VALUE) xor bx, VALUE
#define XOR_CX_(VALUE) xor cx, VALUE
#define XOR_DX_(VALUE) xor dx, VALUE
#define XOR_DI_(VALUE) xor di, VALUE
#define XOR_SI_(VALUE) xor si, VALUE
#define XOR_BP_(VALUE) xor bp, VALUE
#define XOR_SP_(VALUE) xor sp, VALUE
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define XOR_AX_AX xor ax, ax
#define XOR_AX_BX xor ax, bx
#define XOR_AX_CX xor ax, cx
#define XOR_AX_DX xor ax, dx
#define XOR_AX_DI xor ax, di
#define XOR_AX_SI xor ax, si
#define XOR_AX_BP xor ax, bp
#define XOR_AX_SP xor ax, sp
#define XOR_AX_R8W xor ax, r8w
#define XOR_AX_R9W xor ax, r9w
#define XOR_AX_R10W xor ax, r10w
#define XOR_AX_R11W xor ax, r11w
#define XOR_AX_R12W xor ax, r12w
#define XOR_AX_R13W xor ax, r13w
#define XOR_AX_R14W xor ax, r14w
#define XOR_AX_R15W xor ax, r15w

#define XOR_BX_AX xor bx, ax
#define XOR_BX_BX xor bx, bx
#define XOR_BX_CX xor bx, cx
#define XOR_BX_DX xor bx, dx
#define XOR_BX_DI xor bx, di
#define XOR_BX_SI xor bx, si
#define XOR_BX_BP xor bx, bp
#define XOR_BX_SP xor bx, sp
#define XOR_BX_R8W xor bx, r8w
#define XOR_BX_R9W xor bx, r9w
#define XOR_BX_R10W xor bx, r10w
#define XOR_BX_R11W xor bx, r11w
#define XOR_BX_R12W xor bx, r12w
#define XOR_BX_R13W xor bx, r13w
#define XOR_BX_R14W xor bx, r14w
#define XOR_BX_R15W xor bx, r15w

#define XOR_CX_AX xor cx, ax
#define XOR_CX_BX xor cx, bx
#define XOR_CX_CX xor cx, cx
#define XOR_CX_DX xor cx, dx
#define XOR_CX_DI xor cx, di
#define XOR_CX_SI xor cx, si
#define XOR_CX_BP xor cx, bp
#define XOR_CX_SP xor cx, sp
#define XOR_CX_R8W xor cx, r8w
#define XOR_CX_R9W xor cx, r9w
#define XOR_CX_R10W xor cx, r10w
#define XOR_CX_R11W xor cx, r11w
#define XOR_CX_R12W xor cx, r12w
#define XOR_CX_R13W xor cx, r13w
#define XOR_CX_R14W xor cx, r14w
#define XOR_CX_R15W xor cx, r15w

#define XOR_DX_AX xor dx, ax
#define XOR_DX_BX xor dx, bx
#define XOR_DX_CX xor dx, cx
#define XOR_DX_DX xor dx, dx
#define XOR_DX_DI xor dx, di
#define XOR_DX_SI xor dx, si
#define XOR_DX_BP xor dx, bp
#define XOR_DX_SP xor dx, sp
#define XOR_DX_R8W xor dx, r8w
#define XOR_DX_R9W xor dx, r9w
#define XOR_DX_R10W xor dx, r10w
#define XOR_DX_R11W xor dx, r11w
#define XOR_DX_R12W xor dx, r12w
#define XOR_DX_R13W xor dx, r13w
#define XOR_DX_R14W xor dx, r14w
#define XOR_DX_R15W xor dx, r15w

#define XOR_DI_AX xor di, ax
#define XOR_DI_BX xor di, bx
#define XOR_DI_CX xor di, cx
#define XOR_DI_DX xor di, dx
#define XOR_DI_DI xor di, di
#define XOR_DI_SI xor di, si
#define XOR_DI_BP xor di, bp
#define XOR_DI_SP xor di, sp
#define XOR_DI_R8W xor di, r8w
#define XOR_DI_R9W xor di, r9w
#define XOR_DI_R10W xor di, r10w
#define XOR_DI_R11W xor di, r11w
#define XOR_DI_R12W xor di, r12w
#define XOR_DI_R13W xor di, r13w
#define XOR_DI_R14W xor di, r14w
#define XOR_DI_R15W xor di, r15w

#define XOR_SI_AX xor si, ax
#define XOR_SI_BX xor si, bx
#define XOR_SI_CX xor si, cx
#define XOR_SI_DX xor si, dx
#define XOR_SI_DI xor si, di
#define XOR_SI_SI xor si, si
#define XOR_SI_BP xor si, bp
#define XOR_SI_SP xor si, sp
#define XOR_SI_R8W xor si, r8w
#define XOR_SI_R9W xor si, r9w
#define XOR_SI_R10W xor si, r10w
#define XOR_SI_R11W xor si, r11w
#define XOR_SI_R12W xor si, r12w
#define XOR_SI_R13W xor si, r13w
#define XOR_SI_R14W xor si, r14w
#define XOR_SI_R15W xor si, r15w

#define XOR_BP_AX xor bp, ax
#define XOR_BP_BX xor bp, bx
#define XOR_BP_CX xor bp, cx
#define XOR_BP_DX xor bp, dx
#define XOR_BP_DI xor bp, di
#define XOR_BP_SI xor bp, si
#define XOR_BP_BP xor bp, bp
#define XOR_BP_SP xor bp, sp
#define XOR_BP_R8W xor bp, r8w
#define XOR_BP_R9W xor bp, r9w
#define XOR_BP_R10W xor bp, r10w
#define XOR_BP_R11W xor bp, r11w
#define XOR_BP_R12W xor bp, r12w
#define XOR_BP_R13W xor bp, r13w
#define XOR_BP_R14W xor bp, r14w
#define XOR_BP_R15W xor bp, r15w

#define XOR_SP_AX xor sp, ax
#define XOR_SP_BX xor sp, bx
#define XOR_SP_CX xor sp, cx
#define XOR_SP_DX xor sp, dx
#define XOR_SP_DI xor sp, di
#define XOR_SP_SI xor sp, si
#define XOR_SP_BP xor sp, bp
#define XOR_SP_SP xor sp, sp
#define XOR_SP_R8W xor sp, r8w
#define XOR_SP_R9W xor sp, r9w
#define XOR_SP_R10W xor sp, r10w
#define XOR_SP_R11W xor sp, r11w
#define XOR_SP_R12W xor sp, r12w
#define XOR_SP_R13W xor sp, r13w
#define XOR_SP_R14W xor sp, r14w
#define XOR_SP_R15W xor sp, r15w

#define XOR_R8W_AX xor r8w, ax
#define XOR_R8W_BX xor r8w, bx
#define XOR_R8W_CX xor r8w, cx
#define XOR_R8W_DX xor r8w, dx
#define XOR_R8W_DI xor r8w, di
#define XOR_R8W_SI xor r8w, si
#define XOR_R8W_BP xor r8w, bp
#define XOR_R8W_SP xor r8w, sp
#define XOR_R8W_R8W xor r8w, r8w
#define XOR_R8W_R9W xor r8w, r9w
#define XOR_R8W_R10W xor r8w, r10w
#define XOR_R8W_R11W xor r8w, r11w
#define XOR_R8W_R12W xor r8w, r12w
#define XOR_R8W_R13W xor r8w, r13w
#define XOR_R8W_R14W xor r8w, r14w
#define XOR_R8W_R15W xor r8w, r15w

#define XOR_R9W_AX xor r9w, ax
#define XOR_R9W_BX xor r9w, bx
#define XOR_R9W_CX xor r9w, cx
#define XOR_R9W_DX xor r9w, dx
#define XOR_R9W_DI xor r9w, di
#define XOR_R9W_SI xor r9w, si
#define XOR_R9W_BP xor r9w, bp
#define XOR_R9W_SP xor r9w, sp
#define XOR_R9W_R8W xor r9w, r8w
#define XOR_R9W_R9W xor r9w, r9w
#define XOR_R9W_R10W xor r9w, r10w
#define XOR_R9W_R11W xor r9w, r11w
#define XOR_R9W_R12W xor r9w, r12w
#define XOR_R9W_R13W xor r9w, r13w
#define XOR_R9W_R14W xor r9w, r14w
#define XOR_R9W_R15W xor r9w, r15w

#define XOR_R10W_AX xor r10w, ax
#define XOR_R10W_BX xor r10w, bx
#define XOR_R10W_CX xor r10w, cx
#define XOR_R10W_DX xor r10w, dx
#define XOR_R10W_DI xor r10w, di
#define XOR_R10W_SI xor r10w, si
#define XOR_R10W_BP xor r10w, bp
#define XOR_R10W_SP xor r10w, sp
#define XOR_R10W_R8W xor r10w, r8w
#define XOR_R10W_R9W xor r10w, r9w
#define XOR_R10W_R10W xor r10w, r10w
#define XOR_R10W_R11W xor r10w, r11w
#define XOR_R10W_R12W xor r10w, r12w
#define XOR_R10W_R13W xor r10w, r13w
#define XOR_R10W_R14W xor r10w, r14w
#define XOR_R10W_R15W xor r10w, r15w

#define XOR_R11W_AX xor r11w, ax
#define XOR_R11W_BX xor r11w, bx
#define XOR_R11W_CX xor r11w, cx
#define XOR_R11W_DX xor r11w, dx
#define XOR_R11W_DI xor r11w, di
#define XOR_R11W_SI xor r11w, si
#define XOR_R11W_BP xor r11w, bp
#define XOR_R11W_SP xor r11w, sp
#define XOR_R11W_R8W xor r11w, r8w
#define XOR_R11W_R9W xor r11w, r9w
#define XOR_R11W_R10W xor r11w, r10w
#define XOR_R11W_R11W xor r11w, r11w
#define XOR_R11W_R12W xor r11w, r12w
#define XOR_R11W_R13W xor r11w, r13w
#define XOR_R11W_R14W xor r11w, r14w
#define XOR_R11W_R15W xor r11w, r15w

#define XOR_R12W_AX xor r12w, ax
#define XOR_R12W_BX xor r12w, bx
#define XOR_R12W_CX xor r12w, cx
#define XOR_R12W_DX xor r12w, dx
#define XOR_R12W_DI xor r12w, di
#define XOR_R12W_SI xor r12w, si
#define XOR_R12W_BP xor r12w, bp
#define XOR_R12W_SP xor r12w, sp
#define XOR_R12W_R8W xor r12w, r8w
#define XOR_R12W_R9W xor r12w, r9w
#define XOR_R12W_R10W xor r12w, r10w
#define XOR_R12W_R11W xor r12w, r11w
#define XOR_R12W_R12W xor r12w, r12w
#define XOR_R12W_R13W xor r12w, r13w
#define XOR_R12W_R14W xor r12w, r14w
#define XOR_R12W_R15W xor r12w, r15w

#define XOR_R13W_AX xor r13w, ax
#define XOR_R13W_BX xor r13w, bx
#define XOR_R13W_CX xor r13w, cx
#define XOR_R13W_DX xor r13w, dx
#define XOR_R13W_DI xor r13w, di
#define XOR_R13W_SI xor r13w, si
#define XOR_R13W_BP xor r13w, bp
#define XOR_R13W_SP xor r13w, sp
#define XOR_R13W_R8W xor r13w, r8w
#define XOR_R13W_R9W xor r13w, r9w
#define XOR_R13W_R10W xor r13w, r10w
#define XOR_R13W_R11W xor r13w, r11w
#define XOR_R13W_R12W xor r13w, r12w
#define XOR_R13W_R13W xor r13w, r13w
#define XOR_R13W_R14W xor r13w, r14w
#define XOR_R13W_R15W xor r13w, r15w

#define XOR_R14W_AX xor r14w, ax
#define XOR_R14W_BX xor r14w, bx
#define XOR_R14W_CX xor r14w, cx
#define XOR_R14W_DX xor r14w, dx
#define XOR_R14W_DI xor r14w, di
#define XOR_R14W_SI xor r14w, si
#define XOR_R14W_BP xor r14w, bp
#define XOR_R14W_SP xor r14w, sp
#define XOR_R14W_R8W xor r14w, r8w
#define XOR_R14W_R9W xor r14w, r9w
#define XOR_R14W_R10W xor r14w, r10w
#define XOR_R14W_R11W xor r14w, r11w
#define XOR_R14W_R12W xor r14w, r12w
#define XOR_R14W_R13W xor r14w, r13w
#define XOR_R14W_R14W xor r14w, r14w
#define XOR_R14W_R15W xor r14w, r15w

#define XOR_R15W_AX xor r15w, ax
#define XOR_R15W_BX xor r15w, bx
#define XOR_R15W_CX xor r15w, cx
#define XOR_R15W_DX xor r15w, dx
#define XOR_R15W_DI xor r15w, di
#define XOR_R15W_SI xor r15w, si
#define XOR_R15W_BP xor r15w, bp
#define XOR_R15W_SP xor r15w, sp
#define XOR_R15W_R8W xor r15w, r8w
#define XOR_R15W_R9W xor r15w, r9w
#define XOR_R15W_R10W xor r15w, r10w
#define XOR_R15W_R11W xor r15w, r11w
#define XOR_R15W_R12W xor r15w, r12w
#define XOR_R15W_R13W xor r15w, r13w
#define XOR_R15W_R14W xor r15w, r14w
#define XOR_R15W_R15W xor r15w, r15w

#define XOR_AX_(VALUE) xor ax, VALUE
#define XOR_BX_(VALUE) xor bx, VALUE
#define XOR_CX_(VALUE) xor cx, VALUE
#define XOR_DX_(VALUE) xor dx, VALUE
#define XOR_DI_(VALUE) xor di, VALUE
#define XOR_SI_(VALUE) xor si, VALUE
#define XOR_BP_(VALUE) xor bp, VALUE
#define XOR_SP_(VALUE) xor sp, VALUE
#define XOR_R8W_(VALUE) xor r8w, VALUE
#define XOR_R9W_(VALUE) xor r9w, VALUE
#define XOR_R10W_(VALUE) xor r10w, VALUE
#define XOR_R11W_(VALUE) xor r11w, VALUE
#define XOR_R12W_(VALUE) xor r12w, VALUE
#define XOR_R13W_(VALUE) xor r13w, VALUE
#define XOR_R14W_(VALUE) xor r14w, VALUE
#define XOR_R15W_(VALUE) xor r15w, VALUE
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
