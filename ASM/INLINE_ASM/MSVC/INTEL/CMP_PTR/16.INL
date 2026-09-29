#ifndef ASM_H
#error "ERROR - PLEASE DON'T USE THIS LIBRARY DIRECTLY!!!"
#endif /* !ASM_H */

/* ************************** [v] 8-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define CMP_AL_FROM_PTR_(VALUE) cmp al, byte ptr [VALUE]
#define CMP_BL_FROM_PTR_(VALUE) cmp bl, byte ptr [VALUE]
#define CMP_CL_FROM_PTR_(VALUE) cmp cl, byte ptr [VALUE]
#define CMP_DL_FROM_PTR_(VALUE) cmp dl, byte ptr [VALUE]

#define CMP_AL_TO_PTR_(VALUE) cmp byte ptr [VALUE], al
#define CMP_BL_TO_PTR_(VALUE) cmp byte ptr [VALUE], bl
#define CMP_CL_TO_PTR_(VALUE) cmp byte ptr [VALUE], cl
#define CMP_DL_TO_PTR_(VALUE) cmp byte ptr [VALUE], dl

#define CMP_AL_FROM_PTR_BX cmp al, byte ptr [bx]
#define CMP_AL_FROM_PTR_BP cmp al, byte ptr [bp]
#define CMP_AL_FROM_PTR_SI cmp al, byte ptr [si]
#define CMP_AL_FROM_PTR_DI cmp al, byte ptr [di]

#define CMP_BL_FROM_PTR_BX cmp bl, byte ptr [bx]
#define CMP_BL_FROM_PTR_BP cmp bl, byte ptr [bp]
#define CMP_BL_FROM_PTR_SI cmp bl, byte ptr [si]
#define CMP_BL_FROM_PTR_DI cmp bl, byte ptr [di]

#define CMP_CL_FROM_PTR_BX cmp cl, byte ptr [bx]
#define CMP_CL_FROM_PTR_BP cmp cl, byte ptr [bp]
#define CMP_CL_FROM_PTR_SI cmp cl, byte ptr [si]
#define CMP_CL_FROM_PTR_DI cmp cl, byte ptr [di]

#define CMP_DL_FROM_PTR_BX cmp dl, byte ptr [bx]
#define CMP_DL_FROM_PTR_BP cmp dl, byte ptr [bp]
#define CMP_DL_FROM_PTR_SI cmp dl, byte ptr [si]
#define CMP_DL_FROM_PTR_DI cmp dl, byte ptr [di]

#define CMP_AL_TO_PTR_BX cmp byte ptr [bx], al
#define CMP_AL_TO_PTR_BP cmp byte ptr [bp], al
#define CMP_AL_TO_PTR_SI cmp byte ptr [si], al
#define CMP_AL_TO_PTR_DI cmp byte ptr [di], al

#define CMP_BL_TO_PTR_BX cmp byte ptr [bx], bl
#define CMP_BL_TO_PTR_BP cmp byte ptr [bp], bl
#define CMP_BL_TO_PTR_SI cmp byte ptr [si], bl
#define CMP_BL_TO_PTR_DI cmp byte ptr [di], bl

#define CMP_CL_TO_PTR_BX cmp byte ptr [bx], cl
#define CMP_CL_TO_PTR_BP cmp byte ptr [bp], cl
#define CMP_CL_TO_PTR_SI cmp byte ptr [si], cl
#define CMP_CL_TO_PTR_DI cmp byte ptr [di], cl

#define CMP_DL_TO_PTR_BX cmp byte ptr [bx], dl
#define CMP_DL_TO_PTR_BP cmp byte ptr [bp], dl
#define CMP_DL_TO_PTR_SI cmp byte ptr [si], dl
#define CMP_DL_TO_PTR_DI cmp byte ptr [di], dl

#define CMP_AL_FROM_PTR_BX_(VALUE) cmp al, byte ptr [bx + VALUE]
#define CMP_AL_FROM_PTR_BP_(VALUE) cmp al, byte ptr [bp + VALUE]
#define CMP_AL_FROM_PTR_SI_(VALUE) cmp al, byte ptr [si + VALUE]
#define CMP_AL_FROM_PTR_DI_(VALUE) cmp al, byte ptr [di + VALUE]

#define CMP_BL_FROM_PTR_BX_(VALUE) cmp bl, byte ptr [bx + VALUE]
#define CMP_BL_FROM_PTR_BP_(VALUE) cmp bl, byte ptr [bp + VALUE]
#define CMP_BL_FROM_PTR_SI_(VALUE) cmp bl, byte ptr [si + VALUE]
#define CMP_BL_FROM_PTR_DI_(VALUE) cmp bl, byte ptr [di + VALUE]

#define CMP_CL_FROM_PTR_BX_(VALUE) cmp cl, byte ptr [bx + VALUE]
#define CMP_CL_FROM_PTR_BP_(VALUE) cmp cl, byte ptr [bp + VALUE]
#define CMP_CL_FROM_PTR_SI_(VALUE) cmp cl, byte ptr [si + VALUE]
#define CMP_CL_FROM_PTR_DI_(VALUE) cmp cl, byte ptr [di + VALUE]

#define CMP_DL_FROM_PTR_BX_(VALUE) cmp dl, byte ptr [bx + VALUE]
#define CMP_DL_FROM_PTR_BP_(VALUE) cmp dl, byte ptr [bp + VALUE]
#define CMP_DL_FROM_PTR_SI_(VALUE) cmp dl, byte ptr [si + VALUE]
#define CMP_DL_FROM_PTR_DI_(VALUE) cmp dl, byte ptr [di + VALUE]

#define CMP_AL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], al
#define CMP_AL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], al
#define CMP_AL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], al
#define CMP_AL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], al

#define CMP_BL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], bl
#define CMP_BL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], bl
#define CMP_BL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], bl
#define CMP_BL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], bl

#define CMP_CL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], cl
#define CMP_CL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], cl
#define CMP_CL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], cl
#define CMP_CL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], cl

#define CMP_DL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], dl
#define CMP_DL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], dl
#define CMP_DL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], dl
#define CMP_DL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], dl
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AL_FROM_PTR_(VALUE) cmp al, byte ptr [VALUE]
#define CMP_BL_FROM_PTR_(VALUE) cmp bl, byte ptr [VALUE]
#define CMP_CL_FROM_PTR_(VALUE) cmp cl, byte ptr [VALUE]
#define CMP_DL_FROM_PTR_(VALUE) cmp dl, byte ptr [VALUE]

#define CMP_AL_TO_PTR_(VALUE) cmp byte ptr [VALUE], al
#define CMP_BL_TO_PTR_(VALUE) cmp byte ptr [VALUE], bl
#define CMP_CL_TO_PTR_(VALUE) cmp byte ptr [VALUE], cl
#define CMP_DL_TO_PTR_(VALUE) cmp byte ptr [VALUE], dl

#define CMP_AL_FROM_PTR_EAX cmp al, byte ptr [eax]
#define CMP_AL_FROM_PTR_EBX cmp al, byte ptr [ebx]
#define CMP_AL_FROM_PTR_ECX cmp al, byte ptr [ecx]
#define CMP_AL_FROM_PTR_EDX cmp al, byte ptr [edx]
#define CMP_AL_FROM_PTR_EDI cmp al, byte ptr [edi]
#define CMP_AL_FROM_PTR_ESI cmp al, byte ptr [esi]
#define CMP_AL_FROM_PTR_EBP cmp al, byte ptr [ebp]
#define CMP_AL_FROM_PTR_ESP cmp al, byte ptr [esp]
#define CMP_AL_FROM_PTR_BX cmp al, byte ptr [bx]
#define CMP_AL_FROM_PTR_BP cmp al, byte ptr [bp]
#define CMP_AL_FROM_PTR_SI cmp al, byte ptr [si]
#define CMP_AL_FROM_PTR_DI cmp al, byte ptr [di]

#define CMP_BL_FROM_PTR_EAX cmp bl, byte ptr [eax]
#define CMP_BL_FROM_PTR_EBX cmp bl, byte ptr [ebx]
#define CMP_BL_FROM_PTR_ECX cmp bl, byte ptr [ecx]
#define CMP_BL_FROM_PTR_EDX cmp bl, byte ptr [edx]
#define CMP_BL_FROM_PTR_EDI cmp bl, byte ptr [edi]
#define CMP_BL_FROM_PTR_ESI cmp bl, byte ptr [esi]
#define CMP_BL_FROM_PTR_EBP cmp bl, byte ptr [ebp]
#define CMP_BL_FROM_PTR_ESP cmp bl, byte ptr [esp]
#define CMP_BL_FROM_PTR_BX cmp bl, byte ptr [bx]
#define CMP_BL_FROM_PTR_BP cmp bl, byte ptr [bp]
#define CMP_BL_FROM_PTR_SI cmp bl, byte ptr [si]
#define CMP_BL_FROM_PTR_DI cmp bl, byte ptr [di]

#define CMP_CL_FROM_PTR_EAX cmp cl, byte ptr [eax]
#define CMP_CL_FROM_PTR_EBX cmp cl, byte ptr [ebx]
#define CMP_CL_FROM_PTR_ECX cmp cl, byte ptr [ecx]
#define CMP_CL_FROM_PTR_EDX cmp cl, byte ptr [edx]
#define CMP_CL_FROM_PTR_EDI cmp cl, byte ptr [edi]
#define CMP_CL_FROM_PTR_ESI cmp cl, byte ptr [esi]
#define CMP_CL_FROM_PTR_EBP cmp cl, byte ptr [ebp]
#define CMP_CL_FROM_PTR_ESP cmp cl, byte ptr [esp]
#define CMP_CL_FROM_PTR_BX cmp cl, byte ptr [bx]
#define CMP_CL_FROM_PTR_BP cmp cl, byte ptr [bp]
#define CMP_CL_FROM_PTR_SI cmp cl, byte ptr [si]
#define CMP_CL_FROM_PTR_DI cmp cl, byte ptr [di]

#define CMP_DL_FROM_PTR_EAX cmp dl, byte ptr [eax]
#define CMP_DL_FROM_PTR_EBX cmp dl, byte ptr [ebx]
#define CMP_DL_FROM_PTR_ECX cmp dl, byte ptr [ecx]
#define CMP_DL_FROM_PTR_EDX cmp dl, byte ptr [edx]
#define CMP_DL_FROM_PTR_EDI cmp dl, byte ptr [edi]
#define CMP_DL_FROM_PTR_ESI cmp dl, byte ptr [esi]
#define CMP_DL_FROM_PTR_EBP cmp dl, byte ptr [ebp]
#define CMP_DL_FROM_PTR_ESP cmp dl, byte ptr [esp]
#define CMP_DL_FROM_PTR_BX cmp dl, byte ptr [bx]
#define CMP_DL_FROM_PTR_BP cmp dl, byte ptr [bp]
#define CMP_DL_FROM_PTR_SI cmp dl, byte ptr [si]
#define CMP_DL_FROM_PTR_DI cmp dl, byte ptr [di]

#define CMP_AL_TO_PTR_EAX cmp byte ptr [eax], al
#define CMP_AL_TO_PTR_EBX cmp byte ptr [ebx], al
#define CMP_AL_TO_PTR_ECX cmp byte ptr [ecx], al
#define CMP_AL_TO_PTR_EDX cmp byte ptr [edx], al
#define CMP_AL_TO_PTR_EDI cmp byte ptr [edi], al
#define CMP_AL_TO_PTR_ESI cmp byte ptr [esi], al
#define CMP_AL_TO_PTR_EBP cmp byte ptr [ebp], al
#define CMP_AL_TO_PTR_ESP cmp byte ptr [esp], al
#define CMP_AL_TO_PTR_BX cmp byte ptr [bx], al
#define CMP_AL_TO_PTR_BP cmp byte ptr [bp], al
#define CMP_AL_TO_PTR_SI cmp byte ptr [si], al
#define CMP_AL_TO_PTR_DI cmp byte ptr [di], al

#define CMP_BL_TO_PTR_EAX cmp byte ptr [eax], bl
#define CMP_BL_TO_PTR_EBX cmp byte ptr [ebx], bl
#define CMP_BL_TO_PTR_ECX cmp byte ptr [ecx], bl
#define CMP_BL_TO_PTR_EDX cmp byte ptr [edx], bl
#define CMP_BL_TO_PTR_EDI cmp byte ptr [edi], bl
#define CMP_BL_TO_PTR_ESI cmp byte ptr [esi], bl
#define CMP_BL_TO_PTR_EBP cmp byte ptr [ebp], bl
#define CMP_BL_TO_PTR_ESP cmp byte ptr [esp], bl
#define CMP_BL_TO_PTR_BX cmp byte ptr [bx], bl
#define CMP_BL_TO_PTR_BP cmp byte ptr [bp], bl
#define CMP_BL_TO_PTR_SI cmp byte ptr [si], bl
#define CMP_BL_TO_PTR_DI cmp byte ptr [di], bl

#define CMP_CL_TO_PTR_EAX cmp byte ptr [eax], cl
#define CMP_CL_TO_PTR_EBX cmp byte ptr [ebx], cl
#define CMP_CL_TO_PTR_ECX cmp byte ptr [ecx], cl
#define CMP_CL_TO_PTR_EDX cmp byte ptr [edx], cl
#define CMP_CL_TO_PTR_EDI cmp byte ptr [edi], cl
#define CMP_CL_TO_PTR_ESI cmp byte ptr [esi], cl
#define CMP_CL_TO_PTR_EBP cmp byte ptr [ebp], cl
#define CMP_CL_TO_PTR_ESP cmp byte ptr [esp], cl
#define CMP_CL_TO_PTR_BX cmp byte ptr [bx], cl
#define CMP_CL_TO_PTR_BP cmp byte ptr [bp], cl
#define CMP_CL_TO_PTR_SI cmp byte ptr [si], cl
#define CMP_CL_TO_PTR_DI cmp byte ptr [di], cl

#define CMP_DL_TO_PTR_EAX cmp byte ptr [eax], dl
#define CMP_DL_TO_PTR_EBX cmp byte ptr [ebx], dl
#define CMP_DL_TO_PTR_ECX cmp byte ptr [ecx], dl
#define CMP_DL_TO_PTR_EDX cmp byte ptr [edx], dl
#define CMP_DL_TO_PTR_EDI cmp byte ptr [edi], dl
#define CMP_DL_TO_PTR_ESI cmp byte ptr [esi], dl
#define CMP_DL_TO_PTR_EBP cmp byte ptr [ebp], dl
#define CMP_DL_TO_PTR_ESP cmp byte ptr [esp], dl
#define CMP_DL_TO_PTR_BX cmp byte ptr [bx], dl
#define CMP_DL_TO_PTR_BP cmp byte ptr [bp], dl
#define CMP_DL_TO_PTR_SI cmp byte ptr [si], dl
#define CMP_DL_TO_PTR_DI cmp byte ptr [di], dl

#define CMP_AL_FROM_PTR_EAX_(VALUE) cmp al, byte ptr [eax + VALUE]
#define CMP_AL_FROM_PTR_EBX_(VALUE) cmp al, byte ptr [ebx + VALUE]
#define CMP_AL_FROM_PTR_ECX_(VALUE) cmp al, byte ptr [ecx + VALUE]
#define CMP_AL_FROM_PTR_EDX_(VALUE) cmp al, byte ptr [edx + VALUE]
#define CMP_AL_FROM_PTR_EDI_(VALUE) cmp al, byte ptr [edi + VALUE]
#define CMP_AL_FROM_PTR_ESI_(VALUE) cmp al, byte ptr [esi + VALUE]
#define CMP_AL_FROM_PTR_EBP_(VALUE) cmp al, byte ptr [ebp + VALUE]
#define CMP_AL_FROM_PTR_ESP_(VALUE) cmp al, byte ptr [esp + VALUE]
#define CMP_AL_FROM_PTR_BX_(VALUE) cmp al, byte ptr [bx + VALUE]
#define CMP_AL_FROM_PTR_BP_(VALUE) cmp al, byte ptr [bp + VALUE]
#define CMP_AL_FROM_PTR_SI_(VALUE) cmp al, byte ptr [si + VALUE]
#define CMP_AL_FROM_PTR_DI_(VALUE) cmp al, byte ptr [di + VALUE]

#define CMP_BL_FROM_PTR_EAX_(VALUE) cmp bl, byte ptr [eax + VALUE]
#define CMP_BL_FROM_PTR_EBX_(VALUE) cmp bl, byte ptr [ebx + VALUE]
#define CMP_BL_FROM_PTR_ECX_(VALUE) cmp bl, byte ptr [ecx + VALUE]
#define CMP_BL_FROM_PTR_EDX_(VALUE) cmp bl, byte ptr [edx + VALUE]
#define CMP_BL_FROM_PTR_EDI_(VALUE) cmp bl, byte ptr [edi + VALUE]
#define CMP_BL_FROM_PTR_ESI_(VALUE) cmp bl, byte ptr [esi + VALUE]
#define CMP_BL_FROM_PTR_EBP_(VALUE) cmp bl, byte ptr [ebp + VALUE]
#define CMP_BL_FROM_PTR_ESP_(VALUE) cmp bl, byte ptr [esp + VALUE]
#define CMP_BL_FROM_PTR_BX_(VALUE) cmp bl, byte ptr [bx + VALUE]
#define CMP_BL_FROM_PTR_BP_(VALUE) cmp bl, byte ptr [bp + VALUE]
#define CMP_BL_FROM_PTR_SI_(VALUE) cmp bl, byte ptr [si + VALUE]
#define CMP_BL_FROM_PTR_DI_(VALUE) cmp bl, byte ptr [di + VALUE]

#define CMP_CL_FROM_PTR_EAX_(VALUE) cmp cl, byte ptr [eax + VALUE]
#define CMP_CL_FROM_PTR_EBX_(VALUE) cmp cl, byte ptr [ebx + VALUE]
#define CMP_CL_FROM_PTR_ECX_(VALUE) cmp cl, byte ptr [ecx + VALUE]
#define CMP_CL_FROM_PTR_EDX_(VALUE) cmp cl, byte ptr [edx + VALUE]
#define CMP_CL_FROM_PTR_EDI_(VALUE) cmp cl, byte ptr [edi + VALUE]
#define CMP_CL_FROM_PTR_ESI_(VALUE) cmp cl, byte ptr [esi + VALUE]
#define CMP_CL_FROM_PTR_EBP_(VALUE) cmp cl, byte ptr [ebp + VALUE]
#define CMP_CL_FROM_PTR_ESP_(VALUE) cmp cl, byte ptr [esp + VALUE]
#define CMP_CL_FROM_PTR_BX_(VALUE) cmp cl, byte ptr [bx + VALUE]
#define CMP_CL_FROM_PTR_BP_(VALUE) cmp cl, byte ptr [bp + VALUE]
#define CMP_CL_FROM_PTR_SI_(VALUE) cmp cl, byte ptr [si + VALUE]
#define CMP_CL_FROM_PTR_DI_(VALUE) cmp cl, byte ptr [di + VALUE]

#define CMP_DL_FROM_PTR_EAX_(VALUE) cmp dl, byte ptr [eax + VALUE]
#define CMP_DL_FROM_PTR_EBX_(VALUE) cmp dl, byte ptr [ebx + VALUE]
#define CMP_DL_FROM_PTR_ECX_(VALUE) cmp dl, byte ptr [ecx + VALUE]
#define CMP_DL_FROM_PTR_EDX_(VALUE) cmp dl, byte ptr [edx + VALUE]
#define CMP_DL_FROM_PTR_EDI_(VALUE) cmp dl, byte ptr [edi + VALUE]
#define CMP_DL_FROM_PTR_ESI_(VALUE) cmp dl, byte ptr [esi + VALUE]
#define CMP_DL_FROM_PTR_EBP_(VALUE) cmp dl, byte ptr [ebp + VALUE]
#define CMP_DL_FROM_PTR_ESP_(VALUE) cmp dl, byte ptr [esp + VALUE]
#define CMP_DL_FROM_PTR_BX_(VALUE) cmp dl, byte ptr [bx + VALUE]
#define CMP_DL_FROM_PTR_BP_(VALUE) cmp dl, byte ptr [bp + VALUE]
#define CMP_DL_FROM_PTR_SI_(VALUE) cmp dl, byte ptr [si + VALUE]
#define CMP_DL_FROM_PTR_DI_(VALUE) cmp dl, byte ptr [di + VALUE]

#define CMP_AL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], al
#define CMP_AL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], al
#define CMP_AL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], al
#define CMP_AL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], al
#define CMP_AL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], al
#define CMP_AL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], al
#define CMP_AL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], al
#define CMP_AL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], al
#define CMP_AL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], al
#define CMP_AL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], al
#define CMP_AL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], al
#define CMP_AL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], al

#define CMP_BL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], bl
#define CMP_BL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], bl
#define CMP_BL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], bl
#define CMP_BL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], bl
#define CMP_BL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], bl
#define CMP_BL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], bl
#define CMP_BL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], bl
#define CMP_BL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], bl
#define CMP_BL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], bl
#define CMP_BL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], bl
#define CMP_BL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], bl
#define CMP_BL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], bl

#define CMP_CL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], cl
#define CMP_CL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], cl
#define CMP_CL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], cl
#define CMP_CL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], cl
#define CMP_CL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], cl
#define CMP_CL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], cl
#define CMP_CL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], cl
#define CMP_CL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], cl
#define CMP_CL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], cl
#define CMP_CL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], cl
#define CMP_CL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], cl
#define CMP_CL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], cl

#define CMP_DL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], dl
#define CMP_DL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], dl
#define CMP_DL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], dl
#define CMP_DL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], dl
#define CMP_DL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], dl
#define CMP_DL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], dl
#define CMP_DL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], dl
#define CMP_DL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], dl
#define CMP_DL_TO_PTR_BX_(VALUE) cmp byte ptr [bx + VALUE], dl
#define CMP_DL_TO_PTR_BP_(VALUE) cmp byte ptr [bp + VALUE], dl
#define CMP_DL_TO_PTR_SI_(VALUE) cmp byte ptr [si + VALUE], dl
#define CMP_DL_TO_PTR_DI_(VALUE) cmp byte ptr [di + VALUE], dl
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AL_FROM_PTR_(VALUE) cmp al, byte ptr [VALUE]
#define CMP_BL_FROM_PTR_(VALUE) cmp bl, byte ptr [VALUE]
#define CMP_CL_FROM_PTR_(VALUE) cmp cl, byte ptr [VALUE]
#define CMP_DL_FROM_PTR_(VALUE) cmp dl, byte ptr [VALUE]
#define CMP_DIL_FROM_PTR_(VALUE) cmp dil, byte ptr [VALUE]
#define CMP_SIL_FROM_PTR_(VALUE) cmp sil, byte ptr [VALUE]
#define CMP_BPL_FROM_PTR_(VALUE) cmp bpl, byte ptr [VALUE]
#define CMP_SPL_FROM_PTR_(VALUE) cmp spl, byte ptr [VALUE]
#define CMP_R8B_FROM_PTR_(VALUE) cmp r8b, byte ptr [VALUE]
#define CMP_R9B_FROM_PTR_(VALUE) cmp r9b, byte ptr [VALUE]
#define CMP_R10B_FROM_PTR_(VALUE) cmp r10b, byte ptr [VALUE]
#define CMP_R11B_FROM_PTR_(VALUE) cmp r11b, byte ptr [VALUE]
#define CMP_R12B_FROM_PTR_(VALUE) cmp r12b, byte ptr [VALUE]
#define CMP_R13B_FROM_PTR_(VALUE) cmp r13b, byte ptr [VALUE]
#define CMP_R14B_FROM_PTR_(VALUE) cmp r14b, byte ptr [VALUE]
#define CMP_R15B_FROM_PTR_(VALUE) cmp r15b, byte ptr [VALUE]

#define CMP_AL_TO_PTR_(VALUE) cmp byte ptr [VALUE], al
#define CMP_BL_TO_PTR_(VALUE) cmp byte ptr [VALUE], bl
#define CMP_CL_TO_PTR_(VALUE) cmp byte ptr [VALUE], cl
#define CMP_DL_TO_PTR_(VALUE) cmp byte ptr [VALUE], dl
#define CMP_DIL_TO_PTR_(VALUE) cmp byte ptr [VALUE], dil
#define CMP_SIL_TO_PTR_(VALUE) cmp byte ptr [VALUE], sil
#define CMP_BPL_TO_PTR_(VALUE) cmp byte ptr [VALUE], bpl
#define CMP_SPL_TO_PTR_(VALUE) cmp byte ptr [VALUE], spl
#define CMP_R8B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r8b
#define CMP_R9B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r9b
#define CMP_R10B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r10b
#define CMP_R11B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r11b
#define CMP_R12B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r12b
#define CMP_R13B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r13b
#define CMP_R14B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r14b
#define CMP_R15B_TO_PTR_(VALUE) cmp byte ptr [VALUE], r15b

#define CMP_AL_FROM_PTR_RAX cmp al, byte ptr [rax]
#define CMP_AL_FROM_PTR_RBX cmp al, byte ptr [rbx]
#define CMP_AL_FROM_PTR_RCX cmp al, byte ptr [rcx]
#define CMP_AL_FROM_PTR_RDX cmp al, byte ptr [rdx]
#define CMP_AL_FROM_PTR_RDI cmp al, byte ptr [rdi]
#define CMP_AL_FROM_PTR_RSI cmp al, byte ptr [rsi]
#define CMP_AL_FROM_PTR_RBP cmp al, byte ptr [rbp]
#define CMP_AL_FROM_PTR_RSP cmp al, byte ptr [rsp]
#define CMP_AL_FROM_PTR_R8 cmp al, byte ptr [r8]
#define CMP_AL_FROM_PTR_R9 cmp al, byte ptr [r9]
#define CMP_AL_FROM_PTR_R10 cmp al, byte ptr [r10]
#define CMP_AL_FROM_PTR_R11 cmp al, byte ptr [r11]
#define CMP_AL_FROM_PTR_R12 cmp al, byte ptr [r12]
#define CMP_AL_FROM_PTR_R13 cmp al, byte ptr [r13]
#define CMP_AL_FROM_PTR_R14 cmp al, byte ptr [r14]
#define CMP_AL_FROM_PTR_R15 cmp al, byte ptr [r15]
#define CMP_AL_FROM_PTR_EAX cmp al, byte ptr [eax]
#define CMP_AL_FROM_PTR_EBX cmp al, byte ptr [ebx]
#define CMP_AL_FROM_PTR_ECX cmp al, byte ptr [ecx]
#define CMP_AL_FROM_PTR_EDX cmp al, byte ptr [edx]
#define CMP_AL_FROM_PTR_EDI cmp al, byte ptr [edi]
#define CMP_AL_FROM_PTR_ESI cmp al, byte ptr [esi]
#define CMP_AL_FROM_PTR_EBP cmp al, byte ptr [ebp]
#define CMP_AL_FROM_PTR_ESP cmp al, byte ptr [esp]

#define CMP_BL_FROM_PTR_RAX cmp bl, byte ptr [rax]
#define CMP_BL_FROM_PTR_RBX cmp bl, byte ptr [rbx]
#define CMP_BL_FROM_PTR_RCX cmp bl, byte ptr [rcx]
#define CMP_BL_FROM_PTR_RDX cmp bl, byte ptr [rdx]
#define CMP_BL_FROM_PTR_RDI cmp bl, byte ptr [rdi]
#define CMP_BL_FROM_PTR_RSI cmp bl, byte ptr [rsi]
#define CMP_BL_FROM_PTR_RBP cmp bl, byte ptr [rbp]
#define CMP_BL_FROM_PTR_RSP cmp bl, byte ptr [rsp]
#define CMP_BL_FROM_PTR_R8 cmp bl, byte ptr [r8]
#define CMP_BL_FROM_PTR_R9 cmp bl, byte ptr [r9]
#define CMP_BL_FROM_PTR_R10 cmp bl, byte ptr [r10]
#define CMP_BL_FROM_PTR_R11 cmp bl, byte ptr [r11]
#define CMP_BL_FROM_PTR_R12 cmp bl, byte ptr [r12]
#define CMP_BL_FROM_PTR_R13 cmp bl, byte ptr [r13]
#define CMP_BL_FROM_PTR_R14 cmp bl, byte ptr [r14]
#define CMP_BL_FROM_PTR_R15 cmp bl, byte ptr [r15]
#define CMP_BL_FROM_PTR_EAX cmp bl, byte ptr [eax]
#define CMP_BL_FROM_PTR_EBX cmp bl, byte ptr [ebx]
#define CMP_BL_FROM_PTR_ECX cmp bl, byte ptr [ecx]
#define CMP_BL_FROM_PTR_EDX cmp bl, byte ptr [edx]
#define CMP_BL_FROM_PTR_EDI cmp bl, byte ptr [edi]
#define CMP_BL_FROM_PTR_ESI cmp bl, byte ptr [esi]
#define CMP_BL_FROM_PTR_EBP cmp bl, byte ptr [ebp]
#define CMP_BL_FROM_PTR_ESP cmp bl, byte ptr [esp]

#define CMP_CL_FROM_PTR_RAX cmp cl, byte ptr [rax]
#define CMP_CL_FROM_PTR_RBX cmp cl, byte ptr [rbx]
#define CMP_CL_FROM_PTR_RCX cmp cl, byte ptr [rcx]
#define CMP_CL_FROM_PTR_RDX cmp cl, byte ptr [rdx]
#define CMP_CL_FROM_PTR_RDI cmp cl, byte ptr [rdi]
#define CMP_CL_FROM_PTR_RSI cmp cl, byte ptr [rsi]
#define CMP_CL_FROM_PTR_RBP cmp cl, byte ptr [rbp]
#define CMP_CL_FROM_PTR_RSP cmp cl, byte ptr [rsp]
#define CMP_CL_FROM_PTR_R8 cmp cl, byte ptr [r8]
#define CMP_CL_FROM_PTR_R9 cmp cl, byte ptr [r9]
#define CMP_CL_FROM_PTR_R10 cmp cl, byte ptr [r10]
#define CMP_CL_FROM_PTR_R11 cmp cl, byte ptr [r11]
#define CMP_CL_FROM_PTR_R12 cmp cl, byte ptr [r12]
#define CMP_CL_FROM_PTR_R13 cmp cl, byte ptr [r13]
#define CMP_CL_FROM_PTR_R14 cmp cl, byte ptr [r14]
#define CMP_CL_FROM_PTR_R15 cmp cl, byte ptr [r15]
#define CMP_CL_FROM_PTR_EAX cmp cl, byte ptr [eax]
#define CMP_CL_FROM_PTR_EBX cmp cl, byte ptr [ebx]
#define CMP_CL_FROM_PTR_ECX cmp cl, byte ptr [ecx]
#define CMP_CL_FROM_PTR_EDX cmp cl, byte ptr [edx]
#define CMP_CL_FROM_PTR_EDI cmp cl, byte ptr [edi]
#define CMP_CL_FROM_PTR_ESI cmp cl, byte ptr [esi]
#define CMP_CL_FROM_PTR_EBP cmp cl, byte ptr [ebp]
#define CMP_CL_FROM_PTR_ESP cmp cl, byte ptr [esp]

#define CMP_DL_FROM_PTR_RAX cmp dl, byte ptr [rax]
#define CMP_DL_FROM_PTR_RBX cmp dl, byte ptr [rbx]
#define CMP_DL_FROM_PTR_RCX cmp dl, byte ptr [rcx]
#define CMP_DL_FROM_PTR_RDX cmp dl, byte ptr [rdx]
#define CMP_DL_FROM_PTR_RDI cmp dl, byte ptr [rdi]
#define CMP_DL_FROM_PTR_RSI cmp dl, byte ptr [rsi]
#define CMP_DL_FROM_PTR_RBP cmp dl, byte ptr [rbp]
#define CMP_DL_FROM_PTR_RSP cmp dl, byte ptr [rsp]
#define CMP_DL_FROM_PTR_R8 cmp dl, byte ptr [r8]
#define CMP_DL_FROM_PTR_R9 cmp dl, byte ptr [r9]
#define CMP_DL_FROM_PTR_R10 cmp dl, byte ptr [r10]
#define CMP_DL_FROM_PTR_R11 cmp dl, byte ptr [r11]
#define CMP_DL_FROM_PTR_R12 cmp dl, byte ptr [r12]
#define CMP_DL_FROM_PTR_R13 cmp dl, byte ptr [r13]
#define CMP_DL_FROM_PTR_R14 cmp dl, byte ptr [r14]
#define CMP_DL_FROM_PTR_R15 cmp dl, byte ptr [r15]
#define CMP_DL_FROM_PTR_EAX cmp dl, byte ptr [eax]
#define CMP_DL_FROM_PTR_EBX cmp dl, byte ptr [ebx]
#define CMP_DL_FROM_PTR_ECX cmp dl, byte ptr [ecx]
#define CMP_DL_FROM_PTR_EDX cmp dl, byte ptr [edx]
#define CMP_DL_FROM_PTR_EDI cmp dl, byte ptr [edi]
#define CMP_DL_FROM_PTR_ESI cmp dl, byte ptr [esi]
#define CMP_DL_FROM_PTR_EBP cmp dl, byte ptr [ebp]
#define CMP_DL_FROM_PTR_ESP cmp dl, byte ptr [esp]

#define CMP_DIL_FROM_PTR_RAX cmp dil, byte ptr [rax]
#define CMP_DIL_FROM_PTR_RBX cmp dil, byte ptr [rbx]
#define CMP_DIL_FROM_PTR_RCX cmp dil, byte ptr [rcx]
#define CMP_DIL_FROM_PTR_RDX cmp dil, byte ptr [rdx]
#define CMP_DIL_FROM_PTR_RDI cmp dil, byte ptr [rdi]
#define CMP_DIL_FROM_PTR_RSI cmp dil, byte ptr [rsi]
#define CMP_DIL_FROM_PTR_RBP cmp dil, byte ptr [rbp]
#define CMP_DIL_FROM_PTR_RSP cmp dil, byte ptr [rsp]
#define CMP_DIL_FROM_PTR_R8 cmp dil, byte ptr [r8]
#define CMP_DIL_FROM_PTR_R9 cmp dil, byte ptr [r9]
#define CMP_DIL_FROM_PTR_R10 cmp dil, byte ptr [r10]
#define CMP_DIL_FROM_PTR_R11 cmp dil, byte ptr [r11]
#define CMP_DIL_FROM_PTR_R12 cmp dil, byte ptr [r12]
#define CMP_DIL_FROM_PTR_R13 cmp dil, byte ptr [r13]
#define CMP_DIL_FROM_PTR_R14 cmp dil, byte ptr [r14]
#define CMP_DIL_FROM_PTR_R15 cmp dil, byte ptr [r15]
#define CMP_DIL_FROM_PTR_EAX cmp dil, byte ptr [eax]
#define CMP_DIL_FROM_PTR_EBX cmp dil, byte ptr [ebx]
#define CMP_DIL_FROM_PTR_ECX cmp dil, byte ptr [ecx]
#define CMP_DIL_FROM_PTR_EDX cmp dil, byte ptr [edx]
#define CMP_DIL_FROM_PTR_EDI cmp dil, byte ptr [edi]
#define CMP_DIL_FROM_PTR_ESI cmp dil, byte ptr [esi]
#define CMP_DIL_FROM_PTR_EBP cmp dil, byte ptr [ebp]
#define CMP_DIL_FROM_PTR_ESP cmp dil, byte ptr [esp]

#define CMP_SIL_FROM_PTR_RAX cmp sil, byte ptr [rax]
#define CMP_SIL_FROM_PTR_RBX cmp sil, byte ptr [rbx]
#define CMP_SIL_FROM_PTR_RCX cmp sil, byte ptr [rcx]
#define CMP_SIL_FROM_PTR_RDX cmp sil, byte ptr [rdx]
#define CMP_SIL_FROM_PTR_RDI cmp sil, byte ptr [rdi]
#define CMP_SIL_FROM_PTR_RSI cmp sil, byte ptr [rsi]
#define CMP_SIL_FROM_PTR_RBP cmp sil, byte ptr [rbp]
#define CMP_SIL_FROM_PTR_RSP cmp sil, byte ptr [rsp]
#define CMP_SIL_FROM_PTR_R8 cmp sil, byte ptr [r8]
#define CMP_SIL_FROM_PTR_R9 cmp sil, byte ptr [r9]
#define CMP_SIL_FROM_PTR_R10 cmp sil, byte ptr [r10]
#define CMP_SIL_FROM_PTR_R11 cmp sil, byte ptr [r11]
#define CMP_SIL_FROM_PTR_R12 cmp sil, byte ptr [r12]
#define CMP_SIL_FROM_PTR_R13 cmp sil, byte ptr [r13]
#define CMP_SIL_FROM_PTR_R14 cmp sil, byte ptr [r14]
#define CMP_SIL_FROM_PTR_R15 cmp sil, byte ptr [r15]
#define CMP_SIL_FROM_PTR_EAX cmp sil, byte ptr [eax]
#define CMP_SIL_FROM_PTR_EBX cmp sil, byte ptr [ebx]
#define CMP_SIL_FROM_PTR_ECX cmp sil, byte ptr [ecx]
#define CMP_SIL_FROM_PTR_EDX cmp sil, byte ptr [edx]
#define CMP_SIL_FROM_PTR_EDI cmp sil, byte ptr [edi]
#define CMP_SIL_FROM_PTR_ESI cmp sil, byte ptr [esi]
#define CMP_SIL_FROM_PTR_EBP cmp sil, byte ptr [ebp]
#define CMP_SIL_FROM_PTR_ESP cmp sil, byte ptr [esp]

#define CMP_BPL_FROM_PTR_RAX cmp bpl, byte ptr [rax]
#define CMP_BPL_FROM_PTR_RBX cmp bpl, byte ptr [rbx]
#define CMP_BPL_FROM_PTR_RCX cmp bpl, byte ptr [rcx]
#define CMP_BPL_FROM_PTR_RDX cmp bpl, byte ptr [rdx]
#define CMP_BPL_FROM_PTR_RDI cmp bpl, byte ptr [rdi]
#define CMP_BPL_FROM_PTR_RSI cmp bpl, byte ptr [rsi]
#define CMP_BPL_FROM_PTR_RBP cmp bpl, byte ptr [rbp]
#define CMP_BPL_FROM_PTR_RSP cmp bpl, byte ptr [rsp]
#define CMP_BPL_FROM_PTR_R8 cmp bpl, byte ptr [r8]
#define CMP_BPL_FROM_PTR_R9 cmp bpl, byte ptr [r9]
#define CMP_BPL_FROM_PTR_R10 cmp bpl, byte ptr [r10]
#define CMP_BPL_FROM_PTR_R11 cmp bpl, byte ptr [r11]
#define CMP_BPL_FROM_PTR_R12 cmp bpl, byte ptr [r12]
#define CMP_BPL_FROM_PTR_R13 cmp bpl, byte ptr [r13]
#define CMP_BPL_FROM_PTR_R14 cmp bpl, byte ptr [r14]
#define CMP_BPL_FROM_PTR_R15 cmp bpl, byte ptr [r15]
#define CMP_BPL_FROM_PTR_EAX cmp bpl, byte ptr [eax]
#define CMP_BPL_FROM_PTR_EBX cmp bpl, byte ptr [ebx]
#define CMP_BPL_FROM_PTR_ECX cmp bpl, byte ptr [ecx]
#define CMP_BPL_FROM_PTR_EDX cmp bpl, byte ptr [edx]
#define CMP_BPL_FROM_PTR_EDI cmp bpl, byte ptr [edi]
#define CMP_BPL_FROM_PTR_ESI cmp bpl, byte ptr [esi]
#define CMP_BPL_FROM_PTR_EBP cmp bpl, byte ptr [ebp]
#define CMP_BPL_FROM_PTR_ESP cmp bpl, byte ptr [esp]

#define CMP_SPL_FROM_PTR_RAX cmp spl, byte ptr [rax]
#define CMP_SPL_FROM_PTR_RBX cmp spl, byte ptr [rbx]
#define CMP_SPL_FROM_PTR_RCX cmp spl, byte ptr [rcx]
#define CMP_SPL_FROM_PTR_RDX cmp spl, byte ptr [rdx]
#define CMP_SPL_FROM_PTR_RDI cmp spl, byte ptr [rdi]
#define CMP_SPL_FROM_PTR_RSI cmp spl, byte ptr [rsi]
#define CMP_SPL_FROM_PTR_RBP cmp spl, byte ptr [rbp]
#define CMP_SPL_FROM_PTR_RSP cmp spl, byte ptr [rsp]
#define CMP_SPL_FROM_PTR_R8 cmp spl, byte ptr [r8]
#define CMP_SPL_FROM_PTR_R9 cmp spl, byte ptr [r9]
#define CMP_SPL_FROM_PTR_R10 cmp spl, byte ptr [r10]
#define CMP_SPL_FROM_PTR_R11 cmp spl, byte ptr [r11]
#define CMP_SPL_FROM_PTR_R12 cmp spl, byte ptr [r12]
#define CMP_SPL_FROM_PTR_R13 cmp spl, byte ptr [r13]
#define CMP_SPL_FROM_PTR_R14 cmp spl, byte ptr [r14]
#define CMP_SPL_FROM_PTR_R15 cmp spl, byte ptr [r15]
#define CMP_SPL_FROM_PTR_EAX cmp spl, byte ptr [eax]
#define CMP_SPL_FROM_PTR_EBX cmp spl, byte ptr [ebx]
#define CMP_SPL_FROM_PTR_ECX cmp spl, byte ptr [ecx]
#define CMP_SPL_FROM_PTR_EDX cmp spl, byte ptr [edx]
#define CMP_SPL_FROM_PTR_EDI cmp spl, byte ptr [edi]
#define CMP_SPL_FROM_PTR_ESI cmp spl, byte ptr [esi]
#define CMP_SPL_FROM_PTR_EBP cmp spl, byte ptr [ebp]
#define CMP_SPL_FROM_PTR_ESP cmp spl, byte ptr [esp]

#define CMP_R8B_FROM_PTR_RAX cmp r8b, byte ptr [rax]
#define CMP_R8B_FROM_PTR_RBX cmp r8b, byte ptr [rbx]
#define CMP_R8B_FROM_PTR_RCX cmp r8b, byte ptr [rcx]
#define CMP_R8B_FROM_PTR_RDX cmp r8b, byte ptr [rdx]
#define CMP_R8B_FROM_PTR_RDI cmp r8b, byte ptr [rdi]
#define CMP_R8B_FROM_PTR_RSI cmp r8b, byte ptr [rsi]
#define CMP_R8B_FROM_PTR_RBP cmp r8b, byte ptr [rbp]
#define CMP_R8B_FROM_PTR_RSP cmp r8b, byte ptr [rsp]
#define CMP_R8B_FROM_PTR_R8 cmp r8b, byte ptr [r8]
#define CMP_R8B_FROM_PTR_R9 cmp r8b, byte ptr [r9]
#define CMP_R8B_FROM_PTR_R10 cmp r8b, byte ptr [r10]
#define CMP_R8B_FROM_PTR_R11 cmp r8b, byte ptr [r11]
#define CMP_R8B_FROM_PTR_R12 cmp r8b, byte ptr [r12]
#define CMP_R8B_FROM_PTR_R13 cmp r8b, byte ptr [r13]
#define CMP_R8B_FROM_PTR_R14 cmp r8b, byte ptr [r14]
#define CMP_R8B_FROM_PTR_R15 cmp r8b, byte ptr [r15]
#define CMP_R8B_FROM_PTR_EAX cmp r8b, byte ptr [eax]
#define CMP_R8B_FROM_PTR_EBX cmp r8b, byte ptr [ebx]
#define CMP_R8B_FROM_PTR_ECX cmp r8b, byte ptr [ecx]
#define CMP_R8B_FROM_PTR_EDX cmp r8b, byte ptr [edx]
#define CMP_R8B_FROM_PTR_EDI cmp r8b, byte ptr [edi]
#define CMP_R8B_FROM_PTR_ESI cmp r8b, byte ptr [esi]
#define CMP_R8B_FROM_PTR_EBP cmp r8b, byte ptr [ebp]
#define CMP_R8B_FROM_PTR_ESP cmp r8b, byte ptr [esp]

#define CMP_R9B_FROM_PTR_RAX cmp r9b, byte ptr [rax]
#define CMP_R9B_FROM_PTR_RBX cmp r9b, byte ptr [rbx]
#define CMP_R9B_FROM_PTR_RCX cmp r9b, byte ptr [rcx]
#define CMP_R9B_FROM_PTR_RDX cmp r9b, byte ptr [rdx]
#define CMP_R9B_FROM_PTR_RDI cmp r9b, byte ptr [rdi]
#define CMP_R9B_FROM_PTR_RSI cmp r9b, byte ptr [rsi]
#define CMP_R9B_FROM_PTR_RBP cmp r9b, byte ptr [rbp]
#define CMP_R9B_FROM_PTR_RSP cmp r9b, byte ptr [rsp]
#define CMP_R9B_FROM_PTR_R8 cmp r9b, byte ptr [r8]
#define CMP_R9B_FROM_PTR_R9 cmp r9b, byte ptr [r9]
#define CMP_R9B_FROM_PTR_R10 cmp r9b, byte ptr [r10]
#define CMP_R9B_FROM_PTR_R11 cmp r9b, byte ptr [r11]
#define CMP_R9B_FROM_PTR_R12 cmp r9b, byte ptr [r12]
#define CMP_R9B_FROM_PTR_R13 cmp r9b, byte ptr [r13]
#define CMP_R9B_FROM_PTR_R14 cmp r9b, byte ptr [r14]
#define CMP_R9B_FROM_PTR_R15 cmp r9b, byte ptr [r15]
#define CMP_R9B_FROM_PTR_EAX cmp r9b, byte ptr [eax]
#define CMP_R9B_FROM_PTR_EBX cmp r9b, byte ptr [ebx]
#define CMP_R9B_FROM_PTR_ECX cmp r9b, byte ptr [ecx]
#define CMP_R9B_FROM_PTR_EDX cmp r9b, byte ptr [edx]
#define CMP_R9B_FROM_PTR_EDI cmp r9b, byte ptr [edi]
#define CMP_R9B_FROM_PTR_ESI cmp r9b, byte ptr [esi]
#define CMP_R9B_FROM_PTR_EBP cmp r9b, byte ptr [ebp]
#define CMP_R9B_FROM_PTR_ESP cmp r9b, byte ptr [esp]

#define CMP_R10B_FROM_PTR_RAX cmp r10b, byte ptr [rax]
#define CMP_R10B_FROM_PTR_RBX cmp r10b, byte ptr [rbx]
#define CMP_R10B_FROM_PTR_RCX cmp r10b, byte ptr [rcx]
#define CMP_R10B_FROM_PTR_RDX cmp r10b, byte ptr [rdx]
#define CMP_R10B_FROM_PTR_RDI cmp r10b, byte ptr [rdi]
#define CMP_R10B_FROM_PTR_RSI cmp r10b, byte ptr [rsi]
#define CMP_R10B_FROM_PTR_RBP cmp r10b, byte ptr [rbp]
#define CMP_R10B_FROM_PTR_RSP cmp r10b, byte ptr [rsp]
#define CMP_R10B_FROM_PTR_R8 cmp r10b, byte ptr [r8]
#define CMP_R10B_FROM_PTR_R9 cmp r10b, byte ptr [r9]
#define CMP_R10B_FROM_PTR_R10 cmp r10b, byte ptr [r10]
#define CMP_R10B_FROM_PTR_R11 cmp r10b, byte ptr [r11]
#define CMP_R10B_FROM_PTR_R12 cmp r10b, byte ptr [r12]
#define CMP_R10B_FROM_PTR_R13 cmp r10b, byte ptr [r13]
#define CMP_R10B_FROM_PTR_R14 cmp r10b, byte ptr [r14]
#define CMP_R10B_FROM_PTR_R15 cmp r10b, byte ptr [r15]
#define CMP_R10B_FROM_PTR_EAX cmp r10b, byte ptr [eax]
#define CMP_R10B_FROM_PTR_EBX cmp r10b, byte ptr [ebx]
#define CMP_R10B_FROM_PTR_ECX cmp r10b, byte ptr [ecx]
#define CMP_R10B_FROM_PTR_EDX cmp r10b, byte ptr [edx]
#define CMP_R10B_FROM_PTR_EDI cmp r10b, byte ptr [edi]
#define CMP_R10B_FROM_PTR_ESI cmp r10b, byte ptr [esi]
#define CMP_R10B_FROM_PTR_EBP cmp r10b, byte ptr [ebp]
#define CMP_R10B_FROM_PTR_ESP cmp r10b, byte ptr [esp]

#define CMP_R11B_FROM_PTR_RAX cmp r11b, byte ptr [rax]
#define CMP_R11B_FROM_PTR_RBX cmp r11b, byte ptr [rbx]
#define CMP_R11B_FROM_PTR_RCX cmp r11b, byte ptr [rcx]
#define CMP_R11B_FROM_PTR_RDX cmp r11b, byte ptr [rdx]
#define CMP_R11B_FROM_PTR_RDI cmp r11b, byte ptr [rdi]
#define CMP_R11B_FROM_PTR_RSI cmp r11b, byte ptr [rsi]
#define CMP_R11B_FROM_PTR_RBP cmp r11b, byte ptr [rbp]
#define CMP_R11B_FROM_PTR_RSP cmp r11b, byte ptr [rsp]
#define CMP_R11B_FROM_PTR_R8 cmp r11b, byte ptr [r8]
#define CMP_R11B_FROM_PTR_R9 cmp r11b, byte ptr [r9]
#define CMP_R11B_FROM_PTR_R10 cmp r11b, byte ptr [r10]
#define CMP_R11B_FROM_PTR_R11 cmp r11b, byte ptr [r11]
#define CMP_R11B_FROM_PTR_R12 cmp r11b, byte ptr [r12]
#define CMP_R11B_FROM_PTR_R13 cmp r11b, byte ptr [r13]
#define CMP_R11B_FROM_PTR_R14 cmp r11b, byte ptr [r14]
#define CMP_R11B_FROM_PTR_R15 cmp r11b, byte ptr [r15]
#define CMP_R11B_FROM_PTR_EAX cmp r11b, byte ptr [eax]
#define CMP_R11B_FROM_PTR_EBX cmp r11b, byte ptr [ebx]
#define CMP_R11B_FROM_PTR_ECX cmp r11b, byte ptr [ecx]
#define CMP_R11B_FROM_PTR_EDX cmp r11b, byte ptr [edx]
#define CMP_R11B_FROM_PTR_EDI cmp r11b, byte ptr [edi]
#define CMP_R11B_FROM_PTR_ESI cmp r11b, byte ptr [esi]
#define CMP_R11B_FROM_PTR_EBP cmp r11b, byte ptr [ebp]
#define CMP_R11B_FROM_PTR_ESP cmp r11b, byte ptr [esp]

#define CMP_R12B_FROM_PTR_RAX cmp r12b, byte ptr [rax]
#define CMP_R12B_FROM_PTR_RBX cmp r12b, byte ptr [rbx]
#define CMP_R12B_FROM_PTR_RCX cmp r12b, byte ptr [rcx]
#define CMP_R12B_FROM_PTR_RDX cmp r12b, byte ptr [rdx]
#define CMP_R12B_FROM_PTR_RDI cmp r12b, byte ptr [rdi]
#define CMP_R12B_FROM_PTR_RSI cmp r12b, byte ptr [rsi]
#define CMP_R12B_FROM_PTR_RBP cmp r12b, byte ptr [rbp]
#define CMP_R12B_FROM_PTR_RSP cmp r12b, byte ptr [rsp]
#define CMP_R12B_FROM_PTR_R8 cmp r12b, byte ptr [r8]
#define CMP_R12B_FROM_PTR_R9 cmp r12b, byte ptr [r9]
#define CMP_R12B_FROM_PTR_R10 cmp r12b, byte ptr [r10]
#define CMP_R12B_FROM_PTR_R11 cmp r12b, byte ptr [r11]
#define CMP_R12B_FROM_PTR_R12 cmp r12b, byte ptr [r12]
#define CMP_R12B_FROM_PTR_R13 cmp r12b, byte ptr [r13]
#define CMP_R12B_FROM_PTR_R14 cmp r12b, byte ptr [r14]
#define CMP_R12B_FROM_PTR_R15 cmp r12b, byte ptr [r15]
#define CMP_R12B_FROM_PTR_EAX cmp r12b, byte ptr [eax]
#define CMP_R12B_FROM_PTR_EBX cmp r12b, byte ptr [ebx]
#define CMP_R12B_FROM_PTR_ECX cmp r12b, byte ptr [ecx]
#define CMP_R12B_FROM_PTR_EDX cmp r12b, byte ptr [edx]
#define CMP_R12B_FROM_PTR_EDI cmp r12b, byte ptr [edi]
#define CMP_R12B_FROM_PTR_ESI cmp r12b, byte ptr [esi]
#define CMP_R12B_FROM_PTR_EBP cmp r12b, byte ptr [ebp]
#define CMP_R12B_FROM_PTR_ESP cmp r12b, byte ptr [esp]

#define CMP_R13B_FROM_PTR_RAX cmp r13b, byte ptr [rax]
#define CMP_R13B_FROM_PTR_RBX cmp r13b, byte ptr [rbx]
#define CMP_R13B_FROM_PTR_RCX cmp r13b, byte ptr [rcx]
#define CMP_R13B_FROM_PTR_RDX cmp r13b, byte ptr [rdx]
#define CMP_R13B_FROM_PTR_RDI cmp r13b, byte ptr [rdi]
#define CMP_R13B_FROM_PTR_RSI cmp r13b, byte ptr [rsi]
#define CMP_R13B_FROM_PTR_RBP cmp r13b, byte ptr [rbp]
#define CMP_R13B_FROM_PTR_RSP cmp r13b, byte ptr [rsp]
#define CMP_R13B_FROM_PTR_R8 cmp r13b, byte ptr [r8]
#define CMP_R13B_FROM_PTR_R9 cmp r13b, byte ptr [r9]
#define CMP_R13B_FROM_PTR_R10 cmp r13b, byte ptr [r10]
#define CMP_R13B_FROM_PTR_R11 cmp r13b, byte ptr [r11]
#define CMP_R13B_FROM_PTR_R12 cmp r13b, byte ptr [r12]
#define CMP_R13B_FROM_PTR_R13 cmp r13b, byte ptr [r13]
#define CMP_R13B_FROM_PTR_R14 cmp r13b, byte ptr [r14]
#define CMP_R13B_FROM_PTR_R15 cmp r13b, byte ptr [r15]
#define CMP_R13B_FROM_PTR_EAX cmp r13b, byte ptr [eax]
#define CMP_R13B_FROM_PTR_EBX cmp r13b, byte ptr [ebx]
#define CMP_R13B_FROM_PTR_ECX cmp r13b, byte ptr [ecx]
#define CMP_R13B_FROM_PTR_EDX cmp r13b, byte ptr [edx]
#define CMP_R13B_FROM_PTR_EDI cmp r13b, byte ptr [edi]
#define CMP_R13B_FROM_PTR_ESI cmp r13b, byte ptr [esi]
#define CMP_R13B_FROM_PTR_EBP cmp r13b, byte ptr [ebp]
#define CMP_R13B_FROM_PTR_ESP cmp r13b, byte ptr [esp]

#define CMP_R14B_FROM_PTR_RAX cmp r14b, byte ptr [rax]
#define CMP_R14B_FROM_PTR_RBX cmp r14b, byte ptr [rbx]
#define CMP_R14B_FROM_PTR_RCX cmp r14b, byte ptr [rcx]
#define CMP_R14B_FROM_PTR_RDX cmp r14b, byte ptr [rdx]
#define CMP_R14B_FROM_PTR_RDI cmp r14b, byte ptr [rdi]
#define CMP_R14B_FROM_PTR_RSI cmp r14b, byte ptr [rsi]
#define CMP_R14B_FROM_PTR_RBP cmp r14b, byte ptr [rbp]
#define CMP_R14B_FROM_PTR_RSP cmp r14b, byte ptr [rsp]
#define CMP_R14B_FROM_PTR_R8 cmp r14b, byte ptr [r8]
#define CMP_R14B_FROM_PTR_R9 cmp r14b, byte ptr [r9]
#define CMP_R14B_FROM_PTR_R10 cmp r14b, byte ptr [r10]
#define CMP_R14B_FROM_PTR_R11 cmp r14b, byte ptr [r11]
#define CMP_R14B_FROM_PTR_R12 cmp r14b, byte ptr [r12]
#define CMP_R14B_FROM_PTR_R13 cmp r14b, byte ptr [r13]
#define CMP_R14B_FROM_PTR_R14 cmp r14b, byte ptr [r14]
#define CMP_R14B_FROM_PTR_R15 cmp r14b, byte ptr [r15]
#define CMP_R14B_FROM_PTR_EAX cmp r14b, byte ptr [eax]
#define CMP_R14B_FROM_PTR_EBX cmp r14b, byte ptr [ebx]
#define CMP_R14B_FROM_PTR_ECX cmp r14b, byte ptr [ecx]
#define CMP_R14B_FROM_PTR_EDX cmp r14b, byte ptr [edx]
#define CMP_R14B_FROM_PTR_EDI cmp r14b, byte ptr [edi]
#define CMP_R14B_FROM_PTR_ESI cmp r14b, byte ptr [esi]
#define CMP_R14B_FROM_PTR_EBP cmp r14b, byte ptr [ebp]
#define CMP_R14B_FROM_PTR_ESP cmp r14b, byte ptr [esp]

#define CMP_R15B_FROM_PTR_RAX cmp r15b, byte ptr [rax]
#define CMP_R15B_FROM_PTR_RBX cmp r15b, byte ptr [rbx]
#define CMP_R15B_FROM_PTR_RCX cmp r15b, byte ptr [rcx]
#define CMP_R15B_FROM_PTR_RDX cmp r15b, byte ptr [rdx]
#define CMP_R15B_FROM_PTR_RDI cmp r15b, byte ptr [rdi]
#define CMP_R15B_FROM_PTR_RSI cmp r15b, byte ptr [rsi]
#define CMP_R15B_FROM_PTR_RBP cmp r15b, byte ptr [rbp]
#define CMP_R15B_FROM_PTR_RSP cmp r15b, byte ptr [rsp]
#define CMP_R15B_FROM_PTR_R8 cmp r15b, byte ptr [r8]
#define CMP_R15B_FROM_PTR_R9 cmp r15b, byte ptr [r9]
#define CMP_R15B_FROM_PTR_R10 cmp r15b, byte ptr [r10]
#define CMP_R15B_FROM_PTR_R11 cmp r15b, byte ptr [r11]
#define CMP_R15B_FROM_PTR_R12 cmp r15b, byte ptr [r12]
#define CMP_R15B_FROM_PTR_R13 cmp r15b, byte ptr [r13]
#define CMP_R15B_FROM_PTR_R14 cmp r15b, byte ptr [r14]
#define CMP_R15B_FROM_PTR_R15 cmp r15b, byte ptr [r15]
#define CMP_R15B_FROM_PTR_EAX cmp r15b, byte ptr [eax]
#define CMP_R15B_FROM_PTR_EBX cmp r15b, byte ptr [ebx]
#define CMP_R15B_FROM_PTR_ECX cmp r15b, byte ptr [ecx]
#define CMP_R15B_FROM_PTR_EDX cmp r15b, byte ptr [edx]
#define CMP_R15B_FROM_PTR_EDI cmp r15b, byte ptr [edi]
#define CMP_R15B_FROM_PTR_ESI cmp r15b, byte ptr [esi]
#define CMP_R15B_FROM_PTR_EBP cmp r15b, byte ptr [ebp]
#define CMP_R15B_FROM_PTR_ESP cmp r15b, byte ptr [esp]

#define CMP_AL_TO_PTR_RAX cmp byte ptr [rax], al
#define CMP_AL_TO_PTR_RBX cmp byte ptr [rbx], al
#define CMP_AL_TO_PTR_RCX cmp byte ptr [rcx], al
#define CMP_AL_TO_PTR_RDX cmp byte ptr [rdx], al
#define CMP_AL_TO_PTR_RDI cmp byte ptr [rdi], al
#define CMP_AL_TO_PTR_RSI cmp byte ptr [rsi], al
#define CMP_AL_TO_PTR_RBP cmp byte ptr [rbp], al
#define CMP_AL_TO_PTR_RSP cmp byte ptr [rsp], al
#define CMP_AL_TO_PTR_R8 cmp byte ptr [r8], al
#define CMP_AL_TO_PTR_R9 cmp byte ptr [r9], al
#define CMP_AL_TO_PTR_R10 cmp byte ptr [r10], al
#define CMP_AL_TO_PTR_R11 cmp byte ptr [r11], al
#define CMP_AL_TO_PTR_R12 cmp byte ptr [r12], al
#define CMP_AL_TO_PTR_R13 cmp byte ptr [r13], al
#define CMP_AL_TO_PTR_R14 cmp byte ptr [r14], al
#define CMP_AL_TO_PTR_R15 cmp byte ptr [r15], al
#define CMP_AL_TO_PTR_EAX cmp byte ptr [eax], al
#define CMP_AL_TO_PTR_EBX cmp byte ptr [ebx], al
#define CMP_AL_TO_PTR_ECX cmp byte ptr [ecx], al
#define CMP_AL_TO_PTR_EDX cmp byte ptr [edx], al
#define CMP_AL_TO_PTR_EDI cmp byte ptr [edi], al
#define CMP_AL_TO_PTR_ESI cmp byte ptr [esi], al
#define CMP_AL_TO_PTR_EBP cmp byte ptr [ebp], al
#define CMP_AL_TO_PTR_ESP cmp byte ptr [esp], al

#define CMP_BL_TO_PTR_RAX cmp byte ptr [rax], bl
#define CMP_BL_TO_PTR_RBX cmp byte ptr [rbx], bl
#define CMP_BL_TO_PTR_RCX cmp byte ptr [rcx], bl
#define CMP_BL_TO_PTR_RDX cmp byte ptr [rdx], bl
#define CMP_BL_TO_PTR_RDI cmp byte ptr [rdi], bl
#define CMP_BL_TO_PTR_RSI cmp byte ptr [rsi], bl
#define CMP_BL_TO_PTR_RBP cmp byte ptr [rbp], bl
#define CMP_BL_TO_PTR_RSP cmp byte ptr [rsp], bl
#define CMP_BL_TO_PTR_R8 cmp byte ptr [r8], bl
#define CMP_BL_TO_PTR_R9 cmp byte ptr [r9], bl
#define CMP_BL_TO_PTR_R10 cmp byte ptr [r10], bl
#define CMP_BL_TO_PTR_R11 cmp byte ptr [r11], bl
#define CMP_BL_TO_PTR_R12 cmp byte ptr [r12], bl
#define CMP_BL_TO_PTR_R13 cmp byte ptr [r13], bl
#define CMP_BL_TO_PTR_R14 cmp byte ptr [r14], bl
#define CMP_BL_TO_PTR_R15 cmp byte ptr [r15], bl
#define CMP_BL_TO_PTR_EAX cmp byte ptr [eax], bl
#define CMP_BL_TO_PTR_EBX cmp byte ptr [ebx], bl
#define CMP_BL_TO_PTR_ECX cmp byte ptr [ecx], bl
#define CMP_BL_TO_PTR_EDX cmp byte ptr [edx], bl
#define CMP_BL_TO_PTR_EDI cmp byte ptr [edi], bl
#define CMP_BL_TO_PTR_ESI cmp byte ptr [esi], bl
#define CMP_BL_TO_PTR_EBP cmp byte ptr [ebp], bl
#define CMP_BL_TO_PTR_ESP cmp byte ptr [esp], bl

#define CMP_CL_TO_PTR_RAX cmp byte ptr [rax], cl
#define CMP_CL_TO_PTR_RBX cmp byte ptr [rbx], cl
#define CMP_CL_TO_PTR_RCX cmp byte ptr [rcx], cl
#define CMP_CL_TO_PTR_RDX cmp byte ptr [rdx], cl
#define CMP_CL_TO_PTR_RDI cmp byte ptr [rdi], cl
#define CMP_CL_TO_PTR_RSI cmp byte ptr [rsi], cl
#define CMP_CL_TO_PTR_RBP cmp byte ptr [rbp], cl
#define CMP_CL_TO_PTR_RSP cmp byte ptr [rsp], cl
#define CMP_CL_TO_PTR_R8 cmp byte ptr [r8], cl
#define CMP_CL_TO_PTR_R9 cmp byte ptr [r9], cl
#define CMP_CL_TO_PTR_R10 cmp byte ptr [r10], cl
#define CMP_CL_TO_PTR_R11 cmp byte ptr [r11], cl
#define CMP_CL_TO_PTR_R12 cmp byte ptr [r12], cl
#define CMP_CL_TO_PTR_R13 cmp byte ptr [r13], cl
#define CMP_CL_TO_PTR_R14 cmp byte ptr [r14], cl
#define CMP_CL_TO_PTR_R15 cmp byte ptr [r15], cl
#define CMP_CL_TO_PTR_EAX cmp byte ptr [eax], cl
#define CMP_CL_TO_PTR_EBX cmp byte ptr [ebx], cl
#define CMP_CL_TO_PTR_ECX cmp byte ptr [ecx], cl
#define CMP_CL_TO_PTR_EDX cmp byte ptr [edx], cl
#define CMP_CL_TO_PTR_EDI cmp byte ptr [edi], cl
#define CMP_CL_TO_PTR_ESI cmp byte ptr [esi], cl
#define CMP_CL_TO_PTR_EBP cmp byte ptr [ebp], cl
#define CMP_CL_TO_PTR_ESP cmp byte ptr [esp], cl

#define CMP_DL_TO_PTR_RAX cmp byte ptr [rax], dl
#define CMP_DL_TO_PTR_RBX cmp byte ptr [rbx], dl
#define CMP_DL_TO_PTR_RCX cmp byte ptr [rcx], dl
#define CMP_DL_TO_PTR_RDX cmp byte ptr [rdx], dl
#define CMP_DL_TO_PTR_RDI cmp byte ptr [rdi], dl
#define CMP_DL_TO_PTR_RSI cmp byte ptr [rsi], dl
#define CMP_DL_TO_PTR_RBP cmp byte ptr [rbp], dl
#define CMP_DL_TO_PTR_RSP cmp byte ptr [rsp], dl
#define CMP_DL_TO_PTR_R8 cmp byte ptr [r8], dl
#define CMP_DL_TO_PTR_R9 cmp byte ptr [r9], dl
#define CMP_DL_TO_PTR_R10 cmp byte ptr [r10], dl
#define CMP_DL_TO_PTR_R11 cmp byte ptr [r11], dl
#define CMP_DL_TO_PTR_R12 cmp byte ptr [r12], dl
#define CMP_DL_TO_PTR_R13 cmp byte ptr [r13], dl
#define CMP_DL_TO_PTR_R14 cmp byte ptr [r14], dl
#define CMP_DL_TO_PTR_R15 cmp byte ptr [r15], dl
#define CMP_DL_TO_PTR_EAX cmp byte ptr [eax], dl
#define CMP_DL_TO_PTR_EBX cmp byte ptr [ebx], dl
#define CMP_DL_TO_PTR_ECX cmp byte ptr [ecx], dl
#define CMP_DL_TO_PTR_EDX cmp byte ptr [edx], dl
#define CMP_DL_TO_PTR_EDI cmp byte ptr [edi], dl
#define CMP_DL_TO_PTR_ESI cmp byte ptr [esi], dl
#define CMP_DL_TO_PTR_EBP cmp byte ptr [ebp], dl
#define CMP_DL_TO_PTR_ESP cmp byte ptr [esp], dl

#define CMP_DIL_TO_PTR_RAX cmp byte ptr [rax], dil
#define CMP_DIL_TO_PTR_RBX cmp byte ptr [rbx], dil
#define CMP_DIL_TO_PTR_RCX cmp byte ptr [rcx], dil
#define CMP_DIL_TO_PTR_RDX cmp byte ptr [rdx], dil
#define CMP_DIL_TO_PTR_RDI cmp byte ptr [rdi], dil
#define CMP_DIL_TO_PTR_RSI cmp byte ptr [rsi], dil
#define CMP_DIL_TO_PTR_RBP cmp byte ptr [rbp], dil
#define CMP_DIL_TO_PTR_RSP cmp byte ptr [rsp], dil
#define CMP_DIL_TO_PTR_R8 cmp byte ptr [r8], dil
#define CMP_DIL_TO_PTR_R9 cmp byte ptr [r9], dil
#define CMP_DIL_TO_PTR_R10 cmp byte ptr [r10], dil
#define CMP_DIL_TO_PTR_R11 cmp byte ptr [r11], dil
#define CMP_DIL_TO_PTR_R12 cmp byte ptr [r12], dil
#define CMP_DIL_TO_PTR_R13 cmp byte ptr [r13], dil
#define CMP_DIL_TO_PTR_R14 cmp byte ptr [r14], dil
#define CMP_DIL_TO_PTR_R15 cmp byte ptr [r15], dil
#define CMP_DIL_TO_PTR_EAX cmp byte ptr [eax], dil
#define CMP_DIL_TO_PTR_EBX cmp byte ptr [ebx], dil
#define CMP_DIL_TO_PTR_ECX cmp byte ptr [ecx], dil
#define CMP_DIL_TO_PTR_EDX cmp byte ptr [edx], dil
#define CMP_DIL_TO_PTR_EDI cmp byte ptr [edi], dil
#define CMP_DIL_TO_PTR_ESI cmp byte ptr [esi], dil
#define CMP_DIL_TO_PTR_EBP cmp byte ptr [ebp], dil
#define CMP_DIL_TO_PTR_ESP cmp byte ptr [esp], dil

#define CMP_SIL_TO_PTR_RAX cmp byte ptr [rax], sil
#define CMP_SIL_TO_PTR_RBX cmp byte ptr [rbx], sil
#define CMP_SIL_TO_PTR_RCX cmp byte ptr [rcx], sil
#define CMP_SIL_TO_PTR_RDX cmp byte ptr [rdx], sil
#define CMP_SIL_TO_PTR_RDI cmp byte ptr [rdi], sil
#define CMP_SIL_TO_PTR_RSI cmp byte ptr [rsi], sil
#define CMP_SIL_TO_PTR_RBP cmp byte ptr [rbp], sil
#define CMP_SIL_TO_PTR_RSP cmp byte ptr [rsp], sil
#define CMP_SIL_TO_PTR_R8 cmp byte ptr [r8], sil
#define CMP_SIL_TO_PTR_R9 cmp byte ptr [r9], sil
#define CMP_SIL_TO_PTR_R10 cmp byte ptr [r10], sil
#define CMP_SIL_TO_PTR_R11 cmp byte ptr [r11], sil
#define CMP_SIL_TO_PTR_R12 cmp byte ptr [r12], sil
#define CMP_SIL_TO_PTR_R13 cmp byte ptr [r13], sil
#define CMP_SIL_TO_PTR_R14 cmp byte ptr [r14], sil
#define CMP_SIL_TO_PTR_R15 cmp byte ptr [r15], sil
#define CMP_SIL_TO_PTR_EAX cmp byte ptr [eax], sil
#define CMP_SIL_TO_PTR_EBX cmp byte ptr [ebx], sil
#define CMP_SIL_TO_PTR_ECX cmp byte ptr [ecx], sil
#define CMP_SIL_TO_PTR_EDX cmp byte ptr [edx], sil
#define CMP_SIL_TO_PTR_EDI cmp byte ptr [edi], sil
#define CMP_SIL_TO_PTR_ESI cmp byte ptr [esi], sil
#define CMP_SIL_TO_PTR_EBP cmp byte ptr [ebp], sil
#define CMP_SIL_TO_PTR_ESP cmp byte ptr [esp], sil

#define CMP_BPL_TO_PTR_RAX cmp byte ptr [rax], bpl
#define CMP_BPL_TO_PTR_RBX cmp byte ptr [rbx], bpl
#define CMP_BPL_TO_PTR_RCX cmp byte ptr [rcx], bpl
#define CMP_BPL_TO_PTR_RDX cmp byte ptr [rdx], bpl
#define CMP_BPL_TO_PTR_RDI cmp byte ptr [rdi], bpl
#define CMP_BPL_TO_PTR_RSI cmp byte ptr [rsi], bpl
#define CMP_BPL_TO_PTR_RBP cmp byte ptr [rbp], bpl
#define CMP_BPL_TO_PTR_RSP cmp byte ptr [rsp], bpl
#define CMP_BPL_TO_PTR_R8 cmp byte ptr [r8], bpl
#define CMP_BPL_TO_PTR_R9 cmp byte ptr [r9], bpl
#define CMP_BPL_TO_PTR_R10 cmp byte ptr [r10], bpl
#define CMP_BPL_TO_PTR_R11 cmp byte ptr [r11], bpl
#define CMP_BPL_TO_PTR_R12 cmp byte ptr [r12], bpl
#define CMP_BPL_TO_PTR_R13 cmp byte ptr [r13], bpl
#define CMP_BPL_TO_PTR_R14 cmp byte ptr [r14], bpl
#define CMP_BPL_TO_PTR_R15 cmp byte ptr [r15], bpl
#define CMP_BPL_TO_PTR_EAX cmp byte ptr [eax], bpl
#define CMP_BPL_TO_PTR_EBX cmp byte ptr [ebx], bpl
#define CMP_BPL_TO_PTR_ECX cmp byte ptr [ecx], bpl
#define CMP_BPL_TO_PTR_EDX cmp byte ptr [edx], bpl
#define CMP_BPL_TO_PTR_EDI cmp byte ptr [edi], bpl
#define CMP_BPL_TO_PTR_ESI cmp byte ptr [esi], bpl
#define CMP_BPL_TO_PTR_EBP cmp byte ptr [ebp], bpl
#define CMP_BPL_TO_PTR_ESP cmp byte ptr [esp], bpl

#define CMP_SPL_TO_PTR_RAX cmp byte ptr [rax], spl
#define CMP_SPL_TO_PTR_RBX cmp byte ptr [rbx], spl
#define CMP_SPL_TO_PTR_RCX cmp byte ptr [rcx], spl
#define CMP_SPL_TO_PTR_RDX cmp byte ptr [rdx], spl
#define CMP_SPL_TO_PTR_RDI cmp byte ptr [rdi], spl
#define CMP_SPL_TO_PTR_RSI cmp byte ptr [rsi], spl
#define CMP_SPL_TO_PTR_RBP cmp byte ptr [rbp], spl
#define CMP_SPL_TO_PTR_RSP cmp byte ptr [rsp], spl
#define CMP_SPL_TO_PTR_R8 cmp byte ptr [r8], spl
#define CMP_SPL_TO_PTR_R9 cmp byte ptr [r9], spl
#define CMP_SPL_TO_PTR_R10 cmp byte ptr [r10], spl
#define CMP_SPL_TO_PTR_R11 cmp byte ptr [r11], spl
#define CMP_SPL_TO_PTR_R12 cmp byte ptr [r12], spl
#define CMP_SPL_TO_PTR_R13 cmp byte ptr [r13], spl
#define CMP_SPL_TO_PTR_R14 cmp byte ptr [r14], spl
#define CMP_SPL_TO_PTR_R15 cmp byte ptr [r15], spl
#define CMP_SPL_TO_PTR_EAX cmp byte ptr [eax], spl
#define CMP_SPL_TO_PTR_EBX cmp byte ptr [ebx], spl
#define CMP_SPL_TO_PTR_ECX cmp byte ptr [ecx], spl
#define CMP_SPL_TO_PTR_EDX cmp byte ptr [edx], spl
#define CMP_SPL_TO_PTR_EDI cmp byte ptr [edi], spl
#define CMP_SPL_TO_PTR_ESI cmp byte ptr [esi], spl
#define CMP_SPL_TO_PTR_EBP cmp byte ptr [ebp], spl
#define CMP_SPL_TO_PTR_ESP cmp byte ptr [esp], spl

#define CMP_R8B_TO_PTR_RAX cmp byte ptr [rax], r8b
#define CMP_R8B_TO_PTR_RBX cmp byte ptr [rbx], r8b
#define CMP_R8B_TO_PTR_RCX cmp byte ptr [rcx], r8b
#define CMP_R8B_TO_PTR_RDX cmp byte ptr [rdx], r8b
#define CMP_R8B_TO_PTR_RDI cmp byte ptr [rdi], r8b
#define CMP_R8B_TO_PTR_RSI cmp byte ptr [rsi], r8b
#define CMP_R8B_TO_PTR_RBP cmp byte ptr [rbp], r8b
#define CMP_R8B_TO_PTR_RSP cmp byte ptr [rsp], r8b
#define CMP_R8B_TO_PTR_R8 cmp byte ptr [r8], r8b
#define CMP_R8B_TO_PTR_R9 cmp byte ptr [r9], r8b
#define CMP_R8B_TO_PTR_R10 cmp byte ptr [r10], r8b
#define CMP_R8B_TO_PTR_R11 cmp byte ptr [r11], r8b
#define CMP_R8B_TO_PTR_R12 cmp byte ptr [r12], r8b
#define CMP_R8B_TO_PTR_R13 cmp byte ptr [r13], r8b
#define CMP_R8B_TO_PTR_R14 cmp byte ptr [r14], r8b
#define CMP_R8B_TO_PTR_R15 cmp byte ptr [r15], r8b
#define CMP_R8B_TO_PTR_EAX cmp byte ptr [eax], r8b
#define CMP_R8B_TO_PTR_EBX cmp byte ptr [ebx], r8b
#define CMP_R8B_TO_PTR_ECX cmp byte ptr [ecx], r8b
#define CMP_R8B_TO_PTR_EDX cmp byte ptr [edx], r8b
#define CMP_R8B_TO_PTR_EDI cmp byte ptr [edi], r8b
#define CMP_R8B_TO_PTR_ESI cmp byte ptr [esi], r8b
#define CMP_R8B_TO_PTR_EBP cmp byte ptr [ebp], r8b
#define CMP_R8B_TO_PTR_ESP cmp byte ptr [esp], r8b

#define CMP_R9B_TO_PTR_RAX cmp byte ptr [rax], r9b
#define CMP_R9B_TO_PTR_RBX cmp byte ptr [rbx], r9b
#define CMP_R9B_TO_PTR_RCX cmp byte ptr [rcx], r9b
#define CMP_R9B_TO_PTR_RDX cmp byte ptr [rdx], r9b
#define CMP_R9B_TO_PTR_RDI cmp byte ptr [rdi], r9b
#define CMP_R9B_TO_PTR_RSI cmp byte ptr [rsi], r9b
#define CMP_R9B_TO_PTR_RBP cmp byte ptr [rbp], r9b
#define CMP_R9B_TO_PTR_RSP cmp byte ptr [rsp], r9b
#define CMP_R9B_TO_PTR_R8 cmp byte ptr [r8], r9b
#define CMP_R9B_TO_PTR_R9 cmp byte ptr [r9], r9b
#define CMP_R9B_TO_PTR_R10 cmp byte ptr [r10], r9b
#define CMP_R9B_TO_PTR_R11 cmp byte ptr [r11], r9b
#define CMP_R9B_TO_PTR_R12 cmp byte ptr [r12], r9b
#define CMP_R9B_TO_PTR_R13 cmp byte ptr [r13], r9b
#define CMP_R9B_TO_PTR_R14 cmp byte ptr [r14], r9b
#define CMP_R9B_TO_PTR_R15 cmp byte ptr [r15], r9b
#define CMP_R9B_TO_PTR_EAX cmp byte ptr [eax], r9b
#define CMP_R9B_TO_PTR_EBX cmp byte ptr [ebx], r9b
#define CMP_R9B_TO_PTR_ECX cmp byte ptr [ecx], r9b
#define CMP_R9B_TO_PTR_EDX cmp byte ptr [edx], r9b
#define CMP_R9B_TO_PTR_EDI cmp byte ptr [edi], r9b
#define CMP_R9B_TO_PTR_ESI cmp byte ptr [esi], r9b
#define CMP_R9B_TO_PTR_EBP cmp byte ptr [ebp], r9b
#define CMP_R9B_TO_PTR_ESP cmp byte ptr [esp], r9b

#define CMP_R10B_TO_PTR_RAX cmp byte ptr [rax], r10b
#define CMP_R10B_TO_PTR_RBX cmp byte ptr [rbx], r10b
#define CMP_R10B_TO_PTR_RCX cmp byte ptr [rcx], r10b
#define CMP_R10B_TO_PTR_RDX cmp byte ptr [rdx], r10b
#define CMP_R10B_TO_PTR_RDI cmp byte ptr [rdi], r10b
#define CMP_R10B_TO_PTR_RSI cmp byte ptr [rsi], r10b
#define CMP_R10B_TO_PTR_RBP cmp byte ptr [rbp], r10b
#define CMP_R10B_TO_PTR_RSP cmp byte ptr [rsp], r10b
#define CMP_R10B_TO_PTR_R8 cmp byte ptr [r8], r10b
#define CMP_R10B_TO_PTR_R9 cmp byte ptr [r9], r10b
#define CMP_R10B_TO_PTR_R10 cmp byte ptr [r10], r10b
#define CMP_R10B_TO_PTR_R11 cmp byte ptr [r11], r10b
#define CMP_R10B_TO_PTR_R12 cmp byte ptr [r12], r10b
#define CMP_R10B_TO_PTR_R13 cmp byte ptr [r13], r10b
#define CMP_R10B_TO_PTR_R14 cmp byte ptr [r14], r10b
#define CMP_R10B_TO_PTR_R15 cmp byte ptr [r15], r10b
#define CMP_R10B_TO_PTR_EAX cmp byte ptr [eax], r10b
#define CMP_R10B_TO_PTR_EBX cmp byte ptr [ebx], r10b
#define CMP_R10B_TO_PTR_ECX cmp byte ptr [ecx], r10b
#define CMP_R10B_TO_PTR_EDX cmp byte ptr [edx], r10b
#define CMP_R10B_TO_PTR_EDI cmp byte ptr [edi], r10b
#define CMP_R10B_TO_PTR_ESI cmp byte ptr [esi], r10b
#define CMP_R10B_TO_PTR_EBP cmp byte ptr [ebp], r10b
#define CMP_R10B_TO_PTR_ESP cmp byte ptr [esp], r10b

#define CMP_R11B_TO_PTR_RAX cmp byte ptr [rax], r11b
#define CMP_R11B_TO_PTR_RBX cmp byte ptr [rbx], r11b
#define CMP_R11B_TO_PTR_RCX cmp byte ptr [rcx], r11b
#define CMP_R11B_TO_PTR_RDX cmp byte ptr [rdx], r11b
#define CMP_R11B_TO_PTR_RDI cmp byte ptr [rdi], r11b
#define CMP_R11B_TO_PTR_RSI cmp byte ptr [rsi], r11b
#define CMP_R11B_TO_PTR_RBP cmp byte ptr [rbp], r11b
#define CMP_R11B_TO_PTR_RSP cmp byte ptr [rsp], r11b
#define CMP_R11B_TO_PTR_R8 cmp byte ptr [r8], r11b
#define CMP_R11B_TO_PTR_R9 cmp byte ptr [r9], r11b
#define CMP_R11B_TO_PTR_R10 cmp byte ptr [r10], r11b
#define CMP_R11B_TO_PTR_R11 cmp byte ptr [r11], r11b
#define CMP_R11B_TO_PTR_R12 cmp byte ptr [r12], r11b
#define CMP_R11B_TO_PTR_R13 cmp byte ptr [r13], r11b
#define CMP_R11B_TO_PTR_R14 cmp byte ptr [r14], r11b
#define CMP_R11B_TO_PTR_R15 cmp byte ptr [r15], r11b
#define CMP_R11B_TO_PTR_EAX cmp byte ptr [eax], r11b
#define CMP_R11B_TO_PTR_EBX cmp byte ptr [ebx], r11b
#define CMP_R11B_TO_PTR_ECX cmp byte ptr [ecx], r11b
#define CMP_R11B_TO_PTR_EDX cmp byte ptr [edx], r11b
#define CMP_R11B_TO_PTR_EDI cmp byte ptr [edi], r11b
#define CMP_R11B_TO_PTR_ESI cmp byte ptr [esi], r11b
#define CMP_R11B_TO_PTR_EBP cmp byte ptr [ebp], r11b
#define CMP_R11B_TO_PTR_ESP cmp byte ptr [esp], r11b

#define CMP_R12B_TO_PTR_RAX cmp byte ptr [rax], r12b
#define CMP_R12B_TO_PTR_RBX cmp byte ptr [rbx], r12b
#define CMP_R12B_TO_PTR_RCX cmp byte ptr [rcx], r12b
#define CMP_R12B_TO_PTR_RDX cmp byte ptr [rdx], r12b
#define CMP_R12B_TO_PTR_RDI cmp byte ptr [rdi], r12b
#define CMP_R12B_TO_PTR_RSI cmp byte ptr [rsi], r12b
#define CMP_R12B_TO_PTR_RBP cmp byte ptr [rbp], r12b
#define CMP_R12B_TO_PTR_RSP cmp byte ptr [rsp], r12b
#define CMP_R12B_TO_PTR_R8 cmp byte ptr [r8], r12b
#define CMP_R12B_TO_PTR_R9 cmp byte ptr [r9], r12b
#define CMP_R12B_TO_PTR_R10 cmp byte ptr [r10], r12b
#define CMP_R12B_TO_PTR_R11 cmp byte ptr [r11], r12b
#define CMP_R12B_TO_PTR_R12 cmp byte ptr [r12], r12b
#define CMP_R12B_TO_PTR_R13 cmp byte ptr [r13], r12b
#define CMP_R12B_TO_PTR_R14 cmp byte ptr [r14], r12b
#define CMP_R12B_TO_PTR_R15 cmp byte ptr [r15], r12b
#define CMP_R12B_TO_PTR_EAX cmp byte ptr [eax], r12b
#define CMP_R12B_TO_PTR_EBX cmp byte ptr [ebx], r12b
#define CMP_R12B_TO_PTR_ECX cmp byte ptr [ecx], r12b
#define CMP_R12B_TO_PTR_EDX cmp byte ptr [edx], r12b
#define CMP_R12B_TO_PTR_EDI cmp byte ptr [edi], r12b
#define CMP_R12B_TO_PTR_ESI cmp byte ptr [esi], r12b
#define CMP_R12B_TO_PTR_EBP cmp byte ptr [ebp], r12b
#define CMP_R12B_TO_PTR_ESP cmp byte ptr [esp], r12b

#define CMP_R13B_TO_PTR_RAX cmp byte ptr [rax], r13b
#define CMP_R13B_TO_PTR_RBX cmp byte ptr [rbx], r13b
#define CMP_R13B_TO_PTR_RCX cmp byte ptr [rcx], r13b
#define CMP_R13B_TO_PTR_RDX cmp byte ptr [rdx], r13b
#define CMP_R13B_TO_PTR_RDI cmp byte ptr [rdi], r13b
#define CMP_R13B_TO_PTR_RSI cmp byte ptr [rsi], r13b
#define CMP_R13B_TO_PTR_RBP cmp byte ptr [rbp], r13b
#define CMP_R13B_TO_PTR_RSP cmp byte ptr [rsp], r13b
#define CMP_R13B_TO_PTR_R8 cmp byte ptr [r8], r13b
#define CMP_R13B_TO_PTR_R9 cmp byte ptr [r9], r13b
#define CMP_R13B_TO_PTR_R10 cmp byte ptr [r10], r13b
#define CMP_R13B_TO_PTR_R11 cmp byte ptr [r11], r13b
#define CMP_R13B_TO_PTR_R12 cmp byte ptr [r12], r13b
#define CMP_R13B_TO_PTR_R13 cmp byte ptr [r13], r13b
#define CMP_R13B_TO_PTR_R14 cmp byte ptr [r14], r13b
#define CMP_R13B_TO_PTR_R15 cmp byte ptr [r15], r13b
#define CMP_R13B_TO_PTR_EAX cmp byte ptr [eax], r13b
#define CMP_R13B_TO_PTR_EBX cmp byte ptr [ebx], r13b
#define CMP_R13B_TO_PTR_ECX cmp byte ptr [ecx], r13b
#define CMP_R13B_TO_PTR_EDX cmp byte ptr [edx], r13b
#define CMP_R13B_TO_PTR_EDI cmp byte ptr [edi], r13b
#define CMP_R13B_TO_PTR_ESI cmp byte ptr [esi], r13b
#define CMP_R13B_TO_PTR_EBP cmp byte ptr [ebp], r13b
#define CMP_R13B_TO_PTR_ESP cmp byte ptr [esp], r13b

#define CMP_R14B_TO_PTR_RAX cmp byte ptr [rax], r14b
#define CMP_R14B_TO_PTR_RBX cmp byte ptr [rbx], r14b
#define CMP_R14B_TO_PTR_RCX cmp byte ptr [rcx], r14b
#define CMP_R14B_TO_PTR_RDX cmp byte ptr [rdx], r14b
#define CMP_R14B_TO_PTR_RDI cmp byte ptr [rdi], r14b
#define CMP_R14B_TO_PTR_RSI cmp byte ptr [rsi], r14b
#define CMP_R14B_TO_PTR_RBP cmp byte ptr [rbp], r14b
#define CMP_R14B_TO_PTR_RSP cmp byte ptr [rsp], r14b
#define CMP_R14B_TO_PTR_R8 cmp byte ptr [r8], r14b
#define CMP_R14B_TO_PTR_R9 cmp byte ptr [r9], r14b
#define CMP_R14B_TO_PTR_R10 cmp byte ptr [r10], r14b
#define CMP_R14B_TO_PTR_R11 cmp byte ptr [r11], r14b
#define CMP_R14B_TO_PTR_R12 cmp byte ptr [r12], r14b
#define CMP_R14B_TO_PTR_R13 cmp byte ptr [r13], r14b
#define CMP_R14B_TO_PTR_R14 cmp byte ptr [r14], r14b
#define CMP_R14B_TO_PTR_R15 cmp byte ptr [r15], r14b
#define CMP_R14B_TO_PTR_EAX cmp byte ptr [eax], r14b
#define CMP_R14B_TO_PTR_EBX cmp byte ptr [ebx], r14b
#define CMP_R14B_TO_PTR_ECX cmp byte ptr [ecx], r14b
#define CMP_R14B_TO_PTR_EDX cmp byte ptr [edx], r14b
#define CMP_R14B_TO_PTR_EDI cmp byte ptr [edi], r14b
#define CMP_R14B_TO_PTR_ESI cmp byte ptr [esi], r14b
#define CMP_R14B_TO_PTR_EBP cmp byte ptr [ebp], r14b
#define CMP_R14B_TO_PTR_ESP cmp byte ptr [esp], r14b

#define CMP_R15B_TO_PTR_RAX cmp byte ptr [rax], r15b
#define CMP_R15B_TO_PTR_RBX cmp byte ptr [rbx], r15b
#define CMP_R15B_TO_PTR_RCX cmp byte ptr [rcx], r15b
#define CMP_R15B_TO_PTR_RDX cmp byte ptr [rdx], r15b
#define CMP_R15B_TO_PTR_RDI cmp byte ptr [rdi], r15b
#define CMP_R15B_TO_PTR_RSI cmp byte ptr [rsi], r15b
#define CMP_R15B_TO_PTR_RBP cmp byte ptr [rbp], r15b
#define CMP_R15B_TO_PTR_RSP cmp byte ptr [rsp], r15b
#define CMP_R15B_TO_PTR_R8 cmp byte ptr [r8], r15b
#define CMP_R15B_TO_PTR_R9 cmp byte ptr [r9], r15b
#define CMP_R15B_TO_PTR_R10 cmp byte ptr [r10], r15b
#define CMP_R15B_TO_PTR_R11 cmp byte ptr [r11], r15b
#define CMP_R15B_TO_PTR_R12 cmp byte ptr [r12], r15b
#define CMP_R15B_TO_PTR_R13 cmp byte ptr [r13], r15b
#define CMP_R15B_TO_PTR_R14 cmp byte ptr [r14], r15b
#define CMP_R15B_TO_PTR_R15 cmp byte ptr [r15], r15b
#define CMP_R15B_TO_PTR_EAX cmp byte ptr [eax], r15b
#define CMP_R15B_TO_PTR_EBX cmp byte ptr [ebx], r15b
#define CMP_R15B_TO_PTR_ECX cmp byte ptr [ecx], r15b
#define CMP_R15B_TO_PTR_EDX cmp byte ptr [edx], r15b
#define CMP_R15B_TO_PTR_EDI cmp byte ptr [edi], r15b
#define CMP_R15B_TO_PTR_ESI cmp byte ptr [esi], r15b
#define CMP_R15B_TO_PTR_EBP cmp byte ptr [ebp], r15b
#define CMP_R15B_TO_PTR_ESP cmp byte ptr [esp], r15b

#define CMP_AL_FROM_PTR_RAX_(VALUE) cmp al, byte ptr [rax + VALUE]
#define CMP_AL_FROM_PTR_RBX_(VALUE) cmp al, byte ptr [rbx + VALUE]
#define CMP_AL_FROM_PTR_RCX_(VALUE) cmp al, byte ptr [rcx + VALUE]
#define CMP_AL_FROM_PTR_RDX_(VALUE) cmp al, byte ptr [rdx + VALUE]
#define CMP_AL_FROM_PTR_RDI_(VALUE) cmp al, byte ptr [rdi + VALUE]
#define CMP_AL_FROM_PTR_RSI_(VALUE) cmp al, byte ptr [rsi + VALUE]
#define CMP_AL_FROM_PTR_RBP_(VALUE) cmp al, byte ptr [rbp + VALUE]
#define CMP_AL_FROM_PTR_RSP_(VALUE) cmp al, byte ptr [rsp + VALUE]
#define CMP_AL_FROM_PTR_R8_(VALUE) cmp al, byte ptr [r8 + VALUE]
#define CMP_AL_FROM_PTR_R9_(VALUE) cmp al, byte ptr [r9 + VALUE]
#define CMP_AL_FROM_PTR_R10_(VALUE) cmp al, byte ptr [r10 + VALUE]
#define CMP_AL_FROM_PTR_R11_(VALUE) cmp al, byte ptr [r11 + VALUE]
#define CMP_AL_FROM_PTR_R12_(VALUE) cmp al, byte ptr [r12 + VALUE]
#define CMP_AL_FROM_PTR_R13_(VALUE) cmp al, byte ptr [r13 + VALUE]
#define CMP_AL_FROM_PTR_R14_(VALUE) cmp al, byte ptr [r14 + VALUE]
#define CMP_AL_FROM_PTR_R15_(VALUE) cmp al, byte ptr [r15 + VALUE]
#define CMP_AL_FROM_PTR_EAX_(VALUE) cmp al, byte ptr [eax + VALUE]
#define CMP_AL_FROM_PTR_EBX_(VALUE) cmp al, byte ptr [ebx + VALUE]
#define CMP_AL_FROM_PTR_ECX_(VALUE) cmp al, byte ptr [ecx + VALUE]
#define CMP_AL_FROM_PTR_EDX_(VALUE) cmp al, byte ptr [edx + VALUE]
#define CMP_AL_FROM_PTR_EDI_(VALUE) cmp al, byte ptr [edi + VALUE]
#define CMP_AL_FROM_PTR_ESI_(VALUE) cmp al, byte ptr [esi + VALUE]
#define CMP_AL_FROM_PTR_EBP_(VALUE) cmp al, byte ptr [ebp + VALUE]
#define CMP_AL_FROM_PTR_ESP_(VALUE) cmp al, byte ptr [esp + VALUE]

#define CMP_BL_FROM_PTR_RAX_(VALUE) cmp bl, byte ptr [rax + VALUE]
#define CMP_BL_FROM_PTR_RBX_(VALUE) cmp bl, byte ptr [rbx + VALUE]
#define CMP_BL_FROM_PTR_RCX_(VALUE) cmp bl, byte ptr [rcx + VALUE]
#define CMP_BL_FROM_PTR_RDX_(VALUE) cmp bl, byte ptr [rdx + VALUE]
#define CMP_BL_FROM_PTR_RDI_(VALUE) cmp bl, byte ptr [rdi + VALUE]
#define CMP_BL_FROM_PTR_RSI_(VALUE) cmp bl, byte ptr [rsi + VALUE]
#define CMP_BL_FROM_PTR_RBP_(VALUE) cmp bl, byte ptr [rbp + VALUE]
#define CMP_BL_FROM_PTR_RSP_(VALUE) cmp bl, byte ptr [rsp + VALUE]
#define CMP_BL_FROM_PTR_R8_(VALUE) cmp bl, byte ptr [r8 + VALUE]
#define CMP_BL_FROM_PTR_R9_(VALUE) cmp bl, byte ptr [r9 + VALUE]
#define CMP_BL_FROM_PTR_R10_(VALUE) cmp bl, byte ptr [r10 + VALUE]
#define CMP_BL_FROM_PTR_R11_(VALUE) cmp bl, byte ptr [r11 + VALUE]
#define CMP_BL_FROM_PTR_R12_(VALUE) cmp bl, byte ptr [r12 + VALUE]
#define CMP_BL_FROM_PTR_R13_(VALUE) cmp bl, byte ptr [r13 + VALUE]
#define CMP_BL_FROM_PTR_R14_(VALUE) cmp bl, byte ptr [r14 + VALUE]
#define CMP_BL_FROM_PTR_R15_(VALUE) cmp bl, byte ptr [r15 + VALUE]
#define CMP_BL_FROM_PTR_EAX_(VALUE) cmp bl, byte ptr [eax + VALUE]
#define CMP_BL_FROM_PTR_EBX_(VALUE) cmp bl, byte ptr [ebx + VALUE]
#define CMP_BL_FROM_PTR_ECX_(VALUE) cmp bl, byte ptr [ecx + VALUE]
#define CMP_BL_FROM_PTR_EDX_(VALUE) cmp bl, byte ptr [edx + VALUE]
#define CMP_BL_FROM_PTR_EDI_(VALUE) cmp bl, byte ptr [edi + VALUE]
#define CMP_BL_FROM_PTR_ESI_(VALUE) cmp bl, byte ptr [esi + VALUE]
#define CMP_BL_FROM_PTR_EBP_(VALUE) cmp bl, byte ptr [ebp + VALUE]
#define CMP_BL_FROM_PTR_ESP_(VALUE) cmp bl, byte ptr [esp + VALUE]

#define CMP_CL_FROM_PTR_RAX_(VALUE) cmp cl, byte ptr [rax + VALUE]
#define CMP_CL_FROM_PTR_RBX_(VALUE) cmp cl, byte ptr [rbx + VALUE]
#define CMP_CL_FROM_PTR_RCX_(VALUE) cmp cl, byte ptr [rcx + VALUE]
#define CMP_CL_FROM_PTR_RDX_(VALUE) cmp cl, byte ptr [rdx + VALUE]
#define CMP_CL_FROM_PTR_RDI_(VALUE) cmp cl, byte ptr [rdi + VALUE]
#define CMP_CL_FROM_PTR_RSI_(VALUE) cmp cl, byte ptr [rsi + VALUE]
#define CMP_CL_FROM_PTR_RBP_(VALUE) cmp cl, byte ptr [rbp + VALUE]
#define CMP_CL_FROM_PTR_RSP_(VALUE) cmp cl, byte ptr [rsp + VALUE]
#define CMP_CL_FROM_PTR_R8_(VALUE) cmp cl, byte ptr [r8 + VALUE]
#define CMP_CL_FROM_PTR_R9_(VALUE) cmp cl, byte ptr [r9 + VALUE]
#define CMP_CL_FROM_PTR_R10_(VALUE) cmp cl, byte ptr [r10 + VALUE]
#define CMP_CL_FROM_PTR_R11_(VALUE) cmp cl, byte ptr [r11 + VALUE]
#define CMP_CL_FROM_PTR_R12_(VALUE) cmp cl, byte ptr [r12 + VALUE]
#define CMP_CL_FROM_PTR_R13_(VALUE) cmp cl, byte ptr [r13 + VALUE]
#define CMP_CL_FROM_PTR_R14_(VALUE) cmp cl, byte ptr [r14 + VALUE]
#define CMP_CL_FROM_PTR_R15_(VALUE) cmp cl, byte ptr [r15 + VALUE]
#define CMP_CL_FROM_PTR_EAX_(VALUE) cmp cl, byte ptr [eax + VALUE]
#define CMP_CL_FROM_PTR_EBX_(VALUE) cmp cl, byte ptr [ebx + VALUE]
#define CMP_CL_FROM_PTR_ECX_(VALUE) cmp cl, byte ptr [ecx + VALUE]
#define CMP_CL_FROM_PTR_EDX_(VALUE) cmp cl, byte ptr [edx + VALUE]
#define CMP_CL_FROM_PTR_EDI_(VALUE) cmp cl, byte ptr [edi + VALUE]
#define CMP_CL_FROM_PTR_ESI_(VALUE) cmp cl, byte ptr [esi + VALUE]
#define CMP_CL_FROM_PTR_EBP_(VALUE) cmp cl, byte ptr [ebp + VALUE]
#define CMP_CL_FROM_PTR_ESP_(VALUE) cmp cl, byte ptr [esp + VALUE]

#define CMP_DL_FROM_PTR_RAX_(VALUE) cmp dl, byte ptr [rax + VALUE]
#define CMP_DL_FROM_PTR_RBX_(VALUE) cmp dl, byte ptr [rbx + VALUE]
#define CMP_DL_FROM_PTR_RCX_(VALUE) cmp dl, byte ptr [rcx + VALUE]
#define CMP_DL_FROM_PTR_RDX_(VALUE) cmp dl, byte ptr [rdx + VALUE]
#define CMP_DL_FROM_PTR_RDI_(VALUE) cmp dl, byte ptr [rdi + VALUE]
#define CMP_DL_FROM_PTR_RSI_(VALUE) cmp dl, byte ptr [rsi + VALUE]
#define CMP_DL_FROM_PTR_RBP_(VALUE) cmp dl, byte ptr [rbp + VALUE]
#define CMP_DL_FROM_PTR_RSP_(VALUE) cmp dl, byte ptr [rsp + VALUE]
#define CMP_DL_FROM_PTR_R8_(VALUE) cmp dl, byte ptr [r8 + VALUE]
#define CMP_DL_FROM_PTR_R9_(VALUE) cmp dl, byte ptr [r9 + VALUE]
#define CMP_DL_FROM_PTR_R10_(VALUE) cmp dl, byte ptr [r10 + VALUE]
#define CMP_DL_FROM_PTR_R11_(VALUE) cmp dl, byte ptr [r11 + VALUE]
#define CMP_DL_FROM_PTR_R12_(VALUE) cmp dl, byte ptr [r12 + VALUE]
#define CMP_DL_FROM_PTR_R13_(VALUE) cmp dl, byte ptr [r13 + VALUE]
#define CMP_DL_FROM_PTR_R14_(VALUE) cmp dl, byte ptr [r14 + VALUE]
#define CMP_DL_FROM_PTR_R15_(VALUE) cmp dl, byte ptr [r15 + VALUE]
#define CMP_DL_FROM_PTR_EAX_(VALUE) cmp dl, byte ptr [eax + VALUE]
#define CMP_DL_FROM_PTR_EBX_(VALUE) cmp dl, byte ptr [ebx + VALUE]
#define CMP_DL_FROM_PTR_ECX_(VALUE) cmp dl, byte ptr [ecx + VALUE]
#define CMP_DL_FROM_PTR_EDX_(VALUE) cmp dl, byte ptr [edx + VALUE]
#define CMP_DL_FROM_PTR_EDI_(VALUE) cmp dl, byte ptr [edi + VALUE]
#define CMP_DL_FROM_PTR_ESI_(VALUE) cmp dl, byte ptr [esi + VALUE]
#define CMP_DL_FROM_PTR_EBP_(VALUE) cmp dl, byte ptr [ebp + VALUE]
#define CMP_DL_FROM_PTR_ESP_(VALUE) cmp dl, byte ptr [esp + VALUE]

#define CMP_DIL_FROM_PTR_RAX_(VALUE) cmp dil, byte ptr [rax + VALUE]
#define CMP_DIL_FROM_PTR_RBX_(VALUE) cmp dil, byte ptr [rbx + VALUE]
#define CMP_DIL_FROM_PTR_RCX_(VALUE) cmp dil, byte ptr [rcx + VALUE]
#define CMP_DIL_FROM_PTR_RDX_(VALUE) cmp dil, byte ptr [rdx + VALUE]
#define CMP_DIL_FROM_PTR_RDI_(VALUE) cmp dil, byte ptr [rdi + VALUE]
#define CMP_DIL_FROM_PTR_RSI_(VALUE) cmp dil, byte ptr [rsi + VALUE]
#define CMP_DIL_FROM_PTR_RBP_(VALUE) cmp dil, byte ptr [rbp + VALUE]
#define CMP_DIL_FROM_PTR_RSP_(VALUE) cmp dil, byte ptr [rsp + VALUE]
#define CMP_DIL_FROM_PTR_R8_(VALUE) cmp dil, byte ptr [r8 + VALUE]
#define CMP_DIL_FROM_PTR_R9_(VALUE) cmp dil, byte ptr [r9 + VALUE]
#define CMP_DIL_FROM_PTR_R10_(VALUE) cmp dil, byte ptr [r10 + VALUE]
#define CMP_DIL_FROM_PTR_R11_(VALUE) cmp dil, byte ptr [r11 + VALUE]
#define CMP_DIL_FROM_PTR_R12_(VALUE) cmp dil, byte ptr [r12 + VALUE]
#define CMP_DIL_FROM_PTR_R13_(VALUE) cmp dil, byte ptr [r13 + VALUE]
#define CMP_DIL_FROM_PTR_R14_(VALUE) cmp dil, byte ptr [r14 + VALUE]
#define CMP_DIL_FROM_PTR_R15_(VALUE) cmp dil, byte ptr [r15 + VALUE]
#define CMP_DIL_FROM_PTR_EAX_(VALUE) cmp dil, byte ptr [eax + VALUE]
#define CMP_DIL_FROM_PTR_EBX_(VALUE) cmp dil, byte ptr [ebx + VALUE]
#define CMP_DIL_FROM_PTR_ECX_(VALUE) cmp dil, byte ptr [ecx + VALUE]
#define CMP_DIL_FROM_PTR_EDX_(VALUE) cmp dil, byte ptr [edx + VALUE]
#define CMP_DIL_FROM_PTR_EDI_(VALUE) cmp dil, byte ptr [edi + VALUE]
#define CMP_DIL_FROM_PTR_ESI_(VALUE) cmp dil, byte ptr [esi + VALUE]
#define CMP_DIL_FROM_PTR_EBP_(VALUE) cmp dil, byte ptr [ebp + VALUE]
#define CMP_DIL_FROM_PTR_ESP_(VALUE) cmp dil, byte ptr [esp + VALUE]

#define CMP_SIL_FROM_PTR_RAX_(VALUE) cmp sil, byte ptr [rax + VALUE]
#define CMP_SIL_FROM_PTR_RBX_(VALUE) cmp sil, byte ptr [rbx + VALUE]
#define CMP_SIL_FROM_PTR_RCX_(VALUE) cmp sil, byte ptr [rcx + VALUE]
#define CMP_SIL_FROM_PTR_RDX_(VALUE) cmp sil, byte ptr [rdx + VALUE]
#define CMP_SIL_FROM_PTR_RDI_(VALUE) cmp sil, byte ptr [rdi + VALUE]
#define CMP_SIL_FROM_PTR_RSI_(VALUE) cmp sil, byte ptr [rsi + VALUE]
#define CMP_SIL_FROM_PTR_RBP_(VALUE) cmp sil, byte ptr [rbp + VALUE]
#define CMP_SIL_FROM_PTR_RSP_(VALUE) cmp sil, byte ptr [rsp + VALUE]
#define CMP_SIL_FROM_PTR_R8_(VALUE) cmp sil, byte ptr [r8 + VALUE]
#define CMP_SIL_FROM_PTR_R9_(VALUE) cmp sil, byte ptr [r9 + VALUE]
#define CMP_SIL_FROM_PTR_R10_(VALUE) cmp sil, byte ptr [r10 + VALUE]
#define CMP_SIL_FROM_PTR_R11_(VALUE) cmp sil, byte ptr [r11 + VALUE]
#define CMP_SIL_FROM_PTR_R12_(VALUE) cmp sil, byte ptr [r12 + VALUE]
#define CMP_SIL_FROM_PTR_R13_(VALUE) cmp sil, byte ptr [r13 + VALUE]
#define CMP_SIL_FROM_PTR_R14_(VALUE) cmp sil, byte ptr [r14 + VALUE]
#define CMP_SIL_FROM_PTR_R15_(VALUE) cmp sil, byte ptr [r15 + VALUE]
#define CMP_SIL_FROM_PTR_EAX_(VALUE) cmp sil, byte ptr [eax + VALUE]
#define CMP_SIL_FROM_PTR_EBX_(VALUE) cmp sil, byte ptr [ebx + VALUE]
#define CMP_SIL_FROM_PTR_ECX_(VALUE) cmp sil, byte ptr [ecx + VALUE]
#define CMP_SIL_FROM_PTR_EDX_(VALUE) cmp sil, byte ptr [edx + VALUE]
#define CMP_SIL_FROM_PTR_EDI_(VALUE) cmp sil, byte ptr [edi + VALUE]
#define CMP_SIL_FROM_PTR_ESI_(VALUE) cmp sil, byte ptr [esi + VALUE]
#define CMP_SIL_FROM_PTR_EBP_(VALUE) cmp sil, byte ptr [ebp + VALUE]
#define CMP_SIL_FROM_PTR_ESP_(VALUE) cmp sil, byte ptr [esp + VALUE]

#define CMP_BPL_FROM_PTR_RAX_(VALUE) cmp bpl, byte ptr [rax + VALUE]
#define CMP_BPL_FROM_PTR_RBX_(VALUE) cmp bpl, byte ptr [rbx + VALUE]
#define CMP_BPL_FROM_PTR_RCX_(VALUE) cmp bpl, byte ptr [rcx + VALUE]
#define CMP_BPL_FROM_PTR_RDX_(VALUE) cmp bpl, byte ptr [rdx + VALUE]
#define CMP_BPL_FROM_PTR_RDI_(VALUE) cmp bpl, byte ptr [rdi + VALUE]
#define CMP_BPL_FROM_PTR_RSI_(VALUE) cmp bpl, byte ptr [rsi + VALUE]
#define CMP_BPL_FROM_PTR_RBP_(VALUE) cmp bpl, byte ptr [rbp + VALUE]
#define CMP_BPL_FROM_PTR_RSP_(VALUE) cmp bpl, byte ptr [rsp + VALUE]
#define CMP_BPL_FROM_PTR_R8_(VALUE) cmp bpl, byte ptr [r8 + VALUE]
#define CMP_BPL_FROM_PTR_R9_(VALUE) cmp bpl, byte ptr [r9 + VALUE]
#define CMP_BPL_FROM_PTR_R10_(VALUE) cmp bpl, byte ptr [r10 + VALUE]
#define CMP_BPL_FROM_PTR_R11_(VALUE) cmp bpl, byte ptr [r11 + VALUE]
#define CMP_BPL_FROM_PTR_R12_(VALUE) cmp bpl, byte ptr [r12 + VALUE]
#define CMP_BPL_FROM_PTR_R13_(VALUE) cmp bpl, byte ptr [r13 + VALUE]
#define CMP_BPL_FROM_PTR_R14_(VALUE) cmp bpl, byte ptr [r14 + VALUE]
#define CMP_BPL_FROM_PTR_R15_(VALUE) cmp bpl, byte ptr [r15 + VALUE]
#define CMP_BPL_FROM_PTR_EAX_(VALUE) cmp bpl, byte ptr [eax + VALUE]
#define CMP_BPL_FROM_PTR_EBX_(VALUE) cmp bpl, byte ptr [ebx + VALUE]
#define CMP_BPL_FROM_PTR_ECX_(VALUE) cmp bpl, byte ptr [ecx + VALUE]
#define CMP_BPL_FROM_PTR_EDX_(VALUE) cmp bpl, byte ptr [edx + VALUE]
#define CMP_BPL_FROM_PTR_EDI_(VALUE) cmp bpl, byte ptr [edi + VALUE]
#define CMP_BPL_FROM_PTR_ESI_(VALUE) cmp bpl, byte ptr [esi + VALUE]
#define CMP_BPL_FROM_PTR_EBP_(VALUE) cmp bpl, byte ptr [ebp + VALUE]
#define CMP_BPL_FROM_PTR_ESP_(VALUE) cmp bpl, byte ptr [esp + VALUE]

#define CMP_SPL_FROM_PTR_RAX_(VALUE) cmp spl, byte ptr [rax + VALUE]
#define CMP_SPL_FROM_PTR_RBX_(VALUE) cmp spl, byte ptr [rbx + VALUE]
#define CMP_SPL_FROM_PTR_RCX_(VALUE) cmp spl, byte ptr [rcx + VALUE]
#define CMP_SPL_FROM_PTR_RDX_(VALUE) cmp spl, byte ptr [rdx + VALUE]
#define CMP_SPL_FROM_PTR_RDI_(VALUE) cmp spl, byte ptr [rdi + VALUE]
#define CMP_SPL_FROM_PTR_RSI_(VALUE) cmp spl, byte ptr [rsi + VALUE]
#define CMP_SPL_FROM_PTR_RBP_(VALUE) cmp spl, byte ptr [rbp + VALUE]
#define CMP_SPL_FROM_PTR_RSP_(VALUE) cmp spl, byte ptr [rsp + VALUE]
#define CMP_SPL_FROM_PTR_R8_(VALUE) cmp spl, byte ptr [r8 + VALUE]
#define CMP_SPL_FROM_PTR_R9_(VALUE) cmp spl, byte ptr [r9 + VALUE]
#define CMP_SPL_FROM_PTR_R10_(VALUE) cmp spl, byte ptr [r10 + VALUE]
#define CMP_SPL_FROM_PTR_R11_(VALUE) cmp spl, byte ptr [r11 + VALUE]
#define CMP_SPL_FROM_PTR_R12_(VALUE) cmp spl, byte ptr [r12 + VALUE]
#define CMP_SPL_FROM_PTR_R13_(VALUE) cmp spl, byte ptr [r13 + VALUE]
#define CMP_SPL_FROM_PTR_R14_(VALUE) cmp spl, byte ptr [r14 + VALUE]
#define CMP_SPL_FROM_PTR_R15_(VALUE) cmp spl, byte ptr [r15 + VALUE]
#define CMP_SPL_FROM_PTR_EAX_(VALUE) cmp spl, byte ptr [eax + VALUE]
#define CMP_SPL_FROM_PTR_EBX_(VALUE) cmp spl, byte ptr [ebx + VALUE]
#define CMP_SPL_FROM_PTR_ECX_(VALUE) cmp spl, byte ptr [ecx + VALUE]
#define CMP_SPL_FROM_PTR_EDX_(VALUE) cmp spl, byte ptr [edx + VALUE]
#define CMP_SPL_FROM_PTR_EDI_(VALUE) cmp spl, byte ptr [edi + VALUE]
#define CMP_SPL_FROM_PTR_ESI_(VALUE) cmp spl, byte ptr [esi + VALUE]
#define CMP_SPL_FROM_PTR_EBP_(VALUE) cmp spl, byte ptr [ebp + VALUE]
#define CMP_SPL_FROM_PTR_ESP_(VALUE) cmp spl, byte ptr [esp + VALUE]

#define CMP_R8B_FROM_PTR_RAX_(VALUE) cmp r8b, byte ptr [rax + VALUE]
#define CMP_R8B_FROM_PTR_RBX_(VALUE) cmp r8b, byte ptr [rbx + VALUE]
#define CMP_R8B_FROM_PTR_RCX_(VALUE) cmp r8b, byte ptr [rcx + VALUE]
#define CMP_R8B_FROM_PTR_RDX_(VALUE) cmp r8b, byte ptr [rdx + VALUE]
#define CMP_R8B_FROM_PTR_RDI_(VALUE) cmp r8b, byte ptr [rdi + VALUE]
#define CMP_R8B_FROM_PTR_RSI_(VALUE) cmp r8b, byte ptr [rsi + VALUE]
#define CMP_R8B_FROM_PTR_RBP_(VALUE) cmp r8b, byte ptr [rbp + VALUE]
#define CMP_R8B_FROM_PTR_RSP_(VALUE) cmp r8b, byte ptr [rsp + VALUE]
#define CMP_R8B_FROM_PTR_R8_(VALUE) cmp r8b, byte ptr [r8 + VALUE]
#define CMP_R8B_FROM_PTR_R9_(VALUE) cmp r8b, byte ptr [r9 + VALUE]
#define CMP_R8B_FROM_PTR_R10_(VALUE) cmp r8b, byte ptr [r10 + VALUE]
#define CMP_R8B_FROM_PTR_R11_(VALUE) cmp r8b, byte ptr [r11 + VALUE]
#define CMP_R8B_FROM_PTR_R12_(VALUE) cmp r8b, byte ptr [r12 + VALUE]
#define CMP_R8B_FROM_PTR_R13_(VALUE) cmp r8b, byte ptr [r13 + VALUE]
#define CMP_R8B_FROM_PTR_R14_(VALUE) cmp r8b, byte ptr [r14 + VALUE]
#define CMP_R8B_FROM_PTR_R15_(VALUE) cmp r8b, byte ptr [r15 + VALUE]
#define CMP_R8B_FROM_PTR_EAX_(VALUE) cmp r8b, byte ptr [eax + VALUE]
#define CMP_R8B_FROM_PTR_EBX_(VALUE) cmp r8b, byte ptr [ebx + VALUE]
#define CMP_R8B_FROM_PTR_ECX_(VALUE) cmp r8b, byte ptr [ecx + VALUE]
#define CMP_R8B_FROM_PTR_EDX_(VALUE) cmp r8b, byte ptr [edx + VALUE]
#define CMP_R8B_FROM_PTR_EDI_(VALUE) cmp r8b, byte ptr [edi + VALUE]
#define CMP_R8B_FROM_PTR_ESI_(VALUE) cmp r8b, byte ptr [esi + VALUE]
#define CMP_R8B_FROM_PTR_EBP_(VALUE) cmp r8b, byte ptr [ebp + VALUE]
#define CMP_R8B_FROM_PTR_ESP_(VALUE) cmp r8b, byte ptr [esp + VALUE]

#define CMP_R9B_FROM_PTR_RAX_(VALUE) cmp r9b, byte ptr [rax + VALUE]
#define CMP_R9B_FROM_PTR_RBX_(VALUE) cmp r9b, byte ptr [rbx + VALUE]
#define CMP_R9B_FROM_PTR_RCX_(VALUE) cmp r9b, byte ptr [rcx + VALUE]
#define CMP_R9B_FROM_PTR_RDX_(VALUE) cmp r9b, byte ptr [rdx + VALUE]
#define CMP_R9B_FROM_PTR_RDI_(VALUE) cmp r9b, byte ptr [rdi + VALUE]
#define CMP_R9B_FROM_PTR_RSI_(VALUE) cmp r9b, byte ptr [rsi + VALUE]
#define CMP_R9B_FROM_PTR_RBP_(VALUE) cmp r9b, byte ptr [rbp + VALUE]
#define CMP_R9B_FROM_PTR_RSP_(VALUE) cmp r9b, byte ptr [rsp + VALUE]
#define CMP_R9B_FROM_PTR_R8_(VALUE) cmp r9b, byte ptr [r8 + VALUE]
#define CMP_R9B_FROM_PTR_R9_(VALUE) cmp r9b, byte ptr [r9 + VALUE]
#define CMP_R9B_FROM_PTR_R10_(VALUE) cmp r9b, byte ptr [r10 + VALUE]
#define CMP_R9B_FROM_PTR_R11_(VALUE) cmp r9b, byte ptr [r11 + VALUE]
#define CMP_R9B_FROM_PTR_R12_(VALUE) cmp r9b, byte ptr [r12 + VALUE]
#define CMP_R9B_FROM_PTR_R13_(VALUE) cmp r9b, byte ptr [r13 + VALUE]
#define CMP_R9B_FROM_PTR_R14_(VALUE) cmp r9b, byte ptr [r14 + VALUE]
#define CMP_R9B_FROM_PTR_R15_(VALUE) cmp r9b, byte ptr [r15 + VALUE]
#define CMP_R9B_FROM_PTR_EAX_(VALUE) cmp r9b, byte ptr [eax + VALUE]
#define CMP_R9B_FROM_PTR_EBX_(VALUE) cmp r9b, byte ptr [ebx + VALUE]
#define CMP_R9B_FROM_PTR_ECX_(VALUE) cmp r9b, byte ptr [ecx + VALUE]
#define CMP_R9B_FROM_PTR_EDX_(VALUE) cmp r9b, byte ptr [edx + VALUE]
#define CMP_R9B_FROM_PTR_EDI_(VALUE) cmp r9b, byte ptr [edi + VALUE]
#define CMP_R9B_FROM_PTR_ESI_(VALUE) cmp r9b, byte ptr [esi + VALUE]
#define CMP_R9B_FROM_PTR_EBP_(VALUE) cmp r9b, byte ptr [ebp + VALUE]
#define CMP_R9B_FROM_PTR_ESP_(VALUE) cmp r9b, byte ptr [esp + VALUE]

#define CMP_R10B_FROM_PTR_RAX_(VALUE) cmp r10b, byte ptr [rax + VALUE]
#define CMP_R10B_FROM_PTR_RBX_(VALUE) cmp r10b, byte ptr [rbx + VALUE]
#define CMP_R10B_FROM_PTR_RCX_(VALUE) cmp r10b, byte ptr [rcx + VALUE]
#define CMP_R10B_FROM_PTR_RDX_(VALUE) cmp r10b, byte ptr [rdx + VALUE]
#define CMP_R10B_FROM_PTR_RDI_(VALUE) cmp r10b, byte ptr [rdi + VALUE]
#define CMP_R10B_FROM_PTR_RSI_(VALUE) cmp r10b, byte ptr [rsi + VALUE]
#define CMP_R10B_FROM_PTR_RBP_(VALUE) cmp r10b, byte ptr [rbp + VALUE]
#define CMP_R10B_FROM_PTR_RSP_(VALUE) cmp r10b, byte ptr [rsp + VALUE]
#define CMP_R10B_FROM_PTR_R8_(VALUE) cmp r10b, byte ptr [r8 + VALUE]
#define CMP_R10B_FROM_PTR_R9_(VALUE) cmp r10b, byte ptr [r9 + VALUE]
#define CMP_R10B_FROM_PTR_R10_(VALUE) cmp r10b, byte ptr [r10 + VALUE]
#define CMP_R10B_FROM_PTR_R11_(VALUE) cmp r10b, byte ptr [r11 + VALUE]
#define CMP_R10B_FROM_PTR_R12_(VALUE) cmp r10b, byte ptr [r12 + VALUE]
#define CMP_R10B_FROM_PTR_R13_(VALUE) cmp r10b, byte ptr [r13 + VALUE]
#define CMP_R10B_FROM_PTR_R14_(VALUE) cmp r10b, byte ptr [r14 + VALUE]
#define CMP_R10B_FROM_PTR_R15_(VALUE) cmp r10b, byte ptr [r15 + VALUE]
#define CMP_R10B_FROM_PTR_EAX_(VALUE) cmp r10b, byte ptr [eax + VALUE]
#define CMP_R10B_FROM_PTR_EBX_(VALUE) cmp r10b, byte ptr [ebx + VALUE]
#define CMP_R10B_FROM_PTR_ECX_(VALUE) cmp r10b, byte ptr [ecx + VALUE]
#define CMP_R10B_FROM_PTR_EDX_(VALUE) cmp r10b, byte ptr [edx + VALUE]
#define CMP_R10B_FROM_PTR_EDI_(VALUE) cmp r10b, byte ptr [edi + VALUE]
#define CMP_R10B_FROM_PTR_ESI_(VALUE) cmp r10b, byte ptr [esi + VALUE]
#define CMP_R10B_FROM_PTR_EBP_(VALUE) cmp r10b, byte ptr [ebp + VALUE]
#define CMP_R10B_FROM_PTR_ESP_(VALUE) cmp r10b, byte ptr [esp + VALUE]

#define CMP_R11B_FROM_PTR_RAX_(VALUE) cmp r11b, byte ptr [rax + VALUE]
#define CMP_R11B_FROM_PTR_RBX_(VALUE) cmp r11b, byte ptr [rbx + VALUE]
#define CMP_R11B_FROM_PTR_RCX_(VALUE) cmp r11b, byte ptr [rcx + VALUE]
#define CMP_R11B_FROM_PTR_RDX_(VALUE) cmp r11b, byte ptr [rdx + VALUE]
#define CMP_R11B_FROM_PTR_RDI_(VALUE) cmp r11b, byte ptr [rdi + VALUE]
#define CMP_R11B_FROM_PTR_RSI_(VALUE) cmp r11b, byte ptr [rsi + VALUE]
#define CMP_R11B_FROM_PTR_RBP_(VALUE) cmp r11b, byte ptr [rbp + VALUE]
#define CMP_R11B_FROM_PTR_RSP_(VALUE) cmp r11b, byte ptr [rsp + VALUE]
#define CMP_R11B_FROM_PTR_R8_(VALUE) cmp r11b, byte ptr [r8 + VALUE]
#define CMP_R11B_FROM_PTR_R9_(VALUE) cmp r11b, byte ptr [r9 + VALUE]
#define CMP_R11B_FROM_PTR_R10_(VALUE) cmp r11b, byte ptr [r10 + VALUE]
#define CMP_R11B_FROM_PTR_R11_(VALUE) cmp r11b, byte ptr [r11 + VALUE]
#define CMP_R11B_FROM_PTR_R12_(VALUE) cmp r11b, byte ptr [r12 + VALUE]
#define CMP_R11B_FROM_PTR_R13_(VALUE) cmp r11b, byte ptr [r13 + VALUE]
#define CMP_R11B_FROM_PTR_R14_(VALUE) cmp r11b, byte ptr [r14 + VALUE]
#define CMP_R11B_FROM_PTR_R15_(VALUE) cmp r11b, byte ptr [r15 + VALUE]
#define CMP_R11B_FROM_PTR_EAX_(VALUE) cmp r11b, byte ptr [eax + VALUE]
#define CMP_R11B_FROM_PTR_EBX_(VALUE) cmp r11b, byte ptr [ebx + VALUE]
#define CMP_R11B_FROM_PTR_ECX_(VALUE) cmp r11b, byte ptr [ecx + VALUE]
#define CMP_R11B_FROM_PTR_EDX_(VALUE) cmp r11b, byte ptr [edx + VALUE]
#define CMP_R11B_FROM_PTR_EDI_(VALUE) cmp r11b, byte ptr [edi + VALUE]
#define CMP_R11B_FROM_PTR_ESI_(VALUE) cmp r11b, byte ptr [esi + VALUE]
#define CMP_R11B_FROM_PTR_EBP_(VALUE) cmp r11b, byte ptr [ebp + VALUE]
#define CMP_R11B_FROM_PTR_ESP_(VALUE) cmp r11b, byte ptr [esp + VALUE]

#define CMP_R12B_FROM_PTR_RAX_(VALUE) cmp r12b, byte ptr [rax + VALUE]
#define CMP_R12B_FROM_PTR_RBX_(VALUE) cmp r12b, byte ptr [rbx + VALUE]
#define CMP_R12B_FROM_PTR_RCX_(VALUE) cmp r12b, byte ptr [rcx + VALUE]
#define CMP_R12B_FROM_PTR_RDX_(VALUE) cmp r12b, byte ptr [rdx + VALUE]
#define CMP_R12B_FROM_PTR_RDI_(VALUE) cmp r12b, byte ptr [rdi + VALUE]
#define CMP_R12B_FROM_PTR_RSI_(VALUE) cmp r12b, byte ptr [rsi + VALUE]
#define CMP_R12B_FROM_PTR_RBP_(VALUE) cmp r12b, byte ptr [rbp + VALUE]
#define CMP_R12B_FROM_PTR_RSP_(VALUE) cmp r12b, byte ptr [rsp + VALUE]
#define CMP_R12B_FROM_PTR_R8_(VALUE) cmp r12b, byte ptr [r8 + VALUE]
#define CMP_R12B_FROM_PTR_R9_(VALUE) cmp r12b, byte ptr [r9 + VALUE]
#define CMP_R12B_FROM_PTR_R10_(VALUE) cmp r12b, byte ptr [r10 + VALUE]
#define CMP_R12B_FROM_PTR_R11_(VALUE) cmp r12b, byte ptr [r11 + VALUE]
#define CMP_R12B_FROM_PTR_R12_(VALUE) cmp r12b, byte ptr [r12 + VALUE]
#define CMP_R12B_FROM_PTR_R13_(VALUE) cmp r12b, byte ptr [r13 + VALUE]
#define CMP_R12B_FROM_PTR_R14_(VALUE) cmp r12b, byte ptr [r14 + VALUE]
#define CMP_R12B_FROM_PTR_R15_(VALUE) cmp r12b, byte ptr [r15 + VALUE]
#define CMP_R12B_FROM_PTR_EAX_(VALUE) cmp r12b, byte ptr [eax + VALUE]
#define CMP_R12B_FROM_PTR_EBX_(VALUE) cmp r12b, byte ptr [ebx + VALUE]
#define CMP_R12B_FROM_PTR_ECX_(VALUE) cmp r12b, byte ptr [ecx + VALUE]
#define CMP_R12B_FROM_PTR_EDX_(VALUE) cmp r12b, byte ptr [edx + VALUE]
#define CMP_R12B_FROM_PTR_EDI_(VALUE) cmp r12b, byte ptr [edi + VALUE]
#define CMP_R12B_FROM_PTR_ESI_(VALUE) cmp r12b, byte ptr [esi + VALUE]
#define CMP_R12B_FROM_PTR_EBP_(VALUE) cmp r12b, byte ptr [ebp + VALUE]
#define CMP_R12B_FROM_PTR_ESP_(VALUE) cmp r12b, byte ptr [esp + VALUE]

#define CMP_R13B_FROM_PTR_RAX_(VALUE) cmp r13b, byte ptr [rax + VALUE]
#define CMP_R13B_FROM_PTR_RBX_(VALUE) cmp r13b, byte ptr [rbx + VALUE]
#define CMP_R13B_FROM_PTR_RCX_(VALUE) cmp r13b, byte ptr [rcx + VALUE]
#define CMP_R13B_FROM_PTR_RDX_(VALUE) cmp r13b, byte ptr [rdx + VALUE]
#define CMP_R13B_FROM_PTR_RDI_(VALUE) cmp r13b, byte ptr [rdi + VALUE]
#define CMP_R13B_FROM_PTR_RSI_(VALUE) cmp r13b, byte ptr [rsi + VALUE]
#define CMP_R13B_FROM_PTR_RBP_(VALUE) cmp r13b, byte ptr [rbp + VALUE]
#define CMP_R13B_FROM_PTR_RSP_(VALUE) cmp r13b, byte ptr [rsp + VALUE]
#define CMP_R13B_FROM_PTR_R8_(VALUE) cmp r13b, byte ptr [r8 + VALUE]
#define CMP_R13B_FROM_PTR_R9_(VALUE) cmp r13b, byte ptr [r9 + VALUE]
#define CMP_R13B_FROM_PTR_R10_(VALUE) cmp r13b, byte ptr [r10 + VALUE]
#define CMP_R13B_FROM_PTR_R11_(VALUE) cmp r13b, byte ptr [r11 + VALUE]
#define CMP_R13B_FROM_PTR_R12_(VALUE) cmp r13b, byte ptr [r12 + VALUE]
#define CMP_R13B_FROM_PTR_R13_(VALUE) cmp r13b, byte ptr [r13 + VALUE]
#define CMP_R13B_FROM_PTR_R14_(VALUE) cmp r13b, byte ptr [r14 + VALUE]
#define CMP_R13B_FROM_PTR_R15_(VALUE) cmp r13b, byte ptr [r15 + VALUE]
#define CMP_R13B_FROM_PTR_EAX_(VALUE) cmp r13b, byte ptr [eax + VALUE]
#define CMP_R13B_FROM_PTR_EBX_(VALUE) cmp r13b, byte ptr [ebx + VALUE]
#define CMP_R13B_FROM_PTR_ECX_(VALUE) cmp r13b, byte ptr [ecx + VALUE]
#define CMP_R13B_FROM_PTR_EDX_(VALUE) cmp r13b, byte ptr [edx + VALUE]
#define CMP_R13B_FROM_PTR_EDI_(VALUE) cmp r13b, byte ptr [edi + VALUE]
#define CMP_R13B_FROM_PTR_ESI_(VALUE) cmp r13b, byte ptr [esi + VALUE]
#define CMP_R13B_FROM_PTR_EBP_(VALUE) cmp r13b, byte ptr [ebp + VALUE]
#define CMP_R13B_FROM_PTR_ESP_(VALUE) cmp r13b, byte ptr [esp + VALUE]

#define CMP_R14B_FROM_PTR_RAX_(VALUE) cmp r14b, byte ptr [rax + VALUE]
#define CMP_R14B_FROM_PTR_RBX_(VALUE) cmp r14b, byte ptr [rbx + VALUE]
#define CMP_R14B_FROM_PTR_RCX_(VALUE) cmp r14b, byte ptr [rcx + VALUE]
#define CMP_R14B_FROM_PTR_RDX_(VALUE) cmp r14b, byte ptr [rdx + VALUE]
#define CMP_R14B_FROM_PTR_RDI_(VALUE) cmp r14b, byte ptr [rdi + VALUE]
#define CMP_R14B_FROM_PTR_RSI_(VALUE) cmp r14b, byte ptr [rsi + VALUE]
#define CMP_R14B_FROM_PTR_RBP_(VALUE) cmp r14b, byte ptr [rbp + VALUE]
#define CMP_R14B_FROM_PTR_RSP_(VALUE) cmp r14b, byte ptr [rsp + VALUE]
#define CMP_R14B_FROM_PTR_R8_(VALUE) cmp r14b, byte ptr [r8 + VALUE]
#define CMP_R14B_FROM_PTR_R9_(VALUE) cmp r14b, byte ptr [r9 + VALUE]
#define CMP_R14B_FROM_PTR_R10_(VALUE) cmp r14b, byte ptr [r10 + VALUE]
#define CMP_R14B_FROM_PTR_R11_(VALUE) cmp r14b, byte ptr [r11 + VALUE]
#define CMP_R14B_FROM_PTR_R12_(VALUE) cmp r14b, byte ptr [r12 + VALUE]
#define CMP_R14B_FROM_PTR_R13_(VALUE) cmp r14b, byte ptr [r13 + VALUE]
#define CMP_R14B_FROM_PTR_R14_(VALUE) cmp r14b, byte ptr [r14 + VALUE]
#define CMP_R14B_FROM_PTR_R15_(VALUE) cmp r14b, byte ptr [r15 + VALUE]
#define CMP_R14B_FROM_PTR_EAX_(VALUE) cmp r14b, byte ptr [eax + VALUE]
#define CMP_R14B_FROM_PTR_EBX_(VALUE) cmp r14b, byte ptr [ebx + VALUE]
#define CMP_R14B_FROM_PTR_ECX_(VALUE) cmp r14b, byte ptr [ecx + VALUE]
#define CMP_R14B_FROM_PTR_EDX_(VALUE) cmp r14b, byte ptr [edx + VALUE]
#define CMP_R14B_FROM_PTR_EDI_(VALUE) cmp r14b, byte ptr [edi + VALUE]
#define CMP_R14B_FROM_PTR_ESI_(VALUE) cmp r14b, byte ptr [esi + VALUE]
#define CMP_R14B_FROM_PTR_EBP_(VALUE) cmp r14b, byte ptr [ebp + VALUE]
#define CMP_R14B_FROM_PTR_ESP_(VALUE) cmp r14b, byte ptr [esp + VALUE]

#define CMP_R15B_FROM_PTR_RAX_(VALUE) cmp r15b, byte ptr [rax + VALUE]
#define CMP_R15B_FROM_PTR_RBX_(VALUE) cmp r15b, byte ptr [rbx + VALUE]
#define CMP_R15B_FROM_PTR_RCX_(VALUE) cmp r15b, byte ptr [rcx + VALUE]
#define CMP_R15B_FROM_PTR_RDX_(VALUE) cmp r15b, byte ptr [rdx + VALUE]
#define CMP_R15B_FROM_PTR_RDI_(VALUE) cmp r15b, byte ptr [rdi + VALUE]
#define CMP_R15B_FROM_PTR_RSI_(VALUE) cmp r15b, byte ptr [rsi + VALUE]
#define CMP_R15B_FROM_PTR_RBP_(VALUE) cmp r15b, byte ptr [rbp + VALUE]
#define CMP_R15B_FROM_PTR_RSP_(VALUE) cmp r15b, byte ptr [rsp + VALUE]
#define CMP_R15B_FROM_PTR_R8_(VALUE) cmp r15b, byte ptr [r8 + VALUE]
#define CMP_R15B_FROM_PTR_R9_(VALUE) cmp r15b, byte ptr [r9 + VALUE]
#define CMP_R15B_FROM_PTR_R10_(VALUE) cmp r15b, byte ptr [r10 + VALUE]
#define CMP_R15B_FROM_PTR_R11_(VALUE) cmp r15b, byte ptr [r11 + VALUE]
#define CMP_R15B_FROM_PTR_R12_(VALUE) cmp r15b, byte ptr [r12 + VALUE]
#define CMP_R15B_FROM_PTR_R13_(VALUE) cmp r15b, byte ptr [r13 + VALUE]
#define CMP_R15B_FROM_PTR_R14_(VALUE) cmp r15b, byte ptr [r14 + VALUE]
#define CMP_R15B_FROM_PTR_R15_(VALUE) cmp r15b, byte ptr [r15 + VALUE]
#define CMP_R15B_FROM_PTR_EAX_(VALUE) cmp r15b, byte ptr [eax + VALUE]
#define CMP_R15B_FROM_PTR_EBX_(VALUE) cmp r15b, byte ptr [ebx + VALUE]
#define CMP_R15B_FROM_PTR_ECX_(VALUE) cmp r15b, byte ptr [ecx + VALUE]
#define CMP_R15B_FROM_PTR_EDX_(VALUE) cmp r15b, byte ptr [edx + VALUE]
#define CMP_R15B_FROM_PTR_EDI_(VALUE) cmp r15b, byte ptr [edi + VALUE]
#define CMP_R15B_FROM_PTR_ESI_(VALUE) cmp r15b, byte ptr [esi + VALUE]
#define CMP_R15B_FROM_PTR_EBP_(VALUE) cmp r15b, byte ptr [ebp + VALUE]
#define CMP_R15B_FROM_PTR_ESP_(VALUE) cmp r15b, byte ptr [esp + VALUE]

#define CMP_AL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], al
#define CMP_AL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], al
#define CMP_AL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], al
#define CMP_AL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], al
#define CMP_AL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], al
#define CMP_AL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], al
#define CMP_AL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], al
#define CMP_AL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], al
#define CMP_AL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], al
#define CMP_AL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], al
#define CMP_AL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], al
#define CMP_AL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], al
#define CMP_AL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], al
#define CMP_AL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], al
#define CMP_AL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], al
#define CMP_AL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], al
#define CMP_AL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], al
#define CMP_AL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], al
#define CMP_AL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], al
#define CMP_AL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], al
#define CMP_AL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], al
#define CMP_AL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], al
#define CMP_AL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], al
#define CMP_AL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], al

#define CMP_BL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], bl
#define CMP_BL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], bl
#define CMP_BL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], bl
#define CMP_BL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], bl
#define CMP_BL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], bl
#define CMP_BL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], bl
#define CMP_BL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], bl
#define CMP_BL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], bl
#define CMP_BL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], bl
#define CMP_BL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], bl
#define CMP_BL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], bl
#define CMP_BL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], bl
#define CMP_BL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], bl
#define CMP_BL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], bl
#define CMP_BL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], bl
#define CMP_BL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], bl
#define CMP_BL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], bl
#define CMP_BL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], bl
#define CMP_BL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], bl
#define CMP_BL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], bl
#define CMP_BL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], bl
#define CMP_BL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], bl
#define CMP_BL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], bl
#define CMP_BL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], bl

#define CMP_CL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], cl
#define CMP_CL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], cl
#define CMP_CL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], cl
#define CMP_CL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], cl
#define CMP_CL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], cl
#define CMP_CL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], cl
#define CMP_CL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], cl
#define CMP_CL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], cl
#define CMP_CL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], cl
#define CMP_CL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], cl
#define CMP_CL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], cl
#define CMP_CL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], cl
#define CMP_CL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], cl
#define CMP_CL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], cl
#define CMP_CL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], cl
#define CMP_CL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], cl
#define CMP_CL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], cl
#define CMP_CL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], cl
#define CMP_CL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], cl
#define CMP_CL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], cl
#define CMP_CL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], cl
#define CMP_CL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], cl
#define CMP_CL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], cl
#define CMP_CL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], cl

#define CMP_DL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], dl
#define CMP_DL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], dl
#define CMP_DL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], dl
#define CMP_DL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], dl
#define CMP_DL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], dl
#define CMP_DL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], dl
#define CMP_DL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], dl
#define CMP_DL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], dl
#define CMP_DL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], dl
#define CMP_DL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], dl
#define CMP_DL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], dl
#define CMP_DL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], dl
#define CMP_DL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], dl
#define CMP_DL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], dl
#define CMP_DL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], dl
#define CMP_DL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], dl
#define CMP_DL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], dl
#define CMP_DL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], dl
#define CMP_DL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], dl
#define CMP_DL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], dl
#define CMP_DL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], dl
#define CMP_DL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], dl
#define CMP_DL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], dl
#define CMP_DL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], dl

#define CMP_DIL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], dil
#define CMP_DIL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], dil
#define CMP_DIL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], dil
#define CMP_DIL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], dil
#define CMP_DIL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], dil
#define CMP_DIL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], dil
#define CMP_DIL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], dil
#define CMP_DIL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], dil
#define CMP_DIL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], dil
#define CMP_DIL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], dil
#define CMP_DIL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], dil
#define CMP_DIL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], dil
#define CMP_DIL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], dil
#define CMP_DIL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], dil
#define CMP_DIL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], dil
#define CMP_DIL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], dil
#define CMP_DIL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], dil
#define CMP_DIL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], dil
#define CMP_DIL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], dil
#define CMP_DIL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], dil
#define CMP_DIL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], dil
#define CMP_DIL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], dil
#define CMP_DIL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], dil
#define CMP_DIL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], dil

#define CMP_SIL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], sil
#define CMP_SIL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], sil
#define CMP_SIL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], sil
#define CMP_SIL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], sil
#define CMP_SIL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], sil
#define CMP_SIL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], sil
#define CMP_SIL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], sil
#define CMP_SIL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], sil
#define CMP_SIL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], sil
#define CMP_SIL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], sil
#define CMP_SIL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], sil
#define CMP_SIL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], sil
#define CMP_SIL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], sil
#define CMP_SIL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], sil
#define CMP_SIL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], sil
#define CMP_SIL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], sil
#define CMP_SIL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], sil
#define CMP_SIL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], sil
#define CMP_SIL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], sil
#define CMP_SIL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], sil
#define CMP_SIL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], sil
#define CMP_SIL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], sil
#define CMP_SIL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], sil
#define CMP_SIL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], sil

#define CMP_BPL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], bpl
#define CMP_BPL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], bpl
#define CMP_BPL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], bpl
#define CMP_BPL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], bpl
#define CMP_BPL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], bpl
#define CMP_BPL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], bpl
#define CMP_BPL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], bpl
#define CMP_BPL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], bpl
#define CMP_BPL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], bpl
#define CMP_BPL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], bpl
#define CMP_BPL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], bpl
#define CMP_BPL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], bpl
#define CMP_BPL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], bpl
#define CMP_BPL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], bpl
#define CMP_BPL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], bpl
#define CMP_BPL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], bpl
#define CMP_BPL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], bpl
#define CMP_BPL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], bpl
#define CMP_BPL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], bpl
#define CMP_BPL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], bpl
#define CMP_BPL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], bpl
#define CMP_BPL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], bpl
#define CMP_BPL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], bpl
#define CMP_BPL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], bpl

#define CMP_SPL_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], spl
#define CMP_SPL_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], spl
#define CMP_SPL_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], spl
#define CMP_SPL_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], spl
#define CMP_SPL_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], spl
#define CMP_SPL_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], spl
#define CMP_SPL_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], spl
#define CMP_SPL_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], spl
#define CMP_SPL_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], spl
#define CMP_SPL_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], spl
#define CMP_SPL_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], spl
#define CMP_SPL_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], spl
#define CMP_SPL_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], spl
#define CMP_SPL_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], spl
#define CMP_SPL_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], spl
#define CMP_SPL_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], spl
#define CMP_SPL_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], spl
#define CMP_SPL_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], spl
#define CMP_SPL_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], spl
#define CMP_SPL_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], spl
#define CMP_SPL_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], spl
#define CMP_SPL_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], spl
#define CMP_SPL_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], spl
#define CMP_SPL_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], spl

#define CMP_R8B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r8b
#define CMP_R8B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r8b
#define CMP_R8B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r8b
#define CMP_R8B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r8b
#define CMP_R8B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r8b
#define CMP_R8B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r8b
#define CMP_R8B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r8b
#define CMP_R8B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r8b
#define CMP_R8B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r8b
#define CMP_R8B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r8b
#define CMP_R8B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r8b
#define CMP_R8B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r8b
#define CMP_R8B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r8b
#define CMP_R8B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r8b
#define CMP_R8B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r8b
#define CMP_R8B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r8b
#define CMP_R8B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r8b
#define CMP_R8B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r8b
#define CMP_R8B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r8b
#define CMP_R8B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r8b
#define CMP_R8B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r8b
#define CMP_R8B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r8b
#define CMP_R8B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r8b
#define CMP_R8B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r8b

#define CMP_R9B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r9b
#define CMP_R9B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r9b
#define CMP_R9B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r9b
#define CMP_R9B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r9b
#define CMP_R9B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r9b
#define CMP_R9B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r9b
#define CMP_R9B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r9b
#define CMP_R9B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r9b
#define CMP_R9B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r9b
#define CMP_R9B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r9b
#define CMP_R9B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r9b
#define CMP_R9B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r9b
#define CMP_R9B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r9b
#define CMP_R9B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r9b
#define CMP_R9B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r9b
#define CMP_R9B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r9b
#define CMP_R9B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r9b
#define CMP_R9B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r9b
#define CMP_R9B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r9b
#define CMP_R9B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r9b
#define CMP_R9B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r9b
#define CMP_R9B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r9b
#define CMP_R9B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r9b
#define CMP_R9B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r9b

#define CMP_R10B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r10b
#define CMP_R10B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r10b
#define CMP_R10B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r10b
#define CMP_R10B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r10b
#define CMP_R10B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r10b
#define CMP_R10B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r10b
#define CMP_R10B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r10b
#define CMP_R10B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r10b
#define CMP_R10B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r10b
#define CMP_R10B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r10b
#define CMP_R10B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r10b
#define CMP_R10B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r10b
#define CMP_R10B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r10b
#define CMP_R10B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r10b
#define CMP_R10B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r10b
#define CMP_R10B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r10b
#define CMP_R10B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r10b
#define CMP_R10B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r10b
#define CMP_R10B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r10b
#define CMP_R10B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r10b
#define CMP_R10B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r10b
#define CMP_R10B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r10b
#define CMP_R10B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r10b
#define CMP_R10B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r10b

#define CMP_R11B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r11b
#define CMP_R11B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r11b
#define CMP_R11B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r11b
#define CMP_R11B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r11b
#define CMP_R11B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r11b
#define CMP_R11B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r11b
#define CMP_R11B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r11b
#define CMP_R11B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r11b
#define CMP_R11B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r11b
#define CMP_R11B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r11b
#define CMP_R11B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r11b
#define CMP_R11B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r11b
#define CMP_R11B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r11b
#define CMP_R11B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r11b
#define CMP_R11B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r11b
#define CMP_R11B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r11b
#define CMP_R11B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r11b
#define CMP_R11B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r11b
#define CMP_R11B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r11b
#define CMP_R11B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r11b
#define CMP_R11B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r11b
#define CMP_R11B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r11b
#define CMP_R11B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r11b
#define CMP_R11B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r11b

#define CMP_R12B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r12b
#define CMP_R12B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r12b
#define CMP_R12B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r12b
#define CMP_R12B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r12b
#define CMP_R12B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r12b
#define CMP_R12B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r12b
#define CMP_R12B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r12b
#define CMP_R12B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r12b
#define CMP_R12B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r12b
#define CMP_R12B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r12b
#define CMP_R12B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r12b
#define CMP_R12B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r12b
#define CMP_R12B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r12b
#define CMP_R12B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r12b
#define CMP_R12B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r12b
#define CMP_R12B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r12b
#define CMP_R12B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r12b
#define CMP_R12B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r12b
#define CMP_R12B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r12b
#define CMP_R12B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r12b
#define CMP_R12B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r12b
#define CMP_R12B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r12b
#define CMP_R12B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r12b
#define CMP_R12B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r12b

#define CMP_R13B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r13b
#define CMP_R13B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r13b
#define CMP_R13B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r13b
#define CMP_R13B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r13b
#define CMP_R13B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r13b
#define CMP_R13B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r13b
#define CMP_R13B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r13b
#define CMP_R13B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r13b
#define CMP_R13B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r13b
#define CMP_R13B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r13b
#define CMP_R13B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r13b
#define CMP_R13B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r13b
#define CMP_R13B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r13b
#define CMP_R13B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r13b
#define CMP_R13B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r13b
#define CMP_R13B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r13b
#define CMP_R13B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r13b
#define CMP_R13B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r13b
#define CMP_R13B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r13b
#define CMP_R13B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r13b
#define CMP_R13B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r13b
#define CMP_R13B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r13b
#define CMP_R13B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r13b
#define CMP_R13B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r13b

#define CMP_R14B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r14b
#define CMP_R14B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r14b
#define CMP_R14B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r14b
#define CMP_R14B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r14b
#define CMP_R14B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r14b
#define CMP_R14B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r14b
#define CMP_R14B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r14b
#define CMP_R14B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r14b
#define CMP_R14B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r14b
#define CMP_R14B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r14b
#define CMP_R14B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r14b
#define CMP_R14B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r14b
#define CMP_R14B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r14b
#define CMP_R14B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r14b
#define CMP_R14B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r14b
#define CMP_R14B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r14b
#define CMP_R14B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r14b
#define CMP_R14B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r14b
#define CMP_R14B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r14b
#define CMP_R14B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r14b
#define CMP_R14B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r14b
#define CMP_R14B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r14b
#define CMP_R14B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r14b
#define CMP_R14B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r14b

#define CMP_R15B_TO_PTR_RAX_(VALUE) cmp byte ptr [rax + VALUE], r15b
#define CMP_R15B_TO_PTR_RBX_(VALUE) cmp byte ptr [rbx + VALUE], r15b
#define CMP_R15B_TO_PTR_RCX_(VALUE) cmp byte ptr [rcx + VALUE], r15b
#define CMP_R15B_TO_PTR_RDX_(VALUE) cmp byte ptr [rdx + VALUE], r15b
#define CMP_R15B_TO_PTR_RDI_(VALUE) cmp byte ptr [rdi + VALUE], r15b
#define CMP_R15B_TO_PTR_RSI_(VALUE) cmp byte ptr [rsi + VALUE], r15b
#define CMP_R15B_TO_PTR_RBP_(VALUE) cmp byte ptr [rbp + VALUE], r15b
#define CMP_R15B_TO_PTR_RSP_(VALUE) cmp byte ptr [rsp + VALUE], r15b
#define CMP_R15B_TO_PTR_R8_(VALUE) cmp byte ptr [r8 + VALUE], r15b
#define CMP_R15B_TO_PTR_R9_(VALUE) cmp byte ptr [r9 + VALUE], r15b
#define CMP_R15B_TO_PTR_R10_(VALUE) cmp byte ptr [r10 + VALUE], r15b
#define CMP_R15B_TO_PTR_R11_(VALUE) cmp byte ptr [r11 + VALUE], r15b
#define CMP_R15B_TO_PTR_R12_(VALUE) cmp byte ptr [r12 + VALUE], r15b
#define CMP_R15B_TO_PTR_R13_(VALUE) cmp byte ptr [r13 + VALUE], r15b
#define CMP_R15B_TO_PTR_R14_(VALUE) cmp byte ptr [r14 + VALUE], r15b
#define CMP_R15B_TO_PTR_R15_(VALUE) cmp byte ptr [r15 + VALUE], r15b
#define CMP_R15B_TO_PTR_EAX_(VALUE) cmp byte ptr [eax + VALUE], r15b
#define CMP_R15B_TO_PTR_EBX_(VALUE) cmp byte ptr [ebx + VALUE], r15b
#define CMP_R15B_TO_PTR_ECX_(VALUE) cmp byte ptr [ecx + VALUE], r15b
#define CMP_R15B_TO_PTR_EDX_(VALUE) cmp byte ptr [edx + VALUE], r15b
#define CMP_R15B_TO_PTR_EDI_(VALUE) cmp byte ptr [edi + VALUE], r15b
#define CMP_R15B_TO_PTR_ESI_(VALUE) cmp byte ptr [esi + VALUE], r15b
#define CMP_R15B_TO_PTR_EBP_(VALUE) cmp byte ptr [ebp + VALUE], r15b
#define CMP_R15B_TO_PTR_ESP_(VALUE) cmp byte ptr [esp + VALUE], r15b
#endif /* __SYSTEM_64_BIT__ */
/* ************************** [^] 8-BIT MEMORY [^] ************************** */

/* ************************* [v] 16-BIT MEMORY [v] ************************** */
#ifdef __SYSTEM_16_BIT__
#define CMP_AX_FROM_PTR_(VALUE) cmp ax, word ptr [VALUE]
#define CMP_BX_FROM_PTR_(VALUE) cmp bx, word ptr [VALUE]
#define CMP_CX_FROM_PTR_(VALUE) cmp cx, word ptr [VALUE]
#define CMP_DX_FROM_PTR_(VALUE) cmp dx, word ptr [VALUE]
#define CMP_DI_FROM_PTR_(VALUE) cmp di, word ptr [VALUE]
#define CMP_SI_FROM_PTR_(VALUE) cmp si, word ptr [VALUE]
#define CMP_BP_FROM_PTR_(VALUE) cmp bp, word ptr [VALUE]
#define CMP_SP_FROM_PTR_(VALUE) cmp sp, word ptr [VALUE]

#define CMP_AX_TO_PTR_(VALUE) cmp word ptr [VALUE], ax
#define CMP_BX_TO_PTR_(VALUE) cmp word ptr [VALUE], bx
#define CMP_CX_TO_PTR_(VALUE) cmp word ptr [VALUE], cx
#define CMP_DX_TO_PTR_(VALUE) cmp word ptr [VALUE], dx
#define CMP_DI_TO_PTR_(VALUE) cmp word ptr [VALUE], di
#define CMP_SI_TO_PTR_(VALUE) cmp word ptr [VALUE], si
#define CMP_BP_TO_PTR_(VALUE) cmp word ptr [VALUE], bp
#define CMP_SP_TO_PTR_(VALUE) cmp word ptr [VALUE], sp

#define CMP_AX_FROM_PTR_BX cmp ax, word ptr [bx]
#define CMP_AX_FROM_PTR_BP cmp ax, word ptr [bp]
#define CMP_AX_FROM_PTR_SI cmp ax, word ptr [si]
#define CMP_AX_FROM_PTR_DI cmp ax, word ptr [di]

#define CMP_BX_FROM_PTR_BX cmp bx, word ptr [bx]
#define CMP_BX_FROM_PTR_BP cmp bx, word ptr [bp]
#define CMP_BX_FROM_PTR_SI cmp bx, word ptr [si]
#define CMP_BX_FROM_PTR_DI cmp bx, word ptr [di]

#define CMP_CX_FROM_PTR_BX cmp cx, word ptr [bx]
#define CMP_CX_FROM_PTR_BP cmp cx, word ptr [bp]
#define CMP_CX_FROM_PTR_SI cmp cx, word ptr [si]
#define CMP_CX_FROM_PTR_DI cmp cx, word ptr [di]

#define CMP_DX_FROM_PTR_BX cmp dx, word ptr [bx]
#define CMP_DX_FROM_PTR_BP cmp dx, word ptr [bp]
#define CMP_DX_FROM_PTR_SI cmp dx, word ptr [si]
#define CMP_DX_FROM_PTR_DI cmp dx, word ptr [di]

#define CMP_DI_FROM_PTR_BX cmp di, word ptr [bx]
#define CMP_DI_FROM_PTR_BP cmp di, word ptr [bp]
#define CMP_DI_FROM_PTR_SI cmp di, word ptr [si]
#define CMP_DI_FROM_PTR_DI cmp di, word ptr [di]

#define CMP_SI_FROM_PTR_BX cmp si, word ptr [bx]
#define CMP_SI_FROM_PTR_BP cmp si, word ptr [bp]
#define CMP_SI_FROM_PTR_SI cmp si, word ptr [si]
#define CMP_SI_FROM_PTR_DI cmp si, word ptr [di]

#define CMP_BP_FROM_PTR_BX cmp bp, word ptr [bx]
#define CMP_BP_FROM_PTR_BP cmp bp, word ptr [bp]
#define CMP_BP_FROM_PTR_SI cmp bp, word ptr [si]
#define CMP_BP_FROM_PTR_DI cmp bp, word ptr [di]

#define CMP_SP_FROM_PTR_BX cmp sp, word ptr [bx]
#define CMP_SP_FROM_PTR_BP cmp sp, word ptr [bp]
#define CMP_SP_FROM_PTR_SI cmp sp, word ptr [si]
#define CMP_SP_FROM_PTR_DI cmp sp, word ptr [di]

#define CMP_AX_TO_PTR_BX cmp word ptr [bx], ax
#define CMP_AX_TO_PTR_BP cmp word ptr [bp], ax
#define CMP_AX_TO_PTR_SI cmp word ptr [si], ax
#define CMP_AX_TO_PTR_DI cmp word ptr [di], ax

#define CMP_BX_TO_PTR_BX cmp word ptr [bx], bx
#define CMP_BX_TO_PTR_BP cmp word ptr [bp], bx
#define CMP_BX_TO_PTR_SI cmp word ptr [si], bx
#define CMP_BX_TO_PTR_DI cmp word ptr [di], bx

#define CMP_CX_TO_PTR_BX cmp word ptr [bx], cx
#define CMP_CX_TO_PTR_BP cmp word ptr [bp], cx
#define CMP_CX_TO_PTR_SI cmp word ptr [si], cx
#define CMP_CX_TO_PTR_DI cmp word ptr [di], cx

#define CMP_DX_TO_PTR_BX cmp word ptr [bx], dx
#define CMP_DX_TO_PTR_BP cmp word ptr [bp], dx
#define CMP_DX_TO_PTR_SI cmp word ptr [si], dx
#define CMP_DX_TO_PTR_DI cmp word ptr [di], dx

#define CMP_DI_TO_PTR_BX cmp word ptr [bx], di
#define CMP_DI_TO_PTR_BP cmp word ptr [bp], di
#define CMP_DI_TO_PTR_SI cmp word ptr [si], di
#define CMP_DI_TO_PTR_DI cmp word ptr [di], di

#define CMP_SI_TO_PTR_BX cmp word ptr [bx], si
#define CMP_SI_TO_PTR_BP cmp word ptr [bp], si
#define CMP_SI_TO_PTR_SI cmp word ptr [si], si
#define CMP_SI_TO_PTR_DI cmp word ptr [di], si

#define CMP_BP_TO_PTR_BX cmp word ptr [bx], bp
#define CMP_BP_TO_PTR_BP cmp word ptr [bp], bp
#define CMP_BP_TO_PTR_SI cmp word ptr [si], bp
#define CMP_BP_TO_PTR_DI cmp word ptr [di], bp

#define CMP_SP_TO_PTR_BX cmp word ptr [bx], sp
#define CMP_SP_TO_PTR_BP cmp word ptr [bp], sp
#define CMP_SP_TO_PTR_SI cmp word ptr [si], sp
#define CMP_SP_TO_PTR_DI cmp word ptr [di], sp

#define CMP_AX_FROM_PTR_BX_(VALUE) cmp ax, word ptr [bx + VALUE]
#define CMP_AX_FROM_PTR_BP_(VALUE) cmp ax, word ptr [bp + VALUE]
#define CMP_AX_FROM_PTR_SI_(VALUE) cmp ax, word ptr [si + VALUE]
#define CMP_AX_FROM_PTR_DI_(VALUE) cmp ax, word ptr [di + VALUE]

#define CMP_BX_FROM_PTR_BX_(VALUE) cmp bx, word ptr [bx + VALUE]
#define CMP_BX_FROM_PTR_BP_(VALUE) cmp bx, word ptr [bp + VALUE]
#define CMP_BX_FROM_PTR_SI_(VALUE) cmp bx, word ptr [si + VALUE]
#define CMP_BX_FROM_PTR_DI_(VALUE) cmp bx, word ptr [di + VALUE]

#define CMP_CX_FROM_PTR_BX_(VALUE) cmp cx, word ptr [bx + VALUE]
#define CMP_CX_FROM_PTR_BP_(VALUE) cmp cx, word ptr [bp + VALUE]
#define CMP_CX_FROM_PTR_SI_(VALUE) cmp cx, word ptr [si + VALUE]
#define CMP_CX_FROM_PTR_DI_(VALUE) cmp cx, word ptr [di + VALUE]

#define CMP_DX_FROM_PTR_BX_(VALUE) cmp dx, word ptr [bx + VALUE]
#define CMP_DX_FROM_PTR_BP_(VALUE) cmp dx, word ptr [bp + VALUE]
#define CMP_DX_FROM_PTR_SI_(VALUE) cmp dx, word ptr [si + VALUE]
#define CMP_DX_FROM_PTR_DI_(VALUE) cmp dx, word ptr [di + VALUE]

#define CMP_DI_FROM_PTR_BX_(VALUE) cmp di, word ptr [bx + VALUE]
#define CMP_DI_FROM_PTR_BP_(VALUE) cmp di, word ptr [bp + VALUE]
#define CMP_DI_FROM_PTR_SI_(VALUE) cmp di, word ptr [si + VALUE]
#define CMP_DI_FROM_PTR_DI_(VALUE) cmp di, word ptr [di + VALUE]

#define CMP_SI_FROM_PTR_BX_(VALUE) cmp si, word ptr [bx + VALUE]
#define CMP_SI_FROM_PTR_BP_(VALUE) cmp si, word ptr [bp + VALUE]
#define CMP_SI_FROM_PTR_SI_(VALUE) cmp si, word ptr [si + VALUE]
#define CMP_SI_FROM_PTR_DI_(VALUE) cmp si, word ptr [di + VALUE]

#define CMP_BP_FROM_PTR_BX_(VALUE) cmp bp, word ptr [bx + VALUE]
#define CMP_BP_FROM_PTR_BP_(VALUE) cmp bp, word ptr [bp + VALUE]
#define CMP_BP_FROM_PTR_SI_(VALUE) cmp bp, word ptr [si + VALUE]
#define CMP_BP_FROM_PTR_DI_(VALUE) cmp bp, word ptr [di + VALUE]

#define CMP_SP_FROM_PTR_BX_(VALUE) cmp sp, word ptr [bx + VALUE]
#define CMP_SP_FROM_PTR_BP_(VALUE) cmp sp, word ptr [bp + VALUE]
#define CMP_SP_FROM_PTR_SI_(VALUE) cmp sp, word ptr [si + VALUE]
#define CMP_SP_FROM_PTR_DI_(VALUE) cmp sp, word ptr [di + VALUE]

#define CMP_AX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], ax
#define CMP_AX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], ax
#define CMP_AX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], ax
#define CMP_AX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], ax

#define CMP_BX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], bx
#define CMP_BX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], bx
#define CMP_BX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], bx
#define CMP_BX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], bx

#define CMP_CX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], cx
#define CMP_CX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], cx
#define CMP_CX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], cx
#define CMP_CX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], cx

#define CMP_DX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], dx
#define CMP_DX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], dx
#define CMP_DX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], dx
#define CMP_DX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], dx

#define CMP_DI_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], di
#define CMP_DI_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], di
#define CMP_DI_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], di
#define CMP_DI_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], di

#define CMP_SI_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], si
#define CMP_SI_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], si
#define CMP_SI_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], si
#define CMP_SI_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], si

#define CMP_BP_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], bp
#define CMP_BP_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], bp
#define CMP_BP_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], bp
#define CMP_BP_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], bp

#define CMP_SP_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], sp
#define CMP_SP_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], sp
#define CMP_SP_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], sp
#define CMP_SP_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], sp
#endif /* __SYSTEM_16_BIT__ */

#ifdef __SYSTEM_32_BIT__
#define CMP_AX_FROM_PTR_(VALUE) cmp ax, word ptr [VALUE]
#define CMP_BX_FROM_PTR_(VALUE) cmp bx, word ptr [VALUE]
#define CMP_CX_FROM_PTR_(VALUE) cmp cx, word ptr [VALUE]
#define CMP_DX_FROM_PTR_(VALUE) cmp dx, word ptr [VALUE]
#define CMP_DI_FROM_PTR_(VALUE) cmp di, word ptr [VALUE]
#define CMP_SI_FROM_PTR_(VALUE) cmp si, word ptr [VALUE]
#define CMP_BP_FROM_PTR_(VALUE) cmp bp, word ptr [VALUE]
#define CMP_SP_FROM_PTR_(VALUE) cmp sp, word ptr [VALUE]

#define CMP_AX_TO_PTR_(VALUE) cmp word ptr [VALUE], ax
#define CMP_BX_TO_PTR_(VALUE) cmp word ptr [VALUE], bx
#define CMP_CX_TO_PTR_(VALUE) cmp word ptr [VALUE], cx
#define CMP_DX_TO_PTR_(VALUE) cmp word ptr [VALUE], dx
#define CMP_DI_TO_PTR_(VALUE) cmp word ptr [VALUE], di
#define CMP_SI_TO_PTR_(VALUE) cmp word ptr [VALUE], si
#define CMP_BP_TO_PTR_(VALUE) cmp word ptr [VALUE], bp
#define CMP_SP_TO_PTR_(VALUE) cmp word ptr [VALUE], sp

#define CMP_AX_FROM_PTR_EAX cmp ax, word ptr [eax]
#define CMP_AX_FROM_PTR_EBX cmp ax, word ptr [ebx]
#define CMP_AX_FROM_PTR_ECX cmp ax, word ptr [ecx]
#define CMP_AX_FROM_PTR_EDX cmp ax, word ptr [edx]
#define CMP_AX_FROM_PTR_EDI cmp ax, word ptr [edi]
#define CMP_AX_FROM_PTR_ESI cmp ax, word ptr [esi]
#define CMP_AX_FROM_PTR_EBP cmp ax, word ptr [ebp]
#define CMP_AX_FROM_PTR_ESP cmp ax, word ptr [esp]
#define CMP_AX_FROM_PTR_BX cmp ax, word ptr [bx]
#define CMP_AX_FROM_PTR_BP cmp ax, word ptr [bp]
#define CMP_AX_FROM_PTR_SI cmp ax, word ptr [si]
#define CMP_AX_FROM_PTR_DI cmp ax, word ptr [di]

#define CMP_BX_FROM_PTR_EAX cmp bx, word ptr [eax]
#define CMP_BX_FROM_PTR_EBX cmp bx, word ptr [ebx]
#define CMP_BX_FROM_PTR_ECX cmp bx, word ptr [ecx]
#define CMP_BX_FROM_PTR_EDX cmp bx, word ptr [edx]
#define CMP_BX_FROM_PTR_EDI cmp bx, word ptr [edi]
#define CMP_BX_FROM_PTR_ESI cmp bx, word ptr [esi]
#define CMP_BX_FROM_PTR_EBP cmp bx, word ptr [ebp]
#define CMP_BX_FROM_PTR_ESP cmp bx, word ptr [esp]
#define CMP_BX_FROM_PTR_BX cmp bx, word ptr [bx]
#define CMP_BX_FROM_PTR_BP cmp bx, word ptr [bp]
#define CMP_BX_FROM_PTR_SI cmp bx, word ptr [si]
#define CMP_BX_FROM_PTR_DI cmp bx, word ptr [di]

#define CMP_CX_FROM_PTR_EAX cmp cx, word ptr [eax]
#define CMP_CX_FROM_PTR_EBX cmp cx, word ptr [ebx]
#define CMP_CX_FROM_PTR_ECX cmp cx, word ptr [ecx]
#define CMP_CX_FROM_PTR_EDX cmp cx, word ptr [edx]
#define CMP_CX_FROM_PTR_EDI cmp cx, word ptr [edi]
#define CMP_CX_FROM_PTR_ESI cmp cx, word ptr [esi]
#define CMP_CX_FROM_PTR_EBP cmp cx, word ptr [ebp]
#define CMP_CX_FROM_PTR_ESP cmp cx, word ptr [esp]
#define CMP_CX_FROM_PTR_BX cmp cx, word ptr [bx]
#define CMP_CX_FROM_PTR_BP cmp cx, word ptr [bp]
#define CMP_CX_FROM_PTR_SI cmp cx, word ptr [si]
#define CMP_CX_FROM_PTR_DI cmp cx, word ptr [di]

#define CMP_DX_FROM_PTR_EAX cmp dx, word ptr [eax]
#define CMP_DX_FROM_PTR_EBX cmp dx, word ptr [ebx]
#define CMP_DX_FROM_PTR_ECX cmp dx, word ptr [ecx]
#define CMP_DX_FROM_PTR_EDX cmp dx, word ptr [edx]
#define CMP_DX_FROM_PTR_EDI cmp dx, word ptr [edi]
#define CMP_DX_FROM_PTR_ESI cmp dx, word ptr [esi]
#define CMP_DX_FROM_PTR_EBP cmp dx, word ptr [ebp]
#define CMP_DX_FROM_PTR_ESP cmp dx, word ptr [esp]
#define CMP_DX_FROM_PTR_BX cmp dx, word ptr [bx]
#define CMP_DX_FROM_PTR_BP cmp dx, word ptr [bp]
#define CMP_DX_FROM_PTR_SI cmp dx, word ptr [si]
#define CMP_DX_FROM_PTR_DI cmp dx, word ptr [di]

#define CMP_DI_FROM_PTR_EAX cmp di, word ptr [eax]
#define CMP_DI_FROM_PTR_EBX cmp di, word ptr [ebx]
#define CMP_DI_FROM_PTR_ECX cmp di, word ptr [ecx]
#define CMP_DI_FROM_PTR_EDX cmp di, word ptr [edx]
#define CMP_DI_FROM_PTR_EDI cmp di, word ptr [edi]
#define CMP_DI_FROM_PTR_ESI cmp di, word ptr [esi]
#define CMP_DI_FROM_PTR_EBP cmp di, word ptr [ebp]
#define CMP_DI_FROM_PTR_ESP cmp di, word ptr [esp]
#define CMP_DI_FROM_PTR_BX cmp di, word ptr [bx]
#define CMP_DI_FROM_PTR_BP cmp di, word ptr [bp]
#define CMP_DI_FROM_PTR_SI cmp di, word ptr [si]
#define CMP_DI_FROM_PTR_DI cmp di, word ptr [di]

#define CMP_SI_FROM_PTR_EAX cmp si, word ptr [eax]
#define CMP_SI_FROM_PTR_EBX cmp si, word ptr [ebx]
#define CMP_SI_FROM_PTR_ECX cmp si, word ptr [ecx]
#define CMP_SI_FROM_PTR_EDX cmp si, word ptr [edx]
#define CMP_SI_FROM_PTR_EDI cmp si, word ptr [edi]
#define CMP_SI_FROM_PTR_ESI cmp si, word ptr [esi]
#define CMP_SI_FROM_PTR_EBP cmp si, word ptr [ebp]
#define CMP_SI_FROM_PTR_ESP cmp si, word ptr [esp]
#define CMP_SI_FROM_PTR_BX cmp si, word ptr [bx]
#define CMP_SI_FROM_PTR_BP cmp si, word ptr [bp]
#define CMP_SI_FROM_PTR_SI cmp si, word ptr [si]
#define CMP_SI_FROM_PTR_DI cmp si, word ptr [di]

#define CMP_BP_FROM_PTR_EAX cmp bp, word ptr [eax]
#define CMP_BP_FROM_PTR_EBX cmp bp, word ptr [ebx]
#define CMP_BP_FROM_PTR_ECX cmp bp, word ptr [ecx]
#define CMP_BP_FROM_PTR_EDX cmp bp, word ptr [edx]
#define CMP_BP_FROM_PTR_EDI cmp bp, word ptr [edi]
#define CMP_BP_FROM_PTR_ESI cmp bp, word ptr [esi]
#define CMP_BP_FROM_PTR_EBP cmp bp, word ptr [ebp]
#define CMP_BP_FROM_PTR_ESP cmp bp, word ptr [esp]
#define CMP_BP_FROM_PTR_BX cmp bp, word ptr [bx]
#define CMP_BP_FROM_PTR_BP cmp bp, word ptr [bp]
#define CMP_BP_FROM_PTR_SI cmp bp, word ptr [si]
#define CMP_BP_FROM_PTR_DI cmp bp, word ptr [di]

#define CMP_SP_FROM_PTR_EAX cmp sp, word ptr [eax]
#define CMP_SP_FROM_PTR_EBX cmp sp, word ptr [ebx]
#define CMP_SP_FROM_PTR_ECX cmp sp, word ptr [ecx]
#define CMP_SP_FROM_PTR_EDX cmp sp, word ptr [edx]
#define CMP_SP_FROM_PTR_EDI cmp sp, word ptr [edi]
#define CMP_SP_FROM_PTR_ESI cmp sp, word ptr [esi]
#define CMP_SP_FROM_PTR_EBP cmp sp, word ptr [ebp]
#define CMP_SP_FROM_PTR_ESP cmp sp, word ptr [esp]
#define CMP_SP_FROM_PTR_BX cmp sp, word ptr [bx]
#define CMP_SP_FROM_PTR_BP cmp sp, word ptr [bp]
#define CMP_SP_FROM_PTR_SI cmp sp, word ptr [si]
#define CMP_SP_FROM_PTR_DI cmp sp, word ptr [di]

#define CMP_AX_TO_PTR_EAX cmp word ptr [eax], ax
#define CMP_AX_TO_PTR_EBX cmp word ptr [ebx], ax
#define CMP_AX_TO_PTR_ECX cmp word ptr [ecx], ax
#define CMP_AX_TO_PTR_EDX cmp word ptr [edx], ax
#define CMP_AX_TO_PTR_EDI cmp word ptr [edi], ax
#define CMP_AX_TO_PTR_ESI cmp word ptr [esi], ax
#define CMP_AX_TO_PTR_EBP cmp word ptr [ebp], ax
#define CMP_AX_TO_PTR_ESP cmp word ptr [esp], ax
#define CMP_AX_TO_PTR_BX cmp word ptr [bx], ax
#define CMP_AX_TO_PTR_BP cmp word ptr [bp], ax
#define CMP_AX_TO_PTR_SI cmp word ptr [si], ax
#define CMP_AX_TO_PTR_DI cmp word ptr [di], ax

#define CMP_BX_TO_PTR_EAX cmp word ptr [eax], bx
#define CMP_BX_TO_PTR_EBX cmp word ptr [ebx], bx
#define CMP_BX_TO_PTR_ECX cmp word ptr [ecx], bx
#define CMP_BX_TO_PTR_EDX cmp word ptr [edx], bx
#define CMP_BX_TO_PTR_EDI cmp word ptr [edi], bx
#define CMP_BX_TO_PTR_ESI cmp word ptr [esi], bx
#define CMP_BX_TO_PTR_EBP cmp word ptr [ebp], bx
#define CMP_BX_TO_PTR_ESP cmp word ptr [esp], bx
#define CMP_BX_TO_PTR_BX cmp word ptr [bx], bx
#define CMP_BX_TO_PTR_BP cmp word ptr [bp], bx
#define CMP_BX_TO_PTR_SI cmp word ptr [si], bx
#define CMP_BX_TO_PTR_DI cmp word ptr [di], bx

#define CMP_CX_TO_PTR_EAX cmp word ptr [eax], cx
#define CMP_CX_TO_PTR_EBX cmp word ptr [ebx], cx
#define CMP_CX_TO_PTR_ECX cmp word ptr [ecx], cx
#define CMP_CX_TO_PTR_EDX cmp word ptr [edx], cx
#define CMP_CX_TO_PTR_EDI cmp word ptr [edi], cx
#define CMP_CX_TO_PTR_ESI cmp word ptr [esi], cx
#define CMP_CX_TO_PTR_EBP cmp word ptr [ebp], cx
#define CMP_CX_TO_PTR_ESP cmp word ptr [esp], cx
#define CMP_CX_TO_PTR_BX cmp word ptr [bx], cx
#define CMP_CX_TO_PTR_BP cmp word ptr [bp], cx
#define CMP_CX_TO_PTR_SI cmp word ptr [si], cx
#define CMP_CX_TO_PTR_DI cmp word ptr [di], cx

#define CMP_DX_TO_PTR_EAX cmp word ptr [eax], dx
#define CMP_DX_TO_PTR_EBX cmp word ptr [ebx], dx
#define CMP_DX_TO_PTR_ECX cmp word ptr [ecx], dx
#define CMP_DX_TO_PTR_EDX cmp word ptr [edx], dx
#define CMP_DX_TO_PTR_EDI cmp word ptr [edi], dx
#define CMP_DX_TO_PTR_ESI cmp word ptr [esi], dx
#define CMP_DX_TO_PTR_EBP cmp word ptr [ebp], dx
#define CMP_DX_TO_PTR_ESP cmp word ptr [esp], dx
#define CMP_DX_TO_PTR_BX cmp word ptr [bx], dx
#define CMP_DX_TO_PTR_BP cmp word ptr [bp], dx
#define CMP_DX_TO_PTR_SI cmp word ptr [si], dx
#define CMP_DX_TO_PTR_DI cmp word ptr [di], dx

#define CMP_DI_TO_PTR_EAX cmp word ptr [eax], di
#define CMP_DI_TO_PTR_EBX cmp word ptr [ebx], di
#define CMP_DI_TO_PTR_ECX cmp word ptr [ecx], di
#define CMP_DI_TO_PTR_EDX cmp word ptr [edx], di
#define CMP_DI_TO_PTR_EDI cmp word ptr [edi], di
#define CMP_DI_TO_PTR_ESI cmp word ptr [esi], di
#define CMP_DI_TO_PTR_EBP cmp word ptr [ebp], di
#define CMP_DI_TO_PTR_ESP cmp word ptr [esp], di
#define CMP_DI_TO_PTR_BX cmp word ptr [bx], di
#define CMP_DI_TO_PTR_BP cmp word ptr [bp], di
#define CMP_DI_TO_PTR_SI cmp word ptr [si], di
#define CMP_DI_TO_PTR_DI cmp word ptr [di], di

#define CMP_SI_TO_PTR_EAX cmp word ptr [eax], si
#define CMP_SI_TO_PTR_EBX cmp word ptr [ebx], si
#define CMP_SI_TO_PTR_ECX cmp word ptr [ecx], si
#define CMP_SI_TO_PTR_EDX cmp word ptr [edx], si
#define CMP_SI_TO_PTR_EDI cmp word ptr [edi], si
#define CMP_SI_TO_PTR_ESI cmp word ptr [esi], si
#define CMP_SI_TO_PTR_EBP cmp word ptr [ebp], si
#define CMP_SI_TO_PTR_ESP cmp word ptr [esp], si
#define CMP_SI_TO_PTR_BX cmp word ptr [bx], si
#define CMP_SI_TO_PTR_BP cmp word ptr [bp], si
#define CMP_SI_TO_PTR_SI cmp word ptr [si], si
#define CMP_SI_TO_PTR_DI cmp word ptr [di], si

#define CMP_BP_TO_PTR_EAX cmp word ptr [eax], bp
#define CMP_BP_TO_PTR_EBX cmp word ptr [ebx], bp
#define CMP_BP_TO_PTR_ECX cmp word ptr [ecx], bp
#define CMP_BP_TO_PTR_EDX cmp word ptr [edx], bp
#define CMP_BP_TO_PTR_EDI cmp word ptr [edi], bp
#define CMP_BP_TO_PTR_ESI cmp word ptr [esi], bp
#define CMP_BP_TO_PTR_EBP cmp word ptr [ebp], bp
#define CMP_BP_TO_PTR_ESP cmp word ptr [esp], bp
#define CMP_BP_TO_PTR_BX cmp word ptr [bx], bp
#define CMP_BP_TO_PTR_BP cmp word ptr [bp], bp
#define CMP_BP_TO_PTR_SI cmp word ptr [si], bp
#define CMP_BP_TO_PTR_DI cmp word ptr [di], bp

#define CMP_SP_TO_PTR_EAX cmp word ptr [eax], sp
#define CMP_SP_TO_PTR_EBX cmp word ptr [ebx], sp
#define CMP_SP_TO_PTR_ECX cmp word ptr [ecx], sp
#define CMP_SP_TO_PTR_EDX cmp word ptr [edx], sp
#define CMP_SP_TO_PTR_EDI cmp word ptr [edi], sp
#define CMP_SP_TO_PTR_ESI cmp word ptr [esi], sp
#define CMP_SP_TO_PTR_EBP cmp word ptr [ebp], sp
#define CMP_SP_TO_PTR_ESP cmp word ptr [esp], sp
#define CMP_SP_TO_PTR_BX cmp word ptr [bx], sp
#define CMP_SP_TO_PTR_BP cmp word ptr [bp], sp
#define CMP_SP_TO_PTR_SI cmp word ptr [si], sp
#define CMP_SP_TO_PTR_DI cmp word ptr [di], sp

#define CMP_AX_FROM_PTR_EAX_(VALUE) cmp ax, word ptr [eax + VALUE]
#define CMP_AX_FROM_PTR_EBX_(VALUE) cmp ax, word ptr [ebx + VALUE]
#define CMP_AX_FROM_PTR_ECX_(VALUE) cmp ax, word ptr [ecx + VALUE]
#define CMP_AX_FROM_PTR_EDX_(VALUE) cmp ax, word ptr [edx + VALUE]
#define CMP_AX_FROM_PTR_EDI_(VALUE) cmp ax, word ptr [edi + VALUE]
#define CMP_AX_FROM_PTR_ESI_(VALUE) cmp ax, word ptr [esi + VALUE]
#define CMP_AX_FROM_PTR_EBP_(VALUE) cmp ax, word ptr [ebp + VALUE]
#define CMP_AX_FROM_PTR_ESP_(VALUE) cmp ax, word ptr [esp + VALUE]
#define CMP_AX_FROM_PTR_BX_(VALUE) cmp ax, word ptr [bx + VALUE]
#define CMP_AX_FROM_PTR_BP_(VALUE) cmp ax, word ptr [bp + VALUE]
#define CMP_AX_FROM_PTR_SI_(VALUE) cmp ax, word ptr [si + VALUE]
#define CMP_AX_FROM_PTR_DI_(VALUE) cmp ax, word ptr [di + VALUE]

#define CMP_BX_FROM_PTR_EAX_(VALUE) cmp bx, word ptr [eax + VALUE]
#define CMP_BX_FROM_PTR_EBX_(VALUE) cmp bx, word ptr [ebx + VALUE]
#define CMP_BX_FROM_PTR_ECX_(VALUE) cmp bx, word ptr [ecx + VALUE]
#define CMP_BX_FROM_PTR_EDX_(VALUE) cmp bx, word ptr [edx + VALUE]
#define CMP_BX_FROM_PTR_EDI_(VALUE) cmp bx, word ptr [edi + VALUE]
#define CMP_BX_FROM_PTR_ESI_(VALUE) cmp bx, word ptr [esi + VALUE]
#define CMP_BX_FROM_PTR_EBP_(VALUE) cmp bx, word ptr [ebp + VALUE]
#define CMP_BX_FROM_PTR_ESP_(VALUE) cmp bx, word ptr [esp + VALUE]
#define CMP_BX_FROM_PTR_BX_(VALUE) cmp bx, word ptr [bx + VALUE]
#define CMP_BX_FROM_PTR_BP_(VALUE) cmp bx, word ptr [bp + VALUE]
#define CMP_BX_FROM_PTR_SI_(VALUE) cmp bx, word ptr [si + VALUE]
#define CMP_BX_FROM_PTR_DI_(VALUE) cmp bx, word ptr [di + VALUE]

#define CMP_CX_FROM_PTR_EAX_(VALUE) cmp cx, word ptr [eax + VALUE]
#define CMP_CX_FROM_PTR_EBX_(VALUE) cmp cx, word ptr [ebx + VALUE]
#define CMP_CX_FROM_PTR_ECX_(VALUE) cmp cx, word ptr [ecx + VALUE]
#define CMP_CX_FROM_PTR_EDX_(VALUE) cmp cx, word ptr [edx + VALUE]
#define CMP_CX_FROM_PTR_EDI_(VALUE) cmp cx, word ptr [edi + VALUE]
#define CMP_CX_FROM_PTR_ESI_(VALUE) cmp cx, word ptr [esi + VALUE]
#define CMP_CX_FROM_PTR_EBP_(VALUE) cmp cx, word ptr [ebp + VALUE]
#define CMP_CX_FROM_PTR_ESP_(VALUE) cmp cx, word ptr [esp + VALUE]
#define CMP_CX_FROM_PTR_BX_(VALUE) cmp cx, word ptr [bx + VALUE]
#define CMP_CX_FROM_PTR_BP_(VALUE) cmp cx, word ptr [bp + VALUE]
#define CMP_CX_FROM_PTR_SI_(VALUE) cmp cx, word ptr [si + VALUE]
#define CMP_CX_FROM_PTR_DI_(VALUE) cmp cx, word ptr [di + VALUE]

#define CMP_DX_FROM_PTR_EAX_(VALUE) cmp dx, word ptr [eax + VALUE]
#define CMP_DX_FROM_PTR_EBX_(VALUE) cmp dx, word ptr [ebx + VALUE]
#define CMP_DX_FROM_PTR_ECX_(VALUE) cmp dx, word ptr [ecx + VALUE]
#define CMP_DX_FROM_PTR_EDX_(VALUE) cmp dx, word ptr [edx + VALUE]
#define CMP_DX_FROM_PTR_EDI_(VALUE) cmp dx, word ptr [edi + VALUE]
#define CMP_DX_FROM_PTR_ESI_(VALUE) cmp dx, word ptr [esi + VALUE]
#define CMP_DX_FROM_PTR_EBP_(VALUE) cmp dx, word ptr [ebp + VALUE]
#define CMP_DX_FROM_PTR_ESP_(VALUE) cmp dx, word ptr [esp + VALUE]
#define CMP_DX_FROM_PTR_BX_(VALUE) cmp dx, word ptr [bx + VALUE]
#define CMP_DX_FROM_PTR_BP_(VALUE) cmp dx, word ptr [bp + VALUE]
#define CMP_DX_FROM_PTR_SI_(VALUE) cmp dx, word ptr [si + VALUE]
#define CMP_DX_FROM_PTR_DI_(VALUE) cmp dx, word ptr [di + VALUE]

#define CMP_DI_FROM_PTR_EAX_(VALUE) cmp di, word ptr [eax + VALUE]
#define CMP_DI_FROM_PTR_EBX_(VALUE) cmp di, word ptr [ebx + VALUE]
#define CMP_DI_FROM_PTR_ECX_(VALUE) cmp di, word ptr [ecx + VALUE]
#define CMP_DI_FROM_PTR_EDX_(VALUE) cmp di, word ptr [edx + VALUE]
#define CMP_DI_FROM_PTR_EDI_(VALUE) cmp di, word ptr [edi + VALUE]
#define CMP_DI_FROM_PTR_ESI_(VALUE) cmp di, word ptr [esi + VALUE]
#define CMP_DI_FROM_PTR_EBP_(VALUE) cmp di, word ptr [ebp + VALUE]
#define CMP_DI_FROM_PTR_ESP_(VALUE) cmp di, word ptr [esp + VALUE]
#define CMP_DI_FROM_PTR_BX_(VALUE) cmp di, word ptr [bx + VALUE]
#define CMP_DI_FROM_PTR_BP_(VALUE) cmp di, word ptr [bp + VALUE]
#define CMP_DI_FROM_PTR_SI_(VALUE) cmp di, word ptr [si + VALUE]
#define CMP_DI_FROM_PTR_DI_(VALUE) cmp di, word ptr [di + VALUE]

#define CMP_SI_FROM_PTR_EAX_(VALUE) cmp si, word ptr [eax + VALUE]
#define CMP_SI_FROM_PTR_EBX_(VALUE) cmp si, word ptr [ebx + VALUE]
#define CMP_SI_FROM_PTR_ECX_(VALUE) cmp si, word ptr [ecx + VALUE]
#define CMP_SI_FROM_PTR_EDX_(VALUE) cmp si, word ptr [edx + VALUE]
#define CMP_SI_FROM_PTR_EDI_(VALUE) cmp si, word ptr [edi + VALUE]
#define CMP_SI_FROM_PTR_ESI_(VALUE) cmp si, word ptr [esi + VALUE]
#define CMP_SI_FROM_PTR_EBP_(VALUE) cmp si, word ptr [ebp + VALUE]
#define CMP_SI_FROM_PTR_ESP_(VALUE) cmp si, word ptr [esp + VALUE]
#define CMP_SI_FROM_PTR_BX_(VALUE) cmp si, word ptr [bx + VALUE]
#define CMP_SI_FROM_PTR_BP_(VALUE) cmp si, word ptr [bp + VALUE]
#define CMP_SI_FROM_PTR_SI_(VALUE) cmp si, word ptr [si + VALUE]
#define CMP_SI_FROM_PTR_DI_(VALUE) cmp si, word ptr [di + VALUE]

#define CMP_BP_FROM_PTR_EAX_(VALUE) cmp bp, word ptr [eax + VALUE]
#define CMP_BP_FROM_PTR_EBX_(VALUE) cmp bp, word ptr [ebx + VALUE]
#define CMP_BP_FROM_PTR_ECX_(VALUE) cmp bp, word ptr [ecx + VALUE]
#define CMP_BP_FROM_PTR_EDX_(VALUE) cmp bp, word ptr [edx + VALUE]
#define CMP_BP_FROM_PTR_EDI_(VALUE) cmp bp, word ptr [edi + VALUE]
#define CMP_BP_FROM_PTR_ESI_(VALUE) cmp bp, word ptr [esi + VALUE]
#define CMP_BP_FROM_PTR_EBP_(VALUE) cmp bp, word ptr [ebp + VALUE]
#define CMP_BP_FROM_PTR_ESP_(VALUE) cmp bp, word ptr [esp + VALUE]
#define CMP_BP_FROM_PTR_BX_(VALUE) cmp bp, word ptr [bx + VALUE]
#define CMP_BP_FROM_PTR_BP_(VALUE) cmp bp, word ptr [bp + VALUE]
#define CMP_BP_FROM_PTR_SI_(VALUE) cmp bp, word ptr [si + VALUE]
#define CMP_BP_FROM_PTR_DI_(VALUE) cmp bp, word ptr [di + VALUE]

#define CMP_SP_FROM_PTR_EAX_(VALUE) cmp sp, word ptr [eax + VALUE]
#define CMP_SP_FROM_PTR_EBX_(VALUE) cmp sp, word ptr [ebx + VALUE]
#define CMP_SP_FROM_PTR_ECX_(VALUE) cmp sp, word ptr [ecx + VALUE]
#define CMP_SP_FROM_PTR_EDX_(VALUE) cmp sp, word ptr [edx + VALUE]
#define CMP_SP_FROM_PTR_EDI_(VALUE) cmp sp, word ptr [edi + VALUE]
#define CMP_SP_FROM_PTR_ESI_(VALUE) cmp sp, word ptr [esi + VALUE]
#define CMP_SP_FROM_PTR_EBP_(VALUE) cmp sp, word ptr [ebp + VALUE]
#define CMP_SP_FROM_PTR_ESP_(VALUE) cmp sp, word ptr [esp + VALUE]
#define CMP_SP_FROM_PTR_BX_(VALUE) cmp sp, word ptr [bx + VALUE]
#define CMP_SP_FROM_PTR_BP_(VALUE) cmp sp, word ptr [bp + VALUE]
#define CMP_SP_FROM_PTR_SI_(VALUE) cmp sp, word ptr [si + VALUE]
#define CMP_SP_FROM_PTR_DI_(VALUE) cmp sp, word ptr [di + VALUE]

#define CMP_AX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], ax
#define CMP_AX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], ax
#define CMP_AX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], ax
#define CMP_AX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], ax
#define CMP_AX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], ax
#define CMP_AX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], ax
#define CMP_AX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], ax
#define CMP_AX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], ax
#define CMP_AX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], ax
#define CMP_AX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], ax
#define CMP_AX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], ax
#define CMP_AX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], ax

#define CMP_BX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], bx
#define CMP_BX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], bx
#define CMP_BX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], bx
#define CMP_BX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], bx
#define CMP_BX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], bx
#define CMP_BX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], bx
#define CMP_BX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], bx
#define CMP_BX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], bx
#define CMP_BX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], bx
#define CMP_BX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], bx
#define CMP_BX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], bx
#define CMP_BX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], bx

#define CMP_CX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], cx
#define CMP_CX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], cx
#define CMP_CX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], cx
#define CMP_CX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], cx
#define CMP_CX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], cx
#define CMP_CX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], cx
#define CMP_CX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], cx
#define CMP_CX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], cx
#define CMP_CX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], cx
#define CMP_CX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], cx
#define CMP_CX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], cx
#define CMP_CX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], cx

#define CMP_DX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], dx
#define CMP_DX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], dx
#define CMP_DX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], dx
#define CMP_DX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], dx
#define CMP_DX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], dx
#define CMP_DX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], dx
#define CMP_DX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], dx
#define CMP_DX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], dx
#define CMP_DX_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], dx
#define CMP_DX_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], dx
#define CMP_DX_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], dx
#define CMP_DX_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], dx

#define CMP_DI_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], di
#define CMP_DI_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], di
#define CMP_DI_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], di
#define CMP_DI_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], di
#define CMP_DI_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], di
#define CMP_DI_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], di
#define CMP_DI_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], di
#define CMP_DI_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], di
#define CMP_DI_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], di
#define CMP_DI_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], di
#define CMP_DI_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], di
#define CMP_DI_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], di

#define CMP_SI_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], si
#define CMP_SI_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], si
#define CMP_SI_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], si
#define CMP_SI_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], si
#define CMP_SI_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], si
#define CMP_SI_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], si
#define CMP_SI_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], si
#define CMP_SI_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], si
#define CMP_SI_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], si
#define CMP_SI_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], si
#define CMP_SI_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], si
#define CMP_SI_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], si

#define CMP_BP_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], bp
#define CMP_BP_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], bp
#define CMP_BP_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], bp
#define CMP_BP_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], bp
#define CMP_BP_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], bp
#define CMP_BP_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], bp
#define CMP_BP_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], bp
#define CMP_BP_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], bp
#define CMP_BP_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], bp
#define CMP_BP_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], bp
#define CMP_BP_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], bp
#define CMP_BP_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], bp

#define CMP_SP_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], sp
#define CMP_SP_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], sp
#define CMP_SP_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], sp
#define CMP_SP_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], sp
#define CMP_SP_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], sp
#define CMP_SP_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], sp
#define CMP_SP_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], sp
#define CMP_SP_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], sp
#define CMP_SP_TO_PTR_BX_(VALUE) cmp word ptr [bx + VALUE], sp
#define CMP_SP_TO_PTR_BP_(VALUE) cmp word ptr [bp + VALUE], sp
#define CMP_SP_TO_PTR_SI_(VALUE) cmp word ptr [si + VALUE], sp
#define CMP_SP_TO_PTR_DI_(VALUE) cmp word ptr [di + VALUE], sp
#endif /* __SYSTEM_32_BIT__ */

#ifdef __SYSTEM_64_BIT__
#define CMP_AX_FROM_PTR_(VALUE) cmp ax, word ptr [VALUE]
#define CMP_BX_FROM_PTR_(VALUE) cmp bx, word ptr [VALUE]
#define CMP_CX_FROM_PTR_(VALUE) cmp cx, word ptr [VALUE]
#define CMP_DX_FROM_PTR_(VALUE) cmp dx, word ptr [VALUE]
#define CMP_DI_FROM_PTR_(VALUE) cmp di, word ptr [VALUE]
#define CMP_SI_FROM_PTR_(VALUE) cmp si, word ptr [VALUE]
#define CMP_BP_FROM_PTR_(VALUE) cmp bp, word ptr [VALUE]
#define CMP_SP_FROM_PTR_(VALUE) cmp sp, word ptr [VALUE]
#define CMP_R8W_FROM_PTR_(VALUE) cmp r8w, word ptr [VALUE]
#define CMP_R9W_FROM_PTR_(VALUE) cmp r9w, word ptr [VALUE]
#define CMP_R10W_FROM_PTR_(VALUE) cmp r10w, word ptr [VALUE]
#define CMP_R11W_FROM_PTR_(VALUE) cmp r11w, word ptr [VALUE]
#define CMP_R12W_FROM_PTR_(VALUE) cmp r12w, word ptr [VALUE]
#define CMP_R13W_FROM_PTR_(VALUE) cmp r13w, word ptr [VALUE]
#define CMP_R14W_FROM_PTR_(VALUE) cmp r14w, word ptr [VALUE]
#define CMP_R15W_FROM_PTR_(VALUE) cmp r15w, word ptr [VALUE]

#define CMP_AX_TO_PTR_(VALUE) cmp word ptr [VALUE], ax
#define CMP_BX_TO_PTR_(VALUE) cmp word ptr [VALUE], bx
#define CMP_CX_TO_PTR_(VALUE) cmp word ptr [VALUE], cx
#define CMP_DX_TO_PTR_(VALUE) cmp word ptr [VALUE], dx
#define CMP_DI_TO_PTR_(VALUE) cmp word ptr [VALUE], di
#define CMP_SI_TO_PTR_(VALUE) cmp word ptr [VALUE], si
#define CMP_BP_TO_PTR_(VALUE) cmp word ptr [VALUE], bp
#define CMP_SP_TO_PTR_(VALUE) cmp word ptr [VALUE], sp
#define CMP_R8W_TO_PTR_(VALUE) cmp word ptr [VALUE], r8w
#define CMP_R9W_TO_PTR_(VALUE) cmp word ptr [VALUE], r9w
#define CMP_R10W_TO_PTR_(VALUE) cmp word ptr [VALUE], r10w
#define CMP_R11W_TO_PTR_(VALUE) cmp word ptr [VALUE], r11w
#define CMP_R12W_TO_PTR_(VALUE) cmp word ptr [VALUE], r12w
#define CMP_R13W_TO_PTR_(VALUE) cmp word ptr [VALUE], r13w
#define CMP_R14W_TO_PTR_(VALUE) cmp word ptr [VALUE], r14w
#define CMP_R15W_TO_PTR_(VALUE) cmp word ptr [VALUE], r15w

#define CMP_AX_FROM_PTR_RAX cmp ax, word ptr [rax]
#define CMP_AX_FROM_PTR_RBX cmp ax, word ptr [rbx]
#define CMP_AX_FROM_PTR_RCX cmp ax, word ptr [rcx]
#define CMP_AX_FROM_PTR_RDX cmp ax, word ptr [rdx]
#define CMP_AX_FROM_PTR_RDI cmp ax, word ptr [rdi]
#define CMP_AX_FROM_PTR_RSI cmp ax, word ptr [rsi]
#define CMP_AX_FROM_PTR_RBP cmp ax, word ptr [rbp]
#define CMP_AX_FROM_PTR_RSP cmp ax, word ptr [rsp]
#define CMP_AX_FROM_PTR_R8 cmp ax, word ptr [r8]
#define CMP_AX_FROM_PTR_R9 cmp ax, word ptr [r9]
#define CMP_AX_FROM_PTR_R10 cmp ax, word ptr [r10]
#define CMP_AX_FROM_PTR_R11 cmp ax, word ptr [r11]
#define CMP_AX_FROM_PTR_R12 cmp ax, word ptr [r12]
#define CMP_AX_FROM_PTR_R13 cmp ax, word ptr [r13]
#define CMP_AX_FROM_PTR_R14 cmp ax, word ptr [r14]
#define CMP_AX_FROM_PTR_R15 cmp ax, word ptr [r15]
#define CMP_AX_FROM_PTR_EAX cmp ax, word ptr [eax]
#define CMP_AX_FROM_PTR_EBX cmp ax, word ptr [ebx]
#define CMP_AX_FROM_PTR_ECX cmp ax, word ptr [ecx]
#define CMP_AX_FROM_PTR_EDX cmp ax, word ptr [edx]
#define CMP_AX_FROM_PTR_EDI cmp ax, word ptr [edi]
#define CMP_AX_FROM_PTR_ESI cmp ax, word ptr [esi]
#define CMP_AX_FROM_PTR_EBP cmp ax, word ptr [ebp]
#define CMP_AX_FROM_PTR_ESP cmp ax, word ptr [esp]

#define CMP_BX_FROM_PTR_RAX cmp bx, word ptr [rax]
#define CMP_BX_FROM_PTR_RBX cmp bx, word ptr [rbx]
#define CMP_BX_FROM_PTR_RCX cmp bx, word ptr [rcx]
#define CMP_BX_FROM_PTR_RDX cmp bx, word ptr [rdx]
#define CMP_BX_FROM_PTR_RDI cmp bx, word ptr [rdi]
#define CMP_BX_FROM_PTR_RSI cmp bx, word ptr [rsi]
#define CMP_BX_FROM_PTR_RBP cmp bx, word ptr [rbp]
#define CMP_BX_FROM_PTR_RSP cmp bx, word ptr [rsp]
#define CMP_BX_FROM_PTR_R8 cmp bx, word ptr [r8]
#define CMP_BX_FROM_PTR_R9 cmp bx, word ptr [r9]
#define CMP_BX_FROM_PTR_R10 cmp bx, word ptr [r10]
#define CMP_BX_FROM_PTR_R11 cmp bx, word ptr [r11]
#define CMP_BX_FROM_PTR_R12 cmp bx, word ptr [r12]
#define CMP_BX_FROM_PTR_R13 cmp bx, word ptr [r13]
#define CMP_BX_FROM_PTR_R14 cmp bx, word ptr [r14]
#define CMP_BX_FROM_PTR_R15 cmp bx, word ptr [r15]
#define CMP_BX_FROM_PTR_EAX cmp bx, word ptr [eax]
#define CMP_BX_FROM_PTR_EBX cmp bx, word ptr [ebx]
#define CMP_BX_FROM_PTR_ECX cmp bx, word ptr [ecx]
#define CMP_BX_FROM_PTR_EDX cmp bx, word ptr [edx]
#define CMP_BX_FROM_PTR_EDI cmp bx, word ptr [edi]
#define CMP_BX_FROM_PTR_ESI cmp bx, word ptr [esi]
#define CMP_BX_FROM_PTR_EBP cmp bx, word ptr [ebp]
#define CMP_BX_FROM_PTR_ESP cmp bx, word ptr [esp]

#define CMP_CX_FROM_PTR_RAX cmp cx, word ptr [rax]
#define CMP_CX_FROM_PTR_RBX cmp cx, word ptr [rbx]
#define CMP_CX_FROM_PTR_RCX cmp cx, word ptr [rcx]
#define CMP_CX_FROM_PTR_RDX cmp cx, word ptr [rdx]
#define CMP_CX_FROM_PTR_RDI cmp cx, word ptr [rdi]
#define CMP_CX_FROM_PTR_RSI cmp cx, word ptr [rsi]
#define CMP_CX_FROM_PTR_RBP cmp cx, word ptr [rbp]
#define CMP_CX_FROM_PTR_RSP cmp cx, word ptr [rsp]
#define CMP_CX_FROM_PTR_R8 cmp cx, word ptr [r8]
#define CMP_CX_FROM_PTR_R9 cmp cx, word ptr [r9]
#define CMP_CX_FROM_PTR_R10 cmp cx, word ptr [r10]
#define CMP_CX_FROM_PTR_R11 cmp cx, word ptr [r11]
#define CMP_CX_FROM_PTR_R12 cmp cx, word ptr [r12]
#define CMP_CX_FROM_PTR_R13 cmp cx, word ptr [r13]
#define CMP_CX_FROM_PTR_R14 cmp cx, word ptr [r14]
#define CMP_CX_FROM_PTR_R15 cmp cx, word ptr [r15]
#define CMP_CX_FROM_PTR_EAX cmp cx, word ptr [eax]
#define CMP_CX_FROM_PTR_EBX cmp cx, word ptr [ebx]
#define CMP_CX_FROM_PTR_ECX cmp cx, word ptr [ecx]
#define CMP_CX_FROM_PTR_EDX cmp cx, word ptr [edx]
#define CMP_CX_FROM_PTR_EDI cmp cx, word ptr [edi]
#define CMP_CX_FROM_PTR_ESI cmp cx, word ptr [esi]
#define CMP_CX_FROM_PTR_EBP cmp cx, word ptr [ebp]
#define CMP_CX_FROM_PTR_ESP cmp cx, word ptr [esp]

#define CMP_DX_FROM_PTR_RAX cmp dx, word ptr [rax]
#define CMP_DX_FROM_PTR_RBX cmp dx, word ptr [rbx]
#define CMP_DX_FROM_PTR_RCX cmp dx, word ptr [rcx]
#define CMP_DX_FROM_PTR_RDX cmp dx, word ptr [rdx]
#define CMP_DX_FROM_PTR_RDI cmp dx, word ptr [rdi]
#define CMP_DX_FROM_PTR_RSI cmp dx, word ptr [rsi]
#define CMP_DX_FROM_PTR_RBP cmp dx, word ptr [rbp]
#define CMP_DX_FROM_PTR_RSP cmp dx, word ptr [rsp]
#define CMP_DX_FROM_PTR_R8 cmp dx, word ptr [r8]
#define CMP_DX_FROM_PTR_R9 cmp dx, word ptr [r9]
#define CMP_DX_FROM_PTR_R10 cmp dx, word ptr [r10]
#define CMP_DX_FROM_PTR_R11 cmp dx, word ptr [r11]
#define CMP_DX_FROM_PTR_R12 cmp dx, word ptr [r12]
#define CMP_DX_FROM_PTR_R13 cmp dx, word ptr [r13]
#define CMP_DX_FROM_PTR_R14 cmp dx, word ptr [r14]
#define CMP_DX_FROM_PTR_R15 cmp dx, word ptr [r15]
#define CMP_DX_FROM_PTR_EAX cmp dx, word ptr [eax]
#define CMP_DX_FROM_PTR_EBX cmp dx, word ptr [ebx]
#define CMP_DX_FROM_PTR_ECX cmp dx, word ptr [ecx]
#define CMP_DX_FROM_PTR_EDX cmp dx, word ptr [edx]
#define CMP_DX_FROM_PTR_EDI cmp dx, word ptr [edi]
#define CMP_DX_FROM_PTR_ESI cmp dx, word ptr [esi]
#define CMP_DX_FROM_PTR_EBP cmp dx, word ptr [ebp]
#define CMP_DX_FROM_PTR_ESP cmp dx, word ptr [esp]

#define CMP_DI_FROM_PTR_RAX cmp di, word ptr [rax]
#define CMP_DI_FROM_PTR_RBX cmp di, word ptr [rbx]
#define CMP_DI_FROM_PTR_RCX cmp di, word ptr [rcx]
#define CMP_DI_FROM_PTR_RDX cmp di, word ptr [rdx]
#define CMP_DI_FROM_PTR_RDI cmp di, word ptr [rdi]
#define CMP_DI_FROM_PTR_RSI cmp di, word ptr [rsi]
#define CMP_DI_FROM_PTR_RBP cmp di, word ptr [rbp]
#define CMP_DI_FROM_PTR_RSP cmp di, word ptr [rsp]
#define CMP_DI_FROM_PTR_R8 cmp di, word ptr [r8]
#define CMP_DI_FROM_PTR_R9 cmp di, word ptr [r9]
#define CMP_DI_FROM_PTR_R10 cmp di, word ptr [r10]
#define CMP_DI_FROM_PTR_R11 cmp di, word ptr [r11]
#define CMP_DI_FROM_PTR_R12 cmp di, word ptr [r12]
#define CMP_DI_FROM_PTR_R13 cmp di, word ptr [r13]
#define CMP_DI_FROM_PTR_R14 cmp di, word ptr [r14]
#define CMP_DI_FROM_PTR_R15 cmp di, word ptr [r15]
#define CMP_DI_FROM_PTR_EAX cmp di, word ptr [eax]
#define CMP_DI_FROM_PTR_EBX cmp di, word ptr [ebx]
#define CMP_DI_FROM_PTR_ECX cmp di, word ptr [ecx]
#define CMP_DI_FROM_PTR_EDX cmp di, word ptr [edx]
#define CMP_DI_FROM_PTR_EDI cmp di, word ptr [edi]
#define CMP_DI_FROM_PTR_ESI cmp di, word ptr [esi]
#define CMP_DI_FROM_PTR_EBP cmp di, word ptr [ebp]
#define CMP_DI_FROM_PTR_ESP cmp di, word ptr [esp]

#define CMP_SI_FROM_PTR_RAX cmp si, word ptr [rax]
#define CMP_SI_FROM_PTR_RBX cmp si, word ptr [rbx]
#define CMP_SI_FROM_PTR_RCX cmp si, word ptr [rcx]
#define CMP_SI_FROM_PTR_RDX cmp si, word ptr [rdx]
#define CMP_SI_FROM_PTR_RDI cmp si, word ptr [rdi]
#define CMP_SI_FROM_PTR_RSI cmp si, word ptr [rsi]
#define CMP_SI_FROM_PTR_RBP cmp si, word ptr [rbp]
#define CMP_SI_FROM_PTR_RSP cmp si, word ptr [rsp]
#define CMP_SI_FROM_PTR_R8 cmp si, word ptr [r8]
#define CMP_SI_FROM_PTR_R9 cmp si, word ptr [r9]
#define CMP_SI_FROM_PTR_R10 cmp si, word ptr [r10]
#define CMP_SI_FROM_PTR_R11 cmp si, word ptr [r11]
#define CMP_SI_FROM_PTR_R12 cmp si, word ptr [r12]
#define CMP_SI_FROM_PTR_R13 cmp si, word ptr [r13]
#define CMP_SI_FROM_PTR_R14 cmp si, word ptr [r14]
#define CMP_SI_FROM_PTR_R15 cmp si, word ptr [r15]
#define CMP_SI_FROM_PTR_EAX cmp si, word ptr [eax]
#define CMP_SI_FROM_PTR_EBX cmp si, word ptr [ebx]
#define CMP_SI_FROM_PTR_ECX cmp si, word ptr [ecx]
#define CMP_SI_FROM_PTR_EDX cmp si, word ptr [edx]
#define CMP_SI_FROM_PTR_EDI cmp si, word ptr [edi]
#define CMP_SI_FROM_PTR_ESI cmp si, word ptr [esi]
#define CMP_SI_FROM_PTR_EBP cmp si, word ptr [ebp]
#define CMP_SI_FROM_PTR_ESP cmp si, word ptr [esp]

#define CMP_BP_FROM_PTR_RAX cmp bp, word ptr [rax]
#define CMP_BP_FROM_PTR_RBX cmp bp, word ptr [rbx]
#define CMP_BP_FROM_PTR_RCX cmp bp, word ptr [rcx]
#define CMP_BP_FROM_PTR_RDX cmp bp, word ptr [rdx]
#define CMP_BP_FROM_PTR_RDI cmp bp, word ptr [rdi]
#define CMP_BP_FROM_PTR_RSI cmp bp, word ptr [rsi]
#define CMP_BP_FROM_PTR_RBP cmp bp, word ptr [rbp]
#define CMP_BP_FROM_PTR_RSP cmp bp, word ptr [rsp]
#define CMP_BP_FROM_PTR_R8 cmp bp, word ptr [r8]
#define CMP_BP_FROM_PTR_R9 cmp bp, word ptr [r9]
#define CMP_BP_FROM_PTR_R10 cmp bp, word ptr [r10]
#define CMP_BP_FROM_PTR_R11 cmp bp, word ptr [r11]
#define CMP_BP_FROM_PTR_R12 cmp bp, word ptr [r12]
#define CMP_BP_FROM_PTR_R13 cmp bp, word ptr [r13]
#define CMP_BP_FROM_PTR_R14 cmp bp, word ptr [r14]
#define CMP_BP_FROM_PTR_R15 cmp bp, word ptr [r15]
#define CMP_BP_FROM_PTR_EAX cmp bp, word ptr [eax]
#define CMP_BP_FROM_PTR_EBX cmp bp, word ptr [ebx]
#define CMP_BP_FROM_PTR_ECX cmp bp, word ptr [ecx]
#define CMP_BP_FROM_PTR_EDX cmp bp, word ptr [edx]
#define CMP_BP_FROM_PTR_EDI cmp bp, word ptr [edi]
#define CMP_BP_FROM_PTR_ESI cmp bp, word ptr [esi]
#define CMP_BP_FROM_PTR_EBP cmp bp, word ptr [ebp]
#define CMP_BP_FROM_PTR_ESP cmp bp, word ptr [esp]

#define CMP_SP_FROM_PTR_RAX cmp sp, word ptr [rax]
#define CMP_SP_FROM_PTR_RBX cmp sp, word ptr [rbx]
#define CMP_SP_FROM_PTR_RCX cmp sp, word ptr [rcx]
#define CMP_SP_FROM_PTR_RDX cmp sp, word ptr [rdx]
#define CMP_SP_FROM_PTR_RDI cmp sp, word ptr [rdi]
#define CMP_SP_FROM_PTR_RSI cmp sp, word ptr [rsi]
#define CMP_SP_FROM_PTR_RBP cmp sp, word ptr [rbp]
#define CMP_SP_FROM_PTR_RSP cmp sp, word ptr [rsp]
#define CMP_SP_FROM_PTR_R8 cmp sp, word ptr [r8]
#define CMP_SP_FROM_PTR_R9 cmp sp, word ptr [r9]
#define CMP_SP_FROM_PTR_R10 cmp sp, word ptr [r10]
#define CMP_SP_FROM_PTR_R11 cmp sp, word ptr [r11]
#define CMP_SP_FROM_PTR_R12 cmp sp, word ptr [r12]
#define CMP_SP_FROM_PTR_R13 cmp sp, word ptr [r13]
#define CMP_SP_FROM_PTR_R14 cmp sp, word ptr [r14]
#define CMP_SP_FROM_PTR_R15 cmp sp, word ptr [r15]
#define CMP_SP_FROM_PTR_EAX cmp sp, word ptr [eax]
#define CMP_SP_FROM_PTR_EBX cmp sp, word ptr [ebx]
#define CMP_SP_FROM_PTR_ECX cmp sp, word ptr [ecx]
#define CMP_SP_FROM_PTR_EDX cmp sp, word ptr [edx]
#define CMP_SP_FROM_PTR_EDI cmp sp, word ptr [edi]
#define CMP_SP_FROM_PTR_ESI cmp sp, word ptr [esi]
#define CMP_SP_FROM_PTR_EBP cmp sp, word ptr [ebp]
#define CMP_SP_FROM_PTR_ESP cmp sp, word ptr [esp]

#define CMP_R8W_FROM_PTR_RAX cmp r8w, word ptr [rax]
#define CMP_R8W_FROM_PTR_RBX cmp r8w, word ptr [rbx]
#define CMP_R8W_FROM_PTR_RCX cmp r8w, word ptr [rcx]
#define CMP_R8W_FROM_PTR_RDX cmp r8w, word ptr [rdx]
#define CMP_R8W_FROM_PTR_RDI cmp r8w, word ptr [rdi]
#define CMP_R8W_FROM_PTR_RSI cmp r8w, word ptr [rsi]
#define CMP_R8W_FROM_PTR_RBP cmp r8w, word ptr [rbp]
#define CMP_R8W_FROM_PTR_RSP cmp r8w, word ptr [rsp]
#define CMP_R8W_FROM_PTR_R8 cmp r8w, word ptr [r8]
#define CMP_R8W_FROM_PTR_R9 cmp r8w, word ptr [r9]
#define CMP_R8W_FROM_PTR_R10 cmp r8w, word ptr [r10]
#define CMP_R8W_FROM_PTR_R11 cmp r8w, word ptr [r11]
#define CMP_R8W_FROM_PTR_R12 cmp r8w, word ptr [r12]
#define CMP_R8W_FROM_PTR_R13 cmp r8w, word ptr [r13]
#define CMP_R8W_FROM_PTR_R14 cmp r8w, word ptr [r14]
#define CMP_R8W_FROM_PTR_R15 cmp r8w, word ptr [r15]
#define CMP_R8W_FROM_PTR_EAX cmp r8w, word ptr [eax]
#define CMP_R8W_FROM_PTR_EBX cmp r8w, word ptr [ebx]
#define CMP_R8W_FROM_PTR_ECX cmp r8w, word ptr [ecx]
#define CMP_R8W_FROM_PTR_EDX cmp r8w, word ptr [edx]
#define CMP_R8W_FROM_PTR_EDI cmp r8w, word ptr [edi]
#define CMP_R8W_FROM_PTR_ESI cmp r8w, word ptr [esi]
#define CMP_R8W_FROM_PTR_EBP cmp r8w, word ptr [ebp]
#define CMP_R8W_FROM_PTR_ESP cmp r8w, word ptr [esp]

#define CMP_R9W_FROM_PTR_RAX cmp r9w, word ptr [rax]
#define CMP_R9W_FROM_PTR_RBX cmp r9w, word ptr [rbx]
#define CMP_R9W_FROM_PTR_RCX cmp r9w, word ptr [rcx]
#define CMP_R9W_FROM_PTR_RDX cmp r9w, word ptr [rdx]
#define CMP_R9W_FROM_PTR_RDI cmp r9w, word ptr [rdi]
#define CMP_R9W_FROM_PTR_RSI cmp r9w, word ptr [rsi]
#define CMP_R9W_FROM_PTR_RBP cmp r9w, word ptr [rbp]
#define CMP_R9W_FROM_PTR_RSP cmp r9w, word ptr [rsp]
#define CMP_R9W_FROM_PTR_R8 cmp r9w, word ptr [r8]
#define CMP_R9W_FROM_PTR_R9 cmp r9w, word ptr [r9]
#define CMP_R9W_FROM_PTR_R10 cmp r9w, word ptr [r10]
#define CMP_R9W_FROM_PTR_R11 cmp r9w, word ptr [r11]
#define CMP_R9W_FROM_PTR_R12 cmp r9w, word ptr [r12]
#define CMP_R9W_FROM_PTR_R13 cmp r9w, word ptr [r13]
#define CMP_R9W_FROM_PTR_R14 cmp r9w, word ptr [r14]
#define CMP_R9W_FROM_PTR_R15 cmp r9w, word ptr [r15]
#define CMP_R9W_FROM_PTR_EAX cmp r9w, word ptr [eax]
#define CMP_R9W_FROM_PTR_EBX cmp r9w, word ptr [ebx]
#define CMP_R9W_FROM_PTR_ECX cmp r9w, word ptr [ecx]
#define CMP_R9W_FROM_PTR_EDX cmp r9w, word ptr [edx]
#define CMP_R9W_FROM_PTR_EDI cmp r9w, word ptr [edi]
#define CMP_R9W_FROM_PTR_ESI cmp r9w, word ptr [esi]
#define CMP_R9W_FROM_PTR_EBP cmp r9w, word ptr [ebp]
#define CMP_R9W_FROM_PTR_ESP cmp r9w, word ptr [esp]

#define CMP_R10W_FROM_PTR_RAX cmp r10w, word ptr [rax]
#define CMP_R10W_FROM_PTR_RBX cmp r10w, word ptr [rbx]
#define CMP_R10W_FROM_PTR_RCX cmp r10w, word ptr [rcx]
#define CMP_R10W_FROM_PTR_RDX cmp r10w, word ptr [rdx]
#define CMP_R10W_FROM_PTR_RDI cmp r10w, word ptr [rdi]
#define CMP_R10W_FROM_PTR_RSI cmp r10w, word ptr [rsi]
#define CMP_R10W_FROM_PTR_RBP cmp r10w, word ptr [rbp]
#define CMP_R10W_FROM_PTR_RSP cmp r10w, word ptr [rsp]
#define CMP_R10W_FROM_PTR_R8 cmp r10w, word ptr [r8]
#define CMP_R10W_FROM_PTR_R9 cmp r10w, word ptr [r9]
#define CMP_R10W_FROM_PTR_R10 cmp r10w, word ptr [r10]
#define CMP_R10W_FROM_PTR_R11 cmp r10w, word ptr [r11]
#define CMP_R10W_FROM_PTR_R12 cmp r10w, word ptr [r12]
#define CMP_R10W_FROM_PTR_R13 cmp r10w, word ptr [r13]
#define CMP_R10W_FROM_PTR_R14 cmp r10w, word ptr [r14]
#define CMP_R10W_FROM_PTR_R15 cmp r10w, word ptr [r15]
#define CMP_R10W_FROM_PTR_EAX cmp r10w, word ptr [eax]
#define CMP_R10W_FROM_PTR_EBX cmp r10w, word ptr [ebx]
#define CMP_R10W_FROM_PTR_ECX cmp r10w, word ptr [ecx]
#define CMP_R10W_FROM_PTR_EDX cmp r10w, word ptr [edx]
#define CMP_R10W_FROM_PTR_EDI cmp r10w, word ptr [edi]
#define CMP_R10W_FROM_PTR_ESI cmp r10w, word ptr [esi]
#define CMP_R10W_FROM_PTR_EBP cmp r10w, word ptr [ebp]
#define CMP_R10W_FROM_PTR_ESP cmp r10w, word ptr [esp]

#define CMP_R11W_FROM_PTR_RAX cmp r11w, word ptr [rax]
#define CMP_R11W_FROM_PTR_RBX cmp r11w, word ptr [rbx]
#define CMP_R11W_FROM_PTR_RCX cmp r11w, word ptr [rcx]
#define CMP_R11W_FROM_PTR_RDX cmp r11w, word ptr [rdx]
#define CMP_R11W_FROM_PTR_RDI cmp r11w, word ptr [rdi]
#define CMP_R11W_FROM_PTR_RSI cmp r11w, word ptr [rsi]
#define CMP_R11W_FROM_PTR_RBP cmp r11w, word ptr [rbp]
#define CMP_R11W_FROM_PTR_RSP cmp r11w, word ptr [rsp]
#define CMP_R11W_FROM_PTR_R8 cmp r11w, word ptr [r8]
#define CMP_R11W_FROM_PTR_R9 cmp r11w, word ptr [r9]
#define CMP_R11W_FROM_PTR_R10 cmp r11w, word ptr [r10]
#define CMP_R11W_FROM_PTR_R11 cmp r11w, word ptr [r11]
#define CMP_R11W_FROM_PTR_R12 cmp r11w, word ptr [r12]
#define CMP_R11W_FROM_PTR_R13 cmp r11w, word ptr [r13]
#define CMP_R11W_FROM_PTR_R14 cmp r11w, word ptr [r14]
#define CMP_R11W_FROM_PTR_R15 cmp r11w, word ptr [r15]
#define CMP_R11W_FROM_PTR_EAX cmp r11w, word ptr [eax]
#define CMP_R11W_FROM_PTR_EBX cmp r11w, word ptr [ebx]
#define CMP_R11W_FROM_PTR_ECX cmp r11w, word ptr [ecx]
#define CMP_R11W_FROM_PTR_EDX cmp r11w, word ptr [edx]
#define CMP_R11W_FROM_PTR_EDI cmp r11w, word ptr [edi]
#define CMP_R11W_FROM_PTR_ESI cmp r11w, word ptr [esi]
#define CMP_R11W_FROM_PTR_EBP cmp r11w, word ptr [ebp]
#define CMP_R11W_FROM_PTR_ESP cmp r11w, word ptr [esp]

#define CMP_R12W_FROM_PTR_RAX cmp r12w, word ptr [rax]
#define CMP_R12W_FROM_PTR_RBX cmp r12w, word ptr [rbx]
#define CMP_R12W_FROM_PTR_RCX cmp r12w, word ptr [rcx]
#define CMP_R12W_FROM_PTR_RDX cmp r12w, word ptr [rdx]
#define CMP_R12W_FROM_PTR_RDI cmp r12w, word ptr [rdi]
#define CMP_R12W_FROM_PTR_RSI cmp r12w, word ptr [rsi]
#define CMP_R12W_FROM_PTR_RBP cmp r12w, word ptr [rbp]
#define CMP_R12W_FROM_PTR_RSP cmp r12w, word ptr [rsp]
#define CMP_R12W_FROM_PTR_R8 cmp r12w, word ptr [r8]
#define CMP_R12W_FROM_PTR_R9 cmp r12w, word ptr [r9]
#define CMP_R12W_FROM_PTR_R10 cmp r12w, word ptr [r10]
#define CMP_R12W_FROM_PTR_R11 cmp r12w, word ptr [r11]
#define CMP_R12W_FROM_PTR_R12 cmp r12w, word ptr [r12]
#define CMP_R12W_FROM_PTR_R13 cmp r12w, word ptr [r13]
#define CMP_R12W_FROM_PTR_R14 cmp r12w, word ptr [r14]
#define CMP_R12W_FROM_PTR_R15 cmp r12w, word ptr [r15]
#define CMP_R12W_FROM_PTR_EAX cmp r12w, word ptr [eax]
#define CMP_R12W_FROM_PTR_EBX cmp r12w, word ptr [ebx]
#define CMP_R12W_FROM_PTR_ECX cmp r12w, word ptr [ecx]
#define CMP_R12W_FROM_PTR_EDX cmp r12w, word ptr [edx]
#define CMP_R12W_FROM_PTR_EDI cmp r12w, word ptr [edi]
#define CMP_R12W_FROM_PTR_ESI cmp r12w, word ptr [esi]
#define CMP_R12W_FROM_PTR_EBP cmp r12w, word ptr [ebp]
#define CMP_R12W_FROM_PTR_ESP cmp r12w, word ptr [esp]

#define CMP_R13W_FROM_PTR_RAX cmp r13w, word ptr [rax]
#define CMP_R13W_FROM_PTR_RBX cmp r13w, word ptr [rbx]
#define CMP_R13W_FROM_PTR_RCX cmp r13w, word ptr [rcx]
#define CMP_R13W_FROM_PTR_RDX cmp r13w, word ptr [rdx]
#define CMP_R13W_FROM_PTR_RDI cmp r13w, word ptr [rdi]
#define CMP_R13W_FROM_PTR_RSI cmp r13w, word ptr [rsi]
#define CMP_R13W_FROM_PTR_RBP cmp r13w, word ptr [rbp]
#define CMP_R13W_FROM_PTR_RSP cmp r13w, word ptr [rsp]
#define CMP_R13W_FROM_PTR_R8 cmp r13w, word ptr [r8]
#define CMP_R13W_FROM_PTR_R9 cmp r13w, word ptr [r9]
#define CMP_R13W_FROM_PTR_R10 cmp r13w, word ptr [r10]
#define CMP_R13W_FROM_PTR_R11 cmp r13w, word ptr [r11]
#define CMP_R13W_FROM_PTR_R12 cmp r13w, word ptr [r12]
#define CMP_R13W_FROM_PTR_R13 cmp r13w, word ptr [r13]
#define CMP_R13W_FROM_PTR_R14 cmp r13w, word ptr [r14]
#define CMP_R13W_FROM_PTR_R15 cmp r13w, word ptr [r15]
#define CMP_R13W_FROM_PTR_EAX cmp r13w, word ptr [eax]
#define CMP_R13W_FROM_PTR_EBX cmp r13w, word ptr [ebx]
#define CMP_R13W_FROM_PTR_ECX cmp r13w, word ptr [ecx]
#define CMP_R13W_FROM_PTR_EDX cmp r13w, word ptr [edx]
#define CMP_R13W_FROM_PTR_EDI cmp r13w, word ptr [edi]
#define CMP_R13W_FROM_PTR_ESI cmp r13w, word ptr [esi]
#define CMP_R13W_FROM_PTR_EBP cmp r13w, word ptr [ebp]
#define CMP_R13W_FROM_PTR_ESP cmp r13w, word ptr [esp]

#define CMP_R14W_FROM_PTR_RAX cmp r14w, word ptr [rax]
#define CMP_R14W_FROM_PTR_RBX cmp r14w, word ptr [rbx]
#define CMP_R14W_FROM_PTR_RCX cmp r14w, word ptr [rcx]
#define CMP_R14W_FROM_PTR_RDX cmp r14w, word ptr [rdx]
#define CMP_R14W_FROM_PTR_RDI cmp r14w, word ptr [rdi]
#define CMP_R14W_FROM_PTR_RSI cmp r14w, word ptr [rsi]
#define CMP_R14W_FROM_PTR_RBP cmp r14w, word ptr [rbp]
#define CMP_R14W_FROM_PTR_RSP cmp r14w, word ptr [rsp]
#define CMP_R14W_FROM_PTR_R8 cmp r14w, word ptr [r8]
#define CMP_R14W_FROM_PTR_R9 cmp r14w, word ptr [r9]
#define CMP_R14W_FROM_PTR_R10 cmp r14w, word ptr [r10]
#define CMP_R14W_FROM_PTR_R11 cmp r14w, word ptr [r11]
#define CMP_R14W_FROM_PTR_R12 cmp r14w, word ptr [r12]
#define CMP_R14W_FROM_PTR_R13 cmp r14w, word ptr [r13]
#define CMP_R14W_FROM_PTR_R14 cmp r14w, word ptr [r14]
#define CMP_R14W_FROM_PTR_R15 cmp r14w, word ptr [r15]
#define CMP_R14W_FROM_PTR_EAX cmp r14w, word ptr [eax]
#define CMP_R14W_FROM_PTR_EBX cmp r14w, word ptr [ebx]
#define CMP_R14W_FROM_PTR_ECX cmp r14w, word ptr [ecx]
#define CMP_R14W_FROM_PTR_EDX cmp r14w, word ptr [edx]
#define CMP_R14W_FROM_PTR_EDI cmp r14w, word ptr [edi]
#define CMP_R14W_FROM_PTR_ESI cmp r14w, word ptr [esi]
#define CMP_R14W_FROM_PTR_EBP cmp r14w, word ptr [ebp]
#define CMP_R14W_FROM_PTR_ESP cmp r14w, word ptr [esp]

#define CMP_R15W_FROM_PTR_RAX cmp r15w, word ptr [rax]
#define CMP_R15W_FROM_PTR_RBX cmp r15w, word ptr [rbx]
#define CMP_R15W_FROM_PTR_RCX cmp r15w, word ptr [rcx]
#define CMP_R15W_FROM_PTR_RDX cmp r15w, word ptr [rdx]
#define CMP_R15W_FROM_PTR_RDI cmp r15w, word ptr [rdi]
#define CMP_R15W_FROM_PTR_RSI cmp r15w, word ptr [rsi]
#define CMP_R15W_FROM_PTR_RBP cmp r15w, word ptr [rbp]
#define CMP_R15W_FROM_PTR_RSP cmp r15w, word ptr [rsp]
#define CMP_R15W_FROM_PTR_R8 cmp r15w, word ptr [r8]
#define CMP_R15W_FROM_PTR_R9 cmp r15w, word ptr [r9]
#define CMP_R15W_FROM_PTR_R10 cmp r15w, word ptr [r10]
#define CMP_R15W_FROM_PTR_R11 cmp r15w, word ptr [r11]
#define CMP_R15W_FROM_PTR_R12 cmp r15w, word ptr [r12]
#define CMP_R15W_FROM_PTR_R13 cmp r15w, word ptr [r13]
#define CMP_R15W_FROM_PTR_R14 cmp r15w, word ptr [r14]
#define CMP_R15W_FROM_PTR_R15 cmp r15w, word ptr [r15]
#define CMP_R15W_FROM_PTR_EAX cmp r15w, word ptr [eax]
#define CMP_R15W_FROM_PTR_EBX cmp r15w, word ptr [ebx]
#define CMP_R15W_FROM_PTR_ECX cmp r15w, word ptr [ecx]
#define CMP_R15W_FROM_PTR_EDX cmp r15w, word ptr [edx]
#define CMP_R15W_FROM_PTR_EDI cmp r15w, word ptr [edi]
#define CMP_R15W_FROM_PTR_ESI cmp r15w, word ptr [esi]
#define CMP_R15W_FROM_PTR_EBP cmp r15w, word ptr [ebp]
#define CMP_R15W_FROM_PTR_ESP cmp r15w, word ptr [esp]

#define CMP_AX_TO_PTR_RAX cmp word ptr [rax], ax
#define CMP_AX_TO_PTR_RBX cmp word ptr [rbx], ax
#define CMP_AX_TO_PTR_RCX cmp word ptr [rcx], ax
#define CMP_AX_TO_PTR_RDX cmp word ptr [rdx], ax
#define CMP_AX_TO_PTR_RDI cmp word ptr [rdi], ax
#define CMP_AX_TO_PTR_RSI cmp word ptr [rsi], ax
#define CMP_AX_TO_PTR_RBP cmp word ptr [rbp], ax
#define CMP_AX_TO_PTR_RSP cmp word ptr [rsp], ax
#define CMP_AX_TO_PTR_R8 cmp word ptr [r8], ax
#define CMP_AX_TO_PTR_R9 cmp word ptr [r9], ax
#define CMP_AX_TO_PTR_R10 cmp word ptr [r10], ax
#define CMP_AX_TO_PTR_R11 cmp word ptr [r11], ax
#define CMP_AX_TO_PTR_R12 cmp word ptr [r12], ax
#define CMP_AX_TO_PTR_R13 cmp word ptr [r13], ax
#define CMP_AX_TO_PTR_R14 cmp word ptr [r14], ax
#define CMP_AX_TO_PTR_R15 cmp word ptr [r15], ax
#define CMP_AX_TO_PTR_EAX cmp word ptr [eax], ax
#define CMP_AX_TO_PTR_EBX cmp word ptr [ebx], ax
#define CMP_AX_TO_PTR_ECX cmp word ptr [ecx], ax
#define CMP_AX_TO_PTR_EDX cmp word ptr [edx], ax
#define CMP_AX_TO_PTR_EDI cmp word ptr [edi], ax
#define CMP_AX_TO_PTR_ESI cmp word ptr [esi], ax
#define CMP_AX_TO_PTR_EBP cmp word ptr [ebp], ax
#define CMP_AX_TO_PTR_ESP cmp word ptr [esp], ax

#define CMP_BX_TO_PTR_RAX cmp word ptr [rax], bx
#define CMP_BX_TO_PTR_RBX cmp word ptr [rbx], bx
#define CMP_BX_TO_PTR_RCX cmp word ptr [rcx], bx
#define CMP_BX_TO_PTR_RDX cmp word ptr [rdx], bx
#define CMP_BX_TO_PTR_RDI cmp word ptr [rdi], bx
#define CMP_BX_TO_PTR_RSI cmp word ptr [rsi], bx
#define CMP_BX_TO_PTR_RBP cmp word ptr [rbp], bx
#define CMP_BX_TO_PTR_RSP cmp word ptr [rsp], bx
#define CMP_BX_TO_PTR_R8 cmp word ptr [r8], bx
#define CMP_BX_TO_PTR_R9 cmp word ptr [r9], bx
#define CMP_BX_TO_PTR_R10 cmp word ptr [r10], bx
#define CMP_BX_TO_PTR_R11 cmp word ptr [r11], bx
#define CMP_BX_TO_PTR_R12 cmp word ptr [r12], bx
#define CMP_BX_TO_PTR_R13 cmp word ptr [r13], bx
#define CMP_BX_TO_PTR_R14 cmp word ptr [r14], bx
#define CMP_BX_TO_PTR_R15 cmp word ptr [r15], bx
#define CMP_BX_TO_PTR_EAX cmp word ptr [eax], bx
#define CMP_BX_TO_PTR_EBX cmp word ptr [ebx], bx
#define CMP_BX_TO_PTR_ECX cmp word ptr [ecx], bx
#define CMP_BX_TO_PTR_EDX cmp word ptr [edx], bx
#define CMP_BX_TO_PTR_EDI cmp word ptr [edi], bx
#define CMP_BX_TO_PTR_ESI cmp word ptr [esi], bx
#define CMP_BX_TO_PTR_EBP cmp word ptr [ebp], bx
#define CMP_BX_TO_PTR_ESP cmp word ptr [esp], bx

#define CMP_CX_TO_PTR_RAX cmp word ptr [rax], cx
#define CMP_CX_TO_PTR_RBX cmp word ptr [rbx], cx
#define CMP_CX_TO_PTR_RCX cmp word ptr [rcx], cx
#define CMP_CX_TO_PTR_RDX cmp word ptr [rdx], cx
#define CMP_CX_TO_PTR_RDI cmp word ptr [rdi], cx
#define CMP_CX_TO_PTR_RSI cmp word ptr [rsi], cx
#define CMP_CX_TO_PTR_RBP cmp word ptr [rbp], cx
#define CMP_CX_TO_PTR_RSP cmp word ptr [rsp], cx
#define CMP_CX_TO_PTR_R8 cmp word ptr [r8], cx
#define CMP_CX_TO_PTR_R9 cmp word ptr [r9], cx
#define CMP_CX_TO_PTR_R10 cmp word ptr [r10], cx
#define CMP_CX_TO_PTR_R11 cmp word ptr [r11], cx
#define CMP_CX_TO_PTR_R12 cmp word ptr [r12], cx
#define CMP_CX_TO_PTR_R13 cmp word ptr [r13], cx
#define CMP_CX_TO_PTR_R14 cmp word ptr [r14], cx
#define CMP_CX_TO_PTR_R15 cmp word ptr [r15], cx
#define CMP_CX_TO_PTR_EAX cmp word ptr [eax], cx
#define CMP_CX_TO_PTR_EBX cmp word ptr [ebx], cx
#define CMP_CX_TO_PTR_ECX cmp word ptr [ecx], cx
#define CMP_CX_TO_PTR_EDX cmp word ptr [edx], cx
#define CMP_CX_TO_PTR_EDI cmp word ptr [edi], cx
#define CMP_CX_TO_PTR_ESI cmp word ptr [esi], cx
#define CMP_CX_TO_PTR_EBP cmp word ptr [ebp], cx
#define CMP_CX_TO_PTR_ESP cmp word ptr [esp], cx

#define CMP_DX_TO_PTR_RAX cmp word ptr [rax], dx
#define CMP_DX_TO_PTR_RBX cmp word ptr [rbx], dx
#define CMP_DX_TO_PTR_RCX cmp word ptr [rcx], dx
#define CMP_DX_TO_PTR_RDX cmp word ptr [rdx], dx
#define CMP_DX_TO_PTR_RDI cmp word ptr [rdi], dx
#define CMP_DX_TO_PTR_RSI cmp word ptr [rsi], dx
#define CMP_DX_TO_PTR_RBP cmp word ptr [rbp], dx
#define CMP_DX_TO_PTR_RSP cmp word ptr [rsp], dx
#define CMP_DX_TO_PTR_R8 cmp word ptr [r8], dx
#define CMP_DX_TO_PTR_R9 cmp word ptr [r9], dx
#define CMP_DX_TO_PTR_R10 cmp word ptr [r10], dx
#define CMP_DX_TO_PTR_R11 cmp word ptr [r11], dx
#define CMP_DX_TO_PTR_R12 cmp word ptr [r12], dx
#define CMP_DX_TO_PTR_R13 cmp word ptr [r13], dx
#define CMP_DX_TO_PTR_R14 cmp word ptr [r14], dx
#define CMP_DX_TO_PTR_R15 cmp word ptr [r15], dx
#define CMP_DX_TO_PTR_EAX cmp word ptr [eax], dx
#define CMP_DX_TO_PTR_EBX cmp word ptr [ebx], dx
#define CMP_DX_TO_PTR_ECX cmp word ptr [ecx], dx
#define CMP_DX_TO_PTR_EDX cmp word ptr [edx], dx
#define CMP_DX_TO_PTR_EDI cmp word ptr [edi], dx
#define CMP_DX_TO_PTR_ESI cmp word ptr [esi], dx
#define CMP_DX_TO_PTR_EBP cmp word ptr [ebp], dx
#define CMP_DX_TO_PTR_ESP cmp word ptr [esp], dx

#define CMP_DI_TO_PTR_RAX cmp word ptr [rax], di
#define CMP_DI_TO_PTR_RBX cmp word ptr [rbx], di
#define CMP_DI_TO_PTR_RCX cmp word ptr [rcx], di
#define CMP_DI_TO_PTR_RDX cmp word ptr [rdx], di
#define CMP_DI_TO_PTR_RDI cmp word ptr [rdi], di
#define CMP_DI_TO_PTR_RSI cmp word ptr [rsi], di
#define CMP_DI_TO_PTR_RBP cmp word ptr [rbp], di
#define CMP_DI_TO_PTR_RSP cmp word ptr [rsp], di
#define CMP_DI_TO_PTR_R8 cmp word ptr [r8], di
#define CMP_DI_TO_PTR_R9 cmp word ptr [r9], di
#define CMP_DI_TO_PTR_R10 cmp word ptr [r10], di
#define CMP_DI_TO_PTR_R11 cmp word ptr [r11], di
#define CMP_DI_TO_PTR_R12 cmp word ptr [r12], di
#define CMP_DI_TO_PTR_R13 cmp word ptr [r13], di
#define CMP_DI_TO_PTR_R14 cmp word ptr [r14], di
#define CMP_DI_TO_PTR_R15 cmp word ptr [r15], di
#define CMP_DI_TO_PTR_EAX cmp word ptr [eax], di
#define CMP_DI_TO_PTR_EBX cmp word ptr [ebx], di
#define CMP_DI_TO_PTR_ECX cmp word ptr [ecx], di
#define CMP_DI_TO_PTR_EDX cmp word ptr [edx], di
#define CMP_DI_TO_PTR_EDI cmp word ptr [edi], di
#define CMP_DI_TO_PTR_ESI cmp word ptr [esi], di
#define CMP_DI_TO_PTR_EBP cmp word ptr [ebp], di
#define CMP_DI_TO_PTR_ESP cmp word ptr [esp], di

#define CMP_SI_TO_PTR_RAX cmp word ptr [rax], si
#define CMP_SI_TO_PTR_RBX cmp word ptr [rbx], si
#define CMP_SI_TO_PTR_RCX cmp word ptr [rcx], si
#define CMP_SI_TO_PTR_RDX cmp word ptr [rdx], si
#define CMP_SI_TO_PTR_RDI cmp word ptr [rdi], si
#define CMP_SI_TO_PTR_RSI cmp word ptr [rsi], si
#define CMP_SI_TO_PTR_RBP cmp word ptr [rbp], si
#define CMP_SI_TO_PTR_RSP cmp word ptr [rsp], si
#define CMP_SI_TO_PTR_R8 cmp word ptr [r8], si
#define CMP_SI_TO_PTR_R9 cmp word ptr [r9], si
#define CMP_SI_TO_PTR_R10 cmp word ptr [r10], si
#define CMP_SI_TO_PTR_R11 cmp word ptr [r11], si
#define CMP_SI_TO_PTR_R12 cmp word ptr [r12], si
#define CMP_SI_TO_PTR_R13 cmp word ptr [r13], si
#define CMP_SI_TO_PTR_R14 cmp word ptr [r14], si
#define CMP_SI_TO_PTR_R15 cmp word ptr [r15], si
#define CMP_SI_TO_PTR_EAX cmp word ptr [eax], si
#define CMP_SI_TO_PTR_EBX cmp word ptr [ebx], si
#define CMP_SI_TO_PTR_ECX cmp word ptr [ecx], si
#define CMP_SI_TO_PTR_EDX cmp word ptr [edx], si
#define CMP_SI_TO_PTR_EDI cmp word ptr [edi], si
#define CMP_SI_TO_PTR_ESI cmp word ptr [esi], si
#define CMP_SI_TO_PTR_EBP cmp word ptr [ebp], si
#define CMP_SI_TO_PTR_ESP cmp word ptr [esp], si

#define CMP_BP_TO_PTR_RAX cmp word ptr [rax], bp
#define CMP_BP_TO_PTR_RBX cmp word ptr [rbx], bp
#define CMP_BP_TO_PTR_RCX cmp word ptr [rcx], bp
#define CMP_BP_TO_PTR_RDX cmp word ptr [rdx], bp
#define CMP_BP_TO_PTR_RDI cmp word ptr [rdi], bp
#define CMP_BP_TO_PTR_RSI cmp word ptr [rsi], bp
#define CMP_BP_TO_PTR_RBP cmp word ptr [rbp], bp
#define CMP_BP_TO_PTR_RSP cmp word ptr [rsp], bp
#define CMP_BP_TO_PTR_R8 cmp word ptr [r8], bp
#define CMP_BP_TO_PTR_R9 cmp word ptr [r9], bp
#define CMP_BP_TO_PTR_R10 cmp word ptr [r10], bp
#define CMP_BP_TO_PTR_R11 cmp word ptr [r11], bp
#define CMP_BP_TO_PTR_R12 cmp word ptr [r12], bp
#define CMP_BP_TO_PTR_R13 cmp word ptr [r13], bp
#define CMP_BP_TO_PTR_R14 cmp word ptr [r14], bp
#define CMP_BP_TO_PTR_R15 cmp word ptr [r15], bp
#define CMP_BP_TO_PTR_EAX cmp word ptr [eax], bp
#define CMP_BP_TO_PTR_EBX cmp word ptr [ebx], bp
#define CMP_BP_TO_PTR_ECX cmp word ptr [ecx], bp
#define CMP_BP_TO_PTR_EDX cmp word ptr [edx], bp
#define CMP_BP_TO_PTR_EDI cmp word ptr [edi], bp
#define CMP_BP_TO_PTR_ESI cmp word ptr [esi], bp
#define CMP_BP_TO_PTR_EBP cmp word ptr [ebp], bp
#define CMP_BP_TO_PTR_ESP cmp word ptr [esp], bp

#define CMP_SP_TO_PTR_RAX cmp word ptr [rax], sp
#define CMP_SP_TO_PTR_RBX cmp word ptr [rbx], sp
#define CMP_SP_TO_PTR_RCX cmp word ptr [rcx], sp
#define CMP_SP_TO_PTR_RDX cmp word ptr [rdx], sp
#define CMP_SP_TO_PTR_RDI cmp word ptr [rdi], sp
#define CMP_SP_TO_PTR_RSI cmp word ptr [rsi], sp
#define CMP_SP_TO_PTR_RBP cmp word ptr [rbp], sp
#define CMP_SP_TO_PTR_RSP cmp word ptr [rsp], sp
#define CMP_SP_TO_PTR_R8 cmp word ptr [r8], sp
#define CMP_SP_TO_PTR_R9 cmp word ptr [r9], sp
#define CMP_SP_TO_PTR_R10 cmp word ptr [r10], sp
#define CMP_SP_TO_PTR_R11 cmp word ptr [r11], sp
#define CMP_SP_TO_PTR_R12 cmp word ptr [r12], sp
#define CMP_SP_TO_PTR_R13 cmp word ptr [r13], sp
#define CMP_SP_TO_PTR_R14 cmp word ptr [r14], sp
#define CMP_SP_TO_PTR_R15 cmp word ptr [r15], sp
#define CMP_SP_TO_PTR_EAX cmp word ptr [eax], sp
#define CMP_SP_TO_PTR_EBX cmp word ptr [ebx], sp
#define CMP_SP_TO_PTR_ECX cmp word ptr [ecx], sp
#define CMP_SP_TO_PTR_EDX cmp word ptr [edx], sp
#define CMP_SP_TO_PTR_EDI cmp word ptr [edi], sp
#define CMP_SP_TO_PTR_ESI cmp word ptr [esi], sp
#define CMP_SP_TO_PTR_EBP cmp word ptr [ebp], sp
#define CMP_SP_TO_PTR_ESP cmp word ptr [esp], sp

#define CMP_R8W_TO_PTR_RAX cmp word ptr [rax], r8w
#define CMP_R8W_TO_PTR_RBX cmp word ptr [rbx], r8w
#define CMP_R8W_TO_PTR_RCX cmp word ptr [rcx], r8w
#define CMP_R8W_TO_PTR_RDX cmp word ptr [rdx], r8w
#define CMP_R8W_TO_PTR_RDI cmp word ptr [rdi], r8w
#define CMP_R8W_TO_PTR_RSI cmp word ptr [rsi], r8w
#define CMP_R8W_TO_PTR_RBP cmp word ptr [rbp], r8w
#define CMP_R8W_TO_PTR_RSP cmp word ptr [rsp], r8w
#define CMP_R8W_TO_PTR_R8 cmp word ptr [r8], r8w
#define CMP_R8W_TO_PTR_R9 cmp word ptr [r9], r8w
#define CMP_R8W_TO_PTR_R10 cmp word ptr [r10], r8w
#define CMP_R8W_TO_PTR_R11 cmp word ptr [r11], r8w
#define CMP_R8W_TO_PTR_R12 cmp word ptr [r12], r8w
#define CMP_R8W_TO_PTR_R13 cmp word ptr [r13], r8w
#define CMP_R8W_TO_PTR_R14 cmp word ptr [r14], r8w
#define CMP_R8W_TO_PTR_R15 cmp word ptr [r15], r8w
#define CMP_R8W_TO_PTR_EAX cmp word ptr [eax], r8w
#define CMP_R8W_TO_PTR_EBX cmp word ptr [ebx], r8w
#define CMP_R8W_TO_PTR_ECX cmp word ptr [ecx], r8w
#define CMP_R8W_TO_PTR_EDX cmp word ptr [edx], r8w
#define CMP_R8W_TO_PTR_EDI cmp word ptr [edi], r8w
#define CMP_R8W_TO_PTR_ESI cmp word ptr [esi], r8w
#define CMP_R8W_TO_PTR_EBP cmp word ptr [ebp], r8w
#define CMP_R8W_TO_PTR_ESP cmp word ptr [esp], r8w

#define CMP_R9W_TO_PTR_RAX cmp word ptr [rax], r9w
#define CMP_R9W_TO_PTR_RBX cmp word ptr [rbx], r9w
#define CMP_R9W_TO_PTR_RCX cmp word ptr [rcx], r9w
#define CMP_R9W_TO_PTR_RDX cmp word ptr [rdx], r9w
#define CMP_R9W_TO_PTR_RDI cmp word ptr [rdi], r9w
#define CMP_R9W_TO_PTR_RSI cmp word ptr [rsi], r9w
#define CMP_R9W_TO_PTR_RBP cmp word ptr [rbp], r9w
#define CMP_R9W_TO_PTR_RSP cmp word ptr [rsp], r9w
#define CMP_R9W_TO_PTR_R8 cmp word ptr [r8], r9w
#define CMP_R9W_TO_PTR_R9 cmp word ptr [r9], r9w
#define CMP_R9W_TO_PTR_R10 cmp word ptr [r10], r9w
#define CMP_R9W_TO_PTR_R11 cmp word ptr [r11], r9w
#define CMP_R9W_TO_PTR_R12 cmp word ptr [r12], r9w
#define CMP_R9W_TO_PTR_R13 cmp word ptr [r13], r9w
#define CMP_R9W_TO_PTR_R14 cmp word ptr [r14], r9w
#define CMP_R9W_TO_PTR_R15 cmp word ptr [r15], r9w
#define CMP_R9W_TO_PTR_EAX cmp word ptr [eax], r9w
#define CMP_R9W_TO_PTR_EBX cmp word ptr [ebx], r9w
#define CMP_R9W_TO_PTR_ECX cmp word ptr [ecx], r9w
#define CMP_R9W_TO_PTR_EDX cmp word ptr [edx], r9w
#define CMP_R9W_TO_PTR_EDI cmp word ptr [edi], r9w
#define CMP_R9W_TO_PTR_ESI cmp word ptr [esi], r9w
#define CMP_R9W_TO_PTR_EBP cmp word ptr [ebp], r9w
#define CMP_R9W_TO_PTR_ESP cmp word ptr [esp], r9w

#define CMP_R10W_TO_PTR_RAX cmp word ptr [rax], r10w
#define CMP_R10W_TO_PTR_RBX cmp word ptr [rbx], r10w
#define CMP_R10W_TO_PTR_RCX cmp word ptr [rcx], r10w
#define CMP_R10W_TO_PTR_RDX cmp word ptr [rdx], r10w
#define CMP_R10W_TO_PTR_RDI cmp word ptr [rdi], r10w
#define CMP_R10W_TO_PTR_RSI cmp word ptr [rsi], r10w
#define CMP_R10W_TO_PTR_RBP cmp word ptr [rbp], r10w
#define CMP_R10W_TO_PTR_RSP cmp word ptr [rsp], r10w
#define CMP_R10W_TO_PTR_R8 cmp word ptr [r8], r10w
#define CMP_R10W_TO_PTR_R9 cmp word ptr [r9], r10w
#define CMP_R10W_TO_PTR_R10 cmp word ptr [r10], r10w
#define CMP_R10W_TO_PTR_R11 cmp word ptr [r11], r10w
#define CMP_R10W_TO_PTR_R12 cmp word ptr [r12], r10w
#define CMP_R10W_TO_PTR_R13 cmp word ptr [r13], r10w
#define CMP_R10W_TO_PTR_R14 cmp word ptr [r14], r10w
#define CMP_R10W_TO_PTR_R15 cmp word ptr [r15], r10w
#define CMP_R10W_TO_PTR_EAX cmp word ptr [eax], r10w
#define CMP_R10W_TO_PTR_EBX cmp word ptr [ebx], r10w
#define CMP_R10W_TO_PTR_ECX cmp word ptr [ecx], r10w
#define CMP_R10W_TO_PTR_EDX cmp word ptr [edx], r10w
#define CMP_R10W_TO_PTR_EDI cmp word ptr [edi], r10w
#define CMP_R10W_TO_PTR_ESI cmp word ptr [esi], r10w
#define CMP_R10W_TO_PTR_EBP cmp word ptr [ebp], r10w
#define CMP_R10W_TO_PTR_ESP cmp word ptr [esp], r10w

#define CMP_R11W_TO_PTR_RAX cmp word ptr [rax], r11w
#define CMP_R11W_TO_PTR_RBX cmp word ptr [rbx], r11w
#define CMP_R11W_TO_PTR_RCX cmp word ptr [rcx], r11w
#define CMP_R11W_TO_PTR_RDX cmp word ptr [rdx], r11w
#define CMP_R11W_TO_PTR_RDI cmp word ptr [rdi], r11w
#define CMP_R11W_TO_PTR_RSI cmp word ptr [rsi], r11w
#define CMP_R11W_TO_PTR_RBP cmp word ptr [rbp], r11w
#define CMP_R11W_TO_PTR_RSP cmp word ptr [rsp], r11w
#define CMP_R11W_TO_PTR_R8 cmp word ptr [r8], r11w
#define CMP_R11W_TO_PTR_R9 cmp word ptr [r9], r11w
#define CMP_R11W_TO_PTR_R10 cmp word ptr [r10], r11w
#define CMP_R11W_TO_PTR_R11 cmp word ptr [r11], r11w
#define CMP_R11W_TO_PTR_R12 cmp word ptr [r12], r11w
#define CMP_R11W_TO_PTR_R13 cmp word ptr [r13], r11w
#define CMP_R11W_TO_PTR_R14 cmp word ptr [r14], r11w
#define CMP_R11W_TO_PTR_R15 cmp word ptr [r15], r11w
#define CMP_R11W_TO_PTR_EAX cmp word ptr [eax], r11w
#define CMP_R11W_TO_PTR_EBX cmp word ptr [ebx], r11w
#define CMP_R11W_TO_PTR_ECX cmp word ptr [ecx], r11w
#define CMP_R11W_TO_PTR_EDX cmp word ptr [edx], r11w
#define CMP_R11W_TO_PTR_EDI cmp word ptr [edi], r11w
#define CMP_R11W_TO_PTR_ESI cmp word ptr [esi], r11w
#define CMP_R11W_TO_PTR_EBP cmp word ptr [ebp], r11w
#define CMP_R11W_TO_PTR_ESP cmp word ptr [esp], r11w

#define CMP_R12W_TO_PTR_RAX cmp word ptr [rax], r12w
#define CMP_R12W_TO_PTR_RBX cmp word ptr [rbx], r12w
#define CMP_R12W_TO_PTR_RCX cmp word ptr [rcx], r12w
#define CMP_R12W_TO_PTR_RDX cmp word ptr [rdx], r12w
#define CMP_R12W_TO_PTR_RDI cmp word ptr [rdi], r12w
#define CMP_R12W_TO_PTR_RSI cmp word ptr [rsi], r12w
#define CMP_R12W_TO_PTR_RBP cmp word ptr [rbp], r12w
#define CMP_R12W_TO_PTR_RSP cmp word ptr [rsp], r12w
#define CMP_R12W_TO_PTR_R8 cmp word ptr [r8], r12w
#define CMP_R12W_TO_PTR_R9 cmp word ptr [r9], r12w
#define CMP_R12W_TO_PTR_R10 cmp word ptr [r10], r12w
#define CMP_R12W_TO_PTR_R11 cmp word ptr [r11], r12w
#define CMP_R12W_TO_PTR_R12 cmp word ptr [r12], r12w
#define CMP_R12W_TO_PTR_R13 cmp word ptr [r13], r12w
#define CMP_R12W_TO_PTR_R14 cmp word ptr [r14], r12w
#define CMP_R12W_TO_PTR_R15 cmp word ptr [r15], r12w
#define CMP_R12W_TO_PTR_EAX cmp word ptr [eax], r12w
#define CMP_R12W_TO_PTR_EBX cmp word ptr [ebx], r12w
#define CMP_R12W_TO_PTR_ECX cmp word ptr [ecx], r12w
#define CMP_R12W_TO_PTR_EDX cmp word ptr [edx], r12w
#define CMP_R12W_TO_PTR_EDI cmp word ptr [edi], r12w
#define CMP_R12W_TO_PTR_ESI cmp word ptr [esi], r12w
#define CMP_R12W_TO_PTR_EBP cmp word ptr [ebp], r12w
#define CMP_R12W_TO_PTR_ESP cmp word ptr [esp], r12w

#define CMP_R13W_TO_PTR_RAX cmp word ptr [rax], r13w
#define CMP_R13W_TO_PTR_RBX cmp word ptr [rbx], r13w
#define CMP_R13W_TO_PTR_RCX cmp word ptr [rcx], r13w
#define CMP_R13W_TO_PTR_RDX cmp word ptr [rdx], r13w
#define CMP_R13W_TO_PTR_RDI cmp word ptr [rdi], r13w
#define CMP_R13W_TO_PTR_RSI cmp word ptr [rsi], r13w
#define CMP_R13W_TO_PTR_RBP cmp word ptr [rbp], r13w
#define CMP_R13W_TO_PTR_RSP cmp word ptr [rsp], r13w
#define CMP_R13W_TO_PTR_R8 cmp word ptr [r8], r13w
#define CMP_R13W_TO_PTR_R9 cmp word ptr [r9], r13w
#define CMP_R13W_TO_PTR_R10 cmp word ptr [r10], r13w
#define CMP_R13W_TO_PTR_R11 cmp word ptr [r11], r13w
#define CMP_R13W_TO_PTR_R12 cmp word ptr [r12], r13w
#define CMP_R13W_TO_PTR_R13 cmp word ptr [r13], r13w
#define CMP_R13W_TO_PTR_R14 cmp word ptr [r14], r13w
#define CMP_R13W_TO_PTR_R15 cmp word ptr [r15], r13w
#define CMP_R13W_TO_PTR_EAX cmp word ptr [eax], r13w
#define CMP_R13W_TO_PTR_EBX cmp word ptr [ebx], r13w
#define CMP_R13W_TO_PTR_ECX cmp word ptr [ecx], r13w
#define CMP_R13W_TO_PTR_EDX cmp word ptr [edx], r13w
#define CMP_R13W_TO_PTR_EDI cmp word ptr [edi], r13w
#define CMP_R13W_TO_PTR_ESI cmp word ptr [esi], r13w
#define CMP_R13W_TO_PTR_EBP cmp word ptr [ebp], r13w
#define CMP_R13W_TO_PTR_ESP cmp word ptr [esp], r13w

#define CMP_R14W_TO_PTR_RAX cmp word ptr [rax], r14w
#define CMP_R14W_TO_PTR_RBX cmp word ptr [rbx], r14w
#define CMP_R14W_TO_PTR_RCX cmp word ptr [rcx], r14w
#define CMP_R14W_TO_PTR_RDX cmp word ptr [rdx], r14w
#define CMP_R14W_TO_PTR_RDI cmp word ptr [rdi], r14w
#define CMP_R14W_TO_PTR_RSI cmp word ptr [rsi], r14w
#define CMP_R14W_TO_PTR_RBP cmp word ptr [rbp], r14w
#define CMP_R14W_TO_PTR_RSP cmp word ptr [rsp], r14w
#define CMP_R14W_TO_PTR_R8 cmp word ptr [r8], r14w
#define CMP_R14W_TO_PTR_R9 cmp word ptr [r9], r14w
#define CMP_R14W_TO_PTR_R10 cmp word ptr [r10], r14w
#define CMP_R14W_TO_PTR_R11 cmp word ptr [r11], r14w
#define CMP_R14W_TO_PTR_R12 cmp word ptr [r12], r14w
#define CMP_R14W_TO_PTR_R13 cmp word ptr [r13], r14w
#define CMP_R14W_TO_PTR_R14 cmp word ptr [r14], r14w
#define CMP_R14W_TO_PTR_R15 cmp word ptr [r15], r14w
#define CMP_R14W_TO_PTR_EAX cmp word ptr [eax], r14w
#define CMP_R14W_TO_PTR_EBX cmp word ptr [ebx], r14w
#define CMP_R14W_TO_PTR_ECX cmp word ptr [ecx], r14w
#define CMP_R14W_TO_PTR_EDX cmp word ptr [edx], r14w
#define CMP_R14W_TO_PTR_EDI cmp word ptr [edi], r14w
#define CMP_R14W_TO_PTR_ESI cmp word ptr [esi], r14w
#define CMP_R14W_TO_PTR_EBP cmp word ptr [ebp], r14w
#define CMP_R14W_TO_PTR_ESP cmp word ptr [esp], r14w

#define CMP_R15W_TO_PTR_RAX cmp word ptr [rax], r15w
#define CMP_R15W_TO_PTR_RBX cmp word ptr [rbx], r15w
#define CMP_R15W_TO_PTR_RCX cmp word ptr [rcx], r15w
#define CMP_R15W_TO_PTR_RDX cmp word ptr [rdx], r15w
#define CMP_R15W_TO_PTR_RDI cmp word ptr [rdi], r15w
#define CMP_R15W_TO_PTR_RSI cmp word ptr [rsi], r15w
#define CMP_R15W_TO_PTR_RBP cmp word ptr [rbp], r15w
#define CMP_R15W_TO_PTR_RSP cmp word ptr [rsp], r15w
#define CMP_R15W_TO_PTR_R8 cmp word ptr [r8], r15w
#define CMP_R15W_TO_PTR_R9 cmp word ptr [r9], r15w
#define CMP_R15W_TO_PTR_R10 cmp word ptr [r10], r15w
#define CMP_R15W_TO_PTR_R11 cmp word ptr [r11], r15w
#define CMP_R15W_TO_PTR_R12 cmp word ptr [r12], r15w
#define CMP_R15W_TO_PTR_R13 cmp word ptr [r13], r15w
#define CMP_R15W_TO_PTR_R14 cmp word ptr [r14], r15w
#define CMP_R15W_TO_PTR_R15 cmp word ptr [r15], r15w
#define CMP_R15W_TO_PTR_EAX cmp word ptr [eax], r15w
#define CMP_R15W_TO_PTR_EBX cmp word ptr [ebx], r15w
#define CMP_R15W_TO_PTR_ECX cmp word ptr [ecx], r15w
#define CMP_R15W_TO_PTR_EDX cmp word ptr [edx], r15w
#define CMP_R15W_TO_PTR_EDI cmp word ptr [edi], r15w
#define CMP_R15W_TO_PTR_ESI cmp word ptr [esi], r15w
#define CMP_R15W_TO_PTR_EBP cmp word ptr [ebp], r15w
#define CMP_R15W_TO_PTR_ESP cmp word ptr [esp], r15w

#define CMP_AX_FROM_PTR_RAX_(VALUE) cmp ax, word ptr [rax + VALUE]
#define CMP_AX_FROM_PTR_RBX_(VALUE) cmp ax, word ptr [rbx + VALUE]
#define CMP_AX_FROM_PTR_RCX_(VALUE) cmp ax, word ptr [rcx + VALUE]
#define CMP_AX_FROM_PTR_RDX_(VALUE) cmp ax, word ptr [rdx + VALUE]
#define CMP_AX_FROM_PTR_RDI_(VALUE) cmp ax, word ptr [rdi + VALUE]
#define CMP_AX_FROM_PTR_RSI_(VALUE) cmp ax, word ptr [rsi + VALUE]
#define CMP_AX_FROM_PTR_RBP_(VALUE) cmp ax, word ptr [rbp + VALUE]
#define CMP_AX_FROM_PTR_RSP_(VALUE) cmp ax, word ptr [rsp + VALUE]
#define CMP_AX_FROM_PTR_R8_(VALUE) cmp ax, word ptr [r8 + VALUE]
#define CMP_AX_FROM_PTR_R9_(VALUE) cmp ax, word ptr [r9 + VALUE]
#define CMP_AX_FROM_PTR_R10_(VALUE) cmp ax, word ptr [r10 + VALUE]
#define CMP_AX_FROM_PTR_R11_(VALUE) cmp ax, word ptr [r11 + VALUE]
#define CMP_AX_FROM_PTR_R12_(VALUE) cmp ax, word ptr [r12 + VALUE]
#define CMP_AX_FROM_PTR_R13_(VALUE) cmp ax, word ptr [r13 + VALUE]
#define CMP_AX_FROM_PTR_R14_(VALUE) cmp ax, word ptr [r14 + VALUE]
#define CMP_AX_FROM_PTR_R15_(VALUE) cmp ax, word ptr [r15 + VALUE]
#define CMP_AX_FROM_PTR_EAX_(VALUE) cmp ax, word ptr [eax + VALUE]
#define CMP_AX_FROM_PTR_EBX_(VALUE) cmp ax, word ptr [ebx + VALUE]
#define CMP_AX_FROM_PTR_ECX_(VALUE) cmp ax, word ptr [ecx + VALUE]
#define CMP_AX_FROM_PTR_EDX_(VALUE) cmp ax, word ptr [edx + VALUE]
#define CMP_AX_FROM_PTR_EDI_(VALUE) cmp ax, word ptr [edi + VALUE]
#define CMP_AX_FROM_PTR_ESI_(VALUE) cmp ax, word ptr [esi + VALUE]
#define CMP_AX_FROM_PTR_EBP_(VALUE) cmp ax, word ptr [ebp + VALUE]
#define CMP_AX_FROM_PTR_ESP_(VALUE) cmp ax, word ptr [esp + VALUE]

#define CMP_BX_FROM_PTR_RAX_(VALUE) cmp bx, word ptr [rax + VALUE]
#define CMP_BX_FROM_PTR_RBX_(VALUE) cmp bx, word ptr [rbx + VALUE]
#define CMP_BX_FROM_PTR_RCX_(VALUE) cmp bx, word ptr [rcx + VALUE]
#define CMP_BX_FROM_PTR_RDX_(VALUE) cmp bx, word ptr [rdx + VALUE]
#define CMP_BX_FROM_PTR_RDI_(VALUE) cmp bx, word ptr [rdi + VALUE]
#define CMP_BX_FROM_PTR_RSI_(VALUE) cmp bx, word ptr [rsi + VALUE]
#define CMP_BX_FROM_PTR_RBP_(VALUE) cmp bx, word ptr [rbp + VALUE]
#define CMP_BX_FROM_PTR_RSP_(VALUE) cmp bx, word ptr [rsp + VALUE]
#define CMP_BX_FROM_PTR_R8_(VALUE) cmp bx, word ptr [r8 + VALUE]
#define CMP_BX_FROM_PTR_R9_(VALUE) cmp bx, word ptr [r9 + VALUE]
#define CMP_BX_FROM_PTR_R10_(VALUE) cmp bx, word ptr [r10 + VALUE]
#define CMP_BX_FROM_PTR_R11_(VALUE) cmp bx, word ptr [r11 + VALUE]
#define CMP_BX_FROM_PTR_R12_(VALUE) cmp bx, word ptr [r12 + VALUE]
#define CMP_BX_FROM_PTR_R13_(VALUE) cmp bx, word ptr [r13 + VALUE]
#define CMP_BX_FROM_PTR_R14_(VALUE) cmp bx, word ptr [r14 + VALUE]
#define CMP_BX_FROM_PTR_R15_(VALUE) cmp bx, word ptr [r15 + VALUE]
#define CMP_BX_FROM_PTR_EAX_(VALUE) cmp bx, word ptr [eax + VALUE]
#define CMP_BX_FROM_PTR_EBX_(VALUE) cmp bx, word ptr [ebx + VALUE]
#define CMP_BX_FROM_PTR_ECX_(VALUE) cmp bx, word ptr [ecx + VALUE]
#define CMP_BX_FROM_PTR_EDX_(VALUE) cmp bx, word ptr [edx + VALUE]
#define CMP_BX_FROM_PTR_EDI_(VALUE) cmp bx, word ptr [edi + VALUE]
#define CMP_BX_FROM_PTR_ESI_(VALUE) cmp bx, word ptr [esi + VALUE]
#define CMP_BX_FROM_PTR_EBP_(VALUE) cmp bx, word ptr [ebp + VALUE]
#define CMP_BX_FROM_PTR_ESP_(VALUE) cmp bx, word ptr [esp + VALUE]

#define CMP_CX_FROM_PTR_RAX_(VALUE) cmp cx, word ptr [rax + VALUE]
#define CMP_CX_FROM_PTR_RBX_(VALUE) cmp cx, word ptr [rbx + VALUE]
#define CMP_CX_FROM_PTR_RCX_(VALUE) cmp cx, word ptr [rcx + VALUE]
#define CMP_CX_FROM_PTR_RDX_(VALUE) cmp cx, word ptr [rdx + VALUE]
#define CMP_CX_FROM_PTR_RDI_(VALUE) cmp cx, word ptr [rdi + VALUE]
#define CMP_CX_FROM_PTR_RSI_(VALUE) cmp cx, word ptr [rsi + VALUE]
#define CMP_CX_FROM_PTR_RBP_(VALUE) cmp cx, word ptr [rbp + VALUE]
#define CMP_CX_FROM_PTR_RSP_(VALUE) cmp cx, word ptr [rsp + VALUE]
#define CMP_CX_FROM_PTR_R8_(VALUE) cmp cx, word ptr [r8 + VALUE]
#define CMP_CX_FROM_PTR_R9_(VALUE) cmp cx, word ptr [r9 + VALUE]
#define CMP_CX_FROM_PTR_R10_(VALUE) cmp cx, word ptr [r10 + VALUE]
#define CMP_CX_FROM_PTR_R11_(VALUE) cmp cx, word ptr [r11 + VALUE]
#define CMP_CX_FROM_PTR_R12_(VALUE) cmp cx, word ptr [r12 + VALUE]
#define CMP_CX_FROM_PTR_R13_(VALUE) cmp cx, word ptr [r13 + VALUE]
#define CMP_CX_FROM_PTR_R14_(VALUE) cmp cx, word ptr [r14 + VALUE]
#define CMP_CX_FROM_PTR_R15_(VALUE) cmp cx, word ptr [r15 + VALUE]
#define CMP_CX_FROM_PTR_EAX_(VALUE) cmp cx, word ptr [eax + VALUE]
#define CMP_CX_FROM_PTR_EBX_(VALUE) cmp cx, word ptr [ebx + VALUE]
#define CMP_CX_FROM_PTR_ECX_(VALUE) cmp cx, word ptr [ecx + VALUE]
#define CMP_CX_FROM_PTR_EDX_(VALUE) cmp cx, word ptr [edx + VALUE]
#define CMP_CX_FROM_PTR_EDI_(VALUE) cmp cx, word ptr [edi + VALUE]
#define CMP_CX_FROM_PTR_ESI_(VALUE) cmp cx, word ptr [esi + VALUE]
#define CMP_CX_FROM_PTR_EBP_(VALUE) cmp cx, word ptr [ebp + VALUE]
#define CMP_CX_FROM_PTR_ESP_(VALUE) cmp cx, word ptr [esp + VALUE]

#define CMP_DX_FROM_PTR_RAX_(VALUE) cmp dx, word ptr [rax + VALUE]
#define CMP_DX_FROM_PTR_RBX_(VALUE) cmp dx, word ptr [rbx + VALUE]
#define CMP_DX_FROM_PTR_RCX_(VALUE) cmp dx, word ptr [rcx + VALUE]
#define CMP_DX_FROM_PTR_RDX_(VALUE) cmp dx, word ptr [rdx + VALUE]
#define CMP_DX_FROM_PTR_RDI_(VALUE) cmp dx, word ptr [rdi + VALUE]
#define CMP_DX_FROM_PTR_RSI_(VALUE) cmp dx, word ptr [rsi + VALUE]
#define CMP_DX_FROM_PTR_RBP_(VALUE) cmp dx, word ptr [rbp + VALUE]
#define CMP_DX_FROM_PTR_RSP_(VALUE) cmp dx, word ptr [rsp + VALUE]
#define CMP_DX_FROM_PTR_R8_(VALUE) cmp dx, word ptr [r8 + VALUE]
#define CMP_DX_FROM_PTR_R9_(VALUE) cmp dx, word ptr [r9 + VALUE]
#define CMP_DX_FROM_PTR_R10_(VALUE) cmp dx, word ptr [r10 + VALUE]
#define CMP_DX_FROM_PTR_R11_(VALUE) cmp dx, word ptr [r11 + VALUE]
#define CMP_DX_FROM_PTR_R12_(VALUE) cmp dx, word ptr [r12 + VALUE]
#define CMP_DX_FROM_PTR_R13_(VALUE) cmp dx, word ptr [r13 + VALUE]
#define CMP_DX_FROM_PTR_R14_(VALUE) cmp dx, word ptr [r14 + VALUE]
#define CMP_DX_FROM_PTR_R15_(VALUE) cmp dx, word ptr [r15 + VALUE]
#define CMP_DX_FROM_PTR_EAX_(VALUE) cmp dx, word ptr [eax + VALUE]
#define CMP_DX_FROM_PTR_EBX_(VALUE) cmp dx, word ptr [ebx + VALUE]
#define CMP_DX_FROM_PTR_ECX_(VALUE) cmp dx, word ptr [ecx + VALUE]
#define CMP_DX_FROM_PTR_EDX_(VALUE) cmp dx, word ptr [edx + VALUE]
#define CMP_DX_FROM_PTR_EDI_(VALUE) cmp dx, word ptr [edi + VALUE]
#define CMP_DX_FROM_PTR_ESI_(VALUE) cmp dx, word ptr [esi + VALUE]
#define CMP_DX_FROM_PTR_EBP_(VALUE) cmp dx, word ptr [ebp + VALUE]
#define CMP_DX_FROM_PTR_ESP_(VALUE) cmp dx, word ptr [esp + VALUE]

#define CMP_DI_FROM_PTR_RAX_(VALUE) cmp di, word ptr [rax + VALUE]
#define CMP_DI_FROM_PTR_RBX_(VALUE) cmp di, word ptr [rbx + VALUE]
#define CMP_DI_FROM_PTR_RCX_(VALUE) cmp di, word ptr [rcx + VALUE]
#define CMP_DI_FROM_PTR_RDX_(VALUE) cmp di, word ptr [rdx + VALUE]
#define CMP_DI_FROM_PTR_RDI_(VALUE) cmp di, word ptr [rdi + VALUE]
#define CMP_DI_FROM_PTR_RSI_(VALUE) cmp di, word ptr [rsi + VALUE]
#define CMP_DI_FROM_PTR_RBP_(VALUE) cmp di, word ptr [rbp + VALUE]
#define CMP_DI_FROM_PTR_RSP_(VALUE) cmp di, word ptr [rsp + VALUE]
#define CMP_DI_FROM_PTR_R8_(VALUE) cmp di, word ptr [r8 + VALUE]
#define CMP_DI_FROM_PTR_R9_(VALUE) cmp di, word ptr [r9 + VALUE]
#define CMP_DI_FROM_PTR_R10_(VALUE) cmp di, word ptr [r10 + VALUE]
#define CMP_DI_FROM_PTR_R11_(VALUE) cmp di, word ptr [r11 + VALUE]
#define CMP_DI_FROM_PTR_R12_(VALUE) cmp di, word ptr [r12 + VALUE]
#define CMP_DI_FROM_PTR_R13_(VALUE) cmp di, word ptr [r13 + VALUE]
#define CMP_DI_FROM_PTR_R14_(VALUE) cmp di, word ptr [r14 + VALUE]
#define CMP_DI_FROM_PTR_R15_(VALUE) cmp di, word ptr [r15 + VALUE]
#define CMP_DI_FROM_PTR_EAX_(VALUE) cmp di, word ptr [eax + VALUE]
#define CMP_DI_FROM_PTR_EBX_(VALUE) cmp di, word ptr [ebx + VALUE]
#define CMP_DI_FROM_PTR_ECX_(VALUE) cmp di, word ptr [ecx + VALUE]
#define CMP_DI_FROM_PTR_EDX_(VALUE) cmp di, word ptr [edx + VALUE]
#define CMP_DI_FROM_PTR_EDI_(VALUE) cmp di, word ptr [edi + VALUE]
#define CMP_DI_FROM_PTR_ESI_(VALUE) cmp di, word ptr [esi + VALUE]
#define CMP_DI_FROM_PTR_EBP_(VALUE) cmp di, word ptr [ebp + VALUE]
#define CMP_DI_FROM_PTR_ESP_(VALUE) cmp di, word ptr [esp + VALUE]

#define CMP_SI_FROM_PTR_RAX_(VALUE) cmp si, word ptr [rax + VALUE]
#define CMP_SI_FROM_PTR_RBX_(VALUE) cmp si, word ptr [rbx + VALUE]
#define CMP_SI_FROM_PTR_RCX_(VALUE) cmp si, word ptr [rcx + VALUE]
#define CMP_SI_FROM_PTR_RDX_(VALUE) cmp si, word ptr [rdx + VALUE]
#define CMP_SI_FROM_PTR_RDI_(VALUE) cmp si, word ptr [rdi + VALUE]
#define CMP_SI_FROM_PTR_RSI_(VALUE) cmp si, word ptr [rsi + VALUE]
#define CMP_SI_FROM_PTR_RBP_(VALUE) cmp si, word ptr [rbp + VALUE]
#define CMP_SI_FROM_PTR_RSP_(VALUE) cmp si, word ptr [rsp + VALUE]
#define CMP_SI_FROM_PTR_R8_(VALUE) cmp si, word ptr [r8 + VALUE]
#define CMP_SI_FROM_PTR_R9_(VALUE) cmp si, word ptr [r9 + VALUE]
#define CMP_SI_FROM_PTR_R10_(VALUE) cmp si, word ptr [r10 + VALUE]
#define CMP_SI_FROM_PTR_R11_(VALUE) cmp si, word ptr [r11 + VALUE]
#define CMP_SI_FROM_PTR_R12_(VALUE) cmp si, word ptr [r12 + VALUE]
#define CMP_SI_FROM_PTR_R13_(VALUE) cmp si, word ptr [r13 + VALUE]
#define CMP_SI_FROM_PTR_R14_(VALUE) cmp si, word ptr [r14 + VALUE]
#define CMP_SI_FROM_PTR_R15_(VALUE) cmp si, word ptr [r15 + VALUE]
#define CMP_SI_FROM_PTR_EAX_(VALUE) cmp si, word ptr [eax + VALUE]
#define CMP_SI_FROM_PTR_EBX_(VALUE) cmp si, word ptr [ebx + VALUE]
#define CMP_SI_FROM_PTR_ECX_(VALUE) cmp si, word ptr [ecx + VALUE]
#define CMP_SI_FROM_PTR_EDX_(VALUE) cmp si, word ptr [edx + VALUE]
#define CMP_SI_FROM_PTR_EDI_(VALUE) cmp si, word ptr [edi + VALUE]
#define CMP_SI_FROM_PTR_ESI_(VALUE) cmp si, word ptr [esi + VALUE]
#define CMP_SI_FROM_PTR_EBP_(VALUE) cmp si, word ptr [ebp + VALUE]
#define CMP_SI_FROM_PTR_ESP_(VALUE) cmp si, word ptr [esp + VALUE]

#define CMP_BP_FROM_PTR_RAX_(VALUE) cmp bp, word ptr [rax + VALUE]
#define CMP_BP_FROM_PTR_RBX_(VALUE) cmp bp, word ptr [rbx + VALUE]
#define CMP_BP_FROM_PTR_RCX_(VALUE) cmp bp, word ptr [rcx + VALUE]
#define CMP_BP_FROM_PTR_RDX_(VALUE) cmp bp, word ptr [rdx + VALUE]
#define CMP_BP_FROM_PTR_RDI_(VALUE) cmp bp, word ptr [rdi + VALUE]
#define CMP_BP_FROM_PTR_RSI_(VALUE) cmp bp, word ptr [rsi + VALUE]
#define CMP_BP_FROM_PTR_RBP_(VALUE) cmp bp, word ptr [rbp + VALUE]
#define CMP_BP_FROM_PTR_RSP_(VALUE) cmp bp, word ptr [rsp + VALUE]
#define CMP_BP_FROM_PTR_R8_(VALUE) cmp bp, word ptr [r8 + VALUE]
#define CMP_BP_FROM_PTR_R9_(VALUE) cmp bp, word ptr [r9 + VALUE]
#define CMP_BP_FROM_PTR_R10_(VALUE) cmp bp, word ptr [r10 + VALUE]
#define CMP_BP_FROM_PTR_R11_(VALUE) cmp bp, word ptr [r11 + VALUE]
#define CMP_BP_FROM_PTR_R12_(VALUE) cmp bp, word ptr [r12 + VALUE]
#define CMP_BP_FROM_PTR_R13_(VALUE) cmp bp, word ptr [r13 + VALUE]
#define CMP_BP_FROM_PTR_R14_(VALUE) cmp bp, word ptr [r14 + VALUE]
#define CMP_BP_FROM_PTR_R15_(VALUE) cmp bp, word ptr [r15 + VALUE]
#define CMP_BP_FROM_PTR_EAX_(VALUE) cmp bp, word ptr [eax + VALUE]
#define CMP_BP_FROM_PTR_EBX_(VALUE) cmp bp, word ptr [ebx + VALUE]
#define CMP_BP_FROM_PTR_ECX_(VALUE) cmp bp, word ptr [ecx + VALUE]
#define CMP_BP_FROM_PTR_EDX_(VALUE) cmp bp, word ptr [edx + VALUE]
#define CMP_BP_FROM_PTR_EDI_(VALUE) cmp bp, word ptr [edi + VALUE]
#define CMP_BP_FROM_PTR_ESI_(VALUE) cmp bp, word ptr [esi + VALUE]
#define CMP_BP_FROM_PTR_EBP_(VALUE) cmp bp, word ptr [ebp + VALUE]
#define CMP_BP_FROM_PTR_ESP_(VALUE) cmp bp, word ptr [esp + VALUE]

#define CMP_SP_FROM_PTR_RAX_(VALUE) cmp sp, word ptr [rax + VALUE]
#define CMP_SP_FROM_PTR_RBX_(VALUE) cmp sp, word ptr [rbx + VALUE]
#define CMP_SP_FROM_PTR_RCX_(VALUE) cmp sp, word ptr [rcx + VALUE]
#define CMP_SP_FROM_PTR_RDX_(VALUE) cmp sp, word ptr [rdx + VALUE]
#define CMP_SP_FROM_PTR_RDI_(VALUE) cmp sp, word ptr [rdi + VALUE]
#define CMP_SP_FROM_PTR_RSI_(VALUE) cmp sp, word ptr [rsi + VALUE]
#define CMP_SP_FROM_PTR_RBP_(VALUE) cmp sp, word ptr [rbp + VALUE]
#define CMP_SP_FROM_PTR_RSP_(VALUE) cmp sp, word ptr [rsp + VALUE]
#define CMP_SP_FROM_PTR_R8_(VALUE) cmp sp, word ptr [r8 + VALUE]
#define CMP_SP_FROM_PTR_R9_(VALUE) cmp sp, word ptr [r9 + VALUE]
#define CMP_SP_FROM_PTR_R10_(VALUE) cmp sp, word ptr [r10 + VALUE]
#define CMP_SP_FROM_PTR_R11_(VALUE) cmp sp, word ptr [r11 + VALUE]
#define CMP_SP_FROM_PTR_R12_(VALUE) cmp sp, word ptr [r12 + VALUE]
#define CMP_SP_FROM_PTR_R13_(VALUE) cmp sp, word ptr [r13 + VALUE]
#define CMP_SP_FROM_PTR_R14_(VALUE) cmp sp, word ptr [r14 + VALUE]
#define CMP_SP_FROM_PTR_R15_(VALUE) cmp sp, word ptr [r15 + VALUE]
#define CMP_SP_FROM_PTR_EAX_(VALUE) cmp sp, word ptr [eax + VALUE]
#define CMP_SP_FROM_PTR_EBX_(VALUE) cmp sp, word ptr [ebx + VALUE]
#define CMP_SP_FROM_PTR_ECX_(VALUE) cmp sp, word ptr [ecx + VALUE]
#define CMP_SP_FROM_PTR_EDX_(VALUE) cmp sp, word ptr [edx + VALUE]
#define CMP_SP_FROM_PTR_EDI_(VALUE) cmp sp, word ptr [edi + VALUE]
#define CMP_SP_FROM_PTR_ESI_(VALUE) cmp sp, word ptr [esi + VALUE]
#define CMP_SP_FROM_PTR_EBP_(VALUE) cmp sp, word ptr [ebp + VALUE]
#define CMP_SP_FROM_PTR_ESP_(VALUE) cmp sp, word ptr [esp + VALUE]

#define CMP_R8W_FROM_PTR_RAX_(VALUE) cmp r8w, word ptr [rax + VALUE]
#define CMP_R8W_FROM_PTR_RBX_(VALUE) cmp r8w, word ptr [rbx + VALUE]
#define CMP_R8W_FROM_PTR_RCX_(VALUE) cmp r8w, word ptr [rcx + VALUE]
#define CMP_R8W_FROM_PTR_RDX_(VALUE) cmp r8w, word ptr [rdx + VALUE]
#define CMP_R8W_FROM_PTR_RDI_(VALUE) cmp r8w, word ptr [rdi + VALUE]
#define CMP_R8W_FROM_PTR_RSI_(VALUE) cmp r8w, word ptr [rsi + VALUE]
#define CMP_R8W_FROM_PTR_RBP_(VALUE) cmp r8w, word ptr [rbp + VALUE]
#define CMP_R8W_FROM_PTR_RSP_(VALUE) cmp r8w, word ptr [rsp + VALUE]
#define CMP_R8W_FROM_PTR_R8_(VALUE) cmp r8w, word ptr [r8 + VALUE]
#define CMP_R8W_FROM_PTR_R9_(VALUE) cmp r8w, word ptr [r9 + VALUE]
#define CMP_R8W_FROM_PTR_R10_(VALUE) cmp r8w, word ptr [r10 + VALUE]
#define CMP_R8W_FROM_PTR_R11_(VALUE) cmp r8w, word ptr [r11 + VALUE]
#define CMP_R8W_FROM_PTR_R12_(VALUE) cmp r8w, word ptr [r12 + VALUE]
#define CMP_R8W_FROM_PTR_R13_(VALUE) cmp r8w, word ptr [r13 + VALUE]
#define CMP_R8W_FROM_PTR_R14_(VALUE) cmp r8w, word ptr [r14 + VALUE]
#define CMP_R8W_FROM_PTR_R15_(VALUE) cmp r8w, word ptr [r15 + VALUE]
#define CMP_R8W_FROM_PTR_EAX_(VALUE) cmp r8w, word ptr [eax + VALUE]
#define CMP_R8W_FROM_PTR_EBX_(VALUE) cmp r8w, word ptr [ebx + VALUE]
#define CMP_R8W_FROM_PTR_ECX_(VALUE) cmp r8w, word ptr [ecx + VALUE]
#define CMP_R8W_FROM_PTR_EDX_(VALUE) cmp r8w, word ptr [edx + VALUE]
#define CMP_R8W_FROM_PTR_EDI_(VALUE) cmp r8w, word ptr [edi + VALUE]
#define CMP_R8W_FROM_PTR_ESI_(VALUE) cmp r8w, word ptr [esi + VALUE]
#define CMP_R8W_FROM_PTR_EBP_(VALUE) cmp r8w, word ptr [ebp + VALUE]
#define CMP_R8W_FROM_PTR_ESP_(VALUE) cmp r8w, word ptr [esp + VALUE]

#define CMP_R9W_FROM_PTR_RAX_(VALUE) cmp r9w, word ptr [rax + VALUE]
#define CMP_R9W_FROM_PTR_RBX_(VALUE) cmp r9w, word ptr [rbx + VALUE]
#define CMP_R9W_FROM_PTR_RCX_(VALUE) cmp r9w, word ptr [rcx + VALUE]
#define CMP_R9W_FROM_PTR_RDX_(VALUE) cmp r9w, word ptr [rdx + VALUE]
#define CMP_R9W_FROM_PTR_RDI_(VALUE) cmp r9w, word ptr [rdi + VALUE]
#define CMP_R9W_FROM_PTR_RSI_(VALUE) cmp r9w, word ptr [rsi + VALUE]
#define CMP_R9W_FROM_PTR_RBP_(VALUE) cmp r9w, word ptr [rbp + VALUE]
#define CMP_R9W_FROM_PTR_RSP_(VALUE) cmp r9w, word ptr [rsp + VALUE]
#define CMP_R9W_FROM_PTR_R8_(VALUE) cmp r9w, word ptr [r8 + VALUE]
#define CMP_R9W_FROM_PTR_R9_(VALUE) cmp r9w, word ptr [r9 + VALUE]
#define CMP_R9W_FROM_PTR_R10_(VALUE) cmp r9w, word ptr [r10 + VALUE]
#define CMP_R9W_FROM_PTR_R11_(VALUE) cmp r9w, word ptr [r11 + VALUE]
#define CMP_R9W_FROM_PTR_R12_(VALUE) cmp r9w, word ptr [r12 + VALUE]
#define CMP_R9W_FROM_PTR_R13_(VALUE) cmp r9w, word ptr [r13 + VALUE]
#define CMP_R9W_FROM_PTR_R14_(VALUE) cmp r9w, word ptr [r14 + VALUE]
#define CMP_R9W_FROM_PTR_R15_(VALUE) cmp r9w, word ptr [r15 + VALUE]
#define CMP_R9W_FROM_PTR_EAX_(VALUE) cmp r9w, word ptr [eax + VALUE]
#define CMP_R9W_FROM_PTR_EBX_(VALUE) cmp r9w, word ptr [ebx + VALUE]
#define CMP_R9W_FROM_PTR_ECX_(VALUE) cmp r9w, word ptr [ecx + VALUE]
#define CMP_R9W_FROM_PTR_EDX_(VALUE) cmp r9w, word ptr [edx + VALUE]
#define CMP_R9W_FROM_PTR_EDI_(VALUE) cmp r9w, word ptr [edi + VALUE]
#define CMP_R9W_FROM_PTR_ESI_(VALUE) cmp r9w, word ptr [esi + VALUE]
#define CMP_R9W_FROM_PTR_EBP_(VALUE) cmp r9w, word ptr [ebp + VALUE]
#define CMP_R9W_FROM_PTR_ESP_(VALUE) cmp r9w, word ptr [esp + VALUE]

#define CMP_R10W_FROM_PTR_RAX_(VALUE) cmp r10w, word ptr [rax + VALUE]
#define CMP_R10W_FROM_PTR_RBX_(VALUE) cmp r10w, word ptr [rbx + VALUE]
#define CMP_R10W_FROM_PTR_RCX_(VALUE) cmp r10w, word ptr [rcx + VALUE]
#define CMP_R10W_FROM_PTR_RDX_(VALUE) cmp r10w, word ptr [rdx + VALUE]
#define CMP_R10W_FROM_PTR_RDI_(VALUE) cmp r10w, word ptr [rdi + VALUE]
#define CMP_R10W_FROM_PTR_RSI_(VALUE) cmp r10w, word ptr [rsi + VALUE]
#define CMP_R10W_FROM_PTR_RBP_(VALUE) cmp r10w, word ptr [rbp + VALUE]
#define CMP_R10W_FROM_PTR_RSP_(VALUE) cmp r10w, word ptr [rsp + VALUE]
#define CMP_R10W_FROM_PTR_R8_(VALUE) cmp r10w, word ptr [r8 + VALUE]
#define CMP_R10W_FROM_PTR_R9_(VALUE) cmp r10w, word ptr [r9 + VALUE]
#define CMP_R10W_FROM_PTR_R10_(VALUE) cmp r10w, word ptr [r10 + VALUE]
#define CMP_R10W_FROM_PTR_R11_(VALUE) cmp r10w, word ptr [r11 + VALUE]
#define CMP_R10W_FROM_PTR_R12_(VALUE) cmp r10w, word ptr [r12 + VALUE]
#define CMP_R10W_FROM_PTR_R13_(VALUE) cmp r10w, word ptr [r13 + VALUE]
#define CMP_R10W_FROM_PTR_R14_(VALUE) cmp r10w, word ptr [r14 + VALUE]
#define CMP_R10W_FROM_PTR_R15_(VALUE) cmp r10w, word ptr [r15 + VALUE]
#define CMP_R10W_FROM_PTR_EAX_(VALUE) cmp r10w, word ptr [eax + VALUE]
#define CMP_R10W_FROM_PTR_EBX_(VALUE) cmp r10w, word ptr [ebx + VALUE]
#define CMP_R10W_FROM_PTR_ECX_(VALUE) cmp r10w, word ptr [ecx + VALUE]
#define CMP_R10W_FROM_PTR_EDX_(VALUE) cmp r10w, word ptr [edx + VALUE]
#define CMP_R10W_FROM_PTR_EDI_(VALUE) cmp r10w, word ptr [edi + VALUE]
#define CMP_R10W_FROM_PTR_ESI_(VALUE) cmp r10w, word ptr [esi + VALUE]
#define CMP_R10W_FROM_PTR_EBP_(VALUE) cmp r10w, word ptr [ebp + VALUE]
#define CMP_R10W_FROM_PTR_ESP_(VALUE) cmp r10w, word ptr [esp + VALUE]

#define CMP_R11W_FROM_PTR_RAX_(VALUE) cmp r11w, word ptr [rax + VALUE]
#define CMP_R11W_FROM_PTR_RBX_(VALUE) cmp r11w, word ptr [rbx + VALUE]
#define CMP_R11W_FROM_PTR_RCX_(VALUE) cmp r11w, word ptr [rcx + VALUE]
#define CMP_R11W_FROM_PTR_RDX_(VALUE) cmp r11w, word ptr [rdx + VALUE]
#define CMP_R11W_FROM_PTR_RDI_(VALUE) cmp r11w, word ptr [rdi + VALUE]
#define CMP_R11W_FROM_PTR_RSI_(VALUE) cmp r11w, word ptr [rsi + VALUE]
#define CMP_R11W_FROM_PTR_RBP_(VALUE) cmp r11w, word ptr [rbp + VALUE]
#define CMP_R11W_FROM_PTR_RSP_(VALUE) cmp r11w, word ptr [rsp + VALUE]
#define CMP_R11W_FROM_PTR_R8_(VALUE) cmp r11w, word ptr [r8 + VALUE]
#define CMP_R11W_FROM_PTR_R9_(VALUE) cmp r11w, word ptr [r9 + VALUE]
#define CMP_R11W_FROM_PTR_R10_(VALUE) cmp r11w, word ptr [r10 + VALUE]
#define CMP_R11W_FROM_PTR_R11_(VALUE) cmp r11w, word ptr [r11 + VALUE]
#define CMP_R11W_FROM_PTR_R12_(VALUE) cmp r11w, word ptr [r12 + VALUE]
#define CMP_R11W_FROM_PTR_R13_(VALUE) cmp r11w, word ptr [r13 + VALUE]
#define CMP_R11W_FROM_PTR_R14_(VALUE) cmp r11w, word ptr [r14 + VALUE]
#define CMP_R11W_FROM_PTR_R15_(VALUE) cmp r11w, word ptr [r15 + VALUE]
#define CMP_R11W_FROM_PTR_EAX_(VALUE) cmp r11w, word ptr [eax + VALUE]
#define CMP_R11W_FROM_PTR_EBX_(VALUE) cmp r11w, word ptr [ebx + VALUE]
#define CMP_R11W_FROM_PTR_ECX_(VALUE) cmp r11w, word ptr [ecx + VALUE]
#define CMP_R11W_FROM_PTR_EDX_(VALUE) cmp r11w, word ptr [edx + VALUE]
#define CMP_R11W_FROM_PTR_EDI_(VALUE) cmp r11w, word ptr [edi + VALUE]
#define CMP_R11W_FROM_PTR_ESI_(VALUE) cmp r11w, word ptr [esi + VALUE]
#define CMP_R11W_FROM_PTR_EBP_(VALUE) cmp r11w, word ptr [ebp + VALUE]
#define CMP_R11W_FROM_PTR_ESP_(VALUE) cmp r11w, word ptr [esp + VALUE]

#define CMP_R12W_FROM_PTR_RAX_(VALUE) cmp r12w, word ptr [rax + VALUE]
#define CMP_R12W_FROM_PTR_RBX_(VALUE) cmp r12w, word ptr [rbx + VALUE]
#define CMP_R12W_FROM_PTR_RCX_(VALUE) cmp r12w, word ptr [rcx + VALUE]
#define CMP_R12W_FROM_PTR_RDX_(VALUE) cmp r12w, word ptr [rdx + VALUE]
#define CMP_R12W_FROM_PTR_RDI_(VALUE) cmp r12w, word ptr [rdi + VALUE]
#define CMP_R12W_FROM_PTR_RSI_(VALUE) cmp r12w, word ptr [rsi + VALUE]
#define CMP_R12W_FROM_PTR_RBP_(VALUE) cmp r12w, word ptr [rbp + VALUE]
#define CMP_R12W_FROM_PTR_RSP_(VALUE) cmp r12w, word ptr [rsp + VALUE]
#define CMP_R12W_FROM_PTR_R8_(VALUE) cmp r12w, word ptr [r8 + VALUE]
#define CMP_R12W_FROM_PTR_R9_(VALUE) cmp r12w, word ptr [r9 + VALUE]
#define CMP_R12W_FROM_PTR_R10_(VALUE) cmp r12w, word ptr [r10 + VALUE]
#define CMP_R12W_FROM_PTR_R11_(VALUE) cmp r12w, word ptr [r11 + VALUE]
#define CMP_R12W_FROM_PTR_R12_(VALUE) cmp r12w, word ptr [r12 + VALUE]
#define CMP_R12W_FROM_PTR_R13_(VALUE) cmp r12w, word ptr [r13 + VALUE]
#define CMP_R12W_FROM_PTR_R14_(VALUE) cmp r12w, word ptr [r14 + VALUE]
#define CMP_R12W_FROM_PTR_R15_(VALUE) cmp r12w, word ptr [r15 + VALUE]
#define CMP_R12W_FROM_PTR_EAX_(VALUE) cmp r12w, word ptr [eax + VALUE]
#define CMP_R12W_FROM_PTR_EBX_(VALUE) cmp r12w, word ptr [ebx + VALUE]
#define CMP_R12W_FROM_PTR_ECX_(VALUE) cmp r12w, word ptr [ecx + VALUE]
#define CMP_R12W_FROM_PTR_EDX_(VALUE) cmp r12w, word ptr [edx + VALUE]
#define CMP_R12W_FROM_PTR_EDI_(VALUE) cmp r12w, word ptr [edi + VALUE]
#define CMP_R12W_FROM_PTR_ESI_(VALUE) cmp r12w, word ptr [esi + VALUE]
#define CMP_R12W_FROM_PTR_EBP_(VALUE) cmp r12w, word ptr [ebp + VALUE]
#define CMP_R12W_FROM_PTR_ESP_(VALUE) cmp r12w, word ptr [esp + VALUE]

#define CMP_R13W_FROM_PTR_RAX_(VALUE) cmp r13w, word ptr [rax + VALUE]
#define CMP_R13W_FROM_PTR_RBX_(VALUE) cmp r13w, word ptr [rbx + VALUE]
#define CMP_R13W_FROM_PTR_RCX_(VALUE) cmp r13w, word ptr [rcx + VALUE]
#define CMP_R13W_FROM_PTR_RDX_(VALUE) cmp r13w, word ptr [rdx + VALUE]
#define CMP_R13W_FROM_PTR_RDI_(VALUE) cmp r13w, word ptr [rdi + VALUE]
#define CMP_R13W_FROM_PTR_RSI_(VALUE) cmp r13w, word ptr [rsi + VALUE]
#define CMP_R13W_FROM_PTR_RBP_(VALUE) cmp r13w, word ptr [rbp + VALUE]
#define CMP_R13W_FROM_PTR_RSP_(VALUE) cmp r13w, word ptr [rsp + VALUE]
#define CMP_R13W_FROM_PTR_R8_(VALUE) cmp r13w, word ptr [r8 + VALUE]
#define CMP_R13W_FROM_PTR_R9_(VALUE) cmp r13w, word ptr [r9 + VALUE]
#define CMP_R13W_FROM_PTR_R10_(VALUE) cmp r13w, word ptr [r10 + VALUE]
#define CMP_R13W_FROM_PTR_R11_(VALUE) cmp r13w, word ptr [r11 + VALUE]
#define CMP_R13W_FROM_PTR_R12_(VALUE) cmp r13w, word ptr [r12 + VALUE]
#define CMP_R13W_FROM_PTR_R13_(VALUE) cmp r13w, word ptr [r13 + VALUE]
#define CMP_R13W_FROM_PTR_R14_(VALUE) cmp r13w, word ptr [r14 + VALUE]
#define CMP_R13W_FROM_PTR_R15_(VALUE) cmp r13w, word ptr [r15 + VALUE]
#define CMP_R13W_FROM_PTR_EAX_(VALUE) cmp r13w, word ptr [eax + VALUE]
#define CMP_R13W_FROM_PTR_EBX_(VALUE) cmp r13w, word ptr [ebx + VALUE]
#define CMP_R13W_FROM_PTR_ECX_(VALUE) cmp r13w, word ptr [ecx + VALUE]
#define CMP_R13W_FROM_PTR_EDX_(VALUE) cmp r13w, word ptr [edx + VALUE]
#define CMP_R13W_FROM_PTR_EDI_(VALUE) cmp r13w, word ptr [edi + VALUE]
#define CMP_R13W_FROM_PTR_ESI_(VALUE) cmp r13w, word ptr [esi + VALUE]
#define CMP_R13W_FROM_PTR_EBP_(VALUE) cmp r13w, word ptr [ebp + VALUE]
#define CMP_R13W_FROM_PTR_ESP_(VALUE) cmp r13w, word ptr [esp + VALUE]

#define CMP_R14W_FROM_PTR_RAX_(VALUE) cmp r14w, word ptr [rax + VALUE]
#define CMP_R14W_FROM_PTR_RBX_(VALUE) cmp r14w, word ptr [rbx + VALUE]
#define CMP_R14W_FROM_PTR_RCX_(VALUE) cmp r14w, word ptr [rcx + VALUE]
#define CMP_R14W_FROM_PTR_RDX_(VALUE) cmp r14w, word ptr [rdx + VALUE]
#define CMP_R14W_FROM_PTR_RDI_(VALUE) cmp r14w, word ptr [rdi + VALUE]
#define CMP_R14W_FROM_PTR_RSI_(VALUE) cmp r14w, word ptr [rsi + VALUE]
#define CMP_R14W_FROM_PTR_RBP_(VALUE) cmp r14w, word ptr [rbp + VALUE]
#define CMP_R14W_FROM_PTR_RSP_(VALUE) cmp r14w, word ptr [rsp + VALUE]
#define CMP_R14W_FROM_PTR_R8_(VALUE) cmp r14w, word ptr [r8 + VALUE]
#define CMP_R14W_FROM_PTR_R9_(VALUE) cmp r14w, word ptr [r9 + VALUE]
#define CMP_R14W_FROM_PTR_R10_(VALUE) cmp r14w, word ptr [r10 + VALUE]
#define CMP_R14W_FROM_PTR_R11_(VALUE) cmp r14w, word ptr [r11 + VALUE]
#define CMP_R14W_FROM_PTR_R12_(VALUE) cmp r14w, word ptr [r12 + VALUE]
#define CMP_R14W_FROM_PTR_R13_(VALUE) cmp r14w, word ptr [r13 + VALUE]
#define CMP_R14W_FROM_PTR_R14_(VALUE) cmp r14w, word ptr [r14 + VALUE]
#define CMP_R14W_FROM_PTR_R15_(VALUE) cmp r14w, word ptr [r15 + VALUE]
#define CMP_R14W_FROM_PTR_EAX_(VALUE) cmp r14w, word ptr [eax + VALUE]
#define CMP_R14W_FROM_PTR_EBX_(VALUE) cmp r14w, word ptr [ebx + VALUE]
#define CMP_R14W_FROM_PTR_ECX_(VALUE) cmp r14w, word ptr [ecx + VALUE]
#define CMP_R14W_FROM_PTR_EDX_(VALUE) cmp r14w, word ptr [edx + VALUE]
#define CMP_R14W_FROM_PTR_EDI_(VALUE) cmp r14w, word ptr [edi + VALUE]
#define CMP_R14W_FROM_PTR_ESI_(VALUE) cmp r14w, word ptr [esi + VALUE]
#define CMP_R14W_FROM_PTR_EBP_(VALUE) cmp r14w, word ptr [ebp + VALUE]
#define CMP_R14W_FROM_PTR_ESP_(VALUE) cmp r14w, word ptr [esp + VALUE]

#define CMP_R15W_FROM_PTR_RAX_(VALUE) cmp r15w, word ptr [rax + VALUE]
#define CMP_R15W_FROM_PTR_RBX_(VALUE) cmp r15w, word ptr [rbx + VALUE]
#define CMP_R15W_FROM_PTR_RCX_(VALUE) cmp r15w, word ptr [rcx + VALUE]
#define CMP_R15W_FROM_PTR_RDX_(VALUE) cmp r15w, word ptr [rdx + VALUE]
#define CMP_R15W_FROM_PTR_RDI_(VALUE) cmp r15w, word ptr [rdi + VALUE]
#define CMP_R15W_FROM_PTR_RSI_(VALUE) cmp r15w, word ptr [rsi + VALUE]
#define CMP_R15W_FROM_PTR_RBP_(VALUE) cmp r15w, word ptr [rbp + VALUE]
#define CMP_R15W_FROM_PTR_RSP_(VALUE) cmp r15w, word ptr [rsp + VALUE]
#define CMP_R15W_FROM_PTR_R8_(VALUE) cmp r15w, word ptr [r8 + VALUE]
#define CMP_R15W_FROM_PTR_R9_(VALUE) cmp r15w, word ptr [r9 + VALUE]
#define CMP_R15W_FROM_PTR_R10_(VALUE) cmp r15w, word ptr [r10 + VALUE]
#define CMP_R15W_FROM_PTR_R11_(VALUE) cmp r15w, word ptr [r11 + VALUE]
#define CMP_R15W_FROM_PTR_R12_(VALUE) cmp r15w, word ptr [r12 + VALUE]
#define CMP_R15W_FROM_PTR_R13_(VALUE) cmp r15w, word ptr [r13 + VALUE]
#define CMP_R15W_FROM_PTR_R14_(VALUE) cmp r15w, word ptr [r14 + VALUE]
#define CMP_R15W_FROM_PTR_R15_(VALUE) cmp r15w, word ptr [r15 + VALUE]
#define CMP_R15W_FROM_PTR_EAX_(VALUE) cmp r15w, word ptr [eax + VALUE]
#define CMP_R15W_FROM_PTR_EBX_(VALUE) cmp r15w, word ptr [ebx + VALUE]
#define CMP_R15W_FROM_PTR_ECX_(VALUE) cmp r15w, word ptr [ecx + VALUE]
#define CMP_R15W_FROM_PTR_EDX_(VALUE) cmp r15w, word ptr [edx + VALUE]
#define CMP_R15W_FROM_PTR_EDI_(VALUE) cmp r15w, word ptr [edi + VALUE]
#define CMP_R15W_FROM_PTR_ESI_(VALUE) cmp r15w, word ptr [esi + VALUE]
#define CMP_R15W_FROM_PTR_EBP_(VALUE) cmp r15w, word ptr [ebp + VALUE]
#define CMP_R15W_FROM_PTR_ESP_(VALUE) cmp r15w, word ptr [esp + VALUE]

#define CMP_AX_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], ax
#define CMP_AX_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], ax
#define CMP_AX_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], ax
#define CMP_AX_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], ax
#define CMP_AX_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], ax
#define CMP_AX_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], ax
#define CMP_AX_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], ax
#define CMP_AX_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], ax
#define CMP_AX_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], ax
#define CMP_AX_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], ax
#define CMP_AX_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], ax
#define CMP_AX_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], ax
#define CMP_AX_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], ax
#define CMP_AX_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], ax
#define CMP_AX_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], ax
#define CMP_AX_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], ax
#define CMP_AX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], ax
#define CMP_AX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], ax
#define CMP_AX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], ax
#define CMP_AX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], ax
#define CMP_AX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], ax
#define CMP_AX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], ax
#define CMP_AX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], ax
#define CMP_AX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], ax

#define CMP_BX_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], bx
#define CMP_BX_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], bx
#define CMP_BX_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], bx
#define CMP_BX_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], bx
#define CMP_BX_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], bx
#define CMP_BX_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], bx
#define CMP_BX_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], bx
#define CMP_BX_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], bx
#define CMP_BX_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], bx
#define CMP_BX_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], bx
#define CMP_BX_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], bx
#define CMP_BX_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], bx
#define CMP_BX_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], bx
#define CMP_BX_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], bx
#define CMP_BX_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], bx
#define CMP_BX_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], bx
#define CMP_BX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], bx
#define CMP_BX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], bx
#define CMP_BX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], bx
#define CMP_BX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], bx
#define CMP_BX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], bx
#define CMP_BX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], bx
#define CMP_BX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], bx
#define CMP_BX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], bx

#define CMP_CX_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], cx
#define CMP_CX_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], cx
#define CMP_CX_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], cx
#define CMP_CX_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], cx
#define CMP_CX_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], cx
#define CMP_CX_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], cx
#define CMP_CX_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], cx
#define CMP_CX_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], cx
#define CMP_CX_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], cx
#define CMP_CX_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], cx
#define CMP_CX_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], cx
#define CMP_CX_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], cx
#define CMP_CX_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], cx
#define CMP_CX_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], cx
#define CMP_CX_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], cx
#define CMP_CX_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], cx
#define CMP_CX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], cx
#define CMP_CX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], cx
#define CMP_CX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], cx
#define CMP_CX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], cx
#define CMP_CX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], cx
#define CMP_CX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], cx
#define CMP_CX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], cx
#define CMP_CX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], cx

#define CMP_DX_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], dx
#define CMP_DX_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], dx
#define CMP_DX_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], dx
#define CMP_DX_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], dx
#define CMP_DX_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], dx
#define CMP_DX_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], dx
#define CMP_DX_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], dx
#define CMP_DX_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], dx
#define CMP_DX_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], dx
#define CMP_DX_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], dx
#define CMP_DX_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], dx
#define CMP_DX_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], dx
#define CMP_DX_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], dx
#define CMP_DX_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], dx
#define CMP_DX_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], dx
#define CMP_DX_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], dx
#define CMP_DX_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], dx
#define CMP_DX_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], dx
#define CMP_DX_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], dx
#define CMP_DX_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], dx
#define CMP_DX_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], dx
#define CMP_DX_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], dx
#define CMP_DX_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], dx
#define CMP_DX_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], dx

#define CMP_DI_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], di
#define CMP_DI_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], di
#define CMP_DI_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], di
#define CMP_DI_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], di
#define CMP_DI_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], di
#define CMP_DI_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], di
#define CMP_DI_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], di
#define CMP_DI_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], di
#define CMP_DI_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], di
#define CMP_DI_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], di
#define CMP_DI_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], di
#define CMP_DI_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], di
#define CMP_DI_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], di
#define CMP_DI_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], di
#define CMP_DI_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], di
#define CMP_DI_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], di
#define CMP_DI_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], di
#define CMP_DI_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], di
#define CMP_DI_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], di
#define CMP_DI_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], di
#define CMP_DI_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], di
#define CMP_DI_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], di
#define CMP_DI_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], di
#define CMP_DI_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], di

#define CMP_SI_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], si
#define CMP_SI_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], si
#define CMP_SI_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], si
#define CMP_SI_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], si
#define CMP_SI_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], si
#define CMP_SI_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], si
#define CMP_SI_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], si
#define CMP_SI_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], si
#define CMP_SI_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], si
#define CMP_SI_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], si
#define CMP_SI_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], si
#define CMP_SI_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], si
#define CMP_SI_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], si
#define CMP_SI_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], si
#define CMP_SI_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], si
#define CMP_SI_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], si
#define CMP_SI_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], si
#define CMP_SI_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], si
#define CMP_SI_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], si
#define CMP_SI_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], si
#define CMP_SI_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], si
#define CMP_SI_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], si
#define CMP_SI_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], si
#define CMP_SI_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], si

#define CMP_BP_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], bp
#define CMP_BP_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], bp
#define CMP_BP_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], bp
#define CMP_BP_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], bp
#define CMP_BP_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], bp
#define CMP_BP_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], bp
#define CMP_BP_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], bp
#define CMP_BP_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], bp
#define CMP_BP_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], bp
#define CMP_BP_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], bp
#define CMP_BP_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], bp
#define CMP_BP_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], bp
#define CMP_BP_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], bp
#define CMP_BP_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], bp
#define CMP_BP_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], bp
#define CMP_BP_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], bp
#define CMP_BP_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], bp
#define CMP_BP_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], bp
#define CMP_BP_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], bp
#define CMP_BP_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], bp
#define CMP_BP_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], bp
#define CMP_BP_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], bp
#define CMP_BP_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], bp
#define CMP_BP_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], bp

#define CMP_SP_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], sp
#define CMP_SP_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], sp
#define CMP_SP_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], sp
#define CMP_SP_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], sp
#define CMP_SP_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], sp
#define CMP_SP_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], sp
#define CMP_SP_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], sp
#define CMP_SP_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], sp
#define CMP_SP_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], sp
#define CMP_SP_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], sp
#define CMP_SP_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], sp
#define CMP_SP_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], sp
#define CMP_SP_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], sp
#define CMP_SP_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], sp
#define CMP_SP_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], sp
#define CMP_SP_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], sp
#define CMP_SP_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], sp
#define CMP_SP_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], sp
#define CMP_SP_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], sp
#define CMP_SP_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], sp
#define CMP_SP_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], sp
#define CMP_SP_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], sp
#define CMP_SP_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], sp
#define CMP_SP_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], sp

#define CMP_R8W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r8w
#define CMP_R8W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r8w
#define CMP_R8W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r8w
#define CMP_R8W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r8w
#define CMP_R8W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r8w
#define CMP_R8W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r8w
#define CMP_R8W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r8w
#define CMP_R8W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r8w
#define CMP_R8W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r8w
#define CMP_R8W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r8w
#define CMP_R8W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r8w
#define CMP_R8W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r8w
#define CMP_R8W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r8w
#define CMP_R8W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r8w
#define CMP_R8W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r8w
#define CMP_R8W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r8w
#define CMP_R8W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r8w
#define CMP_R8W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r8w
#define CMP_R8W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r8w
#define CMP_R8W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r8w
#define CMP_R8W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r8w
#define CMP_R8W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r8w
#define CMP_R8W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r8w
#define CMP_R8W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r8w

#define CMP_R9W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r9w
#define CMP_R9W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r9w
#define CMP_R9W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r9w
#define CMP_R9W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r9w
#define CMP_R9W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r9w
#define CMP_R9W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r9w
#define CMP_R9W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r9w
#define CMP_R9W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r9w
#define CMP_R9W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r9w
#define CMP_R9W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r9w
#define CMP_R9W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r9w
#define CMP_R9W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r9w
#define CMP_R9W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r9w
#define CMP_R9W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r9w
#define CMP_R9W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r9w
#define CMP_R9W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r9w
#define CMP_R9W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r9w
#define CMP_R9W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r9w
#define CMP_R9W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r9w
#define CMP_R9W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r9w
#define CMP_R9W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r9w
#define CMP_R9W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r9w
#define CMP_R9W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r9w
#define CMP_R9W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r9w

#define CMP_R10W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r10w
#define CMP_R10W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r10w
#define CMP_R10W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r10w
#define CMP_R10W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r10w
#define CMP_R10W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r10w
#define CMP_R10W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r10w
#define CMP_R10W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r10w
#define CMP_R10W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r10w
#define CMP_R10W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r10w
#define CMP_R10W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r10w
#define CMP_R10W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r10w
#define CMP_R10W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r10w
#define CMP_R10W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r10w
#define CMP_R10W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r10w
#define CMP_R10W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r10w
#define CMP_R10W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r10w
#define CMP_R10W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r10w
#define CMP_R10W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r10w
#define CMP_R10W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r10w
#define CMP_R10W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r10w
#define CMP_R10W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r10w
#define CMP_R10W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r10w
#define CMP_R10W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r10w
#define CMP_R10W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r10w

#define CMP_R11W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r11w
#define CMP_R11W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r11w
#define CMP_R11W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r11w
#define CMP_R11W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r11w
#define CMP_R11W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r11w
#define CMP_R11W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r11w
#define CMP_R11W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r11w
#define CMP_R11W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r11w
#define CMP_R11W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r11w
#define CMP_R11W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r11w
#define CMP_R11W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r11w
#define CMP_R11W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r11w
#define CMP_R11W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r11w
#define CMP_R11W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r11w
#define CMP_R11W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r11w
#define CMP_R11W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r11w
#define CMP_R11W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r11w
#define CMP_R11W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r11w
#define CMP_R11W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r11w
#define CMP_R11W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r11w
#define CMP_R11W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r11w
#define CMP_R11W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r11w
#define CMP_R11W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r11w
#define CMP_R11W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r11w

#define CMP_R12W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r12w
#define CMP_R12W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r12w
#define CMP_R12W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r12w
#define CMP_R12W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r12w
#define CMP_R12W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r12w
#define CMP_R12W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r12w
#define CMP_R12W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r12w
#define CMP_R12W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r12w
#define CMP_R12W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r12w
#define CMP_R12W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r12w
#define CMP_R12W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r12w
#define CMP_R12W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r12w
#define CMP_R12W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r12w
#define CMP_R12W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r12w
#define CMP_R12W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r12w
#define CMP_R12W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r12w
#define CMP_R12W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r12w
#define CMP_R12W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r12w
#define CMP_R12W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r12w
#define CMP_R12W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r12w
#define CMP_R12W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r12w
#define CMP_R12W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r12w
#define CMP_R12W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r12w
#define CMP_R12W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r12w

#define CMP_R13W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r13w
#define CMP_R13W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r13w
#define CMP_R13W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r13w
#define CMP_R13W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r13w
#define CMP_R13W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r13w
#define CMP_R13W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r13w
#define CMP_R13W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r13w
#define CMP_R13W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r13w
#define CMP_R13W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r13w
#define CMP_R13W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r13w
#define CMP_R13W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r13w
#define CMP_R13W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r13w
#define CMP_R13W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r13w
#define CMP_R13W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r13w
#define CMP_R13W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r13w
#define CMP_R13W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r13w
#define CMP_R13W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r13w
#define CMP_R13W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r13w
#define CMP_R13W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r13w
#define CMP_R13W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r13w
#define CMP_R13W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r13w
#define CMP_R13W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r13w
#define CMP_R13W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r13w
#define CMP_R13W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r13w

#define CMP_R14W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r14w
#define CMP_R14W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r14w
#define CMP_R14W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r14w
#define CMP_R14W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r14w
#define CMP_R14W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r14w
#define CMP_R14W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r14w
#define CMP_R14W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r14w
#define CMP_R14W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r14w
#define CMP_R14W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r14w
#define CMP_R14W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r14w
#define CMP_R14W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r14w
#define CMP_R14W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r14w
#define CMP_R14W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r14w
#define CMP_R14W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r14w
#define CMP_R14W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r14w
#define CMP_R14W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r14w
#define CMP_R14W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r14w
#define CMP_R14W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r14w
#define CMP_R14W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r14w
#define CMP_R14W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r14w
#define CMP_R14W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r14w
#define CMP_R14W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r14w
#define CMP_R14W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r14w
#define CMP_R14W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r14w

#define CMP_R15W_TO_PTR_RAX_(VALUE) cmp word ptr [rax + VALUE], r15w
#define CMP_R15W_TO_PTR_RBX_(VALUE) cmp word ptr [rbx + VALUE], r15w
#define CMP_R15W_TO_PTR_RCX_(VALUE) cmp word ptr [rcx + VALUE], r15w
#define CMP_R15W_TO_PTR_RDX_(VALUE) cmp word ptr [rdx + VALUE], r15w
#define CMP_R15W_TO_PTR_RDI_(VALUE) cmp word ptr [rdi + VALUE], r15w
#define CMP_R15W_TO_PTR_RSI_(VALUE) cmp word ptr [rsi + VALUE], r15w
#define CMP_R15W_TO_PTR_RBP_(VALUE) cmp word ptr [rbp + VALUE], r15w
#define CMP_R15W_TO_PTR_RSP_(VALUE) cmp word ptr [rsp + VALUE], r15w
#define CMP_R15W_TO_PTR_R8_(VALUE) cmp word ptr [r8 + VALUE], r15w
#define CMP_R15W_TO_PTR_R9_(VALUE) cmp word ptr [r9 + VALUE], r15w
#define CMP_R15W_TO_PTR_R10_(VALUE) cmp word ptr [r10 + VALUE], r15w
#define CMP_R15W_TO_PTR_R11_(VALUE) cmp word ptr [r11 + VALUE], r15w
#define CMP_R15W_TO_PTR_R12_(VALUE) cmp word ptr [r12 + VALUE], r15w
#define CMP_R15W_TO_PTR_R13_(VALUE) cmp word ptr [r13 + VALUE], r15w
#define CMP_R15W_TO_PTR_R14_(VALUE) cmp word ptr [r14 + VALUE], r15w
#define CMP_R15W_TO_PTR_R15_(VALUE) cmp word ptr [r15 + VALUE], r15w
#define CMP_R15W_TO_PTR_EAX_(VALUE) cmp word ptr [eax + VALUE], r15w
#define CMP_R15W_TO_PTR_EBX_(VALUE) cmp word ptr [ebx + VALUE], r15w
#define CMP_R15W_TO_PTR_ECX_(VALUE) cmp word ptr [ecx + VALUE], r15w
#define CMP_R15W_TO_PTR_EDX_(VALUE) cmp word ptr [edx + VALUE], r15w
#define CMP_R15W_TO_PTR_EDI_(VALUE) cmp word ptr [edi + VALUE], r15w
#define CMP_R15W_TO_PTR_ESI_(VALUE) cmp word ptr [esi + VALUE], r15w
#define CMP_R15W_TO_PTR_EBP_(VALUE) cmp word ptr [ebp + VALUE], r15w
#define CMP_R15W_TO_PTR_ESP_(VALUE) cmp word ptr [esp + VALUE], r15w
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
