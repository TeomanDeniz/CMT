#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************ [v] 8-BIT REGISTERS [v] ************************* */
#define MOV_AL_AL mov al, al
#define MOV_AL_BL mov al, bl
#define MOV_AL_CL mov al, cl
#define MOV_AL_DL mov al, dl

#define MOV_BL_AL mov bl, al
#define MOV_BL_BL mov bl, bl
#define MOV_BL_CL mov bl, cl
#define MOV_BL_DL mov bl, dl

#define MOV_CL_AL mov cl, al
#define MOV_CL_BL mov cl, bl
#define MOV_CL_CL mov cl, cl
#define MOV_CL_DL mov cl, dl

#define MOV_DL_AL mov dl, al
#define MOV_DL_BL mov dl, bl
#define MOV_DL_CL mov dl, cl
#define MOV_DL_DL mov dl, dl

#define MOV_AL_(VALUE) mov al, VALUE
#define MOV_BL_(VALUE) mov bl, VALUE
#define MOV_CL_(VALUE) mov cl, VALUE
#define MOV_DL_(VALUE) mov dl, VALUE

#ifdef __SYSTEM_64_BIT__
#define MOV_AL_DIL mov al, dil
#define MOV_AL_SIL mov al, sil
#define MOV_AL_BPL mov al, bpl
#define MOV_AL_SPL mov al, spl
#define MOV_AL_R8B mov al, r8b
#define MOV_AL_R9B mov al, r9b
#define MOV_AL_R10B mov al, r10b
#define MOV_AL_R11B mov al, r11b
#define MOV_AL_R12B mov al, r12b
#define MOV_AL_R13B mov al, r13b
#define MOV_AL_R14B mov al, r14b
#define MOV_AL_R15B mov al, r15b

#define MOV_BL_DIL mov bl, dil
#define MOV_BL_SIL mov bl, sil
#define MOV_BL_BPL mov bl, bpl
#define MOV_BL_SPL mov bl, spl
#define MOV_BL_R8B mov bl, r8b
#define MOV_BL_R9B mov bl, r9b
#define MOV_BL_R10B mov bl, r10b
#define MOV_BL_R11B mov bl, r11b
#define MOV_BL_R12B mov bl, r12b
#define MOV_BL_R13B mov bl, r13b
#define MOV_BL_R14B mov bl, r14b
#define MOV_BL_R15B mov bl, r15b

#define MOV_CL_DIL mov cl, dil
#define MOV_CL_SIL mov cl, sil
#define MOV_CL_BPL mov cl, bpl
#define MOV_CL_SPL mov cl, spl
#define MOV_CL_R8B mov cl, r8b
#define MOV_CL_R9B mov cl, r9b
#define MOV_CL_R10B mov cl, r10b
#define MOV_CL_R11B mov cl, r11b
#define MOV_CL_R12B mov cl, r12b
#define MOV_CL_R13B mov cl, r13b
#define MOV_CL_R14B mov cl, r14b
#define MOV_CL_R15B mov cl, r15b

#define MOV_DL_DIL mov dl, dil
#define MOV_DL_SIL mov dl, sil
#define MOV_DL_BPL mov dl, bpl
#define MOV_DL_SPL mov dl, spl
#define MOV_DL_R8B mov dl, r8b
#define MOV_DL_R9B mov dl, r9b
#define MOV_DL_R10B mov dl, r10b
#define MOV_DL_R11B mov dl, r11b
#define MOV_DL_R12B mov dl, r12b
#define MOV_DL_R13B mov dl, r13b
#define MOV_DL_R14B mov dl, r14b
#define MOV_DL_R15B mov dl, r15b

#define MOV_DIL_AL mov dil, al
#define MOV_DIL_BL mov dil, bl
#define MOV_DIL_CL mov dil, cl
#define MOV_DIL_DL mov dil, dl
#define MOV_DIL_DIL mov dil, dil
#define MOV_DIL_SIL mov dil, sil
#define MOV_DIL_BPL mov dil, bpl
#define MOV_DIL_SPL mov dil, spl
#define MOV_DIL_R8B mov dil, r8b
#define MOV_DIL_R9B mov dil, r9b
#define MOV_DIL_R10B mov dil, r10b
#define MOV_DIL_R11B mov dil, r11b
#define MOV_DIL_R12B mov dil, r12b
#define MOV_DIL_R13B mov dil, r13b
#define MOV_DIL_R14B mov dil, r14b
#define MOV_DIL_R15B mov dil, r15b

#define MOV_SIL_AL mov sil, al
#define MOV_SIL_BL mov sil, bl
#define MOV_SIL_CL mov sil, cl
#define MOV_SIL_DL mov sil, dl
#define MOV_SIL_DIL mov sil, dil
#define MOV_SIL_SIL mov sil, sil
#define MOV_SIL_BPL mov sil, bpl
#define MOV_SIL_SPL mov sil, spl
#define MOV_SIL_R8B mov sil, r8b
#define MOV_SIL_R9B mov sil, r9b
#define MOV_SIL_R10B mov sil, r10b
#define MOV_SIL_R11B mov sil, r11b
#define MOV_SIL_R12B mov sil, r12b
#define MOV_SIL_R13B mov sil, r13b
#define MOV_SIL_R14B mov sil, r14b
#define MOV_SIL_R15B mov sil, r15b

#define MOV_BPL_AL mov bpl, al
#define MOV_BPL_BL mov bpl, bl
#define MOV_BPL_CL mov bpl, cl
#define MOV_BPL_DL mov bpl, dl
#define MOV_BPL_DIL mov bpl, dil
#define MOV_BPL_SIL mov bpl, sil
#define MOV_BPL_BPL mov bpl, bpl
#define MOV_BPL_SPL mov bpl, spl
#define MOV_BPL_BPL mov bpl, bpl
#define MOV_BPL_R8B mov bpl, r8b
#define MOV_BPL_R9B mov bpl, r9b
#define MOV_BPL_R10B mov bpl, r10b
#define MOV_BPL_R11B mov bpl, r11b
#define MOV_BPL_R12B mov bpl, r12b
#define MOV_BPL_R13B mov bpl, r13b
#define MOV_BPL_R14B mov bpl, r14b
#define MOV_BPL_R15B mov bpl, r15b

#define MOV_SPL_AL mov spl, al
#define MOV_SPL_BL mov spl, bl
#define MOV_SPL_CL mov spl, cl
#define MOV_SPL_DL mov spl, dl
#define MOV_SPL_DIL mov spl, dil
#define MOV_SPL_SIL mov spl, sil
#define MOV_SPL_BPL mov spl, bpl
#define MOV_SPL_SPL mov spl, spl
#define MOV_SPL_R8B mov spl, r8b
#define MOV_SPL_R9B mov spl, r9b
#define MOV_SPL_R10B mov spl, r10b
#define MOV_SPL_R11B mov spl, r11b
#define MOV_SPL_R12B mov spl, r12b
#define MOV_SPL_R13B mov spl, r13b
#define MOV_SPL_R14B mov spl, r14b
#define MOV_SPL_R15B mov spl, r15b

#define MOV_R8B_AL mov r8b, al
#define MOV_R8B_BL mov r8b, bl
#define MOV_R8B_CL mov r8b, cl
#define MOV_R8B_DL mov r8b, dl
#define MOV_R8B_DIL mov r8b, dil
#define MOV_R8B_SIL mov r8b, sil
#define MOV_R8B_BPL mov r8b, bpl
#define MOV_R8B_SPL mov r8b, spl
#define MOV_R8B_R8B mov r8b, r8b
#define MOV_R8B_R9B mov r8b, r9b
#define MOV_R8B_R10B mov r8b, r10b
#define MOV_R8B_R11B mov r8b, r11b
#define MOV_R8B_R12B mov r8b, r12b
#define MOV_R8B_R13B mov r8b, r13b
#define MOV_R8B_R14B mov r8b, r14b
#define MOV_R8B_R15B mov r8b, r15b

#define MOV_R9B_AL mov r9b, al
#define MOV_R9B_BL mov r9b, bl
#define MOV_R9B_CL mov r9b, cl
#define MOV_R9B_DL mov r9b, dl
#define MOV_R9B_DIL mov r9b, dil
#define MOV_R9B_SIL mov r9b, sil
#define MOV_R9B_BPL mov r9b, bpl
#define MOV_R9B_SPL mov r9b, spl
#define MOV_R9B_R8B mov r9b, r8b
#define MOV_R9B_R9B mov r9b, r9b
#define MOV_R9B_R10B mov r9b, r10b
#define MOV_R9B_R11B mov r9b, r11b
#define MOV_R9B_R12B mov r9b, r12b
#define MOV_R9B_R13B mov r9b, r13b
#define MOV_R9B_R14B mov r9b, r14b
#define MOV_R9B_R15B mov r9b, r15b

#define MOV_R10B_AL mov r10b, al
#define MOV_R10B_BL mov r10b, bl
#define MOV_R10B_CL mov r10b, cl
#define MOV_R10B_DL mov r10b, dl
#define MOV_R10B_DIL mov r10b, dil
#define MOV_R10B_SIL mov r10b, sil
#define MOV_R10B_BPL mov r10b, bpl
#define MOV_R10B_SPL mov r10b, spl
#define MOV_R10B_R8B mov r10b, r8b
#define MOV_R10B_R9B mov r10b, r9b
#define MOV_R10B_R10B mov r10b, r10b
#define MOV_R10B_R11B mov r10b, r11b
#define MOV_R10B_R12B mov r10b, r12b
#define MOV_R10B_R13B mov r10b, r13b
#define MOV_R10B_R14B mov r10b, r14b
#define MOV_R10B_R15B mov r10b, r15b

#define MOV_R11B_AL mov r11b, al
#define MOV_R11B_BL mov r11b, bl
#define MOV_R11B_CL mov r11b, cl
#define MOV_R11B_DL mov r11b, dl
#define MOV_R11B_DIL mov r11b, dil
#define MOV_R11B_SIL mov r11b, sil
#define MOV_R11B_BPL mov r11b, bpl
#define MOV_R11B_SPL mov r11b, spl
#define MOV_R11B_R8B mov r11b, r8b
#define MOV_R11B_R9B mov r11b, r9b
#define MOV_R11B_R10B mov r11b, r10b
#define MOV_R11B_R11B mov r11b, r11b
#define MOV_R11B_R12B mov r11b, r12b
#define MOV_R11B_R13B mov r11b, r13b
#define MOV_R11B_R14B mov r11b, r14b
#define MOV_R11B_R15B mov r11b, r15b

#define MOV_R12B_AL mov r12b, al
#define MOV_R12B_BL mov r12b, bl
#define MOV_R12B_CL mov r12b, cl
#define MOV_R12B_DL mov r12b, dl
#define MOV_R12B_DIL mov r12b, dil
#define MOV_R12B_SIL mov r12b, sil
#define MOV_R12B_BPL mov r12b, bpl
#define MOV_R12B_SPL mov r12b, spl
#define MOV_R12B_R8B mov r12b, r8b
#define MOV_R12B_R9B mov r12b, r9b
#define MOV_R12B_R10B mov r12b, r10b
#define MOV_R12B_R11B mov r12b, r11b
#define MOV_R12B_R12B mov r12b, r12b
#define MOV_R12B_R13B mov r12b, r13b
#define MOV_R12B_R14B mov r12b, r14b
#define MOV_R12B_R15B mov r12b, r15b

#define MOV_R13B_AL mov r13b, al
#define MOV_R13B_BL mov r13b, bl
#define MOV_R13B_CL mov r13b, cl
#define MOV_R13B_DL mov r13b, dl
#define MOV_R13B_DIL mov r13b, dil
#define MOV_R13B_SIL mov r13b, sil
#define MOV_R13B_BPL mov r13b, bpl
#define MOV_R13B_SPL mov r13b, spl
#define MOV_R13B_R8B mov r13b, r8b
#define MOV_R13B_R9B mov r13b, r9b
#define MOV_R13B_R10B mov r13b, r10b
#define MOV_R13B_R11B mov r13b, r11b
#define MOV_R13B_R12B mov r13b, r12b
#define MOV_R13B_R13B mov r13b, r13b
#define MOV_R13B_R14B mov r13b, r14b
#define MOV_R13B_R15B mov r13b, r15b

#define MOV_R14B_AL mov r14b, al
#define MOV_R14B_BL mov r14b, bl
#define MOV_R14B_CL mov r14b, cl
#define MOV_R14B_DL mov r14b, dl
#define MOV_R14B_DIL mov r14b, dil
#define MOV_R14B_SIL mov r14b, sil
#define MOV_R14B_BPL mov r14b, bpl
#define MOV_R14B_SPL mov r14b, spl
#define MOV_R14B_R8B mov r14b, r8b
#define MOV_R14B_R9B mov r14b, r9b
#define MOV_R14B_R10B mov r14b, r10b
#define MOV_R14B_R11B mov r14b, r11b
#define MOV_R14B_R12B mov r14b, r12b
#define MOV_R14B_R13B mov r14b, r13b
#define MOV_R14B_R14B mov r14b, r14b
#define MOV_R14B_R15B mov r14b, r15b

#define MOV_R15B_AL mov r15b, al
#define MOV_R15B_BL mov r15b, al
#define MOV_R15B_CL mov r15b, al
#define MOV_R15B_DL mov r15b, al
#define MOV_R15B_DIL mov r15b, dil
#define MOV_R15B_SIL mov r15b, sil
#define MOV_R15B_BPL mov r15b, bpl
#define MOV_R15B_SPL mov r15b, spl
#define MOV_R15B_R8B mov r15b, r8b
#define MOV_R15B_R9B mov r15b, r9b
#define MOV_R15B_R10B mov r15b, r10b
#define MOV_R15B_R11B mov r15b, r11b
#define MOV_R15B_R12B mov r15b, r12b
#define MOV_R15B_R13B mov r15b, r13b
#define MOV_R15B_R14B mov r15b, r14b
#define MOV_R15B_R15B mov r15b, r15b

#define MOV_DIL_(VALUE) mov dil, VALUE
#define MOV_SIL_(VALUE) mov sil, VALUE
#define MOV_BPL_(VALUE) mov bpl, VALUE
#define MOV_SPL_(VALUE) mov spl, VALUE
#define MOV_R8B_(VALUE) mov r8b, VALUE
#define MOV_R9B_(VALUE) mov r9b, VALUE
#define MOV_R10B_(VALUE) mov r10b, VALUE
#define MOV_R11B_(VALUE) mov r11b, VALUE
#define MOV_R12B_(VALUE) mov r12b, VALUE
#define MOV_R13B_(VALUE) mov r13b, VALUE
#define MOV_R14B_(VALUE) mov r14b, VALUE
#define MOV_R15B_(VALUE) mov r15b, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 8-BIT REGISTERS [^] ************************* */

/* ************************ [v] 16-BIT REGISTERS [v] ************************ */
#define MOV_AX_AX mov ax, ax
#define MOV_AX_BX mov ax, bx
#define MOV_AX_CX mov ax, cx
#define MOV_AX_DX mov ax, dx
#define MOV_AX_DI mov ax, di
#define MOV_AX_SI mov ax, si
#define MOV_AX_BP mov ax, bp
#define MOV_AX_SP mov ax, sp

#define MOV_BX_AX mov bx, ax
#define MOV_BX_BX mov bx, bx
#define MOV_BX_CX mov bx, cx
#define MOV_BX_DX mov bx, dx
#define MOV_BX_DI mov bx, di
#define MOV_BX_SI mov bx, si
#define MOV_BX_BP mov bx, bp
#define MOV_BX_SP mov bx, sp

#define MOV_CX_AX mov cx, ax
#define MOV_CX_BX mov cx, bx
#define MOV_CX_CX mov cx, cx
#define MOV_CX_DX mov cx, dx
#define MOV_CX_DI mov cx, di
#define MOV_CX_SI mov cx, si
#define MOV_CX_BP mov cx, bp
#define MOV_CX_SP mov cx, sp

#define MOV_DX_AX mov dx, ax
#define MOV_DX_BX mov dx, bx
#define MOV_DX_CX mov dx, cx
#define MOV_DX_DX mov dx, dx
#define MOV_DX_DI mov dx, di
#define MOV_DX_SI mov dx, si
#define MOV_DX_BP mov dx, bp
#define MOV_DX_SP mov dx, sp

#define MOV_DI_AX mov di, ax
#define MOV_DI_BX mov di, bx
#define MOV_DI_CX mov di, cx
#define MOV_DI_DX mov di, dx
#define MOV_DI_DI mov di, di
#define MOV_DI_SI mov di, si
#define MOV_DI_BP mov di, bp
#define MOV_DI_SP mov di, sp

#define MOV_SI_AX mov si, ax
#define MOV_SI_BX mov si, bx
#define MOV_SI_CX mov si, cx
#define MOV_SI_DX mov si, dx
#define MOV_SI_DI mov si, di
#define MOV_SI_SI mov si, si
#define MOV_SI_BP mov si, bp
#define MOV_SI_SP mov si, sp

#define MOV_BP_AX mov bp, ax
#define MOV_BP_BX mov bp, bx
#define MOV_BP_CX mov bp, cx
#define MOV_BP_DX mov bp, dx
#define MOV_BP_DI mov bp, di
#define MOV_BP_SI mov bp, si
#define MOV_BP_BP mov bp, bp
#define MOV_BP_SP mov bp, sp

#define MOV_SP_AX mov sp, ax
#define MOV_SP_BX mov sp, bx
#define MOV_SP_CX mov sp, cx
#define MOV_SP_DX mov sp, dx
#define MOV_SP_DI mov sp, di
#define MOV_SP_SI mov sp, si
#define MOV_SP_BP mov sp, bp
#define MOV_SP_SP mov sp, sp

#define MOV_AX_(VALUE) mov ax, VALUE
#define MOV_BX_(VALUE) mov bx, VALUE
#define MOV_CX_(VALUE) mov cx, VALUE
#define MOV_DX_(VALUE) mov dx, VALUE
#define MOV_DI_(VALUE) mov di, VALUE
#define MOV_SI_(VALUE) mov si, VALUE
#define MOV_BP_(VALUE) mov bp, VALUE
#define MOV_SP_(VALUE) mov sp, VALUE

#ifdef __SYSTEM_64_BIT__
#define MOV_AX_R8W mov ax, r8w
#define MOV_AX_R9W mov ax, r9w
#define MOV_AX_R10W mov ax, r10w
#define MOV_AX_R11W mov ax, r11w
#define MOV_AX_R12W mov ax, r12w
#define MOV_AX_R13W mov ax, r13w
#define MOV_AX_R14W mov ax, r14w
#define MOV_AX_R15W mov ax, r15w

#define MOV_BX_R8W mov bx, r8w
#define MOV_BX_R9W mov bx, r9w
#define MOV_BX_R10W mov bx, r10w
#define MOV_BX_R11W mov bx, r11w
#define MOV_BX_R12W mov bx, r12w
#define MOV_BX_R13W mov bx, r13w
#define MOV_BX_R14W mov bx, r14w
#define MOV_BX_R15W mov bx, r15w

#define MOV_CX_R8W mov cx, r8w
#define MOV_CX_R9W mov cx, r9w
#define MOV_CX_R10W mov cx, r10w
#define MOV_CX_R11W mov cx, r11w
#define MOV_CX_R12W mov cx, r12w
#define MOV_CX_R13W mov cx, r13w
#define MOV_CX_R14W mov cx, r14w
#define MOV_CX_R15W mov cx, r15w

#define MOV_DX_R8W mov dx, r8w
#define MOV_DX_R9W mov dx, r9w
#define MOV_DX_R10W mov dx, r10w
#define MOV_DX_R11W mov dx, r11w
#define MOV_DX_R12W mov dx, r12w
#define MOV_DX_R13W mov dx, r13w
#define MOV_DX_R14W mov dx, r14w
#define MOV_DX_R15W mov dx, r15w

#define MOV_SI_R8W mov si, r8w
#define MOV_SI_R9W mov si, r9w
#define MOV_SI_R10W mov si, r10w
#define MOV_SI_R11W mov si, r11w
#define MOV_SI_R12W mov si, r12w
#define MOV_SI_R13W mov si, r13w
#define MOV_SI_R14W mov si, r14w
#define MOV_SI_R15W mov si, r15w

#define MOV_DI_R8W mov di, r8w
#define MOV_DI_R9W mov di, r9w
#define MOV_DI_R10W mov di, r10w
#define MOV_DI_R11W mov di, r11w
#define MOV_DI_R12W mov di, r12w
#define MOV_DI_R13W mov di, r13w
#define MOV_DI_R14W mov di, r14w
#define MOV_DI_R15W mov di, r15w

#define MOV_BP_R8W mov bp, r8w
#define MOV_BP_R9W mov bp, r9w
#define MOV_BP_R10W mov bp, r10w
#define MOV_BP_R11W mov bp, r11w
#define MOV_BP_R12W mov bp, r12w
#define MOV_BP_R13W mov bp, r13w
#define MOV_BP_R14W mov bp, r14w
#define MOV_BP_R15W mov bp, r15w

#define MOV_SP_R8W mov sp, r8w
#define MOV_SP_R9W mov sp, r9w
#define MOV_SP_R10W mov sp, r10w
#define MOV_SP_R11W mov sp, r11w
#define MOV_SP_R12W mov sp, r12w
#define MOV_SP_R13W mov sp, r13w
#define MOV_SP_R14W mov sp, r14w
#define MOV_SP_R15W mov sp, r15w

#define MOV_R8W_AX mov r8w, ax
#define MOV_R8W_BX mov r8w, bx
#define MOV_R8W_CX mov r8w, cx
#define MOV_R8W_DX mov r8w, dx
#define MOV_R8W_SI mov r8w, si
#define MOV_R8W_DI mov r8w, di
#define MOV_R8W_BP mov r8w, bp
#define MOV_R8W_SP mov r8w, sp
#define MOV_R8W_R8W mov r8w, r8w
#define MOV_R8W_R9W mov r8w, r9w
#define MOV_R8W_R10W mov r8w, r10w
#define MOV_R8W_R11W mov r8w, r11w
#define MOV_R8W_R12W mov r8w, r12w
#define MOV_R8W_R13W mov r8w, r13w
#define MOV_R8W_R14W mov r8w, r14w
#define MOV_R8W_R15W mov r8w, r15w

#define MOV_R9W_AX mov r9w, ax
#define MOV_R9W_BX mov r9w, bx
#define MOV_R9W_CX mov r9w, cx
#define MOV_R9W_DX mov r9w, dx
#define MOV_R9W_SI mov r9w, si
#define MOV_R9W_DI mov r9w, di
#define MOV_R9W_BP mov r9w, bp
#define MOV_R9W_SP mov r9w, sp
#define MOV_R9W_R8W mov r9w, r8w
#define MOV_R9W_R9W mov r9w, r9w
#define MOV_R9W_R10W mov r9w, r10w
#define MOV_R9W_R11W mov r9w, r11w
#define MOV_R9W_R12W mov r9w, r12w
#define MOV_R9W_R13W mov r9w, r13w
#define MOV_R9W_R14W mov r9w, r14w
#define MOV_R9W_R15W mov r9w, r15w

#define MOV_R10W_AX mov r10w, ax
#define MOV_R10W_BX mov r10w, bx
#define MOV_R10W_CX mov r10w, cx
#define MOV_R10W_DX mov r10w, dx
#define MOV_R10W_SI mov r10w, si
#define MOV_R10W_DI mov r10w, di
#define MOV_R10W_BP mov r10w, bp
#define MOV_R10W_SP mov r10w, sp
#define MOV_R10W_R8W mov r10w, r8w
#define MOV_R10W_R9W mov r10w, r9w
#define MOV_R10W_R10W mov r10w, r10w
#define MOV_R10W_R11W mov r10w, r11w
#define MOV_R10W_R12W mov r10w, r12w
#define MOV_R10W_R13W mov r10w, r13w
#define MOV_R10W_R14W mov r10w, r14w
#define MOV_R10W_R15W mov r10w, r15w

#define MOV_R11W_AX mov r11w, ax
#define MOV_R11W_BX mov r11w, bx
#define MOV_R11W_CX mov r11w, cx
#define MOV_R11W_DX mov r11w, dx
#define MOV_R11W_SI mov r11w, si
#define MOV_R11W_DI mov r11w, di
#define MOV_R11W_BP mov r11w, bp
#define MOV_R11W_SP mov r11w, sp
#define MOV_R11W_R8W mov r11w, r8w
#define MOV_R11W_R9W mov r11w, r9w
#define MOV_R11W_R10W mov r11w, r10w
#define MOV_R11W_R11W mov r11w, r11w
#define MOV_R11W_R12W mov r11w, r12w
#define MOV_R11W_R13W mov r11w, r13w
#define MOV_R11W_R14W mov r11w, r14w
#define MOV_R11W_R15W mov r11w, r15w

#define MOV_R12W_AX mov r12w, ax
#define MOV_R12W_BX mov r12w, bx
#define MOV_R12W_CX mov r12w, cx
#define MOV_R12W_DX mov r12w, dx
#define MOV_R12W_SI mov r12w, si
#define MOV_R12W_DI mov r12w, di
#define MOV_R12W_BP mov r12w, bp
#define MOV_R12W_SP mov r12w, sp
#define MOV_R12W_R8W mov r12w, r8w
#define MOV_R12W_R9W mov r12w, r9w
#define MOV_R12W_R10W mov r12w, r10w
#define MOV_R12W_R11W mov r12w, r11w
#define MOV_R12W_R12W mov r12w, r12w
#define MOV_R12W_R13W mov r12w, r13w
#define MOV_R12W_R14W mov r12w, r14w
#define MOV_R12W_R15W mov r12w, r15w

#define MOV_R13W_AX mov r13w, ax
#define MOV_R13W_BX mov r13w, bx
#define MOV_R13W_CX mov r13w, cx
#define MOV_R13W_DX mov r13w, dx
#define MOV_R13W_SI mov r13w, si
#define MOV_R13W_DI mov r13w, di
#define MOV_R13W_BP mov r13w, bp
#define MOV_R13W_SP mov r13w, sp
#define MOV_R13W_R8W mov r13w, r8w
#define MOV_R13W_R9W mov r13w, r9w
#define MOV_R13W_R10W mov r13w, r10w
#define MOV_R13W_R11W mov r13w, r11w
#define MOV_R13W_R12W mov r13w, r12w
#define MOV_R13W_R13W mov r13w, r13w
#define MOV_R13W_R14W mov r13w, r14w
#define MOV_R13W_R15W mov r13w, r15w

#define MOV_R14W_AX mov r14w, ax
#define MOV_R14W_BX mov r14w, bx
#define MOV_R14W_CX mov r14w, cx
#define MOV_R14W_DX mov r14w, dx
#define MOV_R14W_SI mov r14w, si
#define MOV_R14W_DI mov r14w, di
#define MOV_R14W_BP mov r14w, bp
#define MOV_R14W_SP mov r14w, sp
#define MOV_R14W_R8W mov r14w, r8w
#define MOV_R14W_R9W mov r14w, r9w
#define MOV_R14W_R10W mov r14w, r10w
#define MOV_R14W_R11W mov r14w, r11w
#define MOV_R14W_R12W mov r14w, r12w
#define MOV_R14W_R13W mov r14w, r13w
#define MOV_R14W_R14W mov r14w, r14w
#define MOV_R14W_R15W mov r14w, r15w

#define MOV_R15W_AX mov r15w, ax
#define MOV_R15W_BX mov r15w, bx
#define MOV_R15W_CX mov r15w, cx
#define MOV_R15W_DX mov r15w, dx
#define MOV_R15W_SI mov r15w, si
#define MOV_R15W_DI mov r15w, di
#define MOV_R15W_BP mov r15w, bp
#define MOV_R15W_SP mov r15w, sp
#define MOV_R15W_R8W mov r15w, r8w
#define MOV_R15W_R9W mov r15w, r9w
#define MOV_R15W_R10W mov r15w, r10w
#define MOV_R15W_R11W mov r15w, r11w
#define MOV_R15W_R12W mov r15w, r12w
#define MOV_R15W_R13W mov r15w, r13w
#define MOV_R15W_R14W mov r15w, r14w
#define MOV_R15W_R15W mov r15w, r15w

#define MOV_R8W_(VALUE) mov r8w, VALUE
#define MOV_R9W_(VALUE) mov r9w, VALUE
#define MOV_R10W_(VALUE) mov r10w, VALUE
#define MOV_R11W_(VALUE) mov r11w, VALUE
#define MOV_R12W_(VALUE) mov r12w, VALUE
#define MOV_R13W_(VALUE) mov r13w, VALUE
#define MOV_R14W_(VALUE) mov r14w, VALUE
#define MOV_R15W_(VALUE) mov r15w, VALUE
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT REGISTERS [^] ************************ */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#define MOV_AL_FROM_PTR_(VALUE) mov al, byte ptr [VALUE]
#define MOV_BL_FROM_PTR_(VALUE) mov bl, byte ptr [VALUE]
#define MOV_CL_FROM_PTR_(VALUE) mov cl, byte ptr [VALUE]
#define MOV_DL_FROM_PTR_(VALUE) mov dl, byte ptr [VALUE]

#define MOV_AL_TO_PTR_(VALUE) mov byte ptr [VALUE], al
#define MOV_BL_TO_PTR_(VALUE) mov byte ptr [VALUE], bl
#define MOV_CL_TO_PTR_(VALUE) mov byte ptr [VALUE], cl
#define MOV_DL_TO_PTR_(VALUE) mov byte ptr [VALUE], dl

#ifndef __SYSTEM_64_BIT__
#define MOV_AL_FROM_PTR_BP_(VALUE) mov al, byte ptr [VALUE + bp]
#define MOV_BL_FROM_PTR_BP_(VALUE) mov bl, byte ptr [VALUE + bp]
#define MOV_CL_FROM_PTR_BP_(VALUE) mov cl, byte ptr [VALUE + bp]
#define MOV_DL_FROM_PTR_BP_(VALUE) mov dl, byte ptr [VALUE + bp]

#define MOV_AL_TO_PTR_BP_(VALUE) mov byte ptr [VALUE + bp], al
#define MOV_BL_TO_PTR_BP_(VALUE) mov byte ptr [VALUE + bp], bl
#define MOV_CL_TO_PTR_BP_(VALUE) mov byte ptr [VALUE + bp], cl
#define MOV_DL_TO_PTR_BP_(VALUE) mov byte ptr [VALUE + bp], dl
#endif /* !__SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#define MOV_AX_FROM_PTR_(VALUE) mov ax, word ptr [VALUE]
#define MOV_BX_FROM_PTR_(VALUE) mov bx, word ptr [VALUE]
#define MOV_CX_FROM_PTR_(VALUE) mov cx, word ptr [VALUE]
#define MOV_DX_FROM_PTR_(VALUE) mov dx, word ptr [VALUE]
#define MOV_SI_FROM_PTR_(VALUE) mov si, word ptr [VALUE]
#define MOV_DI_FROM_PTR_(VALUE) mov di, word ptr [VALUE]
#define MOV_BP_FROM_PTR_(VALUE) mov bp, word ptr [VALUE]
#define MOV_SP_FROM_PTR_(VALUE) mov sp, word ptr [VALUE]

#define MOV_AX_TO_PTR_(VALUE) mov word ptr [VALUE], ax
#define MOV_BX_TO_PTR_(VALUE) mov word ptr [VALUE], bx
#define MOV_CX_TO_PTR_(VALUE) mov word ptr [VALUE], cx
#define MOV_DX_TO_PTR_(VALUE) mov word ptr [VALUE], dx
#define MOV_SI_TO_PTR_(VALUE) mov word ptr [VALUE], si
#define MOV_DI_TO_PTR_(VALUE) mov word ptr [VALUE], di
#define MOV_BP_TO_PTR_(VALUE) mov word ptr [VALUE], bp
#define MOV_SP_TO_PTR_(VALUE) mov word ptr [VALUE], sp

#ifndef __SYSTEM_64_BIT__
#define MOV_AX_FROM_PTR_BP_(VALUE) mov ax, word ptr [VALUE + bp]
#define MOV_BX_FROM_PTR_BP_(VALUE) mov bx, word ptr [VALUE + bp]
#define MOV_CX_FROM_PTR_BP_(VALUE) mov cx, word ptr [VALUE + bp]
#define MOV_DX_FROM_PTR_BP_(VALUE) mov dx, word ptr [VALUE + bp]
#define MOV_SI_FROM_PTR_BP_(VALUE) mov si, word ptr [VALUE + bp]
#define MOV_DI_FROM_PTR_BP_(VALUE) mov di, word ptr [VALUE + bp]
#define MOV_BP_FROM_PTR_BP_(VALUE) mov bp, word ptr [VALUE + bp]
#define MOV_SP_FROM_PTR_BP_(VALUE) mov sp, word ptr [VALUE + bp]

#define MOV_AX_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], ax
#define MOV_BX_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], bx
#define MOV_CX_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], cx
#define MOV_DX_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], dx
#define MOV_SI_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], si
#define MOV_DI_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], di
#define MOV_BP_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], bp
#define MOV_SP_TO_PTR_BP_(VALUE) mov word ptr [VALUE + bp], sp
#endif /* !__SYSTEM_64_BIT__ */
/* ************************* [^] 16-BIT MEMORY [^] ************************** */

/* ************************* [v] 8-BIT SEGMENTS [v] ************************* */
#define MOV_AL_FROM_PTR_FS_(VALUE) mov al, byte ptr fs:[VALUE]
#define MOV_BL_FROM_PTR_FS_(VALUE) mov bl, byte ptr fs:[VALUE]
#define MOV_CL_FROM_PTR_FS_(VALUE) mov cl, byte ptr fs:[VALUE]
#define MOV_DL_FROM_PTR_FS_(VALUE) mov dl, byte ptr fs:[VALUE]

#define MOV_AL_FROM_PTR_GS_(VALUE) mov al, byte ptr gs:[VALUE]
#define MOV_BL_FROM_PTR_GS_(VALUE) mov bl, byte ptr gs:[VALUE]
#define MOV_CL_FROM_PTR_GS_(VALUE) mov cl, byte ptr gs:[VALUE]
#define MOV_DL_FROM_PTR_GS_(VALUE) mov dl, byte ptr gs:[VALUE]

#define MOV_AL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], al
#define MOV_BL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], bl
#define MOV_CL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], cl
#define MOV_DL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], dl

#define MOV_AL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], al
#define MOV_BL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], bl
#define MOV_CL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], cl
#define MOV_DL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], dl

#ifdef __SYSTEM_64_BIT__
#define MOV_SIL_FROM_PTR_FS_(VALUE) mov sil, byte ptr fs:[VALUE]
#define MOV_DIL_FROM_PTR_FS_(VALUE) mov dil, byte ptr fs:[VALUE]
#define MOV_BPL_FROM_PTR_FS_(VALUE) mov bpl, byte ptr fs:[VALUE]
#define MOV_SPL_FROM_PTR_FS_(VALUE) mov spl, byte ptr fs:[VALUE]

#define MOV_R8B_FROM_PTR_FS_(VALUE) mov r8b, byte ptr fs:[VALUE]
#define MOV_R9B_FROM_PTR_FS_(VALUE) mov r9b, byte ptr fs:[VALUE]
#define MOV_R10B_FROM_PTR_FS_(VALUE) mov r10b, byte ptr fs:[VALUE]
#define MOV_R11B_FROM_PTR_FS_(VALUE) mov r11b, byte ptr fs:[VALUE]
#define MOV_R12B_FROM_PTR_FS_(VALUE) mov r12b, byte ptr fs:[VALUE]
#define MOV_R13B_FROM_PTR_FS_(VALUE) mov r13b, byte ptr fs:[VALUE]
#define MOV_R14B_FROM_PTR_FS_(VALUE) mov r14b, byte ptr fs:[VALUE]
#define MOV_R15B_FROM_PTR_FS_(VALUE) mov r15b, byte ptr fs:[VALUE]

#define MOV_SIL_FROM_PTR_GS_(VALUE) mov sil, byte ptr gs:[VALUE]
#define MOV_DIL_FROM_PTR_GS_(VALUE) mov dil, byte ptr gs:[VALUE]
#define MOV_BPL_FROM_PTR_GS_(VALUE) mov bpl, byte ptr gs:[VALUE]
#define MOV_SPL_FROM_PTR_GS_(VALUE) mov spl, byte ptr gs:[VALUE]

#define MOV_R8B_FROM_PTR_GS_(VALUE) mov r8b, byte ptr gs:[VALUE]
#define MOV_R9B_FROM_PTR_GS_(VALUE) mov r9b, byte ptr gs:[VALUE]
#define MOV_R10B_FROM_PTR_GS_(VALUE) mov r10b, byte ptr gs:[VALUE]
#define MOV_R11B_FROM_PTR_GS_(VALUE) mov r11b, byte ptr gs:[VALUE]
#define MOV_R12B_FROM_PTR_GS_(VALUE) mov r12b, byte ptr gs:[VALUE]
#define MOV_R13B_FROM_PTR_GS_(VALUE) mov r13b, byte ptr gs:[VALUE]
#define MOV_R14B_FROM_PTR_GS_(VALUE) mov r14b, byte ptr gs:[VALUE]
#define MOV_R15B_FROM_PTR_GS_(VALUE) mov r15b, byte ptr gs:[VALUE]

#define MOV_SIL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], sil
#define MOV_DIL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], dil
#define MOV_BPL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], bpl
#define MOV_SPL_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], spl

#define MOV_R8B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r8b
#define MOV_R9B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r9b
#define MOV_R10B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r10b
#define MOV_R11B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r11b
#define MOV_R12B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r12b
#define MOV_R13B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r13b
#define MOV_R14B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r14b
#define MOV_R15B_TO_PTR_FS_(VALUE) mov byte ptr fs:[VALUE], r15b

#define MOV_SIL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], sil
#define MOV_DIL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], dil
#define MOV_BPL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], bpl
#define MOV_SPL_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], spl

#define MOV_R8B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r8b
#define MOV_R9B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r9b
#define MOV_R10B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r10b
#define MOV_R11B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r11b
#define MOV_R12B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r12b
#define MOV_R13B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r13b
#define MOV_R14B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r14b
#define MOV_R15B_TO_PTR_GS_(VALUE) mov byte ptr gs:[VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 8-BIT SEGMENTS [^] ************************* */

/* ************************ [v] 16-BIT SEGMENTS [v] ************************* */
#define MOV_AX_FROM_PTR_FS_(VALUE) mov ax, word ptr fs:[VALUE]
#define MOV_BX_FROM_PTR_FS_(VALUE) mov bx, word ptr fs:[VALUE]
#define MOV_CX_FROM_PTR_FS_(VALUE) mov cx, word ptr fs:[VALUE]
#define MOV_DX_FROM_PTR_FS_(VALUE) mov dx, word ptr fs:[VALUE]
#define MOV_SI_FROM_PTR_FS_(VALUE) mov si, word ptr fs:[VALUE]
#define MOV_DI_FROM_PTR_FS_(VALUE) mov di, word ptr fs:[VALUE]
#define MOV_BP_FROM_PTR_FS_(VALUE) mov bp, word ptr fs:[VALUE]
#define MOV_SP_FROM_PTR_FS_(VALUE) mov sp, word ptr fs:[VALUE]

#define MOV_AX_FROM_PTR_GS_(VALUE) mov ax, word ptr gs:[VALUE]
#define MOV_BX_FROM_PTR_GS_(VALUE) mov bx, word ptr gs:[VALUE]
#define MOV_CX_FROM_PTR_GS_(VALUE) mov cx, word ptr gs:[VALUE]
#define MOV_DX_FROM_PTR_GS_(VALUE) mov dx, word ptr gs:[VALUE]
#define MOV_SI_FROM_PTR_GS_(VALUE) mov si, word ptr gs:[VALUE]
#define MOV_DI_FROM_PTR_GS_(VALUE) mov di, word ptr gs:[VALUE]
#define MOV_BP_FROM_PTR_GS_(VALUE) mov bp, word ptr gs:[VALUE]
#define MOV_SP_FROM_PTR_GS_(VALUE) mov sp, word ptr gs:[VALUE]

#define MOV_AX_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], ax
#define MOV_BX_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], bx
#define MOV_CX_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], cx
#define MOV_DX_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], dx
#define MOV_SI_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], si
#define MOV_DI_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], di
#define MOV_BP_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], bp
#define MOV_SP_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], sp

#define MOV_AX_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], ax
#define MOV_BX_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], bx
#define MOV_CX_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], cx
#define MOV_DX_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], dx
#define MOV_SI_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], si
#define MOV_DI_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], di
#define MOV_BP_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], bp
#define MOV_SP_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], sp

#ifdef __SYSTEM_64_BIT__
#define MOV_R8W_FROM_PTR_FS_(VALUE) mov r8w, word ptr fs:[VALUE]
#define MOV_R9W_FROM_PTR_FS_(VALUE) mov r9w, word ptr fs:[VALUE]
#define MOV_R10W_FROM_PTR_FS_(VALUE) mov r10w, word ptr fs:[VALUE]
#define MOV_R11W_FROM_PTR_FS_(VALUE) mov r11w, word ptr fs:[VALUE]
#define MOV_R12W_FROM_PTR_FS_(VALUE) mov r12w, word ptr fs:[VALUE]
#define MOV_R13W_FROM_PTR_FS_(VALUE) mov r13w, word ptr fs:[VALUE]
#define MOV_R14W_FROM_PTR_FS_(VALUE) mov r14w, word ptr fs:[VALUE]
#define MOV_R15W_FROM_PTR_FS_(VALUE) mov r15w, word ptr fs:[VALUE]

#define MOV_R8W_FROM_PTR_GS_(VALUE) mov r8w, word ptr gs:[VALUE]
#define MOV_R9W_FROM_PTR_GS_(VALUE) mov r9w, word ptr gs:[VALUE]
#define MOV_R10W_FROM_PTR_GS_(VALUE) mov r10w, word ptr gs:[VALUE]
#define MOV_R11W_FROM_PTR_GS_(VALUE) mov r11w, word ptr gs:[VALUE]
#define MOV_R12W_FROM_PTR_GS_(VALUE) mov r12w, word ptr gs:[VALUE]
#define MOV_R13W_FROM_PTR_GS_(VALUE) mov r13w, word ptr gs:[VALUE]
#define MOV_R14W_FROM_PTR_GS_(VALUE) mov r14w, word ptr gs:[VALUE]
#define MOV_R15W_FROM_PTR_GS_(VALUE) mov r15w, word ptr gs:[VALUE]

#define MOV_R8W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r8w
#define MOV_R9W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r9w
#define MOV_R10W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r10w
#define MOV_R11W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r11w
#define MOV_R12W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r12w
#define MOV_R13W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r13w
#define MOV_R14W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r14w
#define MOV_R15W_TO_PTR_FS_(VALUE) mov word ptr fs:[VALUE], r15w

#define MOV_R8W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r8w
#define MOV_R9W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r9w
#define MOV_R10W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r10w
#define MOV_R11W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r11w
#define MOV_R12W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r12w
#define MOV_R13W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r13w
#define MOV_R14W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r14w
#define MOV_R15W_TO_PTR_GS_(VALUE) mov word ptr gs:[VALUE], r15w
#endif /* __SYSTEM_64_BIT__ */
/* ************************ [^] 16-BIT SEGMENTS [^] ************************* */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
