#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define MOV_AL_FROM_PTR_(VALUE) mov al, byte ptr [VALUE]
#define MOV_BL_FROM_PTR_(VALUE) mov bl, byte ptr [VALUE]
#define MOV_CL_FROM_PTR_(VALUE) mov cl, byte ptr [VALUE]
#define MOV_DL_FROM_PTR_(VALUE) mov dl, byte ptr [VALUE]

#define MOV_AL_TO_PTR_(VALUE) mov byte ptr [VALUE], al
#define MOV_BL_TO_PTR_(VALUE) mov byte ptr [VALUE], bl
#define MOV_CL_TO_PTR_(VALUE) mov byte ptr [VALUE], cl
#define MOV_DL_TO_PTR_(VALUE) mov byte ptr [VALUE], dl

#define MOV_AL_FROM_PTR_BX mov al, byte ptr [bx]
#define MOV_AL_FROM_PTR_BP mov al, byte ptr [bp]
#define MOV_AL_FROM_PTR_SI mov al, byte ptr [si]
#define MOV_AL_FROM_PTR_DI mov al, byte ptr [di]

#define MOV_BL_FROM_PTR_BX mov bl, byte ptr [bx]
#define MOV_BL_FROM_PTR_BP mov bl, byte ptr [bp]
#define MOV_BL_FROM_PTR_SI mov bl, byte ptr [si]
#define MOV_BL_FROM_PTR_DI mov bl, byte ptr [di]

#define MOV_CL_FROM_PTR_BX mov cl, byte ptr [bx]
#define MOV_CL_FROM_PTR_BP mov cl, byte ptr [bp]
#define MOV_CL_FROM_PTR_SI mov cl, byte ptr [si]
#define MOV_CL_FROM_PTR_DI mov cl, byte ptr [di]

#define MOV_DL_FROM_PTR_BX mov dl, byte ptr [bx]
#define MOV_DL_FROM_PTR_BP mov dl, byte ptr [bp]
#define MOV_DL_FROM_PTR_SI mov dl, byte ptr [si]
#define MOV_DL_FROM_PTR_DI mov dl, byte ptr [di]

#define MOV_AL_TO_PTR_BX mov byte ptr [bx], al
#define MOV_AL_TO_PTR_BP mov byte ptr [bp], al
#define MOV_AL_TO_PTR_SI mov byte ptr [si], al
#define MOV_AL_TO_PTR_DI mov byte ptr [di], al

#define MOV_BL_TO_PTR_BX mov byte ptr [bx], bl
#define MOV_BL_TO_PTR_BP mov byte ptr [bp], bl
#define MOV_BL_TO_PTR_SI mov byte ptr [si], bl
#define MOV_BL_TO_PTR_DI mov byte ptr [di], bl

#define MOV_CL_TO_PTR_BX mov byte ptr [bx], cl
#define MOV_CL_TO_PTR_BP mov byte ptr [bp], cl
#define MOV_CL_TO_PTR_SI mov byte ptr [si], cl
#define MOV_CL_TO_PTR_DI mov byte ptr [di], cl

#define MOV_DL_TO_PTR_BX mov byte ptr [bx], dl
#define MOV_DL_TO_PTR_BP mov byte ptr [bp], dl
#define MOV_DL_TO_PTR_SI mov byte ptr [si], dl
#define MOV_DL_TO_PTR_DI mov byte ptr [di], dl

#define MOV_AL_FROM_PTR_BX_(VALUE) mov al, byte ptr [bx + VALUE]
#define MOV_AL_FROM_PTR_BP_(VALUE) mov al, byte ptr [bp + VALUE]
#define MOV_AL_FROM_PTR_SI_(VALUE) mov al, byte ptr [si + VALUE]
#define MOV_AL_FROM_PTR_DI_(VALUE) mov al, byte ptr [di + VALUE]

#define MOV_BL_FROM_PTR_BX_(VALUE) mov bl, byte ptr [bx + VALUE]
#define MOV_BL_FROM_PTR_BP_(VALUE) mov bl, byte ptr [bp + VALUE]
#define MOV_BL_FROM_PTR_SI_(VALUE) mov bl, byte ptr [si + VALUE]
#define MOV_BL_FROM_PTR_DI_(VALUE) mov bl, byte ptr [di + VALUE]

#define MOV_CL_FROM_PTR_BX_(VALUE) mov cl, byte ptr [bx + VALUE]
#define MOV_CL_FROM_PTR_BP_(VALUE) mov cl, byte ptr [bp + VALUE]
#define MOV_CL_FROM_PTR_SI_(VALUE) mov cl, byte ptr [si + VALUE]
#define MOV_CL_FROM_PTR_DI_(VALUE) mov cl, byte ptr [di + VALUE]

#define MOV_DL_FROM_PTR_BX_(VALUE) mov dl, byte ptr [bx + VALUE]
#define MOV_DL_FROM_PTR_BP_(VALUE) mov dl, byte ptr [bp + VALUE]
#define MOV_DL_FROM_PTR_SI_(VALUE) mov dl, byte ptr [si + VALUE]
#define MOV_DL_FROM_PTR_DI_(VALUE) mov dl, byte ptr [di + VALUE]

#define MOV_AL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], al
#define MOV_AL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], al
#define MOV_AL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], al
#define MOV_AL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], al

#define MOV_BL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], bl
#define MOV_BL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], bl
#define MOV_BL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], bl
#define MOV_BL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], bl

#define MOV_CL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], cl
#define MOV_CL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], cl
#define MOV_CL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], cl
#define MOV_CL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], cl

#define MOV_DL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], dl
#define MOV_DL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], dl
#define MOV_DL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], dl
#define MOV_DL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define MOV_AL_FROM_PTR_(VALUE) mov al, byte ptr [VALUE]
#define MOV_BL_FROM_PTR_(VALUE) mov bl, byte ptr [VALUE]
#define MOV_CL_FROM_PTR_(VALUE) mov cl, byte ptr [VALUE]
#define MOV_DL_FROM_PTR_(VALUE) mov dl, byte ptr [VALUE]

#define MOV_AL_TO_PTR_(VALUE) mov byte ptr [VALUE], al
#define MOV_BL_TO_PTR_(VALUE) mov byte ptr [VALUE], bl
#define MOV_CL_TO_PTR_(VALUE) mov byte ptr [VALUE], cl
#define MOV_DL_TO_PTR_(VALUE) mov byte ptr [VALUE], dl

#define MOV_AL_FROM_PTR_EAX mov al, byte ptr [eax]
#define MOV_AL_FROM_PTR_EBX mov al, byte ptr [ebx]
#define MOV_AL_FROM_PTR_ECX mov al, byte ptr [ecx]
#define MOV_AL_FROM_PTR_EDX mov al, byte ptr [edx]
#define MOV_AL_FROM_PTR_EDI mov al, byte ptr [edi]
#define MOV_AL_FROM_PTR_ESI mov al, byte ptr [esi]
#define MOV_AL_FROM_PTR_EBP mov al, byte ptr [ebp]
#define MOV_AL_FROM_PTR_ESP mov al, byte ptr [esp]
#define MOV_AL_FROM_PTR_BX mov al, byte ptr [bx]
#define MOV_AL_FROM_PTR_BP mov al, byte ptr [bp]
#define MOV_AL_FROM_PTR_SI mov al, byte ptr [si]
#define MOV_AL_FROM_PTR_DI mov al, byte ptr [di]

#define MOV_BL_FROM_PTR_EAX mov bl, byte ptr [eax]
#define MOV_BL_FROM_PTR_EBX mov bl, byte ptr [ebx]
#define MOV_BL_FROM_PTR_ECX mov bl, byte ptr [ecx]
#define MOV_BL_FROM_PTR_EDX mov bl, byte ptr [edx]
#define MOV_BL_FROM_PTR_EDI mov bl, byte ptr [edi]
#define MOV_BL_FROM_PTR_ESI mov bl, byte ptr [esi]
#define MOV_BL_FROM_PTR_EBP mov bl, byte ptr [ebp]
#define MOV_BL_FROM_PTR_ESP mov bl, byte ptr [esp]
#define MOV_BL_FROM_PTR_BX mov bl, byte ptr [bx]
#define MOV_BL_FROM_PTR_BP mov bl, byte ptr [bp]
#define MOV_BL_FROM_PTR_SI mov bl, byte ptr [si]
#define MOV_BL_FROM_PTR_DI mov bl, byte ptr [di]

#define MOV_CL_FROM_PTR_EAX mov cl, byte ptr [eax]
#define MOV_CL_FROM_PTR_EBX mov cl, byte ptr [ebx]
#define MOV_CL_FROM_PTR_ECX mov cl, byte ptr [ecx]
#define MOV_CL_FROM_PTR_EDX mov cl, byte ptr [edx]
#define MOV_CL_FROM_PTR_EDI mov cl, byte ptr [edi]
#define MOV_CL_FROM_PTR_ESI mov cl, byte ptr [esi]
#define MOV_CL_FROM_PTR_EBP mov cl, byte ptr [ebp]
#define MOV_CL_FROM_PTR_ESP mov cl, byte ptr [esp]
#define MOV_CL_FROM_PTR_BX mov cl, byte ptr [bx]
#define MOV_CL_FROM_PTR_BP mov cl, byte ptr [bp]
#define MOV_CL_FROM_PTR_SI mov cl, byte ptr [si]
#define MOV_CL_FROM_PTR_DI mov cl, byte ptr [di]

#define MOV_DL_FROM_PTR_EAX mov dl, byte ptr [eax]
#define MOV_DL_FROM_PTR_EBX mov dl, byte ptr [ebx]
#define MOV_DL_FROM_PTR_ECX mov dl, byte ptr [ecx]
#define MOV_DL_FROM_PTR_EDX mov dl, byte ptr [edx]
#define MOV_DL_FROM_PTR_EDI mov dl, byte ptr [edi]
#define MOV_DL_FROM_PTR_ESI mov dl, byte ptr [esi]
#define MOV_DL_FROM_PTR_EBP mov dl, byte ptr [ebp]
#define MOV_DL_FROM_PTR_ESP mov dl, byte ptr [esp]
#define MOV_DL_FROM_PTR_BX mov dl, byte ptr [bx]
#define MOV_DL_FROM_PTR_BP mov dl, byte ptr [bp]
#define MOV_DL_FROM_PTR_SI mov dl, byte ptr [si]
#define MOV_DL_FROM_PTR_DI mov dl, byte ptr [di]

#define MOV_AL_TO_PTR_EAX mov byte ptr [eax], al
#define MOV_AL_TO_PTR_EBX mov byte ptr [ebx], al
#define MOV_AL_TO_PTR_ECX mov byte ptr [ecx], al
#define MOV_AL_TO_PTR_EDX mov byte ptr [edx], al
#define MOV_AL_TO_PTR_EDI mov byte ptr [edi], al
#define MOV_AL_TO_PTR_ESI mov byte ptr [esi], al
#define MOV_AL_TO_PTR_EBP mov byte ptr [ebp], al
#define MOV_AL_TO_PTR_ESP mov byte ptr [esp], al
#define MOV_AL_TO_PTR_BX mov byte ptr [bx], al
#define MOV_AL_TO_PTR_BP mov byte ptr [bp], al
#define MOV_AL_TO_PTR_SI mov byte ptr [si], al
#define MOV_AL_TO_PTR_DI mov byte ptr [di], al

#define MOV_BL_TO_PTR_EAX mov byte ptr [eax], bl
#define MOV_BL_TO_PTR_EBX mov byte ptr [ebx], bl
#define MOV_BL_TO_PTR_ECX mov byte ptr [ecx], bl
#define MOV_BL_TO_PTR_EDX mov byte ptr [edx], bl
#define MOV_BL_TO_PTR_EDI mov byte ptr [edi], bl
#define MOV_BL_TO_PTR_ESI mov byte ptr [esi], bl
#define MOV_BL_TO_PTR_EBP mov byte ptr [ebp], bl
#define MOV_BL_TO_PTR_ESP mov byte ptr [esp], bl
#define MOV_BL_TO_PTR_BX mov byte ptr [bx], bl
#define MOV_BL_TO_PTR_BP mov byte ptr [bp], bl
#define MOV_BL_TO_PTR_SI mov byte ptr [si], bl
#define MOV_BL_TO_PTR_DI mov byte ptr [di], bl

#define MOV_CL_TO_PTR_EAX mov byte ptr [eax], cl
#define MOV_CL_TO_PTR_EBX mov byte ptr [ebx], cl
#define MOV_CL_TO_PTR_ECX mov byte ptr [ecx], cl
#define MOV_CL_TO_PTR_EDX mov byte ptr [edx], cl
#define MOV_CL_TO_PTR_EDI mov byte ptr [edi], cl
#define MOV_CL_TO_PTR_ESI mov byte ptr [esi], cl
#define MOV_CL_TO_PTR_EBP mov byte ptr [ebp], cl
#define MOV_CL_TO_PTR_ESP mov byte ptr [esp], cl
#define MOV_CL_TO_PTR_BX mov byte ptr [bx], cl
#define MOV_CL_TO_PTR_BP mov byte ptr [bp], cl
#define MOV_CL_TO_PTR_SI mov byte ptr [si], cl
#define MOV_CL_TO_PTR_DI mov byte ptr [di], cl

#define MOV_DL_TO_PTR_EAX mov byte ptr [eax], dl
#define MOV_DL_TO_PTR_EBX mov byte ptr [ebx], dl
#define MOV_DL_TO_PTR_ECX mov byte ptr [ecx], dl
#define MOV_DL_TO_PTR_EDX mov byte ptr [edx], dl
#define MOV_DL_TO_PTR_EDI mov byte ptr [edi], dl
#define MOV_DL_TO_PTR_ESI mov byte ptr [esi], dl
#define MOV_DL_TO_PTR_EBP mov byte ptr [ebp], dl
#define MOV_DL_TO_PTR_ESP mov byte ptr [esp], dl
#define MOV_DL_TO_PTR_BX mov byte ptr [bx], dl
#define MOV_DL_TO_PTR_BP mov byte ptr [bp], dl
#define MOV_DL_TO_PTR_SI mov byte ptr [si], dl
#define MOV_DL_TO_PTR_DI mov byte ptr [di], dl

#define MOV_AL_FROM_PTR_EAX_(VALUE) mov al, byte ptr [eax + VALUE]
#define MOV_AL_FROM_PTR_EBX_(VALUE) mov al, byte ptr [ebx + VALUE]
#define MOV_AL_FROM_PTR_ECX_(VALUE) mov al, byte ptr [ecx + VALUE]
#define MOV_AL_FROM_PTR_EDX_(VALUE) mov al, byte ptr [edx + VALUE]
#define MOV_AL_FROM_PTR_EDI_(VALUE) mov al, byte ptr [edi + VALUE]
#define MOV_AL_FROM_PTR_ESI_(VALUE) mov al, byte ptr [esi + VALUE]
#define MOV_AL_FROM_PTR_EBP_(VALUE) mov al, byte ptr [ebp + VALUE]
#define MOV_AL_FROM_PTR_ESP_(VALUE) mov al, byte ptr [esp + VALUE]
#define MOV_AL_FROM_PTR_BX_(VALUE) mov al, byte ptr [bx + VALUE]
#define MOV_AL_FROM_PTR_BP_(VALUE) mov al, byte ptr [bp + VALUE]
#define MOV_AL_FROM_PTR_SI_(VALUE) mov al, byte ptr [si + VALUE]
#define MOV_AL_FROM_PTR_DI_(VALUE) mov al, byte ptr [di + VALUE]

#define MOV_BL_FROM_PTR_EAX_(VALUE) mov bl, byte ptr [eax + VALUE]
#define MOV_BL_FROM_PTR_EBX_(VALUE) mov bl, byte ptr [ebx + VALUE]
#define MOV_BL_FROM_PTR_ECX_(VALUE) mov bl, byte ptr [ecx + VALUE]
#define MOV_BL_FROM_PTR_EDX_(VALUE) mov bl, byte ptr [edx + VALUE]
#define MOV_BL_FROM_PTR_EDI_(VALUE) mov bl, byte ptr [edi + VALUE]
#define MOV_BL_FROM_PTR_ESI_(VALUE) mov bl, byte ptr [esi + VALUE]
#define MOV_BL_FROM_PTR_EBP_(VALUE) mov bl, byte ptr [ebp + VALUE]
#define MOV_BL_FROM_PTR_ESP_(VALUE) mov bl, byte ptr [esp + VALUE]
#define MOV_BL_FROM_PTR_BX_(VALUE) mov bl, byte ptr [bx + VALUE]
#define MOV_BL_FROM_PTR_BP_(VALUE) mov bl, byte ptr [bp + VALUE]
#define MOV_BL_FROM_PTR_SI_(VALUE) mov bl, byte ptr [si + VALUE]
#define MOV_BL_FROM_PTR_DI_(VALUE) mov bl, byte ptr [di + VALUE]

#define MOV_CL_FROM_PTR_EAX_(VALUE) mov cl, byte ptr [eax + VALUE]
#define MOV_CL_FROM_PTR_EBX_(VALUE) mov cl, byte ptr [ebx + VALUE]
#define MOV_CL_FROM_PTR_ECX_(VALUE) mov cl, byte ptr [ecx + VALUE]
#define MOV_CL_FROM_PTR_EDX_(VALUE) mov cl, byte ptr [edx + VALUE]
#define MOV_CL_FROM_PTR_EDI_(VALUE) mov cl, byte ptr [edi + VALUE]
#define MOV_CL_FROM_PTR_ESI_(VALUE) mov cl, byte ptr [esi + VALUE]
#define MOV_CL_FROM_PTR_EBP_(VALUE) mov cl, byte ptr [ebp + VALUE]
#define MOV_CL_FROM_PTR_ESP_(VALUE) mov cl, byte ptr [esp + VALUE]
#define MOV_CL_FROM_PTR_BX_(VALUE) mov cl, byte ptr [bx + VALUE]
#define MOV_CL_FROM_PTR_BP_(VALUE) mov cl, byte ptr [bp + VALUE]
#define MOV_CL_FROM_PTR_SI_(VALUE) mov cl, byte ptr [si + VALUE]
#define MOV_CL_FROM_PTR_DI_(VALUE) mov cl, byte ptr [di + VALUE]

#define MOV_DL_FROM_PTR_EAX_(VALUE) mov dl, byte ptr [eax + VALUE]
#define MOV_DL_FROM_PTR_EBX_(VALUE) mov dl, byte ptr [ebx + VALUE]
#define MOV_DL_FROM_PTR_ECX_(VALUE) mov dl, byte ptr [ecx + VALUE]
#define MOV_DL_FROM_PTR_EDX_(VALUE) mov dl, byte ptr [edx + VALUE]
#define MOV_DL_FROM_PTR_EDI_(VALUE) mov dl, byte ptr [edi + VALUE]
#define MOV_DL_FROM_PTR_ESI_(VALUE) mov dl, byte ptr [esi + VALUE]
#define MOV_DL_FROM_PTR_EBP_(VALUE) mov dl, byte ptr [ebp + VALUE]
#define MOV_DL_FROM_PTR_ESP_(VALUE) mov dl, byte ptr [esp + VALUE]
#define MOV_DL_FROM_PTR_BX_(VALUE) mov dl, byte ptr [bx + VALUE]
#define MOV_DL_FROM_PTR_BP_(VALUE) mov dl, byte ptr [bp + VALUE]
#define MOV_DL_FROM_PTR_SI_(VALUE) mov dl, byte ptr [si + VALUE]
#define MOV_DL_FROM_PTR_DI_(VALUE) mov dl, byte ptr [di + VALUE]

#define MOV_AL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], al
#define MOV_AL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], al
#define MOV_AL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], al
#define MOV_AL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], al
#define MOV_AL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], al
#define MOV_AL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], al
#define MOV_AL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], al
#define MOV_AL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], al
#define MOV_AL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], al
#define MOV_AL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], al
#define MOV_AL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], al
#define MOV_AL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], al

#define MOV_BL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], bl
#define MOV_BL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], bl
#define MOV_BL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], bl
#define MOV_BL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], bl
#define MOV_BL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], bl
#define MOV_BL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], bl
#define MOV_BL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], bl
#define MOV_BL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], bl
#define MOV_BL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], bl
#define MOV_BL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], bl
#define MOV_BL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], bl
#define MOV_BL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], bl

#define MOV_CL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], cl
#define MOV_CL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], cl
#define MOV_CL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], cl
#define MOV_CL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], cl
#define MOV_CL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], cl
#define MOV_CL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], cl
#define MOV_CL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], cl
#define MOV_CL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], cl
#define MOV_CL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], cl
#define MOV_CL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], cl
#define MOV_CL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], cl
#define MOV_CL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], cl

#define MOV_DL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], dl
#define MOV_DL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], dl
#define MOV_DL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], dl
#define MOV_DL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], dl
#define MOV_DL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], dl
#define MOV_DL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], dl
#define MOV_DL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], dl
#define MOV_DL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], dl
#define MOV_DL_TO_PTR_BX_(VALUE) mov byte ptr [bx + VALUE], dl
#define MOV_DL_TO_PTR_BP_(VALUE) mov byte ptr [bp + VALUE], dl
#define MOV_DL_TO_PTR_SI_(VALUE) mov byte ptr [si + VALUE], dl
#define MOV_DL_TO_PTR_DI_(VALUE) mov byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_AL_FROM_PTR_(VALUE) mov al, byte ptr [VALUE]
#define MOV_BL_FROM_PTR_(VALUE) mov bl, byte ptr [VALUE]
#define MOV_CL_FROM_PTR_(VALUE) mov cl, byte ptr [VALUE]
#define MOV_DL_FROM_PTR_(VALUE) mov dl, byte ptr [VALUE]
#define MOV_DIL_FROM_PTR_(VALUE) mov dil, byte ptr [VALUE]
#define MOV_SIL_FROM_PTR_(VALUE) mov sil, byte ptr [VALUE]
#define MOV_BPL_FROM_PTR_(VALUE) mov bpl, byte ptr [VALUE]
#define MOV_SPL_FROM_PTR_(VALUE) mov spl, byte ptr [VALUE]
#define MOV_R8B_FROM_PTR_(VALUE) mov r8b, byte ptr [VALUE]
#define MOV_R9B_FROM_PTR_(VALUE) mov r9b, byte ptr [VALUE]
#define MOV_R10B_FROM_PTR_(VALUE) mov r10b, byte ptr [VALUE]
#define MOV_R11B_FROM_PTR_(VALUE) mov r11b, byte ptr [VALUE]
#define MOV_R12B_FROM_PTR_(VALUE) mov r12b, byte ptr [VALUE]
#define MOV_R13B_FROM_PTR_(VALUE) mov r13b, byte ptr [VALUE]
#define MOV_R14B_FROM_PTR_(VALUE) mov r14b, byte ptr [VALUE]
#define MOV_R15B_FROM_PTR_(VALUE) mov r15b, byte ptr [VALUE]

#define MOV_AL_TO_PTR_(VALUE) mov byte ptr [VALUE], al
#define MOV_BL_TO_PTR_(VALUE) mov byte ptr [VALUE], bl
#define MOV_CL_TO_PTR_(VALUE) mov byte ptr [VALUE], cl
#define MOV_DL_TO_PTR_(VALUE) mov byte ptr [VALUE], dl
#define MOV_DIL_TO_PTR_(VALUE) mov byte ptr [VALUE], dil
#define MOV_SIL_TO_PTR_(VALUE) mov byte ptr [VALUE], sil
#define MOV_BPL_TO_PTR_(VALUE) mov byte ptr [VALUE], bpl
#define MOV_SPL_TO_PTR_(VALUE) mov byte ptr [VALUE], spl
#define MOV_R8B_TO_PTR_(VALUE) mov byte ptr [VALUE], r8b
#define MOV_R9B_TO_PTR_(VALUE) mov byte ptr [VALUE], r9b
#define MOV_R10B_TO_PTR_(VALUE) mov byte ptr [VALUE], r10b
#define MOV_R11B_TO_PTR_(VALUE) mov byte ptr [VALUE], r11b
#define MOV_R12B_TO_PTR_(VALUE) mov byte ptr [VALUE], r12b
#define MOV_R13B_TO_PTR_(VALUE) mov byte ptr [VALUE], r13b
#define MOV_R14B_TO_PTR_(VALUE) mov byte ptr [VALUE], r14b
#define MOV_R15B_TO_PTR_(VALUE) mov byte ptr [VALUE], r15b

#define MOV_AL_FROM_PTR_RAX mov al, byte ptr [rax]
#define MOV_AL_FROM_PTR_RBX mov al, byte ptr [rbx]
#define MOV_AL_FROM_PTR_RCX mov al, byte ptr [rcx]
#define MOV_AL_FROM_PTR_RDX mov al, byte ptr [rdx]
#define MOV_AL_FROM_PTR_RDI mov al, byte ptr [rdi]
#define MOV_AL_FROM_PTR_RSI mov al, byte ptr [rsi]
#define MOV_AL_FROM_PTR_RBP mov al, byte ptr [rbp]
#define MOV_AL_FROM_PTR_RSP mov al, byte ptr [rsp]
#define MOV_AL_FROM_PTR_R8 mov al, byte ptr [r8]
#define MOV_AL_FROM_PTR_R9 mov al, byte ptr [r9]
#define MOV_AL_FROM_PTR_R10 mov al, byte ptr [r10]
#define MOV_AL_FROM_PTR_R11 mov al, byte ptr [r11]
#define MOV_AL_FROM_PTR_R12 mov al, byte ptr [r12]
#define MOV_AL_FROM_PTR_R13 mov al, byte ptr [r13]
#define MOV_AL_FROM_PTR_R14 mov al, byte ptr [r14]
#define MOV_AL_FROM_PTR_R15 mov al, byte ptr [r15]
#define MOV_AL_FROM_PTR_EAX mov al, byte ptr [eax]
#define MOV_AL_FROM_PTR_EBX mov al, byte ptr [ebx]
#define MOV_AL_FROM_PTR_ECX mov al, byte ptr [ecx]
#define MOV_AL_FROM_PTR_EDX mov al, byte ptr [edx]
#define MOV_AL_FROM_PTR_EDI mov al, byte ptr [edi]
#define MOV_AL_FROM_PTR_ESI mov al, byte ptr [esi]
#define MOV_AL_FROM_PTR_EBP mov al, byte ptr [ebp]
#define MOV_AL_FROM_PTR_ESP mov al, byte ptr [esp]

#define MOV_BL_FROM_PTR_RAX mov bl, byte ptr [rax]
#define MOV_BL_FROM_PTR_RBX mov bl, byte ptr [rbx]
#define MOV_BL_FROM_PTR_RCX mov bl, byte ptr [rcx]
#define MOV_BL_FROM_PTR_RDX mov bl, byte ptr [rdx]
#define MOV_BL_FROM_PTR_RDI mov bl, byte ptr [rdi]
#define MOV_BL_FROM_PTR_RSI mov bl, byte ptr [rsi]
#define MOV_BL_FROM_PTR_RBP mov bl, byte ptr [rbp]
#define MOV_BL_FROM_PTR_RSP mov bl, byte ptr [rsp]
#define MOV_BL_FROM_PTR_R8 mov bl, byte ptr [r8]
#define MOV_BL_FROM_PTR_R9 mov bl, byte ptr [r9]
#define MOV_BL_FROM_PTR_R10 mov bl, byte ptr [r10]
#define MOV_BL_FROM_PTR_R11 mov bl, byte ptr [r11]
#define MOV_BL_FROM_PTR_R12 mov bl, byte ptr [r12]
#define MOV_BL_FROM_PTR_R13 mov bl, byte ptr [r13]
#define MOV_BL_FROM_PTR_R14 mov bl, byte ptr [r14]
#define MOV_BL_FROM_PTR_R15 mov bl, byte ptr [r15]
#define MOV_BL_FROM_PTR_EAX mov bl, byte ptr [eax]
#define MOV_BL_FROM_PTR_EBX mov bl, byte ptr [ebx]
#define MOV_BL_FROM_PTR_ECX mov bl, byte ptr [ecx]
#define MOV_BL_FROM_PTR_EDX mov bl, byte ptr [edx]
#define MOV_BL_FROM_PTR_EDI mov bl, byte ptr [edi]
#define MOV_BL_FROM_PTR_ESI mov bl, byte ptr [esi]
#define MOV_BL_FROM_PTR_EBP mov bl, byte ptr [ebp]
#define MOV_BL_FROM_PTR_ESP mov bl, byte ptr [esp]

#define MOV_CL_FROM_PTR_RAX mov cl, byte ptr [rax]
#define MOV_CL_FROM_PTR_RBX mov cl, byte ptr [rbx]
#define MOV_CL_FROM_PTR_RCX mov cl, byte ptr [rcx]
#define MOV_CL_FROM_PTR_RDX mov cl, byte ptr [rdx]
#define MOV_CL_FROM_PTR_RDI mov cl, byte ptr [rdi]
#define MOV_CL_FROM_PTR_RSI mov cl, byte ptr [rsi]
#define MOV_CL_FROM_PTR_RBP mov cl, byte ptr [rbp]
#define MOV_CL_FROM_PTR_RSP mov cl, byte ptr [rsp]
#define MOV_CL_FROM_PTR_R8 mov cl, byte ptr [r8]
#define MOV_CL_FROM_PTR_R9 mov cl, byte ptr [r9]
#define MOV_CL_FROM_PTR_R10 mov cl, byte ptr [r10]
#define MOV_CL_FROM_PTR_R11 mov cl, byte ptr [r11]
#define MOV_CL_FROM_PTR_R12 mov cl, byte ptr [r12]
#define MOV_CL_FROM_PTR_R13 mov cl, byte ptr [r13]
#define MOV_CL_FROM_PTR_R14 mov cl, byte ptr [r14]
#define MOV_CL_FROM_PTR_R15 mov cl, byte ptr [r15]
#define MOV_CL_FROM_PTR_EAX mov cl, byte ptr [eax]
#define MOV_CL_FROM_PTR_EBX mov cl, byte ptr [ebx]
#define MOV_CL_FROM_PTR_ECX mov cl, byte ptr [ecx]
#define MOV_CL_FROM_PTR_EDX mov cl, byte ptr [edx]
#define MOV_CL_FROM_PTR_EDI mov cl, byte ptr [edi]
#define MOV_CL_FROM_PTR_ESI mov cl, byte ptr [esi]
#define MOV_CL_FROM_PTR_EBP mov cl, byte ptr [ebp]
#define MOV_CL_FROM_PTR_ESP mov cl, byte ptr [esp]

#define MOV_DL_FROM_PTR_RAX mov dl, byte ptr [rax]
#define MOV_DL_FROM_PTR_RBX mov dl, byte ptr [rbx]
#define MOV_DL_FROM_PTR_RCX mov dl, byte ptr [rcx]
#define MOV_DL_FROM_PTR_RDX mov dl, byte ptr [rdx]
#define MOV_DL_FROM_PTR_RDI mov dl, byte ptr [rdi]
#define MOV_DL_FROM_PTR_RSI mov dl, byte ptr [rsi]
#define MOV_DL_FROM_PTR_RBP mov dl, byte ptr [rbp]
#define MOV_DL_FROM_PTR_RSP mov dl, byte ptr [rsp]
#define MOV_DL_FROM_PTR_R8 mov dl, byte ptr [r8]
#define MOV_DL_FROM_PTR_R9 mov dl, byte ptr [r9]
#define MOV_DL_FROM_PTR_R10 mov dl, byte ptr [r10]
#define MOV_DL_FROM_PTR_R11 mov dl, byte ptr [r11]
#define MOV_DL_FROM_PTR_R12 mov dl, byte ptr [r12]
#define MOV_DL_FROM_PTR_R13 mov dl, byte ptr [r13]
#define MOV_DL_FROM_PTR_R14 mov dl, byte ptr [r14]
#define MOV_DL_FROM_PTR_R15 mov dl, byte ptr [r15]
#define MOV_DL_FROM_PTR_EAX mov dl, byte ptr [eax]
#define MOV_DL_FROM_PTR_EBX mov dl, byte ptr [ebx]
#define MOV_DL_FROM_PTR_ECX mov dl, byte ptr [ecx]
#define MOV_DL_FROM_PTR_EDX mov dl, byte ptr [edx]
#define MOV_DL_FROM_PTR_EDI mov dl, byte ptr [edi]
#define MOV_DL_FROM_PTR_ESI mov dl, byte ptr [esi]
#define MOV_DL_FROM_PTR_EBP mov dl, byte ptr [ebp]
#define MOV_DL_FROM_PTR_ESP mov dl, byte ptr [esp]

#define MOV_DIL_FROM_PTR_RAX mov dil, byte ptr [rax]
#define MOV_DIL_FROM_PTR_RBX mov dil, byte ptr [rbx]
#define MOV_DIL_FROM_PTR_RCX mov dil, byte ptr [rcx]
#define MOV_DIL_FROM_PTR_RDX mov dil, byte ptr [rdx]
#define MOV_DIL_FROM_PTR_RDI mov dil, byte ptr [rdi]
#define MOV_DIL_FROM_PTR_RSI mov dil, byte ptr [rsi]
#define MOV_DIL_FROM_PTR_RBP mov dil, byte ptr [rbp]
#define MOV_DIL_FROM_PTR_RSP mov dil, byte ptr [rsp]
#define MOV_DIL_FROM_PTR_R8 mov dil, byte ptr [r8]
#define MOV_DIL_FROM_PTR_R9 mov dil, byte ptr [r9]
#define MOV_DIL_FROM_PTR_R10 mov dil, byte ptr [r10]
#define MOV_DIL_FROM_PTR_R11 mov dil, byte ptr [r11]
#define MOV_DIL_FROM_PTR_R12 mov dil, byte ptr [r12]
#define MOV_DIL_FROM_PTR_R13 mov dil, byte ptr [r13]
#define MOV_DIL_FROM_PTR_R14 mov dil, byte ptr [r14]
#define MOV_DIL_FROM_PTR_R15 mov dil, byte ptr [r15]
#define MOV_DIL_FROM_PTR_EAX mov dil, byte ptr [eax]
#define MOV_DIL_FROM_PTR_EBX mov dil, byte ptr [ebx]
#define MOV_DIL_FROM_PTR_ECX mov dil, byte ptr [ecx]
#define MOV_DIL_FROM_PTR_EDX mov dil, byte ptr [edx]
#define MOV_DIL_FROM_PTR_EDI mov dil, byte ptr [edi]
#define MOV_DIL_FROM_PTR_ESI mov dil, byte ptr [esi]
#define MOV_DIL_FROM_PTR_EBP mov dil, byte ptr [ebp]
#define MOV_DIL_FROM_PTR_ESP mov dil, byte ptr [esp]

#define MOV_SIL_FROM_PTR_RAX mov sil, byte ptr [rax]
#define MOV_SIL_FROM_PTR_RBX mov sil, byte ptr [rbx]
#define MOV_SIL_FROM_PTR_RCX mov sil, byte ptr [rcx]
#define MOV_SIL_FROM_PTR_RDX mov sil, byte ptr [rdx]
#define MOV_SIL_FROM_PTR_RDI mov sil, byte ptr [rdi]
#define MOV_SIL_FROM_PTR_RSI mov sil, byte ptr [rsi]
#define MOV_SIL_FROM_PTR_RBP mov sil, byte ptr [rbp]
#define MOV_SIL_FROM_PTR_RSP mov sil, byte ptr [rsp]
#define MOV_SIL_FROM_PTR_R8 mov sil, byte ptr [r8]
#define MOV_SIL_FROM_PTR_R9 mov sil, byte ptr [r9]
#define MOV_SIL_FROM_PTR_R10 mov sil, byte ptr [r10]
#define MOV_SIL_FROM_PTR_R11 mov sil, byte ptr [r11]
#define MOV_SIL_FROM_PTR_R12 mov sil, byte ptr [r12]
#define MOV_SIL_FROM_PTR_R13 mov sil, byte ptr [r13]
#define MOV_SIL_FROM_PTR_R14 mov sil, byte ptr [r14]
#define MOV_SIL_FROM_PTR_R15 mov sil, byte ptr [r15]
#define MOV_SIL_FROM_PTR_EAX mov sil, byte ptr [eax]
#define MOV_SIL_FROM_PTR_EBX mov sil, byte ptr [ebx]
#define MOV_SIL_FROM_PTR_ECX mov sil, byte ptr [ecx]
#define MOV_SIL_FROM_PTR_EDX mov sil, byte ptr [edx]
#define MOV_SIL_FROM_PTR_EDI mov sil, byte ptr [edi]
#define MOV_SIL_FROM_PTR_ESI mov sil, byte ptr [esi]
#define MOV_SIL_FROM_PTR_EBP mov sil, byte ptr [ebp]
#define MOV_SIL_FROM_PTR_ESP mov sil, byte ptr [esp]

#define MOV_BPL_FROM_PTR_RAX mov bpl, byte ptr [rax]
#define MOV_BPL_FROM_PTR_RBX mov bpl, byte ptr [rbx]
#define MOV_BPL_FROM_PTR_RCX mov bpl, byte ptr [rcx]
#define MOV_BPL_FROM_PTR_RDX mov bpl, byte ptr [rdx]
#define MOV_BPL_FROM_PTR_RDI mov bpl, byte ptr [rdi]
#define MOV_BPL_FROM_PTR_RSI mov bpl, byte ptr [rsi]
#define MOV_BPL_FROM_PTR_RBP mov bpl, byte ptr [rbp]
#define MOV_BPL_FROM_PTR_RSP mov bpl, byte ptr [rsp]
#define MOV_BPL_FROM_PTR_R8 mov bpl, byte ptr [r8]
#define MOV_BPL_FROM_PTR_R9 mov bpl, byte ptr [r9]
#define MOV_BPL_FROM_PTR_R10 mov bpl, byte ptr [r10]
#define MOV_BPL_FROM_PTR_R11 mov bpl, byte ptr [r11]
#define MOV_BPL_FROM_PTR_R12 mov bpl, byte ptr [r12]
#define MOV_BPL_FROM_PTR_R13 mov bpl, byte ptr [r13]
#define MOV_BPL_FROM_PTR_R14 mov bpl, byte ptr [r14]
#define MOV_BPL_FROM_PTR_R15 mov bpl, byte ptr [r15]
#define MOV_BPL_FROM_PTR_EAX mov bpl, byte ptr [eax]
#define MOV_BPL_FROM_PTR_EBX mov bpl, byte ptr [ebx]
#define MOV_BPL_FROM_PTR_ECX mov bpl, byte ptr [ecx]
#define MOV_BPL_FROM_PTR_EDX mov bpl, byte ptr [edx]
#define MOV_BPL_FROM_PTR_EDI mov bpl, byte ptr [edi]
#define MOV_BPL_FROM_PTR_ESI mov bpl, byte ptr [esi]
#define MOV_BPL_FROM_PTR_EBP mov bpl, byte ptr [ebp]
#define MOV_BPL_FROM_PTR_ESP mov bpl, byte ptr [esp]

#define MOV_SPL_FROM_PTR_RAX mov spl, byte ptr [rax]
#define MOV_SPL_FROM_PTR_RBX mov spl, byte ptr [rbx]
#define MOV_SPL_FROM_PTR_RCX mov spl, byte ptr [rcx]
#define MOV_SPL_FROM_PTR_RDX mov spl, byte ptr [rdx]
#define MOV_SPL_FROM_PTR_RDI mov spl, byte ptr [rdi]
#define MOV_SPL_FROM_PTR_RSI mov spl, byte ptr [rsi]
#define MOV_SPL_FROM_PTR_RBP mov spl, byte ptr [rbp]
#define MOV_SPL_FROM_PTR_RSP mov spl, byte ptr [rsp]
#define MOV_SPL_FROM_PTR_R8 mov spl, byte ptr [r8]
#define MOV_SPL_FROM_PTR_R9 mov spl, byte ptr [r9]
#define MOV_SPL_FROM_PTR_R10 mov spl, byte ptr [r10]
#define MOV_SPL_FROM_PTR_R11 mov spl, byte ptr [r11]
#define MOV_SPL_FROM_PTR_R12 mov spl, byte ptr [r12]
#define MOV_SPL_FROM_PTR_R13 mov spl, byte ptr [r13]
#define MOV_SPL_FROM_PTR_R14 mov spl, byte ptr [r14]
#define MOV_SPL_FROM_PTR_R15 mov spl, byte ptr [r15]
#define MOV_SPL_FROM_PTR_EAX mov spl, byte ptr [eax]
#define MOV_SPL_FROM_PTR_EBX mov spl, byte ptr [ebx]
#define MOV_SPL_FROM_PTR_ECX mov spl, byte ptr [ecx]
#define MOV_SPL_FROM_PTR_EDX mov spl, byte ptr [edx]
#define MOV_SPL_FROM_PTR_EDI mov spl, byte ptr [edi]
#define MOV_SPL_FROM_PTR_ESI mov spl, byte ptr [esi]
#define MOV_SPL_FROM_PTR_EBP mov spl, byte ptr [ebp]
#define MOV_SPL_FROM_PTR_ESP mov spl, byte ptr [esp]

#define MOV_R8B_FROM_PTR_RAX mov r8b, byte ptr [rax]
#define MOV_R8B_FROM_PTR_RBX mov r8b, byte ptr [rbx]
#define MOV_R8B_FROM_PTR_RCX mov r8b, byte ptr [rcx]
#define MOV_R8B_FROM_PTR_RDX mov r8b, byte ptr [rdx]
#define MOV_R8B_FROM_PTR_RDI mov r8b, byte ptr [rdi]
#define MOV_R8B_FROM_PTR_RSI mov r8b, byte ptr [rsi]
#define MOV_R8B_FROM_PTR_RBP mov r8b, byte ptr [rbp]
#define MOV_R8B_FROM_PTR_RSP mov r8b, byte ptr [rsp]
#define MOV_R8B_FROM_PTR_R8 mov r8b, byte ptr [r8]
#define MOV_R8B_FROM_PTR_R9 mov r8b, byte ptr [r9]
#define MOV_R8B_FROM_PTR_R10 mov r8b, byte ptr [r10]
#define MOV_R8B_FROM_PTR_R11 mov r8b, byte ptr [r11]
#define MOV_R8B_FROM_PTR_R12 mov r8b, byte ptr [r12]
#define MOV_R8B_FROM_PTR_R13 mov r8b, byte ptr [r13]
#define MOV_R8B_FROM_PTR_R14 mov r8b, byte ptr [r14]
#define MOV_R8B_FROM_PTR_R15 mov r8b, byte ptr [r15]
#define MOV_R8B_FROM_PTR_EAX mov r8b, byte ptr [eax]
#define MOV_R8B_FROM_PTR_EBX mov r8b, byte ptr [ebx]
#define MOV_R8B_FROM_PTR_ECX mov r8b, byte ptr [ecx]
#define MOV_R8B_FROM_PTR_EDX mov r8b, byte ptr [edx]
#define MOV_R8B_FROM_PTR_EDI mov r8b, byte ptr [edi]
#define MOV_R8B_FROM_PTR_ESI mov r8b, byte ptr [esi]
#define MOV_R8B_FROM_PTR_EBP mov r8b, byte ptr [ebp]
#define MOV_R8B_FROM_PTR_ESP mov r8b, byte ptr [esp]

#define MOV_R9B_FROM_PTR_RAX mov r9b, byte ptr [rax]
#define MOV_R9B_FROM_PTR_RBX mov r9b, byte ptr [rbx]
#define MOV_R9B_FROM_PTR_RCX mov r9b, byte ptr [rcx]
#define MOV_R9B_FROM_PTR_RDX mov r9b, byte ptr [rdx]
#define MOV_R9B_FROM_PTR_RDI mov r9b, byte ptr [rdi]
#define MOV_R9B_FROM_PTR_RSI mov r9b, byte ptr [rsi]
#define MOV_R9B_FROM_PTR_RBP mov r9b, byte ptr [rbp]
#define MOV_R9B_FROM_PTR_RSP mov r9b, byte ptr [rsp]
#define MOV_R9B_FROM_PTR_R8 mov r9b, byte ptr [r8]
#define MOV_R9B_FROM_PTR_R9 mov r9b, byte ptr [r9]
#define MOV_R9B_FROM_PTR_R10 mov r9b, byte ptr [r10]
#define MOV_R9B_FROM_PTR_R11 mov r9b, byte ptr [r11]
#define MOV_R9B_FROM_PTR_R12 mov r9b, byte ptr [r12]
#define MOV_R9B_FROM_PTR_R13 mov r9b, byte ptr [r13]
#define MOV_R9B_FROM_PTR_R14 mov r9b, byte ptr [r14]
#define MOV_R9B_FROM_PTR_R15 mov r9b, byte ptr [r15]
#define MOV_R9B_FROM_PTR_EAX mov r9b, byte ptr [eax]
#define MOV_R9B_FROM_PTR_EBX mov r9b, byte ptr [ebx]
#define MOV_R9B_FROM_PTR_ECX mov r9b, byte ptr [ecx]
#define MOV_R9B_FROM_PTR_EDX mov r9b, byte ptr [edx]
#define MOV_R9B_FROM_PTR_EDI mov r9b, byte ptr [edi]
#define MOV_R9B_FROM_PTR_ESI mov r9b, byte ptr [esi]
#define MOV_R9B_FROM_PTR_EBP mov r9b, byte ptr [ebp]
#define MOV_R9B_FROM_PTR_ESP mov r9b, byte ptr [esp]

#define MOV_R10B_FROM_PTR_RAX mov r10b, byte ptr [rax]
#define MOV_R10B_FROM_PTR_RBX mov r10b, byte ptr [rbx]
#define MOV_R10B_FROM_PTR_RCX mov r10b, byte ptr [rcx]
#define MOV_R10B_FROM_PTR_RDX mov r10b, byte ptr [rdx]
#define MOV_R10B_FROM_PTR_RDI mov r10b, byte ptr [rdi]
#define MOV_R10B_FROM_PTR_RSI mov r10b, byte ptr [rsi]
#define MOV_R10B_FROM_PTR_RBP mov r10b, byte ptr [rbp]
#define MOV_R10B_FROM_PTR_RSP mov r10b, byte ptr [rsp]
#define MOV_R10B_FROM_PTR_R8 mov r10b, byte ptr [r8]
#define MOV_R10B_FROM_PTR_R9 mov r10b, byte ptr [r9]
#define MOV_R10B_FROM_PTR_R10 mov r10b, byte ptr [r10]
#define MOV_R10B_FROM_PTR_R11 mov r10b, byte ptr [r11]
#define MOV_R10B_FROM_PTR_R12 mov r10b, byte ptr [r12]
#define MOV_R10B_FROM_PTR_R13 mov r10b, byte ptr [r13]
#define MOV_R10B_FROM_PTR_R14 mov r10b, byte ptr [r14]
#define MOV_R10B_FROM_PTR_R15 mov r10b, byte ptr [r15]
#define MOV_R10B_FROM_PTR_EAX mov r10b, byte ptr [eax]
#define MOV_R10B_FROM_PTR_EBX mov r10b, byte ptr [ebx]
#define MOV_R10B_FROM_PTR_ECX mov r10b, byte ptr [ecx]
#define MOV_R10B_FROM_PTR_EDX mov r10b, byte ptr [edx]
#define MOV_R10B_FROM_PTR_EDI mov r10b, byte ptr [edi]
#define MOV_R10B_FROM_PTR_ESI mov r10b, byte ptr [esi]
#define MOV_R10B_FROM_PTR_EBP mov r10b, byte ptr [ebp]
#define MOV_R10B_FROM_PTR_ESP mov r10b, byte ptr [esp]

#define MOV_R11B_FROM_PTR_RAX mov r11b, byte ptr [rax]
#define MOV_R11B_FROM_PTR_RBX mov r11b, byte ptr [rbx]
#define MOV_R11B_FROM_PTR_RCX mov r11b, byte ptr [rcx]
#define MOV_R11B_FROM_PTR_RDX mov r11b, byte ptr [rdx]
#define MOV_R11B_FROM_PTR_RDI mov r11b, byte ptr [rdi]
#define MOV_R11B_FROM_PTR_RSI mov r11b, byte ptr [rsi]
#define MOV_R11B_FROM_PTR_RBP mov r11b, byte ptr [rbp]
#define MOV_R11B_FROM_PTR_RSP mov r11b, byte ptr [rsp]
#define MOV_R11B_FROM_PTR_R8 mov r11b, byte ptr [r8]
#define MOV_R11B_FROM_PTR_R9 mov r11b, byte ptr [r9]
#define MOV_R11B_FROM_PTR_R10 mov r11b, byte ptr [r10]
#define MOV_R11B_FROM_PTR_R11 mov r11b, byte ptr [r11]
#define MOV_R11B_FROM_PTR_R12 mov r11b, byte ptr [r12]
#define MOV_R11B_FROM_PTR_R13 mov r11b, byte ptr [r13]
#define MOV_R11B_FROM_PTR_R14 mov r11b, byte ptr [r14]
#define MOV_R11B_FROM_PTR_R15 mov r11b, byte ptr [r15]
#define MOV_R11B_FROM_PTR_EAX mov r11b, byte ptr [eax]
#define MOV_R11B_FROM_PTR_EBX mov r11b, byte ptr [ebx]
#define MOV_R11B_FROM_PTR_ECX mov r11b, byte ptr [ecx]
#define MOV_R11B_FROM_PTR_EDX mov r11b, byte ptr [edx]
#define MOV_R11B_FROM_PTR_EDI mov r11b, byte ptr [edi]
#define MOV_R11B_FROM_PTR_ESI mov r11b, byte ptr [esi]
#define MOV_R11B_FROM_PTR_EBP mov r11b, byte ptr [ebp]
#define MOV_R11B_FROM_PTR_ESP mov r11b, byte ptr [esp]

#define MOV_R12B_FROM_PTR_RAX mov r12b, byte ptr [rax]
#define MOV_R12B_FROM_PTR_RBX mov r12b, byte ptr [rbx]
#define MOV_R12B_FROM_PTR_RCX mov r12b, byte ptr [rcx]
#define MOV_R12B_FROM_PTR_RDX mov r12b, byte ptr [rdx]
#define MOV_R12B_FROM_PTR_RDI mov r12b, byte ptr [rdi]
#define MOV_R12B_FROM_PTR_RSI mov r12b, byte ptr [rsi]
#define MOV_R12B_FROM_PTR_RBP mov r12b, byte ptr [rbp]
#define MOV_R12B_FROM_PTR_RSP mov r12b, byte ptr [rsp]
#define MOV_R12B_FROM_PTR_R8 mov r12b, byte ptr [r8]
#define MOV_R12B_FROM_PTR_R9 mov r12b, byte ptr [r9]
#define MOV_R12B_FROM_PTR_R10 mov r12b, byte ptr [r10]
#define MOV_R12B_FROM_PTR_R11 mov r12b, byte ptr [r11]
#define MOV_R12B_FROM_PTR_R12 mov r12b, byte ptr [r12]
#define MOV_R12B_FROM_PTR_R13 mov r12b, byte ptr [r13]
#define MOV_R12B_FROM_PTR_R14 mov r12b, byte ptr [r14]
#define MOV_R12B_FROM_PTR_R15 mov r12b, byte ptr [r15]
#define MOV_R12B_FROM_PTR_EAX mov r12b, byte ptr [eax]
#define MOV_R12B_FROM_PTR_EBX mov r12b, byte ptr [ebx]
#define MOV_R12B_FROM_PTR_ECX mov r12b, byte ptr [ecx]
#define MOV_R12B_FROM_PTR_EDX mov r12b, byte ptr [edx]
#define MOV_R12B_FROM_PTR_EDI mov r12b, byte ptr [edi]
#define MOV_R12B_FROM_PTR_ESI mov r12b, byte ptr [esi]
#define MOV_R12B_FROM_PTR_EBP mov r12b, byte ptr [ebp]
#define MOV_R12B_FROM_PTR_ESP mov r12b, byte ptr [esp]

#define MOV_R13B_FROM_PTR_RAX mov r13b, byte ptr [rax]
#define MOV_R13B_FROM_PTR_RBX mov r13b, byte ptr [rbx]
#define MOV_R13B_FROM_PTR_RCX mov r13b, byte ptr [rcx]
#define MOV_R13B_FROM_PTR_RDX mov r13b, byte ptr [rdx]
#define MOV_R13B_FROM_PTR_RDI mov r13b, byte ptr [rdi]
#define MOV_R13B_FROM_PTR_RSI mov r13b, byte ptr [rsi]
#define MOV_R13B_FROM_PTR_RBP mov r13b, byte ptr [rbp]
#define MOV_R13B_FROM_PTR_RSP mov r13b, byte ptr [rsp]
#define MOV_R13B_FROM_PTR_R8 mov r13b, byte ptr [r8]
#define MOV_R13B_FROM_PTR_R9 mov r13b, byte ptr [r9]
#define MOV_R13B_FROM_PTR_R10 mov r13b, byte ptr [r10]
#define MOV_R13B_FROM_PTR_R11 mov r13b, byte ptr [r11]
#define MOV_R13B_FROM_PTR_R12 mov r13b, byte ptr [r12]
#define MOV_R13B_FROM_PTR_R13 mov r13b, byte ptr [r13]
#define MOV_R13B_FROM_PTR_R14 mov r13b, byte ptr [r14]
#define MOV_R13B_FROM_PTR_R15 mov r13b, byte ptr [r15]
#define MOV_R13B_FROM_PTR_EAX mov r13b, byte ptr [eax]
#define MOV_R13B_FROM_PTR_EBX mov r13b, byte ptr [ebx]
#define MOV_R13B_FROM_PTR_ECX mov r13b, byte ptr [ecx]
#define MOV_R13B_FROM_PTR_EDX mov r13b, byte ptr [edx]
#define MOV_R13B_FROM_PTR_EDI mov r13b, byte ptr [edi]
#define MOV_R13B_FROM_PTR_ESI mov r13b, byte ptr [esi]
#define MOV_R13B_FROM_PTR_EBP mov r13b, byte ptr [ebp]
#define MOV_R13B_FROM_PTR_ESP mov r13b, byte ptr [esp]

#define MOV_R14B_FROM_PTR_RAX mov r14b, byte ptr [rax]
#define MOV_R14B_FROM_PTR_RBX mov r14b, byte ptr [rbx]
#define MOV_R14B_FROM_PTR_RCX mov r14b, byte ptr [rcx]
#define MOV_R14B_FROM_PTR_RDX mov r14b, byte ptr [rdx]
#define MOV_R14B_FROM_PTR_RDI mov r14b, byte ptr [rdi]
#define MOV_R14B_FROM_PTR_RSI mov r14b, byte ptr [rsi]
#define MOV_R14B_FROM_PTR_RBP mov r14b, byte ptr [rbp]
#define MOV_R14B_FROM_PTR_RSP mov r14b, byte ptr [rsp]
#define MOV_R14B_FROM_PTR_R8 mov r14b, byte ptr [r8]
#define MOV_R14B_FROM_PTR_R9 mov r14b, byte ptr [r9]
#define MOV_R14B_FROM_PTR_R10 mov r14b, byte ptr [r10]
#define MOV_R14B_FROM_PTR_R11 mov r14b, byte ptr [r11]
#define MOV_R14B_FROM_PTR_R12 mov r14b, byte ptr [r12]
#define MOV_R14B_FROM_PTR_R13 mov r14b, byte ptr [r13]
#define MOV_R14B_FROM_PTR_R14 mov r14b, byte ptr [r14]
#define MOV_R14B_FROM_PTR_R15 mov r14b, byte ptr [r15]
#define MOV_R14B_FROM_PTR_EAX mov r14b, byte ptr [eax]
#define MOV_R14B_FROM_PTR_EBX mov r14b, byte ptr [ebx]
#define MOV_R14B_FROM_PTR_ECX mov r14b, byte ptr [ecx]
#define MOV_R14B_FROM_PTR_EDX mov r14b, byte ptr [edx]
#define MOV_R14B_FROM_PTR_EDI mov r14b, byte ptr [edi]
#define MOV_R14B_FROM_PTR_ESI mov r14b, byte ptr [esi]
#define MOV_R14B_FROM_PTR_EBP mov r14b, byte ptr [ebp]
#define MOV_R14B_FROM_PTR_ESP mov r14b, byte ptr [esp]

#define MOV_R15B_FROM_PTR_RAX mov r15b, byte ptr [rax]
#define MOV_R15B_FROM_PTR_RBX mov r15b, byte ptr [rbx]
#define MOV_R15B_FROM_PTR_RCX mov r15b, byte ptr [rcx]
#define MOV_R15B_FROM_PTR_RDX mov r15b, byte ptr [rdx]
#define MOV_R15B_FROM_PTR_RDI mov r15b, byte ptr [rdi]
#define MOV_R15B_FROM_PTR_RSI mov r15b, byte ptr [rsi]
#define MOV_R15B_FROM_PTR_RBP mov r15b, byte ptr [rbp]
#define MOV_R15B_FROM_PTR_RSP mov r15b, byte ptr [rsp]
#define MOV_R15B_FROM_PTR_R8 mov r15b, byte ptr [r8]
#define MOV_R15B_FROM_PTR_R9 mov r15b, byte ptr [r9]
#define MOV_R15B_FROM_PTR_R10 mov r15b, byte ptr [r10]
#define MOV_R15B_FROM_PTR_R11 mov r15b, byte ptr [r11]
#define MOV_R15B_FROM_PTR_R12 mov r15b, byte ptr [r12]
#define MOV_R15B_FROM_PTR_R13 mov r15b, byte ptr [r13]
#define MOV_R15B_FROM_PTR_R14 mov r15b, byte ptr [r14]
#define MOV_R15B_FROM_PTR_R15 mov r15b, byte ptr [r15]
#define MOV_R15B_FROM_PTR_EAX mov r15b, byte ptr [eax]
#define MOV_R15B_FROM_PTR_EBX mov r15b, byte ptr [ebx]
#define MOV_R15B_FROM_PTR_ECX mov r15b, byte ptr [ecx]
#define MOV_R15B_FROM_PTR_EDX mov r15b, byte ptr [edx]
#define MOV_R15B_FROM_PTR_EDI mov r15b, byte ptr [edi]
#define MOV_R15B_FROM_PTR_ESI mov r15b, byte ptr [esi]
#define MOV_R15B_FROM_PTR_EBP mov r15b, byte ptr [ebp]
#define MOV_R15B_FROM_PTR_ESP mov r15b, byte ptr [esp]

#define MOV_AL_TO_PTR_RAX mov byte ptr [rax], al
#define MOV_AL_TO_PTR_RBX mov byte ptr [rbx], al
#define MOV_AL_TO_PTR_RCX mov byte ptr [rcx], al
#define MOV_AL_TO_PTR_RDX mov byte ptr [rdx], al
#define MOV_AL_TO_PTR_RDI mov byte ptr [rdi], al
#define MOV_AL_TO_PTR_RSI mov byte ptr [rsi], al
#define MOV_AL_TO_PTR_RBP mov byte ptr [rbp], al
#define MOV_AL_TO_PTR_RSP mov byte ptr [rsp], al
#define MOV_AL_TO_PTR_R8 mov byte ptr [r8], al
#define MOV_AL_TO_PTR_R9 mov byte ptr [r9], al
#define MOV_AL_TO_PTR_R10 mov byte ptr [r10], al
#define MOV_AL_TO_PTR_R11 mov byte ptr [r11], al
#define MOV_AL_TO_PTR_R12 mov byte ptr [r12], al
#define MOV_AL_TO_PTR_R13 mov byte ptr [r13], al
#define MOV_AL_TO_PTR_R14 mov byte ptr [r14], al
#define MOV_AL_TO_PTR_R15 mov byte ptr [r15], al
#define MOV_AL_TO_PTR_EAX mov byte ptr [eax], al
#define MOV_AL_TO_PTR_EBX mov byte ptr [ebx], al
#define MOV_AL_TO_PTR_ECX mov byte ptr [ecx], al
#define MOV_AL_TO_PTR_EDX mov byte ptr [edx], al
#define MOV_AL_TO_PTR_EDI mov byte ptr [edi], al
#define MOV_AL_TO_PTR_ESI mov byte ptr [esi], al
#define MOV_AL_TO_PTR_EBP mov byte ptr [ebp], al
#define MOV_AL_TO_PTR_ESP mov byte ptr [esp], al

#define MOV_BL_TO_PTR_RAX mov byte ptr [rax], bl
#define MOV_BL_TO_PTR_RBX mov byte ptr [rbx], bl
#define MOV_BL_TO_PTR_RCX mov byte ptr [rcx], bl
#define MOV_BL_TO_PTR_RDX mov byte ptr [rdx], bl
#define MOV_BL_TO_PTR_RDI mov byte ptr [rdi], bl
#define MOV_BL_TO_PTR_RSI mov byte ptr [rsi], bl
#define MOV_BL_TO_PTR_RBP mov byte ptr [rbp], bl
#define MOV_BL_TO_PTR_RSP mov byte ptr [rsp], bl
#define MOV_BL_TO_PTR_R8 mov byte ptr [r8], bl
#define MOV_BL_TO_PTR_R9 mov byte ptr [r9], bl
#define MOV_BL_TO_PTR_R10 mov byte ptr [r10], bl
#define MOV_BL_TO_PTR_R11 mov byte ptr [r11], bl
#define MOV_BL_TO_PTR_R12 mov byte ptr [r12], bl
#define MOV_BL_TO_PTR_R13 mov byte ptr [r13], bl
#define MOV_BL_TO_PTR_R14 mov byte ptr [r14], bl
#define MOV_BL_TO_PTR_R15 mov byte ptr [r15], bl
#define MOV_BL_TO_PTR_EAX mov byte ptr [eax], bl
#define MOV_BL_TO_PTR_EBX mov byte ptr [ebx], bl
#define MOV_BL_TO_PTR_ECX mov byte ptr [ecx], bl
#define MOV_BL_TO_PTR_EDX mov byte ptr [edx], bl
#define MOV_BL_TO_PTR_EDI mov byte ptr [edi], bl
#define MOV_BL_TO_PTR_ESI mov byte ptr [esi], bl
#define MOV_BL_TO_PTR_EBP mov byte ptr [ebp], bl
#define MOV_BL_TO_PTR_ESP mov byte ptr [esp], bl

#define MOV_CL_TO_PTR_RAX mov byte ptr [rax], cl
#define MOV_CL_TO_PTR_RBX mov byte ptr [rbx], cl
#define MOV_CL_TO_PTR_RCX mov byte ptr [rcx], cl
#define MOV_CL_TO_PTR_RDX mov byte ptr [rdx], cl
#define MOV_CL_TO_PTR_RDI mov byte ptr [rdi], cl
#define MOV_CL_TO_PTR_RSI mov byte ptr [rsi], cl
#define MOV_CL_TO_PTR_RBP mov byte ptr [rbp], cl
#define MOV_CL_TO_PTR_RSP mov byte ptr [rsp], cl
#define MOV_CL_TO_PTR_R8 mov byte ptr [r8], cl
#define MOV_CL_TO_PTR_R9 mov byte ptr [r9], cl
#define MOV_CL_TO_PTR_R10 mov byte ptr [r10], cl
#define MOV_CL_TO_PTR_R11 mov byte ptr [r11], cl
#define MOV_CL_TO_PTR_R12 mov byte ptr [r12], cl
#define MOV_CL_TO_PTR_R13 mov byte ptr [r13], cl
#define MOV_CL_TO_PTR_R14 mov byte ptr [r14], cl
#define MOV_CL_TO_PTR_R15 mov byte ptr [r15], cl
#define MOV_CL_TO_PTR_EAX mov byte ptr [eax], cl
#define MOV_CL_TO_PTR_EBX mov byte ptr [ebx], cl
#define MOV_CL_TO_PTR_ECX mov byte ptr [ecx], cl
#define MOV_CL_TO_PTR_EDX mov byte ptr [edx], cl
#define MOV_CL_TO_PTR_EDI mov byte ptr [edi], cl
#define MOV_CL_TO_PTR_ESI mov byte ptr [esi], cl
#define MOV_CL_TO_PTR_EBP mov byte ptr [ebp], cl
#define MOV_CL_TO_PTR_ESP mov byte ptr [esp], cl

#define MOV_DL_TO_PTR_RAX mov byte ptr [rax], dl
#define MOV_DL_TO_PTR_RBX mov byte ptr [rbx], dl
#define MOV_DL_TO_PTR_RCX mov byte ptr [rcx], dl
#define MOV_DL_TO_PTR_RDX mov byte ptr [rdx], dl
#define MOV_DL_TO_PTR_RDI mov byte ptr [rdi], dl
#define MOV_DL_TO_PTR_RSI mov byte ptr [rsi], dl
#define MOV_DL_TO_PTR_RBP mov byte ptr [rbp], dl
#define MOV_DL_TO_PTR_RSP mov byte ptr [rsp], dl
#define MOV_DL_TO_PTR_R8 mov byte ptr [r8], dl
#define MOV_DL_TO_PTR_R9 mov byte ptr [r9], dl
#define MOV_DL_TO_PTR_R10 mov byte ptr [r10], dl
#define MOV_DL_TO_PTR_R11 mov byte ptr [r11], dl
#define MOV_DL_TO_PTR_R12 mov byte ptr [r12], dl
#define MOV_DL_TO_PTR_R13 mov byte ptr [r13], dl
#define MOV_DL_TO_PTR_R14 mov byte ptr [r14], dl
#define MOV_DL_TO_PTR_R15 mov byte ptr [r15], dl
#define MOV_DL_TO_PTR_EAX mov byte ptr [eax], dl
#define MOV_DL_TO_PTR_EBX mov byte ptr [ebx], dl
#define MOV_DL_TO_PTR_ECX mov byte ptr [ecx], dl
#define MOV_DL_TO_PTR_EDX mov byte ptr [edx], dl
#define MOV_DL_TO_PTR_EDI mov byte ptr [edi], dl
#define MOV_DL_TO_PTR_ESI mov byte ptr [esi], dl
#define MOV_DL_TO_PTR_EBP mov byte ptr [ebp], dl
#define MOV_DL_TO_PTR_ESP mov byte ptr [esp], dl

#define MOV_DIL_TO_PTR_RAX mov byte ptr [rax], dil
#define MOV_DIL_TO_PTR_RBX mov byte ptr [rbx], dil
#define MOV_DIL_TO_PTR_RCX mov byte ptr [rcx], dil
#define MOV_DIL_TO_PTR_RDX mov byte ptr [rdx], dil
#define MOV_DIL_TO_PTR_RDI mov byte ptr [rdi], dil
#define MOV_DIL_TO_PTR_RSI mov byte ptr [rsi], dil
#define MOV_DIL_TO_PTR_RBP mov byte ptr [rbp], dil
#define MOV_DIL_TO_PTR_RSP mov byte ptr [rsp], dil
#define MOV_DIL_TO_PTR_R8 mov byte ptr [r8], dil
#define MOV_DIL_TO_PTR_R9 mov byte ptr [r9], dil
#define MOV_DIL_TO_PTR_R10 mov byte ptr [r10], dil
#define MOV_DIL_TO_PTR_R11 mov byte ptr [r11], dil
#define MOV_DIL_TO_PTR_R12 mov byte ptr [r12], dil
#define MOV_DIL_TO_PTR_R13 mov byte ptr [r13], dil
#define MOV_DIL_TO_PTR_R14 mov byte ptr [r14], dil
#define MOV_DIL_TO_PTR_R15 mov byte ptr [r15], dil
#define MOV_DIL_TO_PTR_EAX mov byte ptr [eax], dil
#define MOV_DIL_TO_PTR_EBX mov byte ptr [ebx], dil
#define MOV_DIL_TO_PTR_ECX mov byte ptr [ecx], dil
#define MOV_DIL_TO_PTR_EDX mov byte ptr [edx], dil
#define MOV_DIL_TO_PTR_EDI mov byte ptr [edi], dil
#define MOV_DIL_TO_PTR_ESI mov byte ptr [esi], dil
#define MOV_DIL_TO_PTR_EBP mov byte ptr [ebp], dil
#define MOV_DIL_TO_PTR_ESP mov byte ptr [esp], dil

#define MOV_SIL_TO_PTR_RAX mov byte ptr [rax], sil
#define MOV_SIL_TO_PTR_RBX mov byte ptr [rbx], sil
#define MOV_SIL_TO_PTR_RCX mov byte ptr [rcx], sil
#define MOV_SIL_TO_PTR_RDX mov byte ptr [rdx], sil
#define MOV_SIL_TO_PTR_RDI mov byte ptr [rdi], sil
#define MOV_SIL_TO_PTR_RSI mov byte ptr [rsi], sil
#define MOV_SIL_TO_PTR_RBP mov byte ptr [rbp], sil
#define MOV_SIL_TO_PTR_RSP mov byte ptr [rsp], sil
#define MOV_SIL_TO_PTR_R8 mov byte ptr [r8], sil
#define MOV_SIL_TO_PTR_R9 mov byte ptr [r9], sil
#define MOV_SIL_TO_PTR_R10 mov byte ptr [r10], sil
#define MOV_SIL_TO_PTR_R11 mov byte ptr [r11], sil
#define MOV_SIL_TO_PTR_R12 mov byte ptr [r12], sil
#define MOV_SIL_TO_PTR_R13 mov byte ptr [r13], sil
#define MOV_SIL_TO_PTR_R14 mov byte ptr [r14], sil
#define MOV_SIL_TO_PTR_R15 mov byte ptr [r15], sil
#define MOV_SIL_TO_PTR_EAX mov byte ptr [eax], sil
#define MOV_SIL_TO_PTR_EBX mov byte ptr [ebx], sil
#define MOV_SIL_TO_PTR_ECX mov byte ptr [ecx], sil
#define MOV_SIL_TO_PTR_EDX mov byte ptr [edx], sil
#define MOV_SIL_TO_PTR_EDI mov byte ptr [edi], sil
#define MOV_SIL_TO_PTR_ESI mov byte ptr [esi], sil
#define MOV_SIL_TO_PTR_EBP mov byte ptr [ebp], sil
#define MOV_SIL_TO_PTR_ESP mov byte ptr [esp], sil

#define MOV_BPL_TO_PTR_RAX mov byte ptr [rax], bpl
#define MOV_BPL_TO_PTR_RBX mov byte ptr [rbx], bpl
#define MOV_BPL_TO_PTR_RCX mov byte ptr [rcx], bpl
#define MOV_BPL_TO_PTR_RDX mov byte ptr [rdx], bpl
#define MOV_BPL_TO_PTR_RDI mov byte ptr [rdi], bpl
#define MOV_BPL_TO_PTR_RSI mov byte ptr [rsi], bpl
#define MOV_BPL_TO_PTR_RBP mov byte ptr [rbp], bpl
#define MOV_BPL_TO_PTR_RSP mov byte ptr [rsp], bpl
#define MOV_BPL_TO_PTR_R8 mov byte ptr [r8], bpl
#define MOV_BPL_TO_PTR_R9 mov byte ptr [r9], bpl
#define MOV_BPL_TO_PTR_R10 mov byte ptr [r10], bpl
#define MOV_BPL_TO_PTR_R11 mov byte ptr [r11], bpl
#define MOV_BPL_TO_PTR_R12 mov byte ptr [r12], bpl
#define MOV_BPL_TO_PTR_R13 mov byte ptr [r13], bpl
#define MOV_BPL_TO_PTR_R14 mov byte ptr [r14], bpl
#define MOV_BPL_TO_PTR_R15 mov byte ptr [r15], bpl
#define MOV_BPL_TO_PTR_EAX mov byte ptr [eax], bpl
#define MOV_BPL_TO_PTR_EBX mov byte ptr [ebx], bpl
#define MOV_BPL_TO_PTR_ECX mov byte ptr [ecx], bpl
#define MOV_BPL_TO_PTR_EDX mov byte ptr [edx], bpl
#define MOV_BPL_TO_PTR_EDI mov byte ptr [edi], bpl
#define MOV_BPL_TO_PTR_ESI mov byte ptr [esi], bpl
#define MOV_BPL_TO_PTR_EBP mov byte ptr [ebp], bpl
#define MOV_BPL_TO_PTR_ESP mov byte ptr [esp], bpl

#define MOV_SPL_TO_PTR_RAX mov byte ptr [rax], spl
#define MOV_SPL_TO_PTR_RBX mov byte ptr [rbx], spl
#define MOV_SPL_TO_PTR_RCX mov byte ptr [rcx], spl
#define MOV_SPL_TO_PTR_RDX mov byte ptr [rdx], spl
#define MOV_SPL_TO_PTR_RDI mov byte ptr [rdi], spl
#define MOV_SPL_TO_PTR_RSI mov byte ptr [rsi], spl
#define MOV_SPL_TO_PTR_RBP mov byte ptr [rbp], spl
#define MOV_SPL_TO_PTR_RSP mov byte ptr [rsp], spl
#define MOV_SPL_TO_PTR_R8 mov byte ptr [r8], spl
#define MOV_SPL_TO_PTR_R9 mov byte ptr [r9], spl
#define MOV_SPL_TO_PTR_R10 mov byte ptr [r10], spl
#define MOV_SPL_TO_PTR_R11 mov byte ptr [r11], spl
#define MOV_SPL_TO_PTR_R12 mov byte ptr [r12], spl
#define MOV_SPL_TO_PTR_R13 mov byte ptr [r13], spl
#define MOV_SPL_TO_PTR_R14 mov byte ptr [r14], spl
#define MOV_SPL_TO_PTR_R15 mov byte ptr [r15], spl
#define MOV_SPL_TO_PTR_EAX mov byte ptr [eax], spl
#define MOV_SPL_TO_PTR_EBX mov byte ptr [ebx], spl
#define MOV_SPL_TO_PTR_ECX mov byte ptr [ecx], spl
#define MOV_SPL_TO_PTR_EDX mov byte ptr [edx], spl
#define MOV_SPL_TO_PTR_EDI mov byte ptr [edi], spl
#define MOV_SPL_TO_PTR_ESI mov byte ptr [esi], spl
#define MOV_SPL_TO_PTR_EBP mov byte ptr [ebp], spl
#define MOV_SPL_TO_PTR_ESP mov byte ptr [esp], spl

#define MOV_R8B_TO_PTR_RAX mov byte ptr [rax], r8b
#define MOV_R8B_TO_PTR_RBX mov byte ptr [rbx], r8b
#define MOV_R8B_TO_PTR_RCX mov byte ptr [rcx], r8b
#define MOV_R8B_TO_PTR_RDX mov byte ptr [rdx], r8b
#define MOV_R8B_TO_PTR_RDI mov byte ptr [rdi], r8b
#define MOV_R8B_TO_PTR_RSI mov byte ptr [rsi], r8b
#define MOV_R8B_TO_PTR_RBP mov byte ptr [rbp], r8b
#define MOV_R8B_TO_PTR_RSP mov byte ptr [rsp], r8b
#define MOV_R8B_TO_PTR_R8 mov byte ptr [r8], r8b
#define MOV_R8B_TO_PTR_R9 mov byte ptr [r9], r8b
#define MOV_R8B_TO_PTR_R10 mov byte ptr [r10], r8b
#define MOV_R8B_TO_PTR_R11 mov byte ptr [r11], r8b
#define MOV_R8B_TO_PTR_R12 mov byte ptr [r12], r8b
#define MOV_R8B_TO_PTR_R13 mov byte ptr [r13], r8b
#define MOV_R8B_TO_PTR_R14 mov byte ptr [r14], r8b
#define MOV_R8B_TO_PTR_R15 mov byte ptr [r15], r8b
#define MOV_R8B_TO_PTR_EAX mov byte ptr [eax], r8b
#define MOV_R8B_TO_PTR_EBX mov byte ptr [ebx], r8b
#define MOV_R8B_TO_PTR_ECX mov byte ptr [ecx], r8b
#define MOV_R8B_TO_PTR_EDX mov byte ptr [edx], r8b
#define MOV_R8B_TO_PTR_EDI mov byte ptr [edi], r8b
#define MOV_R8B_TO_PTR_ESI mov byte ptr [esi], r8b
#define MOV_R8B_TO_PTR_EBP mov byte ptr [ebp], r8b
#define MOV_R8B_TO_PTR_ESP mov byte ptr [esp], r8b

#define MOV_R9B_TO_PTR_RAX mov byte ptr [rax], r9b
#define MOV_R9B_TO_PTR_RBX mov byte ptr [rbx], r9b
#define MOV_R9B_TO_PTR_RCX mov byte ptr [rcx], r9b
#define MOV_R9B_TO_PTR_RDX mov byte ptr [rdx], r9b
#define MOV_R9B_TO_PTR_RDI mov byte ptr [rdi], r9b
#define MOV_R9B_TO_PTR_RSI mov byte ptr [rsi], r9b
#define MOV_R9B_TO_PTR_RBP mov byte ptr [rbp], r9b
#define MOV_R9B_TO_PTR_RSP mov byte ptr [rsp], r9b
#define MOV_R9B_TO_PTR_R8 mov byte ptr [r8], r9b
#define MOV_R9B_TO_PTR_R9 mov byte ptr [r9], r9b
#define MOV_R9B_TO_PTR_R10 mov byte ptr [r10], r9b
#define MOV_R9B_TO_PTR_R11 mov byte ptr [r11], r9b
#define MOV_R9B_TO_PTR_R12 mov byte ptr [r12], r9b
#define MOV_R9B_TO_PTR_R13 mov byte ptr [r13], r9b
#define MOV_R9B_TO_PTR_R14 mov byte ptr [r14], r9b
#define MOV_R9B_TO_PTR_R15 mov byte ptr [r15], r9b
#define MOV_R9B_TO_PTR_EAX mov byte ptr [eax], r9b
#define MOV_R9B_TO_PTR_EBX mov byte ptr [ebx], r9b
#define MOV_R9B_TO_PTR_ECX mov byte ptr [ecx], r9b
#define MOV_R9B_TO_PTR_EDX mov byte ptr [edx], r9b
#define MOV_R9B_TO_PTR_EDI mov byte ptr [edi], r9b
#define MOV_R9B_TO_PTR_ESI mov byte ptr [esi], r9b
#define MOV_R9B_TO_PTR_EBP mov byte ptr [ebp], r9b
#define MOV_R9B_TO_PTR_ESP mov byte ptr [esp], r9b

#define MOV_R10B_TO_PTR_RAX mov byte ptr [rax], r10b
#define MOV_R10B_TO_PTR_RBX mov byte ptr [rbx], r10b
#define MOV_R10B_TO_PTR_RCX mov byte ptr [rcx], r10b
#define MOV_R10B_TO_PTR_RDX mov byte ptr [rdx], r10b
#define MOV_R10B_TO_PTR_RDI mov byte ptr [rdi], r10b
#define MOV_R10B_TO_PTR_RSI mov byte ptr [rsi], r10b
#define MOV_R10B_TO_PTR_RBP mov byte ptr [rbp], r10b
#define MOV_R10B_TO_PTR_RSP mov byte ptr [rsp], r10b
#define MOV_R10B_TO_PTR_R8 mov byte ptr [r8], r10b
#define MOV_R10B_TO_PTR_R9 mov byte ptr [r9], r10b
#define MOV_R10B_TO_PTR_R10 mov byte ptr [r10], r10b
#define MOV_R10B_TO_PTR_R11 mov byte ptr [r11], r10b
#define MOV_R10B_TO_PTR_R12 mov byte ptr [r12], r10b
#define MOV_R10B_TO_PTR_R13 mov byte ptr [r13], r10b
#define MOV_R10B_TO_PTR_R14 mov byte ptr [r14], r10b
#define MOV_R10B_TO_PTR_R15 mov byte ptr [r15], r10b
#define MOV_R10B_TO_PTR_EAX mov byte ptr [eax], r10b
#define MOV_R10B_TO_PTR_EBX mov byte ptr [ebx], r10b
#define MOV_R10B_TO_PTR_ECX mov byte ptr [ecx], r10b
#define MOV_R10B_TO_PTR_EDX mov byte ptr [edx], r10b
#define MOV_R10B_TO_PTR_EDI mov byte ptr [edi], r10b
#define MOV_R10B_TO_PTR_ESI mov byte ptr [esi], r10b
#define MOV_R10B_TO_PTR_EBP mov byte ptr [ebp], r10b
#define MOV_R10B_TO_PTR_ESP mov byte ptr [esp], r10b

#define MOV_R11B_TO_PTR_RAX mov byte ptr [rax], r11b
#define MOV_R11B_TO_PTR_RBX mov byte ptr [rbx], r11b
#define MOV_R11B_TO_PTR_RCX mov byte ptr [rcx], r11b
#define MOV_R11B_TO_PTR_RDX mov byte ptr [rdx], r11b
#define MOV_R11B_TO_PTR_RDI mov byte ptr [rdi], r11b
#define MOV_R11B_TO_PTR_RSI mov byte ptr [rsi], r11b
#define MOV_R11B_TO_PTR_RBP mov byte ptr [rbp], r11b
#define MOV_R11B_TO_PTR_RSP mov byte ptr [rsp], r11b
#define MOV_R11B_TO_PTR_R8 mov byte ptr [r8], r11b
#define MOV_R11B_TO_PTR_R9 mov byte ptr [r9], r11b
#define MOV_R11B_TO_PTR_R10 mov byte ptr [r10], r11b
#define MOV_R11B_TO_PTR_R11 mov byte ptr [r11], r11b
#define MOV_R11B_TO_PTR_R12 mov byte ptr [r12], r11b
#define MOV_R11B_TO_PTR_R13 mov byte ptr [r13], r11b
#define MOV_R11B_TO_PTR_R14 mov byte ptr [r14], r11b
#define MOV_R11B_TO_PTR_R15 mov byte ptr [r15], r11b
#define MOV_R11B_TO_PTR_EAX mov byte ptr [eax], r11b
#define MOV_R11B_TO_PTR_EBX mov byte ptr [ebx], r11b
#define MOV_R11B_TO_PTR_ECX mov byte ptr [ecx], r11b
#define MOV_R11B_TO_PTR_EDX mov byte ptr [edx], r11b
#define MOV_R11B_TO_PTR_EDI mov byte ptr [edi], r11b
#define MOV_R11B_TO_PTR_ESI mov byte ptr [esi], r11b
#define MOV_R11B_TO_PTR_EBP mov byte ptr [ebp], r11b
#define MOV_R11B_TO_PTR_ESP mov byte ptr [esp], r11b

#define MOV_R12B_TO_PTR_RAX mov byte ptr [rax], r12b
#define MOV_R12B_TO_PTR_RBX mov byte ptr [rbx], r12b
#define MOV_R12B_TO_PTR_RCX mov byte ptr [rcx], r12b
#define MOV_R12B_TO_PTR_RDX mov byte ptr [rdx], r12b
#define MOV_R12B_TO_PTR_RDI mov byte ptr [rdi], r12b
#define MOV_R12B_TO_PTR_RSI mov byte ptr [rsi], r12b
#define MOV_R12B_TO_PTR_RBP mov byte ptr [rbp], r12b
#define MOV_R12B_TO_PTR_RSP mov byte ptr [rsp], r12b
#define MOV_R12B_TO_PTR_R8 mov byte ptr [r8], r12b
#define MOV_R12B_TO_PTR_R9 mov byte ptr [r9], r12b
#define MOV_R12B_TO_PTR_R10 mov byte ptr [r10], r12b
#define MOV_R12B_TO_PTR_R11 mov byte ptr [r11], r12b
#define MOV_R12B_TO_PTR_R12 mov byte ptr [r12], r12b
#define MOV_R12B_TO_PTR_R13 mov byte ptr [r13], r12b
#define MOV_R12B_TO_PTR_R14 mov byte ptr [r14], r12b
#define MOV_R12B_TO_PTR_R15 mov byte ptr [r15], r12b
#define MOV_R12B_TO_PTR_EAX mov byte ptr [eax], r12b
#define MOV_R12B_TO_PTR_EBX mov byte ptr [ebx], r12b
#define MOV_R12B_TO_PTR_ECX mov byte ptr [ecx], r12b
#define MOV_R12B_TO_PTR_EDX mov byte ptr [edx], r12b
#define MOV_R12B_TO_PTR_EDI mov byte ptr [edi], r12b
#define MOV_R12B_TO_PTR_ESI mov byte ptr [esi], r12b
#define MOV_R12B_TO_PTR_EBP mov byte ptr [ebp], r12b
#define MOV_R12B_TO_PTR_ESP mov byte ptr [esp], r12b

#define MOV_R13B_TO_PTR_RAX mov byte ptr [rax], r13b
#define MOV_R13B_TO_PTR_RBX mov byte ptr [rbx], r13b
#define MOV_R13B_TO_PTR_RCX mov byte ptr [rcx], r13b
#define MOV_R13B_TO_PTR_RDX mov byte ptr [rdx], r13b
#define MOV_R13B_TO_PTR_RDI mov byte ptr [rdi], r13b
#define MOV_R13B_TO_PTR_RSI mov byte ptr [rsi], r13b
#define MOV_R13B_TO_PTR_RBP mov byte ptr [rbp], r13b
#define MOV_R13B_TO_PTR_RSP mov byte ptr [rsp], r13b
#define MOV_R13B_TO_PTR_R8 mov byte ptr [r8], r13b
#define MOV_R13B_TO_PTR_R9 mov byte ptr [r9], r13b
#define MOV_R13B_TO_PTR_R10 mov byte ptr [r10], r13b
#define MOV_R13B_TO_PTR_R11 mov byte ptr [r11], r13b
#define MOV_R13B_TO_PTR_R12 mov byte ptr [r12], r13b
#define MOV_R13B_TO_PTR_R13 mov byte ptr [r13], r13b
#define MOV_R13B_TO_PTR_R14 mov byte ptr [r14], r13b
#define MOV_R13B_TO_PTR_R15 mov byte ptr [r15], r13b
#define MOV_R13B_TO_PTR_EAX mov byte ptr [eax], r13b
#define MOV_R13B_TO_PTR_EBX mov byte ptr [ebx], r13b
#define MOV_R13B_TO_PTR_ECX mov byte ptr [ecx], r13b
#define MOV_R13B_TO_PTR_EDX mov byte ptr [edx], r13b
#define MOV_R13B_TO_PTR_EDI mov byte ptr [edi], r13b
#define MOV_R13B_TO_PTR_ESI mov byte ptr [esi], r13b
#define MOV_R13B_TO_PTR_EBP mov byte ptr [ebp], r13b
#define MOV_R13B_TO_PTR_ESP mov byte ptr [esp], r13b

#define MOV_R14B_TO_PTR_RAX mov byte ptr [rax], r14b
#define MOV_R14B_TO_PTR_RBX mov byte ptr [rbx], r14b
#define MOV_R14B_TO_PTR_RCX mov byte ptr [rcx], r14b
#define MOV_R14B_TO_PTR_RDX mov byte ptr [rdx], r14b
#define MOV_R14B_TO_PTR_RDI mov byte ptr [rdi], r14b
#define MOV_R14B_TO_PTR_RSI mov byte ptr [rsi], r14b
#define MOV_R14B_TO_PTR_RBP mov byte ptr [rbp], r14b
#define MOV_R14B_TO_PTR_RSP mov byte ptr [rsp], r14b
#define MOV_R14B_TO_PTR_R8 mov byte ptr [r8], r14b
#define MOV_R14B_TO_PTR_R9 mov byte ptr [r9], r14b
#define MOV_R14B_TO_PTR_R10 mov byte ptr [r10], r14b
#define MOV_R14B_TO_PTR_R11 mov byte ptr [r11], r14b
#define MOV_R14B_TO_PTR_R12 mov byte ptr [r12], r14b
#define MOV_R14B_TO_PTR_R13 mov byte ptr [r13], r14b
#define MOV_R14B_TO_PTR_R14 mov byte ptr [r14], r14b
#define MOV_R14B_TO_PTR_R15 mov byte ptr [r15], r14b
#define MOV_R14B_TO_PTR_EAX mov byte ptr [eax], r14b
#define MOV_R14B_TO_PTR_EBX mov byte ptr [ebx], r14b
#define MOV_R14B_TO_PTR_ECX mov byte ptr [ecx], r14b
#define MOV_R14B_TO_PTR_EDX mov byte ptr [edx], r14b
#define MOV_R14B_TO_PTR_EDI mov byte ptr [edi], r14b
#define MOV_R14B_TO_PTR_ESI mov byte ptr [esi], r14b
#define MOV_R14B_TO_PTR_EBP mov byte ptr [ebp], r14b
#define MOV_R14B_TO_PTR_ESP mov byte ptr [esp], r14b

#define MOV_R15B_TO_PTR_RAX mov byte ptr [rax], r15b
#define MOV_R15B_TO_PTR_RBX mov byte ptr [rbx], r15b
#define MOV_R15B_TO_PTR_RCX mov byte ptr [rcx], r15b
#define MOV_R15B_TO_PTR_RDX mov byte ptr [rdx], r15b
#define MOV_R15B_TO_PTR_RDI mov byte ptr [rdi], r15b
#define MOV_R15B_TO_PTR_RSI mov byte ptr [rsi], r15b
#define MOV_R15B_TO_PTR_RBP mov byte ptr [rbp], r15b
#define MOV_R15B_TO_PTR_RSP mov byte ptr [rsp], r15b
#define MOV_R15B_TO_PTR_R8 mov byte ptr [r8], r15b
#define MOV_R15B_TO_PTR_R9 mov byte ptr [r9], r15b
#define MOV_R15B_TO_PTR_R10 mov byte ptr [r10], r15b
#define MOV_R15B_TO_PTR_R11 mov byte ptr [r11], r15b
#define MOV_R15B_TO_PTR_R12 mov byte ptr [r12], r15b
#define MOV_R15B_TO_PTR_R13 mov byte ptr [r13], r15b
#define MOV_R15B_TO_PTR_R14 mov byte ptr [r14], r15b
#define MOV_R15B_TO_PTR_R15 mov byte ptr [r15], r15b
#define MOV_R15B_TO_PTR_EAX mov byte ptr [eax], r15b
#define MOV_R15B_TO_PTR_EBX mov byte ptr [ebx], r15b
#define MOV_R15B_TO_PTR_ECX mov byte ptr [ecx], r15b
#define MOV_R15B_TO_PTR_EDX mov byte ptr [edx], r15b
#define MOV_R15B_TO_PTR_EDI mov byte ptr [edi], r15b
#define MOV_R15B_TO_PTR_ESI mov byte ptr [esi], r15b
#define MOV_R15B_TO_PTR_EBP mov byte ptr [ebp], r15b
#define MOV_R15B_TO_PTR_ESP mov byte ptr [esp], r15b

#define MOV_AL_FROM_PTR_RAX_(VALUE) mov al, byte ptr [rax + VALUE]
#define MOV_AL_FROM_PTR_RBX_(VALUE) mov al, byte ptr [rbx + VALUE]
#define MOV_AL_FROM_PTR_RCX_(VALUE) mov al, byte ptr [rcx + VALUE]
#define MOV_AL_FROM_PTR_RDX_(VALUE) mov al, byte ptr [rdx + VALUE]
#define MOV_AL_FROM_PTR_RDI_(VALUE) mov al, byte ptr [rdi + VALUE]
#define MOV_AL_FROM_PTR_RSI_(VALUE) mov al, byte ptr [rsi + VALUE]
#define MOV_AL_FROM_PTR_RBP_(VALUE) mov al, byte ptr [rbp + VALUE]
#define MOV_AL_FROM_PTR_RSP_(VALUE) mov al, byte ptr [rsp + VALUE]
#define MOV_AL_FROM_PTR_R8_(VALUE) mov al, byte ptr [r8 + VALUE]
#define MOV_AL_FROM_PTR_R9_(VALUE) mov al, byte ptr [r9 + VALUE]
#define MOV_AL_FROM_PTR_R10_(VALUE) mov al, byte ptr [r10 + VALUE]
#define MOV_AL_FROM_PTR_R11_(VALUE) mov al, byte ptr [r11 + VALUE]
#define MOV_AL_FROM_PTR_R12_(VALUE) mov al, byte ptr [r12 + VALUE]
#define MOV_AL_FROM_PTR_R13_(VALUE) mov al, byte ptr [r13 + VALUE]
#define MOV_AL_FROM_PTR_R14_(VALUE) mov al, byte ptr [r14 + VALUE]
#define MOV_AL_FROM_PTR_R15_(VALUE) mov al, byte ptr [r15 + VALUE]
#define MOV_AL_FROM_PTR_EAX_(VALUE) mov al, byte ptr [eax + VALUE]
#define MOV_AL_FROM_PTR_EBX_(VALUE) mov al, byte ptr [ebx + VALUE]
#define MOV_AL_FROM_PTR_ECX_(VALUE) mov al, byte ptr [ecx + VALUE]
#define MOV_AL_FROM_PTR_EDX_(VALUE) mov al, byte ptr [edx + VALUE]
#define MOV_AL_FROM_PTR_EDI_(VALUE) mov al, byte ptr [edi + VALUE]
#define MOV_AL_FROM_PTR_ESI_(VALUE) mov al, byte ptr [esi + VALUE]
#define MOV_AL_FROM_PTR_EBP_(VALUE) mov al, byte ptr [ebp + VALUE]
#define MOV_AL_FROM_PTR_ESP_(VALUE) mov al, byte ptr [esp + VALUE]

#define MOV_BL_FROM_PTR_RAX_(VALUE) mov bl, byte ptr [rax + VALUE]
#define MOV_BL_FROM_PTR_RBX_(VALUE) mov bl, byte ptr [rbx + VALUE]
#define MOV_BL_FROM_PTR_RCX_(VALUE) mov bl, byte ptr [rcx + VALUE]
#define MOV_BL_FROM_PTR_RDX_(VALUE) mov bl, byte ptr [rdx + VALUE]
#define MOV_BL_FROM_PTR_RDI_(VALUE) mov bl, byte ptr [rdi + VALUE]
#define MOV_BL_FROM_PTR_RSI_(VALUE) mov bl, byte ptr [rsi + VALUE]
#define MOV_BL_FROM_PTR_RBP_(VALUE) mov bl, byte ptr [rbp + VALUE]
#define MOV_BL_FROM_PTR_RSP_(VALUE) mov bl, byte ptr [rsp + VALUE]
#define MOV_BL_FROM_PTR_R8_(VALUE) mov bl, byte ptr [r8 + VALUE]
#define MOV_BL_FROM_PTR_R9_(VALUE) mov bl, byte ptr [r9 + VALUE]
#define MOV_BL_FROM_PTR_R10_(VALUE) mov bl, byte ptr [r10 + VALUE]
#define MOV_BL_FROM_PTR_R11_(VALUE) mov bl, byte ptr [r11 + VALUE]
#define MOV_BL_FROM_PTR_R12_(VALUE) mov bl, byte ptr [r12 + VALUE]
#define MOV_BL_FROM_PTR_R13_(VALUE) mov bl, byte ptr [r13 + VALUE]
#define MOV_BL_FROM_PTR_R14_(VALUE) mov bl, byte ptr [r14 + VALUE]
#define MOV_BL_FROM_PTR_R15_(VALUE) mov bl, byte ptr [r15 + VALUE]
#define MOV_BL_FROM_PTR_EAX_(VALUE) mov bl, byte ptr [eax + VALUE]
#define MOV_BL_FROM_PTR_EBX_(VALUE) mov bl, byte ptr [ebx + VALUE]
#define MOV_BL_FROM_PTR_ECX_(VALUE) mov bl, byte ptr [ecx + VALUE]
#define MOV_BL_FROM_PTR_EDX_(VALUE) mov bl, byte ptr [edx + VALUE]
#define MOV_BL_FROM_PTR_EDI_(VALUE) mov bl, byte ptr [edi + VALUE]
#define MOV_BL_FROM_PTR_ESI_(VALUE) mov bl, byte ptr [esi + VALUE]
#define MOV_BL_FROM_PTR_EBP_(VALUE) mov bl, byte ptr [ebp + VALUE]
#define MOV_BL_FROM_PTR_ESP_(VALUE) mov bl, byte ptr [esp + VALUE]

#define MOV_CL_FROM_PTR_RAX_(VALUE) mov cl, byte ptr [rax + VALUE]
#define MOV_CL_FROM_PTR_RBX_(VALUE) mov cl, byte ptr [rbx + VALUE]
#define MOV_CL_FROM_PTR_RCX_(VALUE) mov cl, byte ptr [rcx + VALUE]
#define MOV_CL_FROM_PTR_RDX_(VALUE) mov cl, byte ptr [rdx + VALUE]
#define MOV_CL_FROM_PTR_RDI_(VALUE) mov cl, byte ptr [rdi + VALUE]
#define MOV_CL_FROM_PTR_RSI_(VALUE) mov cl, byte ptr [rsi + VALUE]
#define MOV_CL_FROM_PTR_RBP_(VALUE) mov cl, byte ptr [rbp + VALUE]
#define MOV_CL_FROM_PTR_RSP_(VALUE) mov cl, byte ptr [rsp + VALUE]
#define MOV_CL_FROM_PTR_R8_(VALUE) mov cl, byte ptr [r8 + VALUE]
#define MOV_CL_FROM_PTR_R9_(VALUE) mov cl, byte ptr [r9 + VALUE]
#define MOV_CL_FROM_PTR_R10_(VALUE) mov cl, byte ptr [r10 + VALUE]
#define MOV_CL_FROM_PTR_R11_(VALUE) mov cl, byte ptr [r11 + VALUE]
#define MOV_CL_FROM_PTR_R12_(VALUE) mov cl, byte ptr [r12 + VALUE]
#define MOV_CL_FROM_PTR_R13_(VALUE) mov cl, byte ptr [r13 + VALUE]
#define MOV_CL_FROM_PTR_R14_(VALUE) mov cl, byte ptr [r14 + VALUE]
#define MOV_CL_FROM_PTR_R15_(VALUE) mov cl, byte ptr [r15 + VALUE]
#define MOV_CL_FROM_PTR_EAX_(VALUE) mov cl, byte ptr [eax + VALUE]
#define MOV_CL_FROM_PTR_EBX_(VALUE) mov cl, byte ptr [ebx + VALUE]
#define MOV_CL_FROM_PTR_ECX_(VALUE) mov cl, byte ptr [ecx + VALUE]
#define MOV_CL_FROM_PTR_EDX_(VALUE) mov cl, byte ptr [edx + VALUE]
#define MOV_CL_FROM_PTR_EDI_(VALUE) mov cl, byte ptr [edi + VALUE]
#define MOV_CL_FROM_PTR_ESI_(VALUE) mov cl, byte ptr [esi + VALUE]
#define MOV_CL_FROM_PTR_EBP_(VALUE) mov cl, byte ptr [ebp + VALUE]
#define MOV_CL_FROM_PTR_ESP_(VALUE) mov cl, byte ptr [esp + VALUE]

#define MOV_DL_FROM_PTR_RAX_(VALUE) mov dl, byte ptr [rax + VALUE]
#define MOV_DL_FROM_PTR_RBX_(VALUE) mov dl, byte ptr [rbx + VALUE]
#define MOV_DL_FROM_PTR_RCX_(VALUE) mov dl, byte ptr [rcx + VALUE]
#define MOV_DL_FROM_PTR_RDX_(VALUE) mov dl, byte ptr [rdx + VALUE]
#define MOV_DL_FROM_PTR_RDI_(VALUE) mov dl, byte ptr [rdi + VALUE]
#define MOV_DL_FROM_PTR_RSI_(VALUE) mov dl, byte ptr [rsi + VALUE]
#define MOV_DL_FROM_PTR_RBP_(VALUE) mov dl, byte ptr [rbp + VALUE]
#define MOV_DL_FROM_PTR_RSP_(VALUE) mov dl, byte ptr [rsp + VALUE]
#define MOV_DL_FROM_PTR_R8_(VALUE) mov dl, byte ptr [r8 + VALUE]
#define MOV_DL_FROM_PTR_R9_(VALUE) mov dl, byte ptr [r9 + VALUE]
#define MOV_DL_FROM_PTR_R10_(VALUE) mov dl, byte ptr [r10 + VALUE]
#define MOV_DL_FROM_PTR_R11_(VALUE) mov dl, byte ptr [r11 + VALUE]
#define MOV_DL_FROM_PTR_R12_(VALUE) mov dl, byte ptr [r12 + VALUE]
#define MOV_DL_FROM_PTR_R13_(VALUE) mov dl, byte ptr [r13 + VALUE]
#define MOV_DL_FROM_PTR_R14_(VALUE) mov dl, byte ptr [r14 + VALUE]
#define MOV_DL_FROM_PTR_R15_(VALUE) mov dl, byte ptr [r15 + VALUE]
#define MOV_DL_FROM_PTR_EAX_(VALUE) mov dl, byte ptr [eax + VALUE]
#define MOV_DL_FROM_PTR_EBX_(VALUE) mov dl, byte ptr [ebx + VALUE]
#define MOV_DL_FROM_PTR_ECX_(VALUE) mov dl, byte ptr [ecx + VALUE]
#define MOV_DL_FROM_PTR_EDX_(VALUE) mov dl, byte ptr [edx + VALUE]
#define MOV_DL_FROM_PTR_EDI_(VALUE) mov dl, byte ptr [edi + VALUE]
#define MOV_DL_FROM_PTR_ESI_(VALUE) mov dl, byte ptr [esi + VALUE]
#define MOV_DL_FROM_PTR_EBP_(VALUE) mov dl, byte ptr [ebp + VALUE]
#define MOV_DL_FROM_PTR_ESP_(VALUE) mov dl, byte ptr [esp + VALUE]

#define MOV_DIL_FROM_PTR_RAX_(VALUE) mov dil, byte ptr [rax + VALUE]
#define MOV_DIL_FROM_PTR_RBX_(VALUE) mov dil, byte ptr [rbx + VALUE]
#define MOV_DIL_FROM_PTR_RCX_(VALUE) mov dil, byte ptr [rcx + VALUE]
#define MOV_DIL_FROM_PTR_RDX_(VALUE) mov dil, byte ptr [rdx + VALUE]
#define MOV_DIL_FROM_PTR_RDI_(VALUE) mov dil, byte ptr [rdi + VALUE]
#define MOV_DIL_FROM_PTR_RSI_(VALUE) mov dil, byte ptr [rsi + VALUE]
#define MOV_DIL_FROM_PTR_RBP_(VALUE) mov dil, byte ptr [rbp + VALUE]
#define MOV_DIL_FROM_PTR_RSP_(VALUE) mov dil, byte ptr [rsp + VALUE]
#define MOV_DIL_FROM_PTR_R8_(VALUE) mov dil, byte ptr [r8 + VALUE]
#define MOV_DIL_FROM_PTR_R9_(VALUE) mov dil, byte ptr [r9 + VALUE]
#define MOV_DIL_FROM_PTR_R10_(VALUE) mov dil, byte ptr [r10 + VALUE]
#define MOV_DIL_FROM_PTR_R11_(VALUE) mov dil, byte ptr [r11 + VALUE]
#define MOV_DIL_FROM_PTR_R12_(VALUE) mov dil, byte ptr [r12 + VALUE]
#define MOV_DIL_FROM_PTR_R13_(VALUE) mov dil, byte ptr [r13 + VALUE]
#define MOV_DIL_FROM_PTR_R14_(VALUE) mov dil, byte ptr [r14 + VALUE]
#define MOV_DIL_FROM_PTR_R15_(VALUE) mov dil, byte ptr [r15 + VALUE]
#define MOV_DIL_FROM_PTR_EAX_(VALUE) mov dil, byte ptr [eax + VALUE]
#define MOV_DIL_FROM_PTR_EBX_(VALUE) mov dil, byte ptr [ebx + VALUE]
#define MOV_DIL_FROM_PTR_ECX_(VALUE) mov dil, byte ptr [ecx + VALUE]
#define MOV_DIL_FROM_PTR_EDX_(VALUE) mov dil, byte ptr [edx + VALUE]
#define MOV_DIL_FROM_PTR_EDI_(VALUE) mov dil, byte ptr [edi + VALUE]
#define MOV_DIL_FROM_PTR_ESI_(VALUE) mov dil, byte ptr [esi + VALUE]
#define MOV_DIL_FROM_PTR_EBP_(VALUE) mov dil, byte ptr [ebp + VALUE]
#define MOV_DIL_FROM_PTR_ESP_(VALUE) mov dil, byte ptr [esp + VALUE]

#define MOV_SIL_FROM_PTR_RAX_(VALUE) mov sil, byte ptr [rax + VALUE]
#define MOV_SIL_FROM_PTR_RBX_(VALUE) mov sil, byte ptr [rbx + VALUE]
#define MOV_SIL_FROM_PTR_RCX_(VALUE) mov sil, byte ptr [rcx + VALUE]
#define MOV_SIL_FROM_PTR_RDX_(VALUE) mov sil, byte ptr [rdx + VALUE]
#define MOV_SIL_FROM_PTR_RDI_(VALUE) mov sil, byte ptr [rdi + VALUE]
#define MOV_SIL_FROM_PTR_RSI_(VALUE) mov sil, byte ptr [rsi + VALUE]
#define MOV_SIL_FROM_PTR_RBP_(VALUE) mov sil, byte ptr [rbp + VALUE]
#define MOV_SIL_FROM_PTR_RSP_(VALUE) mov sil, byte ptr [rsp + VALUE]
#define MOV_SIL_FROM_PTR_R8_(VALUE) mov sil, byte ptr [r8 + VALUE]
#define MOV_SIL_FROM_PTR_R9_(VALUE) mov sil, byte ptr [r9 + VALUE]
#define MOV_SIL_FROM_PTR_R10_(VALUE) mov sil, byte ptr [r10 + VALUE]
#define MOV_SIL_FROM_PTR_R11_(VALUE) mov sil, byte ptr [r11 + VALUE]
#define MOV_SIL_FROM_PTR_R12_(VALUE) mov sil, byte ptr [r12 + VALUE]
#define MOV_SIL_FROM_PTR_R13_(VALUE) mov sil, byte ptr [r13 + VALUE]
#define MOV_SIL_FROM_PTR_R14_(VALUE) mov sil, byte ptr [r14 + VALUE]
#define MOV_SIL_FROM_PTR_R15_(VALUE) mov sil, byte ptr [r15 + VALUE]
#define MOV_SIL_FROM_PTR_EAX_(VALUE) mov sil, byte ptr [eax + VALUE]
#define MOV_SIL_FROM_PTR_EBX_(VALUE) mov sil, byte ptr [ebx + VALUE]
#define MOV_SIL_FROM_PTR_ECX_(VALUE) mov sil, byte ptr [ecx + VALUE]
#define MOV_SIL_FROM_PTR_EDX_(VALUE) mov sil, byte ptr [edx + VALUE]
#define MOV_SIL_FROM_PTR_EDI_(VALUE) mov sil, byte ptr [edi + VALUE]
#define MOV_SIL_FROM_PTR_ESI_(VALUE) mov sil, byte ptr [esi + VALUE]
#define MOV_SIL_FROM_PTR_EBP_(VALUE) mov sil, byte ptr [ebp + VALUE]
#define MOV_SIL_FROM_PTR_ESP_(VALUE) mov sil, byte ptr [esp + VALUE]

#define MOV_BPL_FROM_PTR_RAX_(VALUE) mov bpl, byte ptr [rax + VALUE]
#define MOV_BPL_FROM_PTR_RBX_(VALUE) mov bpl, byte ptr [rbx + VALUE]
#define MOV_BPL_FROM_PTR_RCX_(VALUE) mov bpl, byte ptr [rcx + VALUE]
#define MOV_BPL_FROM_PTR_RDX_(VALUE) mov bpl, byte ptr [rdx + VALUE]
#define MOV_BPL_FROM_PTR_RDI_(VALUE) mov bpl, byte ptr [rdi + VALUE]
#define MOV_BPL_FROM_PTR_RSI_(VALUE) mov bpl, byte ptr [rsi + VALUE]
#define MOV_BPL_FROM_PTR_RBP_(VALUE) mov bpl, byte ptr [rbp + VALUE]
#define MOV_BPL_FROM_PTR_RSP_(VALUE) mov bpl, byte ptr [rsp + VALUE]
#define MOV_BPL_FROM_PTR_R8_(VALUE) mov bpl, byte ptr [r8 + VALUE]
#define MOV_BPL_FROM_PTR_R9_(VALUE) mov bpl, byte ptr [r9 + VALUE]
#define MOV_BPL_FROM_PTR_R10_(VALUE) mov bpl, byte ptr [r10 + VALUE]
#define MOV_BPL_FROM_PTR_R11_(VALUE) mov bpl, byte ptr [r11 + VALUE]
#define MOV_BPL_FROM_PTR_R12_(VALUE) mov bpl, byte ptr [r12 + VALUE]
#define MOV_BPL_FROM_PTR_R13_(VALUE) mov bpl, byte ptr [r13 + VALUE]
#define MOV_BPL_FROM_PTR_R14_(VALUE) mov bpl, byte ptr [r14 + VALUE]
#define MOV_BPL_FROM_PTR_R15_(VALUE) mov bpl, byte ptr [r15 + VALUE]
#define MOV_BPL_FROM_PTR_EAX_(VALUE) mov bpl, byte ptr [eax + VALUE]
#define MOV_BPL_FROM_PTR_EBX_(VALUE) mov bpl, byte ptr [ebx + VALUE]
#define MOV_BPL_FROM_PTR_ECX_(VALUE) mov bpl, byte ptr [ecx + VALUE]
#define MOV_BPL_FROM_PTR_EDX_(VALUE) mov bpl, byte ptr [edx + VALUE]
#define MOV_BPL_FROM_PTR_EDI_(VALUE) mov bpl, byte ptr [edi + VALUE]
#define MOV_BPL_FROM_PTR_ESI_(VALUE) mov bpl, byte ptr [esi + VALUE]
#define MOV_BPL_FROM_PTR_EBP_(VALUE) mov bpl, byte ptr [ebp + VALUE]
#define MOV_BPL_FROM_PTR_ESP_(VALUE) mov bpl, byte ptr [esp + VALUE]

#define MOV_SPL_FROM_PTR_RAX_(VALUE) mov spl, byte ptr [rax + VALUE]
#define MOV_SPL_FROM_PTR_RBX_(VALUE) mov spl, byte ptr [rbx + VALUE]
#define MOV_SPL_FROM_PTR_RCX_(VALUE) mov spl, byte ptr [rcx + VALUE]
#define MOV_SPL_FROM_PTR_RDX_(VALUE) mov spl, byte ptr [rdx + VALUE]
#define MOV_SPL_FROM_PTR_RDI_(VALUE) mov spl, byte ptr [rdi + VALUE]
#define MOV_SPL_FROM_PTR_RSI_(VALUE) mov spl, byte ptr [rsi + VALUE]
#define MOV_SPL_FROM_PTR_RBP_(VALUE) mov spl, byte ptr [rbp + VALUE]
#define MOV_SPL_FROM_PTR_RSP_(VALUE) mov spl, byte ptr [rsp + VALUE]
#define MOV_SPL_FROM_PTR_R8_(VALUE) mov spl, byte ptr [r8 + VALUE]
#define MOV_SPL_FROM_PTR_R9_(VALUE) mov spl, byte ptr [r9 + VALUE]
#define MOV_SPL_FROM_PTR_R10_(VALUE) mov spl, byte ptr [r10 + VALUE]
#define MOV_SPL_FROM_PTR_R11_(VALUE) mov spl, byte ptr [r11 + VALUE]
#define MOV_SPL_FROM_PTR_R12_(VALUE) mov spl, byte ptr [r12 + VALUE]
#define MOV_SPL_FROM_PTR_R13_(VALUE) mov spl, byte ptr [r13 + VALUE]
#define MOV_SPL_FROM_PTR_R14_(VALUE) mov spl, byte ptr [r14 + VALUE]
#define MOV_SPL_FROM_PTR_R15_(VALUE) mov spl, byte ptr [r15 + VALUE]
#define MOV_SPL_FROM_PTR_EAX_(VALUE) mov spl, byte ptr [eax + VALUE]
#define MOV_SPL_FROM_PTR_EBX_(VALUE) mov spl, byte ptr [ebx + VALUE]
#define MOV_SPL_FROM_PTR_ECX_(VALUE) mov spl, byte ptr [ecx + VALUE]
#define MOV_SPL_FROM_PTR_EDX_(VALUE) mov spl, byte ptr [edx + VALUE]
#define MOV_SPL_FROM_PTR_EDI_(VALUE) mov spl, byte ptr [edi + VALUE]
#define MOV_SPL_FROM_PTR_ESI_(VALUE) mov spl, byte ptr [esi + VALUE]
#define MOV_SPL_FROM_PTR_EBP_(VALUE) mov spl, byte ptr [ebp + VALUE]
#define MOV_SPL_FROM_PTR_ESP_(VALUE) mov spl, byte ptr [esp + VALUE]

#define MOV_R8B_FROM_PTR_RAX_(VALUE) mov r8b, byte ptr [rax + VALUE]
#define MOV_R8B_FROM_PTR_RBX_(VALUE) mov r8b, byte ptr [rbx + VALUE]
#define MOV_R8B_FROM_PTR_RCX_(VALUE) mov r8b, byte ptr [rcx + VALUE]
#define MOV_R8B_FROM_PTR_RDX_(VALUE) mov r8b, byte ptr [rdx + VALUE]
#define MOV_R8B_FROM_PTR_RDI_(VALUE) mov r8b, byte ptr [rdi + VALUE]
#define MOV_R8B_FROM_PTR_RSI_(VALUE) mov r8b, byte ptr [rsi + VALUE]
#define MOV_R8B_FROM_PTR_RBP_(VALUE) mov r8b, byte ptr [rbp + VALUE]
#define MOV_R8B_FROM_PTR_RSP_(VALUE) mov r8b, byte ptr [rsp + VALUE]
#define MOV_R8B_FROM_PTR_R8_(VALUE) mov r8b, byte ptr [r8 + VALUE]
#define MOV_R8B_FROM_PTR_R9_(VALUE) mov r8b, byte ptr [r9 + VALUE]
#define MOV_R8B_FROM_PTR_R10_(VALUE) mov r8b, byte ptr [r10 + VALUE]
#define MOV_R8B_FROM_PTR_R11_(VALUE) mov r8b, byte ptr [r11 + VALUE]
#define MOV_R8B_FROM_PTR_R12_(VALUE) mov r8b, byte ptr [r12 + VALUE]
#define MOV_R8B_FROM_PTR_R13_(VALUE) mov r8b, byte ptr [r13 + VALUE]
#define MOV_R8B_FROM_PTR_R14_(VALUE) mov r8b, byte ptr [r14 + VALUE]
#define MOV_R8B_FROM_PTR_R15_(VALUE) mov r8b, byte ptr [r15 + VALUE]
#define MOV_R8B_FROM_PTR_EAX_(VALUE) mov r8b, byte ptr [eax + VALUE]
#define MOV_R8B_FROM_PTR_EBX_(VALUE) mov r8b, byte ptr [ebx + VALUE]
#define MOV_R8B_FROM_PTR_ECX_(VALUE) mov r8b, byte ptr [ecx + VALUE]
#define MOV_R8B_FROM_PTR_EDX_(VALUE) mov r8b, byte ptr [edx + VALUE]
#define MOV_R8B_FROM_PTR_EDI_(VALUE) mov r8b, byte ptr [edi + VALUE]
#define MOV_R8B_FROM_PTR_ESI_(VALUE) mov r8b, byte ptr [esi + VALUE]
#define MOV_R8B_FROM_PTR_EBP_(VALUE) mov r8b, byte ptr [ebp + VALUE]
#define MOV_R8B_FROM_PTR_ESP_(VALUE) mov r8b, byte ptr [esp + VALUE]

#define MOV_R9B_FROM_PTR_RAX_(VALUE) mov r9b, byte ptr [rax + VALUE]
#define MOV_R9B_FROM_PTR_RBX_(VALUE) mov r9b, byte ptr [rbx + VALUE]
#define MOV_R9B_FROM_PTR_RCX_(VALUE) mov r9b, byte ptr [rcx + VALUE]
#define MOV_R9B_FROM_PTR_RDX_(VALUE) mov r9b, byte ptr [rdx + VALUE]
#define MOV_R9B_FROM_PTR_RDI_(VALUE) mov r9b, byte ptr [rdi + VALUE]
#define MOV_R9B_FROM_PTR_RSI_(VALUE) mov r9b, byte ptr [rsi + VALUE]
#define MOV_R9B_FROM_PTR_RBP_(VALUE) mov r9b, byte ptr [rbp + VALUE]
#define MOV_R9B_FROM_PTR_RSP_(VALUE) mov r9b, byte ptr [rsp + VALUE]
#define MOV_R9B_FROM_PTR_R8_(VALUE) mov r9b, byte ptr [r8 + VALUE]
#define MOV_R9B_FROM_PTR_R9_(VALUE) mov r9b, byte ptr [r9 + VALUE]
#define MOV_R9B_FROM_PTR_R10_(VALUE) mov r9b, byte ptr [r10 + VALUE]
#define MOV_R9B_FROM_PTR_R11_(VALUE) mov r9b, byte ptr [r11 + VALUE]
#define MOV_R9B_FROM_PTR_R12_(VALUE) mov r9b, byte ptr [r12 + VALUE]
#define MOV_R9B_FROM_PTR_R13_(VALUE) mov r9b, byte ptr [r13 + VALUE]
#define MOV_R9B_FROM_PTR_R14_(VALUE) mov r9b, byte ptr [r14 + VALUE]
#define MOV_R9B_FROM_PTR_R15_(VALUE) mov r9b, byte ptr [r15 + VALUE]
#define MOV_R9B_FROM_PTR_EAX_(VALUE) mov r9b, byte ptr [eax + VALUE]
#define MOV_R9B_FROM_PTR_EBX_(VALUE) mov r9b, byte ptr [ebx + VALUE]
#define MOV_R9B_FROM_PTR_ECX_(VALUE) mov r9b, byte ptr [ecx + VALUE]
#define MOV_R9B_FROM_PTR_EDX_(VALUE) mov r9b, byte ptr [edx + VALUE]
#define MOV_R9B_FROM_PTR_EDI_(VALUE) mov r9b, byte ptr [edi + VALUE]
#define MOV_R9B_FROM_PTR_ESI_(VALUE) mov r9b, byte ptr [esi + VALUE]
#define MOV_R9B_FROM_PTR_EBP_(VALUE) mov r9b, byte ptr [ebp + VALUE]
#define MOV_R9B_FROM_PTR_ESP_(VALUE) mov r9b, byte ptr [esp + VALUE]

#define MOV_R10B_FROM_PTR_RAX_(VALUE) mov r10b, byte ptr [rax + VALUE]
#define MOV_R10B_FROM_PTR_RBX_(VALUE) mov r10b, byte ptr [rbx + VALUE]
#define MOV_R10B_FROM_PTR_RCX_(VALUE) mov r10b, byte ptr [rcx + VALUE]
#define MOV_R10B_FROM_PTR_RDX_(VALUE) mov r10b, byte ptr [rdx + VALUE]
#define MOV_R10B_FROM_PTR_RDI_(VALUE) mov r10b, byte ptr [rdi + VALUE]
#define MOV_R10B_FROM_PTR_RSI_(VALUE) mov r10b, byte ptr [rsi + VALUE]
#define MOV_R10B_FROM_PTR_RBP_(VALUE) mov r10b, byte ptr [rbp + VALUE]
#define MOV_R10B_FROM_PTR_RSP_(VALUE) mov r10b, byte ptr [rsp + VALUE]
#define MOV_R10B_FROM_PTR_R8_(VALUE) mov r10b, byte ptr [r8 + VALUE]
#define MOV_R10B_FROM_PTR_R9_(VALUE) mov r10b, byte ptr [r9 + VALUE]
#define MOV_R10B_FROM_PTR_R10_(VALUE) mov r10b, byte ptr [r10 + VALUE]
#define MOV_R10B_FROM_PTR_R11_(VALUE) mov r10b, byte ptr [r11 + VALUE]
#define MOV_R10B_FROM_PTR_R12_(VALUE) mov r10b, byte ptr [r12 + VALUE]
#define MOV_R10B_FROM_PTR_R13_(VALUE) mov r10b, byte ptr [r13 + VALUE]
#define MOV_R10B_FROM_PTR_R14_(VALUE) mov r10b, byte ptr [r14 + VALUE]
#define MOV_R10B_FROM_PTR_R15_(VALUE) mov r10b, byte ptr [r15 + VALUE]
#define MOV_R10B_FROM_PTR_EAX_(VALUE) mov r10b, byte ptr [eax + VALUE]
#define MOV_R10B_FROM_PTR_EBX_(VALUE) mov r10b, byte ptr [ebx + VALUE]
#define MOV_R10B_FROM_PTR_ECX_(VALUE) mov r10b, byte ptr [ecx + VALUE]
#define MOV_R10B_FROM_PTR_EDX_(VALUE) mov r10b, byte ptr [edx + VALUE]
#define MOV_R10B_FROM_PTR_EDI_(VALUE) mov r10b, byte ptr [edi + VALUE]
#define MOV_R10B_FROM_PTR_ESI_(VALUE) mov r10b, byte ptr [esi + VALUE]
#define MOV_R10B_FROM_PTR_EBP_(VALUE) mov r10b, byte ptr [ebp + VALUE]
#define MOV_R10B_FROM_PTR_ESP_(VALUE) mov r10b, byte ptr [esp + VALUE]

#define MOV_R11B_FROM_PTR_RAX_(VALUE) mov r11b, byte ptr [rax + VALUE]
#define MOV_R11B_FROM_PTR_RBX_(VALUE) mov r11b, byte ptr [rbx + VALUE]
#define MOV_R11B_FROM_PTR_RCX_(VALUE) mov r11b, byte ptr [rcx + VALUE]
#define MOV_R11B_FROM_PTR_RDX_(VALUE) mov r11b, byte ptr [rdx + VALUE]
#define MOV_R11B_FROM_PTR_RDI_(VALUE) mov r11b, byte ptr [rdi + VALUE]
#define MOV_R11B_FROM_PTR_RSI_(VALUE) mov r11b, byte ptr [rsi + VALUE]
#define MOV_R11B_FROM_PTR_RBP_(VALUE) mov r11b, byte ptr [rbp + VALUE]
#define MOV_R11B_FROM_PTR_RSP_(VALUE) mov r11b, byte ptr [rsp + VALUE]
#define MOV_R11B_FROM_PTR_R8_(VALUE) mov r11b, byte ptr [r8 + VALUE]
#define MOV_R11B_FROM_PTR_R9_(VALUE) mov r11b, byte ptr [r9 + VALUE]
#define MOV_R11B_FROM_PTR_R10_(VALUE) mov r11b, byte ptr [r10 + VALUE]
#define MOV_R11B_FROM_PTR_R11_(VALUE) mov r11b, byte ptr [r11 + VALUE]
#define MOV_R11B_FROM_PTR_R12_(VALUE) mov r11b, byte ptr [r12 + VALUE]
#define MOV_R11B_FROM_PTR_R13_(VALUE) mov r11b, byte ptr [r13 + VALUE]
#define MOV_R11B_FROM_PTR_R14_(VALUE) mov r11b, byte ptr [r14 + VALUE]
#define MOV_R11B_FROM_PTR_R15_(VALUE) mov r11b, byte ptr [r15 + VALUE]
#define MOV_R11B_FROM_PTR_EAX_(VALUE) mov r11b, byte ptr [eax + VALUE]
#define MOV_R11B_FROM_PTR_EBX_(VALUE) mov r11b, byte ptr [ebx + VALUE]
#define MOV_R11B_FROM_PTR_ECX_(VALUE) mov r11b, byte ptr [ecx + VALUE]
#define MOV_R11B_FROM_PTR_EDX_(VALUE) mov r11b, byte ptr [edx + VALUE]
#define MOV_R11B_FROM_PTR_EDI_(VALUE) mov r11b, byte ptr [edi + VALUE]
#define MOV_R11B_FROM_PTR_ESI_(VALUE) mov r11b, byte ptr [esi + VALUE]
#define MOV_R11B_FROM_PTR_EBP_(VALUE) mov r11b, byte ptr [ebp + VALUE]
#define MOV_R11B_FROM_PTR_ESP_(VALUE) mov r11b, byte ptr [esp + VALUE]

#define MOV_R12B_FROM_PTR_RAX_(VALUE) mov r12b, byte ptr [rax + VALUE]
#define MOV_R12B_FROM_PTR_RBX_(VALUE) mov r12b, byte ptr [rbx + VALUE]
#define MOV_R12B_FROM_PTR_RCX_(VALUE) mov r12b, byte ptr [rcx + VALUE]
#define MOV_R12B_FROM_PTR_RDX_(VALUE) mov r12b, byte ptr [rdx + VALUE]
#define MOV_R12B_FROM_PTR_RDI_(VALUE) mov r12b, byte ptr [rdi + VALUE]
#define MOV_R12B_FROM_PTR_RSI_(VALUE) mov r12b, byte ptr [rsi + VALUE]
#define MOV_R12B_FROM_PTR_RBP_(VALUE) mov r12b, byte ptr [rbp + VALUE]
#define MOV_R12B_FROM_PTR_RSP_(VALUE) mov r12b, byte ptr [rsp + VALUE]
#define MOV_R12B_FROM_PTR_R8_(VALUE) mov r12b, byte ptr [r8 + VALUE]
#define MOV_R12B_FROM_PTR_R9_(VALUE) mov r12b, byte ptr [r9 + VALUE]
#define MOV_R12B_FROM_PTR_R10_(VALUE) mov r12b, byte ptr [r10 + VALUE]
#define MOV_R12B_FROM_PTR_R11_(VALUE) mov r12b, byte ptr [r11 + VALUE]
#define MOV_R12B_FROM_PTR_R12_(VALUE) mov r12b, byte ptr [r12 + VALUE]
#define MOV_R12B_FROM_PTR_R13_(VALUE) mov r12b, byte ptr [r13 + VALUE]
#define MOV_R12B_FROM_PTR_R14_(VALUE) mov r12b, byte ptr [r14 + VALUE]
#define MOV_R12B_FROM_PTR_R15_(VALUE) mov r12b, byte ptr [r15 + VALUE]
#define MOV_R12B_FROM_PTR_EAX_(VALUE) mov r12b, byte ptr [eax + VALUE]
#define MOV_R12B_FROM_PTR_EBX_(VALUE) mov r12b, byte ptr [ebx + VALUE]
#define MOV_R12B_FROM_PTR_ECX_(VALUE) mov r12b, byte ptr [ecx + VALUE]
#define MOV_R12B_FROM_PTR_EDX_(VALUE) mov r12b, byte ptr [edx + VALUE]
#define MOV_R12B_FROM_PTR_EDI_(VALUE) mov r12b, byte ptr [edi + VALUE]
#define MOV_R12B_FROM_PTR_ESI_(VALUE) mov r12b, byte ptr [esi + VALUE]
#define MOV_R12B_FROM_PTR_EBP_(VALUE) mov r12b, byte ptr [ebp + VALUE]
#define MOV_R12B_FROM_PTR_ESP_(VALUE) mov r12b, byte ptr [esp + VALUE]

#define MOV_R13B_FROM_PTR_RAX_(VALUE) mov r13b, byte ptr [rax + VALUE]
#define MOV_R13B_FROM_PTR_RBX_(VALUE) mov r13b, byte ptr [rbx + VALUE]
#define MOV_R13B_FROM_PTR_RCX_(VALUE) mov r13b, byte ptr [rcx + VALUE]
#define MOV_R13B_FROM_PTR_RDX_(VALUE) mov r13b, byte ptr [rdx + VALUE]
#define MOV_R13B_FROM_PTR_RDI_(VALUE) mov r13b, byte ptr [rdi + VALUE]
#define MOV_R13B_FROM_PTR_RSI_(VALUE) mov r13b, byte ptr [rsi + VALUE]
#define MOV_R13B_FROM_PTR_RBP_(VALUE) mov r13b, byte ptr [rbp + VALUE]
#define MOV_R13B_FROM_PTR_RSP_(VALUE) mov r13b, byte ptr [rsp + VALUE]
#define MOV_R13B_FROM_PTR_R8_(VALUE) mov r13b, byte ptr [r8 + VALUE]
#define MOV_R13B_FROM_PTR_R9_(VALUE) mov r13b, byte ptr [r9 + VALUE]
#define MOV_R13B_FROM_PTR_R10_(VALUE) mov r13b, byte ptr [r10 + VALUE]
#define MOV_R13B_FROM_PTR_R11_(VALUE) mov r13b, byte ptr [r11 + VALUE]
#define MOV_R13B_FROM_PTR_R12_(VALUE) mov r13b, byte ptr [r12 + VALUE]
#define MOV_R13B_FROM_PTR_R13_(VALUE) mov r13b, byte ptr [r13 + VALUE]
#define MOV_R13B_FROM_PTR_R14_(VALUE) mov r13b, byte ptr [r14 + VALUE]
#define MOV_R13B_FROM_PTR_R15_(VALUE) mov r13b, byte ptr [r15 + VALUE]
#define MOV_R13B_FROM_PTR_EAX_(VALUE) mov r13b, byte ptr [eax + VALUE]
#define MOV_R13B_FROM_PTR_EBX_(VALUE) mov r13b, byte ptr [ebx + VALUE]
#define MOV_R13B_FROM_PTR_ECX_(VALUE) mov r13b, byte ptr [ecx + VALUE]
#define MOV_R13B_FROM_PTR_EDX_(VALUE) mov r13b, byte ptr [edx + VALUE]
#define MOV_R13B_FROM_PTR_EDI_(VALUE) mov r13b, byte ptr [edi + VALUE]
#define MOV_R13B_FROM_PTR_ESI_(VALUE) mov r13b, byte ptr [esi + VALUE]
#define MOV_R13B_FROM_PTR_EBP_(VALUE) mov r13b, byte ptr [ebp + VALUE]
#define MOV_R13B_FROM_PTR_ESP_(VALUE) mov r13b, byte ptr [esp + VALUE]

#define MOV_R14B_FROM_PTR_RAX_(VALUE) mov r14b, byte ptr [rax + VALUE]
#define MOV_R14B_FROM_PTR_RBX_(VALUE) mov r14b, byte ptr [rbx + VALUE]
#define MOV_R14B_FROM_PTR_RCX_(VALUE) mov r14b, byte ptr [rcx + VALUE]
#define MOV_R14B_FROM_PTR_RDX_(VALUE) mov r14b, byte ptr [rdx + VALUE]
#define MOV_R14B_FROM_PTR_RDI_(VALUE) mov r14b, byte ptr [rdi + VALUE]
#define MOV_R14B_FROM_PTR_RSI_(VALUE) mov r14b, byte ptr [rsi + VALUE]
#define MOV_R14B_FROM_PTR_RBP_(VALUE) mov r14b, byte ptr [rbp + VALUE]
#define MOV_R14B_FROM_PTR_RSP_(VALUE) mov r14b, byte ptr [rsp + VALUE]
#define MOV_R14B_FROM_PTR_R8_(VALUE) mov r14b, byte ptr [r8 + VALUE]
#define MOV_R14B_FROM_PTR_R9_(VALUE) mov r14b, byte ptr [r9 + VALUE]
#define MOV_R14B_FROM_PTR_R10_(VALUE) mov r14b, byte ptr [r10 + VALUE]
#define MOV_R14B_FROM_PTR_R11_(VALUE) mov r14b, byte ptr [r11 + VALUE]
#define MOV_R14B_FROM_PTR_R12_(VALUE) mov r14b, byte ptr [r12 + VALUE]
#define MOV_R14B_FROM_PTR_R13_(VALUE) mov r14b, byte ptr [r13 + VALUE]
#define MOV_R14B_FROM_PTR_R14_(VALUE) mov r14b, byte ptr [r14 + VALUE]
#define MOV_R14B_FROM_PTR_R15_(VALUE) mov r14b, byte ptr [r15 + VALUE]
#define MOV_R14B_FROM_PTR_EAX_(VALUE) mov r14b, byte ptr [eax + VALUE]
#define MOV_R14B_FROM_PTR_EBX_(VALUE) mov r14b, byte ptr [ebx + VALUE]
#define MOV_R14B_FROM_PTR_ECX_(VALUE) mov r14b, byte ptr [ecx + VALUE]
#define MOV_R14B_FROM_PTR_EDX_(VALUE) mov r14b, byte ptr [edx + VALUE]
#define MOV_R14B_FROM_PTR_EDI_(VALUE) mov r14b, byte ptr [edi + VALUE]
#define MOV_R14B_FROM_PTR_ESI_(VALUE) mov r14b, byte ptr [esi + VALUE]
#define MOV_R14B_FROM_PTR_EBP_(VALUE) mov r14b, byte ptr [ebp + VALUE]
#define MOV_R14B_FROM_PTR_ESP_(VALUE) mov r14b, byte ptr [esp + VALUE]

#define MOV_R15B_FROM_PTR_RAX_(VALUE) mov r15b, byte ptr [rax + VALUE]
#define MOV_R15B_FROM_PTR_RBX_(VALUE) mov r15b, byte ptr [rbx + VALUE]
#define MOV_R15B_FROM_PTR_RCX_(VALUE) mov r15b, byte ptr [rcx + VALUE]
#define MOV_R15B_FROM_PTR_RDX_(VALUE) mov r15b, byte ptr [rdx + VALUE]
#define MOV_R15B_FROM_PTR_RDI_(VALUE) mov r15b, byte ptr [rdi + VALUE]
#define MOV_R15B_FROM_PTR_RSI_(VALUE) mov r15b, byte ptr [rsi + VALUE]
#define MOV_R15B_FROM_PTR_RBP_(VALUE) mov r15b, byte ptr [rbp + VALUE]
#define MOV_R15B_FROM_PTR_RSP_(VALUE) mov r15b, byte ptr [rsp + VALUE]
#define MOV_R15B_FROM_PTR_R8_(VALUE) mov r15b, byte ptr [r8 + VALUE]
#define MOV_R15B_FROM_PTR_R9_(VALUE) mov r15b, byte ptr [r9 + VALUE]
#define MOV_R15B_FROM_PTR_R10_(VALUE) mov r15b, byte ptr [r10 + VALUE]
#define MOV_R15B_FROM_PTR_R11_(VALUE) mov r15b, byte ptr [r11 + VALUE]
#define MOV_R15B_FROM_PTR_R12_(VALUE) mov r15b, byte ptr [r12 + VALUE]
#define MOV_R15B_FROM_PTR_R13_(VALUE) mov r15b, byte ptr [r13 + VALUE]
#define MOV_R15B_FROM_PTR_R14_(VALUE) mov r15b, byte ptr [r14 + VALUE]
#define MOV_R15B_FROM_PTR_R15_(VALUE) mov r15b, byte ptr [r15 + VALUE]
#define MOV_R15B_FROM_PTR_EAX_(VALUE) mov r15b, byte ptr [eax + VALUE]
#define MOV_R15B_FROM_PTR_EBX_(VALUE) mov r15b, byte ptr [ebx + VALUE]
#define MOV_R15B_FROM_PTR_ECX_(VALUE) mov r15b, byte ptr [ecx + VALUE]
#define MOV_R15B_FROM_PTR_EDX_(VALUE) mov r15b, byte ptr [edx + VALUE]
#define MOV_R15B_FROM_PTR_EDI_(VALUE) mov r15b, byte ptr [edi + VALUE]
#define MOV_R15B_FROM_PTR_ESI_(VALUE) mov r15b, byte ptr [esi + VALUE]
#define MOV_R15B_FROM_PTR_EBP_(VALUE) mov r15b, byte ptr [ebp + VALUE]
#define MOV_R15B_FROM_PTR_ESP_(VALUE) mov r15b, byte ptr [esp + VALUE]

#define MOV_AL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], al
#define MOV_AL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], al
#define MOV_AL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], al
#define MOV_AL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], al
#define MOV_AL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], al
#define MOV_AL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], al
#define MOV_AL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], al
#define MOV_AL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], al
#define MOV_AL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], al
#define MOV_AL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], al
#define MOV_AL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], al
#define MOV_AL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], al
#define MOV_AL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], al
#define MOV_AL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], al
#define MOV_AL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], al
#define MOV_AL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], al
#define MOV_AL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], al
#define MOV_AL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], al
#define MOV_AL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], al
#define MOV_AL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], al
#define MOV_AL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], al
#define MOV_AL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], al
#define MOV_AL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], al
#define MOV_AL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], al

#define MOV_BL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], bl
#define MOV_BL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], bl
#define MOV_BL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], bl
#define MOV_BL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], bl
#define MOV_BL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], bl
#define MOV_BL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], bl
#define MOV_BL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], bl
#define MOV_BL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], bl
#define MOV_BL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], bl
#define MOV_BL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], bl
#define MOV_BL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], bl
#define MOV_BL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], bl
#define MOV_BL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], bl
#define MOV_BL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], bl
#define MOV_BL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], bl
#define MOV_BL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], bl
#define MOV_BL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], bl
#define MOV_BL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], bl
#define MOV_BL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], bl
#define MOV_BL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], bl
#define MOV_BL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], bl
#define MOV_BL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], bl
#define MOV_BL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], bl
#define MOV_BL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], bl

#define MOV_CL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], cl
#define MOV_CL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], cl
#define MOV_CL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], cl
#define MOV_CL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], cl
#define MOV_CL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], cl
#define MOV_CL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], cl
#define MOV_CL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], cl
#define MOV_CL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], cl
#define MOV_CL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], cl
#define MOV_CL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], cl
#define MOV_CL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], cl
#define MOV_CL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], cl
#define MOV_CL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], cl
#define MOV_CL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], cl
#define MOV_CL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], cl
#define MOV_CL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], cl
#define MOV_CL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], cl
#define MOV_CL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], cl
#define MOV_CL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], cl
#define MOV_CL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], cl
#define MOV_CL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], cl
#define MOV_CL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], cl
#define MOV_CL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], cl
#define MOV_CL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], cl

#define MOV_DL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], dl
#define MOV_DL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], dl
#define MOV_DL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], dl
#define MOV_DL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], dl
#define MOV_DL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], dl
#define MOV_DL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], dl
#define MOV_DL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], dl
#define MOV_DL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], dl
#define MOV_DL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], dl
#define MOV_DL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], dl
#define MOV_DL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], dl
#define MOV_DL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], dl
#define MOV_DL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], dl
#define MOV_DL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], dl
#define MOV_DL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], dl
#define MOV_DL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], dl
#define MOV_DL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], dl
#define MOV_DL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], dl
#define MOV_DL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], dl
#define MOV_DL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], dl
#define MOV_DL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], dl
#define MOV_DL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], dl
#define MOV_DL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], dl
#define MOV_DL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], dl

#define MOV_DIL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], dil
#define MOV_DIL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], dil
#define MOV_DIL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], dil
#define MOV_DIL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], dil
#define MOV_DIL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], dil
#define MOV_DIL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], dil
#define MOV_DIL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], dil
#define MOV_DIL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], dil
#define MOV_DIL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], dil
#define MOV_DIL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], dil
#define MOV_DIL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], dil
#define MOV_DIL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], dil
#define MOV_DIL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], dil
#define MOV_DIL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], dil
#define MOV_DIL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], dil
#define MOV_DIL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], dil
#define MOV_DIL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], dil
#define MOV_DIL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], dil
#define MOV_DIL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], dil
#define MOV_DIL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], dil
#define MOV_DIL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], dil
#define MOV_DIL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], dil
#define MOV_DIL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], dil
#define MOV_DIL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], dil

#define MOV_SIL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], sil
#define MOV_SIL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], sil
#define MOV_SIL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], sil
#define MOV_SIL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], sil
#define MOV_SIL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], sil
#define MOV_SIL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], sil
#define MOV_SIL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], sil
#define MOV_SIL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], sil
#define MOV_SIL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], sil
#define MOV_SIL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], sil
#define MOV_SIL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], sil
#define MOV_SIL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], sil
#define MOV_SIL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], sil
#define MOV_SIL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], sil
#define MOV_SIL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], sil
#define MOV_SIL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], sil
#define MOV_SIL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], sil
#define MOV_SIL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], sil
#define MOV_SIL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], sil
#define MOV_SIL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], sil
#define MOV_SIL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], sil
#define MOV_SIL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], sil
#define MOV_SIL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], sil
#define MOV_SIL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], sil

#define MOV_BPL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], bpl
#define MOV_BPL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], bpl
#define MOV_BPL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], bpl
#define MOV_BPL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], bpl
#define MOV_BPL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], bpl
#define MOV_BPL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], bpl
#define MOV_BPL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], bpl
#define MOV_BPL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], bpl
#define MOV_BPL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], bpl
#define MOV_BPL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], bpl
#define MOV_BPL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], bpl
#define MOV_BPL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], bpl
#define MOV_BPL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], bpl
#define MOV_BPL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], bpl
#define MOV_BPL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], bpl
#define MOV_BPL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], bpl
#define MOV_BPL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], bpl
#define MOV_BPL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], bpl
#define MOV_BPL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], bpl
#define MOV_BPL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], bpl
#define MOV_BPL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], bpl
#define MOV_BPL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], bpl
#define MOV_BPL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], bpl
#define MOV_BPL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], bpl

#define MOV_SPL_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], spl
#define MOV_SPL_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], spl
#define MOV_SPL_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], spl
#define MOV_SPL_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], spl
#define MOV_SPL_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], spl
#define MOV_SPL_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], spl
#define MOV_SPL_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], spl
#define MOV_SPL_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], spl
#define MOV_SPL_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], spl
#define MOV_SPL_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], spl
#define MOV_SPL_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], spl
#define MOV_SPL_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], spl
#define MOV_SPL_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], spl
#define MOV_SPL_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], spl
#define MOV_SPL_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], spl
#define MOV_SPL_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], spl
#define MOV_SPL_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], spl
#define MOV_SPL_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], spl
#define MOV_SPL_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], spl
#define MOV_SPL_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], spl
#define MOV_SPL_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], spl
#define MOV_SPL_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], spl
#define MOV_SPL_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], spl
#define MOV_SPL_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], spl

#define MOV_R8B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r8b
#define MOV_R8B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r8b
#define MOV_R8B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r8b
#define MOV_R8B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r8b
#define MOV_R8B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r8b
#define MOV_R8B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r8b
#define MOV_R8B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r8b
#define MOV_R8B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r8b
#define MOV_R8B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r8b
#define MOV_R8B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r8b
#define MOV_R8B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r8b
#define MOV_R8B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r8b
#define MOV_R8B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r8b
#define MOV_R8B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r8b
#define MOV_R8B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r8b
#define MOV_R8B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r8b
#define MOV_R8B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r8b
#define MOV_R8B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r8b
#define MOV_R8B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r8b
#define MOV_R8B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r8b
#define MOV_R8B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r8b
#define MOV_R8B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r8b
#define MOV_R8B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r8b
#define MOV_R8B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r8b

#define MOV_R9B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r9b
#define MOV_R9B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r9b
#define MOV_R9B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r9b
#define MOV_R9B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r9b
#define MOV_R9B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r9b
#define MOV_R9B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r9b
#define MOV_R9B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r9b
#define MOV_R9B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r9b
#define MOV_R9B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r9b
#define MOV_R9B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r9b
#define MOV_R9B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r9b
#define MOV_R9B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r9b
#define MOV_R9B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r9b
#define MOV_R9B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r9b
#define MOV_R9B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r9b
#define MOV_R9B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r9b
#define MOV_R9B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r9b
#define MOV_R9B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r9b
#define MOV_R9B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r9b
#define MOV_R9B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r9b
#define MOV_R9B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r9b
#define MOV_R9B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r9b
#define MOV_R9B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r9b
#define MOV_R9B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r9b

#define MOV_R10B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r10b
#define MOV_R10B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r10b
#define MOV_R10B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r10b
#define MOV_R10B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r10b
#define MOV_R10B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r10b
#define MOV_R10B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r10b
#define MOV_R10B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r10b
#define MOV_R10B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r10b
#define MOV_R10B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r10b
#define MOV_R10B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r10b
#define MOV_R10B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r10b
#define MOV_R10B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r10b
#define MOV_R10B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r10b
#define MOV_R10B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r10b
#define MOV_R10B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r10b
#define MOV_R10B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r10b
#define MOV_R10B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r10b
#define MOV_R10B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r10b
#define MOV_R10B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r10b
#define MOV_R10B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r10b
#define MOV_R10B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r10b
#define MOV_R10B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r10b
#define MOV_R10B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r10b
#define MOV_R10B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r10b

#define MOV_R11B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r11b
#define MOV_R11B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r11b
#define MOV_R11B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r11b
#define MOV_R11B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r11b
#define MOV_R11B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r11b
#define MOV_R11B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r11b
#define MOV_R11B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r11b
#define MOV_R11B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r11b
#define MOV_R11B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r11b
#define MOV_R11B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r11b
#define MOV_R11B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r11b
#define MOV_R11B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r11b
#define MOV_R11B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r11b
#define MOV_R11B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r11b
#define MOV_R11B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r11b
#define MOV_R11B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r11b
#define MOV_R11B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r11b
#define MOV_R11B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r11b
#define MOV_R11B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r11b
#define MOV_R11B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r11b
#define MOV_R11B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r11b
#define MOV_R11B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r11b
#define MOV_R11B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r11b
#define MOV_R11B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r11b

#define MOV_R12B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r12b
#define MOV_R12B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r12b
#define MOV_R12B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r12b
#define MOV_R12B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r12b
#define MOV_R12B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r12b
#define MOV_R12B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r12b
#define MOV_R12B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r12b
#define MOV_R12B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r12b
#define MOV_R12B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r12b
#define MOV_R12B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r12b
#define MOV_R12B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r12b
#define MOV_R12B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r12b
#define MOV_R12B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r12b
#define MOV_R12B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r12b
#define MOV_R12B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r12b
#define MOV_R12B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r12b
#define MOV_R12B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r12b
#define MOV_R12B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r12b
#define MOV_R12B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r12b
#define MOV_R12B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r12b
#define MOV_R12B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r12b
#define MOV_R12B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r12b
#define MOV_R12B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r12b
#define MOV_R12B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r12b

#define MOV_R13B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r13b
#define MOV_R13B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r13b
#define MOV_R13B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r13b
#define MOV_R13B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r13b
#define MOV_R13B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r13b
#define MOV_R13B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r13b
#define MOV_R13B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r13b
#define MOV_R13B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r13b
#define MOV_R13B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r13b
#define MOV_R13B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r13b
#define MOV_R13B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r13b
#define MOV_R13B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r13b
#define MOV_R13B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r13b
#define MOV_R13B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r13b
#define MOV_R13B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r13b
#define MOV_R13B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r13b
#define MOV_R13B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r13b
#define MOV_R13B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r13b
#define MOV_R13B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r13b
#define MOV_R13B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r13b
#define MOV_R13B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r13b
#define MOV_R13B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r13b
#define MOV_R13B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r13b
#define MOV_R13B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r13b

#define MOV_R14B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r14b
#define MOV_R14B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r14b
#define MOV_R14B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r14b
#define MOV_R14B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r14b
#define MOV_R14B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r14b
#define MOV_R14B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r14b
#define MOV_R14B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r14b
#define MOV_R14B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r14b
#define MOV_R14B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r14b
#define MOV_R14B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r14b
#define MOV_R14B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r14b
#define MOV_R14B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r14b
#define MOV_R14B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r14b
#define MOV_R14B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r14b
#define MOV_R14B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r14b
#define MOV_R14B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r14b
#define MOV_R14B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r14b
#define MOV_R14B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r14b
#define MOV_R14B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r14b
#define MOV_R14B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r14b
#define MOV_R14B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r14b
#define MOV_R14B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r14b
#define MOV_R14B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r14b
#define MOV_R14B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r14b

#define MOV_R15B_TO_PTR_RAX_(VALUE) mov byte ptr [rax + VALUE], r15b
#define MOV_R15B_TO_PTR_RBX_(VALUE) mov byte ptr [rbx + VALUE], r15b
#define MOV_R15B_TO_PTR_RCX_(VALUE) mov byte ptr [rcx + VALUE], r15b
#define MOV_R15B_TO_PTR_RDX_(VALUE) mov byte ptr [rdx + VALUE], r15b
#define MOV_R15B_TO_PTR_RDI_(VALUE) mov byte ptr [rdi + VALUE], r15b
#define MOV_R15B_TO_PTR_RSI_(VALUE) mov byte ptr [rsi + VALUE], r15b
#define MOV_R15B_TO_PTR_RBP_(VALUE) mov byte ptr [rbp + VALUE], r15b
#define MOV_R15B_TO_PTR_RSP_(VALUE) mov byte ptr [rsp + VALUE], r15b
#define MOV_R15B_TO_PTR_R8_(VALUE) mov byte ptr [r8 + VALUE], r15b
#define MOV_R15B_TO_PTR_R9_(VALUE) mov byte ptr [r9 + VALUE], r15b
#define MOV_R15B_TO_PTR_R10_(VALUE) mov byte ptr [r10 + VALUE], r15b
#define MOV_R15B_TO_PTR_R11_(VALUE) mov byte ptr [r11 + VALUE], r15b
#define MOV_R15B_TO_PTR_R12_(VALUE) mov byte ptr [r12 + VALUE], r15b
#define MOV_R15B_TO_PTR_R13_(VALUE) mov byte ptr [r13 + VALUE], r15b
#define MOV_R15B_TO_PTR_R14_(VALUE) mov byte ptr [r14 + VALUE], r15b
#define MOV_R15B_TO_PTR_R15_(VALUE) mov byte ptr [r15 + VALUE], r15b
#define MOV_R15B_TO_PTR_EAX_(VALUE) mov byte ptr [eax + VALUE], r15b
#define MOV_R15B_TO_PTR_EBX_(VALUE) mov byte ptr [ebx + VALUE], r15b
#define MOV_R15B_TO_PTR_ECX_(VALUE) mov byte ptr [ecx + VALUE], r15b
#define MOV_R15B_TO_PTR_EDX_(VALUE) mov byte ptr [edx + VALUE], r15b
#define MOV_R15B_TO_PTR_EDI_(VALUE) mov byte ptr [edi + VALUE], r15b
#define MOV_R15B_TO_PTR_ESI_(VALUE) mov byte ptr [esi + VALUE], r15b
#define MOV_R15B_TO_PTR_EBP_(VALUE) mov byte ptr [ebp + VALUE], r15b
#define MOV_R15B_TO_PTR_ESP_(VALUE) mov byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define MOV_AX_FROM_PTR_(VALUE) mov ax, word ptr [VALUE]
#define MOV_BX_FROM_PTR_(VALUE) mov bx, word ptr [VALUE]
#define MOV_CX_FROM_PTR_(VALUE) mov cx, word ptr [VALUE]
#define MOV_DX_FROM_PTR_(VALUE) mov dx, word ptr [VALUE]
#define MOV_DI_FROM_PTR_(VALUE) mov di, word ptr [VALUE]
#define MOV_SI_FROM_PTR_(VALUE) mov si, word ptr [VALUE]
#define MOV_BP_FROM_PTR_(VALUE) mov bp, word ptr [VALUE]
#define MOV_SP_FROM_PTR_(VALUE) mov sp, word ptr [VALUE]

#define MOV_AX_TO_PTR_(VALUE) mov word ptr [VALUE], ax
#define MOV_BX_TO_PTR_(VALUE) mov word ptr [VALUE], bx
#define MOV_CX_TO_PTR_(VALUE) mov word ptr [VALUE], cx
#define MOV_DX_TO_PTR_(VALUE) mov word ptr [VALUE], dx
#define MOV_DI_TO_PTR_(VALUE) mov word ptr [VALUE], di
#define MOV_SI_TO_PTR_(VALUE) mov word ptr [VALUE], si
#define MOV_BP_TO_PTR_(VALUE) mov word ptr [VALUE], bp
#define MOV_SP_TO_PTR_(VALUE) mov word ptr [VALUE], sp

#define MOV_AX_FROM_PTR_BX mov ax, word ptr [bx]
#define MOV_AX_FROM_PTR_BP mov ax, word ptr [bp]
#define MOV_AX_FROM_PTR_SI mov ax, word ptr [si]
#define MOV_AX_FROM_PTR_DI mov ax, word ptr [di]

#define MOV_BX_FROM_PTR_BX mov bx, word ptr [bx]
#define MOV_BX_FROM_PTR_BP mov bx, word ptr [bp]
#define MOV_BX_FROM_PTR_SI mov bx, word ptr [si]
#define MOV_BX_FROM_PTR_DI mov bx, word ptr [di]

#define MOV_CX_FROM_PTR_BX mov cx, word ptr [bx]
#define MOV_CX_FROM_PTR_BP mov cx, word ptr [bp]
#define MOV_CX_FROM_PTR_SI mov cx, word ptr [si]
#define MOV_CX_FROM_PTR_DI mov cx, word ptr [di]

#define MOV_DX_FROM_PTR_BX mov dx, word ptr [bx]
#define MOV_DX_FROM_PTR_BP mov dx, word ptr [bp]
#define MOV_DX_FROM_PTR_SI mov dx, word ptr [si]
#define MOV_DX_FROM_PTR_DI mov dx, word ptr [di]

#define MOV_DI_FROM_PTR_BX mov di, word ptr [bx]
#define MOV_DI_FROM_PTR_BP mov di, word ptr [bp]
#define MOV_DI_FROM_PTR_SI mov di, word ptr [si]
#define MOV_DI_FROM_PTR_DI mov di, word ptr [di]

#define MOV_SI_FROM_PTR_BX mov si, word ptr [bx]
#define MOV_SI_FROM_PTR_BP mov si, word ptr [bp]
#define MOV_SI_FROM_PTR_SI mov si, word ptr [si]
#define MOV_SI_FROM_PTR_DI mov si, word ptr [di]

#define MOV_BP_FROM_PTR_BX mov bp, word ptr [bx]
#define MOV_BP_FROM_PTR_BP mov bp, word ptr [bp]
#define MOV_BP_FROM_PTR_SI mov bp, word ptr [si]
#define MOV_BP_FROM_PTR_DI mov bp, word ptr [di]

#define MOV_SP_FROM_PTR_BX mov sp, word ptr [bx]
#define MOV_SP_FROM_PTR_BP mov sp, word ptr [bp]
#define MOV_SP_FROM_PTR_SI mov sp, word ptr [si]
#define MOV_SP_FROM_PTR_DI mov sp, word ptr [di]

#define MOV_AX_TO_PTR_BX mov word ptr [bx], ax
#define MOV_AX_TO_PTR_BP mov word ptr [bp], ax
#define MOV_AX_TO_PTR_SI mov word ptr [si], ax
#define MOV_AX_TO_PTR_DI mov word ptr [di], ax

#define MOV_BX_TO_PTR_BX mov word ptr [bx], bx
#define MOV_BX_TO_PTR_BP mov word ptr [bp], bx
#define MOV_BX_TO_PTR_SI mov word ptr [si], bx
#define MOV_BX_TO_PTR_DI mov word ptr [di], bx

#define MOV_CX_TO_PTR_BX mov word ptr [bx], cx
#define MOV_CX_TO_PTR_BP mov word ptr [bp], cx
#define MOV_CX_TO_PTR_SI mov word ptr [si], cx
#define MOV_CX_TO_PTR_DI mov word ptr [di], cx

#define MOV_DX_TO_PTR_BX mov word ptr [bx], dx
#define MOV_DX_TO_PTR_BP mov word ptr [bp], dx
#define MOV_DX_TO_PTR_SI mov word ptr [si], dx
#define MOV_DX_TO_PTR_DI mov word ptr [di], dx

#define MOV_DI_TO_PTR_BX mov word ptr [bx], di
#define MOV_DI_TO_PTR_BP mov word ptr [bp], di
#define MOV_DI_TO_PTR_SI mov word ptr [si], di
#define MOV_DI_TO_PTR_DI mov word ptr [di], di

#define MOV_SI_TO_PTR_BX mov word ptr [bx], si
#define MOV_SI_TO_PTR_BP mov word ptr [bp], si
#define MOV_SI_TO_PTR_SI mov word ptr [si], si
#define MOV_SI_TO_PTR_DI mov word ptr [di], si

#define MOV_BP_TO_PTR_BX mov word ptr [bx], bp
#define MOV_BP_TO_PTR_BP mov word ptr [bp], bp
#define MOV_BP_TO_PTR_SI mov word ptr [si], bp
#define MOV_BP_TO_PTR_DI mov word ptr [di], bp

#define MOV_SP_TO_PTR_BX mov word ptr [bx], sp
#define MOV_SP_TO_PTR_BP mov word ptr [bp], sp
#define MOV_SP_TO_PTR_SI mov word ptr [si], sp
#define MOV_SP_TO_PTR_DI mov word ptr [di], sp

#define MOV_AX_FROM_PTR_BX_(VALUE) mov ax, word ptr [bx + VALUE]
#define MOV_AX_FROM_PTR_BP_(VALUE) mov ax, word ptr [bp + VALUE]
#define MOV_AX_FROM_PTR_SI_(VALUE) mov ax, word ptr [si + VALUE]
#define MOV_AX_FROM_PTR_DI_(VALUE) mov ax, word ptr [di + VALUE]

#define MOV_BX_FROM_PTR_BX_(VALUE) mov bx, word ptr [bx + VALUE]
#define MOV_BX_FROM_PTR_BP_(VALUE) mov bx, word ptr [bp + VALUE]
#define MOV_BX_FROM_PTR_SI_(VALUE) mov bx, word ptr [si + VALUE]
#define MOV_BX_FROM_PTR_DI_(VALUE) mov bx, word ptr [di + VALUE]

#define MOV_CX_FROM_PTR_BX_(VALUE) mov cx, word ptr [bx + VALUE]
#define MOV_CX_FROM_PTR_BP_(VALUE) mov cx, word ptr [bp + VALUE]
#define MOV_CX_FROM_PTR_SI_(VALUE) mov cx, word ptr [si + VALUE]
#define MOV_CX_FROM_PTR_DI_(VALUE) mov cx, word ptr [di + VALUE]

#define MOV_DX_FROM_PTR_BX_(VALUE) mov dx, word ptr [bx + VALUE]
#define MOV_DX_FROM_PTR_BP_(VALUE) mov dx, word ptr [bp + VALUE]
#define MOV_DX_FROM_PTR_SI_(VALUE) mov dx, word ptr [si + VALUE]
#define MOV_DX_FROM_PTR_DI_(VALUE) mov dx, word ptr [di + VALUE]

#define MOV_DI_FROM_PTR_BX_(VALUE) mov di, word ptr [bx + VALUE]
#define MOV_DI_FROM_PTR_BP_(VALUE) mov di, word ptr [bp + VALUE]
#define MOV_DI_FROM_PTR_SI_(VALUE) mov di, word ptr [si + VALUE]
#define MOV_DI_FROM_PTR_DI_(VALUE) mov di, word ptr [di + VALUE]

#define MOV_SI_FROM_PTR_BX_(VALUE) mov si, word ptr [bx + VALUE]
#define MOV_SI_FROM_PTR_BP_(VALUE) mov si, word ptr [bp + VALUE]
#define MOV_SI_FROM_PTR_SI_(VALUE) mov si, word ptr [si + VALUE]
#define MOV_SI_FROM_PTR_DI_(VALUE) mov si, word ptr [di + VALUE]

#define MOV_BP_FROM_PTR_BX_(VALUE) mov bp, word ptr [bx + VALUE]
#define MOV_BP_FROM_PTR_BP_(VALUE) mov bp, word ptr [bp + VALUE]
#define MOV_BP_FROM_PTR_SI_(VALUE) mov bp, word ptr [si + VALUE]
#define MOV_BP_FROM_PTR_DI_(VALUE) mov bp, word ptr [di + VALUE]

#define MOV_SP_FROM_PTR_BX_(VALUE) mov sp, word ptr [bx + VALUE]
#define MOV_SP_FROM_PTR_BP_(VALUE) mov sp, word ptr [bp + VALUE]
#define MOV_SP_FROM_PTR_SI_(VALUE) mov sp, word ptr [si + VALUE]
#define MOV_SP_FROM_PTR_DI_(VALUE) mov sp, word ptr [di + VALUE]

#define MOV_AX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], ax
#define MOV_AX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], ax
#define MOV_AX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], ax
#define MOV_AX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], ax

#define MOV_BX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], bx
#define MOV_BX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], bx
#define MOV_BX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], bx
#define MOV_BX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], bx

#define MOV_CX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], cx
#define MOV_CX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], cx
#define MOV_CX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], cx
#define MOV_CX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], cx

#define MOV_DX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], dx
#define MOV_DX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], dx
#define MOV_DX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], dx
#define MOV_DX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], dx

#define MOV_DI_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], di
#define MOV_DI_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], di
#define MOV_DI_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], di
#define MOV_DI_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], di

#define MOV_SI_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], si
#define MOV_SI_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], si
#define MOV_SI_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], si
#define MOV_SI_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], si

#define MOV_BP_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], bp
#define MOV_BP_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], bp
#define MOV_BP_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], bp
#define MOV_BP_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], bp

#define MOV_SP_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], sp
#define MOV_SP_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], sp
#define MOV_SP_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], sp
#define MOV_SP_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define MOV_AX_FROM_PTR_(VALUE) mov ax, word ptr [VALUE]
#define MOV_BX_FROM_PTR_(VALUE) mov bx, word ptr [VALUE]
#define MOV_CX_FROM_PTR_(VALUE) mov cx, word ptr [VALUE]
#define MOV_DX_FROM_PTR_(VALUE) mov dx, word ptr [VALUE]
#define MOV_DI_FROM_PTR_(VALUE) mov di, word ptr [VALUE]
#define MOV_SI_FROM_PTR_(VALUE) mov si, word ptr [VALUE]
#define MOV_BP_FROM_PTR_(VALUE) mov bp, word ptr [VALUE]
#define MOV_SP_FROM_PTR_(VALUE) mov sp, word ptr [VALUE]

#define MOV_AX_TO_PTR_(VALUE) mov word ptr [VALUE], ax
#define MOV_BX_TO_PTR_(VALUE) mov word ptr [VALUE], bx
#define MOV_CX_TO_PTR_(VALUE) mov word ptr [VALUE], cx
#define MOV_DX_TO_PTR_(VALUE) mov word ptr [VALUE], dx
#define MOV_DI_TO_PTR_(VALUE) mov word ptr [VALUE], di
#define MOV_SI_TO_PTR_(VALUE) mov word ptr [VALUE], si
#define MOV_BP_TO_PTR_(VALUE) mov word ptr [VALUE], bp
#define MOV_SP_TO_PTR_(VALUE) mov word ptr [VALUE], sp

#define MOV_AX_FROM_PTR_EAX mov ax, word ptr [eax]
#define MOV_AX_FROM_PTR_EBX mov ax, word ptr [ebx]
#define MOV_AX_FROM_PTR_ECX mov ax, word ptr [ecx]
#define MOV_AX_FROM_PTR_EDX mov ax, word ptr [edx]
#define MOV_AX_FROM_PTR_EDI mov ax, word ptr [edi]
#define MOV_AX_FROM_PTR_ESI mov ax, word ptr [esi]
#define MOV_AX_FROM_PTR_EBP mov ax, word ptr [ebp]
#define MOV_AX_FROM_PTR_ESP mov ax, word ptr [esp]
#define MOV_AX_FROM_PTR_BX mov ax, word ptr [bx]
#define MOV_AX_FROM_PTR_BP mov ax, word ptr [bp]
#define MOV_AX_FROM_PTR_SI mov ax, word ptr [si]
#define MOV_AX_FROM_PTR_DI mov ax, word ptr [di]

#define MOV_BX_FROM_PTR_EAX mov bx, word ptr [eax]
#define MOV_BX_FROM_PTR_EBX mov bx, word ptr [ebx]
#define MOV_BX_FROM_PTR_ECX mov bx, word ptr [ecx]
#define MOV_BX_FROM_PTR_EDX mov bx, word ptr [edx]
#define MOV_BX_FROM_PTR_EDI mov bx, word ptr [edi]
#define MOV_BX_FROM_PTR_ESI mov bx, word ptr [esi]
#define MOV_BX_FROM_PTR_EBP mov bx, word ptr [ebp]
#define MOV_BX_FROM_PTR_ESP mov bx, word ptr [esp]
#define MOV_BX_FROM_PTR_BX mov bx, word ptr [bx]
#define MOV_BX_FROM_PTR_BP mov bx, word ptr [bp]
#define MOV_BX_FROM_PTR_SI mov bx, word ptr [si]
#define MOV_BX_FROM_PTR_DI mov bx, word ptr [di]

#define MOV_CX_FROM_PTR_EAX mov cx, word ptr [eax]
#define MOV_CX_FROM_PTR_EBX mov cx, word ptr [ebx]
#define MOV_CX_FROM_PTR_ECX mov cx, word ptr [ecx]
#define MOV_CX_FROM_PTR_EDX mov cx, word ptr [edx]
#define MOV_CX_FROM_PTR_EDI mov cx, word ptr [edi]
#define MOV_CX_FROM_PTR_ESI mov cx, word ptr [esi]
#define MOV_CX_FROM_PTR_EBP mov cx, word ptr [ebp]
#define MOV_CX_FROM_PTR_ESP mov cx, word ptr [esp]
#define MOV_CX_FROM_PTR_BX mov cx, word ptr [bx]
#define MOV_CX_FROM_PTR_BP mov cx, word ptr [bp]
#define MOV_CX_FROM_PTR_SI mov cx, word ptr [si]
#define MOV_CX_FROM_PTR_DI mov cx, word ptr [di]

#define MOV_DX_FROM_PTR_EAX mov dx, word ptr [eax]
#define MOV_DX_FROM_PTR_EBX mov dx, word ptr [ebx]
#define MOV_DX_FROM_PTR_ECX mov dx, word ptr [ecx]
#define MOV_DX_FROM_PTR_EDX mov dx, word ptr [edx]
#define MOV_DX_FROM_PTR_EDI mov dx, word ptr [edi]
#define MOV_DX_FROM_PTR_ESI mov dx, word ptr [esi]
#define MOV_DX_FROM_PTR_EBP mov dx, word ptr [ebp]
#define MOV_DX_FROM_PTR_ESP mov dx, word ptr [esp]
#define MOV_DX_FROM_PTR_BX mov dx, word ptr [bx]
#define MOV_DX_FROM_PTR_BP mov dx, word ptr [bp]
#define MOV_DX_FROM_PTR_SI mov dx, word ptr [si]
#define MOV_DX_FROM_PTR_DI mov dx, word ptr [di]

#define MOV_DI_FROM_PTR_EAX mov di, word ptr [eax]
#define MOV_DI_FROM_PTR_EBX mov di, word ptr [ebx]
#define MOV_DI_FROM_PTR_ECX mov di, word ptr [ecx]
#define MOV_DI_FROM_PTR_EDX mov di, word ptr [edx]
#define MOV_DI_FROM_PTR_EDI mov di, word ptr [edi]
#define MOV_DI_FROM_PTR_ESI mov di, word ptr [esi]
#define MOV_DI_FROM_PTR_EBP mov di, word ptr [ebp]
#define MOV_DI_FROM_PTR_ESP mov di, word ptr [esp]
#define MOV_DI_FROM_PTR_BX mov di, word ptr [bx]
#define MOV_DI_FROM_PTR_BP mov di, word ptr [bp]
#define MOV_DI_FROM_PTR_SI mov di, word ptr [si]
#define MOV_DI_FROM_PTR_DI mov di, word ptr [di]

#define MOV_SI_FROM_PTR_EAX mov si, word ptr [eax]
#define MOV_SI_FROM_PTR_EBX mov si, word ptr [ebx]
#define MOV_SI_FROM_PTR_ECX mov si, word ptr [ecx]
#define MOV_SI_FROM_PTR_EDX mov si, word ptr [edx]
#define MOV_SI_FROM_PTR_EDI mov si, word ptr [edi]
#define MOV_SI_FROM_PTR_ESI mov si, word ptr [esi]
#define MOV_SI_FROM_PTR_EBP mov si, word ptr [ebp]
#define MOV_SI_FROM_PTR_ESP mov si, word ptr [esp]
#define MOV_SI_FROM_PTR_BX mov si, word ptr [bx]
#define MOV_SI_FROM_PTR_BP mov si, word ptr [bp]
#define MOV_SI_FROM_PTR_SI mov si, word ptr [si]
#define MOV_SI_FROM_PTR_DI mov si, word ptr [di]

#define MOV_BP_FROM_PTR_EAX mov bp, word ptr [eax]
#define MOV_BP_FROM_PTR_EBX mov bp, word ptr [ebx]
#define MOV_BP_FROM_PTR_ECX mov bp, word ptr [ecx]
#define MOV_BP_FROM_PTR_EDX mov bp, word ptr [edx]
#define MOV_BP_FROM_PTR_EDI mov bp, word ptr [edi]
#define MOV_BP_FROM_PTR_ESI mov bp, word ptr [esi]
#define MOV_BP_FROM_PTR_EBP mov bp, word ptr [ebp]
#define MOV_BP_FROM_PTR_ESP mov bp, word ptr [esp]
#define MOV_BP_FROM_PTR_BX mov bp, word ptr [bx]
#define MOV_BP_FROM_PTR_BP mov bp, word ptr [bp]
#define MOV_BP_FROM_PTR_SI mov bp, word ptr [si]
#define MOV_BP_FROM_PTR_DI mov bp, word ptr [di]

#define MOV_SP_FROM_PTR_EAX mov sp, word ptr [eax]
#define MOV_SP_FROM_PTR_EBX mov sp, word ptr [ebx]
#define MOV_SP_FROM_PTR_ECX mov sp, word ptr [ecx]
#define MOV_SP_FROM_PTR_EDX mov sp, word ptr [edx]
#define MOV_SP_FROM_PTR_EDI mov sp, word ptr [edi]
#define MOV_SP_FROM_PTR_ESI mov sp, word ptr [esi]
#define MOV_SP_FROM_PTR_EBP mov sp, word ptr [ebp]
#define MOV_SP_FROM_PTR_ESP mov sp, word ptr [esp]
#define MOV_SP_FROM_PTR_BX mov sp, word ptr [bx]
#define MOV_SP_FROM_PTR_BP mov sp, word ptr [bp]
#define MOV_SP_FROM_PTR_SI mov sp, word ptr [si]
#define MOV_SP_FROM_PTR_DI mov sp, word ptr [di]

#define MOV_AX_TO_PTR_EAX mov word ptr [eax], ax
#define MOV_AX_TO_PTR_EBX mov word ptr [ebx], ax
#define MOV_AX_TO_PTR_ECX mov word ptr [ecx], ax
#define MOV_AX_TO_PTR_EDX mov word ptr [edx], ax
#define MOV_AX_TO_PTR_EDI mov word ptr [edi], ax
#define MOV_AX_TO_PTR_ESI mov word ptr [esi], ax
#define MOV_AX_TO_PTR_EBP mov word ptr [ebp], ax
#define MOV_AX_TO_PTR_ESP mov word ptr [esp], ax
#define MOV_AX_TO_PTR_BX mov word ptr [bx], ax
#define MOV_AX_TO_PTR_BP mov word ptr [bp], ax
#define MOV_AX_TO_PTR_SI mov word ptr [si], ax
#define MOV_AX_TO_PTR_DI mov word ptr [di], ax

#define MOV_BX_TO_PTR_EAX mov word ptr [eax], bx
#define MOV_BX_TO_PTR_EBX mov word ptr [ebx], bx
#define MOV_BX_TO_PTR_ECX mov word ptr [ecx], bx
#define MOV_BX_TO_PTR_EDX mov word ptr [edx], bx
#define MOV_BX_TO_PTR_EDI mov word ptr [edi], bx
#define MOV_BX_TO_PTR_ESI mov word ptr [esi], bx
#define MOV_BX_TO_PTR_EBP mov word ptr [ebp], bx
#define MOV_BX_TO_PTR_ESP mov word ptr [esp], bx
#define MOV_BX_TO_PTR_BX mov word ptr [bx], bx
#define MOV_BX_TO_PTR_BP mov word ptr [bp], bx
#define MOV_BX_TO_PTR_SI mov word ptr [si], bx
#define MOV_BX_TO_PTR_DI mov word ptr [di], bx

#define MOV_CX_TO_PTR_EAX mov word ptr [eax], cx
#define MOV_CX_TO_PTR_EBX mov word ptr [ebx], cx
#define MOV_CX_TO_PTR_ECX mov word ptr [ecx], cx
#define MOV_CX_TO_PTR_EDX mov word ptr [edx], cx
#define MOV_CX_TO_PTR_EDI mov word ptr [edi], cx
#define MOV_CX_TO_PTR_ESI mov word ptr [esi], cx
#define MOV_CX_TO_PTR_EBP mov word ptr [ebp], cx
#define MOV_CX_TO_PTR_ESP mov word ptr [esp], cx
#define MOV_CX_TO_PTR_BX mov word ptr [bx], cx
#define MOV_CX_TO_PTR_BP mov word ptr [bp], cx
#define MOV_CX_TO_PTR_SI mov word ptr [si], cx
#define MOV_CX_TO_PTR_DI mov word ptr [di], cx

#define MOV_DX_TO_PTR_EAX mov word ptr [eax], dx
#define MOV_DX_TO_PTR_EBX mov word ptr [ebx], dx
#define MOV_DX_TO_PTR_ECX mov word ptr [ecx], dx
#define MOV_DX_TO_PTR_EDX mov word ptr [edx], dx
#define MOV_DX_TO_PTR_EDI mov word ptr [edi], dx
#define MOV_DX_TO_PTR_ESI mov word ptr [esi], dx
#define MOV_DX_TO_PTR_EBP mov word ptr [ebp], dx
#define MOV_DX_TO_PTR_ESP mov word ptr [esp], dx
#define MOV_DX_TO_PTR_BX mov word ptr [bx], dx
#define MOV_DX_TO_PTR_BP mov word ptr [bp], dx
#define MOV_DX_TO_PTR_SI mov word ptr [si], dx
#define MOV_DX_TO_PTR_DI mov word ptr [di], dx

#define MOV_DI_TO_PTR_EAX mov word ptr [eax], di
#define MOV_DI_TO_PTR_EBX mov word ptr [ebx], di
#define MOV_DI_TO_PTR_ECX mov word ptr [ecx], di
#define MOV_DI_TO_PTR_EDX mov word ptr [edx], di
#define MOV_DI_TO_PTR_EDI mov word ptr [edi], di
#define MOV_DI_TO_PTR_ESI mov word ptr [esi], di
#define MOV_DI_TO_PTR_EBP mov word ptr [ebp], di
#define MOV_DI_TO_PTR_ESP mov word ptr [esp], di
#define MOV_DI_TO_PTR_BX mov word ptr [bx], di
#define MOV_DI_TO_PTR_BP mov word ptr [bp], di
#define MOV_DI_TO_PTR_SI mov word ptr [si], di
#define MOV_DI_TO_PTR_DI mov word ptr [di], di

#define MOV_SI_TO_PTR_EAX mov word ptr [eax], si
#define MOV_SI_TO_PTR_EBX mov word ptr [ebx], si
#define MOV_SI_TO_PTR_ECX mov word ptr [ecx], si
#define MOV_SI_TO_PTR_EDX mov word ptr [edx], si
#define MOV_SI_TO_PTR_EDI mov word ptr [edi], si
#define MOV_SI_TO_PTR_ESI mov word ptr [esi], si
#define MOV_SI_TO_PTR_EBP mov word ptr [ebp], si
#define MOV_SI_TO_PTR_ESP mov word ptr [esp], si
#define MOV_SI_TO_PTR_BX mov word ptr [bx], si
#define MOV_SI_TO_PTR_BP mov word ptr [bp], si
#define MOV_SI_TO_PTR_SI mov word ptr [si], si
#define MOV_SI_TO_PTR_DI mov word ptr [di], si

#define MOV_BP_TO_PTR_EAX mov word ptr [eax], bp
#define MOV_BP_TO_PTR_EBX mov word ptr [ebx], bp
#define MOV_BP_TO_PTR_ECX mov word ptr [ecx], bp
#define MOV_BP_TO_PTR_EDX mov word ptr [edx], bp
#define MOV_BP_TO_PTR_EDI mov word ptr [edi], bp
#define MOV_BP_TO_PTR_ESI mov word ptr [esi], bp
#define MOV_BP_TO_PTR_EBP mov word ptr [ebp], bp
#define MOV_BP_TO_PTR_ESP mov word ptr [esp], bp
#define MOV_BP_TO_PTR_BX mov word ptr [bx], bp
#define MOV_BP_TO_PTR_BP mov word ptr [bp], bp
#define MOV_BP_TO_PTR_SI mov word ptr [si], bp
#define MOV_BP_TO_PTR_DI mov word ptr [di], bp

#define MOV_SP_TO_PTR_EAX mov word ptr [eax], sp
#define MOV_SP_TO_PTR_EBX mov word ptr [ebx], sp
#define MOV_SP_TO_PTR_ECX mov word ptr [ecx], sp
#define MOV_SP_TO_PTR_EDX mov word ptr [edx], sp
#define MOV_SP_TO_PTR_EDI mov word ptr [edi], sp
#define MOV_SP_TO_PTR_ESI mov word ptr [esi], sp
#define MOV_SP_TO_PTR_EBP mov word ptr [ebp], sp
#define MOV_SP_TO_PTR_ESP mov word ptr [esp], sp
#define MOV_SP_TO_PTR_BX mov word ptr [bx], sp
#define MOV_SP_TO_PTR_BP mov word ptr [bp], sp
#define MOV_SP_TO_PTR_SI mov word ptr [si], sp
#define MOV_SP_TO_PTR_DI mov word ptr [di], sp

#define MOV_AX_FROM_PTR_EAX_(VALUE) mov ax, word ptr [eax + VALUE]
#define MOV_AX_FROM_PTR_EBX_(VALUE) mov ax, word ptr [ebx + VALUE]
#define MOV_AX_FROM_PTR_ECX_(VALUE) mov ax, word ptr [ecx + VALUE]
#define MOV_AX_FROM_PTR_EDX_(VALUE) mov ax, word ptr [edx + VALUE]
#define MOV_AX_FROM_PTR_EDI_(VALUE) mov ax, word ptr [edi + VALUE]
#define MOV_AX_FROM_PTR_ESI_(VALUE) mov ax, word ptr [esi + VALUE]
#define MOV_AX_FROM_PTR_EBP_(VALUE) mov ax, word ptr [ebp + VALUE]
#define MOV_AX_FROM_PTR_ESP_(VALUE) mov ax, word ptr [esp + VALUE]
#define MOV_AX_FROM_PTR_BX_(VALUE) mov ax, word ptr [bx + VALUE]
#define MOV_AX_FROM_PTR_BP_(VALUE) mov ax, word ptr [bp + VALUE]
#define MOV_AX_FROM_PTR_SI_(VALUE) mov ax, word ptr [si + VALUE]
#define MOV_AX_FROM_PTR_DI_(VALUE) mov ax, word ptr [di + VALUE]

#define MOV_BX_FROM_PTR_EAX_(VALUE) mov bx, word ptr [eax + VALUE]
#define MOV_BX_FROM_PTR_EBX_(VALUE) mov bx, word ptr [ebx + VALUE]
#define MOV_BX_FROM_PTR_ECX_(VALUE) mov bx, word ptr [ecx + VALUE]
#define MOV_BX_FROM_PTR_EDX_(VALUE) mov bx, word ptr [edx + VALUE]
#define MOV_BX_FROM_PTR_EDI_(VALUE) mov bx, word ptr [edi + VALUE]
#define MOV_BX_FROM_PTR_ESI_(VALUE) mov bx, word ptr [esi + VALUE]
#define MOV_BX_FROM_PTR_EBP_(VALUE) mov bx, word ptr [ebp + VALUE]
#define MOV_BX_FROM_PTR_ESP_(VALUE) mov bx, word ptr [esp + VALUE]
#define MOV_BX_FROM_PTR_BX_(VALUE) mov bx, word ptr [bx + VALUE]
#define MOV_BX_FROM_PTR_BP_(VALUE) mov bx, word ptr [bp + VALUE]
#define MOV_BX_FROM_PTR_SI_(VALUE) mov bx, word ptr [si + VALUE]
#define MOV_BX_FROM_PTR_DI_(VALUE) mov bx, word ptr [di + VALUE]

#define MOV_CX_FROM_PTR_EAX_(VALUE) mov cx, word ptr [eax + VALUE]
#define MOV_CX_FROM_PTR_EBX_(VALUE) mov cx, word ptr [ebx + VALUE]
#define MOV_CX_FROM_PTR_ECX_(VALUE) mov cx, word ptr [ecx + VALUE]
#define MOV_CX_FROM_PTR_EDX_(VALUE) mov cx, word ptr [edx + VALUE]
#define MOV_CX_FROM_PTR_EDI_(VALUE) mov cx, word ptr [edi + VALUE]
#define MOV_CX_FROM_PTR_ESI_(VALUE) mov cx, word ptr [esi + VALUE]
#define MOV_CX_FROM_PTR_EBP_(VALUE) mov cx, word ptr [ebp + VALUE]
#define MOV_CX_FROM_PTR_ESP_(VALUE) mov cx, word ptr [esp + VALUE]
#define MOV_CX_FROM_PTR_BX_(VALUE) mov cx, word ptr [bx + VALUE]
#define MOV_CX_FROM_PTR_BP_(VALUE) mov cx, word ptr [bp + VALUE]
#define MOV_CX_FROM_PTR_SI_(VALUE) mov cx, word ptr [si + VALUE]
#define MOV_CX_FROM_PTR_DI_(VALUE) mov cx, word ptr [di + VALUE]

#define MOV_DX_FROM_PTR_EAX_(VALUE) mov dx, word ptr [eax + VALUE]
#define MOV_DX_FROM_PTR_EBX_(VALUE) mov dx, word ptr [ebx + VALUE]
#define MOV_DX_FROM_PTR_ECX_(VALUE) mov dx, word ptr [ecx + VALUE]
#define MOV_DX_FROM_PTR_EDX_(VALUE) mov dx, word ptr [edx + VALUE]
#define MOV_DX_FROM_PTR_EDI_(VALUE) mov dx, word ptr [edi + VALUE]
#define MOV_DX_FROM_PTR_ESI_(VALUE) mov dx, word ptr [esi + VALUE]
#define MOV_DX_FROM_PTR_EBP_(VALUE) mov dx, word ptr [ebp + VALUE]
#define MOV_DX_FROM_PTR_ESP_(VALUE) mov dx, word ptr [esp + VALUE]
#define MOV_DX_FROM_PTR_BX_(VALUE) mov dx, word ptr [bx + VALUE]
#define MOV_DX_FROM_PTR_BP_(VALUE) mov dx, word ptr [bp + VALUE]
#define MOV_DX_FROM_PTR_SI_(VALUE) mov dx, word ptr [si + VALUE]
#define MOV_DX_FROM_PTR_DI_(VALUE) mov dx, word ptr [di + VALUE]

#define MOV_DI_FROM_PTR_EAX_(VALUE) mov di, word ptr [eax + VALUE]
#define MOV_DI_FROM_PTR_EBX_(VALUE) mov di, word ptr [ebx + VALUE]
#define MOV_DI_FROM_PTR_ECX_(VALUE) mov di, word ptr [ecx + VALUE]
#define MOV_DI_FROM_PTR_EDX_(VALUE) mov di, word ptr [edx + VALUE]
#define MOV_DI_FROM_PTR_EDI_(VALUE) mov di, word ptr [edi + VALUE]
#define MOV_DI_FROM_PTR_ESI_(VALUE) mov di, word ptr [esi + VALUE]
#define MOV_DI_FROM_PTR_EBP_(VALUE) mov di, word ptr [ebp + VALUE]
#define MOV_DI_FROM_PTR_ESP_(VALUE) mov di, word ptr [esp + VALUE]
#define MOV_DI_FROM_PTR_BX_(VALUE) mov di, word ptr [bx + VALUE]
#define MOV_DI_FROM_PTR_BP_(VALUE) mov di, word ptr [bp + VALUE]
#define MOV_DI_FROM_PTR_SI_(VALUE) mov di, word ptr [si + VALUE]
#define MOV_DI_FROM_PTR_DI_(VALUE) mov di, word ptr [di + VALUE]

#define MOV_SI_FROM_PTR_EAX_(VALUE) mov si, word ptr [eax + VALUE]
#define MOV_SI_FROM_PTR_EBX_(VALUE) mov si, word ptr [ebx + VALUE]
#define MOV_SI_FROM_PTR_ECX_(VALUE) mov si, word ptr [ecx + VALUE]
#define MOV_SI_FROM_PTR_EDX_(VALUE) mov si, word ptr [edx + VALUE]
#define MOV_SI_FROM_PTR_EDI_(VALUE) mov si, word ptr [edi + VALUE]
#define MOV_SI_FROM_PTR_ESI_(VALUE) mov si, word ptr [esi + VALUE]
#define MOV_SI_FROM_PTR_EBP_(VALUE) mov si, word ptr [ebp + VALUE]
#define MOV_SI_FROM_PTR_ESP_(VALUE) mov si, word ptr [esp + VALUE]
#define MOV_SI_FROM_PTR_BX_(VALUE) mov si, word ptr [bx + VALUE]
#define MOV_SI_FROM_PTR_BP_(VALUE) mov si, word ptr [bp + VALUE]
#define MOV_SI_FROM_PTR_SI_(VALUE) mov si, word ptr [si + VALUE]
#define MOV_SI_FROM_PTR_DI_(VALUE) mov si, word ptr [di + VALUE]

#define MOV_BP_FROM_PTR_EAX_(VALUE) mov bp, word ptr [eax + VALUE]
#define MOV_BP_FROM_PTR_EBX_(VALUE) mov bp, word ptr [ebx + VALUE]
#define MOV_BP_FROM_PTR_ECX_(VALUE) mov bp, word ptr [ecx + VALUE]
#define MOV_BP_FROM_PTR_EDX_(VALUE) mov bp, word ptr [edx + VALUE]
#define MOV_BP_FROM_PTR_EDI_(VALUE) mov bp, word ptr [edi + VALUE]
#define MOV_BP_FROM_PTR_ESI_(VALUE) mov bp, word ptr [esi + VALUE]
#define MOV_BP_FROM_PTR_EBP_(VALUE) mov bp, word ptr [ebp + VALUE]
#define MOV_BP_FROM_PTR_ESP_(VALUE) mov bp, word ptr [esp + VALUE]
#define MOV_BP_FROM_PTR_BX_(VALUE) mov bp, word ptr [bx + VALUE]
#define MOV_BP_FROM_PTR_BP_(VALUE) mov bp, word ptr [bp + VALUE]
#define MOV_BP_FROM_PTR_SI_(VALUE) mov bp, word ptr [si + VALUE]
#define MOV_BP_FROM_PTR_DI_(VALUE) mov bp, word ptr [di + VALUE]

#define MOV_SP_FROM_PTR_EAX_(VALUE) mov sp, word ptr [eax + VALUE]
#define MOV_SP_FROM_PTR_EBX_(VALUE) mov sp, word ptr [ebx + VALUE]
#define MOV_SP_FROM_PTR_ECX_(VALUE) mov sp, word ptr [ecx + VALUE]
#define MOV_SP_FROM_PTR_EDX_(VALUE) mov sp, word ptr [edx + VALUE]
#define MOV_SP_FROM_PTR_EDI_(VALUE) mov sp, word ptr [edi + VALUE]
#define MOV_SP_FROM_PTR_ESI_(VALUE) mov sp, word ptr [esi + VALUE]
#define MOV_SP_FROM_PTR_EBP_(VALUE) mov sp, word ptr [ebp + VALUE]
#define MOV_SP_FROM_PTR_ESP_(VALUE) mov sp, word ptr [esp + VALUE]
#define MOV_SP_FROM_PTR_BX_(VALUE) mov sp, word ptr [bx + VALUE]
#define MOV_SP_FROM_PTR_BP_(VALUE) mov sp, word ptr [bp + VALUE]
#define MOV_SP_FROM_PTR_SI_(VALUE) mov sp, word ptr [si + VALUE]
#define MOV_SP_FROM_PTR_DI_(VALUE) mov sp, word ptr [di + VALUE]

#define MOV_AX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], ax
#define MOV_AX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], ax
#define MOV_AX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], ax
#define MOV_AX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], ax
#define MOV_AX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], ax
#define MOV_AX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], ax
#define MOV_AX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], ax
#define MOV_AX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], ax
#define MOV_AX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], ax
#define MOV_AX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], ax
#define MOV_AX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], ax
#define MOV_AX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], ax

#define MOV_BX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], bx
#define MOV_BX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], bx
#define MOV_BX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], bx
#define MOV_BX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], bx
#define MOV_BX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], bx
#define MOV_BX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], bx
#define MOV_BX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bx
#define MOV_BX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bx
#define MOV_BX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], bx
#define MOV_BX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], bx
#define MOV_BX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], bx
#define MOV_BX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], bx

#define MOV_CX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], cx
#define MOV_CX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], cx
#define MOV_CX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], cx
#define MOV_CX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], cx
#define MOV_CX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], cx
#define MOV_CX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], cx
#define MOV_CX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], cx
#define MOV_CX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], cx
#define MOV_CX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], cx
#define MOV_CX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], cx
#define MOV_CX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], cx
#define MOV_CX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], cx

#define MOV_DX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], dx
#define MOV_DX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], dx
#define MOV_DX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], dx
#define MOV_DX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], dx
#define MOV_DX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], dx
#define MOV_DX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], dx
#define MOV_DX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], dx
#define MOV_DX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], dx
#define MOV_DX_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], dx
#define MOV_DX_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], dx
#define MOV_DX_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], dx
#define MOV_DX_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], dx

#define MOV_DI_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], di
#define MOV_DI_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], di
#define MOV_DI_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], di
#define MOV_DI_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], di
#define MOV_DI_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], di
#define MOV_DI_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], di
#define MOV_DI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], di
#define MOV_DI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], di
#define MOV_DI_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], di
#define MOV_DI_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], di
#define MOV_DI_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], di
#define MOV_DI_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], di

#define MOV_SI_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], si
#define MOV_SI_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], si
#define MOV_SI_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], si
#define MOV_SI_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], si
#define MOV_SI_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], si
#define MOV_SI_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], si
#define MOV_SI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], si
#define MOV_SI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], si
#define MOV_SI_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], si
#define MOV_SI_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], si
#define MOV_SI_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], si
#define MOV_SI_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], si

#define MOV_BP_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], bp
#define MOV_BP_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], bp
#define MOV_BP_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], bp
#define MOV_BP_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], bp
#define MOV_BP_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], bp
#define MOV_BP_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], bp
#define MOV_BP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bp
#define MOV_BP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bp
#define MOV_BP_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], bp
#define MOV_BP_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], bp
#define MOV_BP_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], bp
#define MOV_BP_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], bp

#define MOV_SP_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], sp
#define MOV_SP_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], sp
#define MOV_SP_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], sp
#define MOV_SP_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], sp
#define MOV_SP_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], sp
#define MOV_SP_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], sp
#define MOV_SP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], sp
#define MOV_SP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], sp
#define MOV_SP_TO_PTR_BX_(VALUE) mov word ptr [bx + VALUE], sp
#define MOV_SP_TO_PTR_BP_(VALUE) mov word ptr [bp + VALUE], sp
#define MOV_SP_TO_PTR_SI_(VALUE) mov word ptr [si + VALUE], sp
#define MOV_SP_TO_PTR_DI_(VALUE) mov word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define MOV_AX_FROM_PTR_(VALUE) mov ax, word ptr [VALUE]
#define MOV_BX_FROM_PTR_(VALUE) mov bx, word ptr [VALUE]
#define MOV_CX_FROM_PTR_(VALUE) mov cx, word ptr [VALUE]
#define MOV_DX_FROM_PTR_(VALUE) mov dx, word ptr [VALUE]
#define MOV_DI_FROM_PTR_(VALUE) mov di, word ptr [VALUE]
#define MOV_SI_FROM_PTR_(VALUE) mov si, word ptr [VALUE]
#define MOV_BP_FROM_PTR_(VALUE) mov bp, word ptr [VALUE]
#define MOV_SP_FROM_PTR_(VALUE) mov sp, word ptr [VALUE]
#define MOV_R8W_FROM_PTR_(VALUE) mov r8w, word ptr [VALUE]
#define MOV_R9W_FROM_PTR_(VALUE) mov r9w, word ptr [VALUE]
#define MOV_R10W_FROM_PTR_(VALUE) mov r10w, word ptr [VALUE]
#define MOV_R11W_FROM_PTR_(VALUE) mov r11w, word ptr [VALUE]
#define MOV_R12W_FROM_PTR_(VALUE) mov r12w, word ptr [VALUE]
#define MOV_R13W_FROM_PTR_(VALUE) mov r13w, word ptr [VALUE]
#define MOV_R14W_FROM_PTR_(VALUE) mov r14w, word ptr [VALUE]
#define MOV_R15W_FROM_PTR_(VALUE) mov r15w, word ptr [VALUE]

#define MOV_AX_TO_PTR_(VALUE) mov word ptr [VALUE], ax
#define MOV_BX_TO_PTR_(VALUE) mov word ptr [VALUE], bx
#define MOV_CX_TO_PTR_(VALUE) mov word ptr [VALUE], cx
#define MOV_DX_TO_PTR_(VALUE) mov word ptr [VALUE], dx
#define MOV_DI_TO_PTR_(VALUE) mov word ptr [VALUE], di
#define MOV_SI_TO_PTR_(VALUE) mov word ptr [VALUE], si
#define MOV_BP_TO_PTR_(VALUE) mov word ptr [VALUE], bp
#define MOV_SP_TO_PTR_(VALUE) mov word ptr [VALUE], sp
#define MOV_R8W_TO_PTR_(VALUE) mov word ptr [VALUE], r8w
#define MOV_R9W_TO_PTR_(VALUE) mov word ptr [VALUE], r9w
#define MOV_R10W_TO_PTR_(VALUE) mov word ptr [VALUE], r10w
#define MOV_R11W_TO_PTR_(VALUE) mov word ptr [VALUE], r11w
#define MOV_R12W_TO_PTR_(VALUE) mov word ptr [VALUE], r12w
#define MOV_R13W_TO_PTR_(VALUE) mov word ptr [VALUE], r13w
#define MOV_R14W_TO_PTR_(VALUE) mov word ptr [VALUE], r14w
#define MOV_R15W_TO_PTR_(VALUE) mov word ptr [VALUE], r15w

#define MOV_AX_FROM_PTR_RAX mov ax, word ptr [rax]
#define MOV_AX_FROM_PTR_RBX mov ax, word ptr [rbx]
#define MOV_AX_FROM_PTR_RCX mov ax, word ptr [rcx]
#define MOV_AX_FROM_PTR_RDX mov ax, word ptr [rdx]
#define MOV_AX_FROM_PTR_RDI mov ax, word ptr [rdi]
#define MOV_AX_FROM_PTR_RSI mov ax, word ptr [rsi]
#define MOV_AX_FROM_PTR_RBP mov ax, word ptr [rbp]
#define MOV_AX_FROM_PTR_RSP mov ax, word ptr [rsp]
#define MOV_AX_FROM_PTR_R8 mov ax, word ptr [r8]
#define MOV_AX_FROM_PTR_R9 mov ax, word ptr [r9]
#define MOV_AX_FROM_PTR_R10 mov ax, word ptr [r10]
#define MOV_AX_FROM_PTR_R11 mov ax, word ptr [r11]
#define MOV_AX_FROM_PTR_R12 mov ax, word ptr [r12]
#define MOV_AX_FROM_PTR_R13 mov ax, word ptr [r13]
#define MOV_AX_FROM_PTR_R14 mov ax, word ptr [r14]
#define MOV_AX_FROM_PTR_R15 mov ax, word ptr [r15]
#define MOV_AX_FROM_PTR_EAX mov ax, word ptr [eax]
#define MOV_AX_FROM_PTR_EBX mov ax, word ptr [ebx]
#define MOV_AX_FROM_PTR_ECX mov ax, word ptr [ecx]
#define MOV_AX_FROM_PTR_EDX mov ax, word ptr [edx]
#define MOV_AX_FROM_PTR_EDI mov ax, word ptr [edi]
#define MOV_AX_FROM_PTR_ESI mov ax, word ptr [esi]
#define MOV_AX_FROM_PTR_EBP mov ax, word ptr [ebp]
#define MOV_AX_FROM_PTR_ESP mov ax, word ptr [esp]

#define MOV_BX_FROM_PTR_RAX mov bx, word ptr [rax]
#define MOV_BX_FROM_PTR_RBX mov bx, word ptr [rbx]
#define MOV_BX_FROM_PTR_RCX mov bx, word ptr [rcx]
#define MOV_BX_FROM_PTR_RDX mov bx, word ptr [rdx]
#define MOV_BX_FROM_PTR_RDI mov bx, word ptr [rdi]
#define MOV_BX_FROM_PTR_RSI mov bx, word ptr [rsi]
#define MOV_BX_FROM_PTR_RBP mov bx, word ptr [rbp]
#define MOV_BX_FROM_PTR_RSP mov bx, word ptr [rsp]
#define MOV_BX_FROM_PTR_R8 mov bx, word ptr [r8]
#define MOV_BX_FROM_PTR_R9 mov bx, word ptr [r9]
#define MOV_BX_FROM_PTR_R10 mov bx, word ptr [r10]
#define MOV_BX_FROM_PTR_R11 mov bx, word ptr [r11]
#define MOV_BX_FROM_PTR_R12 mov bx, word ptr [r12]
#define MOV_BX_FROM_PTR_R13 mov bx, word ptr [r13]
#define MOV_BX_FROM_PTR_R14 mov bx, word ptr [r14]
#define MOV_BX_FROM_PTR_R15 mov bx, word ptr [r15]
#define MOV_BX_FROM_PTR_EAX mov bx, word ptr [eax]
#define MOV_BX_FROM_PTR_EBX mov bx, word ptr [ebx]
#define MOV_BX_FROM_PTR_ECX mov bx, word ptr [ecx]
#define MOV_BX_FROM_PTR_EDX mov bx, word ptr [edx]
#define MOV_BX_FROM_PTR_EDI mov bx, word ptr [edi]
#define MOV_BX_FROM_PTR_ESI mov bx, word ptr [esi]
#define MOV_BX_FROM_PTR_EBP mov bx, word ptr [ebp]
#define MOV_BX_FROM_PTR_ESP mov bx, word ptr [esp]

#define MOV_CX_FROM_PTR_RAX mov cx, word ptr [rax]
#define MOV_CX_FROM_PTR_RBX mov cx, word ptr [rbx]
#define MOV_CX_FROM_PTR_RCX mov cx, word ptr [rcx]
#define MOV_CX_FROM_PTR_RDX mov cx, word ptr [rdx]
#define MOV_CX_FROM_PTR_RDI mov cx, word ptr [rdi]
#define MOV_CX_FROM_PTR_RSI mov cx, word ptr [rsi]
#define MOV_CX_FROM_PTR_RBP mov cx, word ptr [rbp]
#define MOV_CX_FROM_PTR_RSP mov cx, word ptr [rsp]
#define MOV_CX_FROM_PTR_R8 mov cx, word ptr [r8]
#define MOV_CX_FROM_PTR_R9 mov cx, word ptr [r9]
#define MOV_CX_FROM_PTR_R10 mov cx, word ptr [r10]
#define MOV_CX_FROM_PTR_R11 mov cx, word ptr [r11]
#define MOV_CX_FROM_PTR_R12 mov cx, word ptr [r12]
#define MOV_CX_FROM_PTR_R13 mov cx, word ptr [r13]
#define MOV_CX_FROM_PTR_R14 mov cx, word ptr [r14]
#define MOV_CX_FROM_PTR_R15 mov cx, word ptr [r15]
#define MOV_CX_FROM_PTR_EAX mov cx, word ptr [eax]
#define MOV_CX_FROM_PTR_EBX mov cx, word ptr [ebx]
#define MOV_CX_FROM_PTR_ECX mov cx, word ptr [ecx]
#define MOV_CX_FROM_PTR_EDX mov cx, word ptr [edx]
#define MOV_CX_FROM_PTR_EDI mov cx, word ptr [edi]
#define MOV_CX_FROM_PTR_ESI mov cx, word ptr [esi]
#define MOV_CX_FROM_PTR_EBP mov cx, word ptr [ebp]
#define MOV_CX_FROM_PTR_ESP mov cx, word ptr [esp]

#define MOV_DX_FROM_PTR_RAX mov dx, word ptr [rax]
#define MOV_DX_FROM_PTR_RBX mov dx, word ptr [rbx]
#define MOV_DX_FROM_PTR_RCX mov dx, word ptr [rcx]
#define MOV_DX_FROM_PTR_RDX mov dx, word ptr [rdx]
#define MOV_DX_FROM_PTR_RDI mov dx, word ptr [rdi]
#define MOV_DX_FROM_PTR_RSI mov dx, word ptr [rsi]
#define MOV_DX_FROM_PTR_RBP mov dx, word ptr [rbp]
#define MOV_DX_FROM_PTR_RSP mov dx, word ptr [rsp]
#define MOV_DX_FROM_PTR_R8 mov dx, word ptr [r8]
#define MOV_DX_FROM_PTR_R9 mov dx, word ptr [r9]
#define MOV_DX_FROM_PTR_R10 mov dx, word ptr [r10]
#define MOV_DX_FROM_PTR_R11 mov dx, word ptr [r11]
#define MOV_DX_FROM_PTR_R12 mov dx, word ptr [r12]
#define MOV_DX_FROM_PTR_R13 mov dx, word ptr [r13]
#define MOV_DX_FROM_PTR_R14 mov dx, word ptr [r14]
#define MOV_DX_FROM_PTR_R15 mov dx, word ptr [r15]
#define MOV_DX_FROM_PTR_EAX mov dx, word ptr [eax]
#define MOV_DX_FROM_PTR_EBX mov dx, word ptr [ebx]
#define MOV_DX_FROM_PTR_ECX mov dx, word ptr [ecx]
#define MOV_DX_FROM_PTR_EDX mov dx, word ptr [edx]
#define MOV_DX_FROM_PTR_EDI mov dx, word ptr [edi]
#define MOV_DX_FROM_PTR_ESI mov dx, word ptr [esi]
#define MOV_DX_FROM_PTR_EBP mov dx, word ptr [ebp]
#define MOV_DX_FROM_PTR_ESP mov dx, word ptr [esp]

#define MOV_DI_FROM_PTR_RAX mov di, word ptr [rax]
#define MOV_DI_FROM_PTR_RBX mov di, word ptr [rbx]
#define MOV_DI_FROM_PTR_RCX mov di, word ptr [rcx]
#define MOV_DI_FROM_PTR_RDX mov di, word ptr [rdx]
#define MOV_DI_FROM_PTR_RDI mov di, word ptr [rdi]
#define MOV_DI_FROM_PTR_RSI mov di, word ptr [rsi]
#define MOV_DI_FROM_PTR_RBP mov di, word ptr [rbp]
#define MOV_DI_FROM_PTR_RSP mov di, word ptr [rsp]
#define MOV_DI_FROM_PTR_R8 mov di, word ptr [r8]
#define MOV_DI_FROM_PTR_R9 mov di, word ptr [r9]
#define MOV_DI_FROM_PTR_R10 mov di, word ptr [r10]
#define MOV_DI_FROM_PTR_R11 mov di, word ptr [r11]
#define MOV_DI_FROM_PTR_R12 mov di, word ptr [r12]
#define MOV_DI_FROM_PTR_R13 mov di, word ptr [r13]
#define MOV_DI_FROM_PTR_R14 mov di, word ptr [r14]
#define MOV_DI_FROM_PTR_R15 mov di, word ptr [r15]
#define MOV_DI_FROM_PTR_EAX mov di, word ptr [eax]
#define MOV_DI_FROM_PTR_EBX mov di, word ptr [ebx]
#define MOV_DI_FROM_PTR_ECX mov di, word ptr [ecx]
#define MOV_DI_FROM_PTR_EDX mov di, word ptr [edx]
#define MOV_DI_FROM_PTR_EDI mov di, word ptr [edi]
#define MOV_DI_FROM_PTR_ESI mov di, word ptr [esi]
#define MOV_DI_FROM_PTR_EBP mov di, word ptr [ebp]
#define MOV_DI_FROM_PTR_ESP mov di, word ptr [esp]

#define MOV_SI_FROM_PTR_RAX mov si, word ptr [rax]
#define MOV_SI_FROM_PTR_RBX mov si, word ptr [rbx]
#define MOV_SI_FROM_PTR_RCX mov si, word ptr [rcx]
#define MOV_SI_FROM_PTR_RDX mov si, word ptr [rdx]
#define MOV_SI_FROM_PTR_RDI mov si, word ptr [rdi]
#define MOV_SI_FROM_PTR_RSI mov si, word ptr [rsi]
#define MOV_SI_FROM_PTR_RBP mov si, word ptr [rbp]
#define MOV_SI_FROM_PTR_RSP mov si, word ptr [rsp]
#define MOV_SI_FROM_PTR_R8 mov si, word ptr [r8]
#define MOV_SI_FROM_PTR_R9 mov si, word ptr [r9]
#define MOV_SI_FROM_PTR_R10 mov si, word ptr [r10]
#define MOV_SI_FROM_PTR_R11 mov si, word ptr [r11]
#define MOV_SI_FROM_PTR_R12 mov si, word ptr [r12]
#define MOV_SI_FROM_PTR_R13 mov si, word ptr [r13]
#define MOV_SI_FROM_PTR_R14 mov si, word ptr [r14]
#define MOV_SI_FROM_PTR_R15 mov si, word ptr [r15]
#define MOV_SI_FROM_PTR_EAX mov si, word ptr [eax]
#define MOV_SI_FROM_PTR_EBX mov si, word ptr [ebx]
#define MOV_SI_FROM_PTR_ECX mov si, word ptr [ecx]
#define MOV_SI_FROM_PTR_EDX mov si, word ptr [edx]
#define MOV_SI_FROM_PTR_EDI mov si, word ptr [edi]
#define MOV_SI_FROM_PTR_ESI mov si, word ptr [esi]
#define MOV_SI_FROM_PTR_EBP mov si, word ptr [ebp]
#define MOV_SI_FROM_PTR_ESP mov si, word ptr [esp]

#define MOV_BP_FROM_PTR_RAX mov bp, word ptr [rax]
#define MOV_BP_FROM_PTR_RBX mov bp, word ptr [rbx]
#define MOV_BP_FROM_PTR_RCX mov bp, word ptr [rcx]
#define MOV_BP_FROM_PTR_RDX mov bp, word ptr [rdx]
#define MOV_BP_FROM_PTR_RDI mov bp, word ptr [rdi]
#define MOV_BP_FROM_PTR_RSI mov bp, word ptr [rsi]
#define MOV_BP_FROM_PTR_RBP mov bp, word ptr [rbp]
#define MOV_BP_FROM_PTR_RSP mov bp, word ptr [rsp]
#define MOV_BP_FROM_PTR_R8 mov bp, word ptr [r8]
#define MOV_BP_FROM_PTR_R9 mov bp, word ptr [r9]
#define MOV_BP_FROM_PTR_R10 mov bp, word ptr [r10]
#define MOV_BP_FROM_PTR_R11 mov bp, word ptr [r11]
#define MOV_BP_FROM_PTR_R12 mov bp, word ptr [r12]
#define MOV_BP_FROM_PTR_R13 mov bp, word ptr [r13]
#define MOV_BP_FROM_PTR_R14 mov bp, word ptr [r14]
#define MOV_BP_FROM_PTR_R15 mov bp, word ptr [r15]
#define MOV_BP_FROM_PTR_EAX mov bp, word ptr [eax]
#define MOV_BP_FROM_PTR_EBX mov bp, word ptr [ebx]
#define MOV_BP_FROM_PTR_ECX mov bp, word ptr [ecx]
#define MOV_BP_FROM_PTR_EDX mov bp, word ptr [edx]
#define MOV_BP_FROM_PTR_EDI mov bp, word ptr [edi]
#define MOV_BP_FROM_PTR_ESI mov bp, word ptr [esi]
#define MOV_BP_FROM_PTR_EBP mov bp, word ptr [ebp]
#define MOV_BP_FROM_PTR_ESP mov bp, word ptr [esp]

#define MOV_SP_FROM_PTR_RAX mov sp, word ptr [rax]
#define MOV_SP_FROM_PTR_RBX mov sp, word ptr [rbx]
#define MOV_SP_FROM_PTR_RCX mov sp, word ptr [rcx]
#define MOV_SP_FROM_PTR_RDX mov sp, word ptr [rdx]
#define MOV_SP_FROM_PTR_RDI mov sp, word ptr [rdi]
#define MOV_SP_FROM_PTR_RSI mov sp, word ptr [rsi]
#define MOV_SP_FROM_PTR_RBP mov sp, word ptr [rbp]
#define MOV_SP_FROM_PTR_RSP mov sp, word ptr [rsp]
#define MOV_SP_FROM_PTR_R8 mov sp, word ptr [r8]
#define MOV_SP_FROM_PTR_R9 mov sp, word ptr [r9]
#define MOV_SP_FROM_PTR_R10 mov sp, word ptr [r10]
#define MOV_SP_FROM_PTR_R11 mov sp, word ptr [r11]
#define MOV_SP_FROM_PTR_R12 mov sp, word ptr [r12]
#define MOV_SP_FROM_PTR_R13 mov sp, word ptr [r13]
#define MOV_SP_FROM_PTR_R14 mov sp, word ptr [r14]
#define MOV_SP_FROM_PTR_R15 mov sp, word ptr [r15]
#define MOV_SP_FROM_PTR_EAX mov sp, word ptr [eax]
#define MOV_SP_FROM_PTR_EBX mov sp, word ptr [ebx]
#define MOV_SP_FROM_PTR_ECX mov sp, word ptr [ecx]
#define MOV_SP_FROM_PTR_EDX mov sp, word ptr [edx]
#define MOV_SP_FROM_PTR_EDI mov sp, word ptr [edi]
#define MOV_SP_FROM_PTR_ESI mov sp, word ptr [esi]
#define MOV_SP_FROM_PTR_EBP mov sp, word ptr [ebp]
#define MOV_SP_FROM_PTR_ESP mov sp, word ptr [esp]

#define MOV_R8W_FROM_PTR_RAX mov r8w, word ptr [rax]
#define MOV_R8W_FROM_PTR_RBX mov r8w, word ptr [rbx]
#define MOV_R8W_FROM_PTR_RCX mov r8w, word ptr [rcx]
#define MOV_R8W_FROM_PTR_RDX mov r8w, word ptr [rdx]
#define MOV_R8W_FROM_PTR_RDI mov r8w, word ptr [rdi]
#define MOV_R8W_FROM_PTR_RSI mov r8w, word ptr [rsi]
#define MOV_R8W_FROM_PTR_RBP mov r8w, word ptr [rbp]
#define MOV_R8W_FROM_PTR_RSP mov r8w, word ptr [rsp]
#define MOV_R8W_FROM_PTR_R8 mov r8w, word ptr [r8]
#define MOV_R8W_FROM_PTR_R9 mov r8w, word ptr [r9]
#define MOV_R8W_FROM_PTR_R10 mov r8w, word ptr [r10]
#define MOV_R8W_FROM_PTR_R11 mov r8w, word ptr [r11]
#define MOV_R8W_FROM_PTR_R12 mov r8w, word ptr [r12]
#define MOV_R8W_FROM_PTR_R13 mov r8w, word ptr [r13]
#define MOV_R8W_FROM_PTR_R14 mov r8w, word ptr [r14]
#define MOV_R8W_FROM_PTR_R15 mov r8w, word ptr [r15]
#define MOV_R8W_FROM_PTR_EAX mov r8w, word ptr [eax]
#define MOV_R8W_FROM_PTR_EBX mov r8w, word ptr [ebx]
#define MOV_R8W_FROM_PTR_ECX mov r8w, word ptr [ecx]
#define MOV_R8W_FROM_PTR_EDX mov r8w, word ptr [edx]
#define MOV_R8W_FROM_PTR_EDI mov r8w, word ptr [edi]
#define MOV_R8W_FROM_PTR_ESI mov r8w, word ptr [esi]
#define MOV_R8W_FROM_PTR_EBP mov r8w, word ptr [ebp]
#define MOV_R8W_FROM_PTR_ESP mov r8w, word ptr [esp]

#define MOV_R9W_FROM_PTR_RAX mov r9w, word ptr [rax]
#define MOV_R9W_FROM_PTR_RBX mov r9w, word ptr [rbx]
#define MOV_R9W_FROM_PTR_RCX mov r9w, word ptr [rcx]
#define MOV_R9W_FROM_PTR_RDX mov r9w, word ptr [rdx]
#define MOV_R9W_FROM_PTR_RDI mov r9w, word ptr [rdi]
#define MOV_R9W_FROM_PTR_RSI mov r9w, word ptr [rsi]
#define MOV_R9W_FROM_PTR_RBP mov r9w, word ptr [rbp]
#define MOV_R9W_FROM_PTR_RSP mov r9w, word ptr [rsp]
#define MOV_R9W_FROM_PTR_R8 mov r9w, word ptr [r8]
#define MOV_R9W_FROM_PTR_R9 mov r9w, word ptr [r9]
#define MOV_R9W_FROM_PTR_R10 mov r9w, word ptr [r10]
#define MOV_R9W_FROM_PTR_R11 mov r9w, word ptr [r11]
#define MOV_R9W_FROM_PTR_R12 mov r9w, word ptr [r12]
#define MOV_R9W_FROM_PTR_R13 mov r9w, word ptr [r13]
#define MOV_R9W_FROM_PTR_R14 mov r9w, word ptr [r14]
#define MOV_R9W_FROM_PTR_R15 mov r9w, word ptr [r15]
#define MOV_R9W_FROM_PTR_EAX mov r9w, word ptr [eax]
#define MOV_R9W_FROM_PTR_EBX mov r9w, word ptr [ebx]
#define MOV_R9W_FROM_PTR_ECX mov r9w, word ptr [ecx]
#define MOV_R9W_FROM_PTR_EDX mov r9w, word ptr [edx]
#define MOV_R9W_FROM_PTR_EDI mov r9w, word ptr [edi]
#define MOV_R9W_FROM_PTR_ESI mov r9w, word ptr [esi]
#define MOV_R9W_FROM_PTR_EBP mov r9w, word ptr [ebp]
#define MOV_R9W_FROM_PTR_ESP mov r9w, word ptr [esp]

#define MOV_R10W_FROM_PTR_RAX mov r10w, word ptr [rax]
#define MOV_R10W_FROM_PTR_RBX mov r10w, word ptr [rbx]
#define MOV_R10W_FROM_PTR_RCX mov r10w, word ptr [rcx]
#define MOV_R10W_FROM_PTR_RDX mov r10w, word ptr [rdx]
#define MOV_R10W_FROM_PTR_RDI mov r10w, word ptr [rdi]
#define MOV_R10W_FROM_PTR_RSI mov r10w, word ptr [rsi]
#define MOV_R10W_FROM_PTR_RBP mov r10w, word ptr [rbp]
#define MOV_R10W_FROM_PTR_RSP mov r10w, word ptr [rsp]
#define MOV_R10W_FROM_PTR_R8 mov r10w, word ptr [r8]
#define MOV_R10W_FROM_PTR_R9 mov r10w, word ptr [r9]
#define MOV_R10W_FROM_PTR_R10 mov r10w, word ptr [r10]
#define MOV_R10W_FROM_PTR_R11 mov r10w, word ptr [r11]
#define MOV_R10W_FROM_PTR_R12 mov r10w, word ptr [r12]
#define MOV_R10W_FROM_PTR_R13 mov r10w, word ptr [r13]
#define MOV_R10W_FROM_PTR_R14 mov r10w, word ptr [r14]
#define MOV_R10W_FROM_PTR_R15 mov r10w, word ptr [r15]
#define MOV_R10W_FROM_PTR_EAX mov r10w, word ptr [eax]
#define MOV_R10W_FROM_PTR_EBX mov r10w, word ptr [ebx]
#define MOV_R10W_FROM_PTR_ECX mov r10w, word ptr [ecx]
#define MOV_R10W_FROM_PTR_EDX mov r10w, word ptr [edx]
#define MOV_R10W_FROM_PTR_EDI mov r10w, word ptr [edi]
#define MOV_R10W_FROM_PTR_ESI mov r10w, word ptr [esi]
#define MOV_R10W_FROM_PTR_EBP mov r10w, word ptr [ebp]
#define MOV_R10W_FROM_PTR_ESP mov r10w, word ptr [esp]

#define MOV_R11W_FROM_PTR_RAX mov r11w, word ptr [rax]
#define MOV_R11W_FROM_PTR_RBX mov r11w, word ptr [rbx]
#define MOV_R11W_FROM_PTR_RCX mov r11w, word ptr [rcx]
#define MOV_R11W_FROM_PTR_RDX mov r11w, word ptr [rdx]
#define MOV_R11W_FROM_PTR_RDI mov r11w, word ptr [rdi]
#define MOV_R11W_FROM_PTR_RSI mov r11w, word ptr [rsi]
#define MOV_R11W_FROM_PTR_RBP mov r11w, word ptr [rbp]
#define MOV_R11W_FROM_PTR_RSP mov r11w, word ptr [rsp]
#define MOV_R11W_FROM_PTR_R8 mov r11w, word ptr [r8]
#define MOV_R11W_FROM_PTR_R9 mov r11w, word ptr [r9]
#define MOV_R11W_FROM_PTR_R10 mov r11w, word ptr [r10]
#define MOV_R11W_FROM_PTR_R11 mov r11w, word ptr [r11]
#define MOV_R11W_FROM_PTR_R12 mov r11w, word ptr [r12]
#define MOV_R11W_FROM_PTR_R13 mov r11w, word ptr [r13]
#define MOV_R11W_FROM_PTR_R14 mov r11w, word ptr [r14]
#define MOV_R11W_FROM_PTR_R15 mov r11w, word ptr [r15]
#define MOV_R11W_FROM_PTR_EAX mov r11w, word ptr [eax]
#define MOV_R11W_FROM_PTR_EBX mov r11w, word ptr [ebx]
#define MOV_R11W_FROM_PTR_ECX mov r11w, word ptr [ecx]
#define MOV_R11W_FROM_PTR_EDX mov r11w, word ptr [edx]
#define MOV_R11W_FROM_PTR_EDI mov r11w, word ptr [edi]
#define MOV_R11W_FROM_PTR_ESI mov r11w, word ptr [esi]
#define MOV_R11W_FROM_PTR_EBP mov r11w, word ptr [ebp]
#define MOV_R11W_FROM_PTR_ESP mov r11w, word ptr [esp]

#define MOV_R12W_FROM_PTR_RAX mov r12w, word ptr [rax]
#define MOV_R12W_FROM_PTR_RBX mov r12w, word ptr [rbx]
#define MOV_R12W_FROM_PTR_RCX mov r12w, word ptr [rcx]
#define MOV_R12W_FROM_PTR_RDX mov r12w, word ptr [rdx]
#define MOV_R12W_FROM_PTR_RDI mov r12w, word ptr [rdi]
#define MOV_R12W_FROM_PTR_RSI mov r12w, word ptr [rsi]
#define MOV_R12W_FROM_PTR_RBP mov r12w, word ptr [rbp]
#define MOV_R12W_FROM_PTR_RSP mov r12w, word ptr [rsp]
#define MOV_R12W_FROM_PTR_R8 mov r12w, word ptr [r8]
#define MOV_R12W_FROM_PTR_R9 mov r12w, word ptr [r9]
#define MOV_R12W_FROM_PTR_R10 mov r12w, word ptr [r10]
#define MOV_R12W_FROM_PTR_R11 mov r12w, word ptr [r11]
#define MOV_R12W_FROM_PTR_R12 mov r12w, word ptr [r12]
#define MOV_R12W_FROM_PTR_R13 mov r12w, word ptr [r13]
#define MOV_R12W_FROM_PTR_R14 mov r12w, word ptr [r14]
#define MOV_R12W_FROM_PTR_R15 mov r12w, word ptr [r15]
#define MOV_R12W_FROM_PTR_EAX mov r12w, word ptr [eax]
#define MOV_R12W_FROM_PTR_EBX mov r12w, word ptr [ebx]
#define MOV_R12W_FROM_PTR_ECX mov r12w, word ptr [ecx]
#define MOV_R12W_FROM_PTR_EDX mov r12w, word ptr [edx]
#define MOV_R12W_FROM_PTR_EDI mov r12w, word ptr [edi]
#define MOV_R12W_FROM_PTR_ESI mov r12w, word ptr [esi]
#define MOV_R12W_FROM_PTR_EBP mov r12w, word ptr [ebp]
#define MOV_R12W_FROM_PTR_ESP mov r12w, word ptr [esp]

#define MOV_R13W_FROM_PTR_RAX mov r13w, word ptr [rax]
#define MOV_R13W_FROM_PTR_RBX mov r13w, word ptr [rbx]
#define MOV_R13W_FROM_PTR_RCX mov r13w, word ptr [rcx]
#define MOV_R13W_FROM_PTR_RDX mov r13w, word ptr [rdx]
#define MOV_R13W_FROM_PTR_RDI mov r13w, word ptr [rdi]
#define MOV_R13W_FROM_PTR_RSI mov r13w, word ptr [rsi]
#define MOV_R13W_FROM_PTR_RBP mov r13w, word ptr [rbp]
#define MOV_R13W_FROM_PTR_RSP mov r13w, word ptr [rsp]
#define MOV_R13W_FROM_PTR_R8 mov r13w, word ptr [r8]
#define MOV_R13W_FROM_PTR_R9 mov r13w, word ptr [r9]
#define MOV_R13W_FROM_PTR_R10 mov r13w, word ptr [r10]
#define MOV_R13W_FROM_PTR_R11 mov r13w, word ptr [r11]
#define MOV_R13W_FROM_PTR_R12 mov r13w, word ptr [r12]
#define MOV_R13W_FROM_PTR_R13 mov r13w, word ptr [r13]
#define MOV_R13W_FROM_PTR_R14 mov r13w, word ptr [r14]
#define MOV_R13W_FROM_PTR_R15 mov r13w, word ptr [r15]
#define MOV_R13W_FROM_PTR_EAX mov r13w, word ptr [eax]
#define MOV_R13W_FROM_PTR_EBX mov r13w, word ptr [ebx]
#define MOV_R13W_FROM_PTR_ECX mov r13w, word ptr [ecx]
#define MOV_R13W_FROM_PTR_EDX mov r13w, word ptr [edx]
#define MOV_R13W_FROM_PTR_EDI mov r13w, word ptr [edi]
#define MOV_R13W_FROM_PTR_ESI mov r13w, word ptr [esi]
#define MOV_R13W_FROM_PTR_EBP mov r13w, word ptr [ebp]
#define MOV_R13W_FROM_PTR_ESP mov r13w, word ptr [esp]

#define MOV_R14W_FROM_PTR_RAX mov r14w, word ptr [rax]
#define MOV_R14W_FROM_PTR_RBX mov r14w, word ptr [rbx]
#define MOV_R14W_FROM_PTR_RCX mov r14w, word ptr [rcx]
#define MOV_R14W_FROM_PTR_RDX mov r14w, word ptr [rdx]
#define MOV_R14W_FROM_PTR_RDI mov r14w, word ptr [rdi]
#define MOV_R14W_FROM_PTR_RSI mov r14w, word ptr [rsi]
#define MOV_R14W_FROM_PTR_RBP mov r14w, word ptr [rbp]
#define MOV_R14W_FROM_PTR_RSP mov r14w, word ptr [rsp]
#define MOV_R14W_FROM_PTR_R8 mov r14w, word ptr [r8]
#define MOV_R14W_FROM_PTR_R9 mov r14w, word ptr [r9]
#define MOV_R14W_FROM_PTR_R10 mov r14w, word ptr [r10]
#define MOV_R14W_FROM_PTR_R11 mov r14w, word ptr [r11]
#define MOV_R14W_FROM_PTR_R12 mov r14w, word ptr [r12]
#define MOV_R14W_FROM_PTR_R13 mov r14w, word ptr [r13]
#define MOV_R14W_FROM_PTR_R14 mov r14w, word ptr [r14]
#define MOV_R14W_FROM_PTR_R15 mov r14w, word ptr [r15]
#define MOV_R14W_FROM_PTR_EAX mov r14w, word ptr [eax]
#define MOV_R14W_FROM_PTR_EBX mov r14w, word ptr [ebx]
#define MOV_R14W_FROM_PTR_ECX mov r14w, word ptr [ecx]
#define MOV_R14W_FROM_PTR_EDX mov r14w, word ptr [edx]
#define MOV_R14W_FROM_PTR_EDI mov r14w, word ptr [edi]
#define MOV_R14W_FROM_PTR_ESI mov r14w, word ptr [esi]
#define MOV_R14W_FROM_PTR_EBP mov r14w, word ptr [ebp]
#define MOV_R14W_FROM_PTR_ESP mov r14w, word ptr [esp]

#define MOV_R15W_FROM_PTR_RAX mov r15w, word ptr [rax]
#define MOV_R15W_FROM_PTR_RBX mov r15w, word ptr [rbx]
#define MOV_R15W_FROM_PTR_RCX mov r15w, word ptr [rcx]
#define MOV_R15W_FROM_PTR_RDX mov r15w, word ptr [rdx]
#define MOV_R15W_FROM_PTR_RDI mov r15w, word ptr [rdi]
#define MOV_R15W_FROM_PTR_RSI mov r15w, word ptr [rsi]
#define MOV_R15W_FROM_PTR_RBP mov r15w, word ptr [rbp]
#define MOV_R15W_FROM_PTR_RSP mov r15w, word ptr [rsp]
#define MOV_R15W_FROM_PTR_R8 mov r15w, word ptr [r8]
#define MOV_R15W_FROM_PTR_R9 mov r15w, word ptr [r9]
#define MOV_R15W_FROM_PTR_R10 mov r15w, word ptr [r10]
#define MOV_R15W_FROM_PTR_R11 mov r15w, word ptr [r11]
#define MOV_R15W_FROM_PTR_R12 mov r15w, word ptr [r12]
#define MOV_R15W_FROM_PTR_R13 mov r15w, word ptr [r13]
#define MOV_R15W_FROM_PTR_R14 mov r15w, word ptr [r14]
#define MOV_R15W_FROM_PTR_R15 mov r15w, word ptr [r15]
#define MOV_R15W_FROM_PTR_EAX mov r15w, word ptr [eax]
#define MOV_R15W_FROM_PTR_EBX mov r15w, word ptr [ebx]
#define MOV_R15W_FROM_PTR_ECX mov r15w, word ptr [ecx]
#define MOV_R15W_FROM_PTR_EDX mov r15w, word ptr [edx]
#define MOV_R15W_FROM_PTR_EDI mov r15w, word ptr [edi]
#define MOV_R15W_FROM_PTR_ESI mov r15w, word ptr [esi]
#define MOV_R15W_FROM_PTR_EBP mov r15w, word ptr [ebp]
#define MOV_R15W_FROM_PTR_ESP mov r15w, word ptr [esp]

#define MOV_AX_TO_PTR_RAX mov word ptr [rax], ax
#define MOV_AX_TO_PTR_RBX mov word ptr [rbx], ax
#define MOV_AX_TO_PTR_RCX mov word ptr [rcx], ax
#define MOV_AX_TO_PTR_RDX mov word ptr [rdx], ax
#define MOV_AX_TO_PTR_RDI mov word ptr [rdi], ax
#define MOV_AX_TO_PTR_RSI mov word ptr [rsi], ax
#define MOV_AX_TO_PTR_RBP mov word ptr [rbp], ax
#define MOV_AX_TO_PTR_RSP mov word ptr [rsp], ax
#define MOV_AX_TO_PTR_R8 mov word ptr [r8], ax
#define MOV_AX_TO_PTR_R9 mov word ptr [r9], ax
#define MOV_AX_TO_PTR_R10 mov word ptr [r10], ax
#define MOV_AX_TO_PTR_R11 mov word ptr [r11], ax
#define MOV_AX_TO_PTR_R12 mov word ptr [r12], ax
#define MOV_AX_TO_PTR_R13 mov word ptr [r13], ax
#define MOV_AX_TO_PTR_R14 mov word ptr [r14], ax
#define MOV_AX_TO_PTR_R15 mov word ptr [r15], ax
#define MOV_AX_TO_PTR_EAX mov word ptr [eax], ax
#define MOV_AX_TO_PTR_EBX mov word ptr [ebx], ax
#define MOV_AX_TO_PTR_ECX mov word ptr [ecx], ax
#define MOV_AX_TO_PTR_EDX mov word ptr [edx], ax
#define MOV_AX_TO_PTR_EDI mov word ptr [edi], ax
#define MOV_AX_TO_PTR_ESI mov word ptr [esi], ax
#define MOV_AX_TO_PTR_EBP mov word ptr [ebp], ax
#define MOV_AX_TO_PTR_ESP mov word ptr [esp], ax

#define MOV_BX_TO_PTR_RAX mov word ptr [rax], bx
#define MOV_BX_TO_PTR_RBX mov word ptr [rbx], bx
#define MOV_BX_TO_PTR_RCX mov word ptr [rcx], bx
#define MOV_BX_TO_PTR_RDX mov word ptr [rdx], bx
#define MOV_BX_TO_PTR_RDI mov word ptr [rdi], bx
#define MOV_BX_TO_PTR_RSI mov word ptr [rsi], bx
#define MOV_BX_TO_PTR_RBP mov word ptr [rbp], bx
#define MOV_BX_TO_PTR_RSP mov word ptr [rsp], bx
#define MOV_BX_TO_PTR_R8 mov word ptr [r8], bx
#define MOV_BX_TO_PTR_R9 mov word ptr [r9], bx
#define MOV_BX_TO_PTR_R10 mov word ptr [r10], bx
#define MOV_BX_TO_PTR_R11 mov word ptr [r11], bx
#define MOV_BX_TO_PTR_R12 mov word ptr [r12], bx
#define MOV_BX_TO_PTR_R13 mov word ptr [r13], bx
#define MOV_BX_TO_PTR_R14 mov word ptr [r14], bx
#define MOV_BX_TO_PTR_R15 mov word ptr [r15], bx
#define MOV_BX_TO_PTR_EAX mov word ptr [eax], bx
#define MOV_BX_TO_PTR_EBX mov word ptr [ebx], bx
#define MOV_BX_TO_PTR_ECX mov word ptr [ecx], bx
#define MOV_BX_TO_PTR_EDX mov word ptr [edx], bx
#define MOV_BX_TO_PTR_EDI mov word ptr [edi], bx
#define MOV_BX_TO_PTR_ESI mov word ptr [esi], bx
#define MOV_BX_TO_PTR_EBP mov word ptr [ebp], bx
#define MOV_BX_TO_PTR_ESP mov word ptr [esp], bx

#define MOV_CX_TO_PTR_RAX mov word ptr [rax], cx
#define MOV_CX_TO_PTR_RBX mov word ptr [rbx], cx
#define MOV_CX_TO_PTR_RCX mov word ptr [rcx], cx
#define MOV_CX_TO_PTR_RDX mov word ptr [rdx], cx
#define MOV_CX_TO_PTR_RDI mov word ptr [rdi], cx
#define MOV_CX_TO_PTR_RSI mov word ptr [rsi], cx
#define MOV_CX_TO_PTR_RBP mov word ptr [rbp], cx
#define MOV_CX_TO_PTR_RSP mov word ptr [rsp], cx
#define MOV_CX_TO_PTR_R8 mov word ptr [r8], cx
#define MOV_CX_TO_PTR_R9 mov word ptr [r9], cx
#define MOV_CX_TO_PTR_R10 mov word ptr [r10], cx
#define MOV_CX_TO_PTR_R11 mov word ptr [r11], cx
#define MOV_CX_TO_PTR_R12 mov word ptr [r12], cx
#define MOV_CX_TO_PTR_R13 mov word ptr [r13], cx
#define MOV_CX_TO_PTR_R14 mov word ptr [r14], cx
#define MOV_CX_TO_PTR_R15 mov word ptr [r15], cx
#define MOV_CX_TO_PTR_EAX mov word ptr [eax], cx
#define MOV_CX_TO_PTR_EBX mov word ptr [ebx], cx
#define MOV_CX_TO_PTR_ECX mov word ptr [ecx], cx
#define MOV_CX_TO_PTR_EDX mov word ptr [edx], cx
#define MOV_CX_TO_PTR_EDI mov word ptr [edi], cx
#define MOV_CX_TO_PTR_ESI mov word ptr [esi], cx
#define MOV_CX_TO_PTR_EBP mov word ptr [ebp], cx
#define MOV_CX_TO_PTR_ESP mov word ptr [esp], cx

#define MOV_DX_TO_PTR_RAX mov word ptr [rax], dx
#define MOV_DX_TO_PTR_RBX mov word ptr [rbx], dx
#define MOV_DX_TO_PTR_RCX mov word ptr [rcx], dx
#define MOV_DX_TO_PTR_RDX mov word ptr [rdx], dx
#define MOV_DX_TO_PTR_RDI mov word ptr [rdi], dx
#define MOV_DX_TO_PTR_RSI mov word ptr [rsi], dx
#define MOV_DX_TO_PTR_RBP mov word ptr [rbp], dx
#define MOV_DX_TO_PTR_RSP mov word ptr [rsp], dx
#define MOV_DX_TO_PTR_R8 mov word ptr [r8], dx
#define MOV_DX_TO_PTR_R9 mov word ptr [r9], dx
#define MOV_DX_TO_PTR_R10 mov word ptr [r10], dx
#define MOV_DX_TO_PTR_R11 mov word ptr [r11], dx
#define MOV_DX_TO_PTR_R12 mov word ptr [r12], dx
#define MOV_DX_TO_PTR_R13 mov word ptr [r13], dx
#define MOV_DX_TO_PTR_R14 mov word ptr [r14], dx
#define MOV_DX_TO_PTR_R15 mov word ptr [r15], dx
#define MOV_DX_TO_PTR_EAX mov word ptr [eax], dx
#define MOV_DX_TO_PTR_EBX mov word ptr [ebx], dx
#define MOV_DX_TO_PTR_ECX mov word ptr [ecx], dx
#define MOV_DX_TO_PTR_EDX mov word ptr [edx], dx
#define MOV_DX_TO_PTR_EDI mov word ptr [edi], dx
#define MOV_DX_TO_PTR_ESI mov word ptr [esi], dx
#define MOV_DX_TO_PTR_EBP mov word ptr [ebp], dx
#define MOV_DX_TO_PTR_ESP mov word ptr [esp], dx

#define MOV_DI_TO_PTR_RAX mov word ptr [rax], di
#define MOV_DI_TO_PTR_RBX mov word ptr [rbx], di
#define MOV_DI_TO_PTR_RCX mov word ptr [rcx], di
#define MOV_DI_TO_PTR_RDX mov word ptr [rdx], di
#define MOV_DI_TO_PTR_RDI mov word ptr [rdi], di
#define MOV_DI_TO_PTR_RSI mov word ptr [rsi], di
#define MOV_DI_TO_PTR_RBP mov word ptr [rbp], di
#define MOV_DI_TO_PTR_RSP mov word ptr [rsp], di
#define MOV_DI_TO_PTR_R8 mov word ptr [r8], di
#define MOV_DI_TO_PTR_R9 mov word ptr [r9], di
#define MOV_DI_TO_PTR_R10 mov word ptr [r10], di
#define MOV_DI_TO_PTR_R11 mov word ptr [r11], di
#define MOV_DI_TO_PTR_R12 mov word ptr [r12], di
#define MOV_DI_TO_PTR_R13 mov word ptr [r13], di
#define MOV_DI_TO_PTR_R14 mov word ptr [r14], di
#define MOV_DI_TO_PTR_R15 mov word ptr [r15], di
#define MOV_DI_TO_PTR_EAX mov word ptr [eax], di
#define MOV_DI_TO_PTR_EBX mov word ptr [ebx], di
#define MOV_DI_TO_PTR_ECX mov word ptr [ecx], di
#define MOV_DI_TO_PTR_EDX mov word ptr [edx], di
#define MOV_DI_TO_PTR_EDI mov word ptr [edi], di
#define MOV_DI_TO_PTR_ESI mov word ptr [esi], di
#define MOV_DI_TO_PTR_EBP mov word ptr [ebp], di
#define MOV_DI_TO_PTR_ESP mov word ptr [esp], di

#define MOV_SI_TO_PTR_RAX mov word ptr [rax], si
#define MOV_SI_TO_PTR_RBX mov word ptr [rbx], si
#define MOV_SI_TO_PTR_RCX mov word ptr [rcx], si
#define MOV_SI_TO_PTR_RDX mov word ptr [rdx], si
#define MOV_SI_TO_PTR_RDI mov word ptr [rdi], si
#define MOV_SI_TO_PTR_RSI mov word ptr [rsi], si
#define MOV_SI_TO_PTR_RBP mov word ptr [rbp], si
#define MOV_SI_TO_PTR_RSP mov word ptr [rsp], si
#define MOV_SI_TO_PTR_R8 mov word ptr [r8], si
#define MOV_SI_TO_PTR_R9 mov word ptr [r9], si
#define MOV_SI_TO_PTR_R10 mov word ptr [r10], si
#define MOV_SI_TO_PTR_R11 mov word ptr [r11], si
#define MOV_SI_TO_PTR_R12 mov word ptr [r12], si
#define MOV_SI_TO_PTR_R13 mov word ptr [r13], si
#define MOV_SI_TO_PTR_R14 mov word ptr [r14], si
#define MOV_SI_TO_PTR_R15 mov word ptr [r15], si
#define MOV_SI_TO_PTR_EAX mov word ptr [eax], si
#define MOV_SI_TO_PTR_EBX mov word ptr [ebx], si
#define MOV_SI_TO_PTR_ECX mov word ptr [ecx], si
#define MOV_SI_TO_PTR_EDX mov word ptr [edx], si
#define MOV_SI_TO_PTR_EDI mov word ptr [edi], si
#define MOV_SI_TO_PTR_ESI mov word ptr [esi], si
#define MOV_SI_TO_PTR_EBP mov word ptr [ebp], si
#define MOV_SI_TO_PTR_ESP mov word ptr [esp], si

#define MOV_BP_TO_PTR_RAX mov word ptr [rax], bp
#define MOV_BP_TO_PTR_RBX mov word ptr [rbx], bp
#define MOV_BP_TO_PTR_RCX mov word ptr [rcx], bp
#define MOV_BP_TO_PTR_RDX mov word ptr [rdx], bp
#define MOV_BP_TO_PTR_RDI mov word ptr [rdi], bp
#define MOV_BP_TO_PTR_RSI mov word ptr [rsi], bp
#define MOV_BP_TO_PTR_RBP mov word ptr [rbp], bp
#define MOV_BP_TO_PTR_RSP mov word ptr [rsp], bp
#define MOV_BP_TO_PTR_R8 mov word ptr [r8], bp
#define MOV_BP_TO_PTR_R9 mov word ptr [r9], bp
#define MOV_BP_TO_PTR_R10 mov word ptr [r10], bp
#define MOV_BP_TO_PTR_R11 mov word ptr [r11], bp
#define MOV_BP_TO_PTR_R12 mov word ptr [r12], bp
#define MOV_BP_TO_PTR_R13 mov word ptr [r13], bp
#define MOV_BP_TO_PTR_R14 mov word ptr [r14], bp
#define MOV_BP_TO_PTR_R15 mov word ptr [r15], bp
#define MOV_BP_TO_PTR_EAX mov word ptr [eax], bp
#define MOV_BP_TO_PTR_EBX mov word ptr [ebx], bp
#define MOV_BP_TO_PTR_ECX mov word ptr [ecx], bp
#define MOV_BP_TO_PTR_EDX mov word ptr [edx], bp
#define MOV_BP_TO_PTR_EDI mov word ptr [edi], bp
#define MOV_BP_TO_PTR_ESI mov word ptr [esi], bp
#define MOV_BP_TO_PTR_EBP mov word ptr [ebp], bp
#define MOV_BP_TO_PTR_ESP mov word ptr [esp], bp

#define MOV_SP_TO_PTR_RAX mov word ptr [rax], sp
#define MOV_SP_TO_PTR_RBX mov word ptr [rbx], sp
#define MOV_SP_TO_PTR_RCX mov word ptr [rcx], sp
#define MOV_SP_TO_PTR_RDX mov word ptr [rdx], sp
#define MOV_SP_TO_PTR_RDI mov word ptr [rdi], sp
#define MOV_SP_TO_PTR_RSI mov word ptr [rsi], sp
#define MOV_SP_TO_PTR_RBP mov word ptr [rbp], sp
#define MOV_SP_TO_PTR_RSP mov word ptr [rsp], sp
#define MOV_SP_TO_PTR_R8 mov word ptr [r8], sp
#define MOV_SP_TO_PTR_R9 mov word ptr [r9], sp
#define MOV_SP_TO_PTR_R10 mov word ptr [r10], sp
#define MOV_SP_TO_PTR_R11 mov word ptr [r11], sp
#define MOV_SP_TO_PTR_R12 mov word ptr [r12], sp
#define MOV_SP_TO_PTR_R13 mov word ptr [r13], sp
#define MOV_SP_TO_PTR_R14 mov word ptr [r14], sp
#define MOV_SP_TO_PTR_R15 mov word ptr [r15], sp
#define MOV_SP_TO_PTR_EAX mov word ptr [eax], sp
#define MOV_SP_TO_PTR_EBX mov word ptr [ebx], sp
#define MOV_SP_TO_PTR_ECX mov word ptr [ecx], sp
#define MOV_SP_TO_PTR_EDX mov word ptr [edx], sp
#define MOV_SP_TO_PTR_EDI mov word ptr [edi], sp
#define MOV_SP_TO_PTR_ESI mov word ptr [esi], sp
#define MOV_SP_TO_PTR_EBP mov word ptr [ebp], sp
#define MOV_SP_TO_PTR_ESP mov word ptr [esp], sp

#define MOV_R8W_TO_PTR_RAX mov word ptr [rax], r8w
#define MOV_R8W_TO_PTR_RBX mov word ptr [rbx], r8w
#define MOV_R8W_TO_PTR_RCX mov word ptr [rcx], r8w
#define MOV_R8W_TO_PTR_RDX mov word ptr [rdx], r8w
#define MOV_R8W_TO_PTR_RDI mov word ptr [rdi], r8w
#define MOV_R8W_TO_PTR_RSI mov word ptr [rsi], r8w
#define MOV_R8W_TO_PTR_RBP mov word ptr [rbp], r8w
#define MOV_R8W_TO_PTR_RSP mov word ptr [rsp], r8w
#define MOV_R8W_TO_PTR_R8 mov word ptr [r8], r8w
#define MOV_R8W_TO_PTR_R9 mov word ptr [r9], r8w
#define MOV_R8W_TO_PTR_R10 mov word ptr [r10], r8w
#define MOV_R8W_TO_PTR_R11 mov word ptr [r11], r8w
#define MOV_R8W_TO_PTR_R12 mov word ptr [r12], r8w
#define MOV_R8W_TO_PTR_R13 mov word ptr [r13], r8w
#define MOV_R8W_TO_PTR_R14 mov word ptr [r14], r8w
#define MOV_R8W_TO_PTR_R15 mov word ptr [r15], r8w
#define MOV_R8W_TO_PTR_EAX mov word ptr [eax], r8w
#define MOV_R8W_TO_PTR_EBX mov word ptr [ebx], r8w
#define MOV_R8W_TO_PTR_ECX mov word ptr [ecx], r8w
#define MOV_R8W_TO_PTR_EDX mov word ptr [edx], r8w
#define MOV_R8W_TO_PTR_EDI mov word ptr [edi], r8w
#define MOV_R8W_TO_PTR_ESI mov word ptr [esi], r8w
#define MOV_R8W_TO_PTR_EBP mov word ptr [ebp], r8w
#define MOV_R8W_TO_PTR_ESP mov word ptr [esp], r8w

#define MOV_R9W_TO_PTR_RAX mov word ptr [rax], r9w
#define MOV_R9W_TO_PTR_RBX mov word ptr [rbx], r9w
#define MOV_R9W_TO_PTR_RCX mov word ptr [rcx], r9w
#define MOV_R9W_TO_PTR_RDX mov word ptr [rdx], r9w
#define MOV_R9W_TO_PTR_RDI mov word ptr [rdi], r9w
#define MOV_R9W_TO_PTR_RSI mov word ptr [rsi], r9w
#define MOV_R9W_TO_PTR_RBP mov word ptr [rbp], r9w
#define MOV_R9W_TO_PTR_RSP mov word ptr [rsp], r9w
#define MOV_R9W_TO_PTR_R8 mov word ptr [r8], r9w
#define MOV_R9W_TO_PTR_R9 mov word ptr [r9], r9w
#define MOV_R9W_TO_PTR_R10 mov word ptr [r10], r9w
#define MOV_R9W_TO_PTR_R11 mov word ptr [r11], r9w
#define MOV_R9W_TO_PTR_R12 mov word ptr [r12], r9w
#define MOV_R9W_TO_PTR_R13 mov word ptr [r13], r9w
#define MOV_R9W_TO_PTR_R14 mov word ptr [r14], r9w
#define MOV_R9W_TO_PTR_R15 mov word ptr [r15], r9w
#define MOV_R9W_TO_PTR_EAX mov word ptr [eax], r9w
#define MOV_R9W_TO_PTR_EBX mov word ptr [ebx], r9w
#define MOV_R9W_TO_PTR_ECX mov word ptr [ecx], r9w
#define MOV_R9W_TO_PTR_EDX mov word ptr [edx], r9w
#define MOV_R9W_TO_PTR_EDI mov word ptr [edi], r9w
#define MOV_R9W_TO_PTR_ESI mov word ptr [esi], r9w
#define MOV_R9W_TO_PTR_EBP mov word ptr [ebp], r9w
#define MOV_R9W_TO_PTR_ESP mov word ptr [esp], r9w

#define MOV_R10W_TO_PTR_RAX mov word ptr [rax], r10w
#define MOV_R10W_TO_PTR_RBX mov word ptr [rbx], r10w
#define MOV_R10W_TO_PTR_RCX mov word ptr [rcx], r10w
#define MOV_R10W_TO_PTR_RDX mov word ptr [rdx], r10w
#define MOV_R10W_TO_PTR_RDI mov word ptr [rdi], r10w
#define MOV_R10W_TO_PTR_RSI mov word ptr [rsi], r10w
#define MOV_R10W_TO_PTR_RBP mov word ptr [rbp], r10w
#define MOV_R10W_TO_PTR_RSP mov word ptr [rsp], r10w
#define MOV_R10W_TO_PTR_R8 mov word ptr [r8], r10w
#define MOV_R10W_TO_PTR_R9 mov word ptr [r9], r10w
#define MOV_R10W_TO_PTR_R10 mov word ptr [r10], r10w
#define MOV_R10W_TO_PTR_R11 mov word ptr [r11], r10w
#define MOV_R10W_TO_PTR_R12 mov word ptr [r12], r10w
#define MOV_R10W_TO_PTR_R13 mov word ptr [r13], r10w
#define MOV_R10W_TO_PTR_R14 mov word ptr [r14], r10w
#define MOV_R10W_TO_PTR_R15 mov word ptr [r15], r10w
#define MOV_R10W_TO_PTR_EAX mov word ptr [eax], r10w
#define MOV_R10W_TO_PTR_EBX mov word ptr [ebx], r10w
#define MOV_R10W_TO_PTR_ECX mov word ptr [ecx], r10w
#define MOV_R10W_TO_PTR_EDX mov word ptr [edx], r10w
#define MOV_R10W_TO_PTR_EDI mov word ptr [edi], r10w
#define MOV_R10W_TO_PTR_ESI mov word ptr [esi], r10w
#define MOV_R10W_TO_PTR_EBP mov word ptr [ebp], r10w
#define MOV_R10W_TO_PTR_ESP mov word ptr [esp], r10w

#define MOV_R11W_TO_PTR_RAX mov word ptr [rax], r11w
#define MOV_R11W_TO_PTR_RBX mov word ptr [rbx], r11w
#define MOV_R11W_TO_PTR_RCX mov word ptr [rcx], r11w
#define MOV_R11W_TO_PTR_RDX mov word ptr [rdx], r11w
#define MOV_R11W_TO_PTR_RDI mov word ptr [rdi], r11w
#define MOV_R11W_TO_PTR_RSI mov word ptr [rsi], r11w
#define MOV_R11W_TO_PTR_RBP mov word ptr [rbp], r11w
#define MOV_R11W_TO_PTR_RSP mov word ptr [rsp], r11w
#define MOV_R11W_TO_PTR_R8 mov word ptr [r8], r11w
#define MOV_R11W_TO_PTR_R9 mov word ptr [r9], r11w
#define MOV_R11W_TO_PTR_R10 mov word ptr [r10], r11w
#define MOV_R11W_TO_PTR_R11 mov word ptr [r11], r11w
#define MOV_R11W_TO_PTR_R12 mov word ptr [r12], r11w
#define MOV_R11W_TO_PTR_R13 mov word ptr [r13], r11w
#define MOV_R11W_TO_PTR_R14 mov word ptr [r14], r11w
#define MOV_R11W_TO_PTR_R15 mov word ptr [r15], r11w
#define MOV_R11W_TO_PTR_EAX mov word ptr [eax], r11w
#define MOV_R11W_TO_PTR_EBX mov word ptr [ebx], r11w
#define MOV_R11W_TO_PTR_ECX mov word ptr [ecx], r11w
#define MOV_R11W_TO_PTR_EDX mov word ptr [edx], r11w
#define MOV_R11W_TO_PTR_EDI mov word ptr [edi], r11w
#define MOV_R11W_TO_PTR_ESI mov word ptr [esi], r11w
#define MOV_R11W_TO_PTR_EBP mov word ptr [ebp], r11w
#define MOV_R11W_TO_PTR_ESP mov word ptr [esp], r11w

#define MOV_R12W_TO_PTR_RAX mov word ptr [rax], r12w
#define MOV_R12W_TO_PTR_RBX mov word ptr [rbx], r12w
#define MOV_R12W_TO_PTR_RCX mov word ptr [rcx], r12w
#define MOV_R12W_TO_PTR_RDX mov word ptr [rdx], r12w
#define MOV_R12W_TO_PTR_RDI mov word ptr [rdi], r12w
#define MOV_R12W_TO_PTR_RSI mov word ptr [rsi], r12w
#define MOV_R12W_TO_PTR_RBP mov word ptr [rbp], r12w
#define MOV_R12W_TO_PTR_RSP mov word ptr [rsp], r12w
#define MOV_R12W_TO_PTR_R8 mov word ptr [r8], r12w
#define MOV_R12W_TO_PTR_R9 mov word ptr [r9], r12w
#define MOV_R12W_TO_PTR_R10 mov word ptr [r10], r12w
#define MOV_R12W_TO_PTR_R11 mov word ptr [r11], r12w
#define MOV_R12W_TO_PTR_R12 mov word ptr [r12], r12w
#define MOV_R12W_TO_PTR_R13 mov word ptr [r13], r12w
#define MOV_R12W_TO_PTR_R14 mov word ptr [r14], r12w
#define MOV_R12W_TO_PTR_R15 mov word ptr [r15], r12w
#define MOV_R12W_TO_PTR_EAX mov word ptr [eax], r12w
#define MOV_R12W_TO_PTR_EBX mov word ptr [ebx], r12w
#define MOV_R12W_TO_PTR_ECX mov word ptr [ecx], r12w
#define MOV_R12W_TO_PTR_EDX mov word ptr [edx], r12w
#define MOV_R12W_TO_PTR_EDI mov word ptr [edi], r12w
#define MOV_R12W_TO_PTR_ESI mov word ptr [esi], r12w
#define MOV_R12W_TO_PTR_EBP mov word ptr [ebp], r12w
#define MOV_R12W_TO_PTR_ESP mov word ptr [esp], r12w

#define MOV_R13W_TO_PTR_RAX mov word ptr [rax], r13w
#define MOV_R13W_TO_PTR_RBX mov word ptr [rbx], r13w
#define MOV_R13W_TO_PTR_RCX mov word ptr [rcx], r13w
#define MOV_R13W_TO_PTR_RDX mov word ptr [rdx], r13w
#define MOV_R13W_TO_PTR_RDI mov word ptr [rdi], r13w
#define MOV_R13W_TO_PTR_RSI mov word ptr [rsi], r13w
#define MOV_R13W_TO_PTR_RBP mov word ptr [rbp], r13w
#define MOV_R13W_TO_PTR_RSP mov word ptr [rsp], r13w
#define MOV_R13W_TO_PTR_R8 mov word ptr [r8], r13w
#define MOV_R13W_TO_PTR_R9 mov word ptr [r9], r13w
#define MOV_R13W_TO_PTR_R10 mov word ptr [r10], r13w
#define MOV_R13W_TO_PTR_R11 mov word ptr [r11], r13w
#define MOV_R13W_TO_PTR_R12 mov word ptr [r12], r13w
#define MOV_R13W_TO_PTR_R13 mov word ptr [r13], r13w
#define MOV_R13W_TO_PTR_R14 mov word ptr [r14], r13w
#define MOV_R13W_TO_PTR_R15 mov word ptr [r15], r13w
#define MOV_R13W_TO_PTR_EAX mov word ptr [eax], r13w
#define MOV_R13W_TO_PTR_EBX mov word ptr [ebx], r13w
#define MOV_R13W_TO_PTR_ECX mov word ptr [ecx], r13w
#define MOV_R13W_TO_PTR_EDX mov word ptr [edx], r13w
#define MOV_R13W_TO_PTR_EDI mov word ptr [edi], r13w
#define MOV_R13W_TO_PTR_ESI mov word ptr [esi], r13w
#define MOV_R13W_TO_PTR_EBP mov word ptr [ebp], r13w
#define MOV_R13W_TO_PTR_ESP mov word ptr [esp], r13w

#define MOV_R14W_TO_PTR_RAX mov word ptr [rax], r14w
#define MOV_R14W_TO_PTR_RBX mov word ptr [rbx], r14w
#define MOV_R14W_TO_PTR_RCX mov word ptr [rcx], r14w
#define MOV_R14W_TO_PTR_RDX mov word ptr [rdx], r14w
#define MOV_R14W_TO_PTR_RDI mov word ptr [rdi], r14w
#define MOV_R14W_TO_PTR_RSI mov word ptr [rsi], r14w
#define MOV_R14W_TO_PTR_RBP mov word ptr [rbp], r14w
#define MOV_R14W_TO_PTR_RSP mov word ptr [rsp], r14w
#define MOV_R14W_TO_PTR_R8 mov word ptr [r8], r14w
#define MOV_R14W_TO_PTR_R9 mov word ptr [r9], r14w
#define MOV_R14W_TO_PTR_R10 mov word ptr [r10], r14w
#define MOV_R14W_TO_PTR_R11 mov word ptr [r11], r14w
#define MOV_R14W_TO_PTR_R12 mov word ptr [r12], r14w
#define MOV_R14W_TO_PTR_R13 mov word ptr [r13], r14w
#define MOV_R14W_TO_PTR_R14 mov word ptr [r14], r14w
#define MOV_R14W_TO_PTR_R15 mov word ptr [r15], r14w
#define MOV_R14W_TO_PTR_EAX mov word ptr [eax], r14w
#define MOV_R14W_TO_PTR_EBX mov word ptr [ebx], r14w
#define MOV_R14W_TO_PTR_ECX mov word ptr [ecx], r14w
#define MOV_R14W_TO_PTR_EDX mov word ptr [edx], r14w
#define MOV_R14W_TO_PTR_EDI mov word ptr [edi], r14w
#define MOV_R14W_TO_PTR_ESI mov word ptr [esi], r14w
#define MOV_R14W_TO_PTR_EBP mov word ptr [ebp], r14w
#define MOV_R14W_TO_PTR_ESP mov word ptr [esp], r14w

#define MOV_R15W_TO_PTR_RAX mov word ptr [rax], r15w
#define MOV_R15W_TO_PTR_RBX mov word ptr [rbx], r15w
#define MOV_R15W_TO_PTR_RCX mov word ptr [rcx], r15w
#define MOV_R15W_TO_PTR_RDX mov word ptr [rdx], r15w
#define MOV_R15W_TO_PTR_RDI mov word ptr [rdi], r15w
#define MOV_R15W_TO_PTR_RSI mov word ptr [rsi], r15w
#define MOV_R15W_TO_PTR_RBP mov word ptr [rbp], r15w
#define MOV_R15W_TO_PTR_RSP mov word ptr [rsp], r15w
#define MOV_R15W_TO_PTR_R8 mov word ptr [r8], r15w
#define MOV_R15W_TO_PTR_R9 mov word ptr [r9], r15w
#define MOV_R15W_TO_PTR_R10 mov word ptr [r10], r15w
#define MOV_R15W_TO_PTR_R11 mov word ptr [r11], r15w
#define MOV_R15W_TO_PTR_R12 mov word ptr [r12], r15w
#define MOV_R15W_TO_PTR_R13 mov word ptr [r13], r15w
#define MOV_R15W_TO_PTR_R14 mov word ptr [r14], r15w
#define MOV_R15W_TO_PTR_R15 mov word ptr [r15], r15w
#define MOV_R15W_TO_PTR_EAX mov word ptr [eax], r15w
#define MOV_R15W_TO_PTR_EBX mov word ptr [ebx], r15w
#define MOV_R15W_TO_PTR_ECX mov word ptr [ecx], r15w
#define MOV_R15W_TO_PTR_EDX mov word ptr [edx], r15w
#define MOV_R15W_TO_PTR_EDI mov word ptr [edi], r15w
#define MOV_R15W_TO_PTR_ESI mov word ptr [esi], r15w
#define MOV_R15W_TO_PTR_EBP mov word ptr [ebp], r15w
#define MOV_R15W_TO_PTR_ESP mov word ptr [esp], r15w

#define MOV_AX_FROM_PTR_RAX_(VALUE) mov ax, word ptr [rax + VALUE]
#define MOV_AX_FROM_PTR_RBX_(VALUE) mov ax, word ptr [rbx + VALUE]
#define MOV_AX_FROM_PTR_RCX_(VALUE) mov ax, word ptr [rcx + VALUE]
#define MOV_AX_FROM_PTR_RDX_(VALUE) mov ax, word ptr [rdx + VALUE]
#define MOV_AX_FROM_PTR_RDI_(VALUE) mov ax, word ptr [rdi + VALUE]
#define MOV_AX_FROM_PTR_RSI_(VALUE) mov ax, word ptr [rsi + VALUE]
#define MOV_AX_FROM_PTR_RBP_(VALUE) mov ax, word ptr [rbp + VALUE]
#define MOV_AX_FROM_PTR_RSP_(VALUE) mov ax, word ptr [rsp + VALUE]
#define MOV_AX_FROM_PTR_R8_(VALUE) mov ax, word ptr [r8 + VALUE]
#define MOV_AX_FROM_PTR_R9_(VALUE) mov ax, word ptr [r9 + VALUE]
#define MOV_AX_FROM_PTR_R10_(VALUE) mov ax, word ptr [r10 + VALUE]
#define MOV_AX_FROM_PTR_R11_(VALUE) mov ax, word ptr [r11 + VALUE]
#define MOV_AX_FROM_PTR_R12_(VALUE) mov ax, word ptr [r12 + VALUE]
#define MOV_AX_FROM_PTR_R13_(VALUE) mov ax, word ptr [r13 + VALUE]
#define MOV_AX_FROM_PTR_R14_(VALUE) mov ax, word ptr [r14 + VALUE]
#define MOV_AX_FROM_PTR_R15_(VALUE) mov ax, word ptr [r15 + VALUE]
#define MOV_AX_FROM_PTR_EAX_(VALUE) mov ax, word ptr [eax + VALUE]
#define MOV_AX_FROM_PTR_EBX_(VALUE) mov ax, word ptr [ebx + VALUE]
#define MOV_AX_FROM_PTR_ECX_(VALUE) mov ax, word ptr [ecx + VALUE]
#define MOV_AX_FROM_PTR_EDX_(VALUE) mov ax, word ptr [edx + VALUE]
#define MOV_AX_FROM_PTR_EDI_(VALUE) mov ax, word ptr [edi + VALUE]
#define MOV_AX_FROM_PTR_ESI_(VALUE) mov ax, word ptr [esi + VALUE]
#define MOV_AX_FROM_PTR_EBP_(VALUE) mov ax, word ptr [ebp + VALUE]
#define MOV_AX_FROM_PTR_ESP_(VALUE) mov ax, word ptr [esp + VALUE]

#define MOV_BX_FROM_PTR_RAX_(VALUE) mov bx, word ptr [rax + VALUE]
#define MOV_BX_FROM_PTR_RBX_(VALUE) mov bx, word ptr [rbx + VALUE]
#define MOV_BX_FROM_PTR_RCX_(VALUE) mov bx, word ptr [rcx + VALUE]
#define MOV_BX_FROM_PTR_RDX_(VALUE) mov bx, word ptr [rdx + VALUE]
#define MOV_BX_FROM_PTR_RDI_(VALUE) mov bx, word ptr [rdi + VALUE]
#define MOV_BX_FROM_PTR_RSI_(VALUE) mov bx, word ptr [rsi + VALUE]
#define MOV_BX_FROM_PTR_RBP_(VALUE) mov bx, word ptr [rbp + VALUE]
#define MOV_BX_FROM_PTR_RSP_(VALUE) mov bx, word ptr [rsp + VALUE]
#define MOV_BX_FROM_PTR_R8_(VALUE) mov bx, word ptr [r8 + VALUE]
#define MOV_BX_FROM_PTR_R9_(VALUE) mov bx, word ptr [r9 + VALUE]
#define MOV_BX_FROM_PTR_R10_(VALUE) mov bx, word ptr [r10 + VALUE]
#define MOV_BX_FROM_PTR_R11_(VALUE) mov bx, word ptr [r11 + VALUE]
#define MOV_BX_FROM_PTR_R12_(VALUE) mov bx, word ptr [r12 + VALUE]
#define MOV_BX_FROM_PTR_R13_(VALUE) mov bx, word ptr [r13 + VALUE]
#define MOV_BX_FROM_PTR_R14_(VALUE) mov bx, word ptr [r14 + VALUE]
#define MOV_BX_FROM_PTR_R15_(VALUE) mov bx, word ptr [r15 + VALUE]
#define MOV_BX_FROM_PTR_EAX_(VALUE) mov bx, word ptr [eax + VALUE]
#define MOV_BX_FROM_PTR_EBX_(VALUE) mov bx, word ptr [ebx + VALUE]
#define MOV_BX_FROM_PTR_ECX_(VALUE) mov bx, word ptr [ecx + VALUE]
#define MOV_BX_FROM_PTR_EDX_(VALUE) mov bx, word ptr [edx + VALUE]
#define MOV_BX_FROM_PTR_EDI_(VALUE) mov bx, word ptr [edi + VALUE]
#define MOV_BX_FROM_PTR_ESI_(VALUE) mov bx, word ptr [esi + VALUE]
#define MOV_BX_FROM_PTR_EBP_(VALUE) mov bx, word ptr [ebp + VALUE]
#define MOV_BX_FROM_PTR_ESP_(VALUE) mov bx, word ptr [esp + VALUE]

#define MOV_CX_FROM_PTR_RAX_(VALUE) mov cx, word ptr [rax + VALUE]
#define MOV_CX_FROM_PTR_RBX_(VALUE) mov cx, word ptr [rbx + VALUE]
#define MOV_CX_FROM_PTR_RCX_(VALUE) mov cx, word ptr [rcx + VALUE]
#define MOV_CX_FROM_PTR_RDX_(VALUE) mov cx, word ptr [rdx + VALUE]
#define MOV_CX_FROM_PTR_RDI_(VALUE) mov cx, word ptr [rdi + VALUE]
#define MOV_CX_FROM_PTR_RSI_(VALUE) mov cx, word ptr [rsi + VALUE]
#define MOV_CX_FROM_PTR_RBP_(VALUE) mov cx, word ptr [rbp + VALUE]
#define MOV_CX_FROM_PTR_RSP_(VALUE) mov cx, word ptr [rsp + VALUE]
#define MOV_CX_FROM_PTR_R8_(VALUE) mov cx, word ptr [r8 + VALUE]
#define MOV_CX_FROM_PTR_R9_(VALUE) mov cx, word ptr [r9 + VALUE]
#define MOV_CX_FROM_PTR_R10_(VALUE) mov cx, word ptr [r10 + VALUE]
#define MOV_CX_FROM_PTR_R11_(VALUE) mov cx, word ptr [r11 + VALUE]
#define MOV_CX_FROM_PTR_R12_(VALUE) mov cx, word ptr [r12 + VALUE]
#define MOV_CX_FROM_PTR_R13_(VALUE) mov cx, word ptr [r13 + VALUE]
#define MOV_CX_FROM_PTR_R14_(VALUE) mov cx, word ptr [r14 + VALUE]
#define MOV_CX_FROM_PTR_R15_(VALUE) mov cx, word ptr [r15 + VALUE]
#define MOV_CX_FROM_PTR_EAX_(VALUE) mov cx, word ptr [eax + VALUE]
#define MOV_CX_FROM_PTR_EBX_(VALUE) mov cx, word ptr [ebx + VALUE]
#define MOV_CX_FROM_PTR_ECX_(VALUE) mov cx, word ptr [ecx + VALUE]
#define MOV_CX_FROM_PTR_EDX_(VALUE) mov cx, word ptr [edx + VALUE]
#define MOV_CX_FROM_PTR_EDI_(VALUE) mov cx, word ptr [edi + VALUE]
#define MOV_CX_FROM_PTR_ESI_(VALUE) mov cx, word ptr [esi + VALUE]
#define MOV_CX_FROM_PTR_EBP_(VALUE) mov cx, word ptr [ebp + VALUE]
#define MOV_CX_FROM_PTR_ESP_(VALUE) mov cx, word ptr [esp + VALUE]

#define MOV_DX_FROM_PTR_RAX_(VALUE) mov dx, word ptr [rax + VALUE]
#define MOV_DX_FROM_PTR_RBX_(VALUE) mov dx, word ptr [rbx + VALUE]
#define MOV_DX_FROM_PTR_RCX_(VALUE) mov dx, word ptr [rcx + VALUE]
#define MOV_DX_FROM_PTR_RDX_(VALUE) mov dx, word ptr [rdx + VALUE]
#define MOV_DX_FROM_PTR_RDI_(VALUE) mov dx, word ptr [rdi + VALUE]
#define MOV_DX_FROM_PTR_RSI_(VALUE) mov dx, word ptr [rsi + VALUE]
#define MOV_DX_FROM_PTR_RBP_(VALUE) mov dx, word ptr [rbp + VALUE]
#define MOV_DX_FROM_PTR_RSP_(VALUE) mov dx, word ptr [rsp + VALUE]
#define MOV_DX_FROM_PTR_R8_(VALUE) mov dx, word ptr [r8 + VALUE]
#define MOV_DX_FROM_PTR_R9_(VALUE) mov dx, word ptr [r9 + VALUE]
#define MOV_DX_FROM_PTR_R10_(VALUE) mov dx, word ptr [r10 + VALUE]
#define MOV_DX_FROM_PTR_R11_(VALUE) mov dx, word ptr [r11 + VALUE]
#define MOV_DX_FROM_PTR_R12_(VALUE) mov dx, word ptr [r12 + VALUE]
#define MOV_DX_FROM_PTR_R13_(VALUE) mov dx, word ptr [r13 + VALUE]
#define MOV_DX_FROM_PTR_R14_(VALUE) mov dx, word ptr [r14 + VALUE]
#define MOV_DX_FROM_PTR_R15_(VALUE) mov dx, word ptr [r15 + VALUE]
#define MOV_DX_FROM_PTR_EAX_(VALUE) mov dx, word ptr [eax + VALUE]
#define MOV_DX_FROM_PTR_EBX_(VALUE) mov dx, word ptr [ebx + VALUE]
#define MOV_DX_FROM_PTR_ECX_(VALUE) mov dx, word ptr [ecx + VALUE]
#define MOV_DX_FROM_PTR_EDX_(VALUE) mov dx, word ptr [edx + VALUE]
#define MOV_DX_FROM_PTR_EDI_(VALUE) mov dx, word ptr [edi + VALUE]
#define MOV_DX_FROM_PTR_ESI_(VALUE) mov dx, word ptr [esi + VALUE]
#define MOV_DX_FROM_PTR_EBP_(VALUE) mov dx, word ptr [ebp + VALUE]
#define MOV_DX_FROM_PTR_ESP_(VALUE) mov dx, word ptr [esp + VALUE]

#define MOV_DI_FROM_PTR_RAX_(VALUE) mov di, word ptr [rax + VALUE]
#define MOV_DI_FROM_PTR_RBX_(VALUE) mov di, word ptr [rbx + VALUE]
#define MOV_DI_FROM_PTR_RCX_(VALUE) mov di, word ptr [rcx + VALUE]
#define MOV_DI_FROM_PTR_RDX_(VALUE) mov di, word ptr [rdx + VALUE]
#define MOV_DI_FROM_PTR_RDI_(VALUE) mov di, word ptr [rdi + VALUE]
#define MOV_DI_FROM_PTR_RSI_(VALUE) mov di, word ptr [rsi + VALUE]
#define MOV_DI_FROM_PTR_RBP_(VALUE) mov di, word ptr [rbp + VALUE]
#define MOV_DI_FROM_PTR_RSP_(VALUE) mov di, word ptr [rsp + VALUE]
#define MOV_DI_FROM_PTR_R8_(VALUE) mov di, word ptr [r8 + VALUE]
#define MOV_DI_FROM_PTR_R9_(VALUE) mov di, word ptr [r9 + VALUE]
#define MOV_DI_FROM_PTR_R10_(VALUE) mov di, word ptr [r10 + VALUE]
#define MOV_DI_FROM_PTR_R11_(VALUE) mov di, word ptr [r11 + VALUE]
#define MOV_DI_FROM_PTR_R12_(VALUE) mov di, word ptr [r12 + VALUE]
#define MOV_DI_FROM_PTR_R13_(VALUE) mov di, word ptr [r13 + VALUE]
#define MOV_DI_FROM_PTR_R14_(VALUE) mov di, word ptr [r14 + VALUE]
#define MOV_DI_FROM_PTR_R15_(VALUE) mov di, word ptr [r15 + VALUE]
#define MOV_DI_FROM_PTR_EAX_(VALUE) mov di, word ptr [eax + VALUE]
#define MOV_DI_FROM_PTR_EBX_(VALUE) mov di, word ptr [ebx + VALUE]
#define MOV_DI_FROM_PTR_ECX_(VALUE) mov di, word ptr [ecx + VALUE]
#define MOV_DI_FROM_PTR_EDX_(VALUE) mov di, word ptr [edx + VALUE]
#define MOV_DI_FROM_PTR_EDI_(VALUE) mov di, word ptr [edi + VALUE]
#define MOV_DI_FROM_PTR_ESI_(VALUE) mov di, word ptr [esi + VALUE]
#define MOV_DI_FROM_PTR_EBP_(VALUE) mov di, word ptr [ebp + VALUE]
#define MOV_DI_FROM_PTR_ESP_(VALUE) mov di, word ptr [esp + VALUE]

#define MOV_SI_FROM_PTR_RAX_(VALUE) mov si, word ptr [rax + VALUE]
#define MOV_SI_FROM_PTR_RBX_(VALUE) mov si, word ptr [rbx + VALUE]
#define MOV_SI_FROM_PTR_RCX_(VALUE) mov si, word ptr [rcx + VALUE]
#define MOV_SI_FROM_PTR_RDX_(VALUE) mov si, word ptr [rdx + VALUE]
#define MOV_SI_FROM_PTR_RDI_(VALUE) mov si, word ptr [rdi + VALUE]
#define MOV_SI_FROM_PTR_RSI_(VALUE) mov si, word ptr [rsi + VALUE]
#define MOV_SI_FROM_PTR_RBP_(VALUE) mov si, word ptr [rbp + VALUE]
#define MOV_SI_FROM_PTR_RSP_(VALUE) mov si, word ptr [rsp + VALUE]
#define MOV_SI_FROM_PTR_R8_(VALUE) mov si, word ptr [r8 + VALUE]
#define MOV_SI_FROM_PTR_R9_(VALUE) mov si, word ptr [r9 + VALUE]
#define MOV_SI_FROM_PTR_R10_(VALUE) mov si, word ptr [r10 + VALUE]
#define MOV_SI_FROM_PTR_R11_(VALUE) mov si, word ptr [r11 + VALUE]
#define MOV_SI_FROM_PTR_R12_(VALUE) mov si, word ptr [r12 + VALUE]
#define MOV_SI_FROM_PTR_R13_(VALUE) mov si, word ptr [r13 + VALUE]
#define MOV_SI_FROM_PTR_R14_(VALUE) mov si, word ptr [r14 + VALUE]
#define MOV_SI_FROM_PTR_R15_(VALUE) mov si, word ptr [r15 + VALUE]
#define MOV_SI_FROM_PTR_EAX_(VALUE) mov si, word ptr [eax + VALUE]
#define MOV_SI_FROM_PTR_EBX_(VALUE) mov si, word ptr [ebx + VALUE]
#define MOV_SI_FROM_PTR_ECX_(VALUE) mov si, word ptr [ecx + VALUE]
#define MOV_SI_FROM_PTR_EDX_(VALUE) mov si, word ptr [edx + VALUE]
#define MOV_SI_FROM_PTR_EDI_(VALUE) mov si, word ptr [edi + VALUE]
#define MOV_SI_FROM_PTR_ESI_(VALUE) mov si, word ptr [esi + VALUE]
#define MOV_SI_FROM_PTR_EBP_(VALUE) mov si, word ptr [ebp + VALUE]
#define MOV_SI_FROM_PTR_ESP_(VALUE) mov si, word ptr [esp + VALUE]

#define MOV_BP_FROM_PTR_RAX_(VALUE) mov bp, word ptr [rax + VALUE]
#define MOV_BP_FROM_PTR_RBX_(VALUE) mov bp, word ptr [rbx + VALUE]
#define MOV_BP_FROM_PTR_RCX_(VALUE) mov bp, word ptr [rcx + VALUE]
#define MOV_BP_FROM_PTR_RDX_(VALUE) mov bp, word ptr [rdx + VALUE]
#define MOV_BP_FROM_PTR_RDI_(VALUE) mov bp, word ptr [rdi + VALUE]
#define MOV_BP_FROM_PTR_RSI_(VALUE) mov bp, word ptr [rsi + VALUE]
#define MOV_BP_FROM_PTR_RBP_(VALUE) mov bp, word ptr [rbp + VALUE]
#define MOV_BP_FROM_PTR_RSP_(VALUE) mov bp, word ptr [rsp + VALUE]
#define MOV_BP_FROM_PTR_R8_(VALUE) mov bp, word ptr [r8 + VALUE]
#define MOV_BP_FROM_PTR_R9_(VALUE) mov bp, word ptr [r9 + VALUE]
#define MOV_BP_FROM_PTR_R10_(VALUE) mov bp, word ptr [r10 + VALUE]
#define MOV_BP_FROM_PTR_R11_(VALUE) mov bp, word ptr [r11 + VALUE]
#define MOV_BP_FROM_PTR_R12_(VALUE) mov bp, word ptr [r12 + VALUE]
#define MOV_BP_FROM_PTR_R13_(VALUE) mov bp, word ptr [r13 + VALUE]
#define MOV_BP_FROM_PTR_R14_(VALUE) mov bp, word ptr [r14 + VALUE]
#define MOV_BP_FROM_PTR_R15_(VALUE) mov bp, word ptr [r15 + VALUE]
#define MOV_BP_FROM_PTR_EAX_(VALUE) mov bp, word ptr [eax + VALUE]
#define MOV_BP_FROM_PTR_EBX_(VALUE) mov bp, word ptr [ebx + VALUE]
#define MOV_BP_FROM_PTR_ECX_(VALUE) mov bp, word ptr [ecx + VALUE]
#define MOV_BP_FROM_PTR_EDX_(VALUE) mov bp, word ptr [edx + VALUE]
#define MOV_BP_FROM_PTR_EDI_(VALUE) mov bp, word ptr [edi + VALUE]
#define MOV_BP_FROM_PTR_ESI_(VALUE) mov bp, word ptr [esi + VALUE]
#define MOV_BP_FROM_PTR_EBP_(VALUE) mov bp, word ptr [ebp + VALUE]
#define MOV_BP_FROM_PTR_ESP_(VALUE) mov bp, word ptr [esp + VALUE]

#define MOV_SP_FROM_PTR_RAX_(VALUE) mov sp, word ptr [rax + VALUE]
#define MOV_SP_FROM_PTR_RBX_(VALUE) mov sp, word ptr [rbx + VALUE]
#define MOV_SP_FROM_PTR_RCX_(VALUE) mov sp, word ptr [rcx + VALUE]
#define MOV_SP_FROM_PTR_RDX_(VALUE) mov sp, word ptr [rdx + VALUE]
#define MOV_SP_FROM_PTR_RDI_(VALUE) mov sp, word ptr [rdi + VALUE]
#define MOV_SP_FROM_PTR_RSI_(VALUE) mov sp, word ptr [rsi + VALUE]
#define MOV_SP_FROM_PTR_RBP_(VALUE) mov sp, word ptr [rbp + VALUE]
#define MOV_SP_FROM_PTR_RSP_(VALUE) mov sp, word ptr [rsp + VALUE]
#define MOV_SP_FROM_PTR_R8_(VALUE) mov sp, word ptr [r8 + VALUE]
#define MOV_SP_FROM_PTR_R9_(VALUE) mov sp, word ptr [r9 + VALUE]
#define MOV_SP_FROM_PTR_R10_(VALUE) mov sp, word ptr [r10 + VALUE]
#define MOV_SP_FROM_PTR_R11_(VALUE) mov sp, word ptr [r11 + VALUE]
#define MOV_SP_FROM_PTR_R12_(VALUE) mov sp, word ptr [r12 + VALUE]
#define MOV_SP_FROM_PTR_R13_(VALUE) mov sp, word ptr [r13 + VALUE]
#define MOV_SP_FROM_PTR_R14_(VALUE) mov sp, word ptr [r14 + VALUE]
#define MOV_SP_FROM_PTR_R15_(VALUE) mov sp, word ptr [r15 + VALUE]
#define MOV_SP_FROM_PTR_EAX_(VALUE) mov sp, word ptr [eax + VALUE]
#define MOV_SP_FROM_PTR_EBX_(VALUE) mov sp, word ptr [ebx + VALUE]
#define MOV_SP_FROM_PTR_ECX_(VALUE) mov sp, word ptr [ecx + VALUE]
#define MOV_SP_FROM_PTR_EDX_(VALUE) mov sp, word ptr [edx + VALUE]
#define MOV_SP_FROM_PTR_EDI_(VALUE) mov sp, word ptr [edi + VALUE]
#define MOV_SP_FROM_PTR_ESI_(VALUE) mov sp, word ptr [esi + VALUE]
#define MOV_SP_FROM_PTR_EBP_(VALUE) mov sp, word ptr [ebp + VALUE]
#define MOV_SP_FROM_PTR_ESP_(VALUE) mov sp, word ptr [esp + VALUE]

#define MOV_R8W_FROM_PTR_RAX_(VALUE) mov r8w, word ptr [rax + VALUE]
#define MOV_R8W_FROM_PTR_RBX_(VALUE) mov r8w, word ptr [rbx + VALUE]
#define MOV_R8W_FROM_PTR_RCX_(VALUE) mov r8w, word ptr [rcx + VALUE]
#define MOV_R8W_FROM_PTR_RDX_(VALUE) mov r8w, word ptr [rdx + VALUE]
#define MOV_R8W_FROM_PTR_RDI_(VALUE) mov r8w, word ptr [rdi + VALUE]
#define MOV_R8W_FROM_PTR_RSI_(VALUE) mov r8w, word ptr [rsi + VALUE]
#define MOV_R8W_FROM_PTR_RBP_(VALUE) mov r8w, word ptr [rbp + VALUE]
#define MOV_R8W_FROM_PTR_RSP_(VALUE) mov r8w, word ptr [rsp + VALUE]
#define MOV_R8W_FROM_PTR_R8_(VALUE) mov r8w, word ptr [r8 + VALUE]
#define MOV_R8W_FROM_PTR_R9_(VALUE) mov r8w, word ptr [r9 + VALUE]
#define MOV_R8W_FROM_PTR_R10_(VALUE) mov r8w, word ptr [r10 + VALUE]
#define MOV_R8W_FROM_PTR_R11_(VALUE) mov r8w, word ptr [r11 + VALUE]
#define MOV_R8W_FROM_PTR_R12_(VALUE) mov r8w, word ptr [r12 + VALUE]
#define MOV_R8W_FROM_PTR_R13_(VALUE) mov r8w, word ptr [r13 + VALUE]
#define MOV_R8W_FROM_PTR_R14_(VALUE) mov r8w, word ptr [r14 + VALUE]
#define MOV_R8W_FROM_PTR_R15_(VALUE) mov r8w, word ptr [r15 + VALUE]
#define MOV_R8W_FROM_PTR_EAX_(VALUE) mov r8w, word ptr [eax + VALUE]
#define MOV_R8W_FROM_PTR_EBX_(VALUE) mov r8w, word ptr [ebx + VALUE]
#define MOV_R8W_FROM_PTR_ECX_(VALUE) mov r8w, word ptr [ecx + VALUE]
#define MOV_R8W_FROM_PTR_EDX_(VALUE) mov r8w, word ptr [edx + VALUE]
#define MOV_R8W_FROM_PTR_EDI_(VALUE) mov r8w, word ptr [edi + VALUE]
#define MOV_R8W_FROM_PTR_ESI_(VALUE) mov r8w, word ptr [esi + VALUE]
#define MOV_R8W_FROM_PTR_EBP_(VALUE) mov r8w, word ptr [ebp + VALUE]
#define MOV_R8W_FROM_PTR_ESP_(VALUE) mov r8w, word ptr [esp + VALUE]

#define MOV_R9W_FROM_PTR_RAX_(VALUE) mov r9w, word ptr [rax + VALUE]
#define MOV_R9W_FROM_PTR_RBX_(VALUE) mov r9w, word ptr [rbx + VALUE]
#define MOV_R9W_FROM_PTR_RCX_(VALUE) mov r9w, word ptr [rcx + VALUE]
#define MOV_R9W_FROM_PTR_RDX_(VALUE) mov r9w, word ptr [rdx + VALUE]
#define MOV_R9W_FROM_PTR_RDI_(VALUE) mov r9w, word ptr [rdi + VALUE]
#define MOV_R9W_FROM_PTR_RSI_(VALUE) mov r9w, word ptr [rsi + VALUE]
#define MOV_R9W_FROM_PTR_RBP_(VALUE) mov r9w, word ptr [rbp + VALUE]
#define MOV_R9W_FROM_PTR_RSP_(VALUE) mov r9w, word ptr [rsp + VALUE]
#define MOV_R9W_FROM_PTR_R8_(VALUE) mov r9w, word ptr [r8 + VALUE]
#define MOV_R9W_FROM_PTR_R9_(VALUE) mov r9w, word ptr [r9 + VALUE]
#define MOV_R9W_FROM_PTR_R10_(VALUE) mov r9w, word ptr [r10 + VALUE]
#define MOV_R9W_FROM_PTR_R11_(VALUE) mov r9w, word ptr [r11 + VALUE]
#define MOV_R9W_FROM_PTR_R12_(VALUE) mov r9w, word ptr [r12 + VALUE]
#define MOV_R9W_FROM_PTR_R13_(VALUE) mov r9w, word ptr [r13 + VALUE]
#define MOV_R9W_FROM_PTR_R14_(VALUE) mov r9w, word ptr [r14 + VALUE]
#define MOV_R9W_FROM_PTR_R15_(VALUE) mov r9w, word ptr [r15 + VALUE]
#define MOV_R9W_FROM_PTR_EAX_(VALUE) mov r9w, word ptr [eax + VALUE]
#define MOV_R9W_FROM_PTR_EBX_(VALUE) mov r9w, word ptr [ebx + VALUE]
#define MOV_R9W_FROM_PTR_ECX_(VALUE) mov r9w, word ptr [ecx + VALUE]
#define MOV_R9W_FROM_PTR_EDX_(VALUE) mov r9w, word ptr [edx + VALUE]
#define MOV_R9W_FROM_PTR_EDI_(VALUE) mov r9w, word ptr [edi + VALUE]
#define MOV_R9W_FROM_PTR_ESI_(VALUE) mov r9w, word ptr [esi + VALUE]
#define MOV_R9W_FROM_PTR_EBP_(VALUE) mov r9w, word ptr [ebp + VALUE]
#define MOV_R9W_FROM_PTR_ESP_(VALUE) mov r9w, word ptr [esp + VALUE]

#define MOV_R10W_FROM_PTR_RAX_(VALUE) mov r10w, word ptr [rax + VALUE]
#define MOV_R10W_FROM_PTR_RBX_(VALUE) mov r10w, word ptr [rbx + VALUE]
#define MOV_R10W_FROM_PTR_RCX_(VALUE) mov r10w, word ptr [rcx + VALUE]
#define MOV_R10W_FROM_PTR_RDX_(VALUE) mov r10w, word ptr [rdx + VALUE]
#define MOV_R10W_FROM_PTR_RDI_(VALUE) mov r10w, word ptr [rdi + VALUE]
#define MOV_R10W_FROM_PTR_RSI_(VALUE) mov r10w, word ptr [rsi + VALUE]
#define MOV_R10W_FROM_PTR_RBP_(VALUE) mov r10w, word ptr [rbp + VALUE]
#define MOV_R10W_FROM_PTR_RSP_(VALUE) mov r10w, word ptr [rsp + VALUE]
#define MOV_R10W_FROM_PTR_R8_(VALUE) mov r10w, word ptr [r8 + VALUE]
#define MOV_R10W_FROM_PTR_R9_(VALUE) mov r10w, word ptr [r9 + VALUE]
#define MOV_R10W_FROM_PTR_R10_(VALUE) mov r10w, word ptr [r10 + VALUE]
#define MOV_R10W_FROM_PTR_R11_(VALUE) mov r10w, word ptr [r11 + VALUE]
#define MOV_R10W_FROM_PTR_R12_(VALUE) mov r10w, word ptr [r12 + VALUE]
#define MOV_R10W_FROM_PTR_R13_(VALUE) mov r10w, word ptr [r13 + VALUE]
#define MOV_R10W_FROM_PTR_R14_(VALUE) mov r10w, word ptr [r14 + VALUE]
#define MOV_R10W_FROM_PTR_R15_(VALUE) mov r10w, word ptr [r15 + VALUE]
#define MOV_R10W_FROM_PTR_EAX_(VALUE) mov r10w, word ptr [eax + VALUE]
#define MOV_R10W_FROM_PTR_EBX_(VALUE) mov r10w, word ptr [ebx + VALUE]
#define MOV_R10W_FROM_PTR_ECX_(VALUE) mov r10w, word ptr [ecx + VALUE]
#define MOV_R10W_FROM_PTR_EDX_(VALUE) mov r10w, word ptr [edx + VALUE]
#define MOV_R10W_FROM_PTR_EDI_(VALUE) mov r10w, word ptr [edi + VALUE]
#define MOV_R10W_FROM_PTR_ESI_(VALUE) mov r10w, word ptr [esi + VALUE]
#define MOV_R10W_FROM_PTR_EBP_(VALUE) mov r10w, word ptr [ebp + VALUE]
#define MOV_R10W_FROM_PTR_ESP_(VALUE) mov r10w, word ptr [esp + VALUE]

#define MOV_R11W_FROM_PTR_RAX_(VALUE) mov r11w, word ptr [rax + VALUE]
#define MOV_R11W_FROM_PTR_RBX_(VALUE) mov r11w, word ptr [rbx + VALUE]
#define MOV_R11W_FROM_PTR_RCX_(VALUE) mov r11w, word ptr [rcx + VALUE]
#define MOV_R11W_FROM_PTR_RDX_(VALUE) mov r11w, word ptr [rdx + VALUE]
#define MOV_R11W_FROM_PTR_RDI_(VALUE) mov r11w, word ptr [rdi + VALUE]
#define MOV_R11W_FROM_PTR_RSI_(VALUE) mov r11w, word ptr [rsi + VALUE]
#define MOV_R11W_FROM_PTR_RBP_(VALUE) mov r11w, word ptr [rbp + VALUE]
#define MOV_R11W_FROM_PTR_RSP_(VALUE) mov r11w, word ptr [rsp + VALUE]
#define MOV_R11W_FROM_PTR_R8_(VALUE) mov r11w, word ptr [r8 + VALUE]
#define MOV_R11W_FROM_PTR_R9_(VALUE) mov r11w, word ptr [r9 + VALUE]
#define MOV_R11W_FROM_PTR_R10_(VALUE) mov r11w, word ptr [r10 + VALUE]
#define MOV_R11W_FROM_PTR_R11_(VALUE) mov r11w, word ptr [r11 + VALUE]
#define MOV_R11W_FROM_PTR_R12_(VALUE) mov r11w, word ptr [r12 + VALUE]
#define MOV_R11W_FROM_PTR_R13_(VALUE) mov r11w, word ptr [r13 + VALUE]
#define MOV_R11W_FROM_PTR_R14_(VALUE) mov r11w, word ptr [r14 + VALUE]
#define MOV_R11W_FROM_PTR_R15_(VALUE) mov r11w, word ptr [r15 + VALUE]
#define MOV_R11W_FROM_PTR_EAX_(VALUE) mov r11w, word ptr [eax + VALUE]
#define MOV_R11W_FROM_PTR_EBX_(VALUE) mov r11w, word ptr [ebx + VALUE]
#define MOV_R11W_FROM_PTR_ECX_(VALUE) mov r11w, word ptr [ecx + VALUE]
#define MOV_R11W_FROM_PTR_EDX_(VALUE) mov r11w, word ptr [edx + VALUE]
#define MOV_R11W_FROM_PTR_EDI_(VALUE) mov r11w, word ptr [edi + VALUE]
#define MOV_R11W_FROM_PTR_ESI_(VALUE) mov r11w, word ptr [esi + VALUE]
#define MOV_R11W_FROM_PTR_EBP_(VALUE) mov r11w, word ptr [ebp + VALUE]
#define MOV_R11W_FROM_PTR_ESP_(VALUE) mov r11w, word ptr [esp + VALUE]

#define MOV_R12W_FROM_PTR_RAX_(VALUE) mov r12w, word ptr [rax + VALUE]
#define MOV_R12W_FROM_PTR_RBX_(VALUE) mov r12w, word ptr [rbx + VALUE]
#define MOV_R12W_FROM_PTR_RCX_(VALUE) mov r12w, word ptr [rcx + VALUE]
#define MOV_R12W_FROM_PTR_RDX_(VALUE) mov r12w, word ptr [rdx + VALUE]
#define MOV_R12W_FROM_PTR_RDI_(VALUE) mov r12w, word ptr [rdi + VALUE]
#define MOV_R12W_FROM_PTR_RSI_(VALUE) mov r12w, word ptr [rsi + VALUE]
#define MOV_R12W_FROM_PTR_RBP_(VALUE) mov r12w, word ptr [rbp + VALUE]
#define MOV_R12W_FROM_PTR_RSP_(VALUE) mov r12w, word ptr [rsp + VALUE]
#define MOV_R12W_FROM_PTR_R8_(VALUE) mov r12w, word ptr [r8 + VALUE]
#define MOV_R12W_FROM_PTR_R9_(VALUE) mov r12w, word ptr [r9 + VALUE]
#define MOV_R12W_FROM_PTR_R10_(VALUE) mov r12w, word ptr [r10 + VALUE]
#define MOV_R12W_FROM_PTR_R11_(VALUE) mov r12w, word ptr [r11 + VALUE]
#define MOV_R12W_FROM_PTR_R12_(VALUE) mov r12w, word ptr [r12 + VALUE]
#define MOV_R12W_FROM_PTR_R13_(VALUE) mov r12w, word ptr [r13 + VALUE]
#define MOV_R12W_FROM_PTR_R14_(VALUE) mov r12w, word ptr [r14 + VALUE]
#define MOV_R12W_FROM_PTR_R15_(VALUE) mov r12w, word ptr [r15 + VALUE]
#define MOV_R12W_FROM_PTR_EAX_(VALUE) mov r12w, word ptr [eax + VALUE]
#define MOV_R12W_FROM_PTR_EBX_(VALUE) mov r12w, word ptr [ebx + VALUE]
#define MOV_R12W_FROM_PTR_ECX_(VALUE) mov r12w, word ptr [ecx + VALUE]
#define MOV_R12W_FROM_PTR_EDX_(VALUE) mov r12w, word ptr [edx + VALUE]
#define MOV_R12W_FROM_PTR_EDI_(VALUE) mov r12w, word ptr [edi + VALUE]
#define MOV_R12W_FROM_PTR_ESI_(VALUE) mov r12w, word ptr [esi + VALUE]
#define MOV_R12W_FROM_PTR_EBP_(VALUE) mov r12w, word ptr [ebp + VALUE]
#define MOV_R12W_FROM_PTR_ESP_(VALUE) mov r12w, word ptr [esp + VALUE]

#define MOV_R13W_FROM_PTR_RAX_(VALUE) mov r13w, word ptr [rax + VALUE]
#define MOV_R13W_FROM_PTR_RBX_(VALUE) mov r13w, word ptr [rbx + VALUE]
#define MOV_R13W_FROM_PTR_RCX_(VALUE) mov r13w, word ptr [rcx + VALUE]
#define MOV_R13W_FROM_PTR_RDX_(VALUE) mov r13w, word ptr [rdx + VALUE]
#define MOV_R13W_FROM_PTR_RDI_(VALUE) mov r13w, word ptr [rdi + VALUE]
#define MOV_R13W_FROM_PTR_RSI_(VALUE) mov r13w, word ptr [rsi + VALUE]
#define MOV_R13W_FROM_PTR_RBP_(VALUE) mov r13w, word ptr [rbp + VALUE]
#define MOV_R13W_FROM_PTR_RSP_(VALUE) mov r13w, word ptr [rsp + VALUE]
#define MOV_R13W_FROM_PTR_R8_(VALUE) mov r13w, word ptr [r8 + VALUE]
#define MOV_R13W_FROM_PTR_R9_(VALUE) mov r13w, word ptr [r9 + VALUE]
#define MOV_R13W_FROM_PTR_R10_(VALUE) mov r13w, word ptr [r10 + VALUE]
#define MOV_R13W_FROM_PTR_R11_(VALUE) mov r13w, word ptr [r11 + VALUE]
#define MOV_R13W_FROM_PTR_R12_(VALUE) mov r13w, word ptr [r12 + VALUE]
#define MOV_R13W_FROM_PTR_R13_(VALUE) mov r13w, word ptr [r13 + VALUE]
#define MOV_R13W_FROM_PTR_R14_(VALUE) mov r13w, word ptr [r14 + VALUE]
#define MOV_R13W_FROM_PTR_R15_(VALUE) mov r13w, word ptr [r15 + VALUE]
#define MOV_R13W_FROM_PTR_EAX_(VALUE) mov r13w, word ptr [eax + VALUE]
#define MOV_R13W_FROM_PTR_EBX_(VALUE) mov r13w, word ptr [ebx + VALUE]
#define MOV_R13W_FROM_PTR_ECX_(VALUE) mov r13w, word ptr [ecx + VALUE]
#define MOV_R13W_FROM_PTR_EDX_(VALUE) mov r13w, word ptr [edx + VALUE]
#define MOV_R13W_FROM_PTR_EDI_(VALUE) mov r13w, word ptr [edi + VALUE]
#define MOV_R13W_FROM_PTR_ESI_(VALUE) mov r13w, word ptr [esi + VALUE]
#define MOV_R13W_FROM_PTR_EBP_(VALUE) mov r13w, word ptr [ebp + VALUE]
#define MOV_R13W_FROM_PTR_ESP_(VALUE) mov r13w, word ptr [esp + VALUE]

#define MOV_R14W_FROM_PTR_RAX_(VALUE) mov r14w, word ptr [rax + VALUE]
#define MOV_R14W_FROM_PTR_RBX_(VALUE) mov r14w, word ptr [rbx + VALUE]
#define MOV_R14W_FROM_PTR_RCX_(VALUE) mov r14w, word ptr [rcx + VALUE]
#define MOV_R14W_FROM_PTR_RDX_(VALUE) mov r14w, word ptr [rdx + VALUE]
#define MOV_R14W_FROM_PTR_RDI_(VALUE) mov r14w, word ptr [rdi + VALUE]
#define MOV_R14W_FROM_PTR_RSI_(VALUE) mov r14w, word ptr [rsi + VALUE]
#define MOV_R14W_FROM_PTR_RBP_(VALUE) mov r14w, word ptr [rbp + VALUE]
#define MOV_R14W_FROM_PTR_RSP_(VALUE) mov r14w, word ptr [rsp + VALUE]
#define MOV_R14W_FROM_PTR_R8_(VALUE) mov r14w, word ptr [r8 + VALUE]
#define MOV_R14W_FROM_PTR_R9_(VALUE) mov r14w, word ptr [r9 + VALUE]
#define MOV_R14W_FROM_PTR_R10_(VALUE) mov r14w, word ptr [r10 + VALUE]
#define MOV_R14W_FROM_PTR_R11_(VALUE) mov r14w, word ptr [r11 + VALUE]
#define MOV_R14W_FROM_PTR_R12_(VALUE) mov r14w, word ptr [r12 + VALUE]
#define MOV_R14W_FROM_PTR_R13_(VALUE) mov r14w, word ptr [r13 + VALUE]
#define MOV_R14W_FROM_PTR_R14_(VALUE) mov r14w, word ptr [r14 + VALUE]
#define MOV_R14W_FROM_PTR_R15_(VALUE) mov r14w, word ptr [r15 + VALUE]
#define MOV_R14W_FROM_PTR_EAX_(VALUE) mov r14w, word ptr [eax + VALUE]
#define MOV_R14W_FROM_PTR_EBX_(VALUE) mov r14w, word ptr [ebx + VALUE]
#define MOV_R14W_FROM_PTR_ECX_(VALUE) mov r14w, word ptr [ecx + VALUE]
#define MOV_R14W_FROM_PTR_EDX_(VALUE) mov r14w, word ptr [edx + VALUE]
#define MOV_R14W_FROM_PTR_EDI_(VALUE) mov r14w, word ptr [edi + VALUE]
#define MOV_R14W_FROM_PTR_ESI_(VALUE) mov r14w, word ptr [esi + VALUE]
#define MOV_R14W_FROM_PTR_EBP_(VALUE) mov r14w, word ptr [ebp + VALUE]
#define MOV_R14W_FROM_PTR_ESP_(VALUE) mov r14w, word ptr [esp + VALUE]

#define MOV_R15W_FROM_PTR_RAX_(VALUE) mov r15w, word ptr [rax + VALUE]
#define MOV_R15W_FROM_PTR_RBX_(VALUE) mov r15w, word ptr [rbx + VALUE]
#define MOV_R15W_FROM_PTR_RCX_(VALUE) mov r15w, word ptr [rcx + VALUE]
#define MOV_R15W_FROM_PTR_RDX_(VALUE) mov r15w, word ptr [rdx + VALUE]
#define MOV_R15W_FROM_PTR_RDI_(VALUE) mov r15w, word ptr [rdi + VALUE]
#define MOV_R15W_FROM_PTR_RSI_(VALUE) mov r15w, word ptr [rsi + VALUE]
#define MOV_R15W_FROM_PTR_RBP_(VALUE) mov r15w, word ptr [rbp + VALUE]
#define MOV_R15W_FROM_PTR_RSP_(VALUE) mov r15w, word ptr [rsp + VALUE]
#define MOV_R15W_FROM_PTR_R8_(VALUE) mov r15w, word ptr [r8 + VALUE]
#define MOV_R15W_FROM_PTR_R9_(VALUE) mov r15w, word ptr [r9 + VALUE]
#define MOV_R15W_FROM_PTR_R10_(VALUE) mov r15w, word ptr [r10 + VALUE]
#define MOV_R15W_FROM_PTR_R11_(VALUE) mov r15w, word ptr [r11 + VALUE]
#define MOV_R15W_FROM_PTR_R12_(VALUE) mov r15w, word ptr [r12 + VALUE]
#define MOV_R15W_FROM_PTR_R13_(VALUE) mov r15w, word ptr [r13 + VALUE]
#define MOV_R15W_FROM_PTR_R14_(VALUE) mov r15w, word ptr [r14 + VALUE]
#define MOV_R15W_FROM_PTR_R15_(VALUE) mov r15w, word ptr [r15 + VALUE]
#define MOV_R15W_FROM_PTR_EAX_(VALUE) mov r15w, word ptr [eax + VALUE]
#define MOV_R15W_FROM_PTR_EBX_(VALUE) mov r15w, word ptr [ebx + VALUE]
#define MOV_R15W_FROM_PTR_ECX_(VALUE) mov r15w, word ptr [ecx + VALUE]
#define MOV_R15W_FROM_PTR_EDX_(VALUE) mov r15w, word ptr [edx + VALUE]
#define MOV_R15W_FROM_PTR_EDI_(VALUE) mov r15w, word ptr [edi + VALUE]
#define MOV_R15W_FROM_PTR_ESI_(VALUE) mov r15w, word ptr [esi + VALUE]
#define MOV_R15W_FROM_PTR_EBP_(VALUE) mov r15w, word ptr [ebp + VALUE]
#define MOV_R15W_FROM_PTR_ESP_(VALUE) mov r15w, word ptr [esp + VALUE]

#define MOV_AX_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], ax
#define MOV_AX_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], ax
#define MOV_AX_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], ax
#define MOV_AX_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], ax
#define MOV_AX_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], ax
#define MOV_AX_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], ax
#define MOV_AX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], ax
#define MOV_AX_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], ax
#define MOV_AX_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], ax
#define MOV_AX_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], ax
#define MOV_AX_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], ax
#define MOV_AX_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], ax
#define MOV_AX_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], ax
#define MOV_AX_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], ax
#define MOV_AX_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], ax
#define MOV_AX_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], ax
#define MOV_AX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], ax
#define MOV_AX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], ax
#define MOV_AX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], ax
#define MOV_AX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], ax
#define MOV_AX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], ax
#define MOV_AX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], ax
#define MOV_AX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], ax
#define MOV_AX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], ax

#define MOV_BX_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], bx
#define MOV_BX_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], bx
#define MOV_BX_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], bx
#define MOV_BX_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], bx
#define MOV_BX_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], bx
#define MOV_BX_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], bx
#define MOV_BX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], bx
#define MOV_BX_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], bx
#define MOV_BX_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], bx
#define MOV_BX_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], bx
#define MOV_BX_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], bx
#define MOV_BX_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], bx
#define MOV_BX_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], bx
#define MOV_BX_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], bx
#define MOV_BX_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], bx
#define MOV_BX_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], bx
#define MOV_BX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], bx
#define MOV_BX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], bx
#define MOV_BX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], bx
#define MOV_BX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], bx
#define MOV_BX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], bx
#define MOV_BX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], bx
#define MOV_BX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bx
#define MOV_BX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bx

#define MOV_CX_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], cx
#define MOV_CX_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], cx
#define MOV_CX_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], cx
#define MOV_CX_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], cx
#define MOV_CX_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], cx
#define MOV_CX_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], cx
#define MOV_CX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], cx
#define MOV_CX_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], cx
#define MOV_CX_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], cx
#define MOV_CX_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], cx
#define MOV_CX_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], cx
#define MOV_CX_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], cx
#define MOV_CX_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], cx
#define MOV_CX_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], cx
#define MOV_CX_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], cx
#define MOV_CX_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], cx
#define MOV_CX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], cx
#define MOV_CX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], cx
#define MOV_CX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], cx
#define MOV_CX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], cx
#define MOV_CX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], cx
#define MOV_CX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], cx
#define MOV_CX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], cx
#define MOV_CX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], cx

#define MOV_DX_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], dx
#define MOV_DX_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], dx
#define MOV_DX_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], dx
#define MOV_DX_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], dx
#define MOV_DX_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], dx
#define MOV_DX_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], dx
#define MOV_DX_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], dx
#define MOV_DX_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], dx
#define MOV_DX_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], dx
#define MOV_DX_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], dx
#define MOV_DX_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], dx
#define MOV_DX_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], dx
#define MOV_DX_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], dx
#define MOV_DX_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], dx
#define MOV_DX_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], dx
#define MOV_DX_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], dx
#define MOV_DX_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], dx
#define MOV_DX_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], dx
#define MOV_DX_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], dx
#define MOV_DX_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], dx
#define MOV_DX_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], dx
#define MOV_DX_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], dx
#define MOV_DX_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], dx
#define MOV_DX_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], dx

#define MOV_DI_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], di
#define MOV_DI_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], di
#define MOV_DI_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], di
#define MOV_DI_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], di
#define MOV_DI_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], di
#define MOV_DI_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], di
#define MOV_DI_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], di
#define MOV_DI_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], di
#define MOV_DI_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], di
#define MOV_DI_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], di
#define MOV_DI_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], di
#define MOV_DI_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], di
#define MOV_DI_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], di
#define MOV_DI_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], di
#define MOV_DI_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], di
#define MOV_DI_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], di
#define MOV_DI_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], di
#define MOV_DI_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], di
#define MOV_DI_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], di
#define MOV_DI_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], di
#define MOV_DI_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], di
#define MOV_DI_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], di
#define MOV_DI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], di
#define MOV_DI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], di

#define MOV_SI_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], si
#define MOV_SI_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], si
#define MOV_SI_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], si
#define MOV_SI_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], si
#define MOV_SI_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], si
#define MOV_SI_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], si
#define MOV_SI_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], si
#define MOV_SI_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], si
#define MOV_SI_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], si
#define MOV_SI_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], si
#define MOV_SI_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], si
#define MOV_SI_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], si
#define MOV_SI_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], si
#define MOV_SI_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], si
#define MOV_SI_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], si
#define MOV_SI_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], si
#define MOV_SI_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], si
#define MOV_SI_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], si
#define MOV_SI_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], si
#define MOV_SI_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], si
#define MOV_SI_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], si
#define MOV_SI_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], si
#define MOV_SI_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], si
#define MOV_SI_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], si

#define MOV_BP_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], bp
#define MOV_BP_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], bp
#define MOV_BP_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], bp
#define MOV_BP_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], bp
#define MOV_BP_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], bp
#define MOV_BP_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], bp
#define MOV_BP_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], bp
#define MOV_BP_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], bp
#define MOV_BP_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], bp
#define MOV_BP_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], bp
#define MOV_BP_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], bp
#define MOV_BP_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], bp
#define MOV_BP_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], bp
#define MOV_BP_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], bp
#define MOV_BP_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], bp
#define MOV_BP_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], bp
#define MOV_BP_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], bp
#define MOV_BP_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], bp
#define MOV_BP_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], bp
#define MOV_BP_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], bp
#define MOV_BP_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], bp
#define MOV_BP_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], bp
#define MOV_BP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], bp
#define MOV_BP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], bp

#define MOV_SP_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], sp
#define MOV_SP_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], sp
#define MOV_SP_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], sp
#define MOV_SP_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], sp
#define MOV_SP_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], sp
#define MOV_SP_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], sp
#define MOV_SP_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], sp
#define MOV_SP_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], sp
#define MOV_SP_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], sp
#define MOV_SP_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], sp
#define MOV_SP_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], sp
#define MOV_SP_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], sp
#define MOV_SP_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], sp
#define MOV_SP_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], sp
#define MOV_SP_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], sp
#define MOV_SP_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], sp
#define MOV_SP_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], sp
#define MOV_SP_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], sp
#define MOV_SP_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], sp
#define MOV_SP_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], sp
#define MOV_SP_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], sp
#define MOV_SP_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], sp
#define MOV_SP_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], sp
#define MOV_SP_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], sp

#define MOV_R8W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r8w
#define MOV_R8W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r8w
#define MOV_R8W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r8w
#define MOV_R8W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r8w
#define MOV_R8W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r8w
#define MOV_R8W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r8w
#define MOV_R8W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r8w
#define MOV_R8W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r8w
#define MOV_R8W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r8w
#define MOV_R8W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r8w
#define MOV_R8W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r8w
#define MOV_R8W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r8w
#define MOV_R8W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r8w
#define MOV_R8W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r8w
#define MOV_R8W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r8w
#define MOV_R8W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r8w
#define MOV_R8W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r8w
#define MOV_R8W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r8w
#define MOV_R8W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r8w
#define MOV_R8W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r8w
#define MOV_R8W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r8w
#define MOV_R8W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r8w
#define MOV_R8W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r8w
#define MOV_R8W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r8w

#define MOV_R9W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r9w
#define MOV_R9W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r9w
#define MOV_R9W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r9w
#define MOV_R9W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r9w
#define MOV_R9W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r9w
#define MOV_R9W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r9w
#define MOV_R9W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r9w
#define MOV_R9W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r9w
#define MOV_R9W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r9w
#define MOV_R9W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r9w
#define MOV_R9W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r9w
#define MOV_R9W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r9w
#define MOV_R9W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r9w
#define MOV_R9W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r9w
#define MOV_R9W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r9w
#define MOV_R9W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r9w
#define MOV_R9W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r9w
#define MOV_R9W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r9w
#define MOV_R9W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r9w
#define MOV_R9W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r9w
#define MOV_R9W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r9w
#define MOV_R9W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r9w
#define MOV_R9W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r9w
#define MOV_R9W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r9w

#define MOV_R10W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r10w
#define MOV_R10W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r10w
#define MOV_R10W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r10w
#define MOV_R10W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r10w
#define MOV_R10W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r10w
#define MOV_R10W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r10w
#define MOV_R10W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r10w
#define MOV_R10W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r10w
#define MOV_R10W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r10w
#define MOV_R10W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r10w
#define MOV_R10W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r10w
#define MOV_R10W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r10w
#define MOV_R10W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r10w
#define MOV_R10W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r10w
#define MOV_R10W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r10w
#define MOV_R10W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r10w
#define MOV_R10W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r10w
#define MOV_R10W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r10w
#define MOV_R10W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r10w
#define MOV_R10W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r10w
#define MOV_R10W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r10w
#define MOV_R10W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r10w
#define MOV_R10W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r10w
#define MOV_R10W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r10w

#define MOV_R11W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r11w
#define MOV_R11W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r11w
#define MOV_R11W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r11w
#define MOV_R11W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r11w
#define MOV_R11W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r11w
#define MOV_R11W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r11w
#define MOV_R11W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r11w
#define MOV_R11W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r11w
#define MOV_R11W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r11w
#define MOV_R11W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r11w
#define MOV_R11W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r11w
#define MOV_R11W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r11w
#define MOV_R11W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r11w
#define MOV_R11W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r11w
#define MOV_R11W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r11w
#define MOV_R11W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r11w
#define MOV_R11W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r11w
#define MOV_R11W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r11w
#define MOV_R11W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r11w
#define MOV_R11W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r11w
#define MOV_R11W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r11w
#define MOV_R11W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r11w
#define MOV_R11W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r11w
#define MOV_R11W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r11w

#define MOV_R12W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r12w
#define MOV_R12W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r12w
#define MOV_R12W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r12w
#define MOV_R12W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r12w
#define MOV_R12W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r12w
#define MOV_R12W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r12w
#define MOV_R12W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r12w
#define MOV_R12W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r12w
#define MOV_R12W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r12w
#define MOV_R12W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r12w
#define MOV_R12W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r12w
#define MOV_R12W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r12w
#define MOV_R12W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r12w
#define MOV_R12W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r12w
#define MOV_R12W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r12w
#define MOV_R12W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r12w
#define MOV_R12W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r12w
#define MOV_R12W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r12w
#define MOV_R12W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r12w
#define MOV_R12W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r12w
#define MOV_R12W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r12w
#define MOV_R12W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r12w
#define MOV_R12W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r12w
#define MOV_R12W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r12w

#define MOV_R13W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r13w
#define MOV_R13W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r13w
#define MOV_R13W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r13w
#define MOV_R13W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r13w
#define MOV_R13W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r13w
#define MOV_R13W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r13w
#define MOV_R13W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r13w
#define MOV_R13W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r13w
#define MOV_R13W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r13w
#define MOV_R13W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r13w
#define MOV_R13W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r13w
#define MOV_R13W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r13w
#define MOV_R13W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r13w
#define MOV_R13W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r13w
#define MOV_R13W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r13w
#define MOV_R13W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r13w
#define MOV_R13W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r13w
#define MOV_R13W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r13w
#define MOV_R13W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r13w
#define MOV_R13W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r13w
#define MOV_R13W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r13w
#define MOV_R13W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r13w
#define MOV_R13W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r13w
#define MOV_R13W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r13w

#define MOV_R14W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r14w
#define MOV_R14W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r14w
#define MOV_R14W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r14w
#define MOV_R14W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r14w
#define MOV_R14W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r14w
#define MOV_R14W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r14w
#define MOV_R14W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r14w
#define MOV_R14W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r14w
#define MOV_R14W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r14w
#define MOV_R14W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r14w
#define MOV_R14W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r14w
#define MOV_R14W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r14w
#define MOV_R14W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r14w
#define MOV_R14W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r14w
#define MOV_R14W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r14w
#define MOV_R14W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r14w
#define MOV_R14W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r14w
#define MOV_R14W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r14w
#define MOV_R14W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r14w
#define MOV_R14W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r14w
#define MOV_R14W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r14w
#define MOV_R14W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r14w
#define MOV_R14W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r14w
#define MOV_R14W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r14w

#define MOV_R15W_TO_PTR_RAX_(VALUE) mov word ptr [rax + VALUE], r15w
#define MOV_R15W_TO_PTR_RBX_(VALUE) mov word ptr [rbx + VALUE], r15w
#define MOV_R15W_TO_PTR_RCX_(VALUE) mov word ptr [rcx + VALUE], r15w
#define MOV_R15W_TO_PTR_RDX_(VALUE) mov word ptr [rdx + VALUE], r15w
#define MOV_R15W_TO_PTR_RDI_(VALUE) mov word ptr [rdi + VALUE], r15w
#define MOV_R15W_TO_PTR_RSI_(VALUE) mov word ptr [rsi + VALUE], r15w
#define MOV_R15W_TO_PTR_RBP_(VALUE) mov word ptr [rbp + VALUE], r15w
#define MOV_R15W_TO_PTR_RSP_(VALUE) mov word ptr [rsp + VALUE], r15w
#define MOV_R15W_TO_PTR_R8_(VALUE) mov word ptr [r8 + VALUE], r15w
#define MOV_R15W_TO_PTR_R9_(VALUE) mov word ptr [r9 + VALUE], r15w
#define MOV_R15W_TO_PTR_R10_(VALUE) mov word ptr [r10 + VALUE], r15w
#define MOV_R15W_TO_PTR_R11_(VALUE) mov word ptr [r11 + VALUE], r15w
#define MOV_R15W_TO_PTR_R12_(VALUE) mov word ptr [r12 + VALUE], r15w
#define MOV_R15W_TO_PTR_R13_(VALUE) mov word ptr [r13 + VALUE], r15w
#define MOV_R15W_TO_PTR_R14_(VALUE) mov word ptr [r14 + VALUE], r15w
#define MOV_R15W_TO_PTR_R15_(VALUE) mov word ptr [r15 + VALUE], r15w
#define MOV_R15W_TO_PTR_EAX_(VALUE) mov word ptr [eax + VALUE], r15w
#define MOV_R15W_TO_PTR_EBX_(VALUE) mov word ptr [ebx + VALUE], r15w
#define MOV_R15W_TO_PTR_ECX_(VALUE) mov word ptr [ecx + VALUE], r15w
#define MOV_R15W_TO_PTR_EDX_(VALUE) mov word ptr [edx + VALUE], r15w
#define MOV_R15W_TO_PTR_EDI_(VALUE) mov word ptr [edi + VALUE], r15w
#define MOV_R15W_TO_PTR_ESI_(VALUE) mov word ptr [esi + VALUE], r15w
#define MOV_R15W_TO_PTR_EBP_(VALUE) mov word ptr [ebp + VALUE], r15w
#define MOV_R15W_TO_PTR_ESP_(VALUE) mov word ptr [esp + VALUE], r15w
#endif /* __SYSTEM_64_BIT__ */
/* ************************* [^] 16-BIT MEMORY [^] ************************** */

/* * * * * * * * * * * /!\ AUTOMATIC EOF TREATMENT! /!\ * * * * * * * * * * * *\
 * * AT THE ALL END OF FILES, I AM ADDING A SPECIAL BYTE <0X1A> TO END THE  * *
 * *                       FILE IN DOS, CP/M SYSTEMS                        * *
 * *   "//" FOR HANDLING THE BYTE IN MODERN COMPILERS AND #define IS FOR    * *
 * *       HANDLING "//" SYNTAX WHICH IS NOT SUPPORTED ON OLD SYSTEMS       * *
\* * * * * * * * * * * * * * * * * * *  * * * * * * * * * * * * * * * * * * * */
#undef __CMT__END_OF_FILE__
#define __CMT__END_OF_FILE__ //
